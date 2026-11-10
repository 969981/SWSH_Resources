/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c8eb0; name: FUN_012c8eb0
 */


void FUN_012c8eb0(long param_1,uint param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + (long)(int)param_2 * 8 + 0xc0);
  if ((*plVar4 != 0) || (plVar2 = *(long **)(param_1 + param_3 * 8 + 0x80), plVar2 == (long *)0x0))
  {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (0x14 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar1 = *(long *)PTR_DAT_02727630 + (ulong)param_2 * 0x20;
  *(long *)(lVar1 + 0x10) = (long)plVar2;
  *(long *)(lVar1 + 0x20) = param_4;
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_4,8);
  *(long *)(lVar1 + 0x18) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar1 + 0x10) + 0xb8))();
    lVar3 = *(long *)(lVar1 + 0x18);
  }
  FUN_00760770(lVar3,lVar3 + 0xb8,param_4 + -0xb8,0);
  *(long *)(lVar1 + 8) = lVar3;
  *plVar4 = lVar3;
  return;
}


