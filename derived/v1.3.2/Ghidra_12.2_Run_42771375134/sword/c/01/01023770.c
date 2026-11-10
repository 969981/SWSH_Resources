/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01023770; name: FUN_01023770
 */


void FUN_01023770(long param_1,int param_2,int param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined4 local_3c;
  long local_38;
  int local_28;
  int local_24;
  
  local_24 = param_2;
  uVar1 = FUN_01023430();
  if ((uVar1 & 1) == 0) {
    return;
  }
  local_28 = FUN_01023660(param_1,param_2);
  if (local_28 < 0) {
    return;
  }
  if (param_3 == 2) {
    FUN_0075b680(&local_38,*(undefined8 *)(param_1 + 8),&local_28);
    uVar2 = FUN_01023500(&local_38);
    FUN_0075a430(uVar2,param_1 + 0x10);
  }
  else {
    if (param_3 == 1) {
      FUN_0075b680(&local_38,*(undefined8 *)(param_1 + 8),&local_24);
      uVar2 = FUN_01023500(&local_38);
      FUN_0075a430(uVar2,param_1 + 0x10);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      FUN_0075b680(&local_38,*(undefined8 *)(param_1 + 8),&local_24);
      uVar2 = FUN_01023500(&local_38);
      local_3c = 0x3f800000;
      FUN_0075a4b0(uVar2,&local_3c);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      uVar2 = *(undefined8 *)(param_1 + 8);
      piVar3 = &local_24;
      goto LAB_010239ac;
    }
    if (param_3 != 0) {
      return;
    }
    FUN_0075b680(&local_38,*(undefined8 *)(param_1 + 8),&local_24);
    uVar2 = FUN_01023500(&local_38);
    FUN_0075a430(uVar2,param_1 + 0x10);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    FUN_0075b680(&local_38,*(undefined8 *)(param_1 + 8),&local_24);
    uVar2 = FUN_01023500(&local_38);
    local_3c = 0x3f800000;
    FUN_0075a4b0(uVar2,&local_3c);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    FUN_0075b680(&local_38,*(undefined8 *)(param_1 + 8),&local_24);
    FUN_01023500(&local_38);
    FUN_0075a3f0();
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    FUN_0075b680(&local_38,*(undefined8 *)(param_1 + 8),&local_28);
    uVar2 = FUN_01023500(&local_38);
    FUN_0075a430(uVar2,param_1 + 0x10);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_0075b680(&local_38,*(undefined8 *)(param_1 + 8),&local_28);
  uVar2 = FUN_01023500(&local_38);
  local_3c = 0x3f800000;
  FUN_0075a4b0(uVar2,&local_3c);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  piVar3 = &local_28;
LAB_010239ac:
  FUN_0075b680(&local_38,uVar2,piVar3);
  FUN_01023500(&local_38);
  FUN_0075a3f0();
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


