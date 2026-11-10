/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c9720; name: FUN_009c9720
 */


bool FUN_009c9720(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 < 3) {
    lVar1 = FUN_009c93c0(param_1 + (long)param_2 * 0x28 + 0x58);
    return lVar1 < 1;
  }
  return true;
}


