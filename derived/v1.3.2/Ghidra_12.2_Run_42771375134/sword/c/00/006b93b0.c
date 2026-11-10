/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b93b0; name: FUN_006b93b0
 */


undefined * FUN_006b93b0(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (*param_1 != 0) {
    puVar2 = (undefined *)FUN_006b6500();
    return puVar2;
  }
  if ((*PTR_DAT_02715198 & 1) != 0) {
    return PTR_DAT_027151a0;
  }
  iVar1 = __cxa_guard_acquire(PTR_DAT_02715198);
  puVar2 = PTR_DAT_027151a0;
  if (iVar1 == 0) {
    return PTR_DAT_027151a0;
  }
  *(undefined8 *)PTR_DAT_027151a0 = 0xcbf29ce484222645;
  *(undefined1 **)(puVar2 + 8) = &DAT_01d38550;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  FUN_001001c0(PTR_LAB_027151a8,puVar2,&PTR_LOOP_025db000);
  __cxa_guard_release(PTR_DAT_02715198);
  return puVar2;
}


