/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001a76a0; name: FUN_001a76a0
 */


void FUN_001a76a0(float *param_1)

{
  uint *puVar1;
  int *piVar2;
  float *pfVar3;
  uint uVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
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
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (*(int *)(*(long *)(lVar5 + 0x10) + 0x14) != 0) {
    puVar1 = (uint *)(**(long **)(lVar5 + 0x88) + 0x400c);
    piVar2 = (int *)(**(long **)(lVar5 + 0x88) + 0x4008);
    uVar4 = *puVar1;
    uVar7 = (ulong)uVar4;
    if (uVar4 < *piVar2 + uVar4) {
      fVar18 = param_1[0x10];
      lVar8 = *(long *)(*(long *)(lVar5 + 0x10) + 0x38);
      lVar5 = *(long *)(lVar5 + 0x40);
      do {
        fVar19 = param_1[0xe];
        pfVar3 = (float *)(lVar8 + (ulong)*(uint *)(lVar5 + uVar7 * 4) * 0x20);
        fVar14 = param_1[2];
        fVar15 = param_1[3];
        pfVar11 = pfVar3 + 4;
        pfVar9 = pfVar3 + 5;
        fVar12 = fVar15 * (*param_1 * fVar18 + *pfVar11);
        pfVar10 = pfVar3 + 6;
        fVar13 = fVar15 * (param_1[1] * fVar18 + *pfVar9);
        *pfVar11 = fVar12;
        *pfVar9 = fVar13;
        fVar15 = fVar15 * (fVar14 * fVar18 + *pfVar10);
        *pfVar10 = fVar15;
        fVar12 = sqrtf(fVar12 * fVar12 + fVar13 * fVar13 + fVar15 * fVar15);
        if (fVar18 * fVar12 <= fVar19) {
          fVar12 = pfVar3[4];
          fVar13 = *pfVar9;
          fVar19 = *pfVar10;
        }
        else {
          fVar19 = fVar19 / (fVar18 * fVar12);
          fVar12 = fVar19 * *pfVar11;
          *pfVar11 = fVar12;
          fVar13 = fVar19 * *pfVar9;
          *pfVar9 = fVar13;
          fVar19 = fVar19 * *pfVar10;
          *pfVar10 = fVar19;
        }
        fVar18 = param_1[0x10];
        fVar14 = fVar18 * fVar12 + *pfVar3;
        pfVar11 = pfVar3 + 1;
        pfVar6 = pfVar3 + 2;
        *pfVar3 = fVar14;
        fVar16 = fVar18 * fVar13 + *pfVar11;
        *pfVar11 = fVar16;
        fVar15 = fVar18 * fVar19 + *pfVar6;
        *pfVar6 = fVar15;
        if ((*(byte *)(param_1 + 0x16) >> 3 & 1) != 0) {
          fVar17 = param_1[0x13];
          fVar20 = param_1[0x14];
          fVar21 = fVar12 * param_1[0x12] + fVar13 * fVar17 + fVar19 * fVar20;
          pfVar3[4] = fVar12 - param_1[0x12] * fVar21;
          *pfVar9 = fVar13 - fVar17 * fVar21;
          *pfVar10 = fVar19 - fVar20 * fVar21;
          fVar12 = param_1[0x13];
          fVar19 = param_1[0x14];
          fVar13 = param_1[0x15] + fVar14 * param_1[0x12] + fVar16 * fVar12 + fVar15 * fVar19;
          *pfVar3 = fVar14 - param_1[0x12] * fVar13;
          *pfVar11 = fVar16 - fVar12 * fVar13;
          *pfVar6 = fVar15 - fVar19 * fVar13;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *piVar2 + *puVar1);
    }
  }
  return;
}


