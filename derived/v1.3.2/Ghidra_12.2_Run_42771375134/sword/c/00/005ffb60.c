/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ffb60; name: FUN_005ffb60
 */


void FUN_005ffb60(long param_1)

{
  if (*(long **)(param_1 + 0x268) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x268) + 0x18))();
    *(undefined8 *)(param_1 + 0x268) = 0;
  }
  FUN_006008c0(param_1 + 0x78);
  return;
}


