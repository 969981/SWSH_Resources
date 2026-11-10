/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01505f50; name: FUN_01505f50
 */


void FUN_01505f50(long *param_1,long param_2,uint param_3,uint param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_5;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*param_5 + 0x10))(param_5,0xb8,8);
  if (lVar2 == 0) {
    (**(code **)(*param_5 + 0xb8))(param_5);
  }
  FUN_00866110(lVar2,param_5);
  *(long **)(lVar2 + 8) = param_5;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0xb8;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  *param_1 = lVar2;
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((param_3 < 0x20) && (param_4 < 0x1e)) {
    FUN_008664b0(lVar2,param_2 + (ulong)param_3 * 0x2850 + (ulong)param_4 * 0x158 + 0x60);
  }
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0150609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    return;
  }
  return;
}


