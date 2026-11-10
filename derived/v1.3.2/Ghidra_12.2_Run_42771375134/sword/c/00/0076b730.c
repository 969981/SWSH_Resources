/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076b730; name: FUN_0076b730
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0076b730(long *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
  }
  plVar4 = (long *)(*(code *)**(undefined8 **)(lVar3 + 8))((undefined8 *)(lVar3 + 8));
  if (((*PTR_DAT_02710500 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_02710500), iVar2 != 0))
  {
    uVar7 = FUN_00102930();
    *(undefined8 *)PTR_DAT_02710508 = uVar7;
    __cxa_guard_release(PTR_DAT_02710500);
  }
  for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    if (plVar4 == (long *)PTR_DAT_02710508) goto LAB_0076b7c4;
  }
  lVar3 = 0;
LAB_0076b7c4:
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = lVar3;
  param_1[1] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  param_1[4] = lVar3;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  FUN_006cee90((long)param_1 + 0x3c,1,0);
  param_1[9] = 0;
  FUN_0075efb0(param_1 + 10,*param_1,0,0);
  param_1[0xc] = 0;
  plVar4 = param_1 + 0xb;
  *plVar4 = 0;
  movie::SetAllocator((_func_void_ptr_ulong_ulong_void_ptr *)PTR_LAB_027160b0,
                      (_func_void_void_ptr_void_ptr *)PTR_LAB_027160b8,
                      (_func_void_ptr_void_ptr_ulong_void_ptr *)PTR_LAB_027160c0,(void *)*param_1);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar5 = *plVar4;
  *plVar4 = lVar3;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  plVar4 = (long *)*param_1;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar6 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0xb8,8);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
  }
  FUN_00700120(plVar6,0,1);
  puVar1 = PTR_DAT_027160c8;
  *plVar6 = (long)(PTR_DAT_027160c8 + 0x10);
  plVar6[1] = (long)plVar4;
  plVar6[9] = (long)(puVar1 + 0x98);
  plVar6[10] = (long)(puVar1 + 0xd8);
  plVar6[0x16] = (long)param_1;
  plVar6[2] = (long)plVar6;
  plVar6[3] = 0xb8;
  plVar6[4] = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  if (plVar6 != (long *)0x0) {
    (**(code **)(plVar6[9] + 0x10))();
  }
  if (param_1[0xc] != 0) {
    (**(code **)(*(long *)(param_1[0xc] + 0x48) + 0x18))();
    param_1[0xc] = 0;
  }
  param_1[0xc] = (long)plVar6;
  FUN_00702020(param_1[0xb],plVar6);
  return;
}


