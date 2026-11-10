/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b9060; name: FUN_003b9060
 */


void FUN_003b9060(float param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
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
  float fVar15;
  float fVar16;
  
  if (param_2 < param_3) {
    do {
      fVar8 = *param_2;
      fVar7 = param_2[1];
      fVar14 = param_2[8];
      fVar9 = param_2[2];
      fVar12 = param_2[3];
      fVar1 = fVar12 - fVar8;
      fVar15 = param_2[4];
      fVar16 = param_2[5];
      fVar2 = fVar15 - fVar7;
      fVar13 = param_2[6];
      fVar11 = param_2[7];
      fVar3 = fVar16 - fVar9;
      fVar4 = fVar13 - fVar8;
      fVar5 = fVar11 - fVar7;
      fVar6 = fVar14 - fVar9;
      fVar10 = fVar3 * fVar4 - fVar1 * fVar6;
      fVar6 = fVar2 * fVar6 - fVar3 * fVar5;
      fVar5 = fVar1 * fVar5 - fVar2 * fVar4;
      fVar1 = fVar5 * fVar5 + fVar6 * fVar6 + fVar10 * fVar10;
      fVar3 = 0.0;
      fVar4 = 0.0;
      fVar2 = 0.0;
      if (0.0 < fVar1) {
        fVar2 = sqrtf(fVar1);
        fVar2 = 1.0 / fVar2;
        fVar3 = fVar6 * fVar2;
        fVar4 = fVar10 * fVar2;
        fVar2 = fVar5 * fVar2;
      }
      fVar3 = fVar3 * param_1;
      fVar4 = fVar4 * param_1;
      fVar2 = fVar2 * param_1;
      *param_2 = fVar8 + fVar3;
      param_2[1] = fVar7 + fVar4;
      param_2[2] = fVar9 + fVar2;
      param_2[3] = fVar12 + fVar3;
      param_2[4] = fVar15 + fVar4;
      param_2[5] = fVar16 + fVar2;
      param_2[6] = fVar13 + fVar3;
      param_2[7] = fVar11 + fVar4;
      param_2[8] = fVar14 + fVar2;
      param_2 = param_2 + 9;
    } while (param_2 < param_3);
  }
  return;
}


