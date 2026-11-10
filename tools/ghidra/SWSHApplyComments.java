// Apply evidence-backed Chinese function comments as Ghidra plate comments.
// Usage:
//   -postScript SWSHApplyComments.java <function_comments.tsv> <report.json>
// TSV format: hexadecimal entry<TAB>Base64(UTF-8 comment).
// Existing non-SWSH plate comments are preserved.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.CodeUnit;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Listing;
import java.io.BufferedReader;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.Base64;

public class SWSHApplyComments extends GhidraScript {
    private static String jsonEscape(String value) {
        return value.replace("\\", "\\\\").replace("\"", "\\\"")
            .replace("\n", "\\n").replace("\r", "\\r");
    }

    private static long parseAddress(String text) {
        String value = text.trim().toLowerCase(java.util.Locale.ROOT);
        if (value.contains(":")) value = value.substring(value.lastIndexOf(':') + 1);
        if (value.startsWith("0x")) value = value.substring(2);
        return Long.parseUnsignedLong(value, 16);
    }

    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            throw new IllegalArgumentException("<function_comments.tsv> <report.json>");
        }
        Path input = Path.of(args[0]);
        Path report = Path.of(args[1]);
        if (!Files.isRegularFile(input)) {
            throw new IllegalArgumentException("Comment TSV does not exist: " + input);
        }

        FunctionManager manager = currentProgram.getFunctionManager();
        Listing listing = currentProgram.getListing();
        long total = 0;
        long applied = 0;
        long missing = 0;
        long preservedExisting = 0;
        long malformed = 0;
        String marker = "[SWSH 自动注释 v1 | Ghidra 12.2]";

        try (BufferedReader reader = Files.newBufferedReader(input, StandardCharsets.UTF_8)) {
            String line;
            while ((line = reader.readLine()) != null) {
                if (line.isBlank()) continue;
                total++;
                int tab = line.indexOf('\t');
                if (tab <= 0 || tab == line.length() - 1) {
                    malformed++;
                    continue;
                }
                try {
                    String entry = line.substring(0, tab);
                    String comment = new String(
                        Base64.getDecoder().decode(line.substring(tab + 1)),
                        StandardCharsets.UTF_8
                    );
                    Address address = toAddr(parseAddress(entry));
                    Function function = manager.getFunctionAt(address);
                    if (function == null) {
                        missing++;
                        continue;
                    }
                    String old = listing.getComment(address, CodeUnit.PLATE_COMMENT);
                    String merged = comment;
                    if (old != null && !old.isBlank() && !old.contains(marker)) {
                        merged = comment + "\n\n/* Existing Ghidra plate comment preserved. */\n" + old;
                        preservedExisting++;
                    }
                    listing.setComment(address, CodeUnit.PLATE_COMMENT, merged);
                    applied++;
                } catch (Exception error) {
                    malformed++;
                    println("SWSHApplyComments: skipped malformed row " + total + ": " + error);
                }
                if ((total % 512) == 0) {
                    monitor.setMessage("Applied Ghidra function comments: " + applied + "/" + total);
                    monitor.checkCancelled();
                }
            }
        }

        Files.createDirectories(report.toAbsolutePath().getParent());
        String result = "{\n" +
            "  \"status\": \"GHIDRA_PLATE_COMMENTS_APPLIED\",\n" +
            "  \"program\": \"" + jsonEscape(currentProgram.getName()) + "\",\n" +
            "  \"total_tsv_rows\": " + total + ",\n" +
            "  \"applied\": " + applied + ",\n" +
            "  \"missing_function_entries\": " + missing + ",\n" +
            "  \"preserved_existing_comments\": " + preservedExisting + ",\n" +
            "  \"malformed_rows\": " + malformed + "\n" +
            "}\n";
        Files.writeString(report, result, StandardCharsets.UTF_8);
        println("SWSHApplyComments complete: " + result);
        if (applied == 0 || malformed > 0 || missing > 0) {
            throw new IllegalStateException(
                "Comment application incomplete: applied=" + applied +
                ", missing=" + missing + ", malformed=" + malformed
            );
        }
    }
}
