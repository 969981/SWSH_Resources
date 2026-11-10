/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004eb650; name: FUN_004eb650
 */


undefined8
FUN_004eb650(float *param_1,float *param_2,undefined8 *param_3,undefined8 *param_4,float *param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = param_2[1] - param_1[0x13];
  fVar2 = *param_2 - param_1[0x12];
  fVar4 = param_2[2] - param_1[0x14];
  if (param_1[0x15] < ABS(param_1[0x18] * fVar2 + fVar3 * param_1[0x19] + fVar4 * param_1[0x1a])) {
    return 0;
  }
  if (ABS(param_1[3] * fVar2 + fVar3 * param_1[4] + fVar4 * param_1[5]) <= param_1[0x16]) {
    fVar2 = *param_1 * fVar2 + fVar3 * param_1[1] + fVar4 * param_1[2];
    fVar4 = param_1[0x17];
    fVar3 = ABS(fVar2);
    if (fVar4 < fVar3) {
      return 0;
    }
    *param_5 = (fVar3 + fVar4) / (fVar4 + fVar4);
    fVar3 = param_1[0xc];
    if (0.0 < fVar2 && fVar3 != 0.0) {
      *param_3 = **(undefined8 **)(param_1 + 10);
      if ((uint)fVar3 < 2) {
        return 1;
      }
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 10) + 8);
    }
    else {
      if ((uint)fVar3 < 2) {
        return 1;
      }
      *param_3 = *(undefined8 *)(*(long *)(param_1 + 10) + 8);
      uVar1 = **(undefined8 **)(param_1 + 10);
    }
    *param_4 = uVar1;
    return 1;
  }
  return 0;
}


