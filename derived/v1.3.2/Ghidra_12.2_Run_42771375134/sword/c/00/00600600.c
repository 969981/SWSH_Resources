/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00600600; name: FUN_00600600
 */


void FUN_00600600(long param_1,long *param_2)

{
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  if (*(long **)(param_1 + 0x1c0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1c0) + 0x18))();
  }
  *(long **)(param_1 + 0x1c0) = param_2;
  if (param_2 == (long *)0x0) {
    return;
  }
  FUN_00630fd0(param_2,param_1);
  return;
}


