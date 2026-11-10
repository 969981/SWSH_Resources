/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d5cd0; name: FUN_008d5cd0
 */


void FUN_008d5cd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[2];
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = uVar1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_008d5d20(param_1,*param_2,param_2[1]);
  FUN_008d5e30(param_1,*param_2,param_2[1]);
  return;
}


