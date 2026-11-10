/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005450e0; name: FUN_005450e0
 */


long * FUN_005450e0(undefined8 param_1,uint param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long *plVar16;
  uint uVar17;
  
  if ((param_2 & 0xfffffffe) != 2) {
    return (long *)0x0;
  }
  puVar7 = (undefined8 *)(**(code **)(*param_3 + 0x58))(param_3);
  plVar16 = (long *)*puVar7;
  if (param_2 == 2) {
    piVar8 = (int *)(**(code **)(*plVar16 + 0xd8))(plVar16,0);
    iVar2 = *piVar8;
    if (iVar2 == 3) {
      lVar11 = *(long *)(piVar8 + 8);
    }
    else {
      if (iVar2 != 2) {
        if (iVar2 != 1) {
          return (long *)0x0;
        }
        goto LAB_00545194;
      }
LAB_005451a4:
      lVar11 = *(long *)(piVar8 + 6);
    }
  }
  else {
    piVar8 = (int *)(**(code **)(*plVar16 + 0xe8))(plVar16);
    iVar2 = *piVar8;
    if (iVar2 == 1) {
LAB_00545194:
      lVar11 = *(long *)(piVar8 + 2);
    }
    else {
      if (iVar2 == 3) goto LAB_005451a4;
      if (iVar2 != 2) {
        return (long *)0x0;
      }
      lVar11 = *(long *)(piVar8 + 4);
    }
  }
  if (lVar11 == 0) {
    return (long *)0x0;
  }
  plVar9 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,200,
                                "C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp",0x1428,0)
  ;
  FUN_00545fc0(plVar9,param_1);
  plVar9[0x12] = (long)(plVar9 + 0x12);
  plVar9[0x13] = (long)(plVar9 + 0x12);
  plVar9[0x14] = 0;
  plVar9[0x15] = plVar9[7];
  puVar6 = PTR_DAT_02713b70;
  plVar9[0xe] = 0;
  *(undefined1 *)(plVar9 + 0x16) = 0;
  plVar9[0x17] = 0;
  *(undefined1 *)(plVar9 + 0x18) = 0;
  *plVar9 = (long)(puVar6 + 0x10);
  *(undefined4 *)(plVar9 + 0x11) = 0xffffffff;
  plVar9[0x10] = 0;
  *(undefined4 *)((long)plVar9 + 0xc) = 6;
  *(uint *)(plVar9 + 2) = param_2;
  if (param_2 == 2) {
    *(undefined4 *)((long)plVar9 + 0x24) = 1;
    piVar8 = (int *)(**(code **)(*plVar16 + 0xd8))(plVar16,0);
    iVar2 = *piVar8;
    if (iVar2 == 3) {
      plVar16 = *(long **)(piVar8 + 8);
      uVar17 = piVar8[0xc];
LAB_00545318:
      lVar11 = (**(code **)(*plVar16 + 0x98))(plVar16);
      lVar10 = (**(code **)(*plVar16 + 0x40))(plVar16);
      iVar2 = *(int *)(lVar11 + 4);
      piVar8 = (int *)(lVar11 + 4);
      if ((*(uint *)(lVar10 + 8) & 0x4000) != 0) {
        piVar8 = (int *)(lVar11 + 0xc);
      }
      if ((*(uint *)(lVar10 + 8) & 0x20) != 0) {
        piVar8 = (int *)(lVar11 + 0x10);
      }
      uVar1 = *(uint *)(lVar11 + 0x18);
      iVar4 = *piVar8;
      uVar14 = *(undefined4 *)(lVar11 + 0x34);
      uVar5 = *(uint *)(lVar11 + 0x14) >> (ulong)(uVar17 & 0x1f);
      *(undefined4 *)((long)plVar9 + 0x54) = *(undefined4 *)(lVar11 + 0x30);
      *(undefined4 *)(plVar9 + 0xb) = uVar14;
      if (iVar4 != 0) {
        iVar2 = iVar4;
      }
      if (uVar5 == 0) {
        uVar5 = 1;
      }
      *(int *)((long)plVar9 + 0x44) = iVar2;
      *(undefined4 *)(plVar9 + 9) = *(undefined4 *)((long)plVar9 + 0xc);
      uVar1 = uVar1 >> (ulong)(uVar17 & 0x1f);
      if (uVar1 == 0) {
        uVar1 = 1;
      }
      *(uint *)((long)plVar9 + 0x4c) = uVar5;
      *(uint *)(plVar9 + 10) = uVar1;
      goto LAB_005453d0;
    }
    if (iVar2 == 2) {
      plVar16 = *(long **)(piVar8 + 6);
joined_r0x005453a4:
      if (plVar16 == (long *)0x0) goto LAB_005453d0;
      lVar11 = (**(code **)(*plVar16 + 0x88))();
      uVar3 = *(undefined4 *)((long)plVar9 + 0xc);
      uVar12 = *(undefined4 *)(lVar11 + 4);
      uVar13 = *(undefined8 *)(lVar11 + 0x14);
      uVar14 = *(undefined4 *)(lVar11 + 0x1c);
      uVar15 = *(undefined4 *)(lVar11 + 0x20);
    }
    else {
      if ((iVar2 != 1) || (*(long **)(piVar8 + 2) == (long *)0x0)) goto LAB_005453d0;
      lVar11 = (**(code **)(**(long **)(piVar8 + 2) + 0x88))();
      uVar3 = *(undefined4 *)((long)plVar9 + 0xc);
      uVar12 = *(undefined4 *)(lVar11 + 0x1c);
      uVar13 = *(undefined8 *)(lVar11 + 8);
      uVar14 = *(undefined4 *)(lVar11 + 0x2c);
      uVar15 = *(undefined4 *)(lVar11 + 0x30);
    }
    *(undefined4 *)((long)plVar9 + 0x44) = uVar12;
    *(undefined4 *)(plVar9 + 9) = uVar3;
    *(undefined8 *)((long)plVar9 + 0x4c) = uVar13;
  }
  else {
    *(undefined4 *)((long)plVar9 + 0x24) = 2;
    piVar8 = (int *)(**(code **)(*plVar16 + 0xe8))(plVar16);
    iVar2 = *piVar8;
    if (iVar2 == 3) {
      plVar16 = *(long **)(piVar8 + 6);
      uVar17 = piVar8[10];
      goto LAB_00545318;
    }
    if (iVar2 == 2) {
      plVar16 = *(long **)(piVar8 + 4);
      goto joined_r0x005453a4;
    }
    if ((iVar2 != 1) || (*(long **)(piVar8 + 2) == (long *)0x0)) goto LAB_005453d0;
    lVar11 = (**(code **)(**(long **)(piVar8 + 2) + 0x88))();
    uVar13 = *(undefined8 *)(lVar11 + 8);
    uVar15 = *(undefined4 *)(lVar11 + 0x30);
    uVar14 = *(undefined4 *)(lVar11 + 0x2c);
    *(undefined4 *)((long)plVar9 + 0x44) = *(undefined4 *)(lVar11 + 0x28);
    *(undefined4 *)(plVar9 + 9) = *(undefined4 *)((long)plVar9 + 0xc);
    *(undefined8 *)((long)plVar9 + 0x4c) = uVar13;
  }
  *(undefined4 *)((long)plVar9 + 0x54) = uVar14;
  *(undefined4 *)(plVar9 + 0xb) = uVar15;
LAB_005453d0:
  FUN_00546030(plVar9);
  plVar9[0x15] = 0;
  plVar16 = (long *)(**(code **)(*param_3 + 0x58))(param_3);
  plVar9[0x15] = *plVar16;
  *(undefined1 *)(plVar9 + 0x16) = 0;
  plVar9[0x17] = (long)param_3;
  *(undefined1 *)(plVar9 + 0x18) = 0;
  return plVar9;
}


