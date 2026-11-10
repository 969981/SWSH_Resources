/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007daeb0; name: FUN_007daeb0
 */


void FUN_007daeb0(undefined8 param_1,long *param_2,uint param_3)

{
  long *plVar1;
  long local_28;
  
  local_28 = *param_2;
  if (local_28 == 0) {
    FUN_007daf40(param_1,&local_28,0,param_3 & 1);
    return;
  }
  plVar1 = (long *)(local_28 + 0x48);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  FUN_007daf40(param_1,&local_28,0,param_3 & 1);
  (**(code **)(*plVar1 + 0x18))(plVar1);
  return;
}


