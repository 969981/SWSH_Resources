/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00166440; name: FUN_00166440
 */


void FUN_00166440(long param_1)

{
  long lVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pfVar4 = *(float **)(param_1 + 0x28);
  if (pfVar4 != (float *)0x0) {
    pcVar5 = *(char **)(param_1 + 0x20);
    if ((byte)pcVar5[1] == 0) {
      fVar11 = 0.0;
      fVar10 = 0.0;
      fVar9 = 0.0;
      fVar8 = 0.0;
      fVar7 = 0.0;
      fVar6 = 0.0;
    }
    else {
      fVar6 = 0.0;
      fVar8 = 0.0;
      pfVar3 = (float *)(pcVar5 + 0x70);
      fVar7 = 0.0;
      fVar9 = 0.0;
      fVar10 = 0.0;
      fVar11 = 0.0;
      uVar2 = 0;
      lVar1 = 0xa0;
      if (*pcVar5 != '\x04') {
        lVar1 = 0x60;
      }
      do {
        if ((*(byte *)(pfVar3 + 7) >> 1 & 1) != 0) {
          fVar12 = pfVar3[6];
          fVar8 = fVar8 + fVar12 * pfVar3[-0x10];
          fVar7 = fVar7 + fVar12 * pfVar3[-0xf];
          fVar6 = fVar6 + fVar12 * pfVar3[-0xe];
          fVar10 = fVar10 + fVar12 * pfVar3[1];
          fVar11 = fVar11 + fVar12 * *pfVar3;
          fVar9 = fVar9 + fVar12 * pfVar3[2];
        }
        uVar2 = uVar2 + 1;
        pfVar3 = (float *)((long)pfVar3 + lVar1);
      } while (uVar2 < (byte)pcVar5[1]);
    }
    fVar12 = *(float *)(pcVar5 + 0x10);
    fVar13 = *(float *)(pcVar5 + 0x14);
    fVar14 = *(float *)(pcVar5 + 0x18);
    *pfVar4 = fVar8;
    pfVar4[1] = fVar7;
    pfVar4[2] = fVar6;
    fVar11 = fVar11 - (fVar6 * fVar13 - fVar7 * fVar14);
    fVar10 = fVar10 - (fVar8 * fVar14 - fVar6 * fVar12);
    fVar9 = fVar9 - (fVar7 * fVar12 - fVar8 * fVar13);
    pfVar4[4] = fVar11;
    pfVar4[5] = fVar10;
    pfVar4[6] = fVar9;
    fVar12 = (float)(uint)(byte)pcVar5[3];
    if (pcVar5[3] != 0) {
      fVar6 = sqrtf(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
      if (fVar6 <= *(float *)(pcVar5 + 4)) {
        fVar6 = sqrtf(fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10);
        fVar12 = (float)(uint)(*(float *)(pcVar5 + 8) < fVar6);
      }
      else {
        fVar12 = 1.4013e-45;
      }
    }
    pfVar4[3] = fVar12;
  }
  return;
}


