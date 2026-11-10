/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b94f0; name: FUN_006b94f0
 */


undefined * FUN_006b94f0(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  
  if (((*param_1 != 0) && (lVar2 = FUN_006b6550(), lVar2 != 0)) &&
     (lVar2 = FUN_006b65f0(), lVar2 != 0)) {
    FUN_006b6550(*param_1);
    FUN_006b65f0();
    FUN_006b8210();
    puVar3 = (undefined *)FUN_006b64e0();
    return puVar3;
  }
  if ((*PTR_DAT_02715198 & 1) != 0) {
    return PTR_DAT_027151a0;
  }
  iVar1 = __cxa_guard_acquire(PTR_DAT_02715198);
  puVar3 = PTR_DAT_027151a0;
  if (iVar1 == 0) {
    return PTR_DAT_027151a0;
  }
  *(undefined8 *)PTR_DAT_027151a0 = 0xcbf29ce484222645;
  *(undefined1 **)(puVar3 + 8) = &DAT_01d38550;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  FUN_001001c0(PTR_LAB_027151a8,puVar3,&PTR_LOOP_025db000);
  __cxa_guard_release(PTR_DAT_02715198);
  return puVar3;
}


