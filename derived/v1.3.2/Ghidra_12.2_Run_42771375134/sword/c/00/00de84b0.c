/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de84b0; name: FUN_00de84b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00de84b0(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
  float fVar16;
  undefined1 uVar17;
  undefined1 extraout_b0;
  undefined1 uVar18;
  undefined1 extraout_var;
  undefined1 uVar19;
  undefined1 extraout_var_00;
  undefined1 uVar20;
  undefined1 extraout_var_01;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [12];
  float fVar33;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  
  uVar12 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
  lVar15 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f0);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  cVar2 = *(char *)(*(long *)PTR_DAT_027194e8 + 0x68);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (((cVar2 == '\0') || (iVar11 = FUN_01020350(uVar12), iVar11 - 1U < 3)) &&
     (uVar13 = FUN_0150e0a0(lVar15), (uVar13 & 1) == 0)) {
    pfVar14 = (float *)FUN_01020300(uVar12);
  }
  else {
    pfVar14 = (float *)FUN_01020310(uVar12);
  }
  fVar27 = *pfVar14;
  fVar26 = pfVar14[1];
  fVar34 = fVar26;
  if (1.0 < fVar26) {
    fVar34 = 1.0;
  }
  fVar33 = fVar27;
  if (1.0 < fVar27) {
    fVar33 = 1.0;
  }
  fVar34 = -fVar34;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0x80;
  uVar20 = 0xbf;
  if (-1.0 <= fVar27) {
    uVar17 = SUB41(fVar33,0);
    uVar18 = (undefined1)((uint)fVar33 >> 8);
    uVar19 = (undefined1)((uint)fVar33 >> 0x10);
    uVar20 = (undefined1)((uint)fVar33 >> 0x18);
  }
  fVar27 = (float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17)));
  fVar33 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0x80;
  uVar20 = 0x3f;
  if (-1.0 <= fVar26) {
    uVar17 = SUB41(fVar34,0);
    uVar18 = (undefined1)((uint)fVar34 >> 8);
    uVar19 = (undefined1)((uint)fVar34 >> 0x10);
    uVar20 = (undefined1)((uint)fVar34 >> 0x18);
  }
  fVar34 = (float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17)));
  fVar26 = fVar27 * fVar27;
  fVar28 = fVar33 * fVar33;
  uVar17 = (undefined1)((uint)fVar28 >> 8);
  uVar18 = (undefined1)((uint)fVar28 >> 0x10);
  uVar19 = (undefined1)((uint)fVar28 >> 0x18);
  fVar16 = fVar34 * fVar34;
  uVar20 = (undefined1)((uint)fVar16 >> 8);
  uVar21 = (undefined1)((uint)fVar16 >> 0x10);
  uVar22 = (undefined1)((uint)fVar16 >> 0x18);
  auVar30[4] = SUB41(fVar28,0);
  auVar30._0_4_ = fVar26;
  auVar30[5] = uVar17;
  auVar30[6] = uVar18;
  auVar30[7] = uVar19;
  auVar30[8] = SUB41(fVar16,0);
  auVar30[9] = uVar20;
  auVar30[10] = uVar21;
  auVar30[0xb] = uVar22;
  auVar30._12_4_ = 0;
  auVar36[4] = SUB41(fVar28,0);
  auVar36._0_4_ = fVar26;
  auVar36[5] = uVar17;
  auVar36[6] = uVar18;
  auVar36[7] = uVar19;
  auVar36[8] = SUB41(fVar16,0);
  auVar36[9] = uVar20;
  auVar36[10] = uVar21;
  auVar36[0xb] = uVar22;
  auVar36._12_4_ = 0;
  auVar30 = NEON_ext(auVar30,auVar36,8,1);
  *(ulong *)(param_1 + 0x98) = (ulong)(uint)fVar34;
  *(ulong *)(param_1 + 0x90) = CONCAT44(fVar33,fVar27);
  fVar26 = auVar30._0_4_ + fVar26;
  fVar28 = auVar30._4_4_ + fVar28;
  fVar16 = fVar26 + fVar28;
  fVar26 = fVar26 + fVar28;
  uVar17 = SUB41(fVar26,0);
  uVar18 = (undefined1)((uint)fVar26 >> 8);
  uVar19 = (undefined1)((uint)fVar26 >> 0x10);
  uVar20 = (undefined1)((uint)fVar26 >> 0x18);
  auVar3[4] = uVar17;
  auVar3._0_4_ = fVar16;
  auVar3[5] = uVar18;
  auVar3[6] = uVar19;
  auVar3[7] = uVar20;
  auVar3[8] = SUB41(fVar16,0);
  auVar3[9] = (char)((uint)fVar16 >> 8);
  auVar3[10] = (char)((uint)fVar16 >> 0x10);
  auVar3[0xb] = (char)((uint)fVar16 >> 0x18);
  auVar3[0xc] = uVar17;
  auVar3[0xd] = uVar18;
  auVar3[0xe] = uVar19;
  auVar3[0xf] = uVar20;
  auVar30 = NEON_frsqrte(auVar3,4);
  auVar35._0_4_ = fVar16 * auVar30._0_4_;
  auVar35._4_4_ = fVar26 * auVar30._4_4_;
  auVar35._8_4_ = fVar16 * auVar30._8_4_;
  uVar6 = (undefined2)(CONCAT15(uVar18,CONCAT14(uVar17,fVar16)) >> 0x20);
  auVar35._12_4_ = (float)CONCAT13(uVar20,CONCAT12(uVar19,uVar6)) * auVar30._12_4_;
  auVar36 = NEON_frsqrts(auVar30,auVar35,4);
  auVar31._0_4_ = auVar30._0_4_ * auVar36._0_4_;
  auVar31._4_4_ = auVar30._4_4_ * auVar36._4_4_;
  auVar31._8_4_ = auVar30._8_4_ * auVar36._8_4_;
  auVar31._12_4_ = auVar30._12_4_ * auVar36._12_4_;
  auVar37._0_4_ = fVar16 * auVar31._0_4_;
  auVar37._4_4_ = fVar26 * auVar31._4_4_;
  auVar37._8_4_ = fVar16 * auVar31._8_4_;
  auVar37._12_4_ = (float)CONCAT13(uVar20,CONCAT12(uVar19,uVar6)) * auVar31._12_4_;
  auVar30 = NEON_frsqrts(auVar31,auVar37,4);
  *(float *)(param_1 + 0xa0) = SQRT(fVar16);
  iVar11 = -(uint)(fVar16 == 0.0);
  iVar7 = -(uint)(fVar26 == 0.0);
  iVar8 = -(uint)(fVar16 == 0.0);
  iVar9 = -(uint)((float)CONCAT13(uVar20,CONCAT12(uVar19,uVar6)) == 0.0);
  fVar27 = fVar27 * auVar31._0_4_ * auVar30._0_4_;
  fVar33 = fVar33 * auVar31._4_4_ * auVar30._4_4_;
  fVar34 = fVar34 * auVar31._8_4_ * auVar30._8_4_;
  fVar26 = auVar31._12_4_ * auVar30._12_4_ * 0.0;
  fVar28 = (float)CONCAT13((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                           CONCAT12((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                    CONCAT11((byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                             SUB41(fVar27,0) & ~(byte)iVar11)));
  auVar29._0_8_ =
       CONCAT17((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                CONCAT16((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10),
                         CONCAT15((byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar7 >> 8),
                                  CONCAT14(SUB41(fVar33,0) & ~(byte)iVar7,fVar28))));
  auVar29[8] = SUB41(fVar34,0) & ~(byte)iVar8;
  auVar29[9] = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar8 >> 8);
  auVar29[10] = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10);
  auVar29[0xb] = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18);
  auVar32[0xc] = SUB41(fVar26,0) & ~(byte)iVar9;
  auVar32._0_12_ = auVar29;
  auVar32[0xd] = (byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar9 >> 8);
  auVar32[0xe] = (byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10);
  auVar32[0xf] = (byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18);
  fVar27 = fVar28 * (float)_DAT_01d49dc0;
  fVar34 = (float)((ulong)auVar29._0_8_ >> 0x20) * (float)((ulong)_DAT_01d49dc0 >> 0x20);
  uVar17 = (undefined1)((uint)fVar34 >> 8);
  uVar18 = (undefined1)((uint)fVar34 >> 0x10);
  uVar19 = (undefined1)((uint)fVar34 >> 0x18);
  fVar26 = auVar29._8_4_ * (float)_UNK_01d49dc8;
  uVar20 = (undefined1)((uint)fVar26 >> 8);
  uVar21 = (undefined1)((uint)fVar26 >> 0x10);
  uVar22 = (undefined1)((uint)fVar26 >> 0x18);
  fVar33 = auVar32._12_4_ * (float)((ulong)_UNK_01d49dc8 >> 0x20);
  uVar23 = (undefined1)((uint)fVar33 >> 8);
  uVar24 = (undefined1)((uint)fVar33 >> 0x10);
  uVar25 = (undefined1)((uint)fVar33 >> 0x18);
  auVar4[4] = SUB41(fVar34,0);
  auVar4._0_4_ = fVar27;
  auVar4[5] = uVar17;
  auVar4[6] = uVar18;
  auVar4[7] = uVar19;
  auVar4[8] = SUB41(fVar26,0);
  auVar4[9] = uVar20;
  auVar4[10] = uVar21;
  auVar4[0xb] = uVar22;
  auVar4[0xc] = SUB41(fVar33,0);
  auVar4[0xd] = uVar23;
  auVar4[0xe] = uVar24;
  auVar4[0xf] = uVar25;
  auVar5[4] = SUB41(fVar34,0);
  auVar5._0_4_ = fVar27;
  auVar5[5] = uVar17;
  auVar5[6] = uVar18;
  auVar5[7] = uVar19;
  auVar5[8] = SUB41(fVar26,0);
  auVar5[9] = uVar20;
  auVar5[10] = uVar21;
  auVar5[0xb] = uVar22;
  auVar5[0xc] = SUB41(fVar33,0);
  auVar5[0xd] = uVar23;
  auVar5[0xe] = uVar24;
  auVar5[0xf] = uVar25;
  auVar30 = NEON_ext(auVar4,auVar5,8,1);
  fVar34 = auVar30._0_4_ + fVar27 + auVar30._4_4_ + fVar34;
  fVar27 = fVar34;
  if (1.0 < fVar34) {
    fVar27 = 0.0;
  }
  uVar17 = 0;
  if (-1.0 <= fVar34) {
    uVar17 = SUB41(fVar27,0);
  }
  FUN_01590400(uVar17);
  fVar27 = -(float)CONCAT13(extraout_var_01,
                            CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
  uVar17 = SUB41(fVar27,0);
  uVar18 = (undefined1)((uint)fVar27 >> 8);
  uVar19 = (undefined1)((uint)fVar27 >> 0x10);
  uVar20 = (undefined1)((uint)fVar27 >> 0x18);
  if (0.0 <= fVar28) {
    uVar17 = extraout_b0;
    uVar18 = extraout_var;
    uVar19 = extraout_var_00;
    uVar20 = extraout_var_01;
  }
  *(uint *)(param_1 + 0xa4) = CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17)));
  bVar10 = FUN_00e9f350(*(undefined8 *)(param_1 + 0x88));
  *(byte *)(param_1 + 0xb0) = bVar10 & 1;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  if ((bVar10 & 1) == 0) {
    uVar13 = FUN_0150e0a0(lVar15);
    uVar1 = 0x4000000000;
    if ((uVar13 & 1) == 0) {
      uVar1 = 0x10;
    }
    bVar10 = FUN_01020290(uVar12,uVar1);
    *(byte *)(param_1 + 0xb1) = bVar10 & 1;
  }
  if (lVar15 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00de8678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  return;
}


