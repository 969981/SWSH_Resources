/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed7b10; name: FUN_00ed7b10
 */


/* WARNING: Removing unreachable block (ram,0x00ed7c94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ed7b10(long param_1)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  undefined1 uVar14;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 uVar15;
  undefined1 extraout_var_00;
  undefined1 uVar16;
  undefined1 extraout_var_01;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  float fVar23;
  int iVar24;
  undefined1 auVar25 [12];
  float fVar28;
  undefined1 auVar26 [16];
  int iVar29;
  int iVar30;
  int iVar31;
  undefined1 auVar27 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 local_28;
  
  plVar10 = *(long **)(param_1 + 0x70);
  cVar5 = FUN_00ed6290(plVar10);
  if ((cVar5 != '\x01') && (cVar5 = FUN_00ed6290(plVar10), cVar5 != '\x02')) {
    cVar5 = FUN_00ed62b0(plVar10);
    if (cVar5 == '\x02') {
      if (*(char *)(param_1 + 0xd1) == '\x02') goto LAB_00ed7ba4;
      uVar7 = *(undefined8 *)(param_1 + 0x70);
      *(undefined1 *)(param_1 + 0xd1) = 2;
      uVar8 = 2;
    }
    else {
      if (*(char *)(param_1 + 0xd1) == '\x01') goto LAB_00ed7ba4;
      uVar7 = *(undefined8 *)(param_1 + 0x70);
      uVar8 = 1;
      *(undefined1 *)(param_1 + 0xd1) = 1;
    }
    FUN_00ed60e0(uVar7,uVar8);
  }
LAB_00ed7ba4:
  uVar6 = (**(code **)(*plVar10 + 0x188))(plVar10,PTR_DAT_0271e8a0,0);
  if (uVar6 < 3) {
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(&DAT_0216128c + (long)(int)uVar6 * 4);
  }
  (**(code **)(*plVar10 + 0x180))((char)*(undefined4 *)PTR_DAT_0271ecc0,plVar10,PTR_DAT_0271e870);
  fVar13 = *(float *)(param_1 + 0x90) - *(float *)(param_1 + 0xb0);
  fVar2 = *(float *)(param_1 + 0x94) - *(float *)(param_1 + 0xb4);
  fVar3 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0xb8);
  fVar4 = *(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0xbc);
  auVar37._0_4_ = fVar13 * fVar13;
  auVar37._4_4_ = fVar2 * fVar2;
  auVar37._8_4_ = fVar3 * fVar3;
  auVar37._12_4_ = fVar4 * fVar4;
  auVar40 = NEON_ext(auVar37,auVar37,8,1);
  fVar23 = auVar40._0_4_ + auVar37._0_4_;
  fVar28 = auVar40._4_4_ + auVar37._4_4_;
  fVar12 = fVar23 + fVar28;
  fVar23 = fVar23 + fVar28;
  if (fVar12 != 0.0) {
    fVar28 = *(float *)(param_1 + 0xb0) - *(float *)(param_1 + 0x90);
    fVar34 = *(float *)(param_1 + 0xb4) - *(float *)(param_1 + 0x94);
    fVar35 = *(float *)(param_1 + 0xb8) - *(float *)(param_1 + 0x98);
    fVar36 = *(float *)(param_1 + 0xbc) - *(float *)(param_1 + 0x9c);
    auVar26._8_8_ = CONCAT44(fVar23,fVar12);
    auVar26._0_8_ = CONCAT44(fVar23,fVar12);
    auVar32._0_4_ = fVar28 * fVar28;
    auVar32._4_4_ = fVar34 * fVar34;
    auVar32._8_4_ = fVar35 * fVar35;
    auVar32._12_4_ = fVar36 * fVar36;
    auVar37 = NEON_ext(auVar32,auVar32,8,1);
    fVar28 = SQRT(auVar37._0_4_ + auVar32._0_4_ + auVar37._4_4_ + auVar32._4_4_);
    auVar37 = NEON_frsqrte(auVar26,4);
    auVar38._0_4_ = auVar37._0_4_ * fVar12;
    auVar38._4_4_ = auVar37._4_4_ * fVar23;
    auVar38._8_4_ = auVar37._8_4_ * fVar12;
    auVar38._12_4_ = auVar37._12_4_ * fVar23;
    auVar40 = NEON_frsqrts(auVar37,auVar38,4);
    auVar33._0_4_ = auVar37._0_4_ * auVar40._0_4_;
    auVar33._4_4_ = auVar37._4_4_ * auVar40._4_4_;
    auVar33._8_4_ = auVar37._8_4_ * auVar40._8_4_;
    auVar33._12_4_ = auVar37._12_4_ * auVar40._12_4_;
    auVar39._0_4_ = fVar12 * auVar33._0_4_;
    auVar39._4_4_ = fVar23 * auVar33._4_4_;
    auVar39._8_4_ = fVar12 * auVar33._8_4_;
    auVar39._12_4_ = fVar23 * auVar33._12_4_;
    iVar24 = -(uint)(fVar12 == 0.0);
    iVar29 = -(uint)(fVar23 == 0.0);
    iVar30 = -(uint)(fVar12 == 0.0);
    iVar31 = -(uint)(fVar23 == 0.0);
    auVar37 = NEON_frsqrts(auVar33,auVar39,4);
    fVar13 = fVar13 * auVar33._0_4_ * auVar37._0_4_;
    fVar2 = fVar2 * auVar33._4_4_ * auVar37._4_4_;
    fVar3 = fVar3 * auVar33._8_4_ * auVar37._8_4_;
    fVar4 = fVar4 * auVar33._12_4_ * auVar37._12_4_;
    fVar12 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                             CONCAT12((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                                      CONCAT11((byte)((uint)fVar13 >> 8) &
                                               ~(byte)((uint)iVar24 >> 8),
                                               SUB41(fVar13,0) & ~(byte)iVar24)));
    auVar25._0_8_ =
         CONCAT17((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                  CONCAT16((byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                           CONCAT15((byte)((uint)fVar2 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                    CONCAT14(SUB41(fVar2,0) & ~(byte)iVar29,fVar12))));
    auVar25[8] = SUB41(fVar3,0) & ~(byte)iVar30;
    auVar25[9] = (byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar30 >> 8);
    auVar25[10] = (byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
    auVar25[0xb] = (byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
    auVar27[0xc] = SUB41(fVar4,0) & ~(byte)iVar31;
    auVar27._0_12_ = auVar25;
    auVar27[0xd] = (byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar31 >> 8);
    auVar27[0xe] = (byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
    auVar27[0xf] = (byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
    fVar13 = fVar12 * (float)_DAT_01d49dc0;
    fVar23 = (float)((ulong)auVar25._0_8_ >> 0x20);
    fVar2 = fVar23 * (float)((ulong)_DAT_01d49dc0 >> 0x20);
    uVar14 = (undefined1)((uint)fVar2 >> 8);
    uVar15 = (undefined1)((uint)fVar2 >> 0x10);
    uVar16 = (undefined1)((uint)fVar2 >> 0x18);
    fVar3 = auVar25._8_4_ * (float)_UNK_01d49dc8;
    uVar17 = (undefined1)((uint)fVar3 >> 8);
    uVar18 = (undefined1)((uint)fVar3 >> 0x10);
    uVar19 = (undefined1)((uint)fVar3 >> 0x18);
    fVar4 = auVar27._12_4_ * (float)((ulong)_UNK_01d49dc8 >> 0x20);
    uVar20 = (undefined1)((uint)fVar4 >> 8);
    uVar21 = (undefined1)((uint)fVar4 >> 0x10);
    uVar22 = (undefined1)((uint)fVar4 >> 0x18);
    auVar40[4] = SUB41(fVar2,0);
    auVar40._0_4_ = fVar13;
    auVar40[5] = uVar14;
    auVar40[6] = uVar15;
    auVar40[7] = uVar16;
    auVar40[8] = SUB41(fVar3,0);
    auVar40[9] = uVar17;
    auVar40[10] = uVar18;
    auVar40[0xb] = uVar19;
    auVar40[0xc] = SUB41(fVar4,0);
    auVar40[0xd] = uVar20;
    auVar40[0xe] = uVar21;
    auVar40[0xf] = uVar22;
    auVar1[4] = SUB41(fVar2,0);
    auVar1._0_4_ = fVar13;
    auVar1[5] = uVar14;
    auVar1[6] = uVar15;
    auVar1[7] = uVar16;
    auVar1[8] = SUB41(fVar3,0);
    auVar1[9] = uVar17;
    auVar1[10] = uVar18;
    auVar1[0xb] = uVar19;
    auVar1[0xc] = SUB41(fVar4,0);
    auVar1[0xd] = uVar20;
    auVar1[0xe] = uVar21;
    auVar1[0xf] = uVar22;
    auVar37 = NEON_ext(auVar40,auVar1,8,1);
    fVar13 = auVar37._0_4_ + fVar13 + auVar37._4_4_ + fVar2;
    uVar14 = 0;
    if (-1.0 <= fVar13) {
      uVar14 = SUB41(fVar13,0);
    }
    FUN_01590400(uVar14);
    fVar13 = -(float)CONCAT13(extraout_var_01,
                              CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
    uVar14 = SUB41(fVar13,0);
    uVar15 = (undefined1)((uint)fVar13 >> 8);
    uVar16 = (undefined1)((uint)fVar13 >> 0x10);
    uVar17 = (undefined1)((uint)fVar13 >> 0x18);
    if (0.0 <= fVar12) {
      uVar14 = extraout_b0;
      uVar15 = extraout_var;
      uVar16 = extraout_var_00;
      uVar17 = extraout_var_01;
    }
    fVar13 = *(float *)(param_1 + 0xd4);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 200);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
    *(ulong *)(param_1 + 0xc0) =
         CONCAT44(CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14))),
                  *(undefined4 *)(param_1 + 0xc0));
    uVar14 = SUB41(fVar28,0);
    uVar15 = (char)((uint)fVar28 >> 8);
    uVar16 = (char)((uint)fVar28 >> 0x10);
    uVar17 = (char)((uint)fVar28 >> 0x18);
    if (fVar13 <= fVar28) {
      uVar14 = SUB41(fVar13,0);
      uVar15 = (char)((uint)fVar13 >> 8);
      uVar16 = (char)((uint)fVar13 >> 0x10);
      uVar17 = (char)((uint)fVar13 >> 0x18);
    }
    fVar13 = (float)CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14)));
    if ((((long *)plVar10[0x83] != (long *)plVar10[0x84]) &&
        (lVar9 = *(long *)plVar10[0x83], lVar9 != 0)) &&
       (puVar11 = *(undefined8 **)(lVar9 + 0x60), puVar11 != (undefined8 *)0x0)) {
      plVar10 = (long *)(**(code **)*puVar11)(puVar11);
      lVar9 = FUN_00c781c0();
      for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        if (plVar10 == (long *)lVar9) {
          puVar11 = puVar11 + -10;
          goto LAB_00ed7d24;
        }
      }
    }
    puVar11 = (undefined8 *)0x0;
LAB_00ed7d24:
    local_28 = FUN_0069d2b0(puVar11);
    plVar10 = (long *)FUN_006b92e0(&local_28);
    if ((*plVar10 == 0x2cffae3ef46f0d81) || (*plVar10 == -0x59060d55b8b104a0)) {
      fVar13 = 0.0;
    }
    fVar2 = *(float *)(param_1 + 0xb4) + fVar23 * fVar13;
    fVar3 = *(float *)(param_1 + 0xbc) + auVar27._12_4_ * fVar13;
    *(ulong *)(param_1 + 0xb8) =
         CONCAT17((char)((uint)fVar3 >> 0x18),
                  CONCAT16((char)((uint)fVar3 >> 0x10),
                           CONCAT15((char)((uint)fVar3 >> 8),
                                    CONCAT14(SUB41(fVar3,0),
                                             *(float *)(param_1 + 0xb8) + auVar25._8_4_ * fVar13))))
    ;
    *(ulong *)(param_1 + 0xb0) =
         CONCAT17((char)((uint)fVar2 >> 0x18),
                  CONCAT16((char)((uint)fVar2 >> 0x10),
                           CONCAT15((char)((uint)fVar2 >> 8),
                                    CONCAT14(SUB41(fVar2,0),
                                             *(float *)(param_1 + 0xb0) + fVar12 * fVar13))));
  }
  return;
}


