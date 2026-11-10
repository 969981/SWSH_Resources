/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ccb80; name: FUN_004ccb80
 */


void FUN_004ccb80(long param_1)

{
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x10))();
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  FUN_004cbd80(param_1);
  return;
}


