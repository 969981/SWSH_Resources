/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e1690; name: FUN_008e1690
 */


void FUN_008e1690(long param_1,undefined1 param_2)

{
  *(ushort *)(param_1 + 0x87) = *(ushort *)(param_1 + 0x87) | 0x40;
  *(undefined1 *)(param_1 + 0x246) = param_2;
  return;
}


