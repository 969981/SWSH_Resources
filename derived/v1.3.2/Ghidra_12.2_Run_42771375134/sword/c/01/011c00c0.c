/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011c00c0; name: FUN_011c00c0
 */


void FUN_011c00c0(void)

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
  long *plVar10;
  long lVar11;
  undefined *local_78;
  undefined *puStack_70;
  undefined1 local_68;
  
  if ((DAT_02a64fa8 & 1) == 0) {
    DAT_02a64fa8 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffers/out/data/nesthole_command.pb.cc"
                );
    FUN_007e26f0(&DAT_01cfde03,0x1a0);
    FUN_00818650("nesthole_command.proto",&LAB_011c0770);
    plVar10 = operator_new(0x28);
    *plVar10 = (long)(PTR_DAT_02725710 + 0x10);
    plVar10[1] = 0;
    puVar1 = PTR_DAT_02716d70;
    *(undefined1 *)(plVar10 + 2) = 0;
    if (*(long *)puVar1 != 2) {
      local_68 = 0;
      local_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&local_78);
      FUN_00801390(&local_78);
    }
    puVar1 = PTR_DAT_02716d10;
    lVar11 = *(long *)PTR_DAT_02716d10;
    *(undefined4 *)(plVar10 + 4) = 0;
    plVar10[3] = lVar11;
    puVar3 = PTR_DAT_027256d0;
    *(long **)PTR_DAT_027256d0 = plVar10;
    plVar10 = operator_new(0x28);
    *plVar10 = (long)(PTR_DAT_02725718 + 0x10);
    plVar10[1] = 0;
    puVar2 = PTR_DAT_02716d70;
    *(undefined1 *)(plVar10 + 2) = 0;
    if (*(long *)puVar2 != 2) {
      local_68 = 0;
      local_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&local_78);
      FUN_00801390(&local_78);
    }
    lVar11 = *(long *)puVar1;
    *(undefined4 *)(plVar10 + 4) = 0;
    plVar10[3] = lVar11;
    puVar4 = PTR_DAT_027256d8;
    *(long **)PTR_DAT_027256d8 = plVar10;
    plVar10 = operator_new(0x28);
    *plVar10 = (long)(PTR_DAT_02725720 + 0x10);
    plVar10[1] = 0;
    puVar2 = PTR_DAT_02716d70;
    *(undefined1 *)(plVar10 + 2) = 0;
    if (*(long *)puVar2 != 2) {
      local_68 = 0;
      local_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&local_78);
      FUN_00801390(&local_78);
    }
    lVar11 = *(long *)puVar1;
    *(undefined4 *)(plVar10 + 4) = 0;
    plVar10[3] = lVar11;
    puVar5 = PTR_DAT_027256e0;
    *(long **)PTR_DAT_027256e0 = plVar10;
    plVar10 = operator_new(0x28);
    *plVar10 = (long)(PTR_DAT_02725728 + 0x10);
    plVar10[1] = 0;
    puVar2 = PTR_DAT_02716d70;
    *(undefined1 *)(plVar10 + 2) = 0;
    if (*(long *)puVar2 != 2) {
      local_68 = 0;
      local_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&local_78);
      FUN_00801390(&local_78);
    }
    lVar11 = *(long *)puVar1;
    *(undefined4 *)(plVar10 + 4) = 0;
    plVar10[3] = lVar11;
    puVar6 = PTR_DAT_027256e8;
    *(long **)PTR_DAT_027256e8 = plVar10;
    plVar10 = operator_new(0x28);
    *plVar10 = (long)(PTR_DAT_02725730 + 0x10);
    plVar10[1] = 0;
    puVar2 = PTR_DAT_02716d70;
    *(undefined1 *)(plVar10 + 2) = 0;
    if (*(long *)puVar2 != 2) {
      local_68 = 0;
      local_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&local_78);
      FUN_00801390(&local_78);
    }
    lVar11 = *(long *)puVar1;
    *(undefined4 *)(plVar10 + 4) = 0;
    plVar10[3] = lVar11;
    puVar7 = PTR_DAT_027256f0;
    *(long **)PTR_DAT_027256f0 = plVar10;
    plVar10 = operator_new(0x28);
    *plVar10 = (long)(PTR_DAT_02725738 + 0x10);
    plVar10[1] = 0;
    puVar2 = PTR_DAT_02716d70;
    *(undefined1 *)(plVar10 + 2) = 0;
    if (*(long *)puVar2 != 2) {
      local_68 = 0;
      local_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&local_78);
      FUN_00801390(&local_78);
    }
    lVar11 = *(long *)puVar1;
    *(undefined4 *)(plVar10 + 4) = 0;
    plVar10[3] = lVar11;
    puVar8 = PTR_DAT_027256f8;
    *(long **)PTR_DAT_027256f8 = plVar10;
    plVar10 = operator_new(0x28);
    *plVar10 = (long)(PTR_DAT_02725740 + 0x10);
    plVar10[1] = 0;
    puVar2 = PTR_DAT_02716d70;
    *(undefined1 *)(plVar10 + 2) = 0;
    if (*(long *)puVar2 != 2) {
      local_68 = 0;
      local_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&local_78);
      FUN_00801390(&local_78);
    }
    lVar11 = *(long *)puVar1;
    *(undefined4 *)(plVar10 + 4) = 0;
    plVar10[3] = lVar11;
    puVar9 = PTR_DAT_02725700;
    *(long **)PTR_DAT_02725700 = plVar10;
    plVar10 = operator_new(0x28);
    *plVar10 = (long)(PTR_DAT_02725748 + 0x10);
    plVar10[1] = 0;
    puVar2 = PTR_DAT_02716d70;
    *(undefined1 *)(plVar10 + 2) = 0;
    if (*(long *)puVar2 != 2) {
      local_68 = 0;
      local_78 = PTR_DAT_02716670 + 0x10;
      puStack_70 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&local_78);
      FUN_00801390(&local_78);
    }
    plVar10[3] = *(long *)puVar1;
    *(long **)PTR_DAT_02725708 = plVar10;
    lVar11 = *(long *)puVar3;
    *(undefined4 *)(plVar10 + 4) = 0;
    *(undefined1 *)(lVar11 + 0x10) = 1;
    *(undefined1 *)(*(long *)puVar4 + 0x10) = 1;
    *(undefined1 *)(*(long *)puVar5 + 0x10) = 1;
    *(undefined1 *)(*(long *)puVar6 + 0x10) = 1;
    *(undefined1 *)(*(long *)puVar7 + 0x10) = 1;
    *(undefined1 *)(*(long *)puVar8 + 0x10) = 1;
    *(undefined1 *)(*(long *)puVar9 + 0x10) = 1;
    *(undefined1 *)(plVar10 + 2) = 1;
    FUN_008010b0(PTR_LAB_02725750);
  }
  return;
}


