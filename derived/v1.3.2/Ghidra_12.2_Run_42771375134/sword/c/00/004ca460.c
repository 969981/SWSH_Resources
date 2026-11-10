/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ca460; name: FUN_004ca460
 */


void FUN_004ca460(long *param_1,long *param_2)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    FUN_00456b40(*param_1,param_2);
    return;
  }
  plVar1 = (long *)*param_2;
  *param_2 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  *(undefined2 *)(param_2 + 1) = 0;
  return;
}


