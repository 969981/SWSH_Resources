/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e5110; name: FUN_008e5110
 */


undefined8 FUN_008e5110(long param_1,long param_2)

{
  if ((((*(byte *)(param_1 + 0x87) >> 5 & 1) == 0) && ((*(byte *)(param_2 + 0x87) >> 5 & 1) == 0))
     && (*(short *)(param_2 + 0x456) == 0)) {
    return 1;
  }
  return 0;
}


