/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e16b0; name: FUN_008e16b0
 */


undefined1 FUN_008e16b0(long param_1)

{
  long lVar1;
  
  lVar1 = 0x7d;
  if ((*(byte *)(param_1 + 0x87) & 0x40) != 0) {
    lVar1 = 0x246;
  }
  return *(undefined1 *)(param_1 + lVar1);
}


