/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009f48f0; name: FUN_009f48f0
 */


void FUN_009f48f0(long param_1)

{
  undefined8 local_18;
  
  local_18 = FUN_016b8190(*(undefined8 *)(param_1 + 0x5d8));
  FUN_016b7990(*(undefined8 *)(param_1 + 0x5d8),&local_18,1,0);
  (**(code **)(**(long **)(param_1 + 0x5d8) + 0x50))();
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x5e0),1);
  if (*(long *)(param_1 + 0x4c0) != 0) {
    FUN_016d2080();
  }
  return;
}


