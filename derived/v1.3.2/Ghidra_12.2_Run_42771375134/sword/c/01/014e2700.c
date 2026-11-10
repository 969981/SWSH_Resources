/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014e2700; name: FUN_014e2700
 */


void FUN_014e2700(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 local_50;
  long local_48;
  
  if (*(char *)(param_1 + 0x210) != '\0') {
    return;
  }
  FUN_00ff86a0(&local_48,*(undefined8 *)(param_1 + 0x20),0);
  lVar1 = *(long *)(local_48 + 0x60);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  local_50 = 0x5bc320fa6f7520ee;
  FUN_0077eb10(lVar1,&local_50,*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  FUN_00ff86a0(&local_48,*(undefined8 *)(param_1 + 0x20),0);
  lVar1 = *(long *)(local_48 + 0x60);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  local_50 = 0x5bc31ffa6f751f3b;
  FUN_0077eb10(lVar1,&local_50,*(undefined8 *)(param_1 + 0x10));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x10);
  FUN_014e2540(param_1,1,1,0,param_2,param_3,param_4,param_5);
  return;
}


