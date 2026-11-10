/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d1d5b0; name: FUN_00d1d5b0
 */


long * FUN_00d1d5b0(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long local_38;
  
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x380,0x10);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_38 = *param_3;
  *param_3 = 0;
  FUN_00d34820(plVar4,&local_38,param_4);
  puVar1 = PTR_DAT_0271d160;
  *plVar4 = (long)(PTR_DAT_0271d160 + 0x10);
  plVar4[9] = (long)(puVar1 + 0x68);
  plVar4[10] = (long)(puVar1 + 0xa8);
  if (((*PTR_DAT_02715558 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_02715558), iVar2 != 0))
  {
    lVar5 = FUN_006e5e60();
    *(long *)PTR_DAT_02715560 = lVar5;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    FUN_001001c0(PTR_LAB_02715568,PTR_DAT_02715560,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02715558);
  }
  lVar5 = *(long *)PTR_DAT_02715560;
  plVar4[0x6d] = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  *(undefined4 *)(plVar4 + 0x6e) = 0xffffffff;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x380;
  plVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


