/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005117a0; name: FUN_005117a0
 */


undefined1  [16]
FUN_005117a0(float param_1,float param_2,float param_3,undefined4 param_4,uint param_5,uint param_6)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined4 extraout_var;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined8 extraout_var_00;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float __x;
  undefined8 uVar18;
  float fVar19;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  
  fVar10 = DAT_0275ba14;
  if ((DAT_0275ba14 <= param_1) && (fVar10 = DAT_0275bff4, param_1 <= DAT_0275bff4)) {
    fVar10 = param_1;
  }
  fVar10 = (fVar10 - DAT_0275ba14) / 5.0 + 1.0;
  iVar6 = (int)fVar10;
  iVar8 = 0x60;
  if (iVar6 + 1 < 0x60) {
    iVar8 = iVar6 + 1;
  }
  lVar1 = (long)iVar6;
  lVar2 = (long)iVar8;
  fVar15 = *(float *)((long)&DAT_0275b9f8 + lVar1 * 0x10 + 4);
  fVar10 = fVar10 - (float)iVar6;
  fVar15 = fVar15 + (*(float *)((long)&DAT_0275b9f8 + lVar2 * 0x10 + 4) - fVar15) * fVar10;
  fVar17 = *(float *)(&DAT_0275b9f8 + lVar1 * 2) +
           (*(float *)(&DAT_0275b9f8 + lVar2 * 2) - *(float *)(&DAT_0275b9f8 + lVar1 * 2)) * fVar10;
  fVar19 = (float)(&DAT_0275ba00)[lVar1 * 4] +
           fVar10 * ((float)(&DAT_0275ba00)[lVar2 * 4] - (float)(&DAT_0275ba00)[lVar1 * 4]);
  FUN_005115a0(&local_b0,param_4);
  fVar14 = fVar19 * local_90;
  fVar10 = local_80 + local_b0 * fVar17 + fVar15 * local_a0 + fVar14;
  __x = local_7c + fVar17 * fStack_ac + fVar15 * local_9c + fVar19 * local_8c;
  fVar15 = local_78 + fVar17 * local_a8 + fVar15 * local_98 + fVar19 * local_88;
  bVar3 = param_2 == 1.0;
  if (bVar3 && (param_6 & 1) == 0) {
    fVar14 = 0.0;
  }
  else {
    FUN_00510500(param_4);
  }
  fVar17 = 1.0 / fVar14;
  if (!bVar3 || (param_5 & 1) != 0) {
    fVar10 = fVar17 * fVar10;
    __x = fVar17 * __x;
    fVar15 = fVar17 * fVar15;
  }
  uVar12 = (ulong)(uint)fVar10;
  if (0.0 < param_3) {
    fVar17 = fVar10;
    if (fVar10 <= 0.0) {
      fVar17 = 0.0;
    }
    fVar19 = __x;
    if (__x <= 0.0) {
      fVar19 = 0.0;
    }
    param_3 = (fVar17 * DAT_01d4be14 + fVar19 * DAT_01d4be80 + fVar15 * DAT_01d4c3f8) * param_3;
  }
  fVar17 = fVar15;
  if (!bVar3 || (param_6 & 1) != 0) {
    if (0.0 < param_3) {
      fVar17 = expf(fVar10 / param_3);
      fVar16 = 0.0 / param_3;
      fVar19 = expf(fVar16);
      fVar19 = logf(fVar17 + fVar19);
      fVar19 = param_3 * fVar19;
      fVar17 = expf(__x / param_3);
      fVar11 = expf(fVar16);
      fVar11 = logf(fVar17 + fVar11);
      fVar11 = param_3 * fVar11;
      fVar17 = expf(fVar15 / param_3);
      fVar16 = expf(fVar16);
      fVar17 = logf(fVar17 + fVar16);
      bVar3 = false;
      bVar4 = true;
      if (fVar10 <= fVar19) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar19) && !NAN(fVar14)) {
          bVar3 = fVar19 == fVar14;
          bVar4 = fVar14 <= fVar19;
        }
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      if (!bVar4 || bVar3) {
        fVar10 = fVar19;
      }
      uVar12 = (ulong)(uint)fVar10;
      bVar3 = __x <= fVar11;
      fVar17 = param_3 * fVar17;
      if (__x <= 0.0) {
        __x = 0.0;
      }
      bVar4 = false;
      bVar5 = true;
      if (bVar3) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar11) && !NAN(fVar14)) {
          bVar4 = fVar11 == fVar14;
          bVar5 = fVar14 <= fVar11;
        }
      }
      if (!bVar5 || bVar4) {
        __x = fVar11;
      }
      bVar3 = true;
      bVar4 = false;
      if (fVar17 <= fVar14) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar17) && !NAN(fVar15)) {
          bVar3 = fVar17 < fVar15;
          bVar4 = false;
        }
      }
      if ((bVar3 != bVar4) && (fVar17 = fVar15, fVar15 <= 0.0)) {
        fVar17 = 0.0;
      }
    }
    else {
      if (fVar10 <= 0.0) {
        uVar12 = 0;
      }
      if (__x <= 0.0) {
        __x = 0.0;
      }
      if (fVar15 <= 0.0) {
        fVar17 = 0.0;
      }
    }
  }
  uVar18 = 0;
  fVar10 = DAT_0275b760._4_4_;
  if ((DAT_0275b760._4_4_ <= param_1) && (fVar10 = DAT_0275b9f4, param_1 <= DAT_0275b9f4)) {
    fVar10 = param_1;
  }
  fVar10 = (fVar10 - DAT_0275b760._4_4_) / 5.0;
  uVar7 = (uint)fVar10;
  uVar9 = 0x52;
  if ((int)(uVar7 + 1) < 0x52) {
    uVar9 = uVar7 + 1;
  }
  fVar15 = *(float *)((long)&DAT_0275b760 +
                     (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3));
  fVar15 = fVar15 + (*(float *)((long)&DAT_0275b760 +
                               (-(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar9 << 3)) -
                    fVar15) * (fVar10 - (float)(int)uVar7);
  if (param_2 != 1.0) {
    if (0.0 < (float)uVar12) {
      fVar10 = powf((float)uVar12,DAT_01d4c568);
      uVar12 = CONCAT44(extraout_var,fVar10);
      uVar18 = extraout_var_00;
    }
    if (0.0 < __x) {
      powf(__x,DAT_01d4c568);
    }
    if (0.0 < fVar17) {
      powf(fVar17,DAT_01d4c568);
    }
    if (0.0 < fVar15) {
      powf(fVar15,DAT_01d4c568);
    }
  }
  auVar13._8_8_ = uVar18;
  auVar13._0_8_ = uVar12;
  return auVar13;
}


