/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a2220; name: FUN_007a2220
 */


void FUN_007a2220(long *param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long local_48;
  long *local_40;
  long local_38;
  
  uVar1 = *(undefined8 *)PTR_DAT_027104b0;
  if (param_1 == (long *)0x0) {
    local_48 = 0;
    local_40 = (long *)0x0;
  }
  else {
    plVar2 = param_1 + 0xc;
    (**(code **)(*param_1 + 0x10))(&local_38,param_1);
    local_48 = local_38;
    local_40 = plVar2;
    if ((local_38 != 0) && ((**(code **)(*(long *)(local_38 + 0x48) + 0x10))(), local_38 != 0)) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
  }
  FUN_007b58c0(uVar1,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  param_1[0x50] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  return;
}


