/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d39040; name: FUN_00d39040
 */


void FUN_00d39040(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *local_38;
  long local_28;
  
  FUN_00d1a020(&local_28,*(undefined8 *)(param_1 + 0x90));
  plVar1 = *(long **)(local_28 + (ulong)(*(int *)(param_1 + 0x378) + 0xe2U & 0xff) * 8 + 0x2c8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(plVar1[9] + 0x10))();
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  (**(code **)(*plVar1 + 0x50))(plVar1,*param_2);
  local_38 = plVar1;
  if (plVar1 == (long *)0x0) {
    FUN_00d38f30(param_1,&local_38);
  }
  else {
    plVar1 = plVar1 + 9;
    (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_00d38f30(param_1,&local_38);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    local_38 = (long *)0x0;
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  return;
}


