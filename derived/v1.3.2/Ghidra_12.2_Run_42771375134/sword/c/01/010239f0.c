/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010239f0; name: FUN_010239f0
 */


void FUN_010239f0(undefined4 param_1,long param_2,int param_3,undefined8 param_4,int param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  long local_48;
  int local_3c;
  undefined4 local_38;
  int local_34;
  
  local_38 = param_1;
  local_34 = param_3;
  uVar1 = FUN_01023430();
  if ((uVar1 & 1) == 0) {
    return;
  }
  local_3c = FUN_01023660(param_2,param_3);
  if (local_3c < 0) {
    return;
  }
  if (param_5 != 2) {
    if (param_5 == 1) {
      FUN_0075b680(&local_48,*(undefined8 *)(param_2 + 8),&local_34);
      uVar2 = FUN_01023500(&local_48);
      FUN_0075a430(uVar2,param_4);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      FUN_0075b680(&local_48,*(undefined8 *)(param_2 + 8),&local_34);
      uVar2 = FUN_01023500(&local_48);
      FUN_0075a4b0(uVar2,&local_38);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      uVar2 = *(undefined8 *)(param_2 + 8);
      piVar3 = &local_34;
      goto LAB_01023bec;
    }
    if (param_5 != 0) {
      return;
    }
    FUN_0075b680(&local_48,*(undefined8 *)(param_2 + 8),&local_34);
    uVar2 = FUN_01023500(&local_48);
    FUN_0075a430(uVar2,param_4);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    FUN_0075b680(&local_48,*(undefined8 *)(param_2 + 8),&local_34);
    uVar2 = FUN_01023500(&local_48);
    FUN_0075a4b0(uVar2,&local_38);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    FUN_0075b680(&local_48,*(undefined8 *)(param_2 + 8),&local_34);
    FUN_01023500(&local_48);
    FUN_0075a3f0();
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
  }
  FUN_0075b680(&local_48,*(undefined8 *)(param_2 + 8),&local_3c);
  uVar2 = FUN_01023500(&local_48);
  FUN_0075a430(uVar2,param_4);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  FUN_0075b680(&local_48,*(undefined8 *)(param_2 + 8),&local_3c);
  uVar2 = FUN_01023500(&local_48);
  FUN_0075a4b0(uVar2,&local_38);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  uVar2 = *(undefined8 *)(param_2 + 8);
  piVar3 = &local_3c;
LAB_01023bec:
  FUN_0075b680(&local_48,uVar2,piVar3);
  FUN_01023500(&local_48);
  FUN_0075a3f0();
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


