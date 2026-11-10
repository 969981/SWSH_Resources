/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01018640; name: FUN_01018640
 */


byte FUN_01018640(void)

{
  byte bVar1;
  
  bVar1 = FUN_01018430();
  if (0xe < bVar1) {
    bVar1 = bVar1 - 0xf;
  }
  return bVar1;
}


