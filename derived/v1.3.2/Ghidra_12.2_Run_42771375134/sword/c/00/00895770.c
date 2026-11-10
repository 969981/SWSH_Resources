/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00895770; name: FUN_00895770
 */


uint FUN_00895770(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined1 auVar1 [16];
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar11 = &local_50;
  nn::os::LockMutex((MutexType *)(param_1 + 0x90));
  lVar9 = FUN_00775d40(*(undefined8 *)(param_1 + 0x70));
  if (lVar9 == param_5) {
    *(undefined8 *)(param_1 + 0x68) = param_2[1];
    *(undefined8 *)(param_1 + 0x60) = *param_2;
  }
  else if ((*(long *)(param_1 + 0x50) != param_5) &&
          (fVar14 = *(float *)(param_1 + 0x58), DAT_01d4c6ac <= ABS(fVar14 + -1.0))) {
    if (fVar14 <= 0.0) {
      uStack_48 = *(undefined8 *)(param_1 + 0x68);
      local_50 = *(undefined8 *)(param_1 + 0x60);
    }
    else {
      fVar20 = (float)*(undefined8 *)(param_1 + 0x60);
      fVar15 = (float)*param_2 - fVar20;
      fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
      fVar16 = (float)((ulong)*param_2 >> 0x20) - fVar21;
      fVar22 = (float)*(undefined8 *)(param_1 + 0x68);
      fVar17 = (float)param_2[1] - fVar22;
      fVar23 = (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
      fVar19 = (float)((ulong)param_2[1] >> 0x20) - fVar23;
      fVar13 = fVar15 * fVar15;
      fVar18 = fVar16 * fVar16;
      uVar24 = (undefined1)((uint)fVar18 >> 8);
      uVar25 = (undefined1)((uint)fVar18 >> 0x10);
      uVar26 = (undefined1)((uint)fVar18 >> 0x18);
      fVar12 = fVar17 * fVar17;
      uVar27 = (undefined1)((uint)fVar12 >> 8);
      uVar28 = (undefined1)((uint)fVar12 >> 0x10);
      uVar29 = (undefined1)((uint)fVar12 >> 0x18);
      fVar6 = fVar19 * fVar19;
      uVar30 = (undefined1)((uint)fVar6 >> 8);
      uVar31 = (undefined1)((uint)fVar6 >> 0x10);
      uVar32 = (undefined1)((uint)fVar6 >> 0x18);
      auVar33[4] = SUB41(fVar18,0);
      auVar33._0_4_ = fVar13;
      auVar33[5] = uVar24;
      auVar33[6] = uVar25;
      auVar33[7] = uVar26;
      auVar33[8] = SUB41(fVar12,0);
      auVar33[9] = uVar27;
      auVar33[10] = uVar28;
      auVar33[0xb] = uVar29;
      auVar33[0xc] = SUB41(fVar6,0);
      auVar33[0xd] = uVar30;
      auVar33[0xe] = uVar31;
      auVar33[0xf] = uVar32;
      auVar36[4] = SUB41(fVar18,0);
      auVar36._0_4_ = fVar13;
      auVar36[5] = uVar24;
      auVar36[6] = uVar25;
      auVar36[7] = uVar26;
      auVar36[8] = SUB41(fVar12,0);
      auVar36[9] = uVar27;
      auVar36[10] = uVar28;
      auVar36[0xb] = uVar29;
      auVar36[0xc] = SUB41(fVar6,0);
      auVar36[0xd] = uVar30;
      auVar36[0xe] = uVar31;
      auVar36[0xf] = uVar32;
      auVar33 = NEON_ext(auVar33,auVar36,8,1);
      fVar13 = auVar33._0_4_ + fVar13;
      fVar18 = auVar33._4_4_ + fVar18;
      fVar12 = fVar13 + fVar18;
      fVar13 = fVar13 + fVar18;
      uVar24 = SUB41(fVar13,0);
      uVar25 = (undefined1)((uint)fVar13 >> 8);
      uVar26 = (undefined1)((uint)fVar13 >> 0x10);
      uVar27 = (undefined1)((uint)fVar13 >> 0x18);
      auVar1[4] = uVar24;
      auVar1._0_4_ = fVar12;
      auVar1[5] = uVar25;
      auVar1[6] = uVar26;
      auVar1[7] = uVar27;
      auVar1[8] = SUB41(fVar12,0);
      auVar1[9] = (char)((uint)fVar12 >> 8);
      auVar1[10] = (char)((uint)fVar12 >> 0x10);
      auVar1[0xb] = (char)((uint)fVar12 >> 0x18);
      auVar1[0xc] = uVar24;
      auVar1[0xd] = uVar25;
      auVar1[0xe] = uVar26;
      auVar1[0xf] = uVar27;
      auVar33 = NEON_frsqrte(auVar1,4);
      auVar35._0_4_ = auVar33._0_4_ * fVar12;
      auVar35._4_4_ = auVar33._4_4_ * fVar13;
      auVar35._8_4_ = auVar33._8_4_ * fVar12;
      uVar2 = (undefined2)(CONCAT15(uVar25,CONCAT14(uVar24,fVar12)) >> 0x20);
      auVar35._12_4_ = auVar33._12_4_ * (float)CONCAT13(uVar27,CONCAT12(uVar26,uVar2));
      auVar36 = NEON_frsqrts(auVar33,auVar35,4);
      auVar34._0_4_ = auVar33._0_4_ * auVar36._0_4_;
      auVar34._4_4_ = auVar33._4_4_ * auVar36._4_4_;
      auVar34._8_4_ = auVar33._8_4_ * auVar36._8_4_;
      auVar34._12_4_ = auVar33._12_4_ * auVar36._12_4_;
      auVar37._0_4_ = fVar12 * auVar34._0_4_;
      auVar37._4_4_ = fVar13 * auVar34._4_4_;
      auVar37._8_4_ = fVar12 * auVar34._8_4_;
      auVar37._12_4_ = (float)CONCAT13(uVar27,CONCAT12(uVar26,uVar2)) * auVar34._12_4_;
      iVar3 = -(uint)(fVar12 == 0.0);
      iVar4 = -(uint)(fVar13 == 0.0);
      iVar5 = -(uint)(fVar12 == 0.0);
      iVar7 = -(uint)((float)CONCAT13(uVar27,CONCAT12(uVar26,uVar2)) == 0.0);
      auVar33 = NEON_frsqrts(auVar34,auVar37,4);
      fVar15 = fVar15 * auVar34._0_4_ * auVar33._0_4_;
      fVar16 = fVar16 * auVar34._4_4_ * auVar33._4_4_;
      fVar17 = fVar17 * auVar34._8_4_ * auVar33._8_4_;
      fVar19 = fVar19 * auVar34._12_4_ * auVar33._12_4_;
      fVar13 = (float)CONCAT13((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar3 >> 0x18),
                               CONCAT12((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar3 >> 0x10),
                                        CONCAT11((byte)((uint)fVar15 >> 8) &
                                                 ~(byte)((uint)iVar3 >> 8),
                                                 SUB41(fVar15,0) & ~(byte)iVar3)));
      fVar18 = (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                               CONCAT12((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                                        CONCAT11((byte)((uint)fVar17 >> 8) &
                                                 ~(byte)((uint)iVar5 >> 8),
                                                 SUB41(fVar17,0) & ~(byte)iVar5)));
      local_50 = CONCAT44(fVar21 + (float)(CONCAT17((byte)((uint)fVar16 >> 0x18) &
                                                    ~(byte)((uint)iVar4 >> 0x18),
                                                    CONCAT16((byte)((uint)fVar16 >> 0x10) &
                                                             ~(byte)((uint)iVar4 >> 0x10),
                                                             CONCAT15((byte)((uint)fVar16 >> 8) &
                                                                      ~(byte)((uint)iVar4 >> 8),
                                                                      CONCAT14(SUB41(fVar16,0) &
                                                                               ~(byte)iVar4,fVar13))
                                                            )) >> 0x20) * fVar14,
                          fVar20 + fVar13 * fVar14);
      uStack_48 = CONCAT44(fVar23 + (float)(CONCAT17((byte)((uint)fVar19 >> 0x18) &
                                                     ~(byte)((uint)iVar7 >> 0x18),
                                                     CONCAT16((byte)((uint)fVar19 >> 0x10) &
                                                              ~(byte)((uint)iVar7 >> 0x10),
                                                              CONCAT15((byte)((uint)fVar19 >> 8) &
                                                                       ~(byte)((uint)iVar7 >> 8),
                                                                       CONCAT14(SUB41(fVar19,0) &
                                                                                ~(byte)iVar7,fVar18)
                                                                      ))) >> 0x20) * fVar14,
                           fVar22 + fVar18 * fVar14);
    }
    uVar10 = *(undefined8 *)(param_1 + 0x70);
    goto LAB_00895804;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x70);
  puVar11 = param_2;
LAB_00895804:
  uVar8 = FUN_00776990(uVar10,param_5,puVar11,param_3,param_4);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x90));
  return uVar8 & 1;
}


