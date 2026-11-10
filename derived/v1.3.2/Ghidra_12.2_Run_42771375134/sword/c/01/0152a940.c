/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0152a940; name: FUN_0152a940
 */


bool FUN_0152a940(long param_1,uint param_2,uint param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_2 < 0x97) && ((int)param_3 < 3)) {
    bVar1 = *(char *)(param_1 + (long)(int)param_2 * 0xb0 + (ulong)param_3 + 0x60) != '\0';
  }
  return bVar1;
}


