/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ce2c50; name: FUN_00ce2c50
 */


void FUN_00ce2c50(long param_1)

{
  uint local_18 [2];
  
  local_18[0] = (uint)*(byte *)(*(long *)(param_1 + 0x5d0) + 0x70);
  local_18[1] = 0;
  FUN_016b7990(*(undefined8 *)(param_1 + 0x600),local_18,1,0);
  *(byte *)(*(long *)(param_1 + 0x620) + 0x58) = *(byte *)(*(long *)(param_1 + 0x620) + 0x58) | 1;
  return;
}


