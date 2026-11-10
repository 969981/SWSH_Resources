/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b45f0; name: FUN_005b45f0
 */


uint FUN_005b45f0(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar1 = PTR_DAT_027139b0;
  if (*(float *)(param_1 + 0x1dc) == 0.0) {
    return 1;
  }
  iVar6 = *(int *)PTR_DAT_027139b0;
  if (iVar6 < 1) {
    plVar12 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar12,0);
    *(long **)PTR_DAT_027139b8 = plVar12;
    *(undefined4 *)puVar1 = 1;
    if (plVar12 != (long *)0x0) goto LAB_005b4658;
LAB_005b46e8:
    iVar6 = 0;
  }
  else {
    plVar12 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar6 + 1;
    if (iVar6 + 1 < 2) {
      if (plVar12 == (long *)0x0) goto LAB_005b46e8;
LAB_005b4658:
      uVar13 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar12 + 0x20))(plVar12);
      FUN_005b9b10(uVar13,plVar12);
      iVar6 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *(int *)puVar1 = iVar6;
  uVar9 = -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3;
  lVar15 = *(long *)(*(long *)(param_1 + 0x450) + uVar9);
  lVar14 = *(long *)(*(long *)(param_1 + 0x448) + uVar9);
  if (*(float *)(param_1 + 0x1dc) == 0.0) {
    local_80 = lVar15;
  }
  else {
    lVar7 = (long)(int)param_2;
    local_80 = *(long *)(*(long *)(param_1 + 0x470) + lVar7 * 8);
    if (local_80 == 0) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x468) + lVar7 * 8);
      local_80 = lVar15;
    }
    else {
      lVar7 = *(long *)(*(long *)(param_1 + 0x468) + lVar7 * 8);
    }
    if (lVar7 != 0) goto LAB_005b4758;
  }
  lVar7 = lVar14;
LAB_005b4758:
  lVar8 = local_80;
  uStack_70 = 0;
  fVar19 = ((float)(int)param_2 + 1.0) * DAT_01d4be10 * 0.25 + 0.25;
  local_68 = 0;
  local_78 = lVar7;
  if (local_80 == lVar15) {
    uVar3 = 0;
  }
  else {
    lVar10 = lVar15;
    do {
      lVar11 = lVar10;
      lVar10 = *(long *)(lVar11 + 0x120);
    } while (lVar10 != 0);
    uVar2 = (**(code **)(**(long **)(lVar11 + 0xa8) + 0x80))();
    lVar10 = lVar15;
    do {
      lVar11 = lVar10;
      lVar10 = *(long *)(lVar11 + 0x120);
    } while (lVar10 != 0);
    plVar5 = *(long **)(lVar11 + 0xa8);
    (**(code **)(*plVar5 + 0x78))(plVar5,8);
    local_90 = 0x3f8000003f800000;
    uStack_88 = 0x3f8000003f800000;
    local_a0 = 0;
    uStack_98 = 0;
    fVar16 = fVar19 * *(float *)(param_1 + 0x1dc);
    fVar17 = fVar16;
    if (1.0 < fVar16) {
      fVar17 = 1.0;
    }
    fVar18 = 0.0;
    if (0.0 <= fVar16) {
      fVar18 = fVar17;
    }
    uVar3 = FUN_0057e050(0,0,fVar18,0x3f800000,plVar12,lVar15,lVar8,0,&local_90,0,0,0,1,&local_a0,0,
                         0xffffffff);
    do {
      lVar8 = lVar15;
      lVar15 = *(long *)(lVar8 + 0x120);
    } while (lVar15 != 0);
    uVar3 = uVar3 & (int)uVar3 >> 0x1f;
    plVar5 = *(long **)(lVar8 + 0xa8);
    (**(code **)(*plVar5 + 0x78))(plVar5,uVar2);
  }
  if (lVar14 != lVar7) {
    lVar15 = lVar14;
    do {
      lVar8 = lVar15;
      lVar15 = *(long *)(lVar8 + 0x120);
    } while (lVar15 != 0);
    uVar2 = (**(code **)(**(long **)(lVar8 + 0xa8) + 0x80))();
    lVar15 = lVar14;
    do {
      lVar8 = lVar15;
      lVar15 = *(long *)(lVar8 + 0x120);
    } while (lVar15 != 0);
    plVar5 = *(long **)(lVar8 + 0xa8);
    (**(code **)(*plVar5 + 0x78))(plVar5,8);
    local_90 = 0x3f8000003f800000;
    uStack_88 = 0x3f8000003f800000;
    local_a0 = 0;
    uStack_98 = 0;
    fVar19 = fVar19 * *(float *)(param_1 + 0x1dc);
    fVar17 = fVar19;
    if (1.0 < fVar19) {
      fVar17 = 1.0;
    }
    fVar16 = 0.0;
    if (0.0 <= fVar19) {
      fVar16 = fVar17;
    }
    uVar4 = FUN_0057e050(0,0,fVar16,0x3f800000,plVar12,lVar14,lVar7,0,&local_90,0,0,0,1,&local_a0,0,
                         0xffffffff);
    do {
      lVar15 = lVar14;
      lVar14 = *(long *)(lVar15 + 0x120);
    } while (lVar14 != 0);
    if (-1 < (int)uVar4) {
      uVar4 = uVar3;
    }
    plVar12 = *(long **)(lVar15 + 0xa8);
    (**(code **)(*plVar12 + 0x78))(plVar12,uVar2);
    uVar3 = uVar4;
  }
  return uVar3;
}


