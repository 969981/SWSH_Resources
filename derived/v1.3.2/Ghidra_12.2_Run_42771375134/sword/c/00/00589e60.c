/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00589e60; name: FUN_00589e60
 */


undefined4
FUN_00589e60(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,long param_9,long *param_10,uint param_11,long param_12,
            float *param_13,float *param_14,float *param_15,int param_16,float param_17,
            float param_18,float param_19,float param_20,float param_21,undefined8 param_22,
            int param_23,uint param_24)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float __y;
  float fVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  float *pfVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  float *pfVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float local_f0;
  float local_ec;
  undefined1 auStack_bc [4];
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  fVar7 = DAT_01d4c6ac;
  fVar23 = param_5;
  if (1.0 < param_5) {
    fVar23 = 1.0;
  }
  uVar3 = *(uint *)(param_9 + 0x29c00);
  if (param_11 <= *(uint *)(param_9 + 0x29c00)) {
    uVar3 = param_11;
  }
  fVar24 = DAT_01d4be38;
  if (DAT_01d4c6ac <= param_5) {
    fVar24 = fVar23 * DAT_01d4c398;
  }
  fVar25 = tanf(fVar24);
  fVar38 = *param_13;
  fVar41 = param_13[1];
  puVar2 = (undefined8 *)(param_9 + 0x29bf0);
  fVar50 = *param_15;
  fVar47 = param_15[1];
  lVar11 = FUN_00549260(*puVar2,6,0,uVar3 * 0x160);
  __y = DAT_01d4c304;
  fVar6 = DAT_01d4c050;
  fVar5 = DAT_01d4bc78;
  fVar24 = DAT_01d4bbe0;
  fVar23 = DAT_01d4bbdc;
  if (0 < (int)uVar3) {
    pfVar21 = (float *)(param_12 + 0x38);
    uVar18 = 1;
    param_1 = param_1 / param_2;
    fVar41 = fVar41 - fVar47;
    fVar38 = param_1 * (fVar38 - fVar50);
    fVar47 = fVar38 * fVar38 + fVar41 * fVar41;
    fVar50 = param_20 / param_21;
    param_8 = param_8 + param_8;
    lVar19 = 0;
    do {
      fVar27 = pfVar21[-0xe];
      local_f0 = fVar41;
      local_ec = fVar38;
      if (fVar47 != 0.0 && fVar47 != 1.0) {
        fVar26 = SQRT(fVar47);
        if (NAN(SQRT(fVar47))) {
          fVar26 = sqrtf(fVar47);
        }
        local_ec = fVar38 * (1.0 / fVar26);
        local_f0 = fVar41 * (1.0 / fVar26);
      }
      pfVar13 = (float *)(PTR_DAT_02713c78 + (long)((int)fVar27 % 8) * 0x10);
      local_f0 = local_f0 + pfVar13[1] * param_7;
      local_ec = local_ec + *pfVar13 * param_7;
      fVar27 = local_ec * local_ec + local_f0 * local_f0;
      bVar8 = true;
      if ((fVar27 != 0.0) && (bVar8 = false, !NAN(fVar27))) {
        bVar8 = fVar27 == 1.0;
      }
      if (!bVar8) {
        fVar26 = SQRT(fVar27);
        if (NAN(fVar26)) {
          fVar26 = sqrtf(fVar27);
        }
        local_ec = local_ec * (1.0 / fVar26);
        local_f0 = local_f0 * (1.0 / fVar26);
      }
      fVar27 = pfVar21[-10];
      fVar26 = logf(param_17);
      fVar26 = sinf(fVar27 * 29.0 + fVar27 * fVar26 + fVar27 * fVar26);
      if (fVar27 <= 0.0) {
        fVar27 = -fVar27;
      }
      fVar27 = exp2f(fVar26 * fVar27);
      fVar48 = *param_15;
      fVar51 = param_15[1];
      fVar39 = param_13[1] - fVar51;
      fVar42 = param_1 * (*param_13 - fVar48);
      fVar26 = fVar42 * fVar42 + fVar39 * fVar39;
      bVar8 = true;
      if ((fVar26 != 0.0) && (bVar8 = false, !NAN(fVar26))) {
        bVar8 = fVar26 == 1.0;
      }
      if (bVar8) {
LAB_0058a1b8:
        fVar44 = fVar26;
      }
      else {
        fVar44 = SQRT(fVar26);
        if (NAN(fVar44)) {
          fVar26 = sqrtf(fVar26);
          goto LAB_0058a1b8;
        }
      }
      if (fVar5 < fVar44) {
        fVar42 = fVar42 * (1.0 / fVar44);
        fVar39 = fVar39 * (1.0 / fVar44);
      }
      fVar42 = fVar42 + *pfVar13 * param_7;
      fVar39 = fVar39 + pfVar13[1] * param_7;
      fVar26 = fVar42 * fVar42 + fVar39 * fVar39;
      bVar8 = true;
      if ((fVar26 != 0.0) && (bVar8 = false, !NAN(fVar26))) {
        bVar8 = fVar26 == 1.0;
      }
      if (!bVar8) {
        fVar35 = SQRT(fVar26);
        if (NAN(fVar35)) {
          fVar35 = sqrtf(fVar26);
        }
        fVar42 = fVar42 * (1.0 / fVar35);
        fVar39 = fVar39 * (1.0 / fVar35);
      }
      fVar46 = pfVar21[-0xc];
      fVar35 = 1.0 - fVar46;
      fVar26 = fVar35;
      if (fVar35 <= 0.0) {
        fVar26 = -fVar35;
      }
      if (fVar7 <= fVar26) {
        fVar26 = powf(fVar46,1.0 / fVar35);
        if (fVar26 < fVar44 + DAT_01d4bfbc) {
          fVar44 = powf(fVar44 + DAT_01d4bfbc,fVar46);
          fVar35 = powf(fVar26,fVar46);
          fVar44 = ((fVar26 + fVar44) - fVar35) + DAT_01d4c158;
        }
      }
      fVar26 = fVar51 + fVar27 * fVar44 * fVar39 * pfVar21[-0xd] * param_4;
      fVar39 = fVar48 + fVar27 * fVar44 * fVar42 * pfVar21[-0xd] * param_4;
      fVar44 = fVar26 + fVar26 + -1.0;
      fVar42 = fVar39 + fVar39 + -1.0;
      fVar39 = fVar50 + (param_20 - fVar50) * pfVar21[-9];
      fVar26 = fVar50;
      if (fVar39 <= fVar50) {
        fVar26 = fVar39;
      }
      fVar35 = 0.0;
      if (0.0 <= fVar39) {
        fVar35 = fVar26;
      }
      fVar26 = pfVar21[-0xb];
      if (fVar26 <= 0.0) {
        fVar26 = -fVar26;
      }
      fVar39 = powf(1.0 / param_8,1.0 - fVar26 / (fVar26 + 1.0));
      fVar46 = fVar27 * param_3 * fVar39;
      fVar26 = pfVar21[-0xb];
      if (fVar26 <= 0.0) {
        fVar26 = -fVar26;
      }
      fVar52 = fVar46 * fVar50 * pfVar21[6];
      fVar28 = powf(param_8,pfVar21[8] * -0.25);
      fVar43 = fVar42 * fVar42 + fVar44 * fVar44;
      fVar29 = fVar43;
      if ((fVar43 != 0.0 && fVar43 != 1.0) && (fVar29 = SQRT(fVar43), NAN(fVar29))) {
        fVar29 = sqrtf(fVar43);
      }
      fVar46 = fVar46 * fVar26 * fVar35;
      fVar28 = fVar28 * pfVar21[5] * param_6;
      fVar26 = -fVar52;
      if (fVar52 < 0.0) {
        fVar28 = fVar26 / fVar28;
        if (0.0 < fVar28) {
          fVar28 = fVar28 / (fVar28 + 1.0) + 0.0;
        }
        fVar28 = fVar26 / fVar28;
      }
      fVar35 = fVar52;
      if (fVar52 <= 0.0) {
        fVar35 = fVar26;
      }
      fVar29 = fVar29 * ((fVar52 + fVar28) / fVar28);
      fVar26 = pfVar21[-8];
      fVar36 = *param_14;
      fVar37 = param_14[1];
      uVar20 = (ulong)(uVar18 - 1);
      uVar22 = (ulong)(uVar18 + 1);
      uVar17 = (ulong)(uVar18 + 2);
      fVar28 = pfVar21[-7];
      fVar52 = param_14[2];
      fVar30 = pfVar21[-6];
      fVar31 = -1.0;
      if (0.0 <= pfVar21[-0xb] * pfVar21[-0xd]) {
        fVar31 = 0.0;
      }
      fVar32 = 1.0;
      if (pfVar21[-0xb] * pfVar21[-0xd] <= 0.0) {
        fVar32 = fVar31;
      }
      fVar49 = fVar46 * fVar32;
      fVar40 = -(fVar46 * fVar32);
      fVar31 = cosf(param_18);
      fVar32 = sinf(param_18);
      fVar45 = fVar31 * fVar40 - fVar32 * fVar40;
      fVar31 = fVar32 * fVar40 + fVar31 * fVar40;
      fVar32 = cosf(param_18);
      fVar33 = sinf(param_18);
      fVar54 = fVar32 * fVar49 + fVar33 * fVar49;
      fVar32 = fVar33 * fVar49 - fVar32 * fVar49;
      fVar33 = cosf(param_18);
      fVar34 = sinf(param_18);
      fVar40 = fVar33 * fVar40 - fVar49 * fVar34;
      fVar53 = fVar33 * fVar49 - fVar49 * fVar34;
      fVar33 = cosf(param_18);
      fVar34 = sinf(param_18);
      lVar12 = lVar11 + uVar20 * 0x58;
      fVar55 = fVar49 * fVar33 - fVar49 * fVar34;
      fVar34 = fVar49 * fVar33 + fVar49 * fVar34;
      fVar33 = -1.0;
      if (0.0 <= pfVar21[-0xd]) {
        fVar33 = 0.0;
      }
      fVar49 = 1.0;
      if (pfVar21[-0xd] <= 0.0) {
        fVar49 = fVar33;
      }
      *(undefined4 *)(lVar12 + 8) = 0xbf800000;
      *(undefined4 *)(lVar12 + 0xc) = 0x3f800000;
      fVar48 = fVar48 + fVar48 + -1.0 + local_ec * fVar29 * fVar49;
      fVar51 = fVar51 + fVar51 + -1.0 + local_f0 * fVar29 * fVar49;
      *(float *)(lVar12 + 0x10) = ((fVar42 + fVar45) - fVar48) / fVar35;
      *(float *)(lVar12 + 0x14) = ((fVar44 + fVar31) - fVar51) / fVar35;
      lVar12 = lVar11 + (ulong)uVar18 * 0x58;
      *(undefined8 *)(lVar12 + 8) = 0x3f8000003f800000;
      *(float *)(lVar12 + 0x10) = ((fVar42 + fVar54) - fVar48) / fVar35;
      *(float *)(lVar12 + 0x14) = ((fVar44 + fVar32) - fVar51) / fVar35;
      lVar12 = lVar11 + uVar22 * 0x58;
      *(undefined4 *)(lVar12 + 8) = 0xbf800000;
      *(undefined4 *)(lVar12 + 0xc) = 0xbf800000;
      *(float *)(lVar12 + 0x10) = ((fVar42 + fVar40) - fVar48) / fVar35;
      *(float *)(lVar12 + 0x14) = ((fVar44 + fVar53) - fVar51) / fVar35;
      lVar12 = lVar11 + uVar17 * 0x58;
      *(undefined4 *)(lVar12 + 8) = 0x3f800000;
      *(undefined4 *)(lVar12 + 0xc) = 0xbf800000;
      *(float *)(lVar12 + 0x10) = ((fVar42 + fVar55) - fVar48) / fVar35;
      *(float *)(lVar12 + 0x14) = ((fVar44 + fVar34) - fVar51) / fVar35;
      if (fVar43 == 0.0 || fVar43 == 1.0) {
        fVar48 = fVar43;
      }
      else {
        fVar48 = SQRT(fVar43);
        if (NAN(fVar48)) {
          fVar48 = sqrtf(fVar43);
        }
      }
      fVar51 = SQRT(param_8);
      if (NAN(fVar51)) {
        fVar51 = sqrtf(param_8);
      }
      fVar29 = 1.0 / (fVar27 * fVar27);
      fVar27 = fVar24;
      if (param_8 != fVar23) {
        fVar27 = ABS(fVar51);
      }
      fVar43 = pfVar21[9];
      fVar51 = 1.0;
      if (0.0 < fVar43) {
        if (fVar43 <= DAT_01d4c4d4) {
          fVar43 = DAT_01d4c4d4;
        }
        fVar51 = pfVar21[0xb];
        if (pfVar21[0xb] <= DAT_01d4bac8) {
          fVar51 = DAT_01d4bac8;
        }
        fVar33 = fVar48 * fVar27 * (DAT_01d4bce8 / fVar51);
        fVar51 = 1.0;
        if (fVar33 != 0.0) {
          fVar51 = sinf(fVar33);
          fVar51 = fVar51 / fVar33;
        }
        fVar51 = fVar43 + (1.0 - fVar43) * (fVar51 * DAT_01d4c0f4 + DAT_01d4bbf4);
      }
      fVar33 = 1.0 / (fVar39 * fVar39);
      fVar43 = pfVar21[10];
      fVar39 = 1.0;
      if (0.0 < fVar43) {
        if (fVar43 <= DAT_01d4c4d4) {
          fVar43 = DAT_01d4c4d4;
        }
        fVar39 = pfVar21[0xc];
        if (pfVar21[0xc] <= DAT_01d4bac8) {
          fVar39 = DAT_01d4bac8;
        }
        fVar27 = cosf(fVar48 * fVar27 * (DAT_01d4bb38 / fVar39));
        fVar39 = fVar43 + (1.0 - fVar43) * (fVar27 * 0.5 + 0.5);
      }
      fVar43 = 0.0;
      fVar27 = 1.0;
      if (fVar7 < fVar48) {
        fVar43 = -fVar44 / fVar48;
        fVar27 = -fVar42 / fVar48;
      }
      fVar49 = fVar39 * (fVar31 * fVar43 + fVar45 * fVar27);
      fVar31 = fVar51 * (fVar31 * fVar27 - fVar45 * fVar43);
      fVar45 = fVar39 * (fVar32 * fVar43 + fVar54 * fVar27);
      fVar32 = fVar51 * (fVar32 * fVar27 - fVar54 * fVar43);
      fVar54 = fVar39 * (fVar53 * fVar43 + fVar40 * fVar27);
      fVar40 = fVar51 * (fVar53 * fVar27 - fVar40 * fVar43);
      fVar48 = fVar51 * fVar39;
      if (fVar51 * fVar39 <= fVar6) {
        fVar48 = fVar6;
      }
      fVar48 = 1.0 / fVar48;
      fVar53 = fVar39 * (fVar34 * fVar43 + fVar55 * fVar27);
      fVar34 = fVar51 * (fVar34 * fVar27 - fVar55 * fVar43);
      fVar36 = fVar33 * fVar29 * fVar36 * fVar26 * fVar48;
      fVar52 = fVar33 * fVar29 * fVar52 * fVar30 * fVar48;
      fVar48 = fVar33 * fVar29 * fVar37 * fVar28 * fVar48;
      pfVar13 = (float *)(lVar11 + uVar20 * 0x58);
      *pfVar13 = (fVar42 + (fVar27 * fVar49 - fVar43 * fVar31)) / param_1;
      pfVar13[1] = fVar44 + fVar43 * fVar49 + fVar27 * fVar31;
      pfVar13 = (float *)(lVar11 + (ulong)uVar18 * 0x58);
      *pfVar13 = (fVar42 + (fVar27 * fVar45 - fVar43 * fVar32)) / param_1;
      pfVar13[1] = fVar44 + fVar43 * fVar45 + fVar27 * fVar32;
      pfVar13 = (float *)(lVar11 + uVar22 * 0x58);
      *pfVar13 = (fVar42 + (fVar27 * fVar54 - fVar43 * fVar40)) / param_1;
      pfVar13[1] = fVar44 + fVar43 * fVar54 + fVar27 * fVar40;
      pfVar13 = (float *)(lVar11 + uVar17 * 0x58);
      *pfVar13 = (fVar42 + (fVar27 * fVar53 - fVar43 * fVar34)) / param_1;
      pfVar13[1] = fVar44 + fVar43 * fVar53 + fVar27 * fVar34;
      fVar26 = 1.0 - (1.0 / fVar25) * (1.0 - ((param_19 + -1.0) * pfVar21[-9] + 1.0));
      fVar27 = fVar26;
      if (1.0 < fVar26) {
        fVar27 = 1.0;
      }
      fVar42 = 0.0;
      if (0.0 <= fVar26) {
        fVar42 = fVar27;
      }
      if (fVar39 <= fVar51) {
        fVar51 = fVar39;
      }
      fVar27 = powf(fVar51,__y);
      fVar26 = fVar35 * param_2 * fVar27;
      fVar39 = 5.0 / (fVar46 * param_2 * fVar27 * 0.5);
      fVar51 = fVar39 + fVar39;
      fVar27 = fVar51;
      if (1.0 < fVar51) {
        fVar27 = 1.0;
      }
      fVar44 = 0.0;
      if (0.0 <= fVar51) {
        fVar44 = fVar27;
      }
      fVar51 = pfVar21[4];
      fVar27 = fVar51;
      if (1.0 < fVar51) {
        fVar27 = 1.0;
      }
      fVar35 = 5.0 / fVar26;
      if (fVar44 <= fVar51) {
        fVar44 = fVar27;
      }
      fVar27 = fVar35;
      if (1.0 < fVar35) {
        fVar27 = 1.0;
      }
      fVar51 = 0.0;
      if (0.0 <= fVar35) {
        fVar51 = fVar27;
      }
      fVar35 = pfVar21[7];
      fVar27 = fVar35;
      if (1.0 < fVar35) {
        fVar27 = 1.0;
      }
      fVar46 = 0.0;
      if (0.0 <= fVar35) {
        fVar46 = fVar27;
      }
      fVar51 = (float)NEON_fminnm(fVar51,0x3f800000);
      fVar27 = SQRT(param_21);
      if (NAN(fVar27)) {
        fVar27 = sqrtf(param_21);
      }
      fVar28 = pfVar21[-2];
      fVar29 = pfVar21[-3];
      lVar12 = lVar11 + uVar20 * 0x58;
      lVar14 = lVar11 + (ulong)uVar18 * 0x58;
      lVar15 = lVar11 + uVar22 * 0x58;
      lVar16 = lVar11 + uVar17 * 0x58;
      lVar19 = lVar19 + 1;
      fVar35 = fVar24;
      if (param_21 != fVar23) {
        fVar35 = ABS(fVar27) + -1.0;
      }
      fVar27 = pfVar21[-9] * fVar35 + 1.0;
      *(float *)(lVar12 + 0x18) = fVar36 * ((pfVar21[-4] + -0.5) * fVar27 + 0.5);
      *(float *)(lVar12 + 0x1c) = fVar48 * ((fVar29 + -0.5) * fVar27 + 0.5);
      *(float *)(lVar12 + 0x20) = fVar52 * ((fVar28 + -0.5) * fVar27 + 0.5);
      *(float *)(lVar12 + 0x24) = 1.0 - fVar39;
      uVar4 = *(undefined8 *)(lVar12 + 0x20);
      uVar18 = uVar18 + 4;
      *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)(lVar12 + 0x18);
      *(undefined8 *)(lVar14 + 0x20) = uVar4;
      uVar4 = *(undefined8 *)(lVar12 + 0x20);
      *(undefined8 *)(lVar15 + 0x18) = *(undefined8 *)(lVar12 + 0x18);
      *(undefined8 *)(lVar15 + 0x20) = uVar4;
      uVar4 = *(undefined8 *)(lVar12 + 0x20);
      *(undefined8 *)(lVar16 + 0x18) = *(undefined8 *)(lVar12 + 0x18);
      *(undefined8 *)(lVar16 + 0x20) = uVar4;
      fVar29 = pfVar21[2];
      fVar39 = *pfVar21;
      fVar35 = pfVar21[1];
      pfVar21 = pfVar21 + 0x1b;
      *(float *)(lVar12 + 0x28) = fVar36 * (fVar27 * (fVar39 + -0.5) + 0.5);
      *(float *)(lVar12 + 0x2c) = fVar48 * (fVar27 * (fVar35 + -0.5) + 0.5);
      *(float *)(lVar12 + 0x30) = fVar52 * (fVar27 * (fVar29 + -0.5) + 0.5);
      *(float *)(lVar12 + 0x34) = 1.0 / fVar44;
      uVar4 = *(undefined8 *)(lVar12 + 0x30);
      *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)(lVar12 + 0x28);
      *(undefined8 *)(lVar14 + 0x30) = uVar4;
      uVar4 = *(undefined8 *)(lVar12 + 0x30);
      *(undefined8 *)(lVar15 + 0x28) = *(undefined8 *)(lVar12 + 0x28);
      *(undefined8 *)(lVar15 + 0x30) = uVar4;
      uVar4 = *(undefined8 *)(lVar12 + 0x30);
      *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)(lVar12 + 0x28);
      *(undefined8 *)(lVar16 + 0x30) = uVar4;
      *(undefined8 *)(lVar12 + 0x3c) = 0x3f80000000000000;
      *(undefined4 *)(lVar12 + 0x44) = 0;
      *(float *)(lVar12 + 0x38) = fVar42;
      uVar4 = *(undefined8 *)(lVar12 + 0x40);
      *(undefined8 *)(lVar14 + 0x38) = *(undefined8 *)(lVar12 + 0x38);
      *(undefined8 *)(lVar14 + 0x40) = uVar4;
      uVar4 = *(undefined8 *)(lVar12 + 0x40);
      *(undefined8 *)(lVar15 + 0x38) = *(undefined8 *)(lVar12 + 0x38);
      *(undefined8 *)(lVar15 + 0x40) = uVar4;
      uVar4 = *(undefined8 *)(lVar12 + 0x40);
      *(undefined8 *)(lVar16 + 0x38) = *(undefined8 *)(lVar12 + 0x38);
      *(undefined8 *)(lVar16 + 0x40) = uVar4;
      *(float *)(lVar12 + 0x48) = 2.0 / fVar51;
      *(float *)(lVar12 + 0x4c) = 1.0 - fVar46;
      *(float *)(lVar12 + 0x50) = fVar46;
      *(float *)(lVar12 + 0x54) = 10.0 / fVar26 + 1.0;
      uVar4 = *(undefined8 *)(lVar12 + 0x50);
      *(undefined8 *)(lVar14 + 0x48) = *(undefined8 *)(lVar12 + 0x48);
      *(undefined8 *)(lVar14 + 0x50) = uVar4;
      uVar4 = *(undefined8 *)(lVar12 + 0x50);
      *(undefined8 *)(lVar15 + 0x48) = *(undefined8 *)(lVar12 + 0x48);
      *(undefined8 *)(lVar15 + 0x50) = uVar4;
      uVar4 = *(undefined8 *)(lVar12 + 0x50);
      *(undefined8 *)(lVar16 + 0x48) = *(undefined8 *)(lVar12 + 0x48);
      *(undefined8 *)(lVar16 + 0x50) = uVar4;
    } while (lVar19 < (int)uVar3);
  }
  FUN_00549430(*puVar2);
  puVar1 = (undefined8 *)(param_9 + 0x30);
  if (*(int *)((long)puVar1 + (long)param_23 * 4 + (long)param_16 * 0x58 + 0x7a34) == 0) {
    uVar10 = 0xfffffffc;
  }
  else {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
    local_b8 = 0x3a83126f;
    uStack_b0 = 0;
    (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xd4),&local_b8);
    if (param_10 == (long *)0x0) {
      uVar9 = 0x7fffffff;
    }
    else {
      uVar9 = (**(code **)(*param_10 + 0x98))(param_10);
      (**(code **)(*param_10 + 0x88))(param_10,1);
      (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40),param_10);
    }
    (**(code **)(**(long **)(param_9 + 0x20) + 0x160))(*(long **)(param_9 + 0x20),2);
    (**(code **)(**(long **)(param_9 + 0x20) + 0x168))(*(long **)(param_9 + 0x20),1);
    if ((param_24 >> 0x12 & 1) == 0) {
      (**(code **)(**(long **)(param_9 + 0x20) + 0x148))(*(long **)(param_9 + 0x20),0xffffffff,1);
    }
    if ((param_24 >> 0x11 & 1) == 0) {
      (**(code **)(*(long *)*puVar1 + 0x108))((long *)*puVar1,auStack_bc,param_24 & 0xffff);
      (**(code **)(*(long *)*puVar1 + 0x118))((long *)*puVar1,0);
    }
    FUN_0056d690(puVar1);
    (**(code **)(**(long **)(param_9 + 0x30) + 0x150))
              (*(long **)(param_9 + 0x30),*(undefined8 *)(param_9 + 0x29a40),*puVar2,0,0,0,1);
    (**(code **)(**(long **)(param_9 + 0x20) + 0x48))
              (*(long **)(param_9 + 0x20),*(undefined8 *)(param_9 + 0x29bf8),0);
    FUN_0059a530(*(undefined8 *)(param_9 + 0x30));
    uVar10 = (**(code **)(**(long **)(param_9 + 0x20) + 0x1d0))
                       (*(long **)(param_9 + 0x20),4,uVar3 * 6,0,0,0xffffffff);
    if ((param_24 >> 0x11 & 1) == 0) {
      (**(code **)(*(long *)*puVar1 + 0x120))();
      uVar10 = (**(code **)(*(long *)*puVar1 + 0x110))();
    }
    (**(code **)(**(long **)(param_9 + 0x20) + 0x160))(*(long **)(param_9 + 0x20),0);
    (**(code **)(**(long **)(param_9 + 0x20) + 0x168))(*(long **)(param_9 + 0x20),0);
    if (param_10 != (long *)0x0) {
      (**(code **)(*param_10 + 0x88))(param_10,uVar9);
    }
  }
  return uVar10;
}


