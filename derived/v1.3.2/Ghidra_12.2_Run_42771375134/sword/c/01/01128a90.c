/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01128a90; name: FUN_01128a90
 */


void FUN_01128a90(long *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long local_38;
  long *local_30;
  long local_28;
  
  uVar1 = *(undefined8 *)PTR_DAT_027104b0;
  if (param_1 == (long *)0x0) {
    local_38 = 0;
    local_30 = (long *)0x0;
  }
  else {
    plVar2 = param_1 + 0xd;
    (**(code **)(*param_1 + 0x10))(&local_28);
    local_38 = local_28;
    local_30 = plVar2;
    if ((local_28 != 0) && ((**(code **)(*(long *)(local_28 + 0x48) + 0x10))(), local_28 != 0)) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
  }
  FUN_007b59f0(uVar1,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


