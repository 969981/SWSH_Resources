/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a0760; name: FUN_014a0760
 */


void FUN_014a0760(long param_1)

{
  undefined8 local_18;
  
  if (*(short *)(*(long *)(param_1 + 0x5d0) + 0x42) == 0x31c) {
    local_18 = 0;
    FUN_016b81d0(*(undefined8 *)(param_1 + 0x5e8),&local_18,0);
    local_18 = 0x100000000;
    FUN_016b81d0(*(undefined8 *)(param_1 + 0x5e8),&local_18,0);
    local_18 = 0x200000000;
    FUN_016b81d0(*(undefined8 *)(param_1 + 0x5e8),&local_18,0);
    local_18 = 0x300000000;
    FUN_016b81d0(*(undefined8 *)(param_1 + 0x5e8),&local_18,0);
    local_18 = 0x400000000;
    FUN_016b81d0(*(undefined8 *)(param_1 + 0x5e8),&local_18,0);
    local_18 = 0x500000000;
    FUN_016b81d0(*(undefined8 *)(param_1 + 0x5e8),&local_18,0);
  }
  return;
}


