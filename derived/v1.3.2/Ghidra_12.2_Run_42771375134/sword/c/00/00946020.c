/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00946020; name: FUN_00946020
 */


void FUN_00946020(long param_1)

{
  if ((ulong)*(byte *)(param_1 + 0xb48) < 0x1e) {
    FUN_00946a30(param_1 + (ulong)*(byte *)(param_1 + 0xb48) * 0x60 + 8);
    *(char *)(param_1 + 0xb48) = *(char *)(param_1 + 0xb48) + '\x01';
  }
  return;
}


