/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e65990; name: FUN_00e65990
 */


void FUN_00e65990(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined2 uVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  if (param_2[3] != 0) {
    *(undefined8 *)(param_1 + 0x488) = param_2[1];
    *(undefined8 *)(param_1 + 0x480) = *param_2;
    lVar9 = param_2[3];
    fVar13 = (float)*(undefined8 *)(param_1 + 0x480);
    fVar12 = fVar13 * fVar13;
    fVar14 = (float)((ulong)*(undefined8 *)(param_1 + 0x480) >> 0x20);
    fVar5 = fVar14 * fVar14;
    uVar18 = (undefined1)((uint)fVar5 >> 8);
    uVar19 = (undefined1)((uint)fVar5 >> 0x10);
    uVar20 = (undefined1)((uint)fVar5 >> 0x18);
    fVar16 = (float)*(undefined8 *)(param_1 + 0x488);
    fVar11 = fVar16 * fVar16;
    uVar21 = (undefined1)((uint)fVar11 >> 8);
    uVar22 = (undefined1)((uint)fVar11 >> 0x10);
    uVar23 = (undefined1)((uint)fVar11 >> 0x18);
    fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x488) >> 0x20);
    fVar15 = fVar17 * fVar17;
    uVar24 = (undefined1)((uint)fVar15 >> 8);
    uVar25 = (undefined1)((uint)fVar15 >> 0x10);
    uVar26 = (undefined1)((uint)fVar15 >> 0x18);
    auVar28[4] = SUB41(fVar5,0);
    auVar28._0_4_ = fVar12;
    auVar28[5] = uVar18;
    auVar28[6] = uVar19;
    auVar28[7] = uVar20;
    auVar28[8] = SUB41(fVar11,0);
    auVar28[9] = uVar21;
    auVar28[10] = uVar22;
    auVar28[0xb] = uVar23;
    auVar28[0xc] = SUB41(fVar15,0);
    auVar28[0xd] = uVar24;
    auVar28[0xe] = uVar25;
    auVar28[0xf] = uVar26;
    auVar31[4] = SUB41(fVar5,0);
    auVar31._0_4_ = fVar12;
    auVar31[5] = uVar18;
    auVar31[6] = uVar19;
    auVar31[7] = uVar20;
    auVar31[8] = SUB41(fVar11,0);
    auVar31[9] = uVar21;
    auVar31[10] = uVar22;
    auVar31[0xb] = uVar23;
    auVar31[0xc] = SUB41(fVar15,0);
    auVar31[0xd] = uVar24;
    auVar31[0xe] = uVar25;
    auVar31[0xf] = uVar26;
    auVar28 = NEON_ext(auVar28,auVar31,8,1);
    fVar12 = auVar28._0_4_ + fVar12;
    fVar5 = auVar28._4_4_ + fVar5;
    fVar11 = fVar12 + fVar5;
    fVar12 = fVar12 + fVar5;
    uVar18 = SUB41(fVar12,0);
    uVar19 = (undefined1)((uint)fVar12 >> 8);
    uVar20 = (undefined1)((uint)fVar12 >> 0x10);
    uVar21 = (undefined1)((uint)fVar12 >> 0x18);
    uVar1 = *(undefined4 *)(param_2 + 5);
    *(long *)(param_1 + 0x498) = lVar9;
    auVar2[4] = uVar18;
    auVar2._0_4_ = fVar11;
    auVar2[5] = uVar19;
    auVar2[6] = uVar20;
    auVar2[7] = uVar21;
    auVar2[8] = SUB41(fVar11,0);
    auVar2[9] = (char)((uint)fVar11 >> 8);
    auVar2[10] = (char)((uint)fVar11 >> 0x10);
    auVar2[0xb] = (char)((uint)fVar11 >> 0x18);
    auVar2[0xc] = uVar18;
    auVar2[0xd] = uVar19;
    auVar2[0xe] = uVar20;
    auVar2[0xf] = uVar21;
    auVar28 = NEON_frsqrte(auVar2,4);
    uVar10 = param_2[4];
    auVar30._0_4_ = auVar28._0_4_ * fVar11;
    auVar30._4_4_ = auVar28._4_4_ * fVar12;
    auVar30._8_4_ = auVar28._8_4_ * fVar11;
    uVar3 = (undefined2)(CONCAT15(uVar19,CONCAT14(uVar18,fVar11)) >> 0x20);
    auVar30._12_4_ = auVar28._12_4_ * (float)CONCAT13(uVar21,CONCAT12(uVar20,uVar3));
    auVar31 = NEON_frsqrts(auVar28,auVar30,4);
    auVar29._0_4_ = auVar28._0_4_ * auVar31._0_4_;
    auVar29._4_4_ = auVar28._4_4_ * auVar31._4_4_;
    auVar29._8_4_ = auVar28._8_4_ * auVar31._8_4_;
    auVar29._12_4_ = auVar28._12_4_ * auVar31._12_4_;
    auVar32._0_4_ = fVar11 * auVar29._0_4_;
    auVar32._4_4_ = fVar12 * auVar29._4_4_;
    auVar32._8_4_ = fVar11 * auVar29._8_4_;
    auVar32._12_4_ = (float)CONCAT13(uVar21,CONCAT12(uVar20,uVar3)) * auVar29._12_4_;
    *(undefined8 *)(param_1 + 0x490) = param_2[2];
    iVar4 = -(uint)(fVar11 == 0.0);
    iVar6 = -(uint)(fVar12 == 0.0);
    iVar7 = -(uint)(fVar11 == 0.0);
    iVar8 = -(uint)((float)CONCAT13(uVar21,CONCAT12(uVar20,uVar3)) == 0.0);
    auVar28 = NEON_frsqrts(auVar29,auVar32,4);
    *(undefined4 *)(param_1 + 0x4a8) = uVar1;
    fVar13 = fVar13 * auVar29._0_4_ * auVar28._0_4_;
    fVar14 = fVar14 * auVar29._4_4_ * auVar28._4_4_;
    fVar16 = fVar16 * auVar29._8_4_ * auVar28._8_4_;
    fVar17 = fVar17 * auVar29._12_4_ * auVar28._12_4_;
    fVar27 = *(float *)(param_1 + 0x490);
    fVar11 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18),
                             CONCAT12((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10),
                                      CONCAT11((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar4 >> 8)
                                               ,SUB41(fVar13,0) & ~(byte)iVar4)));
    fVar13 = (float)CONCAT13((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                             CONCAT12((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10),
                                      CONCAT11((byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar7 >> 8)
                                               ,SUB41(fVar16,0) & ~(byte)iVar7)));
    fVar15 = (float)(CONCAT17((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18),
                              CONCAT16((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10),
                                       CONCAT15((byte)((uint)fVar14 >> 8) &
                                                ~(byte)((uint)iVar6 >> 8),
                                                CONCAT14(SUB41(fVar14,0) & ~(byte)iVar6,fVar11))))
                    >> 0x20);
    fVar12 = -fVar15;
    fVar14 = (float)(CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                              CONCAT16((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                       CONCAT15((byte)((uint)fVar17 >> 8) &
                                                ~(byte)((uint)iVar8 >> 8),
                                                CONCAT14(SUB41(fVar17,0) & ~(byte)iVar8,fVar13))))
                    >> 0x20);
    fVar5 = -fVar14;
    *(undefined4 *)(param_1 + 0x4e0) = 0;
    *(undefined8 *)(param_1 + 0x4c8) = 0;
    *(undefined8 *)(param_1 + 0x4c0) = 0;
    *(undefined8 *)(param_1 + 0x4e8) = 0;
    *(undefined1 *)(param_1 + 0x4b0) = 1;
    *(undefined1 *)(param_1 + 0x4f0) = 0;
    *(undefined8 *)(param_1 + 0x4a0) = uVar10;
    *(float *)(param_1 + 0x4e4) = 1.0 / ((float)lVar9 * 0.5);
    *(ulong *)(param_1 + 0x488) =
         CONCAT17((char)((uint)fVar5 >> 0x18),
                  CONCAT16((char)((uint)fVar5 >> 0x10),
                           CONCAT15((char)((uint)fVar5 >> 8),CONCAT14(SUB41(fVar5,0),-fVar13))));
    *(ulong *)(param_1 + 0x480) =
         CONCAT17((char)((uint)fVar12 >> 0x18),
                  CONCAT16((char)((uint)fVar12 >> 0x10),
                           CONCAT15((char)((uint)fVar12 >> 8),CONCAT14(SUB41(fVar12,0),-fVar11))));
    *(ulong *)(param_1 + 0x4d8) = CONCAT44(fVar14 * fVar27,fVar13 * fVar27);
    *(ulong *)(param_1 + 0x4d0) = CONCAT44(fVar15 * fVar27,fVar11 * fVar27);
    *(undefined8 *)(param_1 + 0x4fc) = 0;
    *(undefined8 *)(param_1 + 0x4f4) = 0;
  }
  return;
}


