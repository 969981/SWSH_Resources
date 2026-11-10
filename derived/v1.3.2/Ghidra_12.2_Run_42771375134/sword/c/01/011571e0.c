/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011571e0; name: FUN_011571e0
 */


void FUN_011571e0(long param_1)

{
  if (*(long **)(param_1 + 0xc0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xc0) + 0xa0))();
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_01160360();
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return;
}


