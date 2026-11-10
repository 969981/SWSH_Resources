/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012183a0; name: FUN_012183a0
 */


void FUN_012183a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[4] = param_2;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[10] = param_2;
  param_1[0xb] = 0;
  FUN_01218400(param_1 + 1,param_3);
  FUN_01218580(param_1 + 7,*param_1);
  return;
}


