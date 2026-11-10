/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01190710; name: _INIT_1389
 */


void _INIT_1389(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 uStack_68;
  
  if ((DAT_02a64558 & 1) == 0) {
    DAT_02a64558 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/chika/protocol_buffers/out/data/chika_command.pb.cc"
                );
    FUN_007e26f0(&DAT_01d3ad84,0x25b);
    FUN_00818650("chika_command.proto",&LAB_01189e70);
    plVar11 = operator_new(0x20);
    puVar1 = PTR_DAT_027251f8;
    *(undefined1 *)(plVar11 + 2) = 0;
    *(undefined8 *)((long)plVar11 + 0x14) = 0;
    *plVar11 = (long)(puVar1 + 0x10);
    plVar11[1] = 0;
    *(long **)PTR_DAT_02725190 = plVar11;
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725200 + 0x10);
    plVar11[1] = 0;
    puVar1 = PTR_DAT_02716d70;
    *(undefined1 *)(plVar11 + 2) = 0;
    if (*(long *)puVar1 != 2) {
      uStack_68 = 0;
      puStack_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_78);
      FUN_00801390(&puStack_78);
    }
    puVar1 = PTR_DAT_02716d10;
    lVar12 = *(long *)PTR_DAT_02716d10;
    *(undefined4 *)(plVar11 + 4) = 0;
    plVar11[3] = lVar12;
    *(long **)PTR_DAT_02725198 = plVar11;
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725208 + 0x10);
    plVar11[1] = 0;
    puVar2 = PTR_DAT_02716d70;
    *(undefined1 *)(plVar11 + 2) = 0;
    if (*(long *)puVar2 != 2) {
      uStack_68 = 0;
      puStack_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_78);
      FUN_00801390(&puStack_78);
    }
    lVar12 = *(long *)puVar1;
    *(undefined4 *)(plVar11 + 4) = 0;
    plVar11[3] = lVar12;
    *(long **)PTR_DAT_027251a0 = plVar11;
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725210 + 0x10);
    plVar11[1] = 0;
    puVar2 = PTR_DAT_02716d70;
    *(undefined1 *)(plVar11 + 2) = 0;
    if (*(long *)puVar2 != 2) {
      uStack_68 = 0;
      puStack_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_78);
      FUN_00801390(&puStack_78);
    }
    lVar12 = *(long *)puVar1;
    *(undefined4 *)(plVar11 + 4) = 0;
    plVar11[3] = lVar12;
    *(long **)PTR_DAT_027251a8 = plVar11;
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725218 + 0x10);
    plVar11[1] = 0;
    puVar2 = PTR_DAT_02716d70;
    *(undefined1 *)(plVar11 + 2) = 0;
    if (*(long *)puVar2 != 2) {
      uStack_68 = 0;
      puStack_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_78);
      FUN_00801390(&puStack_78);
    }
    lVar12 = *(long *)puVar1;
    *(undefined4 *)(plVar11 + 4) = 0;
    plVar11[3] = lVar12;
    puVar3 = PTR_DAT_027251b0;
    *(long **)PTR_DAT_027251b0 = plVar11;
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725220 + 0x10);
    plVar11[1] = 0;
    puVar2 = PTR_DAT_02716d70;
    *(undefined1 *)(plVar11 + 2) = 0;
    if (*(long *)puVar2 != 2) {
      uStack_68 = 0;
      puStack_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_78);
      FUN_00801390(&puStack_78);
    }
    lVar12 = *(long *)puVar1;
    *(undefined4 *)(plVar11 + 4) = 0;
    plVar11[3] = lVar12;
    puVar4 = PTR_DAT_027251b8;
    *(long **)PTR_DAT_027251b8 = plVar11;
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725228 + 0x10);
    plVar11[1] = 0;
    puVar2 = PTR_DAT_02716d70;
    *(undefined1 *)(plVar11 + 2) = 0;
    if (*(long *)puVar2 != 2) {
      uStack_68 = 0;
      puStack_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_78);
      FUN_00801390(&puStack_78);
    }
    lVar12 = *(long *)puVar1;
    *(undefined4 *)(plVar11 + 4) = 0;
    plVar11[3] = lVar12;
    puVar5 = PTR_DAT_027251c0;
    *(long **)PTR_DAT_027251c0 = plVar11;
    plVar11 = operator_new(0x28);
    puVar2 = PTR_DAT_02725230;
    *(undefined1 *)(plVar11 + 2) = 0;
    *(undefined4 *)(plVar11 + 4) = 0;
    plVar11[3] = 0;
    *plVar11 = (long)(puVar2 + 0x10);
    plVar11[1] = 0;
    puVar6 = PTR_DAT_027251c8;
    *(long **)PTR_DAT_027251c8 = plVar11;
    plVar11 = operator_new(0x28);
    puVar2 = PTR_DAT_02725238;
    *(undefined1 *)(plVar11 + 2) = 0;
    *(undefined4 *)(plVar11 + 4) = 0;
    plVar11[3] = 0;
    *plVar11 = (long)(puVar2 + 0x10);
    plVar11[1] = 0;
    puVar7 = PTR_DAT_027251d0;
    *(long **)PTR_DAT_027251d0 = plVar11;
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725240 + 0x10);
    plVar11[1] = 0;
    puVar2 = PTR_DAT_02716d70;
    *(undefined1 *)(plVar11 + 2) = 0;
    if (*(long *)puVar2 != 2) {
      uStack_68 = 0;
      puStack_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_78);
      FUN_00801390(&puStack_78);
    }
    lVar12 = *(long *)puVar1;
    *(undefined4 *)(plVar11 + 4) = 0;
    plVar11[3] = lVar12;
    puVar8 = PTR_DAT_027251d8;
    *(long **)PTR_DAT_027251d8 = plVar11;
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725248 + 0x10);
    plVar11[1] = 0;
    puVar2 = PTR_DAT_02716d70;
    *(undefined1 *)(plVar11 + 2) = 0;
    if (*(long *)puVar2 != 2) {
      uStack_68 = 0;
      puStack_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_78);
      FUN_00801390(&puStack_78);
    }
    lVar12 = *(long *)puVar1;
    *(undefined4 *)(plVar11 + 4) = 0;
    plVar11[3] = lVar12;
    puVar9 = PTR_DAT_027251e0;
    *(long **)PTR_DAT_027251e0 = plVar11;
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725250 + 0x10);
    plVar11[1] = 0;
    puVar2 = PTR_DAT_02716d70;
    *(undefined1 *)(plVar11 + 2) = 0;
    if (*(long *)puVar2 != 2) {
      uStack_68 = 0;
      puStack_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_78);
      FUN_00801390(&puStack_78);
    }
    lVar12 = *(long *)puVar1;
    *(undefined4 *)(plVar11 + 4) = 0;
    plVar11[3] = lVar12;
    puVar10 = PTR_DAT_027251e8;
    *(long **)PTR_DAT_027251e8 = plVar11;
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725258 + 0x10);
    plVar11[1] = 0;
    puVar2 = PTR_DAT_02716d70;
    *(undefined1 *)(plVar11 + 2) = 0;
    if (*(long *)puVar2 != 2) {
      uStack_68 = 0;
      puStack_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_78);
      FUN_00801390(&puStack_78);
    }
    lVar12 = *(long *)puVar1;
    *(undefined4 *)(plVar11 + 4) = 0;
    plVar11[3] = lVar12;
    *(long **)PTR_DAT_027251f0 = plVar11;
    *(undefined1 *)(*(long *)PTR_DAT_02725190 + 0x10) = 1;
    *(undefined1 *)(*(long *)PTR_DAT_02725198 + 0x10) = 1;
    *(undefined1 *)(*(long *)PTR_DAT_027251a0 + 0x10) = 1;
    *(undefined1 *)(*(long *)PTR_DAT_027251a8 + 0x10) = 1;
    *(undefined1 *)(*(long *)puVar3 + 0x10) = 1;
    *(undefined1 *)(*(long *)puVar4 + 0x10) = 1;
    *(undefined1 *)(*(long *)puVar5 + 0x10) = 1;
    *(undefined1 *)(*(long *)puVar6 + 0x10) = 1;
    *(undefined1 *)(*(long *)puVar7 + 0x10) = 1;
    *(undefined1 *)(*(long *)puVar8 + 0x10) = 1;
    *(undefined1 *)(*(long *)puVar9 + 0x10) = 1;
    *(undefined1 *)(*(long *)puVar10 + 0x10) = 1;
    *(undefined1 *)(plVar11 + 2) = 1;
    FUN_008010b0(PTR_LAB_02725260);
  }
  return;
}


