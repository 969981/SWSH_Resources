/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0022ecf0; name: FUN_0022ecf0
 */


uint FUN_0022ecf0(float param_1,float param_2,float param_3,float param_4,float *param_5,int param_6
                 ,byte *param_7)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  float *pfVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  bVar3 = (param_1 < 0.0) << 1 | 8;
  if (0.0 <= param_2) {
    bVar3 = (param_1 < 0.0) << 1;
  }
  bVar3 = bVar3 | param_3 < param_1;
  bVar2 = bVar3 | 4;
  if (param_2 <= param_4) {
    bVar2 = bVar3;
  }
  *param_7 = bVar2;
  if (bVar2 != 0) {
    return 0;
  }
  if (param_6 == 3) {
    fVar8 = *param_5;
    fVar10 = param_5[1];
    fVar11 = param_5[2] - fVar8;
    fVar12 = param_5[3] - fVar10;
    fVar13 = param_5[4] - fVar8;
    fVar14 = param_5[5] - fVar10;
    fVar15 = fVar11 * fVar11 + fVar12 * fVar12;
    fVar9 = (param_1 - fVar8) * fVar11 + (param_2 - fVar10) * fVar12;
    fVar8 = (param_1 - fVar8) * fVar13 + (param_2 - fVar10) * fVar14;
    fVar11 = fVar11 * fVar13 + fVar12 * fVar14;
    fVar12 = fVar13 * fVar13 + fVar14 * fVar14;
    fVar10 = fVar15 * fVar8 - fVar9 * fVar11;
    fVar8 = fVar9 * fVar12 - fVar8 * fVar11;
    return (uint)((0.0 < fVar8 && 0.0 < fVar10) &&
                 (fVar8 + fVar10) - (fVar15 * fVar12 - fVar11 * fVar11) < 0.0);
  }
  uVar5 = 0;
  if (param_6 != 0) {
    pfVar6 = param_5 + 1;
    pfVar7 = param_5 + (param_6 * 2 - 2);
    bVar1 = (int)param_2 <= (int)(param_5 + (param_6 * 2 - 2))[1];
    do {
      pfVar4 = param_5;
      fVar8 = *pfVar6;
      if ((bVar1 != (int)param_2 <= (int)fVar8) &&
         ((int)param_2 <= (int)fVar8 ==
          (pfVar6[-1] - param_1) * (pfVar7[1] - fVar8) < (fVar8 - param_2) * (*pfVar7 - pfVar6[-1]))
         ) {
        if (uVar5 == 1) {
          return 0;
        }
        uVar5 = uVar5 + 1;
      }
      param_6 = param_6 + -1;
      pfVar6 = pfVar6 + 2;
      param_5 = pfVar4 + 2;
      pfVar7 = pfVar4;
      bVar1 = (int)param_2 <= (int)fVar8;
    } while (param_6 != 0);
  }
  return uVar5 & 1;
}


