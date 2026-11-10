// Retry only the five SWSH 1.3.2 function entries that timed out during
// the verified full Ghidra 12.2 analysis run 42771375134.
// Usage: -postScript SWSHRetryFailed.java <sword|shield> <output-dir> [timeout-sec]
// This script NEVER invents C when decompilation fails.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.List;

public class SWSHRetryFailed extends GhidraScript {
    private static final String[] SWORD = {
        "0051b060", "00add620", "00b1c010", "00f7af20", "0199e900"
    };
    private static final String[] SHIELD = {
        "0051b060", "00add620", "00b1c010", "00f7af50", "0199e990"
    };

    private static String cell(String s) {
        if (s == null) return "";
        return s.replace("\t", " ").replace("\n", " ").replace("\r", " ");
    }

    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) throw new IllegalArgumentException(
            "Usage: <sword|shield> <output-dir> [timeout-seconds]");
        String game = args[0].toLowerCase(java.util.Locale.ROOT);
        String[] targets;
        if ("sword".equals(game)) targets = SWORD;
        else if ("shield".equals(game)) targets = SHIELD;
        else throw new IllegalArgumentException("Unknown game: " + game);
        int timeout = args.length > 2 ? Integer.parseInt(args[2]) : 180;
        if (timeout < 20 || timeout > 600)
            throw new IllegalArgumentException("Timeout must be 20..600 seconds");
        Path directory = Paths.get(args[1]).resolve(game).toAbsolutePath();
        Files.createDirectories(directory);
        List<String> rows = new ArrayList<String>();
        rows.add("entry\tname\tstatus\telapsed_timeout_seconds\tc_file\terror");
        DecompInterface decompiler = new DecompInterface();
        if (!decompiler.openProgram(currentProgram)) {
            throw new IllegalStateException("Unable to open saved Ghidra program");
        }
        int completed = 0;
        try {
            for (String entry : targets) {
                Function f = currentProgram.getFunctionManager().getFunctionAt(
                    toAddr(Long.parseUnsignedLong(entry, 16)));
                if (f == null) {
                    rows.add(entry + "\t\tNOT_FOUND\t" + timeout + "\t\tFunction not found in saved Ghidra project");
                    println("SWSHRetryFailed: " + game + " " + entry + " NOT_FOUND");
                    continue;
                }
                String status = "FAILED";
                String error = "";
                String cFile = "";
                try {
                    DecompileResults results = decompiler.decompileFunction(f, timeout, monitor);
                    if (results != null && results.decompileCompleted() &&
                            results.getDecompiledFunction() != null &&
                            results.getDecompiledFunction().getC() != null &&
                            !results.getDecompiledFunction().getC().trim().isEmpty()) {
                        String c = results.getDecompiledFunction().getC();
                        Path destination = directory.resolve(entry + ".c");
                        Files.writeString(destination,
                            "/* Ghidra 12.2 retry of SWSH 1.3.2 " + game +
                            " function " + entry +
                            "; C-like pseudocode, not original game source. */\n\n" +
                            c + "\n", StandardCharsets.UTF_8);
                        cFile = destination.getFileName().toString();
                        completed++;
                        status = "OK";
                    } else {
                        error = results == null ? "null result" :
                            cell(results.getErrorMessage());
                    }
                } catch (Exception e) {
                    status = "EXCEPTION";
                    error = cell(e.toString());
                }
                rows.add(entry + "\t" + cell(f.getName()) + "\t" + status + "\t" +
                    timeout + "\t" + cFile + "\t" + error);
                println("SWSHRetryFailed: " + game + " " + entry + " " + status +
                    (error.isEmpty() ? "" : " : " + error));
                monitor.checkCancelled();
            }
        } finally {
            decompiler.dispose();
            Files.write(directory.resolve("retry_status.tsv"), rows,
                StandardCharsets.UTF_8);
        }
        println("SWSHRetryFailed: " + game + " completed " + completed +
            " / " + targets.length + " target functions (timeout=" + timeout + "s)");
    }
}
