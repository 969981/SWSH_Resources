/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00479e60; name: FUN_00479e60
 */


void FUN_00479e60(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  plVar1 = (long *)param_2[2];
  param_1[2] = plVar1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  if ((*(long *)PTR_DAT_02712dc8 == 0 || plVar1 == (long *)0x0) || (*plVar1 == 0)) {
    return;
  }
  FUN_0048ad60();
  return;
}


