/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f0140; name: FUN_004f0140
 */


void FUN_004f0140(long param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_54 [9];
  
  uVar7 = *(uint *)(param_2 + 0x24);
  if (0 < (int)uVar7) {
    fVar21 = *(float *)(param_1 + 0x10);
    lVar13 = 0;
    pfVar14 = (float *)(param_2 + 0x84);
    do {
      pfVar1 = pfVar14 + -5;
      pfVar8 = pfVar14 + -4;
      pfVar2 = pfVar14 + -3;
      pfVar9 = pfVar14 + -2;
      pfVar3 = pfVar14 + -1;
      fVar24 = *pfVar14;
      pfVar14 = pfVar14 + 10;
      fVar22 = (*pfVar9 - *pfVar1) * 0.5;
      fVar24 = (fVar24 - *pfVar2) * 0.5;
      fVar23 = (*pfVar3 - *pfVar8) * 0.5;
      fVar24 = fVar22 * fVar22 + fVar23 * fVar23 + fVar24 * fVar24;
      local_54[lVar13] = fVar24 * fVar21 * SQRT(fVar24);
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)uVar7);
    if (1 < (int)uVar7) {
      uVar12 = 0;
      lVar13 = param_2 + 0xac;
      uVar15 = 1;
      uVar20 = 1;
      uVar16 = 0;
      fVar21 = DAT_01d4c5a8;
      do {
        uVar6 = uVar16 + 1;
        if ((long)uVar6 < (long)(int)uVar7) {
          lVar17 = param_2 + uVar16 * 0x28;
          lVar18 = lVar13;
          uVar19 = uVar15;
          fVar24 = fVar21;
          uVar11 = uVar12;
          do {
            puVar4 = (undefined4 *)(lVar18 + -0x14);
            fVar22 = (float)NEON_fminnm(*(undefined4 *)(lVar17 + 0x74),
                                        *(undefined4 *)(lVar18 + -0x10));
            puVar5 = (undefined4 *)(lVar18 + -0xc);
            lVar18 = lVar18 + 0x28;
            fVar21 = (float)NEON_fminnm(*(undefined4 *)(lVar17 + 0x70),*puVar4);
            fVar21 = (*(float *)(lVar17 + 0x7c) - fVar21) * 0.5;
            fVar23 = (float)NEON_fminnm(*(undefined4 *)(lVar17 + 0x78),*puVar5);
            fVar22 = (*(float *)(lVar17 + 0x80) - fVar22) * 0.5;
            fVar23 = (*(float *)(lVar17 + 0x84) - fVar23) * 0.5;
            fVar21 = fVar21 * fVar21 + fVar22 * fVar22 + fVar23 * fVar23;
            fVar21 = (fVar21 * *(float *)(param_1 + 0x10) * SQRT(fVar21) - local_54[uVar16]) -
                     local_54[uVar19];
            uVar12 = (int)uVar16;
            uVar10 = (int)uVar19;
            if (fVar21 <= fVar24) {
              uVar12 = uVar11;
              uVar10 = uVar20;
            }
            uVar20 = uVar10;
            uVar19 = uVar19 + 1;
            fVar24 = fVar21;
            uVar11 = uVar12;
          } while (uVar7 != uVar19);
        }
        uVar15 = uVar15 + 1;
        lVar13 = lVar13 + 0x28;
        uVar16 = uVar6;
      } while (uVar6 != uVar7 - 1);
      goto LAB_004f02c8;
    }
  }
  uVar12 = 0;
  uVar20 = 1;
LAB_004f02c8:
  FUN_004f0300(param_1,uVar12,0,param_2);
  FUN_004f0300(param_1,uVar20,1,param_2);
  return;
}


