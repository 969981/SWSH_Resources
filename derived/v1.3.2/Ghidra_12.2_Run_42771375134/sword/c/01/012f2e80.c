/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f2e80; name: FUN_012f2e80
 */


uint FUN_012f2e80(undefined8 *param_1)

{
  uint uVar1;
  long *plVar2;
  long local_30;
  long local_28;
  
  FUN_012e8a50(&local_28,*param_1);
  if (local_28 == 0) {
    uVar1 = 0;
  }
  else {
    local_30 = FUN_01314ea0(local_28,0);
    if (local_30 == 0) {
      uVar1 = FUN_012f2440(&local_30,8);
    }
    else {
      plVar2 = (long *)(local_30 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      uVar1 = FUN_012f2440(&local_30,8);
      (**(code **)(*plVar2 + 0x18))(plVar2);
      local_30 = 0;
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return uVar1 & 1;
}


