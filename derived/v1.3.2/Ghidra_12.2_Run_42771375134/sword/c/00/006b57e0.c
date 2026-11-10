/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b57e0; name: FUN_006b57e0
 */


void FUN_006b57e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  long lVar1;
  
  *param_1 = *param_2;
  param_1[1] = *param_3;
  param_1[2] = *param_4;
  param_1[3] = param_4[1];
  param_1[4] = param_4[2];
  lVar1 = param_4[3];
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  param_1[6] = param_5;
  return;
}


