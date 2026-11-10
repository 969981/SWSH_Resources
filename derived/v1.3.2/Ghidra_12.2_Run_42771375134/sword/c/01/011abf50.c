/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011abf50; name: FUN_011abf50
 */


void FUN_011abf50(void)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined *local_38;
  undefined *puStack_30;
  undefined1 local_28;
  
  if ((DAT_02a64a40 & 1) == 0) {
    DAT_02a64a40 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buffers/out/data/battle_team.pb.cc"
                );
    FUN_007e26f0(&DAT_01d30e2f,0xa8);
    FUN_00818650("battle_team.proto",&LAB_011ac110);
    plVar2 = operator_new(0x30);
    *plVar2 = (long)(PTR_DAT_027254c0 + 0x10);
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
    *(undefined4 *)(plVar2 + 5) = 0;
    lVar4 = *(long *)PTR_DAT_02716d10;
    plVar2[3] = lVar4;
    plVar2[4] = lVar4;
    *(long **)PTR_DAT_027254b0 = plVar2;
    plVar3 = operator_new(0x18);
    puVar1 = PTR_DAT_027254c8;
    *(undefined4 *)((long)plVar3 + 0x14) = 0;
    *(undefined1 *)((long)plVar3 + 0x11) = 0;
    *(long **)PTR_DAT_027254b8 = plVar3;
    *(undefined1 *)(plVar2 + 2) = 1;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    *(undefined1 *)(plVar3 + 2) = 1;
    FUN_008010b0(PTR_LAB_027254d0);
  }
  return;
}


