/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ce2ca0; name: FUN_00ce2ca0
 */


void FUN_00ce2ca0(long param_1)

{
  undefined8 local_18;
  
  local_18 = 0;
  FUN_016b7990(*(undefined8 *)(param_1 + 0x608),&local_18,1,0);
  *(byte *)(*(long *)(param_1 + 0x620) + 0x58) = *(byte *)(*(long *)(param_1 + 0x620) + 0x58) | 1;
  return;
}


