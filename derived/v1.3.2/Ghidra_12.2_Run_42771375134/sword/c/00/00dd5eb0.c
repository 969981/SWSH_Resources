/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd5eb0; name: FUN_00dd5eb0
 */


undefined4
FUN_00dd5eb0(float param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5,ulong *param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
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
  
  fVar6 = (float)*param_2;
  fVar9 = (float)*param_3 - fVar6;
  fVar7 = (float)param_2[1];
  fVar10 = (float)param_3[1] - fVar7;
  fVar8 = (float)((ulong)param_2[1] >> 0x20);
  fVar11 = (float)*param_5 - (float)*param_4;
  fVar12 = (float)param_5[1] - (float)param_4[1];
  fVar13 = fVar9 * fVar12 - fVar10 * fVar11;
  if (fVar13 == 0.0) {
    return 0;
  }
  fVar14 = (float)*param_4 - fVar6;
  fVar15 = (float)param_4[1] - fVar7;
  fVar11 = (fVar12 * fVar14 - fVar11 * fVar15) / fVar13;
  fVar12 = fVar11 - param_1;
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (0.0 <= fVar11 + param_1) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar12)) {
      bVar1 = fVar12 < 1.0;
      bVar2 = fVar12 == 1.0;
      bVar3 = false;
    }
  }
  if (!bVar2 && bVar1 == bVar3) {
    return 0;
  }
  fVar13 = (fVar10 * fVar14 - fVar9 * fVar15) / fVar13;
  fVar12 = fVar13 - param_1;
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (0.0 <= fVar13 + param_1) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar12)) {
      bVar1 = fVar12 < 1.0;
      bVar2 = fVar12 == 1.0;
      bVar3 = false;
    }
  }
  if (!bVar2 && bVar1 == bVar3) {
    return 0;
  }
  fVar12 = 1.0 - param_1;
  bVar1 = false;
  bVar2 = false;
  if (fVar11 < fVar12) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar11) && !NAN(param_1)) {
      bVar1 = fVar11 == param_1;
      bVar2 = param_1 <= fVar11;
    }
  }
  bVar3 = false;
  bVar4 = false;
  if (bVar2 && !bVar1) {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar13) && !NAN(fVar12)) {
      bVar3 = fVar13 < fVar12;
      bVar4 = false;
    }
  }
  bVar1 = false;
  bVar2 = false;
  if (bVar3 != bVar4) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar13) && !NAN(param_1)) {
      bVar1 = fVar13 == param_1;
      bVar2 = param_1 <= fVar13;
    }
  }
  uVar5 = 1;
  if (!bVar2 || bVar1) {
    uVar5 = 2;
  }
  if (param_6 != (ulong *)0x0) {
    param_6[1] = CONCAT44(fVar8 + ((float)((ulong)param_3[1] >> 0x20) - fVar8) * fVar11,
                          fVar7 + fVar10 * fVar11);
    *param_6 = (ulong)(uint)(fVar6 + fVar9 * fVar11);
  }
  return uVar5;
}


