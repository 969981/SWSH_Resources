/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132a370; name: FUN_0132a370
 */


void FUN_0132a370(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_2;
  lVar2 = param_2[8];
  if (((lVar2 == lVar3) || (param_2[10] == lVar3)) || (param_2[0xc] == lVar3)) {
    *param_1 = 0;
    lVar3 = param_2[2];
  }
  else {
    lVar1 = 0;
    if (param_2[0xe] != lVar3) {
      lVar1 = lVar3;
    }
    *param_1 = lVar1;
    lVar3 = param_2[2];
  }
  if (((lVar2 == lVar3) || (param_2[10] == lVar3)) || (param_2[0xc] == lVar3)) {
    param_1[1] = 0;
    lVar3 = param_2[4];
  }
  else {
    lVar1 = 0;
    if (param_2[0xe] != lVar3) {
      lVar1 = lVar3;
    }
    param_1[1] = lVar1;
    lVar3 = param_2[4];
  }
  if (((lVar2 == lVar3) || (param_2[10] == lVar3)) || (param_2[0xc] == lVar3)) {
    param_1[2] = 0;
    lVar3 = param_2[6];
  }
  else {
    lVar1 = 0;
    if (param_2[0xe] != lVar3) {
      lVar1 = lVar3;
    }
    param_1[2] = lVar1;
    lVar3 = param_2[6];
  }
  if (lVar2 == lVar3) {
    param_1[3] = 0;
    return;
  }
  if (param_2[10] == lVar3) {
    param_1[3] = 0;
    return;
  }
  if (param_2[0xc] == lVar3) {
    param_1[3] = 0;
    return;
  }
  lVar2 = 0;
  if (param_2[0xe] != lVar3) {
    lVar2 = lVar3;
  }
  param_1[3] = lVar2;
  return;
}


