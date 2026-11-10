// Export Ghidra 12.2 high-level P-code, CFG, SSA varnodes and inferred prototypes
// for a curated list of Sword/Shield 1.3.2 function entries.
//
// Args: <entries.txt> <output-directory> <sword|shield>
// The same entry list is applied to each project. Missing/non-decompilable entries
// are recorded explicitly. P-code varnodes are SSA values; MULTIEQUAL operations
// are phi-like merge nodes. This export is static analysis, not runtime evidence.

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.pcode.FunctionPrototype;
import ghidra.program.model.pcode.HighFunction;
import ghidra.program.model.pcode.HighSymbol;
import ghidra.program.model.pcode.HighVariable;
import ghidra.program.model.pcode.PcodeBlockBasic;
import ghidra.program.model.pcode.PcodeOp;
import ghidra.program.model.pcode.SequenceNumber;
import ghidra.program.model.pcode.Varnode;
import ghidra.program.model.pcode.VarnodeAST;
import ghidra.program.model.data.DataType;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Locale;
import java.util.Set;
import java.util.TreeMap;

public class SWSHExportPcodeSSA extends GhidraScript {

    private static String tsv(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }

    private static String address(Address address) {
        if (address == null || address.isNoAddress()) return "";
        return address.toString();
    }

    private static long parseAddress(String text) {
        String value = text.trim().toLowerCase(Locale.ROOT);
        if (value.contains(":")) value = value.substring(value.lastIndexOf(':') + 1);
        if (value.startsWith("0x")) value = value.substring(2);
        return Long.parseUnsignedLong(value, 16);
    }

    private static String variableId(Varnode node) {
        if (node == null) return "";
        if (node instanceof VarnodeAST ast) return "v" + ast.getUniqueId();
        return node.getAddress().toString() + ":" + node.getSize();
    }

    private static String highName(Varnode node) {
        if (node == null || node.getHigh() == null) return "";
        String name = node.getHigh().getName();
        return name == null ? "" : name;
    }

    private static String highType(Varnode node) {
        if (node == null || node.getHigh() == null) return "";
        DataType type = node.getHigh().getDataType();
        return type == null ? "" : type.toString();
    }

    private static String defPc(Varnode node) {
        if (!(node instanceof VarnodeAST ast) || ast.getDef() == null) return "";
        SequenceNumber seq = ast.getDef().getSeqnum();
        return seq == null ? "" : address(seq.getTarget());
    }

    private static String defMnemonic(Varnode node) {
        if (!(node instanceof VarnodeAST ast) || ast.getDef() == null) return "";
        return ast.getDef().getMnemonic();
    }

    private void writeVariable(
        BufferedWriter writer, String game, String entry, Varnode node,
        Set<String> seen
    ) throws Exception {
        if (node == null) return;
        String id = variableId(node);
        if (!seen.add(id)) return;
        String space = node.getAddress().getAddressSpace().getName();
        String offset = Long.toUnsignedString(node.getOffset(), 16);
        writer.write(String.join("\t",
            tsv(game), tsv(entry), tsv(id), tsv(space),
            tsv(address(node.getAddress())), tsv(offset),
            Integer.toString(node.getSize()), tsv(node.toString()),
            tsv(highName(node)), tsv(highType(node)), tsv(defPc(node)),
            tsv(defMnemonic(node)), Boolean.toString(node.isConstant()),
            Boolean.toString(node.isInput()), Boolean.toString(node.isUnique()),
            Boolean.toString(node.isAddress())
        ));
        writer.newLine();
    }

    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 3) {
            throw new IllegalArgumentException(
                "Usage: SWSHExportPcodeSSA.java <entries.txt> <output-directory> <sword|shield>"
            );
        }
        Path entriesPath = Path.of(args[0]);
        Path outDir = Path.of(args[1]);
        String game = args[2].trim().toLowerCase(Locale.ROOT);
        if (!game.equals("sword") && !game.equals("shield")) {
            throw new IllegalArgumentException("Game must be sword or shield");
        }
        if (!Files.isRegularFile(entriesPath)) {
            throw new IllegalArgumentException("Entry list not found: " + entriesPath);
        }
        Files.createDirectories(outDir);

        Path protoPath = outDir.resolve(game + "_function_prototypes.tsv");
        Path blocksPath = outDir.resolve(game + "_cfg_blocks.tsv");
        Path edgesPath = outDir.resolve(game + "_cfg_edges.tsv");
        Path opsPath = outDir.resolve(game + "_pcode_ops.tsv");
        Path varsPath = outDir.resolve(game + "_ssa_varnodes.tsv");
        Path statusPath = outDir.resolve(game + "_function_status.tsv");

        long requested = 0;
        long found = 0;
        long decompiled = 0;
        long failed = 0;
        long blockTotal = 0;
        long opTotal = 0;
        long phiTotal = 0;

        DecompInterface decompiler = new DecompInterface();
        decompiler.setOptions(new DecompileOptions());
        decompiler.setSimplificationStyle("decompile");
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        decompiler.openProgram(currentProgram);

        FunctionManager manager = currentProgram.getFunctionManager();

        try (
            BufferedReader entries = Files.newBufferedReader(entriesPath, StandardCharsets.UTF_8);
            BufferedWriter protoOut = Files.newBufferedWriter(protoPath, StandardCharsets.UTF_8);
            BufferedWriter blockOut = Files.newBufferedWriter(blocksPath, StandardCharsets.UTF_8);
            BufferedWriter edgeOut = Files.newBufferedWriter(edgesPath, StandardCharsets.UTF_8);
            BufferedWriter opOut = Files.newBufferedWriter(opsPath, StandardCharsets.UTF_8);
            BufferedWriter varOut = Files.newBufferedWriter(varsPath, StandardCharsets.UTF_8);
            BufferedWriter statusOut = Files.newBufferedWriter(statusPath, StandardCharsets.UTF_8)
        ) {
            protoOut.write("game\tentry\tfunction_name\treturn_type\tparameter_count\tparameters\tcalling_convention\tno_return\tvarargs");
            protoOut.newLine();
            blockOut.write("game\tentry\tblock_index\tstart\tstop\tin_count\tout_count\tfirst_pcode\tlast_pcode");
            blockOut.newLine();
            edgeOut.write("game\tentry\tfrom_block\tto_block\tedge_index\tedge_kind");
            edgeOut.newLine();
            opOut.write("game\tentry\tblock_index\top_index\tpc\tseq_time\topcode\tmnemonic\toutput_var\tinputs\toperation_text");
            opOut.newLine();
            varOut.write("game\tentry\tvar_id\tspace\taddress\toffset_hex\tsize\tvarnode_text\thigh_variable\thigh_type\tdefinition_pc\tdefinition_mnemonic\tis_constant\tis_input\tis_unique\tis_address");
            varOut.newLine();
            statusOut.write("game\tentry\tfunction_name\tstatus\tblock_count\tpcode_op_count\tphi_count\tparameter_count\tmessage");
            statusOut.newLine();

            String line;
            while ((line = entries.readLine()) != null) {
                monitor.checkCancelled();
                line = line.trim();
                if (line.isEmpty() || line.startsWith("#")) continue;
                requested++;
                String entry = line.toLowerCase(Locale.ROOT).replace("0x", "");
                Function function = null;
                String functionName = "";
                try {
                    Address target = toAddr(parseAddress(entry));
                    function = manager.getFunctionAt(target);
                    if (function == null) {
                        statusOut.write(String.join("\t", game, entry, "", "MISSING_FUNCTION", "0", "0", "0", "0", "No function starts at requested entry"));
                        statusOut.newLine();
                        failed++;
                        continue;
                    }
                    found++;
                    functionName = function.getName();
                    DecompileResults result = decompiler.decompileFunction(function, 120, monitor);
                    if (!result.decompileCompleted()) {
                        String message = result.getErrorMessage();
                        statusOut.write(String.join("\t", game, entry, tsv(functionName), "DECOMPILE_FAILED", "0", "0", "0", "0", tsv(message)));
                        statusOut.newLine();
                        failed++;
                        continue;
                    }
                    HighFunction high = result.getHighFunction();
                    if (high == null) {
                        statusOut.write(String.join("\t", game, entry, tsv(functionName), "NO_HIGH_FUNCTION", "0", "0", "0", "0", "Decompiler returned no HighFunction"));
                        statusOut.newLine();
                        failed++;
                        continue;
                    }
                    decompiled++;

                    FunctionPrototype prototype = high.getFunctionPrototype();
                    String returnType = prototype == null || prototype.getReturnType() == null
                        ? "" : prototype.getReturnType().toString();
                    int paramCount = prototype == null ? 0 : prototype.getNumParams();
                    ArrayList<String> params = new ArrayList<>();
                    if (prototype != null) {
                        for (int i = 0; i < paramCount; i++) {
                            HighSymbol param = prototype.getParam(i);
                            params.add(param.getName() + ":" + param.getDataType());
                        }
                    }
                    String callingConvention = function.getCallingConventionName();
                    boolean noReturn = prototype != null && prototype.hasNoReturn();
                    boolean varargs = prototype != null && prototype.isVarArg();
                    protoOut.write(String.join("\t",
                        tsv(game), tsv(entry), tsv(functionName), tsv(returnType),
                        Integer.toString(paramCount), tsv(String.join(";", params)),
                        tsv(callingConvention), Boolean.toString(noReturn), Boolean.toString(varargs)
                    ));
                    protoOut.newLine();

                    ArrayList<PcodeBlockBasic> blocks = high.getBasicBlocks();
                    int blockCount = blocks == null ? 0 : blocks.size();
                    int functionOps = 0;
                    int functionPhi = 0;
                    Set<String> seenVars = new HashSet<>();

                    if (blocks != null) {
                        for (PcodeBlockBasic block : blocks) {
                            monitor.checkCancelled();
                            int blockIndex = block.getIndex();
                            Iterator<PcodeOp> iterator = block.getIterator();
                            ArrayList<PcodeOp> blockOps = new ArrayList<>();
                            while (iterator.hasNext()) blockOps.add(iterator.next());
                            String firstPc = blockOps.isEmpty() ? "" : address(blockOps.get(0).getSeqnum().getTarget());
                            String lastPc = blockOps.isEmpty() ? "" : address(blockOps.get(blockOps.size()-1).getSeqnum().getTarget());
                            blockOut.write(String.join("\t",
                                tsv(game), tsv(entry), Integer.toString(blockIndex),
                                tsv(address(block.getStart())), tsv(address(block.getStop())),
                                Integer.toString(block.getInSize()), Integer.toString(block.getOutSize()),
                                tsv(firstPc), tsv(lastPc)
                            ));
                            blockOut.newLine();
                            blockTotal++;

                            for (int i = 0; i < block.getOutSize(); i++) {
                                String edgeKind = "NORMAL";
                                if (block.getOutSize() == 2) {
                                    if (block.getOut(i).getIndex() == block.getTrueOut().getIndex()) edgeKind = "TRUE";
                                    else if (block.getOut(i).getIndex() == block.getFalseOut().getIndex()) edgeKind = "FALSE";
                                    else edgeKind = "CONDITIONAL";
                                } else if (block.getOutSize() > 2) {
                                    edgeKind = "SWITCH_OR_MULTIWAY";
                                }
                                edgeOut.write(String.join("\t",
                                    tsv(game), tsv(entry), Integer.toString(blockIndex),
                                    Integer.toString(block.getOut(i).getIndex()), Integer.toString(i), edgeKind
                                ));
                                edgeOut.newLine();
                            }

                            int opIndex = 0;
                            for (PcodeOp op : blockOps) {
                                SequenceNumber sequence = op.getSeqnum();
                                String pc = sequence == null ? "" : address(sequence.getTarget());
                                String seqTime = sequence == null ? "" : Integer.toString(sequence.getTime());
                                Varnode output = op.getOutput();
                                String outputId = variableId(output);
                                ArrayList<String> inputs = new ArrayList<>();
                                for (int i = 0; i < op.getNumInputs(); i++) {
                                    Varnode input = op.getInput(i);
                                    inputs.add(variableId(input));
                                    writeVariable(varOut, game, entry, input, seenVars);
                                }
                                writeVariable(varOut, game, entry, output, seenVars);
                                String mnemonic = op.getMnemonic();
                                if ("MULTIEQUAL".equals(mnemonic)) functionPhi++;
                                opOut.write(String.join("\t",
                                    tsv(game), tsv(entry), Integer.toString(blockIndex),
                                    Integer.toString(opIndex++), tsv(pc), tsv(seqTime),
                                    Integer.toString(op.getOpcode()), tsv(mnemonic),
                                    tsv(outputId), tsv(String.join(",", inputs)), tsv(op.toString())
                                ));
                                opOut.newLine();
                                functionOps++;
                                opTotal++;
                            }
                        }
                    }
                    phiTotal += functionPhi;
                    statusOut.write(String.join("\t",
                        tsv(game), tsv(entry), tsv(functionName), "OK",
                        Integer.toString(blockCount), Integer.toString(functionOps),
                        Integer.toString(functionPhi), Integer.toString(paramCount), ""
                    ));
                    statusOut.newLine();
                } catch (Exception error) {
                    statusOut.write(String.join("\t",
                        tsv(game), tsv(entry), tsv(functionName), "ERROR",
                        "0", "0", "0", "0", tsv(error.toString())
                    ));
                    statusOut.newLine();
                    failed++;
                    println("SWSHExportPcodeSSA: failed " + entry + ": " + error);
                }
                if (requested % 5 == 0) {
                    monitor.setMessage("P-code/SSA export " + game + ": " + requested);
                    println("P-code/SSA " + game + ": " + requested + " requested, " + decompiled + " decompiled");
                }
            }
        } finally {
            decompiler.dispose();
        }

        String summary = "{\n" +
            "  \"status\": \"" + (failed == 0 ? "P_CODE_SSA_EXPORTED" : "P_CODE_SSA_PARTIAL") + "\",\n" +
            "  \"game\": \"" + game + "\",\n" +
            "  \"program\": \"" + tsv(currentProgram.getName()) + "\",\n" +
            "  \"requested\": " + requested + ",\n" +
            "  \"functions_found\": " + found + ",\n" +
            "  \"functions_decompiled\": " + decompiled + ",\n" +
            "  \"failed\": " + failed + ",\n" +
            "  \"basic_blocks\": " + blockTotal + ",\n" +
            "  \"pcode_ops\": " + opTotal + ",\n" +
            "  \"ssa_phi_ops\": " + phiTotal + "\n" +
            "}\n";
        Files.writeString(outDir.resolve(game + "_pcode_ssa_summary.json"), summary, StandardCharsets.UTF_8);
        println("SWSHExportPcodeSSA complete: " + summary);
        if (decompiled == 0) {
            throw new IllegalStateException("No functions were decompiled for " + game);
        }
    }
}
