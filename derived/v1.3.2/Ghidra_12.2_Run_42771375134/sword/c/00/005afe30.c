/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005afe30; name: FUN_005afe30
 */


undefined8 FUN_005afe30(float param_1,float param_2,float param_3,long param_4)

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
  
  if (param_1 == 0.0) {
    fVar2 = 0.0;
    fVar10 = 0.0;
  }
  else {
    fVar2 = DAT_01d4bb0c;
    if (param_2 != 0.0) {
      fVar2 = param_2 * -0.5;
    }
    fVar7 = *(float *)(param_4 + 0x1a8);
    fVar3 = *(float *)(param_4 + 0x1b8) * param_1 * 0.5;
    fVar4 = *(float *)(param_4 + 0x1b0);
    fVar11 = 0.0;
    fVar10 = -1.0;
    if (0.0 <= fVar2) {
      fVar10 = 0.0;
    }
    fVar6 = 1.0;
    if (fVar2 <= 0.0) {
      fVar6 = fVar10;
    }
    fVar10 = fVar6 * fVar7 * 0.5;
    fVar1 = fVar10;
    if (fVar10 <= 0.0) {
      fVar1 = -(fVar6 * fVar7 * 0.5);
    }
    fVar5 = tanf(param_3 * 0.5);
    fVar6 = *(float *)(param_4 + 0x1a8);
    fVar9 = fVar10;
    if (fVar10 <= -fVar6) {
      fVar9 = -fVar6;
    }
    fVar8 = *(float *)(param_4 + 0x1ac);
    if (fVar9 <= 0.0) {
      if (fVar9 < 0.0) {
        fVar11 = -(fVar8 * (fVar6 + fVar9)) / fVar9;
      }
    }
    else {
      fVar11 = fVar8 * ((fVar6 * fVar9) / (fVar9 - fVar6)) - fVar6 * fVar8;
    }
    fVar11 = (fVar2 * *(float *)(param_4 + 0x1b8) *
                      ((fVar5 / *(float *)(param_4 + 0x19c)) /
                      ((*(float *)(param_4 + 0x1b0) * *(float *)(param_4 + 0x1b4)) /
                      (*(float *)(param_4 + 0x1b0) - fVar6)))) / (fVar11 * 0.5);
    if (fVar11 <= 0.0) {
      fVar11 = -fVar11;
    }
    if (fVar2 <= 0.0) {
      fVar6 = 2.0 / (fVar11 + 1.0);
    }
    else {
      fVar6 = (1.0 / fVar11) / fVar6;
    }
    fVar2 = fVar1 * ((fVar3 + fVar3) / ((fVar7 * fVar4) / (fVar4 - fVar7))) * fVar6;
    if (fVar2 < 0.0) {
      return 0xfffffffa;
    }
    fVar10 = fVar10 * fVar6;
  }
  *(undefined4 *)(param_4 + 0x1c8) = 0;
  *(float *)(param_4 + 0x1cc) = fVar2;
  *(float *)(param_4 + 0x1d0) = fVar10;
  return 0;
}


