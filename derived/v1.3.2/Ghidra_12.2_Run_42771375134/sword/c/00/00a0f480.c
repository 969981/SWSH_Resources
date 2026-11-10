/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0f480; name: FUN_00a0f480
 */


void FUN_00a0f480(long param_1,byte param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | param_2 & 1;
  }
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | param_2 & 1;
  }
  return;
}


