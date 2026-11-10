/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042ea00; name: FUN_0042ea00
 */


float FUN_0042ea00(float param_1,float param_2,float param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  switch(param_4) {
  case 0:
    param_1 = 1.0 - param_1;
    return param_3 + param_1 * (param_2 - param_3) * param_1 * param_1;
  case 1:
    param_1 = param_1 * DAT_01d4c05c;
    fVar2 = param_1 * param_1;
    fVar3 = DAT_01d4bc4c + fVar2 * (DAT_01d4c3e8 + DAT_01d4bcbc * fVar2);
    fVar1 = DAT_01d4bfe4;
    break;
  case 2:
    return param_2 + (param_2 - param_3) * param_1 * 0.5 * (param_1 + -3.0);
  case 3:
    if (0.5 < param_1) {
      fVar1 = DAT_01d4bb38 - DAT_01d4bb38 * param_1;
      fVar2 = fVar1 * fVar1;
      return (param_3 - param_2) +
             (param_3 - param_2) *
             (DAT_01d4bc48 + fVar2 * (DAT_01d4c3e4 + fVar2 * (DAT_01d4c068 + DAT_01d4bc44 * fVar2)))
             * fVar1 + param_2;
    }
    param_1 = param_1 * DAT_01d4bb38;
    fVar2 = param_1 * param_1;
    fVar3 = DAT_01d4c0d4 + fVar2 * (DAT_01d4c288 + DAT_01d4bbb4 * fVar2);
    fVar1 = DAT_01d4bad4;
    break;
  case 4:
    return param_2 + param_1 * (param_3 - param_2);
  case 5:
    fVar1 = param_1 * DAT_01d4bb38 * param_1 * DAT_01d4bb38;
    return param_2 + (param_3 - param_2) *
                     (DAT_01d4c06c +
                     fVar1 * (DAT_01d4c364 + fVar1 * (DAT_01d4c718 + DAT_01d4c1e4 * fVar1)));
  case 6:
    return param_2 + (param_3 - param_2) * (param_1 * 0.5 + param_1 * 0.5 * param_1);
  case 7:
    fVar1 = param_1 * DAT_01d4c05c * param_1 * DAT_01d4c05c;
    return param_3 + (param_2 - param_3) *
                     (DAT_01d4bc50 +
                     fVar1 * (DAT_01d4bedc + fVar1 * (DAT_01d4be04 + DAT_01d4c110 * fVar1)));
  case 8:
    return param_2 + (param_3 - param_2) * param_1 * param_1 * param_1;
  default:
    return 0.0;
  }
  return param_2 + (fVar1 + fVar2 * fVar3) * (param_3 - param_2) * param_1;
}


