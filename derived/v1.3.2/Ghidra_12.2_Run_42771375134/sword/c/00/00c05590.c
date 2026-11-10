/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c05590; name: FUN_00c05590
 */


void FUN_00c05590(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long local_40 [4];
  
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[4];
    if (plVar1 == param_1) {
      if ((long *)param_2[4] == param_2) {
        (**(code **)(*plVar1 + 0x18))(plVar1,local_40);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = 0;
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
        param_1[4] = (long)param_1;
        (**(code **)(local_40[0] + 0x18))(local_40,param_2);
        (**(code **)(local_40[0] + 0x20))(local_40);
        param_2[4] = (long)param_2;
        return;
      }
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      (**(code **)(*(long *)param_1[4] + 0x20))();
      param_1[4] = param_2[4];
      param_2[4] = (long)param_2;
      return;
    }
    plVar2 = (long *)param_2[4];
    if (param_2 == plVar2) {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
      (**(code **)(*(long *)param_2[4] + 0x20))();
      param_2[4] = param_1[4];
      param_1[4] = (long)param_1;
      return;
    }
    param_1[4] = (long)plVar2;
    param_2[4] = (long)plVar1;
  }
  return;
}


