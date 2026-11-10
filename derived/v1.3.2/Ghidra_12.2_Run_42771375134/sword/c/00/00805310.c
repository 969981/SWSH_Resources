/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00805310; name: FUN_00805310
 */


void FUN_00805310(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  long local_50 [2];
  
  local_70 = 0;
  local_78 = 0;
  local_50[0] = 0;
  local_50[1] = 0;
  local_68 = 0;
  local_58 = local_50;
  local_60 = operator_new(8);
  *local_60 = (long)(PTR_DAT_02716f48 + 0x10);
  FUN_00804430(&local_78,param_1,param_2,param_3,param_4);
  plVar3 = local_58;
  while (plVar3 != local_50) {
    if ((long *)plVar3[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar3[5] + 8))();
    }
    plVar1 = (long *)plVar3[1];
    if ((long *)plVar3[1] == (long *)0x0) {
      plVar1 = plVar3 + 2;
      if (*(long **)*plVar1 == plVar3) {
        plVar3 = (long *)*plVar1;
      }
      else {
        do {
          lVar2 = *plVar1;
          plVar1 = (long *)(lVar2 + 0x10);
          plVar3 = (long *)*plVar1;
        } while (*plVar3 != lVar2);
      }
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  FUN_00809630(&local_58,local_50[0]);
  local_50[0] = 0;
  local_50[1] = 0;
  if (local_60 != (long *)0x0) {
    local_58 = local_50;
    (**(code **)(*local_60 + 8))();
  }
  return;
}


