/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01507230; name: FUN_01507230
 */


void FUN_01507230(long param_1,uint param_2,uint param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_4;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*param_4 + 0x10))(param_4,0xb8,8);
  if (lVar2 == 0) {
    (**(code **)(*param_4 + 0xb8))(param_4);
  }
  FUN_00866110(lVar2,param_4);
  *(long **)(lVar2 + 8) = param_4;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0xb8;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 == 0) {
    FUN_008787c0(0);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_008787c0(lVar2);
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((param_2 < 0x20) && (param_3 < 0x1e)) {
    FUN_008664a0(lVar2,param_1 + (ulong)param_2 * 0x2850 + (ulong)param_3 * 0x158 + 0x60);
  }
  if (lVar2 == 0) {
    return;
  }
  plVar3 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar3 + 0x18))(plVar3);
  (**(code **)(*plVar3 + 0x18))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x015073a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return;
}


