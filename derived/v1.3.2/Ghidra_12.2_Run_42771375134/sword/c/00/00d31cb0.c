/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d31cb0; name: FUN_00d31cb0
 */


void FUN_00d31cb0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  FUN_00d34820();
  puVar1 = PTR_DAT_0271dcb0;
  param_1[0x69] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x68);
  param_1[10] = (long)(puVar1 + 0xa8);
  if (((*PTR_DAT_02715558 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_02715558), iVar2 != 0))
  {
    lVar3 = FUN_006e5e60();
    *(long *)PTR_DAT_02715560 = lVar3;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN_001001c0(PTR_LAB_02715568,PTR_DAT_02715560,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02715558);
  }
  lVar3 = *(long *)PTR_DAT_02715560;
  param_1[0x6e] = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x6f) = 0;
  *(undefined1 *)((long)param_1 + 0x37c) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined4 *)((long)param_1 + 0x3a4) = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined4 *)((long)param_1 + 0x3c4) = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}


