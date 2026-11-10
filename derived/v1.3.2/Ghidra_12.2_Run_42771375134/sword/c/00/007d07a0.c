/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d07a0; name: FUN_007d07a0
 */


void FUN_007d07a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  if ((DAT_029f5218 & 1) == 0) {
    DAT_029f5218 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/ping/out/data/ping.pb.cc"
                );
    FUN_007e26f0(&DAT_01ce13c1,0x50);
    FUN_00818650("ping.proto",&LAB_007d0960);
    plVar3 = operator_new(0x18);
    puVar1 = PTR_DAT_02716c98;
    *(undefined4 *)((long)plVar3 + 0x14) = 0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    *(long **)PTR_DAT_02716c80 = plVar3;
    plVar4 = operator_new(0x18);
    puVar1 = PTR_DAT_02716ca0;
    *(undefined4 *)((long)plVar4 + 0x14) = 0;
    *plVar4 = (long)(puVar1 + 0x10);
    plVar4[1] = 0;
    *(long **)PTR_DAT_02716c88 = plVar4;
    plVar5 = operator_new(0x18);
    puVar2 = PTR_DAT_02716ca8;
    puVar1 = PTR_DAT_02716c90;
    *(undefined1 *)(plVar3 + 2) = 1;
    *(undefined1 *)(plVar4 + 2) = 1;
    *(undefined4 *)((long)plVar5 + 0x14) = 0;
    *(undefined1 *)(plVar5 + 2) = 1;
    *(long **)puVar1 = plVar5;
    *plVar5 = (long)(puVar2 + 0x10);
    plVar5[1] = 0;
    FUN_008010b0(PTR_LAB_02716cb0);
    return;
  }
  return;
}


