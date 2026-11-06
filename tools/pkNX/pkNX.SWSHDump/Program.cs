using System.Collections.Concurrent;
using System.Security.Cryptography;
using System.Text;
using System.Text.Json;
using pkNX.Containers;
using pkNX.Structures;

namespace pkNX.SWSHDump;

/// <summary>Read-only Sword/Shield 1.3.2 secondary extractor. Never falls back to "copy=parsed".</summary>
internal static class Program
{
    private static readonly JsonSerializerOptions Json = new() { WriteIndented = true };
    private static readonly JsonSerializerOptions ReportJson = new();
    private sealed record Output(string Path, long Bytes, string Sha256);
    private sealed record Result(string Path, string Status, string Parser, string Sha256, long Bytes,
        Output[] Outputs, string? Error = null);

    public static int Main(string[] args)
    {
        if (args.Length != 4 || !int.TryParse(args[3], out int workers) || workers < 1 || workers > 8)
        {
            Console.Error.WriteLine("Usage: pkNX.SWSHDump <selection.tsv> <output-root> <report.jsonl> <workers:1-8>");
            return 2;
        }
        var selections = File.ReadLines(args[0]).Where(x => !string.IsNullOrWhiteSpace(x))
            .Select(x => x.Split('\t', 2)).ToArray();
        var outputRoot = Path.GetFullPath(args[1]);
        var report = Path.GetFullPath(args[2]);
        Directory.CreateDirectory(outputRoot);
        var results = new Result[selections.Length];
        Parallel.For(0, selections.Length, new ParallelOptions { MaxDegreeOfParallelism = workers }, i =>
        {
            var values = selections[i];
            results[i] = values.Length == 2
                ? Process(values[0], values[1], outputRoot)
                : new Result("INVALID", "FAILED", "selection", "", 0, [], "Bad TSV row");
        });
        Directory.CreateDirectory(Path.GetDirectoryName(report)!);
        var tmp = report + ".tmp";
        File.WriteAllLines(tmp, results.Select(x => JsonSerializer.Serialize(x, ReportJson)), new UTF8Encoding(false));
        File.Move(tmp, report, true);
        var counts = results.GroupBy(x => x.Status).ToDictionary(x => x.Key, x => x.Count());
        Console.WriteLine(JsonSerializer.Serialize(counts));
        return results.Any(x => x.Status == "FAILED") ? 1 : 0;
    }

    private static Result Process(string rel, string source, string outputRoot)
    {
        string sha = "";
        long size = 0;
        string parser = "signature";
        var outputs = new List<Output>();
        try
        {
            rel = rel.Replace('\\', '/');
            if (rel.Length == 0 || rel.StartsWith('/') || rel.Split('/').Any(x => x is "" or "." or "..") ||
                rel.Contains(':') || rel.Contains('\t'))
                throw new InvalidDataException("Unsafe source relative path");
            var fi = new FileInfo(source);
            if (!fi.Exists) throw new FileNotFoundException("Missing verified source", source);
            size = fi.Length;
            using (var stream = File.OpenRead(source))
                sha = Convert.ToHexString(SHA256.HashData(stream)).ToLowerInvariant();
            string target = Path.GetFullPath(Path.Combine(outputRoot, rel.Replace('/', Path.DirectorySeparatorChar)));
            if (!target.StartsWith(outputRoot.TrimEnd(Path.DirectorySeparatorChar) + Path.DirectorySeparatorChar,
                    StringComparison.Ordinal))
                throw new InvalidDataException("Invalid output destination");
            var ext = Path.GetExtension(rel).ToLowerInvariant();
            using var headerStream = File.OpenRead(source);
            Span<byte> magic = stackalloc byte[24];
            var have = headerStream.Read(magic);
            bool gfpak = have >= 8 && BitConverter.ToUInt64(magic) == GFPack.Magic;
            bool sarc = have >= 4 && magic[..4].SequenceEqual("SARC"u8);
            bool ahtb = have >= 4 && magic[..4].SequenceEqual("AHTB"u8);
            bool text = rel.StartsWith("bin/message/", StringComparison.OrdinalIgnoreCase) && ext == ".dat";
            bool personal = rel.Equals("bin/pml/personal/personal_total.bin", StringComparison.OrdinalIgnoreCase);
            bool known = gfpak || sarc || ahtb || text || personal;
            if (!known)
                return new(rel, "UNSUPPORTED_FORMAT", "signature", sha, size, [], "No validated SWSH adapter for this signature");
            if (size > 256L * 1024 * 1024)
                return new(rel, "UNSUPPORTED_FORMAT", "safety-limit", sha, size, [], "Decoder input exceeds 256 MiB cap");
            byte[] data = File.ReadAllBytes(source);
            if (gfpak)
            {
                parser = "pkNX.GFPack";
                if (data.Length < 24) throw new InvalidDataException("Truncated GFPack header");
                int fileCount = BitConverter.ToInt32(data, 16), folderCount = BitConverter.ToInt32(data, 20);
                if (fileCount < 0 || fileCount > 10000 || folderCount < 0 || folderCount > 10000)
                    throw new InvalidDataException("Impossible GFPack table counts");
                var pack = new GFPack(data);
                if (pack.Count != fileCount) throw new InvalidDataException("GFPack count mismatch");
                long total = pack.DecompressedFiles.Sum(x => (long)x.Length);
                if (total > 512L * 1024 * 1024) throw new InvalidDataException("GFPack decompression size limit");
                var entries = new List<object>();
                for (int i = 0; i < pack.Count; i++)
                {
                    var bytes = pack.DecompressedFiles[i];
                    string name = $"{i:D6}_{pack.HashAbsolute[i].HashFnv1aPathFull:X16}.bin";
                    var output = Save(target + ".files/" + name, bytes, outputRoot);
                    outputs.Add(output);
                    entries.Add(new { index = i, pathHash = $"{pack.HashAbsolute[i].HashFnv1aPathFull:X16}",
                        size = bytes.Length, sha256 = output.Sha256 });
                }
                outputs.Add(SaveJson(target + ".manifest.json", entries, outputRoot));
            }
            else if (sarc)
            {
                parser = "pkNX.SARC";
                using var archive = new SARC(source);
                if (!archive.SigMatches || archive.Count > 10000)
                    throw new InvalidDataException("Unrecognized SARC");
                var entries = new List<object>();
                for (int i = 0; i < archive.Count; i++)
                {
                    var bytes = archive.GetEntry(i, 0);
                    if (bytes.Length > 64L * 1024 * 1024)
                        throw new InvalidDataException("SARC entry exceeds size limit");
                    var output = Save(target + $".files/{i:D6}.bin", bytes, outputRoot);
                    outputs.Add(output);
                    entries.Add(new { index = i, hash = $"{archive.SFAT.Entries[i].FileNameHash:X8}",
                        size = bytes.Length, sha256 = output.Sha256 });
                }
                outputs.Add(SaveJson(target + ".manifest.json", entries, outputRoot));
            }
            else if (text)
            {
                parser = "pkNX.TextFile.SWSH";
                var value = new TextFile(data, new TextConfig(GameVersion.SWSH));
                var lines = value.Lines;
                var flags = value.Flags;
                if (flags.Length != lines.Length) throw new InvalidDataException("Text row/flags count mismatch");
                outputs.Add(SaveJson(target + ".json",
                    lines.Select((line, i) => new { index = i, flags = flags[i], text = line }), outputRoot));
                outputs.Add(Save(target + ".txt", Encoding.UTF8.GetBytes(string.Join("\n", lines) + "\n"), outputRoot));
            }
            else if (ahtb)
            {
                parser = "pkNX.AHTB";
                if (data.Length < 8) throw new InvalidDataException("AHTB header truncated");
                var table = new AHTB(data);
                outputs.Add(SaveJson(target + ".json", table.Entries.Select((e, i) =>
                    new { index = i, hash = $"{e.Hash:X16}", name = e.Name }), outputRoot));
            }
            else if (personal)
            {
                parser = "pkNX.PersonalTable8SWSH";
                if (data.Length % PersonalInfo8SWSH.SIZE != 0)
                    throw new InvalidDataException("Personal total table is not an integral number of rows");
                var table = new PersonalTable8SWSH(data);
                if (table.Table.Length != data.Length / PersonalInfo8SWSH.SIZE)
                    throw new InvalidDataException("Personal row count mismatch");
                outputs.Add(SaveJson(target + ".json", table.Table.Select((e, i) => new {
                    index = i, speciesModelId = e.ModelID, form = e.Form, present = e.IsPresentInGame,
                    hp = e.HP, atk = e.ATK, def = e.DEF, spa = e.SPA, spd = e.SPD, spe = e.SPE,
                    type1 = (int)e.Type1, type2 = (int)e.Type2, catchRate = e.CatchRate,
                    ability1 = e.Ability1, ability2 = e.Ability2, abilityHidden = e.AbilityH,
                    baseExp = e.BaseEXP, baseFriendship = e.BaseFriendship
                }), outputRoot));
            }
            else
                return new(rel, "UNSUPPORTED_FORMAT", "signature", sha, size, [], "No parser");
            return new(rel, "PARSED", parser, sha, size, outputs.ToArray());
        }
        catch (Exception ex)
        {
            return new(rel, "FAILED", parser, sha, size, outputs.ToArray(),
                $"{ex.GetType().Name}: {ex.Message}");
        }
    }

    private static Output SaveJson<T>(string path, T value, string root) =>
        Save(path, Encoding.UTF8.GetBytes(JsonSerializer.Serialize(value, Json) + "\n"), root);

    private static Output Save(string path, byte[] bytes, string root)
    {
        Directory.CreateDirectory(Path.GetDirectoryName(path)!);
        string tmp = path + "." + Guid.NewGuid().ToString("N") + ".tmp";
        try
        {
            File.WriteAllBytes(tmp, bytes);
            File.Move(tmp, path, true);
        }
        finally { if (File.Exists(tmp)) File.Delete(tmp); }
        return new Output(Path.GetRelativePath(root, path).Replace('\\', '/'), bytes.Length,
            Convert.ToHexString(SHA256.HashData(bytes)).ToLowerInvariant());
    }
}
