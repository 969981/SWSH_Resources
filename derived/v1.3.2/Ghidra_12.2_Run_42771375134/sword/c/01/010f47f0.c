/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f47f0; name: FUN_010f47f0
 */


int FUN_010f47f0(long param_1)

{
  if (*(char *)(param_1 + 0x5e4) != '\0') {
    return 1;
  }
  if (*(uint *)(param_1 + 0x5e0) < 3) {
    return *(uint *)(param_1 + 0x5e0) + 2;
  }
  return 0;
}


