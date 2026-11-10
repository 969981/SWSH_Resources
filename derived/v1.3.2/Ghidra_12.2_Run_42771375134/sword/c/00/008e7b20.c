/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e7b20; name: FUN_008e7b20
 */


void FUN_008e7b20(long param_1,ulong param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_3 == 0) {
    return;
  }
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_4;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar3 = (long *)(**(code **)(*param_4 + 0x10))(param_4,0x90,8);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_4 + 0xb8))(param_4);
  }
  FUN_00883c20(plVar3,param_4);
  plVar3[1] = (long)param_4;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x90;
  plVar3[4] = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x10))();
  }
  param_1 = param_1 + (param_2 & 0xffffffff) * 8;
  lVar2 = *(long *)(param_1 + 0x418);
  plVar1 = (long *)(param_1 + 0x418);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    *plVar1 = 0;
  }
  *plVar1 = (long)plVar3;
                    /* WARNING: Could not recover jumptable at 0x008e7c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x68))(plVar3,param_3);
  return;
}


