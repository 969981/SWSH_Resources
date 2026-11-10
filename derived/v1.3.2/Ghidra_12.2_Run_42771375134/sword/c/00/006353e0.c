/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006353e0; name: FUN_006353e0
 */


void FUN_006353e0(long param_1)

{
  FUN_00635430(param_1 + 0x1e8);
  if (*(long **)(param_1 + 0x240) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x240) + 0x18))();
    *(undefined8 *)(param_1 + 0x240) = 0;
  }
  FUN_00634510(param_1);
  FUN_00634630(param_1 + 0x48);
  return;
}


