/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d8d20; name: FUN_007d8d20
 */


void FUN_007d8d20(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined *local_38;
  undefined *puStack_30;
  undefined1 local_28;
  
  if ((DAT_029f53c8 & 1) == 0) {
    DAT_029f53c8 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/data/out/data/data.pb.cc"
                );
    FUN_007e26f0(&DAT_01d28772,0x81);
    FUN_00818650("data.proto",&LAB_007d8e80);
    plVar2 = operator_new(0x40);
    *plVar2 = (long)(PTR_DAT_02716d68 + 0x10);
    plVar2[1] = 0;
    puVar1 = PTR_DAT_02716d70;
    *(undefined1 *)(plVar2 + 2) = 0;
    if (*(long *)puVar1 != 2) {
      local_28 = 0;
      local_38 = PTR_DAT_02716670 + 0x10;
      puStack_30 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&local_38);
      FUN_00801390(&local_38);
    }
    *(undefined4 *)(plVar2 + 7) = 0;
    *(undefined8 *)((long)plVar2 + 0x14) = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    puVar1 = PTR_DAT_02716d60;
    plVar2[6] = *(long *)PTR_DAT_02716d10;
    *(long **)puVar1 = plVar2;
    *(undefined1 *)(plVar2 + 2) = 1;
    FUN_008010b0(PTR_LAB_02716d80);
  }
  return;
}


