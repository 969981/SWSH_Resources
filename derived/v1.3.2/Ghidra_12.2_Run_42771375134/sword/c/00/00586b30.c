/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00586b30; name: FUN_00586b30
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_00586b30(float param_1,long param_2,long param_3,long param_4,float *param_5,uint param_6,
                  float *param_7,uint param_8,uint param_9,byte param_10,uint param_11,uint param_12
                  )

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  float *pfVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulong local_320;
  float local_308 [20];
  undefined1 auStack_2b8 [80];
  undefined1 auStack_268 [80];
  undefined1 auStack_218 [80];
  float local_1c8 [9];
  float local_1a4 [9];
  float local_180 [9];
  float local_15c [9];
  undefined8 local_138 [19];
  
  if (*(long **)(param_2 + 0x20) == (long *)0x0) {
    return 0xffffffff;
  }
  fVar15 = *param_5;
  fVar18 = param_5[1];
  fVar17 = fVar15;
  if (fVar15 <= 0.0) {
    fVar17 = -fVar15;
  }
  if (fVar18 <= 0.0) {
    fVar18 = -fVar18;
  }
  fVar19 = param_5[2];
  fVar21 = param_5[3];
  if (fVar19 <= 0.0) {
    fVar19 = -fVar19;
  }
  if (fVar21 <= 0.0) {
    fVar21 = -fVar21;
  }
  bVar6 = false;
  if ((fVar17 == fVar18) && (bVar6 = false, !NAN(fVar18) && !NAN(fVar19))) {
    bVar6 = fVar18 == fVar19;
  }
  bVar7 = false;
  if ((bVar6) && (bVar7 = false, !NAN(fVar19) && !NAN(fVar21))) {
    bVar7 = fVar19 == fVar21;
  }
  if (bVar7) {
    local_320 = 0;
    bVar6 = true;
    fVar22 = fVar17;
  }
  else {
    fVar22 = fVar18;
    if (fVar18 <= fVar17) {
      fVar22 = fVar17;
    }
    fVar20 = fVar19;
    if (fVar19 <= fVar22) {
      fVar20 = fVar22;
    }
    uVar9 = 2;
    if (fVar19 <= fVar22) {
      uVar9 = (ulong)(fVar17 < fVar18);
    }
    fVar22 = fVar21;
    if (fVar21 <= fVar20) {
      fVar22 = fVar20;
    }
    param_10 = 0.0 <= fVar15 | param_10;
    local_320 = 3;
    if (fVar21 <= fVar20) {
      local_320 = uVar9;
    }
    bVar6 = false;
  }
  if ((param_9 & 1) != 0) {
    (**(code **)(**(long **)(param_2 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_2 + 0x20) + 0x140))(*(long **)(param_2 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_2 + 0x20) + 0x150))(*(long **)(param_2 + 0x20),0);
  }
  if (((param_10 & 1) == 0) &&
     ((((param_6 < 0xf && ((1 << (ulong)(param_6 & 0x1f) & 0x4924U) != 0)) ||
       ((param_6 < 0x15 && ((0x109209U >> (ulong)(param_6 & 0x1f) & 1) != 0)))) ||
      ((param_6 < 0x15 && ((1 << (ulong)(param_6 & 0x1f) & 0x106000U) != 0)))))) {
    lVar12 = param_3;
    do {
      lVar14 = lVar12;
      lVar12 = *(long *)(lVar14 + 0x120);
    } while (lVar12 != 0);
    if ((*(byte *)(*(long *)(lVar14 + 0xa8) + 0x5e) >> 1 & 1) != 0) {
      bVar7 = false;
      goto joined_r0x00586cbc;
    }
  }
  bVar7 = true;
joined_r0x00586cbc:
  uVar8 = param_11;
  if (param_11 == 0) {
    uVar8 = *(uint *)(param_3 + 0x54);
  }
  if (param_12 == 0) {
    uVar5 = *(uint *)(param_3 + 0x58);
    fVar15 = *(float *)(param_3 + 0x88);
    fVar20 = *(float *)(param_3 + 0x8c);
    fVar16 = *(float *)(param_3 + 0x90);
    fVar26 = *(float *)(param_3 + 0x94);
  }
  else {
    fVar15 = *(float *)(param_3 + 0x88);
    fVar20 = *(float *)(param_3 + 0x8c);
    fVar16 = *(float *)(param_3 + 0x90);
    fVar26 = *(float *)(param_3 + 0x94);
    uVar5 = param_12;
  }
  if (param_11 == 0) {
    param_11 = *(uint *)(param_4 + 0x54);
  }
  if (param_12 == 0) {
    param_12 = *(uint *)(param_4 + 0x58);
  }
  uVar11 = 9;
  if (!bVar7) {
    uVar11 = 5;
  }
  if (bVar7) {
    uVar2 = *(undefined4 *)(*(long *)(param_3 + 0x80) + 8);
    uVar3 = *(undefined4 *)(*(long *)(param_3 + 0x80) + 0xc);
    if (bVar6) {
      FUN_005137e0(fVar22,0x3f800000,uVar2,uVar3,local_138,local_1c8,param_8 & 1);
    }
    else {
      param_8 = param_8 & 1;
      FUN_005137e0(fVar17,0x3f800000,uVar2,uVar3,local_138,local_1c8,param_8);
      FUN_005137e0(fVar18,0x3f800000,*(undefined4 *)(*(long *)(param_3 + 0x80) + 8),
                   *(undefined4 *)(*(long *)(param_3 + 0x80) + 0xc),local_138,local_1a4,param_8);
      FUN_005137e0(fVar19,0x3f800000,*(undefined4 *)(*(long *)(param_3 + 0x80) + 8),
                   *(undefined4 *)(*(long *)(param_3 + 0x80) + 0xc),local_138,local_180,param_8);
      FUN_005137e0(fVar21,0x3f800000,*(undefined4 *)(*(long *)(param_3 + 0x80) + 8),
                   *(undefined4 *)(*(long *)(param_3 + 0x80) + 0xc),local_138,local_15c,param_8);
    }
  }
  else if (bVar6) {
    FUN_005133e0(fVar22,0x3f800000,*(undefined4 *)(*(long *)(param_3 + 0x80) + 8),
                 *(undefined4 *)(*(long *)(param_3 + 0x80) + 0xc),local_138,local_1c8,param_8 & 1);
  }
  else {
    param_8 = param_8 & 1;
    FUN_005133e0(fVar17,0x3f800000,*(undefined4 *)(*(long *)(param_3 + 0x80) + 8),
                 *(undefined4 *)(*(long *)(param_3 + 0x80) + 0xc),local_308,local_1c8,param_8);
    FUN_005133e0(fVar18,0x3f800000,*(undefined4 *)(*(long *)(param_3 + 0x80) + 8),
                 *(undefined4 *)(*(long *)(param_3 + 0x80) + 0xc),auStack_2b8,local_1a4,param_8);
    FUN_005133e0(fVar19,0x3f800000,*(undefined4 *)(*(long *)(param_3 + 0x80) + 8),
                 *(undefined4 *)(*(long *)(param_3 + 0x80) + 0xc),auStack_268,local_180,param_8);
    FUN_005133e0(fVar21,0x3f800000,*(undefined4 *)(*(long *)(param_3 + 0x80) + 8),
                 *(undefined4 *)(*(long *)(param_3 + 0x80) + 0xc),auStack_218,local_15c,param_8);
    pfVar10 = local_308 + local_320 * 0x14;
    lVar12 = 1 - (ulong)uVar11;
    puVar13 = local_138;
    do {
      uVar4 = *(undefined8 *)(pfVar10 + 2);
      lVar12 = lVar12 + 4;
      *puVar13 = *(undefined8 *)pfVar10;
      puVar13[1] = uVar4;
      uVar4 = *(undefined8 *)(pfVar10 + 6);
      puVar13[2] = *(undefined8 *)(pfVar10 + 4);
      puVar13[3] = uVar4;
      uVar4 = *(undefined8 *)(pfVar10 + 10);
      puVar13[4] = *(undefined8 *)(pfVar10 + 8);
      puVar13[5] = uVar4;
      pfVar1 = pfVar10 + 0xc;
      uVar4 = *(undefined8 *)(pfVar10 + 0xe);
      pfVar10 = pfVar10 + 0x10;
      puVar13[6] = *(undefined8 *)pfVar1;
      puVar13[7] = uVar4;
      puVar13 = puVar13 + 8;
    } while (lVar12 != 0);
    lVar12 = -1;
    do {
      uVar4 = *(undefined8 *)(pfVar10 + 2);
      *puVar13 = *(undefined8 *)pfVar10;
      puVar13[1] = uVar4;
      lVar12 = lVar12 + 1;
      pfVar10 = pfVar10 + 4;
      puVar13 = puVar13 + 2;
    } while (lVar12 != 0);
  }
  fVar17 = *param_7;
  fVar18 = param_7[1];
  fVar19 = param_7[2];
  fVar21 = param_7[3];
  lVar12 = 0;
  lVar14 = (ulong)uVar11 * 4;
  if (bVar6) {
    pfVar10 = local_308 + 2;
    bVar6 = true;
    do {
      fVar23 = *(float *)((long)local_1c8 + lVar12) * param_1;
      fVar25 = fVar17 * fVar23;
      fVar24 = fVar23 * fVar18;
      fVar22 = fVar23 * fVar19;
      fVar23 = fVar23 * fVar21;
      pfVar10[-2] = fVar25;
      pfVar10[-1] = fVar24;
      *pfVar10 = fVar22;
      pfVar10[1] = fVar23;
      if (lVar12 != 0) {
        bVar6 = (bool)(bVar6 & (((fVar25 == 0.0 && fVar24 == 0.0) && fVar22 == 0.0) && fVar23 == 0.0
                               ));
      }
      lVar12 = lVar12 + 4;
      pfVar10 = pfVar10 + 4;
    } while (lVar14 != lVar12);
  }
  else {
    pfVar10 = local_308 + 2;
    bVar6 = true;
    do {
      fVar25 = fVar17 * *(float *)((long)local_1c8 + lVar12) * param_1;
      fVar24 = fVar18 * *(float *)((long)local_1a4 + lVar12) * param_1;
      fVar23 = fVar19 * *(float *)((long)local_180 + lVar12) * param_1;
      fVar22 = fVar21 * *(float *)((long)local_15c + lVar12) * param_1;
      pfVar10[-2] = fVar25;
      pfVar10[-1] = fVar24;
      *pfVar10 = fVar23;
      pfVar10[1] = fVar22;
      if (lVar12 != 0) {
        bVar6 = (bool)(bVar6 & (((fVar25 == 0.0 && fVar24 == 0.0) && fVar23 == 0.0) && fVar22 == 0.0
                               ));
      }
      lVar12 = lVar12 + 4;
      pfVar10 = pfVar10 + 4;
    } while (lVar14 != lVar12);
  }
  if (bVar6) {
    uVar11 = 1;
  }
  uVar9 = FUN_0059d300(param_4,0,0,1,0,0);
  if (-1 < (int)uVar9) {
    FUN_0059d000(0,0);
    do {
      lVar12 = param_3;
      param_3 = *(long *)(lVar12 + 0x120);
    } while (param_3 != 0);
    uVar8 = FUN_00575a10(0,0,(float)param_11,(float)param_12,0,0,fVar15 * (float)uVar8 + fVar16,
                         fVar20 * (float)uVar5 + fVar26,param_2,uVar11,local_138,local_308,
                         *(undefined8 *)(lVar12 + 0xa8),param_6,0);
    uVar9 = (ulong)(uVar8 & (int)uVar8 >> 0x1f);
  }
  return uVar9;
}


