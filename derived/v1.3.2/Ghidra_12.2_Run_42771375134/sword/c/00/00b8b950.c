/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b8b950; name: FUN_00b8b950
 */


byte FUN_00b8b950(long param_1)

{
  byte bVar1;
  
  bVar1 = FUN_016ae380(*(undefined8 *)(param_1 + 0x58));
  if ((bVar1 & 1) == 0) {
    FUN_016ad050(*(undefined8 *)(param_1 + 0x58));
  }
  *(byte *)(param_1 + 0x78) = bVar1 & 1;
  return bVar1 & 1;
}


