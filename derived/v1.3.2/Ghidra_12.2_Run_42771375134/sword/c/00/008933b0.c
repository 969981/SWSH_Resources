/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008933b0; name: FUN_008933b0
 */


undefined8 FUN_008933b0(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (0 < (int)param_1[1]) {
    return 0;
  }
  if (*(char *)((long)param_1 + 0xd) != '\0') {
    return 0;
  }
  if (*(char *)((long)param_1 + 0xe) != '\0') {
    return 0;
  }
  if (((*PTR_DAT_02715558 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02715558), iVar1 != 0))
  {
    lVar3 = FUN_006e5e60();
    *(long *)PTR_DAT_02715560 = lVar3;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN_001001c0(PTR_LAB_02715568,PTR_DAT_02715560,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02715558);
    lVar3 = *(long *)PTR_DAT_02715560;
  }
  else {
    lVar3 = *(long *)PTR_DAT_02715560;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = *param_1;
  *param_1 = lVar3;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return 1;
}


