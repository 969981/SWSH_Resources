/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01178510; name: FUN_01178510
 */


void FUN_01178510(long param_1)

{
  if ((*(int *)(param_1 + 0x24) == 1) && (*(long **)(param_1 + 0x18) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


