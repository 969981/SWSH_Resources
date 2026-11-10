/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0052cd40; name: FUN_0052cd40
 */


undefined8
FUN_0052cd40(float param_1,long param_2,int param_3,ulong param_4,long param_5,long param_6,
            ulong param_7,long param_8,int param_9,int param_10,undefined4 param_11)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulong in_stack_fffffffffffffe70;
  ulong uVar30;
  undefined8 in_stack_fffffffffffffe78;
  undefined4 uVar31;
  undefined8 in_stack_fffffffffffffe88;
  undefined4 uVar32;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  float local_f8;
  float fStack_f4;
  float local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  piVar10 = (int *)PTR_DAT_027139b0;
  uVar32 = (undefined4)((ulong)in_stack_fffffffffffffe88 >> 0x20);
  uVar31 = (undefined4)((ulong)in_stack_fffffffffffffe78 >> 0x20);
  pcVar1 = (char *)(param_2 + 0x1051);
  if ((*pcVar1 == '\0') && (*(long *)(param_2 + 0x50) == 0)) {
    return 0;
  }
  iVar3 = *(int *)PTR_DAT_027139b0;
  if (iVar3 < 1) {
    plVar8 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar8,0);
    *(long **)PTR_DAT_027139b8 = plVar8;
    *piVar10 = 1;
    if (plVar8 != (long *)0x0) goto LAB_0052cde0;
LAB_0052ce90:
    iVar3 = 0;
  }
  else {
    plVar8 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar3 + 1;
    if (iVar3 + 1 < 2) {
      if (plVar8 == (long *)0x0) goto LAB_0052ce90;
LAB_0052cde0:
      uVar13 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar8 + 0x20))(plVar8);
      piVar10 = (int *)PTR_DAT_027139b0;
      FUN_005b9b10(uVar13,plVar8);
      iVar3 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *piVar10 = iVar3;
  iVar3 = -(param_3 >> 0x1f);
  bVar2 = iVar3 != 0;
  if ((param_3 < 0) && (param_5 == 0 || param_5 == param_6)) {
    iVar7 = *(int *)(param_2 + 0x5d8);
    if (iVar7 == -1) {
      iVar7 = *(int *)(*(long *)(param_2 + 400) + 0x90);
    }
    lVar6 = *(long *)(*(long *)(*(long *)(param_2 + 400) + 0x38) + (long)iVar7 * 8);
    if ((*(byte *)(*(long *)(lVar6 + (long)*(int *)(lVar6 + 0xa0) * 8 + 0xb8) + 0x5e) >> 3 & 1) == 0
       ) {
      FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
      FUN_005a60a0(*(undefined8 *)(param_2 + 400),1,0x7fffffff);
      iVar3 = 0;
      param_3 = 0;
    }
    bVar2 = iVar3 != 0;
  }
  if ((param_4 & 1) != 0) {
    uVar4 = 1;
    if (!bVar2) {
      uVar4 = 2;
    }
    FUN_005714c0(plVar8,uVar4,3,4);
  }
  if (bVar2) {
    FUN_00540cb0(*(undefined8 *)(param_2 + 0x18),8);
    (**(code **)(**(long **)(param_2 + 0x18) + 0x168))(*(long **)(param_2 + 0x18),2);
    param_3 = 0;
  }
  else if (param_5 == 0) {
    iVar3 = *(int *)(param_2 + 0x5d8);
    lVar6 = *(long *)(param_2 + 400);
    if (iVar3 == -1) {
      iVar3 = *(int *)(lVar6 + 0x90);
      if (*(int *)(lVar6 + 0x30) <= iVar3) goto LAB_0052d014;
    }
    else if (*(int *)(lVar6 + 0x30) <= iVar3) {
LAB_0052d014:
      param_5 = 0;
      goto joined_r0x0052cfdc;
    }
    param_5 = *(long *)(*(long *)(lVar6 + 0x38) + (long)iVar3 * 8);
  }
joined_r0x0052cfdc:
  if (param_6 == 0) {
    iVar3 = *(int *)(param_2 + 0x5e0);
    lVar6 = *(long *)(param_2 + 400);
    if (iVar3 == -1) {
      iVar3 = *(int *)(lVar6 + 0x90);
      if (*(int *)(lVar6 + 0x30) <= iVar3) goto LAB_0052cffc;
    }
    else if (*(int *)(lVar6 + 0x30) <= iVar3) {
LAB_0052cffc:
      param_6 = 0;
      goto LAB_0052d01c;
    }
    param_6 = *(long *)(*(long *)(lVar6 + 0x38) + (long)iVar3 * 8);
  }
LAB_0052d01c:
  uVar4 = (undefined4)(in_stack_fffffffffffffe70 >> 0x20);
  lVar6 = param_5;
  if (param_5 == 0) {
    lVar6 = param_6;
  }
  fVar14 = *(float *)(lVar6 + 0x90);
  fVar27 = *(float *)(lVar6 + 0x94);
  uVar16 = *(undefined4 *)(lVar6 + 0x54);
  uVar18 = *(undefined4 *)(lVar6 + 0x58);
  fVar23 = *(float *)(lVar6 + 0x88);
  fVar22 = *(float *)(lVar6 + 0x8c);
  uVar20 = *(undefined4 *)(param_6 + 0x54);
  uVar25 = *(undefined4 *)(param_6 + 0x58);
  if ((param_5 != 0) || ((param_7 & 1) == 0)) {
    uVar30 = in_stack_fffffffffffffe70 & 0xffffffff00000000;
    local_e0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = param_6;
    uVar13 = FUN_0059db20(0x3f800000,8,&local_e8,0,0,0,0,0,0,uVar30);
    uVar4 = (undefined4)(uVar30 >> 0x20);
    if ((int)uVar13 < 0) {
      return uVar13;
    }
  }
  FUN_0059d000(0,0);
  if (*pcVar1 == '\0') {
    lVar6 = *(long *)(param_2 + 0x50);
    if (*(long *)(param_2 + 0x50) == 0) {
      plVar11 = (long *)0x0;
    }
    else {
      do {
        lVar5 = lVar6;
        lVar6 = *(long *)(lVar5 + 0x120);
      } while (lVar6 != 0);
      plVar11 = *(long **)(lVar5 + 0xa8);
    }
  }
  else {
    plVar11 = *(long **)(*(long *)(param_2 + 400) +
                         (long)*(int *)(*(long *)(param_2 + 400) + 0x94) * 8 + 0x60);
  }
  plVar12 = (long *)0x0;
  if (param_5 != 0) {
    do {
      lVar6 = param_5;
      param_5 = *(long *)(lVar6 + 0x120);
    } while (param_5 != 0);
    plVar12 = *(long **)(lVar6 + 0xa8);
  }
  fVar28 = (float)NEON_ucvtf(uVar18);
  fVar19 = (float)NEON_ucvtf(uVar20);
  fVar21 = (float)NEON_ucvtf(uVar25);
  uVar18 = *(undefined4 *)(param_2 + 0x1064);
  fVar17 = (float)NEON_ucvtf(uVar16);
  uVar16 = *(undefined4 *)(*(long *)(param_2 + 0x1a0) + 0x16c);
  FUN_005aefe0();
  (**(code **)(*plVar11 + 0x88))(plVar11,1);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x88))(plVar12,fVar17 == fVar19 && fVar28 == fVar21);
  }
  if (*(char *)(param_2 + 0x59a) == '\0') {
    fVar15 = *(float *)(param_2 + 0x7f8);
    local_f8 = fVar15;
  }
  else {
    fVar15 = *(float *)(param_2 + 0x7f8);
    local_f8 = *(float *)(param_2 + 0x8c0) * *(float *)(param_2 + 0x7fc);
  }
  local_f8 = local_f8 / fVar15;
  local_ec = 0x3f800000;
  local_108 = 0x3f800000;
  local_100 = 0x3f800000;
  local_118 = 0x3f800000;
  local_110 = 0x3f800000;
  fStack_f4 = local_f8;
  local_f0 = local_f8;
  if (param_8 == 0) {
    fVar15 = 0.5;
    plVar9 = (long *)0x0;
  }
  else {
    do {
      lVar6 = param_8;
      param_8 = *(long *)(lVar6 + 0x120);
    } while (param_8 != 0);
    plVar9 = *(long **)(lVar6 + 0xa8);
    (**(code **)(*plVar9 + 0x78))(plVar9,4);
    fVar15 = 1.0;
    fVar24 = 0.0;
    FUN_00528d70(0x3f800000,0,param_2,&local_e8,6,param_9);
    fVar29 = 1.0;
    local_100 = local_e0;
    local_108._0_4_ = (float)local_e8;
    local_108._4_4_ = local_e8._4_4_;
    fVar26 = 0.0;
    if (*(long *)(param_2 + 0x50) != 0) {
      fVar15 = *(float *)(param_2 + 0x60);
      fVar24 = *(float *)(param_2 + 100);
      fVar29 = *(float *)(param_2 + 0x68);
      fVar26 = *(float *)(param_2 + 0x6c);
    }
    if (param_9 == 6) {
      local_108._0_4_ = (float)local_e8 * fVar15;
      local_108._4_4_ = local_e8._4_4_ * fVar15 + fVar24;
    }
    FUN_00528d70(0x3f800000,0,param_2,&local_e8,param_10,1);
    local_110 = local_e0;
    local_118 = local_e8;
    if (param_10 == 6) {
      local_118 = CONCAT44(fVar26 * (float)local_e8 + local_e8._4_4_,fVar29 * (float)local_e8);
    }
    fVar15 = (float)NEON_ucvtf((int)plVar9[10]);
    fVar24 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar9 + 0x4c));
    fVar26 = (fVar24 + -1.0) / fVar24;
    local_108 = CONCAT44(0.5 / fVar24 + fVar26 * local_108._4_4_,(float)local_108 * fVar26);
    fVar15 = (param_1 + 0.5) / fVar15;
  }
  fVar14 = fVar23 * fVar17 + fVar14;
  fVar27 = fVar22 * fVar28 + fVar27;
  if (*pcVar1 == '\0') {
    if (*(long *)(param_2 + 0x50) == 0) goto LAB_0052d4bc;
    if ((DAT_0275cc3e & 1) == 0) {
      DAT_0275cc3e = 1;
      DAT_0275cd48 = 0x100000000;
      DAT_0275cd50 = 0x300000002;
    }
    uVar31 = *(undefined4 *)((long)&DAT_0275cd48 + (long)*(int *)(param_2 + 0x58) * 4);
    if (plVar9 == (long *)0x0) {
      FUN_00528d70(0x3f800000,0,param_2,&local_e8,6,2);
      local_120 = 0x3f800000;
      uStack_11c = 0;
      local_128 = 0x3f800000;
      uStack_124 = 0;
      if (*(long *)(param_2 + 0x50) != 0) goto LAB_0052d42c;
    }
    else {
      local_e8 = *(long *)(param_2 + 0x1054);
      local_e0 = *(undefined8 *)(param_2 + 0x105c);
LAB_0052d42c:
      local_120 = *(undefined4 *)(param_2 + 0x68);
      uStack_11c = *(undefined4 *)(param_2 + 0x6c);
      local_128 = *(undefined4 *)(param_2 + 0x60);
      uStack_124 = *(undefined4 *)(param_2 + 100);
    }
    FUN_0058b330(0,0,fVar19,fVar21,0,0,fVar14,fVar27,plVar8,plVar11,plVar12,&local_128,&local_e8,
                 uVar31,param_3,plVar9,&local_108,&local_118,param_11,CONCAT44(uVar32,fVar15),
                 &local_f8,0);
    lVar6 = *(long *)(param_2 + 0x50);
  }
  else {
    FUN_0058b290(0,0,fVar19,fVar21,0,0,fVar14,fVar27,plVar8,plVar11,uVar16,plVar12,param_3,
                 *(undefined1 *)(param_2 + 0x1014),(long *)(param_2 + 0x1054),plVar9,
                 CONCAT44(uVar4,*(undefined4 *)(param_2 + 0x6c4)),
                 CONCAT44(uVar31,*(undefined4 *)(param_2 + 0x6c8)),uVar18,&local_108,&local_118,
                 param_11,fVar15,&local_f8,0);
    lVar6 = *(long *)(param_2 + 0x50);
  }
  if (lVar6 != 0) {
    (**(code **)(*plVar11 + 0x88))(plVar11,0);
  }
LAB_0052d4bc:
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x88))(plVar12,0);
  }
  if (bVar2) {
    FUN_00540cb0(*(undefined8 *)(param_2 + 0x18),0xf);
    (**(code **)(**(long **)(param_2 + 0x18) + 0x168))(*(long **)(param_2 + 0x18),0);
  }
  *(undefined1 *)(param_2 + 0x1053) = 1;
  return 0;
}


