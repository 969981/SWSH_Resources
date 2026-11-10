/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b0bf0; name: FUN_003b0bf0
 */


void FUN_003b0bf0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 8);
  *(long *)(param_2 + 8) = lVar1 + 0x188;
  *(long *)(param_1 + 0x30) = lVar1;
  FUN_003b0690(lVar1);
  return;
}


