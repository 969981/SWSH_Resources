/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0021aa90; name: FUN_0021aa90
 */


bool FUN_0021aa90(long param_1,long param_2,float *param_3,float *param_4,float *param_5,
                 long param_6,undefined8 param_7)

{
  byte bVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  float *pfVar14;
  uint uVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  byte bVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
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
  float __x;
  float __x_00;
  float __x_01;
  float fVar55;
  float __x_02;
  float __x_03;
  float fVar56;
  float __x_04;
  float fVar57;
  float __x_05;
  float __x_06;
  float fVar58;
  float fVar59;
  float fVar60;
  float local_170;
  float fStack_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float fStack_154;
  float local_150;
  float local_14c;
  float fStack_148;
  float local_144;
  float local_140;
  float fStack_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  undefined8 local_f4;
  float local_ec;
  undefined8 local_e8;
  float local_e0;
  float local_dc;
  float fStack_d8;
  float local_d4;
  float local_d0 [4];
  float local_c0;
  float local_bc;
  float local_b8 [6];
  
  fVar25 = *param_3;
  fVar36 = param_3[1];
  fVar53 = fVar36 + fVar36;
  fVar44 = param_3[2];
  fVar50 = param_3[3];
  fVar52 = fVar25 + fVar25;
  local_134 = (fVar44 + fVar44) * fVar50;
  local_130 = fVar44 * (fVar44 + fVar44);
  fStack_13c = fVar52 * fVar36 + local_134;
  local_138 = fVar52 * fVar44 - fVar53 * fVar50;
  local_134 = fVar52 * fVar36 - local_134;
  local_120 = 1.0 - fVar25 * fVar52;
  bVar20 = *(byte *)(param_6 + 10);
  local_12c = fVar53 * fVar44 + fVar52 * fVar50;
  local_124 = fVar53 * fVar44 - fVar52 * fVar50;
  local_140 = (1.0 - fVar36 * fVar53) - local_130;
  local_130 = local_120 - local_130;
  local_128 = fVar52 * fVar44 + fVar53 * fVar50;
  local_120 = local_120 - fVar36 * fVar53;
  local_11c = param_3[4];
  local_118 = param_3[5];
  local_114 = param_3[6];
  fVar25 = *param_4;
  fVar36 = param_4[1];
  fVar44 = param_4[2];
  fVar50 = param_4[3];
  fVar53 = fVar36 + fVar36;
  fVar52 = fVar25 + fVar25;
  local_170 = fVar44 * (fVar44 + fVar44);
  local_164 = (fVar44 + fVar44) * fVar50;
  fVar51 = 1.0 - fVar25 * fVar52;
  fStack_16c = fVar52 * fVar36 + local_164;
  local_168 = fVar52 * fVar44 - fVar53 * fVar50;
  local_164 = fVar52 * fVar36 - local_164;
  local_15c = fVar53 * fVar44 + fVar52 * fVar50;
  local_160 = fVar51 - local_170;
  local_170 = (1.0 - fVar36 * fVar53) - local_170;
  fVar56 = fVar52 * fVar44 + fVar53 * fVar50;
  fVar55 = fVar53 * fVar44 - fVar52 * fVar50;
  fVar51 = fVar51 - fVar36 * fVar53;
  fVar25 = param_4[4];
  fVar36 = param_4[5];
  fVar44 = param_4[6];
  fVar58 = fVar25 - local_11c;
  fVar59 = fVar36 - local_118;
  fVar54 = *param_5;
  fVar60 = fVar44 - local_114;
  fVar26 = local_138 * local_168 + local_140 * local_170 + fStack_13c * fStack_16c;
  fVar57 = local_138 * local_15c + fStack_13c * local_160 + local_140 * local_164;
  __x_00 = local_138 * fVar51 + fStack_13c * fVar55 + local_140 * fVar56;
  __x_02 = local_140 * fVar58 + fStack_13c * fVar59 + local_138 * fVar60;
  local_158 = fVar56;
  fStack_154 = fVar55;
  local_150 = fVar51;
  local_14c = fVar25;
  fStack_148 = fVar36;
  local_144 = fVar44;
  fVar27 = fabsf(fVar26);
  fVar52 = DAT_01d4c1cc;
  fVar27 = fVar27 + DAT_01d4c1cc;
  fVar28 = fabsf(fVar57);
  fVar28 = fVar28 + fVar52;
  fVar29 = fabsf(__x_00);
  fVar29 = fVar29 + fVar52;
  pfVar19 = (float *)(param_1 + 4);
  fVar37 = *pfVar19;
  pfVar18 = (float *)(param_2 + 0xc);
  fVar50 = *pfVar18;
  pfVar21 = (float *)(param_2 + 4);
  fVar45 = *pfVar21;
  pfVar24 = (float *)(param_2 + 8);
  fVar46 = *pfVar24;
  local_b8[0] = __x_02;
  fVar30 = fabsf(__x_02);
  fVar10 = local_12c;
  fVar9 = local_130;
  fVar8 = local_134;
  fVar7 = local_15c;
  fVar6 = local_160;
  fVar5 = local_164;
  fVar4 = local_168;
  fVar3 = fStack_16c;
  fVar53 = local_170;
  fVar50 = fVar54 + ((fVar37 + fVar27 * fVar45 + fVar28 * fVar46 + fVar29 * fVar50) - fVar30);
  if (fVar50 < 0.0) {
LAB_0021b594:
    iVar13 = 0;
    goto LAB_0021b598;
  }
  fVar31 = local_134 * local_170 + local_130 * fStack_16c + local_12c * local_168;
  __x_01 = local_134 * local_164 + local_130 * local_160 + local_12c * local_15c;
  __x_04 = local_134 * fVar56 + local_130 * fVar55 + local_12c * fVar51;
  __x_05 = fVar58 * local_134 + fVar59 * local_130 + fVar60 * local_12c;
  local_d0[0] = fVar50;
  fVar32 = fabsf(fVar31);
  fVar32 = fVar32 + fVar52;
  fVar33 = fabsf(__x_01);
  fVar33 = fVar33 + fVar52;
  fVar34 = fabsf(__x_04);
  fVar34 = fVar34 + fVar52;
  pfVar22 = (float *)(param_1 + 8);
  fVar46 = *pfVar22;
  fVar38 = *pfVar21;
  fVar39 = *pfVar24;
  fVar40 = *pfVar18;
  local_b8[1] = __x_05;
  fVar35 = fabsf(__x_05);
  fVar45 = local_120;
  fVar37 = local_124;
  fVar30 = local_128;
  fVar46 = fVar54 + ((fVar46 + fVar32 * fVar38 + fVar33 * fVar39 + fVar34 * fVar40) - fVar35);
  if (fVar46 < 0.0) goto LAB_0021b594;
  fVar47 = local_128 * fVar53 + local_124 * fVar3 + local_120 * fVar4;
  __x_06 = local_128 * fVar5 + local_124 * fVar6 + local_120 * fVar7;
  __x = local_128 * fVar56 + local_124 * fVar55 + local_120 * fVar51;
  __x_03 = fVar58 * local_128 + fVar59 * local_124 + fVar60 * local_120;
  local_d0[1] = fVar46;
  fVar35 = fabsf(fVar47);
  fVar35 = fVar35 + fVar52;
  fVar38 = fabsf(__x_06);
  fVar38 = fVar38 + fVar52;
  fVar39 = fabsf(__x);
  fVar39 = fVar39 + fVar52;
  pfVar17 = (float *)(param_1 + 0xc);
  fVar52 = *pfVar17;
  fVar41 = *pfVar21;
  fVar42 = *pfVar24;
  fVar43 = *pfVar18;
  local_b8[2] = __x_03;
  fVar40 = fabsf(__x_03);
  fVar52 = fVar54 + ((fVar52 + fVar35 * fVar41 + fVar38 * fVar42 + fVar39 * fVar43) - fVar40);
  if (fVar52 < 0.0) goto LAB_0021b594;
  local_b8[3] = fVar58 * fVar53 + fVar59 * fVar3 + fVar60 * fVar4;
  fVar42 = *pfVar19;
  fVar41 = *pfVar21;
  fVar43 = *pfVar22;
  fVar48 = *pfVar17;
  local_d0[2] = fVar52;
  fVar40 = fabsf(local_b8[3]);
  fVar40 = fVar54 + ((fVar41 + fVar27 * fVar42 + fVar32 * fVar43 + fVar35 * fVar48) - fVar40);
  if (fVar40 < 0.0) goto LAB_0021b594;
  local_b8[4] = fVar58 * fVar5 + fVar59 * fVar6 + fVar60 * fVar7;
  fVar43 = *pfVar19;
  fVar42 = *pfVar24;
  fVar48 = *pfVar22;
  fVar49 = *pfVar17;
  local_d0[3] = fVar40;
  fVar41 = fabsf(local_b8[4]);
  fVar41 = fVar54 + ((fVar42 + fVar28 * fVar43 + fVar33 * fVar48 + fVar38 * fVar49) - fVar41);
  if (fVar41 < 0.0) goto LAB_0021b594;
  local_b8[5] = fVar58 * fVar56 + fVar59 * fVar55 + fVar60 * fVar51;
  fVar60 = *pfVar19;
  fVar59 = *pfVar18;
  fVar42 = *pfVar22;
  fVar43 = *pfVar17;
  local_c0 = fVar41;
  fVar58 = fabsf(local_b8[5]);
  fVar58 = fVar54 + ((fVar59 + fVar29 * fVar60 + fVar34 * fVar42 + fVar39 * fVar43) - fVar58);
  local_bc = fVar58;
  if (fVar58 < 0.0) goto LAB_0021b594;
  if (bVar20 == 0) {
    fVar60 = *pfVar22;
    fVar42 = *pfVar17;
    fVar43 = *pfVar24;
    fVar48 = *pfVar18;
    fVar59 = fabsf(fVar31 * __x_03 - __x_05 * fVar47);
    if ((((((fVar54 + fVar35 * fVar60 + fVar32 * fVar42 + fVar29 * fVar43 + fVar28 * fVar48 < fVar59
            ) || (fVar60 = *pfVar22, fVar42 = *pfVar17, fVar43 = *pfVar21, fVar48 = *pfVar18,
                 fVar59 = fabsf(__x_01 * __x_03 - __x_05 * __x_06),
                 fVar54 + fVar38 * fVar60 + fVar33 * fVar42 + fVar29 * fVar43 + fVar27 * fVar48 <
                 fVar59)) ||
          (fVar60 = *pfVar22, fVar42 = *pfVar17, fVar43 = *pfVar21, fVar48 = *pfVar24,
          fVar59 = fabsf(__x_04 * __x_03 - __x_05 * __x),
          fVar54 + fVar39 * fVar60 + fVar34 * fVar42 + fVar28 * fVar43 + fVar27 * fVar48 < fVar59))
         || ((fVar60 = *pfVar19, fVar42 = *pfVar17, fVar43 = *pfVar24, fVar48 = *pfVar18,
             fVar59 = fabsf(__x_02 * fVar47 - fVar26 * __x_03),
             fVar54 + fVar35 * fVar60 + fVar27 * fVar42 + fVar34 * fVar43 + fVar33 * fVar48 < fVar59
             || (fVar60 = *pfVar19, fVar42 = *pfVar17, fVar43 = *pfVar21, fVar47 = *pfVar18,
                fVar59 = fabsf(__x_02 * __x_06 - fVar57 * __x_03),
                fVar54 + fVar38 * fVar60 + fVar28 * fVar42 + fVar34 * fVar43 + fVar32 * fVar47 <
                fVar59)))) ||
        ((fVar60 = *pfVar19, fVar42 = *pfVar17, fVar43 = *pfVar21, fVar47 = *pfVar24,
         fVar59 = fabsf(__x_02 * __x - __x_00 * __x_03),
         fVar54 + fVar39 * fVar60 + fVar29 * fVar42 + fVar33 * fVar43 + fVar32 * fVar47 < fVar59 ||
         ((fVar59 = *pfVar19, fVar60 = *pfVar22, fVar42 = *pfVar24, fVar43 = *pfVar18,
          fVar26 = fabsf(fVar26 * __x_05 - __x_02 * fVar31),
          fVar54 + fVar32 * fVar59 + fVar27 * fVar60 + fVar39 * fVar42 + fVar38 * fVar43 < fVar26 ||
          (fVar27 = *pfVar19, fVar59 = *pfVar22, fVar60 = *pfVar21, fVar31 = *pfVar18,
          fVar26 = fabsf(fVar57 * __x_05 - __x_02 * __x_01),
          fVar54 + fVar33 * fVar27 + fVar28 * fVar59 + fVar39 * fVar60 + fVar35 * fVar31 < fVar26)))
         ))) || (fVar27 = *pfVar19, fVar28 = *pfVar22, fVar57 = *pfVar21, fVar59 = *pfVar24,
                fVar26 = fabsf(__x_00 * __x_05 - __x_02 * __x_04),
                fVar54 + fVar34 * fVar27 + fVar29 * fVar28 + fVar38 * fVar57 + fVar35 * fVar59 <
                fVar26)) {
      bVar20 = 0;
      goto LAB_0021b594;
    }
  }
  else {
    uVar15 = bVar20 - 1;
    local_d0[uVar15] = local_d0[uVar15] * DAT_01d4c5a4;
    fVar46 = local_d0[1];
    fVar41 = local_c0;
    fVar58 = local_bc;
    fVar50 = local_d0[0];
    fVar52 = local_d0[2];
    fVar40 = local_d0[3];
  }
  bVar11 = true;
  bVar12 = false;
  if (fVar50 < DAT_01d4c18c) {
    bVar11 = false;
    bVar12 = true;
    if (!NAN(fVar50)) {
      bVar11 = fVar50 < 0.0;
      bVar12 = false;
    }
  }
  if (bVar11 != bVar12) {
    fVar50 = DAT_01d4c18c;
  }
  fVar26 = fVar46;
  if (0.0 > fVar46 || fVar46 >= fVar50) {
    fVar26 = fVar50;
  }
  fVar27 = fVar52;
  if (fVar52 < 0.0 || fVar26 <= fVar52) {
    fVar27 = fVar26;
  }
  uVar15 = 2;
  if (fVar52 < 0.0 || fVar26 <= fVar52) {
    uVar15 = (uint)(0.0 <= fVar46 && fVar46 < fVar50);
  }
  fVar50 = fVar40;
  if (fVar40 < 0.0 || fVar27 <= fVar40) {
    fVar50 = fVar27;
  }
  uVar2 = 3;
  if (fVar40 < 0.0 || fVar27 <= fVar40) {
    uVar2 = uVar15;
  }
  fVar52 = fVar41;
  if (fVar41 < 0.0 || fVar50 <= fVar41) {
    fVar52 = fVar50;
  }
  uVar15 = 4;
  if (fVar41 < 0.0 || fVar50 <= fVar41) {
    uVar15 = uVar2;
  }
  bVar11 = true;
  bVar12 = false;
  if (fVar58 < fVar52) {
    bVar11 = false;
    bVar12 = true;
    if (!NAN(fVar58)) {
      bVar11 = fVar58 < 0.0;
      bVar12 = false;
    }
  }
  uVar2 = 5;
  if (bVar11 != bVar12) {
    uVar2 = uVar15;
  }
  bVar20 = (char)uVar2 + 1;
  if (5 < uVar2) goto LAB_0021b594;
  fVar50 = local_b8[uVar2];
  pfVar23 = pfVar24;
  switch(uVar2) {
  case 0:
    if (0.0 <= fVar50) {
      fStack_fc = -fStack_13c;
      local_100 = -local_140;
      local_f8 = -local_138;
      local_f4 = CONCAT44(-fVar9,-fVar8);
      local_ec = -fVar10;
      fVar25 = *pfVar19;
      local_dc = local_11c + local_140 * fVar25;
      fStack_d8 = fStack_13c * fVar25 + local_118;
      local_d4 = local_138 * fVar25 + local_114;
    }
    else {
      local_100 = local_140;
      fStack_fc = fStack_13c;
      local_f4 = CONCAT44(fVar9,fVar8);
      local_ec = fVar10;
      local_f8 = local_138;
      fVar25 = *pfVar19;
      local_dc = local_11c - fVar25 * local_140;
      fStack_d8 = local_118 - fVar25 * fStack_13c;
      local_d4 = local_114 - fVar25 * local_138;
    }
    local_e0 = fVar45;
    local_e8 = CONCAT44(fVar37,fVar30);
    pfVar16 = pfVar22;
    pfVar22 = pfVar17;
    goto LAB_0021b958;
  case 1:
    local_e8 = CONCAT44(fStack_13c,local_140);
    local_e0 = local_138;
    if (0.0 <= fVar50) {
      fStack_fc = -fVar9;
      local_100 = -fVar8;
      local_f8 = -fVar10;
      local_ec = -fVar45;
      local_f4 = CONCAT44(-fVar37,-fVar30);
      fVar25 = *pfVar22;
      local_dc = local_11c + fVar8 * fVar25;
      fStack_d8 = fVar9 * fVar25 + local_118;
      local_d4 = fVar10 * fVar25 + local_114;
    }
    else {
      local_f8 = fVar10;
      local_100 = fVar8;
      fStack_fc = fVar9;
      local_f4 = CONCAT44(fVar37,fVar30);
      local_ec = fVar45;
      fVar25 = *pfVar22;
      local_dc = local_11c - fVar25 * fVar8;
      fStack_d8 = local_118 - fVar25 * fVar9;
      local_d4 = local_114 - fVar25 * fVar10;
    }
    pfVar16 = pfVar17;
    pfVar22 = pfVar19;
LAB_0021b958:
    pfVar14 = &local_170;
    pfVar17 = pfVar18;
    pfVar19 = pfVar21;
    local_110 = local_100;
    local_10c = fStack_fc;
    local_108 = local_f8;
    break;
  case 2:
    local_e8 = CONCAT44(fVar9,fVar8);
    local_e0 = fVar10;
    if (0.0 <= fVar50) {
      fStack_fc = -fVar37;
      local_100 = -fVar30;
      local_f8 = -fVar45;
      local_ec = -local_138;
      local_f4 = CONCAT44(-fStack_13c,-local_140);
      fVar25 = *pfVar17;
      local_dc = local_11c + fVar30 * fVar25;
      fStack_d8 = fVar37 * fVar25 + local_118;
      local_d4 = fVar45 * fVar25 + local_114;
    }
    else {
      local_f4 = CONCAT44(fStack_13c,local_140);
      local_100 = fVar30;
      fStack_fc = fVar37;
      local_f8 = fVar45;
      local_ec = local_138;
      fVar25 = *pfVar17;
      local_dc = local_11c - fVar25 * fVar30;
      fStack_d8 = local_118 - fVar25 * fVar37;
      local_d4 = local_114 - fVar25 * fVar45;
    }
    pfVar14 = &local_170;
    pfVar16 = pfVar19;
    pfVar17 = pfVar18;
    pfVar19 = pfVar21;
    local_110 = local_100;
    local_10c = fStack_fc;
    local_108 = local_f8;
    break;
  case 3:
    if (0.0 <= fVar50) {
      local_110 = -fVar53;
      local_10c = -fVar3;
      local_108 = -fVar4;
      local_f8 = fVar4;
      local_100 = fVar53;
      fStack_fc = fVar3;
      local_f4 = CONCAT44(fVar6,fVar5);
      local_ec = fVar7;
      fVar50 = *pfVar21;
      local_dc = fVar25 - fVar53 * fVar50;
      fStack_d8 = fVar36 - fVar3 * fVar50;
      local_d4 = fVar44 - fVar4 * fVar50;
    }
    else {
      local_100 = -fVar53;
      fStack_fc = -fVar3;
      local_f8 = -fVar4;
      local_ec = -fVar7;
      local_110 = fVar53;
      local_10c = fVar3;
      local_108 = fVar4;
      local_f4 = CONCAT44(-fVar6,-fVar5);
      fVar50 = *pfVar21;
      local_dc = fVar50 * fVar53 + fVar25;
      fStack_d8 = fVar50 * fVar3 + fVar36;
      local_d4 = fVar50 * fVar4 + fVar44;
    }
    local_e0 = local_150;
    local_e8 = CONCAT44(fStack_154,local_158);
    pfVar14 = &local_140;
    pfVar16 = pfVar24;
    pfVar23 = pfVar22;
    pfVar22 = pfVar18;
    break;
  case 4:
    if (0.0 <= fVar50) {
      local_f4 = CONCAT44(fStack_154,local_158);
      local_110 = -fVar5;
      local_10c = -fVar6;
      local_108 = -fVar7;
      local_100 = fVar5;
      fStack_fc = fVar6;
      local_f8 = fVar7;
      local_ec = local_150;
      fVar50 = *pfVar24;
      local_dc = fVar25 - fVar5 * fVar50;
      fStack_d8 = fVar36 - fVar6 * fVar50;
      local_d4 = fVar44 - fVar7 * fVar50;
    }
    else {
      fStack_fc = -fVar6;
      local_f8 = -fVar7;
      local_100 = -fVar5;
      local_f4 = CONCAT44(-fVar55,-fVar56);
      local_ec = -fVar51;
      local_110 = fVar5;
      local_10c = fVar6;
      local_108 = fVar7;
      fVar50 = *pfVar24;
      local_dc = fVar50 * fVar5 + fVar25;
      fStack_d8 = fVar50 * fVar6 + fVar36;
      local_d4 = fVar50 * fVar7 + fVar44;
    }
    local_e0 = fVar4;
    local_e8 = CONCAT44(fVar3,fVar53);
    pfVar14 = &local_140;
    pfVar16 = pfVar18;
    pfVar23 = pfVar22;
    pfVar22 = pfVar21;
    break;
  case 5:
    local_e8 = CONCAT44(fVar6,fVar5);
    local_e0 = fVar7;
    if (0.0 <= fVar50) {
      local_110 = -fVar56;
      local_10c = -fVar55;
      local_108 = -fVar51;
      local_f4 = CONCAT44(fVar3,fVar53);
      local_ec = fVar4;
      fVar50 = *pfVar18;
      local_dc = fVar25 - fVar56 * fVar50;
      fStack_d8 = fVar36 - fVar55 * fVar50;
      local_d4 = fVar44 - fVar51 * fVar50;
      local_f8 = fVar51;
      local_100 = fVar56;
      fStack_fc = fVar55;
    }
    else {
      local_ec = -fVar4;
      local_110 = local_158;
      local_f4 = CONCAT44(-fVar3,-fVar53);
      fVar50 = *pfVar18;
      local_dc = fVar50 * local_158 + fVar25;
      fStack_d8 = fVar50 * fVar55 + fVar36;
      local_d4 = fVar50 * fVar51 + fVar44;
      local_f8 = -fVar51;
      local_10c = fVar55;
      local_108 = fVar51;
      local_100 = -local_158;
      fStack_fc = -fVar55;
    }
    pfVar14 = &local_140;
    pfVar16 = pfVar21;
    pfVar23 = pfVar22;
    pfVar22 = pfVar24;
  }
  iVar13 = FUN_0021bb80(*pfVar16,*pfVar22,*pfVar19,*pfVar23,*pfVar17,fVar54,param_7,&local_110,
                        &local_100,pfVar14);
LAB_0021b598:
  bVar1 = 0;
  if (iVar13 != 0) {
    bVar1 = bVar20;
  }
  *(byte *)(param_6 + 10) = bVar1;
  return iVar13 != 0;
}


