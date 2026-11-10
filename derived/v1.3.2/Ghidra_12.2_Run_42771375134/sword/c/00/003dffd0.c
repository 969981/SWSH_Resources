/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dffd0; name: FUN_003dffd0
 */


void FUN_003dffd0(long param_1,long param_2)

{
  long local_18;
  
  local_18 = param_2;
  FUN_003c36b0(param_1 + 0x968,&local_18);
  *(byte *)(local_18 + 0x88) = *(byte *)(local_18 + 0x88) & 0xfb;
  return;
}


