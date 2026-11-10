/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01511640; name: FUN_01511640
 */


void FUN_01511640(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_2 + 8) != 0) {
    FUN_006e7280();
    return;
  }
  if ((*PTR_DAT_02715558 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_02715558);
    if (iVar1 != 0) {
      lVar2 = FUN_006e5e60();
      *(long *)PTR_DAT_02715560 = lVar2;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      FUN_001001c0(PTR_LAB_02715568,PTR_DAT_02715560,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02715558);
    }
  }
  lVar2 = *(long *)PTR_DAT_02715560;
  *param_1 = lVar2;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0151168c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  return;
}


