/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00513910; name: FUN_00513910
 */


void FUN_00513910(float param_1,float param_2,uint param_3,uint param_4,long param_5,float *param_6,
                 uint param_7)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (param_1 <= DAT_01d4c2e0) {
    param_1 = DAT_01d4c2e0;
  }
  if ((param_7 & 1) == 0) {
    bVar1 = false;
    fVar12 = 1.0;
  }
  else {
    bVar1 = 1.0 <= param_1 * DAT_01d4bbc8;
    fVar12 = 1.0;
    if (bVar1) {
      fVar12 = 1.0 / (param_1 * DAT_01d4bbc8);
    }
  }
  fVar10 = 0.0;
  puVar3 = (undefined8 *)(param_5 + 0x28);
  fVar13 = param_2 / (float)param_3;
  lVar2 = 0;
  pfVar4 = param_6 + 2;
  fVar14 = 1.0 / ((param_1 + param_1) * param_1);
  do {
    fVar5 = (float)(int)lVar2 + -2.0;
    fVar11 = fVar5 * fVar5;
    fVar5 = (param_2 / (float)param_4) * fVar5;
    fVar8 = -(fVar14 * (fVar11 + 4.0));
    fVar6 = expf(fVar8);
    *(float *)(puVar3 + -5) = fVar13 * -2.0;
    *(float *)((long)puVar3 + -0x24) = fVar5;
    puVar3[-4] = 0;
    pfVar4[-2] = fVar12 * fVar6;
    fVar9 = -(fVar14 * (fVar11 + 1.0));
    fVar7 = expf(fVar9);
    *(float *)(puVar3 + -3) = -fVar13;
    *(float *)((long)puVar3 + -0x14) = fVar5;
    puVar3[-2] = 0;
    pfVar4[-1] = fVar12 * fVar7;
    fVar11 = expf(-(fVar14 * (fVar11 + 0.0)));
    *(float *)(puVar3 + -1) = fVar13 * 0.0;
    *(float *)((long)puVar3 + -4) = fVar5;
    *puVar3 = 0;
    *pfVar4 = fVar12 * fVar11;
    fVar9 = expf(fVar9);
    *(float *)(puVar3 + 1) = fVar13;
    *(float *)((long)puVar3 + 0xc) = fVar5;
    puVar3[2] = 0;
    pfVar4[1] = fVar12 * fVar9;
    fVar8 = expf(fVar8);
    *(float *)(puVar3 + 3) = fVar13 + fVar13;
    *(float *)((long)puVar3 + 0x1c) = fVar5;
    fVar10 = fVar10 + fVar12 * fVar6 + fVar12 * fVar7 + fVar12 * fVar11 + fVar12 * fVar9 +
             fVar12 * fVar8;
    lVar2 = lVar2 + 1;
    puVar3[4] = 0;
    pfVar4[2] = fVar12 * fVar8;
    puVar3 = puVar3 + 10;
    pfVar4 = pfVar4 + 5;
  } while (lVar2 != 5);
  if (!bVar1) {
    fVar10 = 1.0 / fVar10;
    *param_6 = fVar10 * *param_6;
    param_6[1] = fVar10 * param_6[1];
    param_6[2] = fVar10 * param_6[2];
    param_6[3] = fVar10 * param_6[3];
    param_6[4] = fVar10 * param_6[4];
    param_6[5] = fVar10 * param_6[5];
    param_6[6] = fVar10 * param_6[6];
    param_6[7] = fVar10 * param_6[7];
    param_6[8] = fVar10 * param_6[8];
    param_6[9] = fVar10 * param_6[9];
    param_6[10] = fVar10 * param_6[10];
    param_6[0xb] = fVar10 * param_6[0xb];
    param_6[0xc] = fVar10 * param_6[0xc];
    param_6[0xd] = fVar10 * param_6[0xd];
    param_6[0xe] = fVar10 * param_6[0xe];
    param_6[0xf] = fVar10 * param_6[0xf];
    param_6[0x10] = fVar10 * param_6[0x10];
    param_6[0x11] = fVar10 * param_6[0x11];
    param_6[0x12] = fVar10 * param_6[0x12];
    param_6[0x13] = fVar10 * param_6[0x13];
    param_6[0x14] = fVar10 * param_6[0x14];
    param_6[0x15] = fVar10 * param_6[0x15];
    param_6[0x16] = fVar10 * param_6[0x16];
    param_6[0x17] = fVar10 * param_6[0x17];
    param_6[0x18] = fVar10 * param_6[0x18];
  }
  return;
}


