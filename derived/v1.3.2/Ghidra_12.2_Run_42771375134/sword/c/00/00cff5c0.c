/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cff5c0; name: FUN_00cff5c0
 */


void FUN_00cff5c0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  if (*(long *)(param_1 + 0x820) == 0) {
    local_50 = 0x1e0b16eaeac74211;
    local_48 = "OptionBar";
    local_40 = 9;
    local_38 = 0;
    lVar3 = FUN_0089c480(*(undefined8 *)(param_1 + 0x60),&local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    *(long *)(param_1 + 0x820) = lVar3;
    lVar3 = *(long *)(lVar3 + 0x2b0);
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x820) + 0x2b0);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(lVar3 + 0x2e8);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  FUN_00ff86a0(&local_50,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar3 = *(long *)(local_50 + 0x60);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  FUN_0077eb10(lVar3,param_2,lVar1);
  lVar2 = *(long *)(param_1 + 0x820);
  if (lVar2 == 0) {
    local_50 = 0x1e0b16eaeac74211;
    local_48 = "OptionBar";
    local_40 = 9;
    local_38 = 0;
    lVar2 = FUN_0089c480(*(undefined8 *)(param_1 + 0x60),&local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    *(long *)(param_1 + 0x820) = lVar2;
  }
  local_58 = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_01036e80(lVar2,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


