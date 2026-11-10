/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ac390; name: FUN_001ac390
 */


void FUN_001ac390(float param_1,long param_2,uint param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  float *pfVar5;
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
  
  if (param_3 != 0) {
    uVar4 = (ulong)param_3;
    pfVar5 = (float *)(param_2 + 0x78);
    do {
      fVar11 = *pfVar5;
      fVar12 = pfVar5[1];
      fVar10 = pfVar5[2];
      fVar13 = *(float *)(param_4 + 4);
      fVar6 = fVar11 * fVar11 + fVar12 * fVar12 + fVar10 * fVar10;
      if (fVar13 * fVar13 <= fVar6) {
        fVar7 = pfVar5[4];
        fVar8 = pfVar5[5];
        fVar15 = fVar8 - fVar12;
        fVar14 = fVar7 - fVar11;
        fVar9 = pfVar5[6];
        fVar16 = fVar9 - fVar10;
        fVar17 = fVar14 * fVar14 + fVar15 * fVar15 + fVar16 * fVar16;
        fVar17 = fVar17 + fVar17;
        if (fVar17 == 0.0) {
LAB_001ac588:
          if ((*(byte *)(pfVar5 + 3) >> 1 & 1) == 0) {
            fVar6 = fVar7 * fVar7 + fVar8 * fVar8;
            fVar9 = fVar9 * fVar9;
LAB_001ac5a0:
            fVar6 = sqrtf(fVar6 + fVar9);
            pfVar5[10] = pfVar5[4];
            pfVar5[0xb] = pfVar5[5];
            pfVar5[0xc] = pfVar5[6];
            if (fVar6 < fVar13 + param_1) {
              if (fVar6 == 0.0) {
                fVar12 = 0.0;
                fVar11 = 0.0;
                fVar10 = 0.0;
                pfVar5[10] = 0.0;
                pfVar5[0xb] = 0.0;
                pfVar5[0xc] = 0.0;
              }
              else {
                fVar12 = 1.0 / fVar6;
                fVar10 = fVar12 * pfVar5[4];
                fVar11 = fVar12 * pfVar5[5];
                fVar12 = fVar12 * pfVar5[6];
                pfVar5[10] = fVar10;
                pfVar5[0xb] = fVar11;
                pfVar5[0xc] = fVar12;
              }
              fVar13 = fVar13 + pfVar5[-7];
              fVar17 = pfVar5[3];
              pfVar5[3] = (float)((uint)fVar17 | 0x20);
              pfVar5[0x10] = fVar10 * fVar13;
              pfVar5[0x11] = fVar11 * fVar13;
              pfVar5[0x12] = fVar12 * fVar13;
              if (fVar6 < fVar13) {
                fVar17 = (float)((uint)fVar17 | 0x30);
                goto LAB_001ac638;
              }
            }
          }
        }
        else {
          fVar10 = fVar11 * fVar14 + fVar12 * fVar15 + fVar10 * fVar16;
          fVar10 = fVar10 + fVar10;
          fVar6 = fVar10 * fVar10 - (fVar6 - fVar13 * fVar13) * (fVar17 + fVar17);
          if (fVar6 <= 0.0) goto LAB_001ac588;
          fVar6 = sqrtf(fVar6);
          fVar17 = -(fVar10 + fVar6) / fVar17;
          bVar1 = false;
          bVar2 = false;
          bVar3 = false;
          if (0.0 <= fVar17) {
            bVar1 = false;
            bVar2 = false;
            bVar3 = true;
            if (!NAN(fVar17)) {
              bVar1 = fVar17 < 1.0;
              bVar2 = fVar17 == 1.0;
              bVar3 = false;
            }
          }
          if (!bVar2 && bVar1 == bVar3) {
            if ((*(byte *)(pfVar5 + 3) >> 1 & 1) != 0) goto LAB_001ac63c;
            fVar6 = pfVar5[4] * pfVar5[4] + pfVar5[5] * pfVar5[5];
            fVar9 = pfVar5[6] * pfVar5[6];
            goto LAB_001ac5a0;
          }
          if (fVar17 < pfVar5[-0x13]) {
            fVar13 = 1.0 / fVar13;
            pfVar5[-0x13] = fVar17;
            pfVar5[0x10] = *pfVar5;
            pfVar5[0x11] = pfVar5[1];
            pfVar5[0x12] = pfVar5[2];
            pfVar5[10] = fVar13 * (fVar14 * fVar17 + *pfVar5);
            pfVar5[0xb] = fVar13 * (fVar15 * fVar17 + pfVar5[1]);
            pfVar5[0xc] = fVar13 * (fVar16 * fVar17 + pfVar5[2]);
            goto LAB_001ac630;
          }
        }
      }
      else {
        pfVar5[10] = fVar11;
        pfVar5[0xb] = fVar12;
        pfVar5[0xc] = fVar10;
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
          fVar10 = 1.0;
          fVar11 = 0.0;
          pfVar5[10] = 0.0;
          pfVar5[0xb] = 1.0;
          pfVar5[0xc] = 0.0;
        }
        else {
          fVar6 = sqrtf(fVar6);
          fVar6 = 1.0 / fVar6;
          fVar11 = pfVar5[10] * fVar6;
          fVar10 = fVar6 * pfVar5[0xb];
          fVar6 = fVar6 * pfVar5[0xc];
          pfVar5[10] = fVar11;
          pfVar5[0xb] = fVar10;
          pfVar5[0xc] = fVar6;
        }
        fVar13 = fVar13 + pfVar5[-7];
        pfVar5[-0x13] = 0.0;
        pfVar5[0x10] = fVar11 * fVar13;
        pfVar5[0x11] = fVar10 * fVar13;
        pfVar5[0x12] = fVar6 * fVar13;
LAB_001ac630:
        fVar17 = (float)((uint)pfVar5[3] | 8);
LAB_001ac638:
        pfVar5[3] = fVar17;
      }
LAB_001ac63c:
      pfVar5 = pfVar5 + 0x32;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}


