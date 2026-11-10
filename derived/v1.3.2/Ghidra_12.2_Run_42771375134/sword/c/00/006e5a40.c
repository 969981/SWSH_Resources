/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e5a40; name: FUN_006e5a40
 */


void FUN_006e5a40(long param_1,int param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long local_58;
  char local_50 [16];
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  *(undefined8 *)(param_1 + 8) = param_3;
  *(int *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x20) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = *param_4;
  uVar1 = param_5[1];
  *(undefined8 *)(param_1 + 0x40) = *param_5;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  if (param_2 == -1) {
    if (((*PTR_DAT_02715558 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02715558), iVar2 != 0)) {
      lVar3 = FUN_006e5e60();
      *(long *)PTR_DAT_02715560 = lVar3;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      FUN_001001c0(PTR_LAB_02715568,PTR_DAT_02715560,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02715558);
    }
    FUN_006cf0c0(&local_40,PTR_DAT_02715560);
    *(long *)(param_1 + 0x18) = local_40;
    *(undefined8 *)(param_1 + 0x20) = local_38;
    *(undefined8 *)(param_1 + 0x28) = local_30;
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x30) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    *(undefined8 *)(param_1 + 0x30) = local_28;
    return;
  }
  iVar2 = snprintf(local_50,0x10,"save%d",param_2);
  local_58 = 0;
  if (local_50[0] == '\0') {
    lVar3 = FUN_006e5e60(iVar2);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_58 = lVar3;
  }
  else {
    FUN_006cf520(&local_40,*(undefined8 *)PTR_DAT_02710440,local_50);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
    local_58 = local_40;
  }
  FUN_006cf0c0(&local_40,&local_58);
  *(long *)(param_1 + 0x18) = local_40;
  *(undefined8 *)(param_1 + 0x20) = local_38;
  *(undefined8 *)(param_1 + 0x28) = local_30;
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x30) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  uVar1 = local_28;
  local_28 = 0;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}


