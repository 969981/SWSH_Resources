/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01501160; name: FUN_01501160
 */


void FUN_01501160(long *param_1,long param_2,long *param_3,uint param_4,uint param_5)

{
  long lVar1;
  long *plVar2;
  
  if ((param_5 | param_4) < 2) {
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_3;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
    plVar2 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0xb8,8);
    if (plVar2 == (long *)0x0) {
      (**(code **)(*param_3 + 0xb8))(param_3);
    }
    FUN_00866220(plVar2,param_3,0,0,0);
    plVar2[1] = (long)param_3;
    plVar2[2] = (long)plVar2;
    plVar2[3] = 0xb8;
    plVar2[4] = 8;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(plVar2[9] + 0x10))();
    }
    (**(code **)(*plVar2 + 0x28))
              (plVar2,param_2 + (ulong)param_4 * 0x2b8 + (ulong)param_5 * 0x149 + 0x61);
    *param_1 = (long)plVar2;
  }
  else {
    *param_1 = 0;
  }
  return;
}


