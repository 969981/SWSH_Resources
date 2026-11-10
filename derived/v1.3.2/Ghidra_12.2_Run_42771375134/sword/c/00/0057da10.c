/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0057da10; name: FUN_0057da10
 */


ulong FUN_0057da10(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  long param_5,long param_6,long param_7,long param_8,int param_9,float *param_10,
                  undefined4 param_11,ulong param_12,byte param_13,undefined4 param_14,
                  float *param_15,long param_16,undefined4 param_17)

{
  uint *puVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  float *pfVar16;
  long lVar17;
  int *piVar18;
  byte bVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_428 [104];
  undefined8 local_288 [52];
  long local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  if ((param_7 != 0) == (param_8 != 0)) {
    return 0xfffffffa;
  }
  if (*(long **)(param_5 + 0x20) == (long *)0x0) {
    return 0xffffffff;
  }
  fVar29 = *param_15;
  if (*param_15 <= param_15[1]) {
    fVar29 = param_15[1];
  }
  if (fVar29 <= param_15[2]) {
    fVar29 = param_15[2];
  }
  if (fVar29 <= param_15[3]) {
    fVar29 = param_15[3];
  }
  lVar20 = param_16;
  if (fVar29 <= 0.0) {
    lVar20 = 0;
  }
  if ((param_12 & 1) != 0) {
    (**(code **)(**(long **)(param_5 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_5 + 0x20) + 0x140))(*(long **)(param_5 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_5 + 0x20) + 0x150))(*(long **)(param_5 + 0x20),0);
  }
  if (param_8 != 0) {
    FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
  }
  if ((param_13 & 1) == 0) {
    lVar15 = param_6;
    do {
      lVar17 = lVar15;
      lVar15 = *(long *)(lVar17 + 0x120);
    } while (lVar15 != 0);
    if ((*(byte *)(*(long *)(lVar17 + 0xa8) + 0x5e) >> 1 & 1) == 0) goto LAB_0057db4c;
    bVar19 = 0;
  }
  else {
LAB_0057db4c:
    bVar19 = 1;
  }
  fVar31 = (float)NEON_ucvtf(*(undefined4 *)(param_6 + 0x54));
  fVar21 = *(float *)(param_6 + 0x88);
  fVar30 = (float)NEON_ucvtf(*(undefined4 *)(param_6 + 0x58));
  fVar22 = *(float *)(param_6 + 0x8c);
  fVar23 = *(float *)(param_6 + 0x90);
  puVar1 = (uint *)(param_7 + 0x54);
  if (param_7 == 0) {
    puVar1 = (uint *)(param_8 + 0x4c);
  }
  uVar8 = *puVar1;
  puVar1 = (uint *)(param_7 + 0x58);
  if (param_7 == 0) {
    puVar1 = (uint *)(param_8 + 0x50);
  }
  uVar2 = *puVar1;
  fVar24 = *(float *)(param_6 + 0x94);
  fVar3 = fVar31 * (float)param_1;
  if ((float)param_1 <= 0.0) {
    fVar3 = (float)uVar8;
  }
  fVar4 = fVar30 * (float)param_2;
  if ((float)param_2 <= 0.0) {
    fVar4 = (float)uVar2;
  }
  uVar7 = FUN_00511ea0(fVar31,fVar30,fVar3,fVar4,param_1,param_2,param_3,
                       *(undefined4 *)(*(long *)(param_6 + 0x80) + 8),
                       *(undefined4 *)(*(long *)(param_6 + 0x80) + 0xc),
                       local_288 + (ulong)(0.0 < fVar29) * 2,param_17,bVar19,param_14);
  if (0 < (int)uVar7) {
    uVar13 = (ulong)uVar7;
    fVar27 = param_10[2];
    fVar28 = param_10[3];
    param_4 = param_4 / (float)(int)uVar7;
    fVar25 = *param_10;
    fVar26 = param_10[1];
    pfVar16 = local_428 + (ulong)(0.0 < fVar29) * 4 + 2;
    do {
      pfVar16[-2] = param_4 * fVar25;
      pfVar16[-1] = param_4 * fVar26;
      uVar13 = uVar13 - 1;
      *pfVar16 = param_4 * fVar27;
      pfVar16[1] = param_4 * fVar28;
      pfVar16 = pfVar16 + 4;
    } while (uVar13 != 0);
  }
  if (0.0 < fVar29) {
    uVar7 = uVar7 + 1;
    local_428[1] = param_10[1] * param_15[1];
    local_428[0] = *param_10 * *param_15;
    local_428[2] = param_10[2] * param_15[2];
    local_428[3] = param_10[3] * param_15[3];
    local_288[0] = 0;
    local_288[1] = 0;
  }
  uVar13 = FUN_00542d00(*(undefined8 *)(param_5 + 0x20));
  uVar5 = uVar7;
  if ((uVar13 & 1) != 0) goto joined_r0x0057ddd4;
  if (fVar29 <= 0.0) {
    lVar15 = (long)(int)(uVar7 + 1);
    uVar12 = uVar7 + 2;
    piVar18 = (int *)(param_5 + (long)param_9 * 4 + (long)(int)(uVar7 + 1) * 0x58 + 0x98);
    do {
      iVar9 = *piVar18;
      uVar12 = uVar12 - 1;
      if (lVar15 < 2) break;
      lVar15 = lVar15 + -1;
      piVar18 = piVar18 + -0x16;
    } while (iVar9 == 0);
LAB_0057dd7c:
    uVar14 = uVar12 - 1;
  }
  else {
    if (param_9 != 0x15) {
      lVar15 = (long)(int)(uVar7 + 1);
      uVar12 = uVar7 + 2;
      piVar18 = (int *)(param_5 + (long)param_9 * 4 + (long)(int)(uVar7 + 1) * 0x58 + 0x2198);
      do {
        iVar9 = *piVar18;
        uVar12 = uVar12 - 1;
        if (lVar15 < 2) break;
        lVar15 = lVar15 + -1;
        piVar18 = piVar18 + -0x16;
      } while (iVar9 == 0);
      goto LAB_0057dd7c;
    }
    uVar14 = -uVar7 - 2;
    if ((int)uVar14 < -1) {
      uVar14 = 0xfffffffe;
    }
    uVar12 = ~uVar14;
    uVar14 = -uVar14 - 2;
  }
  if (((int)uVar12 <= (int)uVar7) && (uVar5 = uVar14, 0 < (int)uVar14)) {
    fVar25 = (float)(int)uVar7 / (float)(int)uVar14;
    uVar13 = (ulong)uVar14;
    pfVar16 = local_428 + 2;
    do {
      pfVar16[-2] = fVar25 * pfVar16[-2];
      pfVar16[-1] = fVar25 * pfVar16[-1];
      *pfVar16 = fVar25 * *pfVar16;
      pfVar16[1] = fVar25 * pfVar16[1];
      uVar13 = uVar13 - 1;
      pfVar16 = pfVar16 + 4;
    } while (uVar13 != 0);
  }
joined_r0x0057ddd4:
  if (param_8 == 0) {
    uStack_e0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = param_7;
    FUN_0059db20(0x3f800000,8,&local_e8,0,0,0,0,0,param_11,0);
    uVar13 = FUN_0059d000(0,0);
    iVar9 = (int)uVar13;
  }
  else {
    (**(code **)(**(long **)(param_5 + 0x20) + 0x40))(*(long **)(param_5 + 0x20),0);
    uVar13 = (**(code **)(**(long **)(param_5 + 0x20) + 0x38))
                       (*(long **)(param_5 + 0x20),0,param_8,param_11);
    iVar9 = (int)uVar13;
  }
  if (-1 < iVar9) {
    if (((float)param_3 == 0.0) && (*(uint *)(param_6 + 0x54) == uVar8)) {
      bVar19 = bVar19 | *(uint *)(param_6 + 0x58) == uVar2;
    }
    if ((lVar20 == 0) || (*(uint *)(lVar20 + 0x54) != uVar8)) {
      bVar6 = false;
    }
    else {
      bVar6 = *(uint *)(lVar20 + 0x58) == uVar2;
    }
    fVar23 = fVar21 * fVar31 + fVar23;
    fVar24 = fVar22 * fVar30 + fVar24;
    lVar15 = param_6;
    do {
      lVar17 = lVar15;
      lVar15 = *(long *)(lVar17 + 0x120);
    } while (lVar15 != 0);
    plVar10 = *(long **)(lVar17 + 0xa8);
    (**(code **)(*plVar10 + 0x88))(plVar10,bVar19);
    if (lVar20 != 0) {
      lVar15 = param_16;
      do {
        lVar17 = lVar15;
        lVar15 = *(long *)(lVar17 + 0x120);
      } while (lVar15 != 0);
      plVar10 = *(long **)(lVar17 + 0xa8);
      (**(code **)(*plVar10 + 0x78))(plVar10,bVar6);
    }
    lVar15 = param_6;
    do {
      lVar17 = lVar15;
      lVar15 = *(long *)(lVar17 + 0x120);
    } while (lVar15 != 0);
    uVar11 = *(undefined8 *)(lVar17 + 0xa8);
    if (fVar29 <= 0.0) {
      uVar8 = FUN_00575a10(0,0,fVar3,fVar4,0,0,fVar23,fVar24,param_5,uVar5,local_288,local_428,
                           uVar11,param_9,0);
    }
    else {
      lVar15 = param_16;
      do {
        lVar17 = lVar15;
        lVar15 = *(long *)(lVar17 + 0x120);
      } while (lVar15 != 0);
      uVar8 = FUN_00576630(0,0,fVar3,fVar4,0,0,fVar23,fVar24,param_5,uVar5,local_288,local_428,
                           uVar11,*(undefined8 *)(lVar17 + 0xa8),param_9,0);
    }
    do {
      lVar15 = param_6;
      param_6 = *(long *)(lVar15 + 0x120);
    } while (param_6 != 0);
    plVar10 = *(long **)(lVar15 + 0xa8);
    (**(code **)(*plVar10 + 0x88))(plVar10,0);
    if (lVar20 != 0) {
      do {
        lVar20 = param_16;
        param_16 = *(long *)(lVar20 + 0x120);
      } while (param_16 != 0);
      plVar10 = *(long **)(lVar20 + 0xa8);
      (**(code **)(*plVar10 + 0x88))(plVar10,0);
    }
    uVar13 = (ulong)(uVar8 & (int)uVar8 >> 0x1f);
  }
  return uVar13;
}


