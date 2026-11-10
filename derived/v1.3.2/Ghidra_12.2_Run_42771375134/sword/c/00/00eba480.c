/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eba480; name: FUN_00eba480
 */


void FUN_00eba480(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [24];
  long local_38;
  undefined8 local_30;
  long local_28;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_30 = *(undefined8 *)(param_1 + 0x3a0);
  if (*(long *)(lVar4 + 0x688) == 0) {
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
    local_28 = *(long *)PTR_DAT_02715560;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
  }
  else {
    FUN_006e7120(&local_28,*(long *)(lVar4 + 0x688),&local_30);
  }
  FUN_006cf0c0(auStack_50,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  FUN_00eba8a0(&local_28,"script/",auStack_50,&DAT_01ce587b);
  puVar1 = (undefined8 *)PTR_DAT_02710920;
  if (local_28 != 0) {
    puVar1 = (undefined8 *)(local_28 + 0x58);
  }
  *(undefined8 *)(param_1 + 0x670) = *puVar1;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


