/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bef0c0; name: FUN_00bef0c0
 */


void FUN_00bef0c0(long param_1,uint param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  long alStack_50 [4];
  long *local_30;
  
  local_30 = alStack_50;
  param_1 = param_1 + (ulong)(param_2 & 0xff) * 0x40;
  *(uint *)(param_1 + 0x640) = param_2;
  plVar1 = (long *)param_3[4];
  if (plVar1 == (long *)0x0) {
    local_30 = (long *)0x0;
  }
  else if (param_3 == plVar1) {
    (**(code **)(*plVar1 + 0x18))(plVar1,alStack_50);
  }
  else {
    local_30 = (long *)(**(code **)(*plVar1 + 0x10))();
  }
  FUN_00bf17b0(alStack_50,param_1 + 0x650);
  if (alStack_50 == local_30) {
    pcVar2 = *(code **)(*local_30 + 0x20);
  }
  else {
    if (local_30 == (long *)0x0) {
      return;
    }
    pcVar2 = *(code **)(*local_30 + 0x28);
  }
  (*pcVar2)();
  return;
}


