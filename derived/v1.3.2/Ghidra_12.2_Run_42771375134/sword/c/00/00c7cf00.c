/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7cf00; name: FUN_00c7cf00
 */


void FUN_00c7cf00(long param_1,long *param_2,undefined1 *param_3)

{
  long *plVar1;
  void *__src;
  long lVar2;
  long local_38;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    local_38 = 0;
  }
  else {
    FUN_00c80dd0(&local_38);
  }
  plVar1 = (long *)FUN_00cbe970(local_38,9);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (*param_2 == *plVar1) {
    lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
    if (lVar2 == 0) {
      __src = (void *)FUN_01524df0(0);
    }
    else {
      plVar1 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __src = (void *)FUN_01524df0(lVar2);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
    memcpy(param_3,__src,0x90);
    if (*(long *)(param_1 + 0x18) == 0) {
      local_38 = 0;
    }
    else {
      FUN_00c80dd0(&local_38);
    }
    plVar1 = (long *)FUN_00cbe970(local_38,0xe);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (param_2[1] == *plVar1) {
      *param_3 = 0;
    }
    else {
      if (*(long *)(param_1 + 0x18) == 0) {
        local_38 = 0;
      }
      else {
        FUN_00c80dd0(&local_38);
      }
      plVar1 = (long *)FUN_00cbe970(local_38,0xf);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      if (param_2[1] == *plVar1) {
        *param_3 = 1;
      }
    }
  }
  return;
}


