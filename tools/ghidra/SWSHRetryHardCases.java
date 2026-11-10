// Retry only the three remaining Ghidra 12.2 hard functions in each edition.
// Restore real native projects from the verified source Actions run 42771375134.
// Extended result payload is crucial for 00f7af20/00f7af50: Ghidra originally
// reported 'Response buffer size exceeded' rather than a timeout.
// Usage: -postScript SWSHRetryHardCases.java <sword|shield> <directory> [timeout=300] [payload-MB=256]
// No fabricated C. Every attempt records its exact status and full error.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.List;

public class SWSHRetryHardCases extends GhidraScript {
    private static final String[] SWORD = {"00add620", "00b1c010", "00f7af20"};
    private static final String[] SHIELD = {"00add620", "00b1c010", "00f7af50"};

    private static String safe(String s) {
        return s == null ? "" : s.replace("\t", " ").replace("\r", " ").replace("\n", " ");
    }

    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            throw new IllegalArgumentException("<sword|shield> <out> [timeout-sec] [payload-MB]");
        }
        String game = args[0].toLowerCase(java.util.Locale.ROOT);
        String[] addresses;
        if ("sword".equals(game)) addresses = SWORD;
        else if ("shield".equals(game)) addresses = SHIELD;
        else throw new IllegalArgumentException("Unknown game: " + game);
        int timeout = args.length > 2 ? Integer.parseInt(args[2]) : 300;
        int payloadMB = args.length > 3 ? Integer.parseInt(args[3]) : 256;
        if (timeout < 60 || timeout > 900 || payloadMB < 64 || payloadMB > 512) {
            throw new IllegalArgumentException("Invalid timeout or payload limit");
        }
        Path dest = Paths.get(args[1]).resolve(game).toAbsolutePath();
        Files.createDirectories(dest);
        List<String> lines = new ArrayList<String>();
        lines.add("entry\tname\tstatus\tfunction_timeout_seconds\tmax_payload_mb\tc_file\terror");

        DecompileOptions options = new DecompileOptions();
        options.setMaxPayloadMBytes(payloadMB);
        DecompInterface dec = new DecompInterface();
        if (!dec.setOptions(options) || !dec.openProgram(currentProgram)) {
            throw new IllegalStateException("Could not open decompiler with requested payload size");
        }
        try {
            for (String entry : addresses) {
                Function fn = currentProgram.getFunctionManager().getFunctionAt(
                    toAddr(Long.parseUnsignedLong(entry, 16)));
                String state = "FAILED";
                String name = "";
                String filename = "";
                String error = "";
                if (fn == null) {
                    state = "NOT_FOUND";
                    error = "No Ghidra function at original entry";
                } else {
                    name = safe(fn.getName());
                    try {
                        DecompileResults r = dec.decompileFunction(fn, timeout, monitor);
                        if (r != null && r.decompileCompleted() &&
                                r.getDecompiledFunction() != null &&
                                r.getDecompiledFunction().getC() != null &&
                                !r.getDecompiledFunction().getC().trim().isEmpty()) {
                            String c = r.getDecompiledFunction().getC();
                            filename = entry + ".c";
                            Files.writeString(dest.resolve(filename),
                                "/* Ghidra 12.2 SWSH " + game +
                                " recovered retry function " + entry +
                                "; pseudocode not original game source. */\n\n" +
                                c + "\n", StandardCharsets.UTF_8);
                            state = "OK";
                        } else {
                            error = r == null ? "null result" : safe(r.getErrorMessage());
                        }
                    } catch (Exception e) {
                        state = "EXCEPTION";
                        error = safe(e.toString());
                    }
                }
                lines.add(entry + "\t" + name + "\t" + state + "\t" + timeout +
                          "\t" + payloadMB + "\t" + filename + "\t" + error);
                println("SWSHRetryHardCases: " + game + " " + entry + " " + state +
                        (error.isEmpty() ? "" : " : " + error));
                dec.flushCache();
                monitor.checkCancelled();
            }
        } finally {
            dec.dispose();
            Files.write(dest.resolve("retry_status.tsv"), lines, StandardCharsets.UTF_8);
        }
    }
}
