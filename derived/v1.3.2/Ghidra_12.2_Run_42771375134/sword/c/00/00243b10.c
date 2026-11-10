/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00243b10; name: FUN_00243b10
 */


/* WARNING: Removing unreachable block (ram,0x00243ba0) */

void FUN_00243b10(float param_1,long param_2,undefined1 (*param_3) [12],float *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 *param_7,
                 undefined1 (*param_8) [12])

{
  float fVar1;
  uint uVar2;
  undefined3 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  float *pfVar18;
  long lVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  float fVar24;
  undefined8 uVar26;
  float fVar30;
  float fVar31;
  undefined1 auVar27 [16];
  int iVar25;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  byte bVar35;
  byte bVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  byte bVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  float fVar45;
  float fVar50;
  float fVar51;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 uStack_2c8;
  float local_23c [127];
  float local_38;
  float local_34;
  
  lVar19 = *(long *)(param_2 + 0x58);
  auVar6 = *param_8;
  auVar7 = *param_3;
  fVar45 = *param_4;
  uVar16 = *(uint *)(param_2 + 0x44);
  if ((int)(uVar16 - 1) < 0) {
    return;
  }
  fVar50 = param_4[1];
  fVar51 = param_4[2];
  if (uVar16 == 1) {
    lVar17 = 0;
    iVar25 = 0;
  }
  else {
    lVar17 = 0;
    pfVar18 = local_23c + 1;
    fVar20 = (float)(uVar16 * 0x70);
    do {
      lVar17 = lVar17 + 2;
      pfVar18[-1] = (float)((int)fVar20 + -0x70);
      *pfVar18 = (float)((int)fVar20 + -0xe0);
      pfVar18 = pfVar18 + 2;
      fVar20 = (float)((int)fVar20 + -0xe0);
    } while ((ulong)uVar16 - ((ulong)uVar16 & 1) != lVar17);
    iVar25 = (uVar16 - 1) - (int)lVar17;
    if ((uVar16 & 1) == 0) goto LAB_00243bf4;
  }
  local_23c[lVar17] = (float)(iVar25 * 0x70);
LAB_00243bf4:
  if (uVar16 != 0) {
    auVar49._0_4_ = ABS(fVar45);
    auVar49._4_4_ = ABS(fVar50);
    auVar49._8_4_ = ABS(fVar51);
    auVar49._12_4_ = 0;
    auVar46._8_4_ = 0x3089705f;
    auVar46._0_8_ = 0x3089705f3089705f;
    auVar46._12_4_ = 0x3089705f;
    auVar46 = NEON_fmax(auVar49,auVar46,4);
    bVar35 = (byte)((uint)fVar45 >> 0x18) & 0x80 | auVar46[3];
    bVar36 = (byte)((uint)fVar50 >> 0x18) & 0x80 | auVar46[7];
    bVar39 = (byte)((uint)fVar51 >> 0x18) & 0x80 | auVar46[0xb];
    uVar3 = auVar46._0_3_;
    auVar47[3] = bVar35;
    auVar47._0_3_ = uVar3;
    auVar47[4] = auVar46[4];
    auVar47[5] = auVar46[5];
    auVar47[6] = auVar46[6];
    auVar47[7] = bVar36;
    auVar47[8] = auVar46[8];
    auVar47[9] = auVar46[9];
    auVar47[10] = auVar46[10];
    auVar47[0xb] = bVar39;
    auVar47[0xc] = auVar46[0xc];
    auVar47[0xd] = auVar46[0xd];
    auVar47[0xe] = auVar46[0xe];
    auVar47[0xf] = auVar46[0xf];
    auVar47 = NEON_frecpe(auVar47,4);
    auVar52[3] = bVar35;
    auVar52._0_3_ = uVar3;
    auVar52[4] = auVar46[4];
    auVar52[5] = auVar46[5];
    auVar52[6] = auVar46[6];
    auVar52[7] = bVar36;
    auVar52[8] = auVar46[8];
    auVar52[9] = auVar46[9];
    auVar52[10] = auVar46[10];
    auVar52[0xb] = bVar39;
    auVar52[0xc] = auVar46[0xc];
    auVar52[0xd] = auVar46[0xd];
    auVar52[0xe] = auVar46[0xe];
    auVar52[0xf] = auVar46[0xf];
    auVar52 = NEON_frecps(auVar47,auVar52,4);
    fVar45 = auVar47._0_4_ * auVar52._0_4_;
    fVar50 = auVar47._4_4_ * auVar52._4_4_;
    fVar51 = auVar47._8_4_ * auVar52._8_4_;
    uVar26 = CONCAT44(param_1,param_1);
    uVar32 = CONCAT44(param_1,param_1);
    fVar45 = fVar45 * (2.0 - fVar45 * (float)CONCAT13(bVar35,uVar3));
    fVar50 = fVar50 * (2.0 - fVar50 * (float)CONCAT13(bVar36,auVar46._4_3_));
    fVar51 = fVar51 * (2.0 - fVar51 * (float)CONCAT13(bVar39,auVar46._8_3_));
    fVar24 = auVar6._0_4_ + 1e-07;
    fVar30 = auVar6._4_4_ + 1e-07;
    fVar31 = auVar6._8_4_ + 1e-07;
    fVar20 = 0.0 - auVar7._0_4_ * fVar45;
    fVar22 = 0.0 - auVar7._4_4_ * fVar50;
    fVar23 = 0.0 - auVar7._8_4_ * fVar51;
    do {
      while( true ) {
        uVar2 = uVar16 - 1;
        local_34 = local_23c[uVar2];
        if (((uint)local_34 & 1) == 0) break;
        local_34 = (float)((int)local_34 - 1);
        uStack_2c8 = (undefined1)uVar32;
        local_38 = param_1;
        uVar15 = (**(code **)*param_7)(param_7,1,&local_34,&local_38);
        if ((uVar15 & 1) == 0) {
          return;
        }
        auVar34._4_4_ = local_38;
        auVar34._0_4_ = local_38;
        auVar34._8_4_ = local_38;
        auVar34._12_4_ = local_38;
        iVar25 = -(uint)(param_1 == local_38);
        auVar28._0_4_ =
             CONCAT13(~(byte)((uint)iVar25 >> 0x18),
                      CONCAT12(~(byte)((uint)iVar25 >> 0x10),
                               CONCAT11(~(byte)((uint)iVar25 >> 8),~(byte)iVar25)));
        uVar37 = (undefined1)((ulong)uVar32 >> 8);
        uVar38 = (undefined1)((ulong)uVar32 >> 0x10);
        uVar40 = (undefined1)((ulong)uVar32 >> 0x18);
        uVar41 = (undefined1)((ulong)uVar32 >> 0x20);
        uVar42 = (undefined1)((ulong)uVar32 >> 0x28);
        uVar43 = (undefined1)((ulong)uVar32 >> 0x30);
        uVar44 = (undefined1)((ulong)uVar32 >> 0x38);
        auVar29[8] = uStack_2c8;
        auVar29._0_8_ = uVar26;
        auVar4[8] = uStack_2c8;
        auVar4._0_8_ = uVar26;
        auVar28._4_4_ = auVar28._0_4_;
        auVar28._8_4_ = auVar28._0_4_;
        auVar28._12_4_ = auVar28._0_4_;
        auVar4[9] = uVar37;
        auVar4[10] = uVar38;
        auVar4[0xb] = uVar40;
        auVar4[0xc] = uVar41;
        auVar4[0xd] = uVar42;
        auVar4[0xe] = uVar43;
        auVar4[0xf] = uVar44;
        auVar29[9] = uVar37;
        auVar29[10] = uVar38;
        auVar29[0xb] = uVar40;
        auVar29[0xc] = uVar41;
        auVar29[0xd] = uVar42;
        auVar29[0xe] = uVar43;
        auVar29[0xf] = uVar44;
        auVar29 = auVar29 ^ (auVar4 ^ auVar34) & auVar28;
        if (param_1 == local_38) {
          local_38 = param_1;
        }
        uVar32 = auVar29._8_8_;
        uVar26 = auVar29._0_8_;
        if (uVar2 == 0) {
          return;
        }
        uVar16 = uVar2;
        param_1 = local_38;
      }
      pfVar18 = (float *)(lVar19 + (ulong)(uint)local_34);
      fVar1 = *pfVar18;
      fVar8 = pfVar18[1];
      fVar9 = pfVar18[2];
      fVar10 = pfVar18[3];
      fVar11 = pfVar18[0xc];
      fVar12 = pfVar18[0xd];
      fVar13 = pfVar18[0xe];
      fVar14 = pfVar18[0xf];
      auVar27._0_4_ = fVar22 + fVar50 * (pfVar18[4] - fVar30);
      auVar27._4_4_ = fVar22 + fVar50 * (pfVar18[5] - fVar30);
      auVar27._8_4_ = fVar22 + fVar50 * (pfVar18[6] - fVar30);
      auVar27._12_4_ = fVar22 + fVar50 * (pfVar18[7] - fVar30);
      auVar21._0_4_ = fVar20 + fVar45 * (fVar1 - fVar24);
      auVar21._4_4_ = fVar20 + fVar45 * (fVar8 - fVar24);
      auVar21._8_4_ = fVar20 + fVar45 * (fVar9 - fVar24);
      auVar21._12_4_ = fVar20 + fVar45 * (fVar10 - fVar24);
      auVar33._0_4_ = fVar20 + fVar45 * (fVar24 + fVar11);
      auVar33._4_4_ = fVar20 + fVar45 * (fVar24 + fVar12);
      auVar33._8_4_ = fVar20 + fVar45 * (fVar24 + fVar13);
      auVar33._12_4_ = fVar20 + fVar45 * (fVar24 + fVar14);
      auVar48._0_4_ = fVar22 + fVar50 * (fVar30 + pfVar18[0x10]);
      auVar48._4_4_ = fVar22 + fVar50 * (fVar30 + pfVar18[0x11]);
      auVar48._8_4_ = fVar22 + fVar50 * (fVar30 + pfVar18[0x12]);
      auVar48._12_4_ = fVar22 + fVar50 * (fVar30 + pfVar18[0x13]);
      fVar54 = fVar23 + fVar51 * ((float)*(undefined8 *)(pfVar18 + 8) - fVar31);
      fVar55 = fVar23 + fVar51 * ((float)((ulong)*(undefined8 *)(pfVar18 + 8) >> 0x20) - fVar31);
      fVar56 = fVar23 + fVar51 * ((float)*(undefined8 *)(pfVar18 + 10) - fVar31);
      fVar57 = fVar23 + fVar51 * ((float)((ulong)*(undefined8 *)(pfVar18 + 10) >> 0x20) - fVar31);
      auVar53._0_4_ = fVar23 + fVar51 * (fVar31 + pfVar18[0x14]);
      auVar53._4_4_ = fVar23 + fVar51 * (fVar31 + pfVar18[0x15]);
      auVar53._8_4_ = fVar23 + fVar51 * (fVar31 + pfVar18[0x16]);
      auVar53._12_4_ = fVar23 + fVar51 * (fVar31 + pfVar18[0x17]);
      auVar58 = NEON_fmin(auVar21,auVar33,4);
      auVar47 = NEON_fmax(auVar21,auVar33,4);
      auVar46 = NEON_fmin(auVar27,auVar48,4);
      auVar52 = NEON_fmax(auVar27,auVar48,4);
      auVar5._4_4_ = fVar55;
      auVar5._0_4_ = fVar54;
      auVar5._8_4_ = fVar56;
      auVar5._12_4_ = fVar57;
      auVar49 = NEON_fmin(auVar5,auVar53,4);
      auVar46 = NEON_fmax(auVar58,auVar46,4);
      auVar47 = NEON_fmin(auVar47,auVar52,4);
      auVar58._4_4_ = fVar55;
      auVar58._0_4_ = fVar54;
      auVar58._8_4_ = fVar56;
      auVar58._12_4_ = fVar57;
      auVar52 = NEON_fmax(auVar58,auVar53,4);
      local_23c[uVar2] = pfVar18[0x18];
      auVar47 = NEON_fmin(auVar47,auVar52,4);
      auVar52 = NEON_fmax(auVar46,auVar49,4);
      bVar35 = -(fVar12 < fVar8 || (float)((ulong)uVar26 >> 0x20) < auVar52._4_4_) |
               -(auVar47._4_4_ < auVar52._4_4_) | -(auVar47._4_4_ < 1e-09);
      uVar16 = ((int)((uint)CONCAT12(bVar35,(ushort)(byte)(-((float)uVar26 < auVar52._0_4_ ||
                                                            fVar11 < fVar1) |
                                                           -(auVar47._0_4_ < auVar52._0_4_) |
                                                          -(auVar47._0_4_ < 1e-09))) << 0x1f) >>
               0x1f) + uVar16;
      local_23c[uVar16] = pfVar18[0x19];
      fVar1 = pfVar18[0x1b];
      uVar16 = ((int)((uint)bVar35 << 0x1f) >> 0x1f) + uVar16 + 1;
      local_23c[uVar16] = pfVar18[0x1a];
      uVar16 = ((int)((uint)(byte)(-(fVar13 < fVar9 || (float)uVar32 < auVar52._8_4_) |
                                   -(auVar47._8_4_ < auVar52._8_4_) | -(auVar47._8_4_ < 1e-09)) <<
                     0x1f) >> 0x1f) + uVar16 + 1;
      local_23c[uVar16] = fVar1;
      uVar16 = ((int)((uint)(byte)(-((float)((ulong)uVar32 >> 0x20) < auVar52._12_4_) |
                                   -(fVar14 < fVar10) | -(auVar47._12_4_ < auVar52._12_4_) |
                                  -(auVar47._12_4_ < 1e-09)) << 0x1f) >> 0x1f) + uVar16 + 1;
    } while (uVar16 != 0);
  }
  return;
}


