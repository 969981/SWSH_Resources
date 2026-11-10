/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00802b70; name: FUN_00802b70
 */


void FUN_00802b70(undefined8 *param_1)

{
  long *plVar1;
  
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[4] = param_1 + 5;
  plVar1 = operator_new(8);
  *plVar1 = (long)(PTR_DAT_02716f48 + 0x10);
  param_1[3] = plVar1;
  return;
}


