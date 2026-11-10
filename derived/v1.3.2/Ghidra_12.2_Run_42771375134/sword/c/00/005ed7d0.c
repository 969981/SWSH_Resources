/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ed7d0; name: FUN_005ed7d0
 */


void FUN_005ed7d0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  
  if (param_2 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*param_2 + 0x28))();
    (**(code **)(*plVar1 + 0x70))();
    (**(code **)(*param_2 + 0x98))(param_2);
    (**(code **)(*param_2 + 0x98))(param_2);
  }
  *param_1 = 0;
  return;
}


