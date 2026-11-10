/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132a4f0; name: FUN_0132a4f0
 */


void FUN_0132a4f0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_2;
  lVar5 = param_2[2];
  *param_1 = lVar6;
  param_1[1] = lVar5;
  lVar4 = param_2[4];
  lVar2 = param_2[6];
  param_1[2] = lVar4;
  param_1[3] = lVar2;
  lVar3 = param_2[8];
  if (((lVar3 == lVar6) || (param_2[10] == lVar6)) || (param_2[0xc] == lVar6)) {
    *param_1 = 0;
  }
  else {
    lVar1 = 0;
    if (param_2[0xe] != lVar6) {
      lVar1 = lVar6;
    }
    *param_1 = lVar1;
  }
  if (((lVar3 == lVar5) || (param_2[10] == lVar5)) || (param_2[0xc] == lVar5)) {
    param_1[1] = 0;
  }
  else {
    lVar6 = 0;
    if (param_2[0xe] != lVar5) {
      lVar6 = lVar5;
    }
    param_1[1] = lVar6;
  }
  if (((lVar3 == lVar4) || (param_2[10] == lVar4)) || (param_2[0xc] == lVar4)) {
    param_1[2] = 0;
  }
  else {
    lVar5 = 0;
    if (param_2[0xe] != lVar4) {
      lVar5 = lVar4;
    }
    param_1[2] = lVar5;
  }
  if (lVar3 == lVar2) {
    param_1[3] = 0;
    return;
  }
  if (param_2[10] == lVar2) {
    param_1[3] = 0;
    return;
  }
  if (param_2[0xc] == lVar2) {
    param_1[3] = 0;
    return;
  }
  lVar3 = 0;
  if (param_2[0xe] != lVar2) {
    lVar3 = lVar2;
  }
  param_1[3] = lVar3;
  return;
}


