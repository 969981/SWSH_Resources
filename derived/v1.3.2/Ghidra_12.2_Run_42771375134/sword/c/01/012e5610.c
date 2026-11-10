/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e5610; name: FUN_012e5610
 */


void FUN_012e5610(long param_1,long *param_2)

{
  long *plVar1;
  long local_28;
  
  *(undefined4 *)(param_1 + 0x504) = 1;
  local_28 = *param_2;
  if (local_28 == 0) {
    FUN_012e56a0(param_1,&local_28);
    return;
  }
  plVar1 = (long *)(local_28 + 0x48);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  FUN_012e56a0(param_1,&local_28);
  (**(code **)(*plVar1 + 0x18))(plVar1);
  return;
}


