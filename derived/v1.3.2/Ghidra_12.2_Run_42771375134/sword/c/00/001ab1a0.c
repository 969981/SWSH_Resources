/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ab1a0; name: FUN_001ab1a0
 */


void FUN_001ab1a0(float param_1,long param_2,long param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  float *pfVar16;
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
  
  fVar18 = *(float *)(param_2 + 0x88);
  fVar20 = *(float *)(param_2 + 0x8c);
  fVar19 = *(float *)(param_2 + 0x90);
  fVar23 = *(float *)(param_2 + 0x78);
  fVar21 = *(float *)(param_2 + 0x7c);
  fVar25 = *(float *)(param_2 + 0x80);
  fVar22 = DAT_01d4c18c;
  fVar26 = DAT_01d4c5a8;
  fVar17 = DAT_01d4c5a8;
  fVar24 = DAT_01d4c5a8;
  if (param_4 == 0) {
    bVar5 = false;
    uVar15 = 0;
    uVar13 = 0;
    uVar11 = 0;
  }
  else {
    uVar15 = 0;
    bVar5 = false;
    pfVar16 = (float *)(param_3 + 8);
    uVar12 = 0;
    uVar10 = 0;
    uVar9 = 0;
    do {
      fVar27 = pfVar16[-2];
      fVar29 = pfVar16[-1];
      fVar31 = *pfVar16;
      fVar28 = (fVar18 - fVar23) * fVar27 + (fVar20 - fVar21) * fVar29 + (fVar19 - fVar25) * fVar31;
      fVar30 = pfVar16[1] + fVar18 * fVar27 + fVar20 * fVar29 + fVar19 * fVar31;
      fVar29 = pfVar16[1] + fVar23 * fVar27 + fVar21 * fVar29 + fVar25 * fVar31;
      fVar27 = -fVar29 / fVar28;
      bVar6 = 0.0 < fVar26;
      uVar14 = (uint)uVar15;
      uVar2 = uVar14;
      if (fVar29 <= fVar17) {
        uVar2 = uVar12;
        fVar29 = fVar17;
      }
      fVar17 = fVar29;
      uVar3 = uVar14;
      fVar29 = fVar30;
      if (fVar30 <= fVar26) {
        uVar3 = uVar10;
        fVar29 = fVar26;
      }
      fVar26 = fVar29;
      bVar5 = (bool)(bVar5 | (bVar6 && 0.0 < fVar30));
      fVar29 = fVar27;
      if (0.0 <= fVar28 || fVar27 <= fVar24) {
        uVar14 = uVar9;
        fVar29 = fVar24;
      }
      bVar6 = false;
      bVar7 = true;
      bVar8 = false;
      if (fVar27 < fVar22) {
        bVar6 = false;
        bVar7 = false;
        bVar8 = true;
        if (!NAN(fVar28)) {
          bVar6 = fVar28 < 0.0;
          bVar7 = fVar28 == 0.0;
          bVar8 = false;
        }
      }
      if (bVar7 || bVar6 != bVar8) {
        fVar27 = fVar22;
      }
      fVar22 = fVar27;
      fVar24 = DAT_01d4c18c;
      if (fVar30 <= 0.0 || fVar28 != 0.0) {
        fVar24 = fVar29;
      }
      uVar15 = uVar15 + 1;
      pfVar16 = pfVar16 + 4;
      uVar12 = uVar2;
      uVar10 = uVar3;
      uVar9 = uVar14;
    } while (param_4 != uVar15);
    uVar13 = (ulong)uVar2;
    uVar11 = (ulong)uVar3;
    uVar15 = (ulong)uVar14;
  }
  fVar27 = *(float *)(param_2 + 0x5c);
  if (fVar17 <= 0.0) {
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 8;
    pfVar16 = (float *)(param_3 + uVar13 * 0x10);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    *(float *)(param_2 + 0xa0) = *pfVar16;
    *(float *)(param_2 + 0xa4) = pfVar16[1];
    *(float *)(param_2 + 0xa8) = pfVar16[2];
    fVar27 = fVar27 - fVar17;
    fVar17 = pfVar16[1];
    fVar26 = pfVar16[2];
    *(float *)(param_2 + 0xb8) = fVar23 + fVar27 * *pfVar16;
    *(float *)(param_2 + 0xbc) = fVar21 + fVar27 * fVar17;
    *(float *)(param_2 + 0xc0) = fVar25 + fVar27 * fVar26;
    return;
  }
  if (((fVar24 < 0.0) || (fVar22 < fVar24)) || (*(float *)(param_2 + 0x2c) <= fVar24)) {
    uVar12 = *(uint *)(param_2 + 0x84);
    if ((uVar12 >> 1 & 1) != 0) {
      return;
    }
    if ((0.0 < fVar26 && fVar26 <= param_1) && !bVar5) {
      pfVar16 = (float *)(param_3 + uVar11 * 0x10);
      *(float *)(param_2 + 0xa0) = *pfVar16;
      *(float *)(param_2 + 0xa4) = pfVar16[1];
      *(float *)(param_2 + 0xa8) = pfVar16[2];
      fVar17 = fVar27 - fVar26;
      fVar21 = pfVar16[2];
      fVar22 = *pfVar16;
      fVar24 = pfVar16[1];
      uVar12 = uVar12 | 0x20;
      *(uint *)(param_2 + 0x84) = uVar12;
      *(float *)(param_2 + 0xbc) = fVar20 + fVar17 * fVar24;
      *(float *)(param_2 + 0xb8) = fVar18 + fVar17 * fVar22;
      *(float *)(param_2 + 0xc0) = fVar19 + fVar17 * fVar21;
    }
    if (fVar27 < fVar26) {
      return;
    }
    pfVar16 = (float *)(param_3 + uVar11 * 0x10);
    *(float *)(param_2 + 0xa0) = *pfVar16;
    *(float *)(param_2 + 0xa4) = pfVar16[1];
    *(float *)(param_2 + 0xa8) = pfVar16[2];
    fVar27 = fVar27 - fVar26;
    fVar26 = pfVar16[2];
    fVar17 = *pfVar16;
    uVar12 = uVar12 | 0x10;
    *(float *)(param_2 + 0xbc) = fVar20 + fVar27 * pfVar16[1];
    *(float *)(param_2 + 0xb8) = fVar18 + fVar27 * fVar17;
    *(float *)(param_2 + 0xc0) = fVar19 + fVar27 * fVar26;
  }
  else {
    puVar1 = (undefined4 *)(param_3 + uVar15 * 0x10);
    *(undefined4 *)(param_2 + 0xa0) = *puVar1;
    *(undefined4 *)(param_2 + 0xa4) = puVar1[1];
    uVar4 = puVar1[2];
    *(float *)(param_2 + 0xb8) = fVar23;
    *(float *)(param_2 + 0xbc) = fVar21;
    *(float *)(param_2 + 0xc0) = fVar25;
    *(float *)(param_2 + 0x2c) = fVar24;
    *(undefined4 *)(param_2 + 0xa8) = uVar4;
    uVar12 = *(uint *)(param_2 + 0x84) | 8;
  }
  *(uint *)(param_2 + 0x84) = uVar12;
  return;
}


