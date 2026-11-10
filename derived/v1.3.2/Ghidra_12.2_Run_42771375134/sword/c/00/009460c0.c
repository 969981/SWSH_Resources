/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009460c0; name: FUN_009460c0
 */


long FUN_009460c0(long param_1)

{
  byte bVar1;
  
  if (*(byte *)(param_1 + 0xb48) == 0) {
    return 0;
  }
  bVar1 = 0;
  do {
    if (*(char *)(param_1 + (ulong)bVar1 * 0x60 + 0x61) == '\0') {
      return param_1 + (ulong)bVar1 * 0x60 + 8;
    }
    bVar1 = bVar1 + 1;
  } while (bVar1 < *(byte *)(param_1 + 0xb48));
  return 0;
}


