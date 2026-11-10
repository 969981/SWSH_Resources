/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009f4890; name: FUN_009f4890
 */


void FUN_009f4890(long param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_2;
  FUN_016b7990(*(undefined8 *)(param_1 + 0x5d8),&local_18,1,0);
  (**(code **)(**(long **)(param_1 + 0x5d8) + 0x50))();
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x5e0),1);
  if (*(long *)(param_1 + 0x4c0) != 0) {
    FUN_016d2080();
  }
  return;
}


