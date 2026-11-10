/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01073800; name: FUN_01073800
 */


void FUN_01073800(long param_1)

{
  *(undefined4 *)(param_1 + 0x5d8) = 1;
  if (*(long *)(param_1 + 0x4c0) == 0) {
    return;
  }
  FUN_016d2080();
  return;
}


