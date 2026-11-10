/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de3d80; name: FUN_00de3d80
 */


undefined8 FUN_00de3d80(long param_1,undefined8 *param_2,undefined8 *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  undefined1 auVar13 [16];
  float fVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  float fVar22;
  int iVar23;
  undefined1 auVar24 [12];
  float fVar30;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int iVar31;
  int iVar32;
  int iVar33;
  float fVar34;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar40;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  pfVar7 = *(float **)(param_1 + 0x3a0);
  lVar6 = *(long *)(param_1 + 0x3a8) - (long)pfVar7 >> 4;
  if (lVar6 == 2) {
    fVar10 = (float)*param_2 - *(float *)(param_1 + 0x3e0);
    fVar8 = (float)param_2[1] - *(float *)(param_1 + 1000);
    if (*(float *)(param_1 + 0x3f0) * *(float *)(param_1 + 0x3f0) < fVar10 * fVar10 + fVar8 * fVar8)
    goto LAB_00de4020;
    local_50 = 0;
    uStack_48 = 0;
    FUN_00dd5de0(param_2,pfVar7,pfVar7 + 4,&local_50);
    fVar10 = (float)local_50 - (float)*param_2;
    fVar8 = (float)uStack_48 - (float)param_2[1];
    fVar14 = uStack_48._4_4_ - (float)((ulong)param_2[1] >> 0x20);
    fVar10 = fVar10 * fVar10;
    fVar8 = fVar8 * fVar8;
    uVar16 = (undefined1)((uint)fVar8 >> 8);
    uVar17 = (undefined1)((uint)fVar8 >> 0x10);
    uVar18 = (undefined1)((uint)fVar8 >> 0x18);
    fVar14 = fVar14 * fVar14;
    uVar19 = (undefined1)((uint)fVar14 >> 8);
    uVar20 = (undefined1)((uint)fVar14 >> 0x10);
    uVar21 = (undefined1)((uint)fVar14 >> 0x18);
    auVar35._4_4_ = 0;
    auVar35._0_4_ = fVar10;
    auVar35[8] = SUB41(fVar8,0);
    auVar35[9] = uVar16;
    auVar35[10] = uVar17;
    auVar35[0xb] = uVar18;
    auVar35[0xc] = SUB41(fVar14,0);
    auVar35[0xd] = uVar19;
    auVar35[0xe] = uVar20;
    auVar35[0xf] = uVar21;
    auVar42._4_4_ = 0;
    auVar42._0_4_ = fVar10;
    auVar42[8] = SUB41(fVar8,0);
    auVar42[9] = uVar16;
    auVar42[10] = uVar17;
    auVar42[0xb] = uVar18;
    auVar42[0xc] = SUB41(fVar14,0);
    auVar42[0xd] = uVar19;
    auVar42[0xe] = uVar20;
    auVar42[0xf] = uVar21;
    auVar35 = NEON_ext(auVar35,auVar42,8,1);
    if (*(float *)(param_1 + 0x3d0) <= SQRT(auVar35._0_4_ + fVar10 + auVar35._4_4_ + 0.0))
    goto LAB_00de4020;
    fVar10 = (float)*(undefined8 *)pfVar7;
    fVar11 = pfVar7[4] - fVar10;
    fVar8 = (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
    fVar12 = pfVar7[5] - fVar8;
    fVar14 = (float)*(undefined8 *)(pfVar7 + 2);
    fVar30 = pfVar7[6] - fVar14;
    fVar15 = (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20);
    fVar34 = pfVar7[7] - fVar15;
    auVar37._0_4_ = fVar11 * fVar11;
    auVar37._4_4_ = fVar12 * fVar12;
    auVar37._8_4_ = fVar30 * fVar30;
    auVar37._12_4_ = fVar34 * fVar34;
    auVar35 = NEON_ext(auVar37,auVar37,8,1);
    fVar9 = auVar35._0_4_ + auVar37._0_4_;
    fVar40 = auVar35._4_4_ + auVar37._4_4_;
    fVar22 = fVar9 + fVar40;
    fVar9 = fVar9 + fVar40;
    auVar38._8_8_ = CONCAT44(fVar9,fVar22);
    auVar38._0_8_ = CONCAT44(fVar9,fVar22);
    auVar35 = NEON_frsqrte(auVar38,4);
    auVar47._0_4_ = auVar35._0_4_ * fVar22;
    auVar47._4_4_ = auVar35._4_4_ * fVar9;
    auVar47._8_4_ = auVar35._8_4_ * fVar22;
    auVar47._12_4_ = auVar35._12_4_ * fVar9;
    auVar42 = NEON_frsqrts(auVar35,auVar47,4);
    auVar44._0_4_ = auVar35._0_4_ * auVar42._0_4_;
    auVar44._4_4_ = auVar35._4_4_ * auVar42._4_4_;
    auVar44._8_4_ = auVar35._8_4_ * auVar42._8_4_;
    auVar44._12_4_ = auVar35._12_4_ * auVar42._12_4_;
    auVar48._0_4_ = fVar22 * auVar44._0_4_;
    auVar48._4_4_ = fVar9 * auVar44._4_4_;
    auVar48._8_4_ = fVar22 * auVar44._8_4_;
    auVar48._12_4_ = fVar9 * auVar44._12_4_;
    iVar23 = -(uint)(fVar22 == 0.0);
    iVar31 = -(uint)(fVar9 == 0.0);
    iVar32 = -(uint)(fVar22 == 0.0);
    iVar33 = -(uint)(fVar9 == 0.0);
    auVar35 = NEON_frsqrts(auVar44,auVar48,4);
    fVar11 = fVar11 * auVar44._0_4_ * auVar35._0_4_;
    fVar12 = fVar12 * auVar44._4_4_ * auVar35._4_4_;
    fVar30 = fVar30 * auVar44._8_4_ * auVar35._8_4_;
    fVar34 = fVar34 * auVar44._12_4_ * auVar35._12_4_;
    fVar9 = (float)CONCAT13((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                            CONCAT12((byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                                     CONCAT11((byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar23 >> 8)
                                              ,SUB41(fVar11,0) & ~(byte)iVar23)));
    auVar24._0_8_ =
         CONCAT17((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18),
                  CONCAT16((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10),
                           CONCAT15((byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar31 >> 8),
                                    CONCAT14(SUB41(fVar12,0) & ~(byte)iVar31,fVar9))));
    auVar24[8] = SUB41(fVar30,0) & ~(byte)iVar32;
    auVar24[9] = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar32 >> 8);
    auVar24[10] = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10);
    auVar24[0xb] = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18);
    auVar27[0xc] = SUB41(fVar34,0) & ~(byte)iVar33;
    auVar27._0_12_ = auVar24;
    auVar27[0xd] = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar33 >> 8);
    auVar27[0xe] = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10);
    auVar27[0xf] = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18);
    auVar13._0_4_ = ((float)local_50 - *pfVar7) * ((float)local_50 - *pfVar7);
    auVar13._4_4_ = (local_50._4_4_ - 0.0) * (local_50._4_4_ - 0.0);
    auVar13._8_4_ = ((float)uStack_48 - pfVar7[2]) * ((float)uStack_48 - pfVar7[2]);
    auVar13._12_4_ = (uStack_48._4_4_ - pfVar7[3]) * (uStack_48._4_4_ - pfVar7[3]);
    auVar35 = NEON_ext(auVar13,auVar13,8,1);
    fVar22 = SQRT(auVar35._0_4_ + auVar13._0_4_ + auVar35._4_4_ + auVar13._4_4_);
    fVar10 = fVar10 + fVar9 * fVar22;
    fVar14 = fVar14 + auVar24._8_4_ * fVar22;
    fVar15 = fVar15 + auVar27._12_4_ * fVar22;
    param_4[2] = fVar14;
    param_4[3] = fVar15;
    *param_4 = fVar10;
    param_4[1] = fVar8 + (float)((ulong)auVar24._0_8_ >> 0x20) * fVar22;
    fVar8 = (float)*param_3 - fVar10;
    fVar9 = (float)param_3[1] - fVar14;
    fVar11 = (float)((ulong)param_3[1] >> 0x20) - fVar15;
    auVar28._0_4_ = fVar8 * fVar8;
    auVar28._4_4_ = 0;
    auVar28._8_4_ = fVar9 * fVar9;
    auVar28._12_4_ = fVar11 * fVar11;
    auVar35 = NEON_ext(auVar28,auVar28,8,1);
    fVar12 = auVar35._0_4_ + auVar28._0_4_;
    fVar30 = auVar35._4_4_ + 0.0;
    fVar22 = fVar12 + fVar30;
    fVar12 = fVar12 + fVar30;
    auVar29._8_8_ = CONCAT44(fVar12,fVar22);
    auVar29._0_8_ = CONCAT44(fVar12,fVar22);
    auVar35 = NEON_frsqrte(auVar29,4);
    auVar45._0_4_ = auVar35._0_4_ * fVar22;
    auVar45._4_4_ = auVar35._4_4_ * fVar12;
    auVar45._8_4_ = auVar35._8_4_ * fVar22;
    auVar45._12_4_ = auVar35._12_4_ * fVar12;
    auVar42 = NEON_frsqrts(auVar35,auVar45,4);
    auVar39._0_4_ = auVar35._0_4_ * auVar42._0_4_;
    auVar39._4_4_ = auVar35._4_4_ * auVar42._4_4_;
    auVar39._8_4_ = auVar35._8_4_ * auVar42._8_4_;
    auVar39._12_4_ = auVar35._12_4_ * auVar42._12_4_;
    auVar46._0_4_ = fVar22 * auVar39._0_4_;
    auVar46._4_4_ = fVar12 * auVar39._4_4_;
    auVar46._8_4_ = fVar22 * auVar39._8_4_;
    auVar46._12_4_ = fVar12 * auVar39._12_4_;
    iVar23 = -(uint)(fVar22 == 0.0);
    iVar31 = -(uint)(fVar12 == 0.0);
    iVar32 = -(uint)(fVar22 == 0.0);
    iVar33 = -(uint)(fVar12 == 0.0);
    auVar35 = NEON_frsqrts(auVar39,auVar46,4);
    fVar8 = fVar8 * auVar39._0_4_ * auVar35._0_4_;
    fVar22 = auVar39._4_4_ * auVar35._4_4_ * 0.0;
    fVar9 = fVar9 * auVar39._8_4_ * auVar35._8_4_;
    fVar11 = fVar11 * auVar39._12_4_ * auVar35._12_4_;
    *(ulong *)(param_4 + 6) =
         CONCAT17((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                  CONCAT16((byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10),
                           CONCAT15((byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar33 >> 8),
                                    CONCAT14(SUB41(fVar11,0) & ~(byte)iVar33,
                                             CONCAT13((byte)((uint)fVar9 >> 0x18) &
                                                      ~(byte)((uint)iVar32 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar9 >> 0x10) &
                                                               ~(byte)((uint)iVar32 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar9 >> 8) &
                                                                        ~(byte)((uint)iVar32 >> 8),
                                                                        SUB41(fVar9,0) &
                                                                        ~(byte)iVar32)))))));
    *(ulong *)(param_4 + 4) =
         CONCAT17((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18),
                  CONCAT16((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10),
                           CONCAT15((byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar31 >> 8),
                                    CONCAT14(SUB41(fVar22,0) & ~(byte)iVar31,
                                             CONCAT13((byte)((uint)fVar8 >> 0x18) &
                                                      ~(byte)((uint)iVar23 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar8 >> 0x10) &
                                                               ~(byte)((uint)iVar23 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar8 >> 8) &
                                                                        ~(byte)((uint)iVar23 >> 8),
                                                                        SUB41(fVar8,0) &
                                                                        ~(byte)iVar23)))))));
    fVar10 = fVar10 - (float)*param_2;
    fVar14 = fVar14 - (float)param_2[1];
    fVar15 = fVar15 - (float)((ulong)param_2[1] >> 0x20);
    fVar10 = fVar10 * fVar10;
    fVar14 = fVar14 * fVar14;
    fVar15 = fVar15 * fVar15;
    auVar3._4_4_ = 0;
    auVar3._0_4_ = fVar10;
    auVar3._8_4_ = fVar14;
    auVar3._12_4_ = fVar15;
    auVar4._4_4_ = 0;
    auVar4._0_4_ = fVar10;
    auVar4._8_4_ = fVar14;
    auVar4._12_4_ = fVar15;
    auVar35 = NEON_ext(auVar3,auVar4,8,1);
    param_4[8] = SQRT(auVar35._0_4_ + fVar10 + auVar35._4_4_ + 0.0);
    if (*(int *)(param_1 + 0x43c) != 1) {
      if (*(int *)(param_1 + 0x43c) == 2) {
        return 1;
      }
      uVar5 = 1;
      goto LAB_00de4058;
    }
  }
  else {
    if (lVar6 != 1) {
LAB_00de4020:
      if (*(int *)(param_1 + 0x43c) != 0) {
        if (*(int *)(param_1 + 0x43c) == 3) {
          *(undefined4 *)(param_1 + 0x43c) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x43c) = 3;
        }
      }
      return 0;
    }
    fVar10 = (float)*param_3 - *pfVar7;
    fVar14 = (float)param_3[1] - pfVar7[2];
    fVar15 = (float)((ulong)param_3[1] >> 0x20) - pfVar7[3];
    fVar9 = (float)*param_2 - *pfVar7;
    fVar11 = (float)param_2[1] - pfVar7[2];
    fVar12 = (float)((ulong)param_2[1] >> 0x20) - pfVar7[3];
    auVar25._0_4_ = fVar10 * fVar10;
    auVar25._4_4_ = 0;
    auVar25._8_4_ = fVar14 * fVar14;
    auVar25._12_4_ = fVar15 * fVar15;
    auVar35 = NEON_ext(auVar25,auVar25,8,1);
    fVar22 = auVar35._0_4_ + auVar25._0_4_;
    fVar30 = auVar35._4_4_ + 0.0;
    fVar8 = fVar22 + fVar30;
    fVar22 = fVar22 + fVar30;
    auVar26._8_8_ = CONCAT44(fVar22,fVar8);
    auVar26._0_8_ = CONCAT44(fVar22,fVar8);
    auVar35 = NEON_frsqrte(auVar26,4);
    auVar41._0_4_ = auVar35._0_4_ * fVar8;
    auVar41._4_4_ = auVar35._4_4_ * fVar22;
    auVar41._8_4_ = auVar35._8_4_ * fVar8;
    auVar41._12_4_ = auVar35._12_4_ * fVar22;
    auVar42 = NEON_frsqrts(auVar35,auVar41,4);
    auVar36._0_4_ = auVar35._0_4_ * auVar42._0_4_;
    auVar36._4_4_ = auVar35._4_4_ * auVar42._4_4_;
    auVar36._8_4_ = auVar35._8_4_ * auVar42._8_4_;
    auVar36._12_4_ = auVar35._12_4_ * auVar42._12_4_;
    auVar43._0_4_ = fVar8 * auVar36._0_4_;
    auVar43._4_4_ = fVar22 * auVar36._4_4_;
    auVar43._8_4_ = fVar8 * auVar36._8_4_;
    auVar43._12_4_ = fVar22 * auVar36._12_4_;
    iVar23 = -(uint)(fVar8 == 0.0);
    iVar31 = -(uint)(fVar22 == 0.0);
    iVar32 = -(uint)(fVar8 == 0.0);
    iVar33 = -(uint)(fVar22 == 0.0);
    auVar35 = NEON_frsqrts(auVar36,auVar43,4);
    fVar10 = fVar10 * auVar36._0_4_ * auVar35._0_4_;
    fVar8 = auVar36._4_4_ * auVar35._4_4_ * 0.0;
    fVar14 = fVar14 * auVar36._8_4_ * auVar35._8_4_;
    fVar15 = fVar15 * auVar36._12_4_ * auVar35._12_4_;
    *(ulong *)(param_4 + 6) =
         CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                  CONCAT16((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10),
                           CONCAT15((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar33 >> 8),
                                    CONCAT14(SUB41(fVar15,0) & ~(byte)iVar33,
                                             CONCAT13((byte)((uint)fVar14 >> 0x18) &
                                                      ~(byte)((uint)iVar32 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar14 >> 0x10) &
                                                               ~(byte)((uint)iVar32 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar14 >> 8) &
                                                                        ~(byte)((uint)iVar32 >> 8),
                                                                        SUB41(fVar14,0) &
                                                                        ~(byte)iVar32)))))));
    *(ulong *)(param_4 + 4) =
         CONCAT17((byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18),
                  CONCAT16((byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10),
                           CONCAT15((byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar31 >> 8),
                                    CONCAT14(SUB41(fVar8,0) & ~(byte)iVar31,
                                             CONCAT13((byte)((uint)fVar10 >> 0x18) &
                                                      ~(byte)((uint)iVar23 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar10 >> 0x10) &
                                                               ~(byte)((uint)iVar23 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar10 >> 8) &
                                                                        ~(byte)((uint)iVar23 >> 8),
                                                                        SUB41(fVar10,0) &
                                                                        ~(byte)iVar23)))))));
    if (*(float *)(param_1 + 0x3d0) * *(float *)(param_1 + 0x3d0) <= fVar9 * fVar9 + fVar11 * fVar11
       ) goto LAB_00de4020;
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(pfVar7 + 2);
    *(undefined8 *)param_4 = *(undefined8 *)pfVar7;
    fVar9 = fVar9 * fVar9;
    fVar12 = fVar12 * fVar12;
    auVar1._4_4_ = 0;
    auVar1._0_4_ = fVar9;
    auVar1._8_4_ = fVar11 * fVar11;
    auVar1._12_4_ = fVar12;
    auVar2._4_4_ = 0;
    auVar2._0_4_ = fVar9;
    auVar2._8_4_ = fVar11 * fVar11;
    auVar2._12_4_ = fVar12;
    auVar35 = NEON_ext(auVar1,auVar2,8,1);
    param_4[8] = SQRT(auVar35._0_4_ + fVar9 + auVar35._4_4_ + 0.0);
    if (*(int *)(param_1 + 0x43c) == 2) {
      return 1;
    }
    if (*(int *)(param_1 + 0x43c) != 1) {
      *(undefined4 *)(param_1 + 0x43c) = 1;
      return 1;
    }
  }
  uVar5 = 2;
LAB_00de4058:
  *(undefined4 *)(param_1 + 0x43c) = uVar5;
  return 1;
}


