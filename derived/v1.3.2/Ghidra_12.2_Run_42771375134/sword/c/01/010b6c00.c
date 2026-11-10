/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b6c00; name: FUN_010b6c00
 */


void FUN_010b6c00(long param_1,ulong param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  if ((param_2 & 1) == 0) {
    FUN_016b2d70(*(long **)(param_1 + 0x618),0);
    FUN_016b2eb0(*(undefined8 *)(param_1 + 0x618));
    FUN_016b2da0(*(undefined8 *)(param_1 + 0x618),0);
    return;
  }
  (**(code **)(**(long **)(param_1 + 0x618) + 0x50))();
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x618),1);
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x618),1);
  uStack_14 = *(undefined4 *)(param_1 + 0x610);
  local_18 = 0;
  FUN_016b7990(*(undefined8 *)(param_1 + 0x618),&local_18,1,0);
  return;
}


