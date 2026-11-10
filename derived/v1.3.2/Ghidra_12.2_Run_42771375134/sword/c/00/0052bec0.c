/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0052bec0; name: FUN_0052bec0
 */


undefined8 FUN_0052bec0(long param_1)

{
  uint uVar1;
  float *pfVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  ulong uVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  float *pfVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 local_128;
  long local_120;
  undefined8 local_118;
  float local_110;
  float fStack_10c;
  undefined1 auStack_108 [64];
  undefined1 auStack_c8 [64];
  float local_88;
  float fStack_84;
  
  if ((*(char *)(param_1 + 0x10da) == '\0') || (*(char *)(param_1 + 0x10db) != '\0')) {
    return 0;
  }
  fVar24 = *(float *)(param_1 + 0x6c4);
  fVar25 = fVar24 * *(float *)(param_1 + 0x6d0) * *(float *)(param_1 + 0x420);
  fVar20 = fVar24 * *(float *)(param_1 + 0x6d0);
  fVar26 = *(float *)(param_1 + 0x6d4) * fVar25;
  fVar23 = fVar20 * *(float *)(param_1 + 0x6d8);
  FUN_0050f980(fVar26 - fVar25,fVar25 + fVar26,fVar23 - fVar20,fVar20 + fVar23,fVar24,
               *(undefined4 *)(param_1 + 0x6c8),auStack_c8,0,1);
  fVar24 = *(float *)(param_1 + 0x6c4);
  fVar25 = fVar24 * *(float *)(param_1 + 0x6e8) * *(float *)(param_1 + 0x420);
  fVar20 = fVar24 * *(float *)(param_1 + 0x6e8);
  fVar26 = *(float *)(param_1 + 0x6ec) * fVar25;
  fVar23 = fVar20 * *(float *)(param_1 + 0x6f0);
  FUN_0050f980(fVar26 - fVar25,fVar25 + fVar26,fVar23 - fVar20,fVar20 + fVar23,fVar24,
               *(undefined4 *)(param_1 + 0x6c8),auStack_108,0,1);
  iVar10 = *(int *)(param_1 + 0x58);
  lVar14 = (long)iVar10;
  lVar11 = *(long *)(param_1 + 0x50);
  bVar4 = lVar14 == 8;
  bVar5 = lVar11 != 0;
  if (iVar10 == 8) {
    local_120 = *(long *)(*(long *)(param_1 + 400) +
                          (long)*(int *)(*(long *)(param_1 + 400) + 0x94) * 8 + 0x80);
    uVar8 = (ulong)*(uint *)(local_120 + 0x38);
LAB_0052c07c:
    local_128 = FUN_00561e10(uVar8);
    lVar11 = *(long *)(param_1 + 0x50);
switchD_0052c130_caseD_0:
    uVar22 = local_128;
    if (lVar11 == 0) goto LAB_0052c140;
LAB_0052c08c:
    uVar21 = *(undefined4 *)(param_1 + 0x60);
    uVar22 = *(undefined4 *)(param_1 + 100);
    if (iVar10 != 8) goto LAB_0052c150;
LAB_0052c098:
    bVar6 = *(char *)(param_1 + 0x1014) != '\0';
    if (bVar6) {
      uVar22 = 0x3f800000;
    }
    uVar9 = 0;
    if (bVar6) {
      uVar21 = 0xbf800000;
    }
  }
  else {
    local_120 = lVar11;
    if (bVar4 || bVar5) {
LAB_0052c050:
      uVar1 = *(uint *)(local_120 + 0x38);
    }
    else {
      iVar13 = *(int *)(param_1 + 0x5e0);
      lVar12 = *(long *)(param_1 + 400);
      if (iVar13 == -1) {
        iVar13 = *(int *)(lVar12 + 0x90);
      }
      if (*(int *)(lVar12 + 0x30) <= iVar13) {
        local_120 = 0;
        goto LAB_0052c050;
      }
      local_120 = *(long *)(*(long *)(lVar12 + 0x38) + (long)iVar13 * 8);
      uVar1 = *(uint *)(local_120 + 0x38);
    }
    if ((uVar1 < 0x38) && (uVar8 = (ulong)uVar1, (1L << (uVar8 & 0x3f) & 0x80210000100000U) != 0))
    goto LAB_0052c07c;
    if ((DAT_0275cc3e & 1) == 0) {
      DAT_0275cc3e = 1;
      DAT_0275cd48 = 0x100000000;
      DAT_0275cd50 = 0x300000002;
    }
    if (!bVar4 && !bVar5) {
      lVar14 = 3;
    }
    local_128 = *(undefined4 *)((long)&DAT_0275cd48 + lVar14 * 4);
    switch(local_128) {
    case 0:
    case 1:
    case 2:
    case 3:
      goto switchD_0052c130_caseD_0;
    }
    local_128 = 0xffffffff;
    uVar22 = local_128;
    local_128 = 0xffffffff;
    if (lVar11 != 0) goto LAB_0052c08c;
LAB_0052c140:
    local_128 = uVar22;
    uVar22 = 0;
    uVar21 = 0x3f800000;
    if (iVar10 == 8) goto LAB_0052c098;
LAB_0052c150:
    if (!bVar4 && !bVar5) {
      uVar22 = 0;
      uVar21 = 0x3f800000;
    }
    uVar9 = 6;
    if (!bVar4 && !bVar5) {
      uVar9 = 2;
    }
  }
  FUN_00528d70(uVar21,uVar22,param_1,&local_88,uVar9,0);
  fVar23 = fStack_84;
  fVar20 = local_88;
  local_110 = local_88;
  fStack_10c = fStack_84;
  if ((*(char *)(param_1 + 0xce5) == '\0') || (1 < *(int *)(param_1 + 0xce8) - 1U)) {
    pfVar17 = (float *)0x0;
    local_118 = 0x3f800000;
  }
  else {
    bVar7 = FUN_00562390(*(undefined4 *)(param_1 + 0x6c4),*(undefined4 *)(param_1 + 0x6c8),
                         *(undefined4 *)(param_1 + 0xd10),*(undefined4 *)(param_1 + 0xd14));
    pfVar17 = (float *)(param_1 + 0x1084);
    if ((bVar7 & 1) == 0) {
      pfVar17 = (float *)0x0;
    }
    local_118 = 0x3f800000;
    if (((bVar4 || bVar5) & bVar7) == 1) {
      FUN_00528d70(0x3f800000,0,param_1,&local_88,0,2);
      fVar24 = *pfVar17;
      pfVar2 = pfVar17 + 1;
      pfVar17 = (float *)&local_118;
      local_118 = CONCAT44((fVar23 * local_88 + fStack_84) * fVar24 + *pfVar2,
                           fVar20 * local_88 * fVar24);
    }
  }
  puVar3 = PTR_DAT_027139b0;
  uVar15 = *(undefined8 *)(param_1 + 0xd70);
  uVar19 = *(undefined8 *)(param_1 + 0xd78);
  if (*(int *)(param_1 + 0xd2c) == 0) {
    uVar22 = 0xfffffffe;
  }
  else if (*(int *)(param_1 + 0xd2c) == 1) {
    uVar22 = *(undefined4 *)(param_1 + 0xd30);
  }
  else {
    uVar22 = 0xffffffff;
  }
  iVar10 = *(int *)PTR_DAT_027139b0;
  if (iVar10 < 1) {
    plVar16 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar16,0);
    *(long **)PTR_DAT_027139b8 = plVar16;
    *(undefined4 *)puVar3 = 1;
  }
  else {
    plVar16 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar10 + 1;
    if (1 < iVar10 + 1) goto LAB_0052c348;
  }
  if (plVar16 == (long *)0x0) {
    iVar10 = 0;
  }
  else {
    uVar18 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar16 + 0x20))(plVar16);
    FUN_005b9b10(uVar18,plVar16);
    iVar10 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
LAB_0052c348:
  *(int *)puVar3 = iVar10;
  uVar15 = FUN_00585000(*(undefined4 *)(param_1 + 0x108c),plVar16,local_120,uVar15,uVar19,
                        param_1 + 0x6f4,param_1 + 0x774,auStack_c8,auStack_108,local_128,&local_110,
                        pfVar17,uVar22,param_1 + 0xd64,0,param_1 + 0xd6c);
  if (-1 < (int)uVar15) {
    uVar15 = 0;
    *(char *)(param_1 + 0x10db) = '\x01';
  }
  return uVar15;
}


