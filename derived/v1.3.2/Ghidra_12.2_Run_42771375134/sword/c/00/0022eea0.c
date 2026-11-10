/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0022eea0; name: FUN_0022eea0
 */


/* WARNING: Removing unreachable block (ram,0x0022ef34) */

void FUN_0022eea0(long param_1,uint param_2,uint param_3,float *param_4,long param_5,byte *param_6)

{
  long lVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  uint uVar16;
  float *pfVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
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
  float local_f0 [24];
  
  uVar9 = *(int *)(param_1 + 0x1000) - param_2;
  if (uVar9 < 5) {
    return;
  }
  lVar1 = param_1 + (ulong)param_2 * 0x40;
  if (uVar9 != param_3) {
    fVar24 = cosf(0.0);
    local_f0[1] = sinf(0.0);
    fVar23 = DAT_01d4bba8;
    local_f0[2] = 0.0;
    local_f0[0] = fVar24;
    fVar24 = cosf(DAT_01d4bba8);
    local_f0[4] = sinf(fVar23);
    fVar23 = DAT_01d4c058;
    local_f0[5] = 0.0;
    local_f0[3] = fVar24;
    fVar24 = cosf(DAT_01d4c058);
    local_f0[7] = sinf(fVar23);
    fVar23 = DAT_01d4bd90;
    local_f0[8] = 0.0;
    local_f0[6] = fVar24;
    fVar24 = cosf(DAT_01d4bd90);
    local_f0[10] = sinf(fVar23);
    fVar23 = DAT_01d4c05c;
    local_f0[0xb] = 0.0;
    local_f0[9] = fVar24;
    fVar24 = cosf(DAT_01d4c05c);
    local_f0[0xd] = sinf(fVar23);
    fVar23 = DAT_01d4bb40;
    local_f0[0xe] = 0.0;
    local_f0[0xc] = fVar24;
    fVar24 = cosf(DAT_01d4bb40);
    local_f0[0x10] = sinf(fVar23);
    fVar23 = DAT_01d4be5c;
    local_f0[0x11] = 0.0;
    local_f0[0xf] = fVar24;
    fVar24 = cosf(DAT_01d4be5c);
    local_f0[0x13] = sinf(fVar23);
    fVar23 = DAT_01d4c3dc;
    local_f0[0x14] = 0.0;
    local_f0[0x12] = fVar24;
    fVar25 = cosf(DAT_01d4c3dc);
    local_f0[0x16] = sinf(fVar23);
    local_f0[0x15] = fVar25;
    uVar6 = (ulong)uVar9;
    uVar20 = uVar6;
    pbVar14 = param_6;
    fVar23 = DAT_01d4c18c;
    fVar24 = DAT_01d4c18c;
    fVar35 = DAT_01d4c18c;
    fVar27 = DAT_01d4c18c;
    fVar31 = DAT_01d4c18c;
    fVar32 = DAT_01d4c18c;
    fVar33 = DAT_01d4c18c;
    fVar30 = DAT_01d4c18c;
    fVar34 = DAT_01d4c5a8;
    fVar26 = DAT_01d4c5a8;
    fVar41 = DAT_01d4c5a8;
    fVar40 = DAT_01d4c5a8;
    fVar39 = DAT_01d4c5a8;
    fVar38 = DAT_01d4c5a8;
    fVar37 = DAT_01d4c5a8;
    fVar36 = DAT_01d4c5a8;
    do {
      pfVar17 = (float *)(param_5 + (ulong)*pbVar14 * 0xc);
      fVar28 = *pfVar17 * *param_4 + pfVar17[1] * param_4[3] + pfVar17[2] * param_4[6];
      fVar42 = *pfVar17 * param_4[1] + pfVar17[1] * param_4[4] + pfVar17[2] * param_4[7];
      fVar43 = fVar28 * local_f0[0] + fVar42 * local_f0[1];
      if (fVar43 <= fVar23) {
        fVar23 = fVar43;
      }
      if (fVar34 <= fVar43) {
        fVar34 = fVar43;
      }
      fVar43 = fVar28 * local_f0[3] + fVar42 * local_f0[4];
      if (fVar43 <= fVar33) {
        fVar33 = fVar43;
      }
      if (fVar36 <= fVar43) {
        fVar36 = fVar43;
      }
      fVar43 = fVar28 * local_f0[6] + fVar42 * local_f0[7];
      if (fVar43 <= fVar32) {
        fVar32 = fVar43;
      }
      fVar29 = fVar28 * local_f0[9] + fVar42 * local_f0[10];
      if (fVar37 <= fVar43) {
        fVar37 = fVar43;
      }
      if (fVar29 <= fVar30) {
        fVar30 = fVar29;
      }
      if (fVar38 <= fVar29) {
        fVar38 = fVar29;
      }
      fVar43 = fVar28 * local_f0[0xc] + fVar42 * local_f0[0xd];
      if (fVar43 <= fVar31) {
        fVar31 = fVar43;
      }
      fVar29 = fVar28 * local_f0[0xf] + fVar42 * local_f0[0x10];
      if (fVar39 <= fVar43) {
        fVar39 = fVar43;
      }
      fVar43 = fVar28 * local_f0[0x12] + fVar42 * local_f0[0x13];
      if (fVar29 <= fVar27) {
        fVar27 = fVar29;
      }
      if (fVar40 <= fVar29) {
        fVar40 = fVar29;
      }
      if (fVar43 <= fVar35) {
        fVar35 = fVar43;
      }
      if (fVar41 <= fVar43) {
        fVar41 = fVar43;
      }
      fVar28 = fVar28 * fVar25 + fVar42 * local_f0[0x16];
      if (fVar28 <= fVar24) {
        fVar24 = fVar28;
      }
      if (fVar26 <= fVar28) {
        fVar26 = fVar28;
      }
      uVar20 = uVar20 - 1;
      pbVar14 = pbVar14 + 1;
    } while (uVar20 != 0);
    fVar34 = fVar34 - fVar23;
    fVar36 = fVar36 - fVar33;
    fVar23 = fVar36;
    if (fVar36 <= fVar34) {
      fVar23 = fVar34;
    }
    fVar37 = fVar37 - fVar32;
    fVar32 = fVar37;
    if (fVar37 <= fVar23) {
      fVar32 = fVar23;
    }
    fVar38 = fVar38 - fVar30;
    uVar20 = 2;
    if (fVar37 <= fVar23) {
      uVar20 = (ulong)(fVar34 < fVar36);
    }
    fVar23 = fVar38;
    if (fVar38 <= fVar32) {
      fVar23 = fVar32;
    }
    fVar39 = fVar39 - fVar31;
    uVar12 = 3;
    if (fVar38 <= fVar32) {
      uVar12 = uVar20;
    }
    fVar31 = fVar39;
    if (fVar39 <= fVar23) {
      fVar31 = fVar23;
    }
    fVar40 = fVar40 - fVar27;
    uVar20 = 4;
    if (fVar39 <= fVar23) {
      uVar20 = uVar12;
    }
    fVar23 = fVar40;
    if (fVar40 <= fVar31) {
      fVar23 = fVar31;
    }
    fVar41 = fVar41 - fVar35;
    uVar12 = 5;
    if (fVar40 <= fVar31) {
      uVar12 = uVar20;
    }
    fVar35 = fVar41;
    if (fVar41 <= fVar23) {
      fVar35 = fVar23;
    }
    uVar20 = 6;
    if (fVar41 <= fVar23) {
      uVar20 = uVar12;
    }
    uVar12 = 7;
    if (fVar26 - fVar24 <= fVar35) {
      uVar12 = uVar20;
    }
    uVar20 = 0;
    fVar23 = DAT_01d4c18c;
    fVar35 = DAT_01d4c18c;
    uVar9 = 0;
    fVar24 = DAT_01d4c5a8;
    fVar27 = DAT_01d4c5a8;
    uVar16 = 0;
    uVar13 = 0;
    uVar11 = 0;
    do {
      pfVar17 = (float *)(param_5 + (ulong)param_6[uVar20] * 0xc);
      fVar33 = *pfVar17 * *param_4 + pfVar17[1] * param_4[3] + pfVar17[2] * param_4[6];
      fVar31 = *pfVar17 * param_4[1] + pfVar17[1] * param_4[4] + pfVar17[2] * param_4[7];
      fVar32 = local_f0[uVar12 * 3] * fVar33 + local_f0[uVar12 * 3 + 1] * fVar31;
      fVar33 = local_f0[uVar12 * 3] * fVar31 - local_f0[uVar12 * 3 + 1] * fVar33;
      uVar18 = (uint)uVar20;
      uVar3 = uVar18;
      fVar31 = fVar32;
      if (fVar23 <= fVar32) {
        uVar3 = uVar9;
        fVar31 = fVar23;
      }
      fVar23 = fVar31;
      uVar4 = uVar18;
      if (fVar32 <= fVar24) {
        uVar4 = uVar16;
        fVar32 = fVar24;
      }
      fVar24 = fVar32;
      uVar5 = uVar18;
      fVar31 = fVar33;
      if (fVar35 <= fVar33) {
        uVar5 = uVar13;
        fVar31 = fVar35;
      }
      fVar35 = fVar31;
      if (fVar33 <= fVar27) {
        uVar18 = uVar11;
        fVar33 = fVar27;
      }
      fVar27 = fVar33;
      uVar20 = uVar20 + 1;
      uVar9 = uVar3;
      uVar16 = uVar4;
      uVar13 = uVar5;
      uVar11 = uVar18;
    } while (uVar6 != uVar20);
    if (uVar4 == uVar3) {
      uVar4 = 0xffffffff;
    }
    uVar20 = (ulong)uVar4;
    if (uVar5 == uVar4 || uVar5 == uVar3) {
      uVar5 = 0xffffffff;
    }
    uVar8 = (ulong)uVar5;
    uVar10 = (ulong)uVar3;
    uVar12 = 0xffffffff;
    if ((uVar18 != uVar5 && uVar18 != uVar4) && uVar18 != uVar3) {
      uVar12 = (ulong)uVar18;
    }
    puVar15 = (undefined4 *)(lVar1 + 0x18);
    uVar21 = 0;
    do {
      if ((((uVar12 == 0) || (uVar8 == 0)) || (uVar10 == 0)) || (uVar22 = uVar21, uVar20 == 0)) {
        uVar22 = (ulong)((int)uVar21 + 1);
        puVar2 = (undefined4 *)(lVar1 + uVar21 * 0x40);
        *puVar2 = puVar15[-6];
        puVar2[1] = puVar15[-5];
        puVar2[2] = puVar15[-4];
        puVar2[3] = puVar15[-3];
        puVar2[4] = puVar15[-2];
        puVar2[5] = puVar15[-1];
        puVar2[6] = *puVar15;
        puVar2[7] = puVar15[1];
        puVar2[8] = puVar15[2];
        puVar2[9] = puVar15[3];
        puVar2[10] = puVar15[4];
        puVar2[0xf] = puVar15[9];
        *(undefined8 *)(puVar2 + 0xd) = *(undefined8 *)(puVar15 + 7);
        *(undefined8 *)(puVar2 + 0xb) = *(undefined8 *)(puVar15 + 5);
      }
      uVar10 = uVar10 - 1;
      uVar6 = uVar6 - 1;
      uVar12 = uVar12 - 1;
      uVar8 = uVar8 - 1;
      uVar20 = uVar20 - 1;
      puVar15 = puVar15 + 0x10;
      uVar21 = uVar22;
    } while (uVar6 != 0);
    iVar19 = (int)uVar22;
    goto LAB_0022f758;
  }
  if (param_3 < 2) {
    fVar23 = *(float *)(lVar1 + 0xc);
    uVar9 = 0;
  }
  else {
    fVar23 = *(float *)(lVar1 + 0xc);
    fVar24 = fVar23;
    if (param_3 == 2) {
      uVar9 = 0;
      lVar7 = 1;
    }
    else {
      lVar7 = 1;
      pfVar17 = (float *)(lVar1 + 0x8c);
      uVar16 = 0;
      do {
        fVar27 = pfVar17[-0x10];
        fVar35 = fVar27;
        if (fVar24 <= fVar27) {
          fVar35 = fVar24;
        }
        uVar9 = (uint)lVar7;
        if (fVar24 <= fVar27) {
          uVar9 = uVar16;
        }
        if (fVar35 <= *pfVar17) {
          fVar24 = fVar35;
        }
        else {
          uVar9 = (uint)lVar7 + 1;
          fVar24 = *pfVar17;
        }
        lVar7 = lVar7 + 2;
        pfVar17 = pfVar17 + 0x20;
        uVar16 = uVar9;
      } while ((ulong)param_3 - (ulong)(~param_3 & 1) != lVar7);
      if ((~param_3 & 1) == 0) goto LAB_0022f538;
    }
    uVar16 = (uint)lVar7;
    if (fVar24 <= *(float *)(lVar1 + lVar7 * 0x40 + 0xc)) {
      uVar16 = uVar9;
    }
    uVar9 = uVar16;
  }
LAB_0022f538:
  *(float *)(lVar1 + 0xc) = fVar23;
  uVar13 = (param_3 & 0x3ffff) >> 2 & 0x3fff;
  puVar15 = (undefined4 *)(lVar1 + (ulong)uVar13 * 0x40);
  *(undefined4 *)(lVar1 + 0x40) = *puVar15;
  *(undefined4 *)(lVar1 + 0x44) = puVar15[1];
  *(undefined4 *)(lVar1 + 0x48) = puVar15[2];
  *(undefined4 *)(lVar1 + 0x4c) = puVar15[3];
  *(undefined4 *)(lVar1 + 0x50) = puVar15[4];
  *(undefined4 *)(lVar1 + 0x54) = puVar15[5];
  *(undefined4 *)(lVar1 + 0x58) = puVar15[6];
  *(undefined4 *)(lVar1 + 0x5c) = puVar15[7];
  *(undefined4 *)(lVar1 + 0x60) = puVar15[8];
  *(undefined4 *)(lVar1 + 100) = puVar15[9];
  *(undefined4 *)(lVar1 + 0x68) = puVar15[10];
  *(undefined4 *)(lVar1 + 0x7c) = puVar15[0xf];
  *(undefined8 *)(lVar1 + 0x74) = *(undefined8 *)(puVar15 + 0xd);
  uVar11 = (param_3 & 0x3ffff) >> 1 & 0x7fff;
  uVar16 = (param_3 & 0xffff) * 0xc000 >> 0x10;
  *(undefined8 *)(lVar1 + 0x6c) = *(undefined8 *)(puVar15 + 0xb);
  puVar15 = (undefined4 *)(lVar1 + (ulong)uVar11 * 0x40);
  *(undefined4 *)(lVar1 + 0x80) = *puVar15;
  *(undefined4 *)(lVar1 + 0x84) = puVar15[1];
  *(undefined4 *)(lVar1 + 0x88) = puVar15[2];
  *(undefined4 *)(lVar1 + 0x8c) = puVar15[3];
  *(undefined4 *)(lVar1 + 0x90) = puVar15[4];
  *(undefined4 *)(lVar1 + 0x94) = puVar15[5];
  *(undefined4 *)(lVar1 + 0x98) = puVar15[6];
  *(undefined4 *)(lVar1 + 0x9c) = puVar15[7];
  *(undefined4 *)(lVar1 + 0xa0) = puVar15[8];
  *(undefined4 *)(lVar1 + 0xa4) = puVar15[9];
  *(undefined4 *)(lVar1 + 0xa8) = puVar15[10];
  *(undefined4 *)(lVar1 + 0xbc) = puVar15[0xf];
  *(undefined8 *)(lVar1 + 0xb4) = *(undefined8 *)(puVar15 + 0xd);
  *(undefined8 *)(lVar1 + 0xac) = *(undefined8 *)(puVar15 + 0xb);
  puVar15 = (undefined4 *)(lVar1 + (ulong)uVar16 * 0x40);
  *(undefined4 *)(lVar1 + 0xc0) = *puVar15;
  *(undefined4 *)(lVar1 + 0xc4) = puVar15[1];
  *(undefined4 *)(lVar1 + 200) = puVar15[2];
  *(undefined4 *)(lVar1 + 0xcc) = puVar15[3];
  *(undefined4 *)(lVar1 + 0xd0) = puVar15[4];
  *(undefined4 *)(lVar1 + 0xd4) = puVar15[5];
  *(undefined4 *)(lVar1 + 0xd8) = puVar15[6];
  *(undefined4 *)(lVar1 + 0xdc) = puVar15[7];
  *(undefined4 *)(lVar1 + 0xe0) = puVar15[8];
  *(undefined4 *)(lVar1 + 0xe4) = puVar15[9];
  *(undefined4 *)(lVar1 + 0xe8) = puVar15[10];
  *(undefined4 *)(lVar1 + 0xfc) = puVar15[0xf];
  *(undefined8 *)(lVar1 + 0xf4) = *(undefined8 *)(puVar15 + 0xd);
  *(undefined8 *)(lVar1 + 0xec) = *(undefined8 *)(puVar15 + 0xb);
  iVar19 = 4;
  if (((uVar9 != 0) && (uVar13 != uVar9)) && ((uVar11 != uVar9 && (uVar16 != uVar9)))) {
    puVar15 = (undefined4 *)(lVar1 + (ulong)uVar9 * 0x40);
    *(undefined4 *)(lVar1 + 0x100) = *puVar15;
    *(undefined4 *)(lVar1 + 0x104) = puVar15[1];
    *(undefined4 *)(lVar1 + 0x108) = puVar15[2];
    *(undefined4 *)(lVar1 + 0x10c) = puVar15[3];
    *(undefined4 *)(lVar1 + 0x110) = puVar15[4];
    *(undefined4 *)(lVar1 + 0x114) = puVar15[5];
    *(undefined4 *)(lVar1 + 0x118) = puVar15[6];
    *(undefined4 *)(lVar1 + 0x11c) = puVar15[7];
    *(undefined4 *)(lVar1 + 0x120) = puVar15[8];
    *(undefined4 *)(lVar1 + 0x124) = puVar15[9];
    *(undefined4 *)(lVar1 + 0x128) = puVar15[10];
    *(undefined4 *)(lVar1 + 0x13c) = puVar15[0xf];
    *(undefined8 *)(lVar1 + 0x134) = *(undefined8 *)(puVar15 + 0xd);
    iVar19 = 5;
    *(undefined8 *)(lVar1 + 300) = *(undefined8 *)(puVar15 + 0xb);
  }
LAB_0022f758:
  *(uint *)(param_1 + 0x1000) = iVar19 + param_2;
  return;
}


