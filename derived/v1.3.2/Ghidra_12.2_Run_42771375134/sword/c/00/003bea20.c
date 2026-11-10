/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bea20; name: FUN_003bea20
 */


void FUN_003bea20(long *param_1,float *param_2)

{
  long lVar1;
  
  *(float *)(param_1 + 4) = *(float *)(param_1 + 4) - *param_2;
  *(float *)((long)param_1 + 0x24) = *(float *)((long)param_1 + 0x24) - param_2[1];
  lVar1 = param_1[0x16];
  *(float *)(param_1 + 5) = *(float *)(param_1 + 5) - param_2[2];
  if (((lVar1 != 0) && ((*(byte *)((long)param_1 + 0x2c) & 1) != 0)) &&
     (*(char *)(lVar1 + 0x1c) != '\0')) {
    *(float *)(lVar1 + 0x10) = *(float *)(lVar1 + 0x10) - *param_2;
    *(float *)(lVar1 + 0x14) = *(float *)(lVar1 + 0x14) - param_2[1];
    *(float *)(lVar1 + 0x18) = *(float *)(lVar1 + 0x18) - param_2[2];
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    *(float *)(lVar1 + 0x70) = *(float *)(lVar1 + 0x70) - *param_2;
    *(float *)(lVar1 + 0x74) = *(float *)(lVar1 + 0x74) - param_2[1];
    *(float *)(lVar1 + 0x78) = *(float *)(lVar1 + 0x78) - param_2[2];
  }
  return;
}


