/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f2b30; name: FUN_008f2b30
 */


void FUN_008f2b30(long param_1)

{
  undefined *puVar1;
  int iVar2;
  
  if (((DAT_02a4d2a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_02a4d2a0), iVar2 != 0)) {
    DAT_02a4d2e8 = 0;
    DAT_02a4d2f0 = 0;
    DAT_02a4d2f2 = 0;
    DAT_02a4d2e0 = 0;
    DAT_02a4d2b8 = 0;
    DAT_02a4d2d0 = 0;
    DAT_02a4d2d8 = 0;
    DAT_02a4d2c0 = 0;
    DAT_02a4d2c8 = 0;
    DAT_02a4d2a8 = 0;
    DAT_02a4d2b0 = 0;
    if (((*PTR_DAT_02715198 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02715198), puVar1 = PTR_DAT_027151a0, iVar2 != 0)) {
      *(undefined8 *)PTR_DAT_027151a0 = 0xcbf29ce484222645;
      *(undefined1 **)(puVar1 + 8) = &DAT_01d38550;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      FUN_001001c0(PTR_LAB_027151a8,puVar1,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02715198);
    }
    DAT_02a4d2f8 = *(undefined8 *)PTR_DAT_027151a0;
    DAT_02a4d300 = *(undefined8 *)(PTR_DAT_027151a0 + 8);
    DAT_02a4d308 = *(undefined8 *)(PTR_DAT_027151a0 + 0x10);
    DAT_02a4d310 = *(long *)(PTR_DAT_027151a0 + 0x18);
    if (DAT_02a4d310 != 0) {
      (**(code **)(*(long *)(DAT_02a4d310 + 0x48) + 0x10))();
    }
    FUN_001001c0(PTR_LAB_02717cb0,&DAT_02a4d2a8,&PTR_LOOP_025db000);
    __cxa_guard_release(&DAT_02a4d2a0);
  }
  FUN_008faa30(param_1 + 0x1e8,&DAT_02a4d2a8);
  FUN_008faa30(param_1 + 600,&DAT_02a4d2a8);
  FUN_008faa30(param_1 + 0x2c8,&DAT_02a4d2a8);
  FUN_008faa30(param_1 + 0x338,&DAT_02a4d2a8);
  FUN_008faa30(param_1 + 0x3a8,&DAT_02a4d2a8);
  return;
}


