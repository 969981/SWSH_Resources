/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c4e10; name: FUN_014c4e10
 */


undefined8 FUN_014c4e10(long param_1)

{
  if (*(int *)(param_1 + 0x18d04) == 0) {
    return 0;
  }
  *(int *)(param_1 + 0x18d04) = 0;
  return 1;
}


