/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e8e4f0; name: FUN_00e8e4f0
 */


/* WARNING: Removing unreachable block (ram,0x00e8e860) */
/* WARNING: Removing unreachable block (ram,0x00e8e940) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e8e4f0(undefined8 *param_1,int *param_2)

{
  uint *puVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined2 uVar11;
  ulong uVar12;
  int *piVar13;
  ushort *puVar14;
  int *piVar15;
  float fVar16;
  undefined1 uVar17;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar18;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 uVar19;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 uVar20;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  float fVar26;
  int iVar27;
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  int iVar35;
  undefined1 auVar30 [16];
  int iVar37;
  int iVar38;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar39;
  float fVar40;
  float fVar44;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  undefined4 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined4 uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined8 uVar61;
  float fVar62;
  ulong uVar63;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 5) {
    piVar13 = (int *)0x0;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    piVar13 = (int *)0x0;
    if (uVar12 != 0) {
      puVar1 = (uint *)((long)param_2 + uVar12);
      piVar13 = (int *)((long)puVar1 + (ulong)*puVar1);
    }
  }
  puVar14 = (ushort *)((long)piVar13 - (long)*piVar13);
  if (*puVar14 < 5) {
    piVar15 = (int *)0x0;
  }
  else {
    piVar15 = (int *)0x0;
    if ((ulong)puVar14[2] != 0) {
      puVar1 = (uint *)((long)piVar13 + (ulong)puVar14[2]);
      piVar15 = (int *)((long)puVar1 + (ulong)*puVar1);
    }
  }
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  fVar26 = 0.0;
  if (4 < *(ushort *)((long)piVar15 - (long)*piVar15)) {
    uVar12 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2];
    fVar26 = 0.0;
    if (uVar12 != 0) {
      fVar26 = *(float *)((long)piVar15 + uVar12);
    }
  }
  piVar15 = (int *)((long)((long)piVar13 + (ulong)puVar14[2]) +
                   (ulong)*(uint *)((long)piVar13 + (ulong)puVar14[2]));
  puVar14 = (ushort *)((long)piVar15 - (long)*piVar15);
  fVar39 = 0.0;
  fVar47 = 0.0;
  if (6 < *puVar14) {
    fVar39 = 0.0;
    fVar47 = 0.0;
    if ((ulong)puVar14[3] != 0) {
      fVar39 = *(float *)((long)piVar15 + (ulong)puVar14[3]);
    }
    if ((8 < *puVar14) && ((ulong)puVar14[4] != 0)) {
      fVar47 = *(float *)((long)piVar15 + (ulong)puVar14[4]);
    }
  }
  uVar53 = 0;
  uVar12 = 0;
  uVar61 = CONCAT44(fVar39,fVar26);
  uVar63 = (ulong)(uint)fVar47;
  uVar48 = 0;
  param_1[1] = uVar63;
  *param_1 = uVar61;
  puVar14 = (ushort *)((long)piVar13 - (long)*piVar13);
  uVar2 = *puVar14;
  if (10 < uVar2) {
    uVar12 = 0;
    uVar48 = 0;
    uVar53 = 0;
    if ((ulong)puVar14[5] != 0) {
      uVar48 = *(undefined4 *)((long)piVar13 + (ulong)puVar14[5]);
    }
    if (0xc < uVar2) {
      uVar12 = 0;
      uVar53 = 0;
      if ((ulong)puVar14[6] != 0) {
        uVar53 = *(undefined4 *)((long)piVar13 + (ulong)puVar14[6]);
      }
      if ((0xe < uVar2) && ((ulong)puVar14[7] != 0)) {
        uVar12 = (ulong)*(uint *)((long)piVar13 + (ulong)puVar14[7]);
      }
    }
  }
  fVar54 = 0.0;
  param_1[3] = uVar12;
  param_1[2] = CONCAT44(uVar53,uVar48);
  fVar16 = DAT_01d4c284;
  puVar1 = (uint *)((long)piVar13 + (ulong)*(ushort *)((long)piVar13 + (4 - (long)*piVar13)));
  piVar15 = (int *)((long)puVar1 + (ulong)*puVar1);
  if (0xc < *(ushort *)((long)piVar15 - (long)*piVar15)) {
    uVar12 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[6];
    fVar54 = 0.0;
    if (uVar12 != 0) {
      fVar54 = *(float *)((long)piVar15 + uVar12) * DAT_01d4bb38;
    }
  }
  fVar54 = fVar54 / DAT_01d4c284;
  fVar55 = 0.0;
  *(float *)(param_1 + 4) = fVar54;
  puVar1 = (uint *)((long)piVar13 + (ulong)*(ushort *)((long)piVar13 + (4 - (long)*piVar13)));
  piVar15 = (int *)((long)puVar1 + (ulong)*puVar1);
  if (10 < *(ushort *)((long)piVar15 - (long)*piVar15)) {
    uVar12 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[5];
    fVar55 = 0.0;
    if (uVar12 != 0) {
      fVar55 = *(float *)((long)piVar15 + uVar12) * DAT_01d4bb38;
    }
  }
  fVar55 = fVar55 / fVar16;
  fVar56 = 0.0;
  *(float *)((long)param_1 + 0x24) = fVar55;
  puVar1 = (uint *)((long)piVar13 + (ulong)*(ushort *)((long)piVar13 + (4 - (long)*piVar13)));
  piVar15 = (int *)((long)puVar1 + (ulong)*puVar1);
  if (0xe < *(ushort *)((long)piVar15 - (long)*piVar15)) {
    uVar12 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[7];
    fVar56 = 0.0;
    if (uVar12 != 0) {
      fVar56 = *(float *)((long)piVar15 + uVar12) * DAT_01d4bb38;
    }
  }
  *(float *)(param_1 + 5) = fVar56 / fVar16;
  uVar48 = 0;
  if (6 < *(ushort *)((long)piVar13 - (long)*piVar13)) {
    uVar12 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[3];
    uVar48 = 0;
    if (uVar12 != 0) {
      uVar48 = *(undefined4 *)((long)piVar13 + uVar12);
    }
  }
  *(undefined4 *)((long)param_1 + 0x2c) = uVar48;
  if ((8 < *(ushort *)((long)piVar13 - (long)*piVar13)) &&
     (uVar12 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[4], uVar12 != 0)) {
    uVar48 = *(undefined4 *)((long)piVar13 + uVar12);
    uVar17 = (undefined1)uVar48;
    uVar18 = (undefined1)((uint)uVar48 >> 8);
    uVar19 = (undefined1)((uint)uVar48 >> 0x10);
    uVar20 = (undefined1)((uint)uVar48 >> 0x18);
  }
  *(uint *)(param_1 + 6) = CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17)));
  if ((fVar26 != 0.0) || (fVar39 != 0.0)) {
    auVar42._0_4_ = fVar26 * fVar26;
    auVar42._4_4_ = 0;
    auVar42._8_4_ = fVar47 * fVar47;
    auVar42._12_4_ = 0;
    auVar41 = NEON_ext(auVar42,auVar42,8,1);
    fVar56 = auVar41._0_4_ + auVar42._0_4_;
    fVar39 = auVar41._4_4_ + 0.0;
    fVar16 = fVar56 + fVar39;
    fVar56 = fVar56 + fVar39;
    fVar39 = 0.0;
    if (fVar16 != 0.0) {
      auVar30._8_8_ = CONCAT44(fVar56,fVar16);
      auVar30._0_8_ = CONCAT44(fVar56,fVar16);
      auVar42 = NEON_frsqrte(auVar30,4);
      auVar49._0_4_ = auVar42._0_4_ * fVar16;
      auVar49._4_4_ = auVar42._4_4_ * fVar56;
      auVar49._8_4_ = auVar42._8_4_ * fVar16;
      auVar49._12_4_ = auVar42._12_4_ * fVar56;
      auVar41 = NEON_frsqrts(auVar42,auVar49,4);
      auVar43._0_4_ = auVar42._0_4_ * auVar41._0_4_;
      auVar43._4_4_ = auVar42._4_4_ * auVar41._4_4_;
      auVar43._8_4_ = auVar42._8_4_ * auVar41._8_4_;
      auVar43._12_4_ = auVar42._12_4_ * auVar41._12_4_;
      auVar50._0_4_ = fVar16 * auVar43._0_4_;
      auVar50._4_4_ = fVar56 * auVar43._4_4_;
      auVar50._8_4_ = fVar16 * auVar43._8_4_;
      auVar50._12_4_ = fVar56 * auVar43._12_4_;
      iVar27 = -(uint)(fVar16 == 0.0);
      iVar35 = -(uint)(fVar56 == 0.0);
      iVar37 = -(uint)(fVar16 == 0.0);
      iVar38 = -(uint)(fVar56 == 0.0);
      auVar42 = NEON_frsqrts(auVar43,auVar50,4);
      fVar26 = fVar26 * auVar43._0_4_ * auVar42._0_4_;
      fVar39 = auVar43._4_4_ * auVar42._4_4_ * 0.0;
      fVar47 = fVar47 * auVar43._8_4_ * auVar42._8_4_;
      fVar16 = auVar43._12_4_ * auVar42._12_4_ * 0.0;
      fVar56 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                               CONCAT12((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar26 >> 8) &
                                                  ~(byte)((uint)iVar27 >> 8),
                                                  SUB41(fVar26,0) & ~(byte)iVar27)));
      auVar28._0_8_ =
           CONCAT17((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                    CONCAT16((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10),
                             CONCAT15((byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar35 >> 8),
                                      CONCAT14(SUB41(fVar39,0) & ~(byte)iVar35,fVar56))));
      auVar28[8] = SUB41(fVar47,0) & ~(byte)iVar37;
      auVar28[9] = (byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar37 >> 8);
      auVar28[10] = (byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10);
      auVar28[0xb] = (byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18);
      auVar31[0xc] = SUB41(fVar16,0) & ~(byte)iVar38;
      auVar31._0_12_ = auVar28;
      auVar31[0xd] = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar38 >> 8);
      auVar31[0xe] = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10);
      auVar31[0xf] = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18);
      fVar26 = fVar56 * (float)_DAT_01d49dc0;
      fVar47 = (float)((ulong)auVar28._0_8_ >> 0x20) * (float)((ulong)_DAT_01d49dc0 >> 0x20);
      uVar17 = (undefined1)((uint)fVar47 >> 8);
      uVar18 = (undefined1)((uint)fVar47 >> 0x10);
      uVar19 = (undefined1)((uint)fVar47 >> 0x18);
      fVar39 = auVar28._8_4_ * (float)_UNK_01d49dc8;
      uVar20 = (undefined1)((uint)fVar39 >> 8);
      uVar21 = (undefined1)((uint)fVar39 >> 0x10);
      uVar22 = (undefined1)((uint)fVar39 >> 0x18);
      fVar16 = auVar31._12_4_ * (float)((ulong)_UNK_01d49dc8 >> 0x20);
      uVar23 = (undefined1)((uint)fVar16 >> 8);
      uVar24 = (undefined1)((uint)fVar16 >> 0x10);
      uVar25 = (undefined1)((uint)fVar16 >> 0x18);
      auVar41[4] = SUB41(fVar47,0);
      auVar41._0_4_ = fVar26;
      auVar41[5] = uVar17;
      auVar41[6] = uVar18;
      auVar41[7] = uVar19;
      auVar41[8] = SUB41(fVar39,0);
      auVar41[9] = uVar20;
      auVar41[10] = uVar21;
      auVar41[0xb] = uVar22;
      auVar41[0xc] = SUB41(fVar16,0);
      auVar41[0xd] = uVar23;
      auVar41[0xe] = uVar24;
      auVar41[0xf] = uVar25;
      auVar3[4] = SUB41(fVar47,0);
      auVar3._0_4_ = fVar26;
      auVar3[5] = uVar17;
      auVar3[6] = uVar18;
      auVar3[7] = uVar19;
      auVar3[8] = SUB41(fVar39,0);
      auVar3[9] = uVar20;
      auVar3[10] = uVar21;
      auVar3[0xb] = uVar22;
      auVar3[0xc] = SUB41(fVar16,0);
      auVar3[0xd] = uVar23;
      auVar3[0xe] = uVar24;
      auVar3[0xf] = uVar25;
      auVar42 = NEON_ext(auVar41,auVar3,8,1);
      fVar26 = auVar42._0_4_ + fVar26 + auVar42._4_4_ + fVar47;
      uVar17 = 0;
      if (-1.0 <= fVar26) {
        uVar17 = SUB41(fVar26,0);
      }
      FUN_01590400(uVar17);
      uVar63 = param_1[1];
      uVar61 = *param_1;
      fVar39 = -(float)CONCAT13(extraout_var_03,
                                CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0)));
      if (0.0 <= fVar56) {
        fVar39 = (float)CONCAT13(extraout_var_03,
                                 CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0)));
      }
    }
    fVar36 = 0.0;
    fVar40 = (float)uVar61;
    fVar26 = fVar40 * fVar40;
    fVar62 = (float)((ulong)uVar61 >> 0x20);
    fVar47 = fVar62 * fVar62;
    uVar17 = (undefined1)((uint)fVar47 >> 8);
    uVar18 = (undefined1)((uint)fVar47 >> 0x10);
    uVar19 = (undefined1)((uint)fVar47 >> 0x18);
    fVar44 = (float)uVar63;
    fVar16 = fVar44 * fVar44;
    uVar20 = (undefined1)((uint)fVar16 >> 8);
    uVar21 = (undefined1)((uint)fVar16 >> 0x10);
    uVar22 = (undefined1)((uint)fVar16 >> 0x18);
    fVar46 = (float)(uVar63 >> 0x20);
    fVar56 = fVar46 * fVar46;
    uVar23 = (undefined1)((uint)fVar56 >> 8);
    uVar24 = (undefined1)((uint)fVar56 >> 0x10);
    uVar25 = (undefined1)((uint)fVar56 >> 0x18);
    auVar4[4] = SUB41(fVar47,0);
    auVar4._0_4_ = fVar26;
    auVar4[5] = uVar17;
    auVar4[6] = uVar18;
    auVar4[7] = uVar19;
    auVar4[8] = SUB41(fVar16,0);
    auVar4[9] = uVar20;
    auVar4[10] = uVar21;
    auVar4[0xb] = uVar22;
    auVar4[0xc] = SUB41(fVar56,0);
    auVar4[0xd] = uVar23;
    auVar4[0xe] = uVar24;
    auVar4[0xf] = uVar25;
    auVar5[4] = SUB41(fVar47,0);
    auVar5._0_4_ = fVar26;
    auVar5[5] = uVar17;
    auVar5[6] = uVar18;
    auVar5[7] = uVar19;
    auVar5[8] = SUB41(fVar16,0);
    auVar5[9] = uVar20;
    auVar5[10] = uVar21;
    auVar5[0xb] = uVar22;
    auVar5[0xc] = SUB41(fVar56,0);
    auVar5[0xd] = uVar23;
    auVar5[0xe] = uVar24;
    auVar5[0xf] = uVar25;
    auVar42 = NEON_ext(auVar4,auVar5,8,1);
    fVar26 = auVar42._0_4_ + fVar26;
    fVar47 = auVar42._4_4_ + fVar47;
    fVar16 = fVar26 + fVar47;
    fVar26 = fVar26 + fVar47;
    uVar17 = SUB41(fVar16,0);
    uVar18 = (undefined1)((uint)fVar16 >> 8);
    uVar19 = (undefined1)((uint)fVar16 >> 0x10);
    uVar20 = (undefined1)((uint)fVar16 >> 0x18);
    uVar21 = SUB41(fVar26,0);
    uVar22 = (undefined1)((uint)fVar26 >> 8);
    uVar23 = (undefined1)((uint)fVar26 >> 0x10);
    uVar24 = (undefined1)((uint)fVar26 >> 0x18);
    if (fVar16 != 0.0) {
      auVar32._0_4_ = fVar40 * fVar40;
      auVar32._4_4_ = 0;
      auVar32._8_4_ = fVar44 * fVar44;
      auVar32._12_4_ = 0;
      auVar42 = NEON_ext(auVar32,auVar32,8,1);
      fVar56 = auVar42._0_4_ + auVar32._0_4_;
      fVar36 = auVar42._4_4_ + 0.0;
      fVar47 = fVar56 + fVar36;
      fVar56 = fVar56 + fVar36;
      auVar33._8_8_ = CONCAT44(fVar56,fVar47);
      auVar33._0_8_ = CONCAT44(fVar56,fVar47);
      auVar42 = NEON_frsqrte(auVar33,4);
      auVar57._0_4_ = auVar42._0_4_ * fVar47;
      auVar57._4_4_ = auVar42._4_4_ * fVar56;
      auVar57._8_4_ = auVar42._8_4_ * fVar47;
      auVar57._12_4_ = auVar42._12_4_ * fVar56;
      auVar41 = NEON_frsqrts(auVar42,auVar57,4);
      auVar51._0_4_ = auVar42._0_4_ * auVar41._0_4_;
      auVar51._4_4_ = auVar42._4_4_ * auVar41._4_4_;
      auVar51._8_4_ = auVar42._8_4_ * auVar41._8_4_;
      auVar51._12_4_ = auVar42._12_4_ * auVar41._12_4_;
      auVar58._0_4_ = fVar47 * auVar51._0_4_;
      auVar58._4_4_ = fVar56 * auVar51._4_4_;
      auVar58._8_4_ = fVar47 * auVar51._8_4_;
      auVar58._12_4_ = fVar56 * auVar51._12_4_;
      iVar27 = -(uint)(fVar47 == 0.0);
      iVar35 = -(uint)(fVar56 == 0.0);
      iVar37 = -(uint)(fVar47 == 0.0);
      iVar38 = -(uint)(fVar56 == 0.0);
      auVar42 = NEON_frsqrts(auVar51,auVar58,4);
      fVar47 = fVar40 * auVar51._0_4_ * auVar42._0_4_;
      fVar56 = auVar51._4_4_ * auVar42._4_4_ * 0.0;
      fVar36 = fVar44 * auVar51._8_4_ * auVar42._8_4_;
      fVar45 = auVar51._12_4_ * auVar42._12_4_ * 0.0;
      fVar47 = (float)CONCAT13((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                               CONCAT12((byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar47 >> 8) &
                                                  ~(byte)((uint)iVar27 >> 8),
                                                  SUB41(fVar47,0) & ~(byte)iVar27)));
      auVar29._0_8_ =
           CONCAT17((byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                    CONCAT16((byte)((uint)fVar56 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10),
                             CONCAT15((byte)((uint)fVar56 >> 8) & ~(byte)((uint)iVar35 >> 8),
                                      CONCAT14(SUB41(fVar56,0) & ~(byte)iVar35,fVar47))));
      auVar29[8] = SUB41(fVar36,0) & ~(byte)iVar37;
      auVar29[9] = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar37 >> 8);
      auVar29[10] = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10);
      auVar29[0xb] = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18);
      auVar34[0xc] = SUB41(fVar45,0) & ~(byte)iVar38;
      auVar34._0_12_ = auVar29;
      auVar34[0xd] = (byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar38 >> 8);
      auVar34[0xe] = (byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10);
      auVar34[0xf] = (byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18);
      auVar6[4] = uVar21;
      auVar6._0_4_ = fVar16;
      auVar6[5] = uVar22;
      auVar6[6] = uVar23;
      auVar6[7] = uVar24;
      auVar6[8] = uVar17;
      auVar6[9] = uVar18;
      auVar6[10] = uVar19;
      auVar6[0xb] = uVar20;
      auVar6[0xc] = uVar21;
      auVar6[0xd] = uVar22;
      auVar6[0xe] = uVar23;
      auVar6[0xf] = uVar24;
      auVar42 = NEON_frsqrte(auVar6,4);
      auVar59._0_4_ = fVar16 * auVar42._0_4_;
      auVar59._4_4_ = fVar26 * auVar42._4_4_;
      auVar59._8_4_ = fVar16 * auVar42._8_4_;
      uVar11 = (undefined2)(CONCAT15(uVar22,CONCAT14(uVar21,fVar16)) >> 0x20);
      auVar59._12_4_ = (float)CONCAT13(uVar24,CONCAT12(uVar23,uVar11)) * auVar42._12_4_;
      auVar41 = NEON_frsqrts(auVar42,auVar59,4);
      auVar52._0_4_ = auVar42._0_4_ * auVar41._0_4_;
      auVar52._4_4_ = auVar42._4_4_ * auVar41._4_4_;
      auVar52._8_4_ = auVar42._8_4_ * auVar41._8_4_;
      auVar52._12_4_ = auVar42._12_4_ * auVar41._12_4_;
      auVar60._0_4_ = fVar16 * auVar52._0_4_;
      auVar60._4_4_ = fVar26 * auVar52._4_4_;
      auVar60._8_4_ = fVar16 * auVar52._8_4_;
      auVar60._12_4_ = (float)CONCAT13(uVar24,CONCAT12(uVar23,uVar11)) * auVar52._12_4_;
      iVar27 = -(uint)(fVar16 == 0.0);
      iVar35 = -(uint)(fVar26 == 0.0);
      iVar37 = -(uint)(fVar16 == 0.0);
      iVar38 = -(uint)((float)CONCAT13(uVar24,CONCAT12(uVar23,uVar11)) == 0.0);
      auVar42 = NEON_frsqrts(auVar52,auVar60,4);
      fVar40 = fVar40 * auVar52._0_4_ * auVar42._0_4_;
      fVar26 = fVar62 * auVar52._4_4_ * auVar42._4_4_;
      fVar44 = fVar44 * auVar52._8_4_ * auVar42._8_4_;
      fVar46 = fVar46 * auVar52._12_4_ * auVar42._12_4_;
      fVar47 = fVar47 * (float)CONCAT13((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18)
                                        ,CONCAT12((byte)((uint)fVar40 >> 0x10) &
                                                  ~(byte)((uint)iVar27 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar40 >> 8) &
                                                           ~(byte)((uint)iVar27 >> 8),
                                                           SUB41(fVar40,0) & ~(byte)iVar27)));
      fVar26 = (float)((ulong)auVar29._0_8_ >> 0x20) *
               (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                               CONCAT12((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar26 >> 8) &
                                                  ~(byte)((uint)iVar35 >> 8),
                                                  SUB41(fVar26,0) & ~(byte)iVar35)));
      uVar17 = (undefined1)((uint)fVar26 >> 8);
      uVar18 = (undefined1)((uint)fVar26 >> 0x10);
      uVar19 = (undefined1)((uint)fVar26 >> 0x18);
      fVar16 = auVar29._8_4_ *
               (float)CONCAT13((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18),
                               CONCAT12((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar44 >> 8) &
                                                  ~(byte)((uint)iVar37 >> 8),
                                                  SUB41(fVar44,0) & ~(byte)iVar37)));
      uVar20 = (undefined1)((uint)fVar16 >> 8);
      uVar21 = (undefined1)((uint)fVar16 >> 0x10);
      uVar22 = (undefined1)((uint)fVar16 >> 0x18);
      fVar56 = auVar34._12_4_ *
               (float)CONCAT13((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                               CONCAT12((byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar46 >> 8) &
                                                  ~(byte)((uint)iVar38 >> 8),
                                                  SUB41(fVar46,0) & ~(byte)iVar38)));
      uVar23 = (undefined1)((uint)fVar56 >> 8);
      uVar24 = (undefined1)((uint)fVar56 >> 0x10);
      uVar25 = (undefined1)((uint)fVar56 >> 0x18);
      auVar7[4] = SUB41(fVar26,0);
      auVar7._0_4_ = fVar47;
      auVar7[5] = uVar17;
      auVar7[6] = uVar18;
      auVar7[7] = uVar19;
      auVar7[8] = SUB41(fVar16,0);
      auVar7[9] = uVar20;
      auVar7[10] = uVar21;
      auVar7[0xb] = uVar22;
      auVar7[0xc] = SUB41(fVar56,0);
      auVar7[0xd] = uVar23;
      auVar7[0xe] = uVar24;
      auVar7[0xf] = uVar25;
      auVar8[4] = SUB41(fVar26,0);
      auVar8._0_4_ = fVar47;
      auVar8[5] = uVar17;
      auVar8[6] = uVar18;
      auVar8[7] = uVar19;
      auVar8[8] = SUB41(fVar16,0);
      auVar8[9] = uVar20;
      auVar8[10] = uVar21;
      auVar8[0xb] = uVar22;
      auVar8[0xc] = SUB41(fVar56,0);
      auVar8[0xd] = uVar23;
      auVar8[0xe] = uVar24;
      auVar8[0xf] = uVar25;
      auVar42 = NEON_ext(auVar7,auVar8,8,1);
      fVar26 = auVar42._0_4_ + fVar47 + auVar42._4_4_ + fVar26;
      uVar17 = 0;
      if (-1.0 <= fVar26) {
        uVar17 = SUB41(fVar26,0);
      }
      FUN_01590400(uVar17);
      fVar36 = -(float)CONCAT13(extraout_var_04,
                                CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00)));
      if (0.0 <= fVar62) {
        fVar36 = (float)CONCAT13(extraout_var_04,
                                 CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00)))
        ;
      }
      fVar26 = (float)*param_1;
      fVar26 = fVar26 * fVar26;
      fVar47 = (float)((ulong)*param_1 >> 0x20);
      fVar47 = fVar47 * fVar47;
      uVar17 = (undefined1)((uint)fVar47 >> 8);
      uVar18 = (undefined1)((uint)fVar47 >> 0x10);
      uVar19 = (undefined1)((uint)fVar47 >> 0x18);
      fVar16 = (float)param_1[1];
      fVar16 = fVar16 * fVar16;
      uVar20 = (undefined1)((uint)fVar16 >> 8);
      uVar21 = (undefined1)((uint)fVar16 >> 0x10);
      uVar22 = (undefined1)((uint)fVar16 >> 0x18);
      fVar56 = (float)((ulong)param_1[1] >> 0x20);
      fVar56 = fVar56 * fVar56;
      uVar23 = (undefined1)((uint)fVar56 >> 8);
      uVar24 = (undefined1)((uint)fVar56 >> 0x10);
      uVar25 = (undefined1)((uint)fVar56 >> 0x18);
      auVar9[4] = SUB41(fVar47,0);
      auVar9._0_4_ = fVar26;
      auVar9[5] = uVar17;
      auVar9[6] = uVar18;
      auVar9[7] = uVar19;
      auVar9[8] = SUB41(fVar16,0);
      auVar9[9] = uVar20;
      auVar9[10] = uVar21;
      auVar9[0xb] = uVar22;
      auVar9[0xc] = SUB41(fVar56,0);
      auVar9[0xd] = uVar23;
      auVar9[0xe] = uVar24;
      auVar9[0xf] = uVar25;
      auVar10[4] = SUB41(fVar47,0);
      auVar10._0_4_ = fVar26;
      auVar10[5] = uVar17;
      auVar10[6] = uVar18;
      auVar10[7] = uVar19;
      auVar10[8] = SUB41(fVar16,0);
      auVar10[9] = uVar20;
      auVar10[10] = uVar21;
      auVar10[0xb] = uVar22;
      auVar10[0xc] = SUB41(fVar56,0);
      auVar10[0xd] = uVar23;
      auVar10[0xe] = uVar24;
      auVar10[0xf] = uVar25;
      auVar42 = NEON_ext(auVar9,auVar10,8,1);
      fVar26 = auVar42._0_4_ + fVar26 + auVar42._4_4_ + fVar47;
      uVar17 = SUB41(fVar26,0);
      uVar18 = (undefined1)((uint)fVar26 >> 8);
      uVar19 = (undefined1)((uint)fVar26 >> 0x10);
      uVar20 = (undefined1)((uint)fVar26 >> 0x18);
    }
    *(float *)(param_1 + 4) = fVar54 + fVar39;
    *(float *)((long)param_1 + 0x24) = fVar55 - fVar36;
    param_1[1] = (ulong)(uint)SQRT((float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17))))
    ;
    *param_1 = 0;
  }
  return;
}


