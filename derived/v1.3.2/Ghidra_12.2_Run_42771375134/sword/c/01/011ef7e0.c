/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ef7e0; name: _INIT_1431
 */


void _INIT_1431(void)

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
  
  if ((DAT_02a65420 & 1) == 0) {
    DAT_02a65420 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/underground/protocol_buffers/out/data/underground_command.pb.cc"
                );
    FUN_007e26f0(&DAT_01d36f6a,0x2c4);
    FUN_00818650("underground_command.proto",&LAB_011e7f90);
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725c28 + 0x10);
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
    *(long **)PTR_DAT_02725bb8 = plVar11;
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725c30 + 0x10);
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
    *(long **)PTR_DAT_02725bc0 = plVar11;
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725c38 + 0x10);
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
    *(long **)PTR_DAT_02725bc8 = plVar11;
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725c40 + 0x10);
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
    *(long **)PTR_DAT_02725bd0 = plVar11;
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725c48 + 0x10);
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
    *(long **)PTR_DAT_02725bd8 = plVar11;
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725c50 + 0x10);
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
    puVar3 = PTR_DAT_02725be0;
    *(long **)PTR_DAT_02725be0 = plVar11;
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725c58 + 0x10);
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
    puVar4 = PTR_DAT_02725be8;
    *(long **)PTR_DAT_02725be8 = plVar11;
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725c60 + 0x10);
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
    puVar5 = PTR_DAT_02725bf0;
    *(long **)PTR_DAT_02725bf0 = plVar11;
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725c68 + 0x10);
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
    puVar6 = PTR_DAT_02725bf8;
    *(long **)PTR_DAT_02725bf8 = plVar11;
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725c70 + 0x10);
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
    puVar7 = PTR_DAT_02725c00;
    *(long **)PTR_DAT_02725c00 = plVar11;
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725c78 + 0x10);
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
    puVar8 = PTR_DAT_02725c08;
    *(long **)PTR_DAT_02725c08 = plVar11;
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725c80 + 0x10);
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
    puVar9 = PTR_DAT_02725c10;
    *(long **)PTR_DAT_02725c10 = plVar11;
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725c88 + 0x10);
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
    puVar10 = PTR_DAT_02725c18;
    *(long **)PTR_DAT_02725c18 = plVar11;
    plVar11 = operator_new(0x28);
    *plVar11 = (long)(PTR_DAT_02725c90 + 0x10);
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
    plVar11[3] = *(long *)puVar1;
    puVar1 = PTR_DAT_02725c20;
    *(undefined4 *)(plVar11 + 4) = 0;
    *(long **)puVar1 = plVar11;
    *(undefined1 *)(*(long *)PTR_DAT_02725bb8 + 0x10) = 1;
    *(undefined1 *)(*(long *)PTR_DAT_02725bc0 + 0x10) = 1;
    *(undefined1 *)(*(long *)PTR_DAT_02725bc8 + 0x10) = 1;
    *(undefined1 *)(*(long *)PTR_DAT_02725bd0 + 0x10) = 1;
    *(undefined1 *)(*(long *)PTR_DAT_02725bd8 + 0x10) = 1;
    *(undefined1 *)(*(long *)puVar3 + 0x10) = 1;
    *(undefined1 *)(*(long *)puVar4 + 0x10) = 1;
    *(undefined1 *)(*(long *)puVar5 + 0x10) = 1;
    *(undefined1 *)(*(long *)puVar6 + 0x10) = 1;
    *(undefined1 *)(*(long *)puVar7 + 0x10) = 1;
    *(undefined1 *)(*(long *)puVar8 + 0x10) = 1;
    *(undefined1 *)(*(long *)puVar9 + 0x10) = 1;
    *(undefined1 *)(*(long *)puVar10 + 0x10) = 1;
    *(undefined1 *)(plVar11 + 2) = 1;
    FUN_008010b0(PTR_LAB_02725c98);
  }
  return;
}


