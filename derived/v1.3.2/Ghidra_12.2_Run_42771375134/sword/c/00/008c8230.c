/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c8230; name: FUN_008c8230
 */


void FUN_008c8230(long param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  *(undefined4 *)(param_1 + 0x820) = 1;
  local_18 = param_2;
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5e8),0);
  if (*(char *)(*(long *)(param_1 + 0x5e8) + 0x80) != '\0') {
    FUN_016b2eb0();
  }
  FUN_016b7990(*(undefined8 *)(param_1 + 0x818),&local_18,1,0);
  (**(code **)(**(long **)(param_1 + 0x818) + 0x50))();
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x818),1);
  return;
}


