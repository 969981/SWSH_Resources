/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008db920; name: FUN_008db920
 */


undefined8 FUN_008db920(long param_1)

{
  if ((*(uint *)(param_1 + 0x3c) >> 0x1b & 1) == 0) {
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x8000000;
    return 1;
  }
  return 0;
}


