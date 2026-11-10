/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040a140; name: FUN_0040a140
 */


long FUN_0040a140(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0xdc) >> 2 & 1) == 0) {
    do {
      lVar1 = *(long *)(param_1 + 0x78);
      if (lVar1 == 0) break;
      param_1 = lVar1;
    } while ((*(byte *)(lVar1 + 0xdc) >> 2 & 1) == 0);
  }
  return param_1 + 200;
}


