/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f91e0; name: FUN_008f91e0
 */


bool FUN_008f91e0(long param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_009c98b0(param_2);
  return *(char *)(param_1 + 0x174) == cVar1;
}


