/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011d3e40; name: FUN_011d3e40
 */


void FUN_011d3e40(long param_1)

{
  if (((*(int *)(param_1 + 0x24) == 2) || (*(int *)(param_1 + 0x24) == 1)) &&
     (*(long **)(param_1 + 0x18) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


