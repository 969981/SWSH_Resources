/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e0710; name: FUN_001e0710
 */


void FUN_001e0710(long param_1,long *param_2,long *param_3)

{
  long local_30;
  long local_28;
  
  (**(code **)(*(long *)(param_1 + -0x20) + 0x38))((long *)(param_1 + -0x20),&local_28,&local_30);
  if (local_28 != 0) {
    local_28 = local_28 + 0x60;
  }
  *param_2 = local_28;
  if (local_30 != 0) {
    local_30 = local_30 + 0x60;
  }
  *param_3 = local_30;
  return;
}


