/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e3bf0; name: FUN_008e3bf0
 */


undefined8 FUN_008e3bf0(long param_1)

{
  byte bVar1;
  byte bVar2;
  
  if ((*(byte *)(param_1 + 0xc0) & 7) != 0) {
    bVar2 = FUN_008ed270();
    if ((bVar2 != 0) &&
       (bVar1 = *(char *)(param_1 + 0x1fe) + 1, *(byte *)(param_1 + 0x1fe) = bVar1, bVar2 <= bVar1))
    {
      return 1;
    }
  }
  return 0;
}


