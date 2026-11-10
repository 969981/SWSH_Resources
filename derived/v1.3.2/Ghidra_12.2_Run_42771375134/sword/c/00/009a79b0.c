/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a79b0; name: FUN_009a79b0
 */


uint FUN_009a79b0(undefined8 param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_008f8fe0();
  if (((uVar1 & 1) == 0) && (param_2 - 0x319U < 0xe)) {
    return 0x3c7fU >> (ulong)(param_2 - 0x319U & 0x1f) & 1;
  }
  return 0;
}


