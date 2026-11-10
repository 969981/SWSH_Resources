/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014701a0; name: FUN_014701a0
 */


void FUN_014701a0(long param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = *(undefined4 *)(*(long *)(param_1 + 0x5d0) + 0x10);
  uStack_14 = 0;
  FUN_016b7990(*(undefined8 *)(param_1 + 0x600),&local_18,1,0);
  *(byte *)(*(long *)(param_1 + 0x618) + 0x58) = *(byte *)(*(long *)(param_1 + 0x618) + 0x58) | 1;
  return;
}


