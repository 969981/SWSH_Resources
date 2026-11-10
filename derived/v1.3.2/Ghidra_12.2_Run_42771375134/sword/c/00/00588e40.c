/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00588e40; name: FUN_00588e40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00588e40(float param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
            long *param_7,long param_8,float *param_9,undefined8 param_10,int param_11,uint param_12
            )

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float local_258 [5];
  undefined8 local_244;
  undefined4 local_23c;
  float fStack_238;
  undefined8 local_234;
  undefined4 local_22c;
  float fStack_228;
  undefined8 local_224;
  undefined4 local_21c;
  float fStack_218;
  undefined8 local_214;
  undefined4 local_20c;
  float fStack_208;
  undefined8 local_204;
  undefined4 local_1fc;
  float fStack_1f8;
  undefined8 local_1f4;
  undefined4 local_1ec;
  float fStack_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  float local_1d8;
  float fStack_1d4;
  float local_1d0;
  float fStack_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float fStack_1bc;
  undefined8 local_1b8;
  float local_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float local_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float local_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float local_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128 [3];
  float local_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  
  fVar16 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 0x58));
  fVar15 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 0x54));
  fVar17 = *(float *)(param_3 + 0x88);
  fVar18 = *(float *)(param_3 + 0x8c);
  fVar22 = *(float *)(param_3 + 0x90);
  fVar21 = *(float *)(param_3 + 0x94);
  uVar19 = *(undefined4 *)(param_8 + 0x54);
  uVar20 = *(undefined4 *)(param_8 + 0x58);
  FUN_0059d300(param_8,0,1,1,0,0);
  FUN_0059d000(0,0);
  if (((((param_9[1] == 1.0) && (param_9[5] == 1.0)) && (param_9[9] == 1.0)) &&
      ((param_9[0xd] == 1.0 && (param_9[0x11] == 1.0)))) &&
     ((param_9[0x15] == 1.0 && ((param_9[0x19] == 1.0 && (param_9[0x1d] == 1.0)))))) {
    piVar1 = (int *)(param_2 + (long)param_11 * 4 + 0x7a64);
    bVar14 = true;
    iVar7 = *piVar1;
  }
  else {
    lVar8 = param_2 + (long)param_11 * 4;
    bVar14 = false;
    piVar1 = (int *)(lVar8 + 0x7a64);
    iVar7 = *(int *)(lVar8 + 0x7abc);
  }
  if (iVar7 == 0) {
    iVar7 = *piVar1;
    bVar14 = true;
  }
  fVar21 = fVar18 * fVar16 + fVar21;
  fVar22 = fVar17 * fVar15 + fVar22;
  (**(code **)(**(long **)(param_2 + 0x30) + 0xe8))(*(long **)(param_2 + 0x30),iVar7);
  DAT_02760c18 = fVar22 * 0.5;
  DAT_02760c1c = fVar21 * 0.5;
  fVar15 = param_1 * 0.0;
  _DAT_02760c20 = 0;
  if (bVar14) {
    ram0x02760c98 =
         CONCAT44(*(float *)(PTR_DAT_02713c78 + 4) * param_1,*(float *)PTR_DAT_02713c78 * param_1);
    ram0x02760ca8 =
         CONCAT44(*(float *)(PTR_DAT_02713c78 + 0x14) * param_1,
                  *(float *)(PTR_DAT_02713c78 + 0x10) * param_1);
    ram0x02760cb8 =
         CONCAT44(*(float *)(PTR_DAT_02713c78 + 0x24) * param_1,
                  *(float *)(PTR_DAT_02713c78 + 0x20) * param_1);
    ram0x02760cc8 =
         CONCAT44(*(float *)(PTR_DAT_02713c78 + 0x34) * param_1,
                  *(float *)(PTR_DAT_02713c78 + 0x30) * param_1);
    DAT_02760cd8 = CONCAT44(*(float *)(PTR_DAT_02713c78 + 0x44) * param_1,
                            *(float *)(PTR_DAT_02713c78 + 0x40) * param_1);
    DAT_02760d08 = CONCAT44(*(float *)(PTR_DAT_02713c78 + 0x74) * param_1,
                            *(float *)(PTR_DAT_02713c78 + 0x70) * param_1);
    DAT_02760ce8 = CONCAT44(*(float *)(PTR_DAT_02713c78 + 0x54) * param_1,
                            *(float *)(PTR_DAT_02713c78 + 0x50) * param_1);
    ram0x02760ca0 = CONCAT44(fVar15,fVar15);
    ram0x02760cb0 = CONCAT44(fVar15,fVar15);
    ram0x02760cc0 = CONCAT44(fVar15,fVar15);
    ram0x02760cd0 = CONCAT44(fVar15,fVar15);
    DAT_02760ce0 = CONCAT44(fVar15,fVar15);
    DAT_02760cf0 = CONCAT44(fVar15,fVar15);
    DAT_02760d00 = CONCAT44(fVar15,fVar15);
    DAT_02760d10 = CONCAT44(fVar15,fVar15);
    DAT_02760cf8 = CONCAT44(*(float *)(PTR_DAT_02713c78 + 100) * param_1,
                            *(float *)(PTR_DAT_02713c78 + 0x60) * param_1);
  }
  else {
    ram0x02760c98 = 0;
    ram0x02760ca0 = 0;
    ram0x02760ca8 = 0;
    ram0x02760cb0 = 0;
    ram0x02760cb8 = 0;
    ram0x02760cc0 = 0;
    ram0x02760cc8 = 0;
    ram0x02760cd0 = 0;
    DAT_02760cd8 = 0;
    DAT_02760ce0 = 0;
    DAT_02760ce8 = 0;
    DAT_02760cf0 = 0;
    DAT_02760cf8 = 0;
    DAT_02760d00 = 0;
    DAT_02760d08 = 0;
    DAT_02760d10 = 0;
  }
  ram0x02760c90 = 0;
  ram0x02760c80 = 0;
  ram0x02760c70 = 0;
  ram0x02760c60 = 0;
  ram0x02760c50 = 0;
  _DAT_02760c40 = 0;
  DAT_02760c30 = 0;
  DAT_02760c28._0_4_ = DAT_02760c18;
  DAT_02760c28._4_4_ = DAT_02760c1c;
  DAT_02760c38 = DAT_02760c18;
  DAT_02760c3c = DAT_02760c1c;
  DAT_02760c44._4_4_ = DAT_02760c18;
  DAT_02760c4c._0_4_ = DAT_02760c1c;
  DAT_02760c54._4_4_ = DAT_02760c18;
  DAT_02760c5c._0_4_ = DAT_02760c1c;
  DAT_02760c64._4_4_ = DAT_02760c18;
  DAT_02760c6c._0_4_ = DAT_02760c1c;
  DAT_02760c74._4_4_ = DAT_02760c18;
  DAT_02760c7c._0_4_ = DAT_02760c1c;
  DAT_02760c84._4_4_ = DAT_02760c18;
  DAT_02760c8c._0_4_ = DAT_02760c1c;
  (**(code **)(**(long **)(param_2 + 0x30) + 0xb0))
            (*(long **)(param_2 + 0x30),*(undefined4 *)(param_2 + 0xf4),&DAT_02760c18,0x10);
  local_128[0] = DAT_01d4bec0;
  if (*param_9 != 0.0) {
    local_128[0] = 1.0 / *param_9;
  }
  local_128[1] = 0.0;
  local_128[2] = param_9[2];
  local_11c = param_9[3];
  local_118 = DAT_01d4bec0;
  if (param_9[4] != 0.0) {
    local_118 = 1.0 / param_9[4];
  }
  local_114 = 0;
  local_110 = param_9[6];
  local_10c = param_9[7];
  local_108 = DAT_01d4bec0;
  if (param_9[8] != 0.0) {
    local_108 = 1.0 / param_9[8];
  }
  local_104 = 0;
  local_100 = param_9[10];
  local_fc = param_9[0xb];
  local_f8 = DAT_01d4bec0;
  if (param_9[0xc] != 0.0) {
    local_f8 = 1.0 / param_9[0xc];
  }
  local_f4 = 0;
  local_f0 = param_9[0xe];
  local_ec = param_9[0xf];
  local_e8 = DAT_01d4bec0;
  if (param_9[0x10] != 0.0) {
    local_e8 = 1.0 / param_9[0x10];
  }
  local_e4 = 0;
  local_e0 = param_9[0x12];
  local_dc = param_9[0x13];
  local_d8 = DAT_01d4bec0;
  if (param_9[0x14] != 0.0) {
    local_d8 = 1.0 / param_9[0x14];
  }
  local_d4 = 0;
  local_d0 = param_9[0x16];
  local_cc = param_9[0x17];
  local_c8 = DAT_01d4bec0;
  if (param_9[0x18] != 0.0) {
    local_c8 = 1.0 / param_9[0x18];
  }
  local_c4 = 0;
  local_c0 = param_9[0x1a];
  local_bc = param_9[0x1b];
  local_b8 = DAT_01d4bec0;
  if (param_9[0x1c] != 0.0) {
    local_b8 = 1.0 / param_9[0x1c];
  }
  local_b4 = 0;
  uVar19 = NEON_ucvtf(uVar19);
  local_b0 = param_9[0x1e];
  local_ac = param_9[0x1f];
  uVar20 = NEON_ucvtf(uVar20);
  (**(code **)(**(long **)(param_2 + 0x30) + 0xb0))
            (*(long **)(param_2 + 0x30),*(undefined4 *)(param_2 + 0xfc),local_128,8);
  fVar17 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 0x58));
  fVar16 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 0x54));
  fVar16 = fVar16 / fVar17;
  local_1d0 = fVar22 / fVar16;
  fStack_1d4 = fVar21;
  if (fVar16 <= 1.0) {
    local_1d0 = fVar22;
    fStack_1d4 = fVar21 * fVar16;
  }
  local_1d8 = 2.0 / local_1d0;
  local_1d0 = -1.0 / local_1d0;
  fStack_1cc = -1.0 / fStack_1d4;
  local_1b8 = 0;
  fStack_1d4 = 2.0 / fStack_1d4;
  local_1c8 = 1.0 / local_1d8;
  local_1c4 = 1.0 / fStack_1d4;
  local_1c0 = -local_1d0 / local_1d8;
  fStack_1bc = -fStack_1cc / fStack_1d4;
  local_258[0] = param_9[1];
  local_258[1] = 0.0;
  local_258[2] = 0.0;
  local_258[3] = 0.0;
  fStack_1a4 = *(float *)(PTR_DAT_02713c78 + 4) * param_1;
  local_1a8 = *(float *)PTR_DAT_02713c78 * param_1;
  local_258[4] = param_9[5];
  local_198 = *(float *)(PTR_DAT_02713c78 + 0x10) * param_1;
  fStack_194 = *(float *)(PTR_DAT_02713c78 + 0x14) * param_1;
  fStack_184 = *(float *)(PTR_DAT_02713c78 + 0x24) * param_1;
  local_188 = *(float *)(PTR_DAT_02713c78 + 0x20) * param_1;
  local_244 = 0;
  fStack_238 = param_9[9];
  local_23c = 0;
  local_234 = 0;
  fStack_228 = param_9[0xd];
  local_22c = 0;
  local_178 = *(float *)(PTR_DAT_02713c78 + 0x30) * param_1;
  fStack_174 = *(float *)(PTR_DAT_02713c78 + 0x34) * param_1;
  fStack_164 = *(float *)(PTR_DAT_02713c78 + 0x44) * param_1;
  local_168 = *(float *)(PTR_DAT_02713c78 + 0x40) * param_1;
  local_224 = 0;
  fStack_218 = param_9[0x11];
  local_21c = 0;
  local_214 = 0;
  local_154 = *(float *)(PTR_DAT_02713c78 + 0x54) * param_1;
  local_158 = *(float *)(PTR_DAT_02713c78 + 0x50) * param_1;
  fStack_208 = param_9[0x15];
  local_20c = 0;
  local_204 = 0;
  local_144 = *(float *)(PTR_DAT_02713c78 + 100) * param_1;
  local_148 = *(float *)(PTR_DAT_02713c78 + 0x60) * param_1;
  fStack_1f8 = param_9[0x19];
  local_1fc = 0;
  local_1f4 = 0;
  fStack_1e8 = param_9[0x1d];
  local_1ec = 0;
  local_138 = *(float *)(PTR_DAT_02713c78 + 0x70) * param_1;
  local_134 = *(float *)(PTR_DAT_02713c78 + 0x74) * param_1;
  local_1e4 = 0;
  local_1dc = 0;
  local_1b0 = fVar22;
  fStack_1ac = fVar21;
  local_1a0 = fVar15;
  fStack_19c = fVar15;
  local_190 = fVar15;
  fStack_18c = fVar15;
  local_180 = fVar15;
  fStack_17c = fVar15;
  local_170 = fVar15;
  fStack_16c = fVar15;
  local_160 = fVar15;
  local_15c = fVar15;
  local_150 = fVar15;
  local_14c = fVar15;
  local_140 = fVar15;
  local_13c = fVar15;
  local_130 = fVar15;
  local_12c = fVar15;
  (**(code **)(**(long **)(param_2 + 0x30) + 0xb0))
            (*(long **)(param_2 + 0x30),*(undefined4 *)(param_2 + 0xf8),local_258,0x13);
  (**(code **)(**(long **)(param_2 + 0x30) + 0xb0))
            (*(long **)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x100),param_10,8);
  lVar8 = param_3;
  do {
    lVar9 = lVar8;
    lVar8 = *(long *)(lVar9 + 0x120);
  } while (lVar8 != 0);
  (**(code **)(**(long **)(param_2 + 0x30) + 0xd0))
            (*(long **)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x40),
             *(undefined8 *)(lVar9 + 0xa8));
  lVar8 = param_4;
  do {
    lVar9 = lVar8;
    lVar8 = *(long *)(lVar9 + 0x120);
  } while (lVar8 != 0);
  (**(code **)(**(long **)(param_2 + 0x30) + 0xd0))
            (*(long **)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x44),
             *(undefined8 *)(lVar9 + 0xa8));
  lVar8 = param_5;
  do {
    lVar9 = lVar8;
    lVar8 = *(long *)(lVar9 + 0x120);
  } while (lVar8 != 0);
  (**(code **)(**(long **)(param_2 + 0x30) + 0xd0))
            (*(long **)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x48),
             *(undefined8 *)(lVar9 + 0xa8));
  lVar8 = param_6;
  do {
    lVar9 = lVar8;
    lVar8 = *(long *)(lVar9 + 0x120);
  } while (lVar8 != 0);
  (**(code **)(**(long **)(param_2 + 0x30) + 0xd0))
            (*(long **)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x4c),
             *(undefined8 *)(lVar9 + 0xa8));
  (**(code **)(**(long **)(param_2 + 0x30) + 0xd0))
            (*(long **)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x50),param_7);
  do {
    lVar8 = param_3;
    param_3 = *(long *)(lVar8 + 0x120);
  } while (param_3 != 0);
  plVar13 = *(long **)(lVar8 + 0xa8);
  do {
    lVar8 = param_4;
    param_4 = *(long *)(lVar8 + 0x120);
  } while (param_4 != 0);
  plVar12 = *(long **)(lVar8 + 0xa8);
  do {
    lVar8 = param_5;
    param_5 = *(long *)(lVar8 + 0x120);
  } while (param_5 != 0);
  plVar11 = *(long **)(lVar8 + 0xa8);
  do {
    lVar8 = param_6;
    param_6 = *(long *)(lVar8 + 0x120);
  } while (param_6 != 0);
  plVar10 = *(long **)(lVar8 + 0xa8);
  uVar2 = (**(code **)(*plVar13 + 0x80))(plVar13);
  (**(code **)(*plVar13 + 0x78))(plVar13,2);
  uVar3 = (**(code **)(*plVar12 + 0x80))(plVar12);
  (**(code **)(*plVar12 + 0x78))(plVar12,2);
  uVar4 = (**(code **)(*plVar11 + 0x80))(plVar11);
  (**(code **)(*plVar11 + 0x78))(plVar11,2);
  uVar5 = (**(code **)(*plVar10 + 0x80))(plVar10);
  (**(code **)(*plVar10 + 0x78))(plVar10,2);
  uVar6 = (**(code **)(*param_7 + 0x80))(param_7);
  (**(code **)(*param_7 + 0x78))(param_7,2);
  uVar19 = FUN_00571d00(0,0,uVar19,uVar20,0,0,fVar22,fVar21,param_2,param_12 | 0x10000);
  (**(code **)(*plVar13 + 0x78))(plVar13,uVar2);
  (**(code **)(*plVar12 + 0x78))(plVar12,uVar3);
  (**(code **)(*plVar11 + 0x78))(plVar11,uVar4);
  (**(code **)(*plVar10 + 0x78))(plVar10,uVar5);
  (**(code **)(*param_7 + 0x78))(param_7,uVar6);
  return uVar19;
}


