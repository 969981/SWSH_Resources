/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e61250; name: FUN_00e61250
 */


undefined1  [16] FUN_00e61250(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [64];
  
  FUN_006c5c60(auStack_70);
  uVar8 = FUN_006c83a0(*(undefined8 *)(param_1 + 0x288),param_2,param_3,2,auStack_70);
  if ((uVar8 & 1) == 0) {
    uVar9 = 0;
    uVar10 = 0;
  }
  else {
    FUN_006c5d20(auStack_a0,auStack_70);
    fVar2 = auStack_a0._16_4_ * auStack_a0._16_4_;
    fVar4 = auStack_a0._20_4_ * auStack_a0._20_4_;
    uVar15 = (undefined1)((uint)fVar4 >> 8);
    uVar16 = (undefined1)((uint)fVar4 >> 0x10);
    uVar17 = (undefined1)((uint)fVar4 >> 0x18);
    fVar5 = auStack_a0._24_4_ * auStack_a0._24_4_;
    uVar18 = (undefined1)((uint)fVar5 >> 8);
    uVar19 = (undefined1)((uint)fVar5 >> 0x10);
    uVar20 = (undefined1)((uint)fVar5 >> 0x18);
    fVar6 = auStack_a0._28_4_ * auStack_a0._28_4_;
    uVar21 = (undefined1)((uint)fVar6 >> 8);
    uVar22 = (undefined1)((uint)fVar6 >> 0x10);
    uVar23 = (undefined1)((uint)fVar6 >> 0x18);
    auVar24[4] = SUB41(fVar4,0);
    auVar24._0_4_ = fVar2;
    auVar24[5] = uVar15;
    auVar24[6] = uVar16;
    auVar24[7] = uVar17;
    auVar24[8] = SUB41(fVar5,0);
    auVar24[9] = uVar18;
    auVar24[10] = uVar19;
    auVar24[0xb] = uVar20;
    auVar24[0xc] = SUB41(fVar6,0);
    auVar24[0xd] = uVar21;
    auVar24[0xe] = uVar22;
    auVar24[0xf] = uVar23;
    auVar1[4] = SUB41(fVar4,0);
    auVar1._0_4_ = fVar2;
    auVar1[5] = uVar15;
    auVar1[6] = uVar16;
    auVar1[7] = uVar17;
    auVar1[8] = SUB41(fVar5,0);
    auVar1[9] = uVar18;
    auVar1[10] = uVar19;
    auVar1[0xb] = uVar20;
    auVar1[0xc] = SUB41(fVar6,0);
    auVar1[0xd] = uVar21;
    auVar1[0xe] = uVar22;
    auVar1[0xf] = uVar23;
    auVar24 = NEON_ext(auVar24,auVar1,8,1);
    iVar3 = -(uint)(0.0 < auVar24._0_4_ + fVar2 + auVar24._4_4_ + fVar4);
    bVar11 = (byte)iVar3;
    bVar12 = (byte)((uint)iVar3 >> 8);
    bVar13 = (byte)((uint)iVar3 >> 0x10);
    bVar14 = (byte)((uint)iVar3 >> 0x18);
    uVar9 = CONCAT17(auStack_a0[0x17] & bVar14,
                     CONCAT16(auStack_a0[0x16] & bVar13,
                              CONCAT15(auStack_a0[0x15] & bVar12,
                                       CONCAT14(auStack_a0[0x14] & bVar11,
                                                CONCAT13(auStack_a0[0x13] & bVar14,
                                                         CONCAT12(auStack_a0[0x12] & bVar13,
                                                                  CONCAT11(auStack_a0[0x11] & bVar12
                                                                           ,auStack_a0[0x10] &
                                                                            bVar11)))))));
    uVar10 = CONCAT17(auStack_a0[0x1f] & bVar14,
                      CONCAT16(auStack_a0[0x1e] & bVar13,
                               CONCAT15(auStack_a0[0x1d] & bVar12,
                                        CONCAT14(auStack_a0[0x1c] & bVar11,
                                                 CONCAT13(auStack_a0[0x1b] & bVar14,
                                                          CONCAT12(auStack_a0[0x1a] & bVar13,
                                                                   CONCAT11(auStack_a0[0x19] &
                                                                            bVar12,auStack_a0[0x18]
                                                                                   & bVar11)))))));
  }
  FUN_006c5c80(auStack_70);
  auVar7._8_8_ = uVar10;
  auVar7._0_8_ = uVar9;
  return auVar7;
}


