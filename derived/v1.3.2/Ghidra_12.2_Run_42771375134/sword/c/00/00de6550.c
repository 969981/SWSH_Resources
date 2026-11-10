/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de6550; name: FUN_00de6550
 */


void FUN_00de6550(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_28;
  
  if (*(int *)((long)param_1 + 0x514) - 2U < 2) {
    local_40 = 0xc38377b8b0fe5e05;
    local_38 = "map_door_trigger";
    local_30 = 0x10;
    local_28 = 0;
    (**(code **)(*param_1 + 0x1b0))(param_1,&local_40);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
  }
  else if (*(int *)((long)param_1 + 0x514) == 1) {
    *(undefined1 *)((long)param_1 + 0x51c) = 1;
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  if (((*PTR_DAT_02715198 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_02715198), puVar1 = PTR_DAT_027151a0, iVar2 != 0)) {
    *(undefined8 *)PTR_DAT_027151a0 = 0xcbf29ce484222645;
    *(undefined1 **)(puVar1 + 8) = &DAT_01d38550;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    FUN_001001c0(PTR_LAB_027151a8,puVar1,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02715198);
  }
  if (param_1[0xa5] != *(long *)PTR_DAT_027151a0) {
    FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,param_1 + 0xa5);
  }
  return;
}


