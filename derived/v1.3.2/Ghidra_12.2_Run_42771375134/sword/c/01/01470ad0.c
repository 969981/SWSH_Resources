/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01470ad0; name: FUN_01470ad0
 */


void FUN_01470ad0(long param_1,int param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_0216d3a8;
  if (param_3 != 0) {
    puVar1 = &UNK_0216d3b0;
  }
  FUN_00ffd010(param_1 + 0x100,puVar1 + (long)param_2 * 0x40);
  return;
}


