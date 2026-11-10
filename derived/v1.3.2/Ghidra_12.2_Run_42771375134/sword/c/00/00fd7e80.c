/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd7e80; name: FUN_00fd7e80
 */


void FUN_00fd7e80(long *param_1,long param_2,long *param_3)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_02722ff8 + 0x10);
  param_1[1] = param_2;
  lVar1 = *param_3;
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x1010000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


