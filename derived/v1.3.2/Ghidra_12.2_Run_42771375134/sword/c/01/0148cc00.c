/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0148cc00; name: FUN_0148cc00
 */


void FUN_0148cc00(long param_1)

{
  undefined8 local_18;
  
  local_18 = 0;
  FUN_016b7990(*(undefined8 *)(param_1 + 0x5e8),&local_18,1,0);
  *(byte *)(*(long *)(param_1 + 0x5f0) + 0x58) = *(byte *)(*(long *)(param_1 + 0x5f0) + 0x58) | 1;
  return;
}


