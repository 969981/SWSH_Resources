/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007be4f0; name: FUN_007be4f0
 */


undefined8 FUN_007be4f0(long param_1)

{
  if (*(int *)(param_1 + 0x78) - 1U < 2) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  return 1;
}


