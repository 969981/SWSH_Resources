/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a82a90; name: FUN_00a82a90
 */


void FUN_00a82a90(undefined8 param_1,uint param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  long local_38;
  
  lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar1 == 0) {
    FUN_01009f40(&local_38,0);
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_01009f40(&local_38,lVar1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (param_3 == 0) {
    FUN_00fb4120(local_38,param_2 & 1,2);
  }
  else if (param_3 == 1) {
    FUN_00fb4120(local_38,param_2 & 1,3);
  }
  else {
    FUN_00fb4120(local_38,param_2 & 1,0);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


