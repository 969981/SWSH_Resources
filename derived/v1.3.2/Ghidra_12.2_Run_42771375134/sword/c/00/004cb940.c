/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cb940; name: FUN_004cb940
 */


void FUN_004cb940(float param_1,float param_2,undefined8 *param_3,undefined8 *param_4,uint param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  
  puVar1 = (undefined8 *)((long)param_3 + (ulong)param_5 * 4);
  if (param_2 == 0.0) {
    if (param_1 != 0.0) {
      do {
        puVar2 = param_3 + 4;
        uVar12 = *param_3;
        uVar18 = param_3[3];
        uVar17 = param_3[2];
        param_4[1] = CONCAT44((float)((ulong)param_4[1] >> 0x20) +
                              (float)((ulong)param_3[1] >> 0x20) * param_1,
                              (float)param_4[1] + (float)param_3[1] * param_1);
        *param_4 = CONCAT44((float)((ulong)*param_4 >> 0x20) +
                            (float)((ulong)uVar12 >> 0x20) * param_1,
                            (float)*param_4 + (float)uVar12 * param_1);
        param_4[3] = CONCAT44((float)((ulong)param_4[3] >> 0x20) +
                              (float)((ulong)uVar18 >> 0x20) * param_1,
                              (float)param_4[3] + (float)uVar18 * param_1);
        param_4[2] = CONCAT44((float)((ulong)param_4[2] >> 0x20) +
                              (float)((ulong)uVar17 >> 0x20) * param_1,
                              (float)param_4[2] + (float)uVar17 * param_1);
        param_3 = puVar2;
        param_4 = param_4 + 4;
      } while (puVar2 < puVar1);
    }
  }
  else {
    fVar15 = param_2 + param_1;
    fVar20 = param_1 + param_2 * 3.0;
    fVar19 = param_2 + param_2 + param_1;
    param_2 = param_2 * 4.0;
    fVar16 = param_2 + param_2;
    fVar11 = param_1 + param_2;
    fVar13 = fVar15 + param_2;
    fVar14 = fVar19 + param_2;
    param_2 = fVar20 + param_2;
    do {
      puVar2 = param_3 + 4;
      fVar3 = (float)param_3[2] * fVar11;
      fVar5 = (float)((ulong)param_3[2] >> 0x20) * fVar13;
      fVar7 = (float)param_3[3] * fVar14;
      fVar9 = (float)((ulong)param_3[3] >> 0x20) * param_2;
      fVar4 = (float)*param_3 * param_1;
      fVar6 = (float)((ulong)*param_3 >> 0x20) * fVar15;
      fVar8 = (float)param_3[1] * fVar19;
      fVar10 = (float)((ulong)param_3[1] >> 0x20) * fVar20;
      param_1 = param_1 + fVar16;
      fVar15 = fVar15 + fVar16;
      fVar19 = fVar19 + fVar16;
      fVar20 = fVar20 + fVar16;
      fVar11 = fVar11 + fVar16;
      fVar13 = fVar13 + fVar16;
      fVar14 = fVar14 + fVar16;
      param_2 = param_2 + fVar16;
      param_4[1] = CONCAT44((float)((ulong)param_4[1] >> 0x20) + fVar10,(float)param_4[1] + fVar8);
      *param_4 = CONCAT44((float)((ulong)*param_4 >> 0x20) + fVar6,(float)*param_4 + fVar4);
      param_4[3] = CONCAT44((float)((ulong)param_4[3] >> 0x20) + fVar9,(float)param_4[3] + fVar7);
      param_4[2] = CONCAT44((float)((ulong)param_4[2] >> 0x20) + fVar5,(float)param_4[2] + fVar3);
      param_3 = puVar2;
      param_4 = param_4 + 4;
    } while (puVar2 < puVar1);
  }
  return;
}


