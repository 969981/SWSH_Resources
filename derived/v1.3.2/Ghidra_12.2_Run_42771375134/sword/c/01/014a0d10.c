/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a0d10; name: FUN_014a0d10
 */


void FUN_014a0d10(long param_1)

{
  uint uVar1;
  long local_18;
  
  uVar1 = 0;
  if (*(short *)(*(long *)(param_1 + 0x5d0) + 0x42) != 0x31b) {
    uVar1 = 6;
  }
  local_18 = (ulong)uVar1 << 0x20;
  FUN_016b7990(*(undefined8 *)(param_1 + 0x5e8),&local_18,1,0);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5e8),1);
  (**(code **)(**(long **)(param_1 + 0x5e8) + 0x50))();
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x5f0),1);
  return;
}


