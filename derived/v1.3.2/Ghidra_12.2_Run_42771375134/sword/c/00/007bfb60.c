/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007bfb60; name: FUN_007bfb60
 */


void FUN_007bfb60(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((DAT_029f5053 & 1) == 0) {
    DAT_029f5053 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/src/p2p/session/block/protocol_buffers/out/data/block_data_holder.pb.cc"
                );
    FUN_007c0960();
    FUN_007e26f0(&DAT_0213fe38,0xc2);
    FUN_00818650("block_data_holder.proto",&LAB_007bfca0);
    plVar2 = operator_new(0x28);
    puVar1 = PTR_DAT_02716b38;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    *(long **)PTR_DAT_02716b30 = plVar2;
    DAT_029f5080 = operator_new(0x10);
    *DAT_029f5080 = 0;
    DAT_029f5080[1] = 0;
    *(undefined1 *)(plVar2 + 2) = 1;
    uVar3 = FUN_007c0cb0();
    *DAT_029f5080 = uVar3;
    uVar3 = FUN_007c1240();
    DAT_029f5080[1] = uVar3;
    FUN_008010b0(PTR_FUN_02716b40);
    return;
  }
  return;
}


