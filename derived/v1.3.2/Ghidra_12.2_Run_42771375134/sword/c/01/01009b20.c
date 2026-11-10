/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01009b20; name: FUN_01009b20
 */


void FUN_01009b20(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long local_18;
  
  if (*(long *)(param_2 + 0x578) == 0) {
    if (((*PTR_DAT_02715558 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715558), iVar1 != 0)) {
      lVar2 = FUN_006e5e60();
      *(long *)PTR_DAT_02715560 = lVar2;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      FUN_001001c0(PTR_LAB_02715568,PTR_DAT_02715560,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02715558);
    }
    local_18 = *(long *)PTR_DAT_02715560;
    if (local_18 != 0) {
      (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
    }
  }
  else {
    FUN_006e7120(&local_18);
  }
  FUN_006cf0c0(param_1,&local_18);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return;
}


