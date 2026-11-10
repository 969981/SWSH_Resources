/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e1570; name: FUN_008e1570
 */


byte FUN_008e1570(long param_1)

{
  return *(byte *)(param_1 + 0x87) >> 5 & 1;
}


