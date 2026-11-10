/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013062f0; name: FUN_013062f0
 */


void FUN_013062f0(undefined8 param_1,long param_2)

{
  long *plVar1;
  long local_28;
  
  local_28 = param_2;
  if (param_2 == 0) {
    FUN_01306370(param_1,&local_28);
    return;
  }
  plVar1 = (long *)(param_2 + 0x48);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  FUN_01306370(param_1,&local_28);
  (**(code **)(*plVar1 + 0x18))(plVar1);
  return;
}


