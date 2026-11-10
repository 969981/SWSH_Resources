/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bdfa0; name: FUN_003bdfa0
 */


void FUN_003bdfa0(long *param_1,undefined8 param_2,float *param_3,float *param_4)

{
  long lVar1;
  
  if (*param_1 != 0) {
    FUN_003bf910();
  }
  lVar1 = param_1[0x16];
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x1f) != '\0')) {
    FUN_003bdd30(param_1,param_2,0,0);
    lVar1 = param_1[0x16];
  }
  *(byte *)(lVar1 + 0xc) = *(byte *)(lVar1 + 0xc) | 4;
  if (param_3 != (float *)0x0) {
    *(float *)(lVar1 + 0x20) = *param_3 + *(float *)(lVar1 + 0x20);
    *(float *)(lVar1 + 0x24) = param_3[1] + *(float *)(lVar1 + 0x24);
    *(float *)(lVar1 + 0x28) = param_3[2] + *(float *)(lVar1 + 0x28);
  }
  if (param_4 != (float *)0x0) {
    *(float *)(lVar1 + 0x30) = *param_4 + *(float *)(lVar1 + 0x30);
    *(float *)(lVar1 + 0x34) = param_4[1] + *(float *)(lVar1 + 0x34);
    *(float *)(lVar1 + 0x38) = param_4[2] + *(float *)(lVar1 + 0x38);
  }
  return;
}


