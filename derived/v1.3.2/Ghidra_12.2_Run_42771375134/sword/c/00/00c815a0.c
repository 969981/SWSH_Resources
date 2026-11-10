/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c815a0; name: FUN_00c815a0
 */


void FUN_00c815a0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar1;
  long *plVar2;
  long local_48;
  
  local_48 = *param_2;
  if (local_48 == 0) {
    FUN_00c81660(param_1,&local_48,9,param_3,param_4,param_6);
    uVar1 = extraout_x1_00;
  }
  else {
    plVar2 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_00c81660(param_1,&local_48,9,param_3,param_4,param_6);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    local_48 = 0;
    uVar1 = extraout_x1;
  }
  FUN_00c819e0(param_1,uVar1,param_5,param_7);
  return;
}


