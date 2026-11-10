/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115a980; name: FUN_0115a980
 */


void FUN_0115a980(long param_1,byte param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  
  if (3 < param_2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar1 = (ulong)param_2 * 8 + 0x30;
  lVar2 = *(long *)(*(long *)(param_1 + 0x708) + lVar1 + 0x60);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_3 & 1;
  lVar1 = *(long *)(*(long *)(param_1 + 0x708) + lVar1 + 0xb0);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | ~param_3 & 1;
  return;
}


