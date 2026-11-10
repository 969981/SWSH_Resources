/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00297090; name: FUN_00297090
 */


byte FUN_00297090(float param_1,uint param_2,long param_3,float *param_4,float *param_5,long param_6
                 ,ushort *param_7,byte param_8,uint *param_9)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  byte bVar13;
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
  float local_144;
  float local_140;
  float local_13c;
  float local_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  
  if (param_2 == 0) {
    return 0;
  }
  fVar23 = *param_4;
  fVar25 = param_4[1];
  uVar3 = *param_7;
  fVar35 = param_4[2];
  fVar24 = param_4[3];
  fVar28 = param_4[6];
  fVar37 = param_4[7];
  fVar21 = param_5[2];
  fVar14 = *param_5;
  fVar17 = param_5[1];
  fVar43 = param_4[4];
  fVar39 = param_4[5];
  fVar41 = param_4[8];
  fVar26 = param_4[9];
  local_b0 = fVar23 * fVar14 + fVar25 * fVar17 + fVar35 * fVar21;
  fVar31 = fVar24 * fVar14 + fVar43 * fVar17 + fVar39 * fVar21;
  fVar21 = fVar28 * fVar14 + fVar37 * fVar17 + fVar41 * fVar21;
  local_c8 = 0.0;
  fVar17 = param_4[10];
  fVar14 = param_4[0xb];
  local_d0 = 0.0;
  local_c0 = local_b0 * param_1;
  fStack_bc = fVar31 * param_1;
  local_b8 = fVar21 * param_1;
  *(float *)(param_6 + 0x30) = param_1;
  if (local_b0 != 0.0) {
    local_d0 = 1.0 / local_c0;
  }
  fVar26 = -fVar26;
  fStack_cc = 0.0;
  if (fVar31 != 0.0) {
    fStack_cc = 1.0 / fStack_bc;
  }
  if (fVar21 != 0.0) {
    local_c8 = 1.0 / local_b8;
  }
  local_ac = fVar31;
  local_a8 = fVar21;
  fVar15 = fabsf(local_b0);
  pfVar12 = param_4 + 0xc;
  fVar18 = *pfVar12;
  fVar31 = fabsf(fVar31);
  fVar19 = param_4[0xd];
  fVar21 = fabsf(fVar21);
  fVar16 = *param_5;
  fVar20 = param_5[1];
  fVar22 = param_5[2];
  fVar33 = param_4[9] * fVar16 + param_4[10] * fVar20 + param_4[0xb] * fVar22;
  if (param_9 == (uint *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *param_9;
  }
  fVar34 = (fVar23 * fVar26 - fVar25 * fVar17) - fVar35 * fVar14;
  fVar30 = 1.0;
  fVar32 = (fVar24 * fVar26 - fVar43 * fVar17) - fVar39 * fVar14;
  fVar14 = (fVar28 * fVar26 - fVar37 * fVar17) - fVar41 * fVar14;
  fVar17 = fVar15 * fVar18 + fVar31 * fVar19 + fVar21 * param_4[0xe] + DAT_01d4bd94;
  local_144 = 0.0;
  local_140 = 0.0;
  local_13c = 0.0;
  fVar21 = fVar33 - fVar17;
  bVar13 = 0;
  uVar10 = 0;
  do {
    uVar1 = 0;
    if (uVar11 != uVar10) {
      uVar1 = uVar10;
    }
    uVar2 = uVar11;
    if (uVar10 != 0) {
      uVar2 = uVar1;
    }
    pfVar9 = (float *)(param_3 + (ulong)uVar2 * 0x24);
    fVar40 = *pfVar9;
    fVar38 = pfVar9[1];
    fVar18 = pfVar9[2];
    fVar36 = pfVar9[3];
    fVar29 = pfVar9[4];
    fVar19 = pfVar9[5];
    fVar42 = fVar40 * fVar16 + fVar38 * fVar20 + fVar18 * fVar22;
    fVar44 = fVar16 * fVar36 + fVar20 * fVar29 + fVar22 * fVar19;
    fVar27 = pfVar9[6];
    fVar15 = pfVar9[7];
    fVar31 = pfVar9[8];
    fVar26 = fVar42;
    if (fVar44 <= fVar42) {
      fVar26 = fVar44;
    }
    fVar16 = fVar16 * fVar27 + fVar20 * fVar15 + fVar22 * fVar31;
    if (fVar16 <= fVar26) {
      fVar26 = fVar16;
    }
    if (fVar26 <= fVar17 + fVar33 + fVar30 * param_1) {
      bVar6 = false;
      if ((fVar42 < fVar21) && (bVar6 = false, !NAN(fVar44) && !NAN(fVar21))) {
        bVar6 = fVar44 < fVar21;
      }
      bVar7 = false;
      if ((bVar6) && (bVar7 = false, !NAN(fVar16) && !NAN(fVar21))) {
        bVar7 = fVar16 < fVar21;
      }
      if (!bVar7) {
        local_f8 = fVar34 + fVar23 * fVar40 + fVar25 * fVar38 + fVar35 * fVar18;
        fStack_f4 = fVar32 + fVar24 * fVar40 + fVar43 * fVar38 + fVar39 * fVar18;
        local_f0 = fVar14 + fVar28 * fVar40 + fVar37 * fVar38 + fVar41 * fVar18;
        local_ec = fVar34 + fVar23 * fVar36 + fVar25 * fVar29 + fVar35 * fVar19;
        local_e0 = fVar34 + fVar23 * fVar27 + fVar25 * fVar15 + fVar35 * fVar31;
        local_e8 = fVar32 + fVar24 * fVar36 + fVar43 * fVar29 + fVar39 * fVar19;
        local_e4 = fVar14 + fVar28 * fVar36 + fVar37 * fVar29 + fVar41 * fVar19;
        local_dc = fVar32 + fVar24 * fVar27 + fVar43 * fVar15 + fVar39 * fVar31;
        local_d8 = fVar14 + fVar28 * fVar27 + fVar37 * fVar15 + fVar41 * fVar31;
        local_fc = 3.4028235e+38;
                    /* try { // try from 0029749c to 002974bb has its CatchHandler @ 002978e8 */
        iVar8 = FUN_0024d200(fVar30,&local_f8,pfVar12,&local_c0,&local_d0,&local_fc,
                             (uVar3 & 0x80) == 0 & (param_8 ^ 1));
        if ((iVar8 != 0) && (local_fc < fVar30)) {
          if (local_fc == 0.0) {
            *(uint *)(param_6 + 0x10) = uVar2;
            *(undefined2 *)(param_6 + 0x14) = 0x406;
            fVar17 = *param_5;
            fVar21 = param_5[1];
            fVar26 = param_5[2];
            *(undefined4 *)(param_6 + 0x30) = 0;
            *(float *)(param_6 + 0x24) = -fVar17;
            *(float *)(param_6 + 0x28) = -fVar21;
            *(float *)(param_6 + 0x2c) = -fVar26;
            iVar8 = 1;
            goto LAB_00297568;
          }
          *(uint *)(param_6 + 0x10) = uVar2;
          *(float *)(param_6 + 0x30) = local_fc * param_1;
          local_140 = (local_e8 - fStack_f4) * (local_d8 - local_f0) -
                      (local_e4 - local_f0) * (local_dc - fStack_f4);
          local_144 = (local_e4 - local_f0) * (local_e0 - local_f8) -
                      (local_ec - local_f8) * (local_d8 - local_f0);
          local_13c = (local_ec - local_f8) * (local_dc - fStack_f4) -
                      (local_e8 - fStack_f4) * (local_e0 - local_f8);
          bVar13 = 1;
          fVar30 = local_fc;
          if (((byte)*param_7 >> 6 & 1) != 0) {
LAB_00297560:
            iVar8 = 2;
LAB_00297568:
            bVar5 = iVar8 != 2 | bVar13;
            if (iVar8 != 2) {
              return bVar5;
            }
            if (bVar13 == 0) {
              return bVar5;
            }
            *(undefined2 *)(param_6 + 0x14) = 4;
            if ((*param_7 & 3) == 0) {
              return bVar13;
            }
            pfVar9 = (float *)(param_3 + (ulong)*(uint *)(param_6 + 0x10) * 0x24);
            fVar17 = *pfVar9;
            fVar21 = pfVar9[1];
            fVar15 = pfVar9[4];
            fVar16 = pfVar9[5];
            fVar26 = pfVar9[2];
            fVar31 = pfVar9[3];
            fStack_f4 = fVar32 + fVar24 * fVar17 + fVar43 * fVar21 + fVar39 * fVar26;
            fVar18 = pfVar9[6];
            fVar19 = pfVar9[7];
            fVar20 = pfVar9[8];
            local_f8 = fVar34 + fVar23 * fVar17 + fVar25 * fVar21 + fVar35 * fVar26;
            local_f0 = fVar14 + fVar28 * fVar17 + fVar37 * fVar21 + fVar41 * fVar26;
            local_ec = fVar34 + fVar23 * fVar31 + fVar25 * fVar15 + fVar35 * fVar16;
            local_e8 = fVar32 + fVar24 * fVar31 + fVar43 * fVar15 + fVar39 * fVar16;
            local_e4 = fVar14 + fVar28 * fVar31 + fVar37 * fVar15 + fVar41 * fVar16;
            local_e0 = fVar34 + fVar23 * fVar18 + fVar25 * fVar19 + fVar35 * fVar20;
            local_dc = fVar32 + fVar24 * fVar18 + fVar43 * fVar19 + fVar39 * fVar20;
            local_d8 = fVar14 + fVar28 * fVar18 + fVar37 * fVar19 + fVar41 * fVar20;
                    /* try { // try from 002976c0 to 002976cf has its CatchHandler @ 002978e4 */
            FUN_0024a920(*(undefined4 *)(param_6 + 0x30),param_6 + 0x18,param_6 + 0x24,pfVar12,
                         &local_b0,&local_f8);
            uVar4 = *param_7;
            if ((uVar4 >> 1 & 1) != 0) {
              fVar14 = *(float *)(param_6 + 0x24);
              fVar17 = *(float *)(param_6 + 0x28);
              fVar21 = *(float *)(param_6 + 0x2c);
                    /* try { // try from 00297700 to 00297703 has its CatchHandler @ 002978e0 */
              fVar23 = sqrtf(fVar14 * fVar14 + fVar17 * fVar17 + fVar21 * fVar21);
              if (0.0 < fVar23) {
                fVar23 = 1.0 / fVar23;
                fVar14 = fVar23 * fVar14;
                fVar17 = fVar23 * fVar17;
                fVar21 = fVar23 * fVar21;
              }
              if ((((uVar3 >> 7 & 1) != 0) && ((param_8 & 1) == 0)) &&
                 (0.0 < local_140 * local_b0 + local_144 * local_ac + local_13c * local_a8)) {
                fVar14 = -fVar14;
                fVar17 = -fVar17;
                fVar21 = -fVar21;
              }
              fVar23 = *param_4;
              fVar24 = param_4[1];
              fVar25 = param_4[2];
              fVar26 = param_4[3];
              fVar31 = param_4[4];
              fVar37 = param_4[5];
              fVar39 = param_4[8];
              fVar28 = param_4[6];
              fVar35 = param_4[7];
              *(ushort *)(param_6 + 0x14) = *(ushort *)(param_6 + 0x14) | 2;
              *(float *)(param_6 + 0x24) = fVar23 * fVar14 + fVar26 * fVar17 + fVar28 * fVar21;
              *(float *)(param_6 + 0x28) = fVar24 * fVar14 + fVar31 * fVar17 + fVar35 * fVar21;
              *(float *)(param_6 + 0x2c) = fVar25 * fVar14 + fVar37 * fVar17 + fVar39 * fVar21;
              uVar4 = *param_7;
            }
            if ((uVar4 & 1) == 0) {
              return bVar13;
            }
            fVar14 = *param_4;
            fVar17 = param_4[1];
            fVar41 = *(float *)(param_6 + 0x20);
            fVar21 = *(float *)(param_6 + 0x18);
            fVar23 = *(float *)(param_6 + 0x1c);
            fVar25 = param_4[2];
            fVar28 = param_4[3];
            fVar31 = param_4[4];
            fVar37 = param_4[5];
            fVar43 = param_4[6];
            fVar15 = param_4[7];
            fVar35 = param_4[8];
            fVar39 = param_4[9];
            fVar24 = param_4[10];
            fVar26 = param_4[0xb];
            *(ushort *)(param_6 + 0x14) = *(ushort *)(param_6 + 0x14) | 1;
            *(float *)(param_6 + 0x18) =
                 fVar21 * fVar14 + fVar23 * fVar28 + fVar41 * fVar43 + fVar39;
            *(float *)(param_6 + 0x1c) =
                 fVar21 * fVar17 + fVar23 * fVar31 + fVar41 * fVar15 + fVar24;
            *(float *)(param_6 + 0x20) =
                 fVar21 * fVar25 + fVar23 * fVar37 + fVar41 * fVar35 + fVar26;
            return bVar13;
          }
        }
      }
    }
    uVar10 = uVar10 + 1;
    if (param_2 <= uVar10) goto LAB_00297560;
    fVar16 = *param_5;
    fVar20 = param_5[1];
    fVar22 = param_5[2];
  } while( true );
}


