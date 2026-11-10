/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0117f020; name: _INIT_1384
 */


void _INIT_1384(void)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined1 uStack_28;
  
  if ((DAT_02a643d0 & 1) == 0) {
    DAT_02a643d0 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/poke_select/protocol_buffers/out/data/poke_select_command.pb.cc"
                );
    FUN_007e26f0(&DAT_01cec62d,0x76);
    FUN_00818650("poke_select_command.proto",&LAB_0117e1f0);
    plVar2 = operator_new(0x28);
    *plVar2 = (long)(PTR_DAT_02725108 + 0x10);
    plVar2[1] = 0;
    puVar1 = PTR_DAT_02716d70;
    *(undefined1 *)(plVar2 + 2) = 0;
    if (*(long *)puVar1 != 2) {
      uStack_28 = 0;
      puStack_38 = PTR_DAT_02716670 + 0x10;
      puStack_30 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_38);
      FUN_00801390(&puStack_38);
    }
    lVar4 = *(long *)PTR_DAT_02716d10;
    *(undefined4 *)(plVar2 + 4) = 0;
    plVar2[3] = lVar4;
    *(long **)PTR_DAT_027250f8 = plVar2;
    plVar3 = operator_new(0x18);
    puVar1 = PTR_DAT_02725110;
    *(undefined4 *)((long)plVar3 + 0x14) = 0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    *(long **)PTR_DAT_02725100 = plVar3;
    *(undefined1 *)(plVar2 + 2) = 1;
    *(undefined1 *)(plVar3 + 2) = 1;
    FUN_008010b0(PTR_LAB_02725118);
  }
  return;
}


