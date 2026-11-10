/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00532620; name: FUN_00532620
 */


undefined8 FUN_00532620(long param_1)

{
  undefined8 *puVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  undefined8 in_stack_fffffffffffffe98;
  undefined4 uVar35;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  
  puVar6 = PTR_DAT_027139b0;
  uVar35 = (undefined4)((ulong)in_stack_fffffffffffffe98 >> 0x20);
  if (*(char *)(param_1 + 0x10df) == '\0') {
    return 0;
  }
  lVar19 = (long)*(int *)(param_1 + 0x298);
  iVar12 = *(int *)PTR_DAT_027139b0;
  if (iVar12 < 1) {
    plVar15 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar15,0);
    *(long **)PTR_DAT_027139b8 = plVar15;
    *(undefined4 *)puVar6 = 1;
    if (plVar15 != (long *)0x0) goto LAB_00532698;
LAB_00532720:
    iVar12 = 0;
  }
  else {
    plVar15 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar12 + 1;
    if (iVar12 + 1 < 2) {
      if (plVar15 == (long *)0x0) goto LAB_00532720;
LAB_00532698:
      uVar16 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar15 + 0x20))(plVar15);
      FUN_005b9b10(uVar16,plVar15);
      iVar12 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *(int *)puVar6 = iVar12;
  iVar12 = *(int *)(param_1 + 0x5fc);
  uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x238) + (long)*(int *)(param_1 + 0x298) * 8);
  lVar13 = *(long *)(param_1 + 400);
  if (iVar12 == -1) {
    iVar12 = *(int *)(lVar13 + 0x90);
    iVar14 = *(int *)(lVar13 + 0x30);
    if (iVar12 < iVar14) goto LAB_00532754;
LAB_0053277c:
    uVar17 = 0;
    iVar12 = *(int *)(param_1 + 0x600);
    if (iVar12 == -1) goto LAB_005327cc;
LAB_0053278c:
    if (iVar14 <= iVar12) goto LAB_005327d8;
LAB_00532794:
    uVar21 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + (long)iVar12 * 8);
    iVar12 = *(int *)(param_1 + 0xf0c);
    if (iVar12 - 1U < 2) goto LAB_005327ec;
LAB_005327ac:
    uVar22 = 0;
    uVar33 = *(undefined4 *)(param_1 + 0xf28);
    fVar31 = *(float *)(param_1 + 0x8c0);
    if (*(char *)(param_1 + 0x59a) == '\0') goto LAB_00532800;
LAB_005327c0:
    fVar32 = fVar31 * *(float *)(param_1 + 0x7fc);
  }
  else {
    iVar14 = *(int *)(lVar13 + 0x30);
    if (iVar14 <= iVar12) goto LAB_0053277c;
LAB_00532754:
    uVar17 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + (long)iVar12 * 8);
    iVar12 = *(int *)(param_1 + 0x600);
    if (iVar12 != -1) goto LAB_0053278c;
LAB_005327cc:
    iVar12 = *(int *)(lVar13 + 0x90);
    if (iVar12 < iVar14) goto LAB_00532794;
LAB_005327d8:
    uVar21 = 0;
    iVar12 = *(int *)(param_1 + 0xf0c);
    if (1 < iVar12 - 1U) goto LAB_005327ac;
LAB_005327ec:
    uVar22 = *(undefined8 *)(param_1 + 0xd70);
    uVar33 = *(undefined4 *)(param_1 + 0xf28);
    fVar31 = *(float *)(param_1 + 0x8c0);
    if (*(char *)(param_1 + 0x59a) != '\0') goto LAB_005327c0;
LAB_00532800:
    fVar32 = *(float *)(param_1 + 0x7f8);
  }
  iVar5 = *(int *)(param_1 + 0x58);
  lVar20 = (long)iVar5;
  lVar18 = *(long *)(param_1 + 0x50);
  bVar7 = lVar20 == 8;
  bVar8 = lVar18 != 0;
  if (iVar5 == 8) {
    lVar18 = *(long *)(lVar13 + (long)*(int *)(lVar13 + 0x94) * 8 + 0x80);
    uVar11 = (ulong)*(uint *)(lVar18 + 0x38);
LAB_005328a4:
    uVar10 = FUN_00561e10(uVar11);
  }
  else {
    if (bVar7 || bVar8) {
LAB_0053287c:
      uVar4 = *(uint *)(lVar18 + 0x38);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x5e0);
      if (iVar3 == -1) {
        iVar3 = *(int *)(lVar13 + 0x90);
      }
      if (iVar14 <= iVar3) {
        lVar18 = 0;
        goto LAB_0053287c;
      }
      lVar18 = *(long *)(*(long *)(lVar13 + 0x38) + (long)iVar3 * 8);
      uVar4 = *(uint *)(lVar18 + 0x38);
    }
    if ((uVar4 < 0x38) && (uVar11 = (ulong)uVar4, (1L << (uVar11 & 0x3f) & 0x80210000100000U) != 0))
    goto LAB_005328a4;
    if ((DAT_0275cc3e & 1) == 0) {
      DAT_0275cc3e = 1;
      DAT_0275cd48 = 0x100000000;
      DAT_0275cd50 = 0x300000002;
    }
    if (!bVar7 && !bVar8) {
      lVar20 = 3;
    }
    uVar10 = *(undefined4 *)((long)&DAT_0275cd48 + lVar20 * 4);
    switch(uVar10) {
    case 0:
    case 1:
    case 2:
    case 3:
      break;
    default:
      uVar10 = 0xffffffff;
    }
  }
  local_c8 = 0x3f800000;
  local_c0 = 0x3f800000;
  local_d8 = 0x3f800000;
  local_d0 = 0x3f800000;
  if (iVar12 != 2) goto LAB_0053299c;
  if (*(long *)(param_1 + 0x50) == 0) {
    uVar28 = 0;
    uVar25 = 0;
    uVar29 = 0x3f800000;
    uVar23 = 0x3f800000;
    if (iVar5 == 8) goto LAB_005328d4;
LAB_0053290c:
    uVar25 = uVar28;
    if (!bVar7 && !bVar8) {
      uVar25 = 0;
    }
    uVar26 = 0x3f800000;
    uVar23 = uVar29;
    if (!bVar7 && !bVar8) {
      uVar23 = 0x3f800000;
    }
    uVar28 = 6;
    if (!bVar7 && !bVar8) {
      uVar28 = 2;
    }
  }
  else {
    uVar23 = *(undefined4 *)(param_1 + 0x60);
    uVar25 = *(undefined4 *)(param_1 + 100);
    uVar28 = uVar25;
    uVar29 = uVar23;
    if (iVar5 != 8) goto LAB_0053290c;
LAB_005328d4:
    bVar9 = *(char *)(param_1 + 0x1014) != '\0';
    if (bVar9) {
      uVar25 = 0x3f800000;
    }
    uVar26 = 0xbf800000;
    uVar28 = 0;
    if (bVar9) {
      uVar23 = 0xbf800000;
    }
  }
  FUN_00528d70(uVar23,uVar25,uVar26,param_1,&local_b8,uVar28,0);
  local_c8 = local_b8;
  local_c0 = local_b0;
  puVar1 = (undefined8 *)(*(long *)(param_1 + 600) + lVar19 * 0x10);
  local_d8 = *puVar1;
  local_d0 = puVar1[1];
  if ((float)local_d8 == 0.0) {
    FUN_00528d70(0x3f800000,0,param_1,&local_b8,2,0);
    local_d8 = local_b8;
    local_d0 = local_b0;
  }
LAB_0053299c:
  fVar24 = *(float *)(param_1 + 0xd64);
  fVar27 = *(float *)(param_1 + 0xd68);
  if (fVar24 <= 0.0) {
    fVar24 = -fVar24;
  }
  if (fVar27 <= 0.0) {
    fVar27 = -fVar27;
  }
  lVar13 = lVar19 * 4;
  fVar34 = *(float *)(param_1 + 0xf20);
  fVar30 = *(float *)(param_1 + 0xf24);
  uVar28 = *(undefined4 *)(*(long *)(param_1 + 0x240) + lVar13);
  uVar29 = *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar13);
  local_b8 = 0x3f8000003f800000;
  local_b0 = 0x3f800000;
  local_e8 = 0x3f8000003f800000;
  local_e0 = 0x3f800000;
  if (fVar27 <= fVar24) {
    fVar24 = fVar27;
  }
  fVar27 = *(float *)(param_1 + 0xf1c);
  if (fVar24 <= *(float *)(param_1 + 0xf1c)) {
    fVar27 = fVar24;
  }
  if (!bVar7 && !bVar8) {
    lVar18 = 0;
  }
  FUN_0058fbf0(fVar31 / fVar32,uVar33,*(undefined4 *)(param_1 + 0x6c4),
               *(undefined4 *)(param_1 + 0x6c8),fVar27,uVar28,uVar29,fVar34 * 0.5,plVar15,uVar21,
               uVar17,uVar22,uVar16,lVar18,iVar12 == 2,*(undefined4 *)(param_1 + 0xd6c),
               param_1 + 0xd64,CONCAT44(uVar35,uVar10),&local_c8,&local_d8,fVar34,fVar30 * 0.5,
               fVar30,*(float *)(param_1 + 0x7f8) / *(float *)(*(long *)(param_1 + 0x250) + lVar13),
               &local_b8,&local_e8,0);
  local_b8 = 0x3f8000003f800000;
  local_b0 = 0x3f8000003f800000;
  local_e8 = 0;
  local_e0 = 0;
  FUN_0057e050(0,0,0,0x3f800000,plVar15,uVar21,uVar16,0,&local_b8,0,0,0,1,&local_e8,0,0xffffffff);
  if (*(char *)(param_1 + 0xf10) != '\0') {
    local_b8 = 0x3f8000003dcccccd;
    local_b0 = 0x3dcccccd;
    local_e8 = 0x3dcccccd3f800000;
    local_e0 = 0x3f800000;
    FUN_0058fbf0(fVar31 / fVar32,uVar33,*(undefined4 *)(param_1 + 0x6c4),
                 *(undefined4 *)(param_1 + 0x6c8),fVar27,uVar28,uVar29,fVar34 * 0.5,plVar15,uVar21,
                 uVar17,uVar22,uVar16,lVar18,iVar12 == 2,*(undefined4 *)(param_1 + 0xd6c),
                 param_1 + 0xd64,uVar10,&local_c8,&local_d8,fVar34,fVar30 * 0.5,fVar30,
                 *(float *)(param_1 + 0x7f8) / *(float *)(*(long *)(param_1 + 0x250) + lVar19 * 4),
                 &local_b8,&local_e8,0);
  }
  fVar31 = 1.0 / (1.0 / *(float *)(*(long *)(param_1 + 0x240) + lVar13) + 1.0);
  local_b8._0_4_ = fVar31;
  pfVar2 = (float *)&local_b8;
  if (fVar31 <= *(float *)(param_1 + 0xf14)) {
    pfVar2 = (float *)(param_1 + 0xf14);
  }
  *(float *)(*(long *)(param_1 + 0x240) + lVar13) = *pfVar2;
  fVar31 = *(float *)(param_1 + 0xf18);
  if ((fVar31 <= 0.0) || (1.0 < fVar31)) {
    fVar31 = powf(*(float *)(param_1 + 0xf14),DAT_01d4bf50);
  }
  local_b8 = CONCAT44(local_b8._4_4_,fVar31);
  fVar32 = 1.0 / (1.0 / *(float *)(*(long *)(param_1 + 0x248) + lVar13) + 1.0);
  local_e8 = CONCAT44(local_e8._4_4_,fVar32);
  puVar1 = &local_e8;
  if (fVar32 <= fVar31) {
    puVar1 = &local_b8;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar13) = *(undefined4 *)puVar1;
  *(undefined4 *)(*(long *)(param_1 + 0x250) + lVar13) = *(undefined4 *)(param_1 + 0x7f8);
  FUN_00528d70(0x3f800000,0,param_1,&local_b8,2,0);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 600) + lVar19 * 0x10);
  *puVar1 = local_b8;
  *(undefined4 *)(puVar1 + 1) = (undefined4)local_b0;
  *(undefined4 *)((long)puVar1 + 0xc) = local_b0._4_4_;
  return 0;
}


