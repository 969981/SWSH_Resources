/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00480360; name: FUN_00480360
 */


byte FUN_00480360(long param_1,uint *param_2)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x9d) >> 4 & 1) == 0) {
    do {
      lVar1 = *(long *)(param_1 + 0x78);
      if (lVar1 == 0) break;
      param_1 = lVar1;
    } while ((*(byte *)(lVar1 + 0x9d) >> 4 & 1) == 0);
  }
  *param_2 = *(byte *)(param_1 + 0xb0) >> 3 & 7;
  return *(byte *)(param_1 + 0xb1) & 0xf;
}


