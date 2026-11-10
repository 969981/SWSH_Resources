/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103a150; name: FUN_0103a150
 */


bool FUN_0103a150(long param_1)

{
  if (*(long *)(param_1 + 0xba0) == 0) {
    return false;
  }
  return *(int *)(*(long *)(param_1 + 0xba0) + 0x198) == 3;
}


