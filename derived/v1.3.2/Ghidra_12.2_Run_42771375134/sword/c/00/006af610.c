/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006af610; name: FUN_006af610
 */


bool FUN_006af610(undefined8 *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 local_60 [16];
  float local_50;
  float fStack_4c;
  undefined8 uStack_48;
  
  fVar17 = *param_2;
  fStack_4c = *param_3;
  uStack_48 = 0;
  local_50 = fVar17;
  if ((param_4 != (float *)0x0) && (param_5 != (float *)0x0)) {
    uVar4 = FUN_006afd80(param_1,&local_50,local_60);
    if ((uVar4 & 1) == 0) {
      *param_5 = 0.0;
      *param_4 = 0.0;
      return false;
    }
    *param_2 = local_50;
    *param_3 = fStack_4c;
    fVar17 = DAT_01d4c1cc;
    bVar3 = DAT_01d4c1cc <= ABS(local_60._0_4_);
    *param_4 = local_60._0_4_;
    *param_5 = local_60._4_4_;
    if (bVar3) {
      return true;
    }
    return fVar17 <= ABS(local_60._4_4_);
  }
  fVar5 = *(float *)(param_1 + 4);
  if (fVar5 != 0.0) {
    fVar6 = *(float *)((long)param_1 + 0x24);
    if (fVar6 != 0.0) {
      fVar7 = fVar17 - (float)param_1[2];
      fVar8 = fStack_4c - (float)((ulong)param_1[2] >> 0x20);
      fVar9 = 0.0 - (float)param_1[3];
      fVar10 = 0.0 - (float)((ulong)param_1[3] >> 0x20);
      fVar11 = fVar17 - (float)*param_1;
      fVar12 = fStack_4c - (float)((ulong)*param_1 >> 0x20);
      fVar13 = 0.0 - (float)param_1[1];
      fVar14 = 0.0 - (float)((ulong)param_1[1] >> 0x20);
      fVar7 = fVar7 * fVar7;
      fVar8 = fVar8 * fVar8;
      fVar9 = fVar9 * fVar9;
      fVar10 = fVar10 * fVar10;
      auVar15._4_4_ = fVar8;
      auVar15._0_4_ = fVar7;
      auVar15._8_4_ = fVar9;
      auVar15._12_4_ = fVar10;
      auVar16._4_4_ = fVar8;
      auVar16._0_4_ = fVar7;
      auVar16._8_4_ = fVar9;
      auVar16._12_4_ = fVar10;
      auVar15 = NEON_ext(auVar15,auVar16,8,1);
      fVar11 = fVar11 * fVar11;
      fVar12 = fVar12 * fVar12;
      fVar13 = fVar13 * fVar13;
      fVar14 = fVar14 * fVar14;
      auVar1._4_4_ = fVar12;
      auVar1._0_4_ = fVar11;
      auVar1._8_4_ = fVar13;
      auVar1._12_4_ = fVar14;
      auVar2._4_4_ = fVar12;
      auVar2._0_4_ = fVar11;
      auVar2._8_4_ = fVar13;
      auVar2._12_4_ = fVar14;
      auVar16 = NEON_ext(auVar1,auVar2,8,1);
      if (SQRT(auVar15._0_4_ + fVar7 + auVar15._4_4_ + fVar8) +
          SQRT(auVar16._0_4_ + fVar11 + auVar16._4_4_ + fVar12) <= *(float *)(param_1 + 6)) {
        return false;
      }
      if (fVar17 == 0.0) {
        fVar17 = 0.0;
        bVar3 = fStack_4c <= 0.0;
        fStack_4c = fVar6;
        if (bVar3) {
          fStack_4c = -fVar6;
        }
      }
      else {
        fVar9 = fStack_4c / fVar17;
        fVar8 = *(float *)((long)param_1 + 0x2c) + fVar9 * fVar9 * *(float *)(param_1 + 5);
        fVar7 = SQRT(fVar8);
        if (NAN(fVar7)) {
          fVar7 = sqrtf(fVar8);
        }
        fVar7 = (fVar5 * fVar6) / fVar7;
        bVar3 = 0.0 <= fVar17;
        fVar17 = -fVar7;
        if (bVar3) {
          fVar17 = fVar7;
        }
        fStack_4c = fVar9 * fVar17;
      }
      goto LAB_006af7ac;
    }
    if (fVar17 <= 0.0) {
      fVar5 = -fVar5;
      if (fVar17 < fVar5) goto LAB_006af79c;
    }
    else if (fVar5 < fVar17) {
LAB_006af79c:
      fVar17 = fVar5;
    }
    fStack_4c = 0.0;
    goto LAB_006af7ac;
  }
  fVar17 = *(float *)((long)param_1 + 0x24);
  if (fStack_4c <= 0.0) {
    fVar17 = -fVar17;
    if (fStack_4c < fVar17) goto LAB_006af708;
  }
  else if (fVar17 < fStack_4c) {
LAB_006af708:
    fStack_4c = fVar17;
  }
  fVar17 = 0.0;
LAB_006af7ac:
  *param_2 = fVar17;
  *param_3 = fStack_4c;
  return true;
}


