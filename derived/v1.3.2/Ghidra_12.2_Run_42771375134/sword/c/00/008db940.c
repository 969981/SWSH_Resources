/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008db940; name: FUN_008db940
 */


undefined8 FUN_008db940(long param_1)

{
  if ((*(uint *)(param_1 + 0x3c) >> 0x1b & 1) == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xf7ffffff;
  return 1;
}


