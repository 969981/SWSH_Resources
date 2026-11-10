/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00587160; name: FUN_00587160
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_00587160(float param_1,long param_2,long param_3,long param_4,float *param_5,uint param_6,
                  float *param_7,uint param_8,uint param_9,byte param_10,uint param_11,uint param_12
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  float *pfVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  float *pfVar15;
  ulong uVar16;
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
  ulong local_620;
  float local_608 [36];
  undefined1 auStack_578 [144];
  undefined1 auStack_4e8 [144];
  undefined1 auStack_458 [144];
  float local_3c8 [25];
  float local_364 [25];
  float local_300 [25];
  float local_29c [25];
  undefined8 local_238 [51];
  
  if (*(long **)(param_2 + 0x20) == (long *)0x0) {
    return 0xffffffff;
  }
  fVar17 = *param_5;
  fVar20 = param_5[1];
  fVar19 = fVar17;
  if (fVar17 <= 0.0) {
    fVar19 = -fVar17;
  }
  if (fVar20 <= 0.0) {
    fVar20 = -fVar20;
  }
  fVar21 = param_5[2];
  fVar23 = param_5[3];
  if (fVar21 <= 0.0) {
    fVar21 = -fVar21;
  }
  if (fVar23 <= 0.0) {
    fVar23 = -fVar23;
  }
  bVar6 = false;
  if ((fVar19 == fVar20) && (bVar6 = false, !NAN(fVar20) && !NAN(fVar21))) {
    bVar6 = fVar20 == fVar21;
  }
  bVar7 = false;
  if ((bVar6) && (bVar7 = false, !NAN(fVar21) && !NAN(fVar23))) {
    bVar7 = fVar21 == fVar23;
  }
  if (bVar7) {
    local_620 = 0;
    bVar6 = true;
    fVar24 = fVar19;
  }
  else {
    fVar24 = fVar20;
    if (fVar20 <= fVar19) {
      fVar24 = fVar19;
    }
    fVar22 = fVar21;
    if (fVar21 <= fVar24) {
      fVar22 = fVar24;
    }
    uVar16 = 2;
    if (fVar21 <= fVar24) {
      uVar16 = (ulong)(fVar19 < fVar20);
    }
    fVar24 = fVar23;
    if (fVar23 <= fVar22) {
      fVar24 = fVar22;
    }
    param_10 = 0.0 <= fVar17 | param_10;
    bVar6 = false;
    local_620 = 3;
    if (fVar23 <= fVar22) {
      local_620 = uVar16;
    }
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
    lVar13 = param_3;
    do {
      lVar12 = lVar13;
      lVar13 = *(long *)(lVar12 + 0x120);
    } while (lVar13 != 0);
    if ((*(byte *)(*(long *)(lVar12 + 0xa8) + 0x5e) >> 1 & 1) != 0) {
      uVar5 = false;
      goto joined_r0x005872e0;
    }
  }
  uVar5 = true;
joined_r0x005872e0:
  uVar8 = param_11;
  if (param_11 == 0) {
    uVar8 = *(uint *)(param_3 + 0x54);
  }
  if (param_12 == 0) {
    uVar4 = *(uint *)(param_3 + 0x58);
    fVar17 = *(float *)(param_3 + 0x88);
    fVar22 = *(float *)(param_3 + 0x8c);
    fVar18 = *(float *)(param_3 + 0x90);
    fVar26 = *(float *)(param_3 + 0x94);
  }
  else {
    fVar17 = *(float *)(param_3 + 0x88);
    fVar22 = *(float *)(param_3 + 0x8c);
    fVar18 = *(float *)(param_3 + 0x90);
    fVar26 = *(float *)(param_3 + 0x94);
    uVar4 = param_12;
  }
  if (param_11 == 0) {
    param_11 = *(uint *)(param_4 + 0x54);
  }
  if (param_12 == 0) {
    param_12 = *(uint *)(param_4 + 0x58);
  }
  uVar11 = 0x19;
  if (!(bool)uVar5) {
    uVar11 = 9;
  }
  uVar16 = (ulong)uVar11;
  if ((bool)uVar5) {
    uVar1 = *(undefined4 *)(*(long *)(param_3 + 0x80) + 8);
    uVar2 = *(undefined4 *)(*(long *)(param_3 + 0x80) + 0xc);
    if (bVar6) {
      FUN_00513910(fVar24,0x3f800000,uVar1,uVar2,local_238,local_3c8,param_8 & 1);
      fVar19 = *param_7;
      fVar20 = param_7[1];
      fVar21 = param_7[2];
      fVar23 = param_7[3];
    }
    else {
      param_8 = param_8 & 1;
      FUN_00513910(fVar19,0x3f800000,uVar1,uVar2,local_238,local_3c8,param_8);
      FUN_00513910(fVar20,0x3f800000,*(undefined4 *)(*(long *)(param_3 + 0x80) + 8),
                   *(undefined4 *)(*(long *)(param_3 + 0x80) + 0xc),local_238,local_364,param_8);
      FUN_00513910(fVar21,0x3f800000,*(undefined4 *)(*(long *)(param_3 + 0x80) + 8),
                   *(undefined4 *)(*(long *)(param_3 + 0x80) + 0xc),local_238,local_300,param_8);
      FUN_00513910(fVar23,0x3f800000,*(undefined4 *)(*(long *)(param_3 + 0x80) + 8),
                   *(undefined4 *)(*(long *)(param_3 + 0x80) + 0xc),local_238,local_29c,param_8);
      fVar19 = *param_7;
      fVar20 = param_7[1];
      fVar21 = param_7[2];
      fVar23 = param_7[3];
    }
  }
  else if (bVar6) {
    FUN_00513580(fVar24,0x3f800000,*(undefined4 *)(*(long *)(param_3 + 0x80) + 8),
                 *(undefined4 *)(*(long *)(param_3 + 0x80) + 0xc),local_238,local_3c8,param_8 & 1);
    fVar19 = *param_7;
    fVar20 = param_7[1];
    fVar21 = param_7[2];
    fVar23 = param_7[3];
  }
  else {
    param_8 = param_8 & 1;
    FUN_00513580(fVar19,0x3f800000,*(undefined4 *)(*(long *)(param_3 + 0x80) + 8),
                 *(undefined4 *)(*(long *)(param_3 + 0x80) + 0xc),local_608,local_3c8,param_8);
    FUN_00513580(fVar20,0x3f800000,*(undefined4 *)(*(long *)(param_3 + 0x80) + 8),
                 *(undefined4 *)(*(long *)(param_3 + 0x80) + 0xc),auStack_578,local_364,param_8);
    FUN_00513580(fVar21,0x3f800000,*(undefined4 *)(*(long *)(param_3 + 0x80) + 8),
                 *(undefined4 *)(*(long *)(param_3 + 0x80) + 0xc),auStack_4e8,local_300,param_8);
    FUN_00513580(fVar23,0x3f800000,*(undefined4 *)(*(long *)(param_3 + 0x80) + 8),
                 *(undefined4 *)(*(long *)(param_3 + 0x80) + 0xc),auStack_458,local_29c,param_8);
    pfVar10 = local_608 + local_620 * 0x24;
    lVar13 = 1 - uVar16;
    puVar14 = local_238;
    do {
      uVar3 = *(undefined8 *)(pfVar10 + 2);
      lVar13 = lVar13 + 4;
      *puVar14 = *(undefined8 *)pfVar10;
      puVar14[1] = uVar3;
      uVar3 = *(undefined8 *)(pfVar10 + 6);
      puVar14[2] = *(undefined8 *)(pfVar10 + 4);
      puVar14[3] = uVar3;
      uVar3 = *(undefined8 *)(pfVar10 + 10);
      puVar14[4] = *(undefined8 *)(pfVar10 + 8);
      puVar14[5] = uVar3;
      pfVar15 = pfVar10 + 0xc;
      uVar3 = *(undefined8 *)(pfVar10 + 0xe);
      pfVar10 = pfVar10 + 0x10;
      puVar14[6] = *(undefined8 *)pfVar15;
      puVar14[7] = uVar3;
      puVar14 = puVar14 + 8;
    } while (lVar13 != 0);
    lVar13 = -1;
    do {
      uVar3 = *(undefined8 *)(pfVar10 + 2);
      *puVar14 = *(undefined8 *)pfVar10;
      puVar14[1] = uVar3;
      lVar13 = lVar13 + 1;
      pfVar10 = pfVar10 + 4;
      puVar14 = puVar14 + 2;
    } while (lVar13 != 0);
    fVar19 = *param_7;
    fVar20 = param_7[1];
    fVar21 = param_7[2];
    fVar23 = param_7[3];
  }
  if (bVar6) {
    pfVar10 = local_608 + 2;
    pfVar15 = local_3c8;
    uVar9 = uVar16;
    do {
      fVar24 = *pfVar15 * param_1;
      pfVar10[-2] = fVar19 * fVar24;
      pfVar10[-1] = fVar24 * fVar20;
      uVar9 = uVar9 - 1;
      *pfVar10 = fVar24 * fVar21;
      pfVar10[1] = fVar24 * fVar23;
      pfVar10 = pfVar10 + 4;
      pfVar15 = pfVar15 + 1;
    } while (uVar9 != 0);
  }
  else {
    pfVar10 = local_300;
    pfVar15 = local_608 + 2;
    uVar9 = uVar16;
    do {
      fVar24 = pfVar10[-0x19];
      fVar25 = *pfVar10;
      pfVar15[-2] = fVar19 * pfVar10[-0x32] * param_1;
      pfVar15[-1] = fVar20 * fVar24 * param_1;
      fVar24 = pfVar10[0x19];
      uVar9 = uVar9 - 1;
      pfVar10 = pfVar10 + 1;
      *pfVar15 = fVar21 * fVar25 * param_1;
      pfVar15[1] = fVar23 * fVar24 * param_1;
      pfVar15 = pfVar15 + 4;
    } while (uVar9 != 0);
  }
  uVar9 = FUN_0059d300(param_4,0,0,1,0,0);
  if (-1 < (int)uVar9) {
    FUN_0059d000(0,0);
    do {
      lVar13 = param_3;
      param_3 = *(long *)(lVar13 + 0x120);
    } while (param_3 != 0);
    uVar8 = FUN_00575a10(0,0,(float)param_11,(float)param_12,0,0,fVar17 * (float)uVar8 + fVar18,
                         fVar22 * (float)uVar4 + fVar26,param_2,uVar16,local_238,local_608,
                         *(undefined8 *)(lVar13 + 0xa8),param_6,0);
    uVar9 = (ulong)(uVar8 & (int)uVar8 >> 0x1f);
  }
  return uVar9;
}


