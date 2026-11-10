/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db1870; name: FUN_00db1870
 */


void FUN_00db1870(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  
  strncpy((char *)(param_1 + 8),(char *)param_2[1],0x40);
  *param_1 = *param_2;
  param_1[1] = param_3;
  param_1[5] = param_4[1];
  param_1[4] = *param_4;
  uVar1 = param_5[1];
  param_1[6] = *param_5;
  param_1[7] = uVar1;
  return;
}


