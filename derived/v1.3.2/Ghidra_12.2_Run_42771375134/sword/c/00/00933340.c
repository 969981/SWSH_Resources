/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00933340; name: FUN_00933340
 */


bool FUN_00933340(long param_1,byte param_2,byte param_3,uint param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if (((param_2 < 0x1e) && (param_3 < 2)) && ((param_4 & 0xff) < 5)) {
    bVar1 = (*(uint *)(param_1 + (ulong)param_3 * 0x78 + (ulong)param_2 * 4 + 8) &
            1 << (ulong)(param_4 & 0x1f)) != 0;
  }
  return bVar1;
}


