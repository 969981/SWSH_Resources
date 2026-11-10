/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011727f0; name: FUN_011727f0
 */


undefined8 FUN_011727f0(long param_1)

{
  if (*(int *)(param_1 + 0x88) == 5) {
    *(undefined4 *)(param_1 + 0x88) = 6;
    return 1;
  }
  return 0;
}


