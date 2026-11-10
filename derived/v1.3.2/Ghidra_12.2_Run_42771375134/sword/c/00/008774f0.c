/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008774f0; name: FUN_008774f0
 */


uint FUN_008774f0(uint param_1)

{
  if (param_1 < 0x19) {
    return 0x1486b5dU >> (ulong)(param_1 & 0x1f) & 1;
  }
  return 0;
}


