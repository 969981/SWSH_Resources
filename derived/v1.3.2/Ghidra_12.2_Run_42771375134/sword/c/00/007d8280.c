/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d8280; name: FUN_007d8280
 */


void FUN_007d8280(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((DAT_029f5373 & 1) == 0) {
    DAT_029f5373 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/data/out/data/sync_data_holder.pb.cc"
                );
    FUN_007d8d20();
    FUN_007e26f0(&DAT_021400b4,0x87);
    FUN_00818650("sync_data_holder.proto",&LAB_007d83c0);
    plVar2 = operator_new(0x28);
    puVar1 = PTR_DAT_02716d48;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    *(long **)PTR_DAT_02716d40 = plVar2;
    DAT_029f53a8 = operator_new(8);
    *DAT_029f53a8 = 0;
    *(undefined1 *)(plVar2 + 2) = 1;
    uVar3 = FUN_007d9190();
    *DAT_029f53a8 = uVar3;
    FUN_008010b0(PTR_LAB_02716d50);
    return;
  }
  return;
}


