/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00161490; name: FUN_00161490
 */


void FUN_00161490(float param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6,long param_7)

{
  ushort uVar1;
  undefined8 *puVar2;
  float fVar3;
  uint *puVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
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
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  fVar3 = DAT_01d4c1d0;
  uVar1 = *(ushort *)(param_2 + 8);
  if (1 < (ulong)uVar1) {
    puVar4 = (uint *)(param_4 + 0x58);
    pfVar5 = (float *)(param_6 + 0x98);
    pfVar6 = (float *)(param_2 + 0xb8);
    uVar8 = 1;
    puVar7 = (undefined8 *)(param_7 + 0x50);
    do {
      lVar9 = param_2 + 0x80 + (ulong)*puVar4 * 0x20;
      fVar12 = pfVar6[-2];
      fVar15 = pfVar6[-1];
      fVar10 = *pfVar6;
      fVar23 = *(float *)(lVar9 + 0x10);
      fVar26 = *(float *)(lVar9 + 0x14);
      fVar18 = *(float *)(lVar9 + 0x18);
      lVar9 = *(long *)(puVar4 + -2);
      if (*(char *)(lVar9 + 0x79) == '\0') {
        fVar30 = pfVar5[-3];
        fVar34 = pfVar5[-2];
        fVar24 = *(float *)(lVar9 + 0x38);
        fVar33 = *(float *)(lVar9 + 0x3c);
        fVar21 = pfVar5[-1];
        fVar32 = *pfVar5;
        fVar31 = *(float *)(lVar9 + 0x40);
        fVar28 = *(float *)(lVar9 + 0x44);
        fVar17 = ((fVar32 * fVar24 - fVar28 * fVar30) - fVar33 * fVar21) + fVar31 * fVar34;
        fVar20 = ((fVar32 * fVar33 - fVar28 * fVar34) - fVar31 * fVar30) + fVar24 * fVar21;
        fVar14 = ((fVar32 * fVar31 - fVar28 * fVar21) - fVar24 * fVar34) + fVar33 * fVar30;
        fVar29 = fVar17 * fVar17 + fVar20 * fVar20 + fVar14 * fVar14;
        fVar11 = sqrtf(fVar29);
        fVar16 = 0.0;
        fVar19 = 0.0;
        fVar13 = 0.0;
        if (fVar3 <= fVar11) {
          fVar13 = fVar32 * fVar28 + fVar24 * fVar30 + fVar33 * fVar34 + fVar31 * fVar21;
          if (fVar13 < 0.0) {
            fVar11 = -fVar11;
            fVar13 = -fVar13;
          }
          fVar19 = atan2f(fVar11,fVar13);
          fVar13 = 0.0;
          fVar16 = 0.0;
          fVar11 = 0.0;
          if (0.0 < fVar29) {
            fVar11 = sqrtf(fVar29);
            fVar11 = 1.0 / fVar11;
            fVar13 = fVar17 * fVar11 + fVar17 * fVar11;
            fVar16 = fVar20 * fVar11 + fVar20 * fVar11;
            fVar11 = fVar14 * fVar11 + fVar14 * fVar11;
          }
          fVar13 = fVar19 * fVar13;
          fVar16 = fVar19 * fVar16;
          fVar19 = fVar19 * fVar11;
        }
      }
      else {
        fVar13 = *(float *)(lVar9 + 0x38);
        fVar16 = *(float *)(lVar9 + 0x3c);
        fVar19 = *(float *)(lVar9 + 0x40);
      }
      fVar13 = fVar13 + fVar13;
      fVar11 = pfVar5[-0xf];
      fVar14 = pfVar5[-0xe];
      fVar16 = fVar16 + fVar16;
      fVar19 = fVar19 + fVar19;
      fVar17 = fVar14 * fVar14 + -0.5;
      fVar20 = pfVar5[-0x11];
      fVar24 = pfVar5[-0x10];
      pfVar5 = pfVar5 + 0x15;
      fVar31 = fVar13 * fVar20 + fVar16 * fVar24 + fVar19 * fVar11;
      fVar33 = *(float *)(lVar9 + 0x54);
      fVar30 = *(float *)(lVar9 + 0x4c) + *(float *)(lVar9 + 0x4c);
      fVar29 = *(float *)(lVar9 + 0x48) + *(float *)(lVar9 + 0x48);
      fVar32 = *(float *)(lVar9 + 0x50) + *(float *)(lVar9 + 0x50);
      fVar34 = fVar20 * fVar29 + fVar24 * fVar30 + fVar11 * fVar32;
      fVar28 = *(float *)(lVar9 + 0x58);
      fVar21 = 1.0 / *(float *)(lVar9 + 100);
      uVar25 = puVar7[-4];
      uVar27 = puVar7[-2];
      fVar12 = fVar21 * (fVar33 * (fVar20 * fVar31 +
                                  fVar13 * fVar17 + fVar14 * (fVar19 * fVar24 - fVar16 * fVar11)) +
                        fVar28 * ((fVar20 * fVar34 +
                                  fVar17 * fVar29 + fVar14 * (fVar24 * fVar32 - fVar11 * fVar30)) -
                                 (fVar12 - fVar23))) * param_1;
      fVar15 = fVar21 * (fVar33 * (fVar24 * fVar31 +
                                  fVar16 * fVar17 + fVar14 * (fVar13 * fVar11 - fVar19 * fVar20)) +
                        fVar28 * ((fVar24 * fVar34 +
                                  fVar17 * fVar30 + fVar14 * (fVar11 * fVar29 - fVar20 * fVar32)) -
                                 (fVar15 - fVar26))) * param_1;
      fVar21 = fVar21 * (fVar33 * (fVar19 * fVar17 + fVar14 * (fVar16 * fVar20 - fVar13 * fVar24) +
                                  fVar11 * fVar31) +
                        fVar28 * ((fVar17 * fVar32 + fVar14 * (fVar20 * fVar30 - fVar24 * fVar29) +
                                  fVar11 * fVar34) - (fVar10 - fVar18))) * param_1;
      puVar4 = puVar4 + 0xc;
      pfVar6 = pfVar6 + 8;
      uVar22 = *puVar7;
      puVar2 = (undefined8 *)(param_3 + uVar8 * 0x10);
      puVar2[1] = (ulong)(uint)((float)puVar7[1] * fVar21 +
                               (float)puVar7[-3] * fVar12 + (float)puVar7[-1] * fVar15);
      *puVar2 = CONCAT44((float)((ulong)uVar22 >> 0x20) * fVar21 +
                         (float)((ulong)uVar25 >> 0x20) * fVar12 +
                         (float)((ulong)uVar27 >> 0x20) * fVar15,
                         (float)uVar22 * fVar21 + (float)uVar25 * fVar12 + (float)uVar27 * fVar15);
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 6;
    } while (uVar8 < uVar1);
  }
  return;
}


