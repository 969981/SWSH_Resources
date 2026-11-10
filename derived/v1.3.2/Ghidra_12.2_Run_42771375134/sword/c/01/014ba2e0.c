/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ba2e0; name: FUN_014ba2e0
 */


bool FUN_014ba2e0(int param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = param_1 - 0x11U < 10;
  if (!bVar1 && ((param_2 ^ 0xffffffff) & 1) == 0) {
    bVar1 = param_1 == 0x1b;
  }
  return bVar1;
}


