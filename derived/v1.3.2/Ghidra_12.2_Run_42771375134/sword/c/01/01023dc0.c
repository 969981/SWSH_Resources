/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01023dc0; name: FUN_01023dc0
 */


uint FUN_01023dc0(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int *piVar5;
  long local_38;
  int local_28;
  int local_24;
  
  local_24 = param_2;
  uVar3 = FUN_01023430();
  if (((uVar3 & 1) == 0) || (local_28 = FUN_01023660(param_1,param_2), local_28 < 0)) {
LAB_01023e78:
    uVar1 = 0;
    goto LAB_01023e7c;
  }
  if (param_3 == 2) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    piVar5 = &local_28;
LAB_01023eb0:
    FUN_0075b680(&local_38,uVar4,piVar5);
    FUN_01023500(&local_38);
    uVar1 = FUN_0075a410();
  }
  else {
    if (param_3 == 1) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      piVar5 = &local_24;
      goto LAB_01023eb0;
    }
    if (param_3 != 0) goto LAB_01023e78;
    FUN_0075b680(&local_38,*(undefined8 *)(param_1 + 8),&local_24);
    FUN_01023500(&local_38);
    uVar1 = FUN_0075a410();
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    FUN_0075b680(&local_38,*(undefined8 *)(param_1 + 8),&local_28);
    FUN_01023500(&local_38);
    uVar2 = FUN_0075a410();
    uVar1 = uVar1 | uVar2;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
LAB_01023e7c:
  return uVar1 & 1;
}


