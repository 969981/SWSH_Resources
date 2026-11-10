/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff05d0; name: FUN_00ff05d0
 */


void FUN_00ff05d0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long local_28;
  
  FUN_00ff04b0(&local_28,param_1);
  FUN_007de480(param_2);
  if (local_28 == 0) {
    FUN_006d0420(0);
    return;
  }
  plVar1 = (long *)(local_28 + 0x48);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  FUN_006d0420(local_28);
  (**(code **)(*plVar1 + 0x18))(plVar1);
  (**(code **)(*plVar1 + 0x18))(plVar1);
  return;
}


