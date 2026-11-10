/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a2d00; name: FUN_014a2d00
 */


void FUN_014a2d00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  if (((*PTR_DAT_02715198 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_02715198), puVar1 = PTR_DAT_027151a0, iVar2 != 0)) {
    *(undefined8 *)PTR_DAT_027151a0 = 0xcbf29ce484222645;
    *(undefined1 **)(puVar1 + 8) = &DAT_01d38550;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    FUN_001001c0(PTR_LAB_027151a8,puVar1,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02715198);
  }
  local_50 = *(undefined8 *)PTR_DAT_027151a0;
  uStack_48 = *(undefined8 *)(PTR_DAT_027151a0 + 8);
  local_40 = *(undefined8 *)(PTR_DAT_027151a0 + 0x10);
  local_38 = *(long *)(PTR_DAT_027151a0 + 0x18);
  uVar3 = 0;
  if (local_38 != 0) {
    uVar3 = (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  uVar4 = FUN_014a2840(uVar3,param_3,&local_50);
  if ((uVar4 & 1) != 0) {
    FUN_014a7c60(param_1,&local_50,param_2);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


