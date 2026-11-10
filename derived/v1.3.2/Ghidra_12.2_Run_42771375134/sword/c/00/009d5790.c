/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009d5790; name: FUN_009d5790
 */


void FUN_009d5790(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined *local_38;
  undefined *puStack_30;
  undefined1 local_28;
  
  if ((DAT_02a50308 & 1) == 0) {
    DAT_02a50308 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffers/out_async/data/watch_clienttimer.pb.cc"
                );
    FUN_007e26f0(&DAT_01d2534d,0x71);
    FUN_00818650("watch_clienttimer.proto",&LAB_009d58f0);
    plVar2 = operator_new(0x28);
    *plVar2 = (long)(PTR_DAT_027189c0 + 0x10);
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
    lVar3 = *(long *)PTR_DAT_02716d10;
    *(long **)PTR_DAT_027189b8 = plVar2;
    plVar2[3] = lVar3;
    plVar2[4] = 0;
    *(undefined1 *)(plVar2 + 2) = 1;
    FUN_008010b0(PTR_LAB_027189c8);
  }
  return;
}


