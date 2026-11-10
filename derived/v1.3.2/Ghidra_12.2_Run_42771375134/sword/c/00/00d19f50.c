/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d19f50; name: FUN_00d19f50
 */


void FUN_00d19f50(long *param_1,long param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long local_30;
  int local_24;
  
  local_24 = param_3;
  if (param_3 < 0) {
    if (*(long *)(param_2 + 0x90) == 0) {
      local_30 = 0;
    }
    else {
      FUN_00d1a020(&local_30);
    }
    plVar1 = (long *)FUN_00d11a00(local_30 + 0xa0,param_2 + 0x60);
    lVar2 = *plVar1;
    *param_1 = lVar2;
  }
  else {
    if (*(long *)(param_2 + 0x90) == 0) {
      local_30 = 0;
    }
    else {
      FUN_00d1a020(&local_30);
    }
    plVar1 = (long *)FUN_00d11a00(local_30 + 0xa0,&local_24);
    lVar2 = *plVar1;
    *param_1 = lVar2;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
  }
  return;
}


