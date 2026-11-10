/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e5950; name: FUN_006e5950
 */


int FUN_006e5950(uint param_1)

{
  int iVar1;
  
  iVar1 = snprintf(PTR_DAT_02710b78,4,"%c:/",(ulong)(param_1 & 0xff));
  return iVar1;
}


