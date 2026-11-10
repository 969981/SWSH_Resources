/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00946070; name: FUN_00946070
 */


undefined8 FUN_00946070(long param_1)

{
  byte bVar1;
  
  if (*(byte *)(param_1 + 0xb48) == 0) {
    return 1;
  }
  bVar1 = 0;
  do {
    if (*(char *)(param_1 + (ulong)bVar1 * 0x60 + 0x61) == '\0') {
      return 0;
    }
    bVar1 = bVar1 + 1;
  } while (bVar1 < *(byte *)(param_1 + 0xb48));
  return 1;
}


