/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e8c60; name: FUN_012e8c60
 */


void FUN_012e8c60(long param_1,long *param_2,undefined4 param_3)

{
  ulong uVar1;
  long *plVar2;
  long local_40;
  long local_38;
  
  local_38 = param_1;
  if (param_1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
  }
  uVar1 = FUN_012f2a10(&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if ((uVar1 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x848) = param_3;
    local_40 = *param_2;
    if (local_40 == 0) {
      FUN_012e71f0(param_1,&local_40);
    }
    else {
      plVar2 = (long *)(local_40 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_012e71f0(param_1,&local_40);
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x84c) = param_3;
  }
  return;
}


