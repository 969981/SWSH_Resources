/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115b420; name: FUN_0115b420
 */


void FUN_0115b420(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 0x5f0) + 0x58) & 1) == 0) {
    return;
  }
  FUN_01159350();
  return;
}


