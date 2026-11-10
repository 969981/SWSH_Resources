/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005be7f0; name: FUN_005be7f0
 */


void FUN_005be7f0(long param_1,long *param_2)

{
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
  }
  *(long **)(param_1 + 0xb8) = param_2;
  return;
}


