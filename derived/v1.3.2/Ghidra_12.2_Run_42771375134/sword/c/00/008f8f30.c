/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f8f30; name: FUN_008f8f30
 */


bool FUN_008f8f30(long param_1)

{
  if ((*(int *)(param_1 + 0x150) == 2) || (3 < **(uint **)(param_1 + 0x88))) {
    return false;
  }
  return (**(uint **)(param_1 + 0x88) & 0xf) == 0;
}


