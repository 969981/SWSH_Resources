/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c0960; name: FUN_007c0960
 */


void FUN_007c0960(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  
  if ((DAT_029f50b8 & 1) == 0) {
    DAT_029f50b8 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/src/p2p/session/block/protocol_buffers/out/data/result.pb.cc"
                );
    FUN_007e26f0(&DAT_01d24f9b,0x65);
    FUN_00818650("result.proto",&LAB_007c0ac0);
    plVar3 = operator_new(0x18);
    puVar1 = PTR_DAT_02716b60;
    *(undefined4 *)((long)plVar3 + 0x14) = 0;
    *(undefined1 *)((long)plVar3 + 0x11) = 0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    *(long **)PTR_DAT_02716b50 = plVar3;
    plVar4 = operator_new(0x18);
    puVar2 = PTR_DAT_02716b68;
    puVar1 = PTR_DAT_02716b58;
    *(undefined1 *)(plVar3 + 2) = 1;
    *(undefined4 *)((long)plVar4 + 0x14) = 0;
    *(undefined1 *)((long)plVar4 + 0x11) = 0;
    *(undefined1 *)(plVar4 + 2) = 1;
    *(long **)puVar1 = plVar4;
    *plVar4 = (long)(puVar2 + 0x10);
    plVar4[1] = 0;
    FUN_008010b0(PTR_LAB_02716b70);
    return;
  }
  return;
}


