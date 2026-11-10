/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bdc60; name: FUN_003bdc60
 */


void FUN_003bdc60(long *param_1,undefined8 param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  
  if (*param_1 != 0) {
    FUN_003bf830();
  }
  pfVar1 = (float *)param_1[0x16];
  if ((pfVar1 == (float *)0x0) || (*(char *)((long)pfVar1 + 0x1f) != '\0')) {
    FUN_003bdd30(param_1,param_2,0,0);
    pfVar1 = (float *)param_1[0x16];
  }
  *(byte *)(pfVar1 + 3) = *(byte *)(pfVar1 + 3) | 2;
  if (param_3 != (float *)0x0) {
    *pfVar1 = *param_3 + *pfVar1;
    pfVar1[1] = param_3[1] + pfVar1[1];
    pfVar1[2] = param_3[2] + pfVar1[2];
  }
  if (param_4 != (float *)0x0) {
    pfVar1[4] = *param_4 + pfVar1[4];
    pfVar1[5] = param_4[1] + pfVar1[5];
    pfVar1[6] = param_4[2] + pfVar1[6];
  }
  return;
}


