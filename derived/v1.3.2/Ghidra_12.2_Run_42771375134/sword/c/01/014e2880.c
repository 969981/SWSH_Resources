/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014e2880; name: FUN_014e2880
 */


void FUN_014e2880(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  long local_68;
  
  if (*(char *)(param_1 + 0x210) != '\0') {
    return;
  }
  FUN_00ff86a0(&local_68,*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(local_68 + 0x60);
  if (lVar1 == 0) {
    FUN_0077eb10(0,param_4,*(undefined8 *)(param_1 + 8));
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0077eb10(lVar1,param_4,*(undefined8 *)(param_1 + 8));
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  FUN_00ff86a0(&local_68,*(undefined8 *)(param_1 + 0x20),param_2);
  lVar1 = *(long *)(local_68 + 0x60);
  if (lVar1 == 0) {
    FUN_0077eb10(0,param_5,*(undefined8 *)(param_1 + 0x10));
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0077eb10(lVar1,param_5,*(undefined8 *)(param_1 + 0x10));
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  FUN_00ff86a0(&local_68,*(undefined8 *)(param_1 + 0x20),param_2);
  lVar1 = *(long *)(local_68 + 0x60);
  if (lVar1 == 0) {
    FUN_0077eb10(0,param_6,*(undefined8 *)(param_1 + 0x18));
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0077eb10(lVar1,param_6,*(undefined8 *)(param_1 + 0x18));
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x18);
  FUN_014e2540(param_1,1,1,0,param_2,param_3,param_7,param_8);
  return;
}


