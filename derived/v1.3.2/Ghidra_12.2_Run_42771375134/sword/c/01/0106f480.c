/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106f480; name: FUN_0106f480
 */


char FUN_0106f480(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 8);
  return ((bVar1 & 1) + (bVar1 >> 1 & 1) + (bVar1 >> 2 & 1) + (bVar1 >> 3 & 1) + (bVar1 >> 4 & 1) +
          (bVar1 >> 5 & 1) + (bVar1 >> 6 & 1)) - ((char)bVar1 >> 7);
}


