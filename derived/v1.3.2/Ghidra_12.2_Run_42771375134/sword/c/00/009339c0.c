/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009339c0; name: FUN_009339c0
 */


void FUN_009339c0(long param_1)

{
  if (*(uint *)(param_1 + 0x3c) < 9999) {
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) + 1;
  }
  return;
}


