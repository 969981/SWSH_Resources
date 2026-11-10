/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c8180; name: FUN_008c8180
 */


void FUN_008c8180(long param_1,int param_2)

{
  undefined8 local_18;
  
  if (*(int *)(param_1 + 0x820) != param_2) {
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x820) = 0;
      FUN_016b2d70(*(undefined8 *)(param_1 + 0x5e8),1);
      (**(code **)(**(long **)(param_1 + 0x5e8) + 0x50))();
      FUN_016b2eb0(*(undefined8 *)(param_1 + 0x818));
      return;
    }
    *(undefined4 *)(param_1 + 0x820) = 1;
    FUN_016b2d70(*(undefined8 *)(param_1 + 0x5e8),0);
    FUN_016b2eb0(*(undefined8 *)(param_1 + 0x5e8));
    local_18 = 0;
    FUN_016b7990(*(undefined8 *)(param_1 + 0x818),&local_18,1,0);
    (**(code **)(**(long **)(param_1 + 0x818) + 0x50))();
    FUN_016b2d70(*(undefined8 *)(param_1 + 0x818),1);
  }
  return;
}


