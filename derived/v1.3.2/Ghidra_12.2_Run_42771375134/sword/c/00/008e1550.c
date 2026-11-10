/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e1550; name: FUN_008e1550
 */


undefined2 FUN_008e1550(long param_1)

{
  long lVar1;
  
  lVar1 = 0x70;
  if ((*(byte *)(param_1 + 0x87) & 0x20) != 0) {
    lVar1 = 0x2a0;
  }
  return *(undefined2 *)(param_1 + lVar1);
}


