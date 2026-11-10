/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01134b80; name: FUN_01134b80
 */


void FUN_01134b80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 local_40;
  long local_38;
  
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = param_3;
  FUN_00ff86a0(&local_38,param_2,0);
  lVar1 = *(long *)(local_38 + 0x60);
  if (lVar1 == 0) {
    local_40 = 0x2473e0678aa4b35f;
    FUN_0077eb10(0,&local_40,*(undefined8 *)(param_1 + 0x10));
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    local_40 = 0x2473e0678aa4b35f;
    FUN_0077eb10(lVar1,&local_40,*(undefined8 *)(param_1 + 0x10));
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_00ff86a0(&local_38,*(undefined8 *)(param_1 + 0x20),0);
  lVar1 = *(long *)(local_38 + 0x60);
  if (lVar1 == 0) {
    local_40 = 0x2473e1678aa4b512;
    FUN_0077eb10(0,&local_40,*(undefined8 *)(param_1 + 0x18));
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    local_40 = 0x2473e1678aa4b512;
    FUN_0077eb10(lVar1,&local_40,*(undefined8 *)(param_1 + 0x18));
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


