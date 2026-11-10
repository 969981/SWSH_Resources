/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00243830; name: FUN_00243830
 */


/* WARNING: Removing unreachable block (ram,0x002438ac) */

void FUN_00243830(float param_1,long param_2,undefined1 (*param_3) [12],float *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  float fVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [12];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  float *pfVar24;
  long lVar25;
  byte bVar27;
  undefined1 auVar26 [16];
  int iVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 uVar33;
  float fVar34;
  float fVar39;
  float fVar40;
  undefined1 auVar35 [12];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar41;
  float fVar43;
  float fVar44;
  undefined1 auVar42 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar53 [16];
  float local_23c [127];
  float local_38;
  float local_34;
  
  lVar25 = *(long *)(param_2 + 0x58);
  auVar5 = *param_3;
  fVar34 = *param_4;
  uVar22 = *(uint *)(param_2 + 0x44);
  if ((int)(uVar22 - 1) < 0) {
    return;
  }
  fVar39 = param_4[1];
  fVar40 = param_4[2];
  if (uVar22 == 1) {
    lVar23 = 0;
    iVar28 = 0;
  }
  else {
    lVar23 = 0;
    pfVar24 = local_23c + 1;
    fVar41 = (float)(uVar22 * 0x70);
    do {
      lVar23 = lVar23 + 2;
      pfVar24[-1] = (float)((int)fVar41 + -0x70);
      *pfVar24 = (float)((int)fVar41 + -0xe0);
      pfVar24 = pfVar24 + 2;
      fVar41 = (float)((int)fVar41 + -0xe0);
    } while ((ulong)uVar22 - ((ulong)uVar22 & 1) != lVar23);
    iVar28 = (uVar22 - 1) - (int)lVar23;
    if ((uVar22 & 1) == 0) goto LAB_00243900;
  }
  local_23c[lVar23] = (float)(iVar28 * 0x70);
LAB_00243900:
  if (uVar22 != 0) {
    auVar37._0_4_ = ABS(fVar34);
    auVar37._4_4_ = ABS(fVar39);
    auVar37._8_4_ = ABS(fVar40);
    auVar37._12_4_ = 0;
    uVar21 = CONCAT17((char)((uint)fVar39 >> 0x18),
                      (uint7)((byte)((uint)fVar34 >> 0x18) & 0x80) << 0x18) & 0x80ffffffffffffff;
    auVar42._8_4_ = 0x3089705f;
    auVar42._0_8_ = 0x3089705f3089705f;
    auVar42._12_4_ = 0x3089705f;
    auVar42 = NEON_fmax(auVar37,auVar42,4);
    fVar34 = (float)CONCAT13((byte)(uVar21 >> 0x18) | auVar42[3],auVar42._0_3_);
    auVar35._0_8_ =
         CONCAT17((byte)(uVar21 >> 0x38) | auVar42[7],
                  CONCAT16(auVar42[6],CONCAT15(auVar42[5],CONCAT14(auVar42[4],fVar34))));
    auVar35[8] = auVar42[8];
    auVar35[9] = auVar42[9];
    auVar35[10] = auVar42[10];
    auVar35[0xb] = (byte)((uint)fVar40 >> 0x18) & 0x80 | auVar42[0xb];
    auVar45[0xc] = auVar42[0xc];
    auVar45._0_12_ = auVar35;
    auVar45[0xd] = auVar42[0xd];
    auVar45[0xe] = auVar42[0xe];
    auVar45[0xf] = auVar42[0xf];
    auVar42 = NEON_frecpe(auVar45,4);
    auVar45 = NEON_frecps(auVar42,auVar45,4);
    uVar29 = CONCAT44(param_1,param_1);
    uVar33 = CONCAT44(param_1,param_1);
    fVar41 = auVar42._0_4_ * auVar45._0_4_;
    fVar43 = auVar42._4_4_ * auVar45._4_4_;
    fVar44 = auVar42._8_4_ * auVar45._8_4_;
    fVar41 = fVar41 * (2.0 - fVar41 * fVar34);
    fVar43 = fVar43 * (2.0 - fVar43 * (float)((ulong)auVar35._0_8_ >> 0x20));
    fVar44 = fVar44 * (2.0 - fVar44 * auVar35._8_4_);
    fVar34 = 0.0 - auVar5._0_4_ * fVar41;
    fVar39 = 0.0 - auVar5._4_4_ * fVar43;
    fVar40 = 0.0 - auVar5._8_4_ * fVar44;
    do {
      while( true ) {
        uVar2 = uVar22 - 1;
        local_34 = local_23c[uVar2];
        if (((uint)local_34 & 1) == 0) break;
        local_34 = (float)((int)local_34 - 1);
        local_38 = param_1;
        uVar21 = (**(code **)*param_7)(param_7,1,&local_34,&local_38);
        if ((uVar21 & 1) == 0) {
          return;
        }
        auVar38._4_4_ = local_38;
        auVar38._0_4_ = local_38;
        auVar38._8_4_ = local_38;
        auVar38._12_4_ = local_38;
        auVar32._8_8_ = uVar33;
        auVar32._0_8_ = uVar29;
        iVar28 = -(uint)(param_1 == local_38);
        auVar31._0_4_ =
             CONCAT13(~(byte)((uint)iVar28 >> 0x18),
                      CONCAT12(~(byte)((uint)iVar28 >> 0x10),
                               CONCAT11(~(byte)((uint)iVar28 >> 8),~(byte)iVar28)));
        auVar31._4_4_ = auVar31._0_4_;
        auVar31._8_4_ = auVar31._0_4_;
        auVar31._12_4_ = auVar31._0_4_;
        auVar32 = auVar32 ^ (auVar32 ^ auVar38) & auVar31;
        if (param_1 == local_38) {
          local_38 = param_1;
        }
        uVar33 = auVar32._8_8_;
        uVar29 = auVar32._0_8_;
        if (uVar2 == 0) {
          return;
        }
        uVar22 = uVar2;
        param_1 = local_38;
      }
      pfVar24 = (float *)(lVar25 + (ulong)(uint)local_34);
      fVar1 = *pfVar24;
      fVar6 = pfVar24[1];
      fVar7 = pfVar24[2];
      fVar8 = pfVar24[3];
      fVar49 = pfVar24[4];
      fVar50 = pfVar24[5];
      fVar51 = pfVar24[6];
      fVar52 = pfVar24[7];
      fVar9 = pfVar24[0x10];
      fVar10 = pfVar24[0x11];
      fVar11 = pfVar24[0x12];
      fVar12 = pfVar24[0x13];
      uVar4 = *(undefined8 *)(pfVar24 + 0x16);
      uVar3 = *(undefined8 *)(pfVar24 + 0x14);
      fVar17 = pfVar24[8];
      fVar18 = pfVar24[9];
      fVar19 = pfVar24[10];
      fVar20 = pfVar24[0xb];
      fVar13 = pfVar24[0xc];
      fVar14 = pfVar24[0xd];
      fVar15 = pfVar24[0xe];
      fVar16 = pfVar24[0xf];
      local_23c[uVar2] = pfVar24[0x18];
      auVar26._0_4_ = fVar34 + fVar41 * fVar1;
      auVar26._4_4_ = fVar34 + fVar41 * fVar6;
      auVar26._8_4_ = fVar34 + fVar41 * fVar7;
      auVar26._12_4_ = fVar34 + fVar41 * fVar8;
      auVar30._0_4_ = fVar39 + fVar43 * fVar49;
      auVar30._4_4_ = fVar39 + fVar43 * fVar50;
      auVar30._8_4_ = fVar39 + fVar43 * fVar51;
      auVar30._12_4_ = fVar39 + fVar43 * fVar52;
      auVar36._0_4_ = fVar34 + fVar41 * fVar13;
      auVar36._4_4_ = fVar34 + fVar41 * fVar14;
      auVar36._8_4_ = fVar34 + fVar41 * fVar15;
      auVar36._12_4_ = fVar34 + fVar41 * fVar16;
      auVar47._0_4_ = fVar39 + fVar43 * fVar9;
      auVar47._4_4_ = fVar39 + fVar43 * fVar10;
      auVar47._8_4_ = fVar39 + fVar43 * fVar11;
      auVar47._12_4_ = fVar39 + fVar43 * fVar12;
      auVar46._0_4_ = fVar40 + fVar44 * fVar17;
      auVar46._4_4_ = fVar40 + fVar44 * fVar18;
      auVar46._8_4_ = fVar40 + fVar44 * fVar19;
      auVar46._12_4_ = fVar40 + fVar44 * fVar20;
      fVar49 = fVar40 + fVar44 * (float)uVar3;
      fVar50 = fVar40 + fVar44 * (float)((ulong)uVar3 >> 0x20);
      fVar51 = fVar40 + fVar44 * (float)uVar4;
      fVar52 = fVar40 + fVar44 * (float)((ulong)uVar4 >> 0x20);
      auVar53 = NEON_fmin(auVar26,auVar36,4);
      auVar42 = NEON_fmax(auVar26,auVar36,4);
      auVar37 = NEON_fmin(auVar30,auVar47,4);
      auVar45 = NEON_fmax(auVar30,auVar47,4);
      auVar48._4_4_ = fVar50;
      auVar48._0_4_ = fVar49;
      auVar48._8_4_ = fVar51;
      auVar48._12_4_ = fVar52;
      auVar48 = NEON_fmin(auVar46,auVar48,4);
      auVar37 = NEON_fmax(auVar53,auVar37,4);
      auVar42 = NEON_fmin(auVar42,auVar45,4);
      auVar53._4_4_ = fVar50;
      auVar53._0_4_ = fVar49;
      auVar53._8_4_ = fVar51;
      auVar53._12_4_ = fVar52;
      auVar45 = NEON_fmax(auVar46,auVar53,4);
      auVar42 = NEON_fmin(auVar42,auVar45,4);
      auVar45 = NEON_fmax(auVar37,auVar48,4);
      bVar27 = -((float)((ulong)uVar29 >> 0x20) < auVar45._4_4_) | -(fVar14 < fVar6) |
               -(auVar42._4_4_ < auVar45._4_4_) | -(auVar42._4_4_ < 1e-09);
      uVar22 = ((int)((uint)CONCAT12(bVar27,(ushort)(byte)(-((float)uVar29 < auVar45._0_4_) |
                                                           -(fVar13 < fVar1) |
                                                           -(auVar42._0_4_ < auVar45._0_4_) |
                                                          -(auVar42._0_4_ < 1e-09))) << 0x1f) >>
               0x1f) + uVar22;
      local_23c[uVar22] = pfVar24[0x19];
      fVar1 = pfVar24[0x1b];
      uVar22 = ((int)((uint)bVar27 << 0x1f) >> 0x1f) + uVar22 + 1;
      local_23c[uVar22] = pfVar24[0x1a];
      uVar22 = ((int)((uint)(byte)(-((float)uVar33 < auVar45._8_4_) | -(fVar15 < fVar7) |
                                   -(auVar42._8_4_ < auVar45._8_4_) | -(auVar42._8_4_ < 1e-09)) <<
                     0x1f) >> 0x1f) + uVar22 + 1;
      local_23c[uVar22] = fVar1;
      uVar22 = ((int)((uint)(byte)(-((float)((ulong)uVar33 >> 0x20) < auVar45._12_4_) |
                                   -(fVar16 < fVar8) | -(auVar42._12_4_ < auVar45._12_4_) |
                                  -(auVar42._12_4_ < 1e-09)) << 0x1f) >> 0x1f) + uVar22 + 1;
    } while (uVar22 != 0);
  }
  return;
}


