/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072a630; name: FUN_0072a630
 */


void FUN_0072a630(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_02715198 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_02715198), puVar1 = PTR_DAT_027151a0, iVar2 != 0)) {
    *(undefined8 *)PTR_DAT_027151a0 = 0xcbf29ce484222645;
    *(undefined1 **)(puVar1 + 8) = &DAT_01d38550;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    FUN_001001c0(PTR_LAB_027151a8,puVar1,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02715198);
  }
  FUN_0072a0d0(param_1,PTR_DAT_027151a0,0);
  FUN_0072a6e0(param_1,param_2);
  return;
}


