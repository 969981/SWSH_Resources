/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f2890; name: FUN_012f2890
 */


uint FUN_012f2890(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long local_28;
  
  local_28 = *param_1;
  if (local_28 == 0) {
    uVar1 = FUN_012f2440(&local_28,2);
  }
  else {
    plVar2 = (long *)(local_28 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    uVar1 = FUN_012f2440(&local_28,2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  return uVar1 & 1;
}


