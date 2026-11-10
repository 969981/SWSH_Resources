/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d1210; name: FUN_004d1210
 */


void FUN_004d1210(long param_1,byte param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    do {
      *(byte *)(lVar1 + 0x2a4) = *(byte *)(lVar1 + 0x2a4) & 0xfd | (param_2 & 1) << 1;
      lVar1 = *(long *)(lVar1 + 0x40);
    } while (lVar1 != 0);
  }
  return;
}


