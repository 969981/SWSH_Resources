/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e3c650; name: FUN_00e3c650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e3c650(long param_1)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  undefined1 auVar10 [16];
  float fVar12;
  undefined1 auVar11 [16];
  float fVar13;
  int iVar14;
  undefined1 auVar15 [12];
  int iVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  int iVar21;
  undefined1 auVar16 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float local_28;
  float local_24;
  
  if ((0 < *(int *)(param_1 + 0x3fc)) || (*(char *)(param_1 + 0x600) != '\0')) {
    *(undefined4 *)(param_1 + 0x3f4) = 0;
    *(undefined1 *)(param_1 + 0x3f8) = 0;
    return;
  }
  uVar5 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
  lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f0);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  pfVar6 = (float *)FUN_01020300(uVar5);
  fVar27 = *pfVar6;
  fVar9 = pfVar6[1];
  uVar7 = FUN_0150e0a0(lVar8);
  if ((uVar7 & 1) != 0) {
    pfVar6 = (float *)FUN_01020310(uVar5);
    fVar27 = *pfVar6;
    fVar9 = pfVar6[1];
  }
  FUN_00e3c4a0(param_1);
  fVar13 = extraout_s0 - *(float *)(param_1 + 0x580);
  fVar18 = extraout_var - *(float *)(param_1 + 0x588);
  fVar20 = extraout_var_00 - *(float *)(param_1 + 0x58c);
  auVar24._0_4_ = fVar13 * fVar13;
  auVar24._4_4_ = 0;
  auVar24._8_4_ = fVar18 * fVar18;
  auVar24._12_4_ = fVar20 * fVar20;
  auVar22 = NEON_ext(auVar24,auVar24,8,1);
  fVar13 = auVar22._0_4_ + auVar24._0_4_ + auVar22._4_4_ + 0.0;
  bVar2 = false;
  bVar3 = true;
  bVar4 = false;
  if (DAT_01d4be30 < fVar27 * fVar27 + fVar9 * fVar9) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar13)) {
      bVar2 = fVar13 < 1.0;
      bVar3 = fVar13 == 1.0;
      bVar4 = false;
    }
  }
  if (bVar3 || bVar2 != bVar4) {
LAB_00e3c874:
    fVar9 = -*(float *)(param_1 + 0x48c);
  }
  else {
    fVar27 = -fVar27;
    auVar22._0_4_ = fVar27 * fVar27;
    auVar22._4_4_ = 0;
    auVar22._8_4_ = fVar9 * fVar9;
    auVar22._12_4_ = 0;
    auVar24 = NEON_ext(auVar22,auVar22,8,1);
    fVar20 = auVar24._0_4_ + auVar22._0_4_;
    fVar13 = auVar24._4_4_ + 0.0;
    fVar18 = fVar20 + fVar13;
    fVar20 = fVar20 + fVar13;
    fVar13 = 0.0;
    if (fVar18 != 0.0) {
      auVar23._8_8_ = CONCAT44(fVar20,fVar18);
      auVar23._0_8_ = CONCAT44(fVar20,fVar18);
      auVar24 = NEON_frsqrte(auVar23,4);
      auVar25._0_4_ = auVar24._0_4_ * fVar18;
      auVar25._4_4_ = auVar24._4_4_ * fVar20;
      auVar25._8_4_ = auVar24._8_4_ * fVar18;
      auVar25._12_4_ = auVar24._12_4_ * fVar20;
      auVar22 = NEON_frsqrts(auVar24,auVar25,4);
      auVar10._0_4_ = auVar24._0_4_ * auVar22._0_4_;
      auVar10._4_4_ = auVar24._4_4_ * auVar22._4_4_;
      auVar10._8_4_ = auVar24._8_4_ * auVar22._8_4_;
      auVar10._12_4_ = auVar24._12_4_ * auVar22._12_4_;
      auVar26._0_4_ = fVar18 * auVar10._0_4_;
      auVar26._4_4_ = fVar20 * auVar10._4_4_;
      auVar26._8_4_ = fVar18 * auVar10._8_4_;
      auVar26._12_4_ = fVar20 * auVar10._12_4_;
      auVar24 = NEON_frsqrts(auVar10,auVar26,4);
      fVar27 = fVar27 * auVar10._0_4_ * auVar24._0_4_;
      fVar13 = auVar10._4_4_ * auVar24._4_4_ * 0.0;
      fVar9 = fVar9 * auVar10._8_4_ * auVar24._8_4_;
      fVar12 = auVar10._12_4_ * auVar24._12_4_ * 0.0;
      iVar14 = -(uint)(fVar18 == 0.0);
      iVar17 = -(uint)(fVar20 == 0.0);
      iVar19 = -(uint)(fVar18 == 0.0);
      iVar21 = -(uint)(fVar20 == 0.0);
      fVar27 = (float)CONCAT13((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                               CONCAT12((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar27 >> 8) &
                                                  ~(byte)((uint)iVar14 >> 8),
                                                  SUB41(fVar27,0) & ~(byte)iVar14)));
      auVar15._0_8_ =
           CONCAT17((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                    CONCAT16((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                             CONCAT15((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar17 >> 8),
                                      CONCAT14(SUB41(fVar13,0) & ~(byte)iVar17,fVar27))));
      auVar15[8] = SUB41(fVar9,0) & ~(byte)iVar19;
      auVar15[9] = (byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar19 >> 8);
      auVar15[10] = (byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10);
      auVar15[0xb] = (byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18);
      auVar16[0xc] = SUB41(fVar12,0) & ~(byte)iVar21;
      auVar16._0_12_ = auVar15;
      auVar16[0xd] = (byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar21 >> 8);
      auVar16[0xe] = (byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
      auVar16[0xf] = (byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
      auVar11._0_4_ = fVar27 * (float)_DAT_01d49dc0;
      auVar11._4_4_ = (float)((ulong)auVar15._0_8_ >> 0x20) * (float)((ulong)_DAT_01d49dc0 >> 0x20);
      auVar11._8_4_ = auVar15._8_4_ * (float)_UNK_01d49dc8;
      auVar11._12_4_ = auVar16._12_4_ * (float)((ulong)_UNK_01d49dc8 >> 0x20);
      NEON_ext(auVar11,auVar11,8,1);
      fVar9 = (float)FUN_01590400();
      fVar13 = -fVar9;
      if (0.0 <= fVar27) {
        fVar13 = fVar9;
      }
    }
    if ((((-*(float *)(param_1 + 0x480) <= fVar13) && (fVar13 <= *(float *)(param_1 + 0x480))) ||
        (fVar13 < -*(float *)(param_1 + 0x47c))) || (*(float *)(param_1 + 0x47c) < fVar13))
    goto LAB_00e3c874;
    if (fVar13 <= 0.0) {
      if (0.0 <= fVar13) goto LAB_00e3c874;
      if ((*(char *)(param_1 + 0x3f8) != '\0') && (*(char *)(param_1 + 0x3f9) == '\0')) {
        *(undefined4 *)(param_1 + 0x3f4) = 0;
      }
      *(undefined1 *)(param_1 + 0x3f9) = 1;
    }
    else {
      if ((*(char *)(param_1 + 0x3f8) != '\0') && (*(char *)(param_1 + 0x3f9) != '\0')) {
        *(undefined4 *)(param_1 + 0x3f4) = 0;
      }
      *(undefined1 *)(param_1 + 0x3f9) = 0;
    }
    fVar9 = *(float *)(param_1 + 0x488);
    *(undefined1 *)(param_1 + 0x3f8) = 1;
  }
  fVar9 = fVar9 + *(float *)(param_1 + 0x3f4);
  *(float *)(param_1 + 0x3f4) = fVar9;
  local_28 = 1.0;
  local_24 = 0.0;
  pfVar6 = &local_28;
  if (fVar9 <= 1.0) {
    pfVar6 = (float *)(param_1 + 0x3f4);
  }
  pfVar1 = &local_24;
  if (0.0 <= fVar9) {
    pfVar1 = pfVar6;
  }
  fVar9 = *pfVar1;
  *(float *)(param_1 + 0x3f4) = fVar9;
  if (fVar9 <= 0.0) {
    *(undefined1 *)(param_1 + 0x3f8) = 0;
    goto joined_r0x00e3c938;
  }
  fVar27 = *(float *)(param_1 + 0x3d0);
  if (DAT_01d4be68 <= fVar27) {
    if (DAT_01d4bb38 < fVar27) {
      fVar13 = DAT_01d4c5ac;
      goto LAB_00e3c904;
    }
  }
  else {
    fVar13 = DAT_01d4bdf4;
LAB_00e3c904:
    fVar27 = fVar27 + fVar13;
  }
  if (*(char *)(param_1 + 0x3f8) != '\0') {
    fVar9 = *(float *)(param_1 + 0x484) * fVar9;
    if (*(char *)(param_1 + 0x3f9) == '\0') {
      *(float *)(param_1 + 0x3d0) = fVar27 + fVar9;
      goto joined_r0x00e3c938;
    }
    fVar27 = fVar27 - fVar9;
  }
  *(float *)(param_1 + 0x3d0) = fVar27;
joined_r0x00e3c938:
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e3c95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  return;
}


