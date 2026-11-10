/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d70930; name: FUN_00d70930
 */


void FUN_00d70930(long *param_1,undefined8 param_2)

{
  long lVar1;
  long local_18;
  
  FUN_00ff86a0(&local_18,param_2,0);
  lVar1 = *(long *)(local_18 + 0x60);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))((long *)(lVar1 + 0x48));
  }
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return;
}


