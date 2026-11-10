/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075f5d0; name: FUN_0075f5d0
 */


void FUN_0075f5d0(long param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xc) | 8;
  if ((param_2 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xc) & 0xf7;
  }
  *(byte *)(param_1 + 0xc) = bVar1;
  return;
}


