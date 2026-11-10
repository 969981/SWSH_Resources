/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0146bf40; name: FUN_0146bf40
 */


void FUN_0146bf40(long param_1,byte param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x158) == -0x340d631b7bddd9bb || *(long *)(param_1 + 0x158) == 0) {
    return;
  }
  lVar1 = FUN_0167b6b0(*(undefined8 *)(param_1 + 8),param_1 + 0x158);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | param_2 & 1;
  return;
}


