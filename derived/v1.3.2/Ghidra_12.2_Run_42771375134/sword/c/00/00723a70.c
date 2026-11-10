/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00723a70; name: FUN_00723a70
 */


void FUN_00723a70(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = *param_2;
  param_1[2] = param_2[1];
  param_1[3] = param_2[2];
  lVar1 = param_2[3];
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  param_1[5] = 0xffffffffffffffff;
  param_1[6] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 7) = param_3;
  *(undefined4 *)((long)param_1 + 0x3c) = param_4;
  return;
}


