/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffd010; name: FUN_00ffd010
 */


bool FUN_00ffd010(long param_1)

{
  bool bVar1;
  
  bVar1 = *(long *)(param_1 + 0x1b0) != 0;
  if (bVar1) {
    FUN_0167ba30();
  }
  return bVar1;
}


