/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014e2240; name: FUN_014e2240
 */


void FUN_014e2240(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long local_38;
  
  FUN_00ff86a0(&local_38,param_1[4],0);
  lVar1 = *(long *)(local_38 + 0x60);
  if (lVar1 == 0) {
    FUN_0077eb10(0,param_2,*param_1);
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0077eb10(lVar1,param_2,*param_1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[6] = *param_1;
  *(undefined1 *)((long)param_1 + 0x42) = 1;
  FUN_01038170(param_1[5],param_1 + 6);
  return;
}


