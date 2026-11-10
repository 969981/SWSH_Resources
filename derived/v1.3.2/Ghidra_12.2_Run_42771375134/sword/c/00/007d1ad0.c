/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d1ad0; name: FUN_007d1ad0
 */


void FUN_007d1ad0(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((DAT_029f5283 & 1) == 0) {
    DAT_029f5283 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/ping/out/data/sync_ping_data_holder.pb.cc"
                );
    FUN_007d07a0();
    FUN_007e26f0(&DAT_0213ffa4,0x10f);
    FUN_00818650("sync_ping_data_holder.proto",&LAB_007d1c20);
    plVar2 = operator_new(0x28);
    puVar1 = PTR_DAT_02716cc8;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    *(long **)PTR_DAT_02716cc0 = plVar2;
    DAT_029f52b0 = operator_new(0x18);
    DAT_029f52b0[1] = 0;
    DAT_029f52b0[2] = 0;
    *DAT_029f52b0 = 0;
    *(undefined1 *)(plVar2 + 2) = 1;
    uVar3 = FUN_007d0b60();
    *DAT_029f52b0 = uVar3;
    uVar3 = FUN_007d0ff0();
    DAT_029f52b0[1] = uVar3;
    uVar3 = FUN_007d1480();
    DAT_029f52b0[2] = uVar3;
    FUN_008010b0(PTR_FUN_02716cd0);
    return;
  }
  return;
}


