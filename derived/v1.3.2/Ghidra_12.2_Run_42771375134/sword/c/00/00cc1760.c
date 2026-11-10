/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc1760; name: FUN_00cc1760
 */


void FUN_00cc1760(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_00cbd3c0();
  lVar2 = *plVar1;
  plVar1 = (long *)FUN_00cbd3c0();
  if ((*plVar1 == lVar2) && ((0xe < param_2 || ((1 << (ulong)(param_2 & 0x1f) & 0x45c0U) == 0)))) {
    lVar2 = FUN_00cc1430(param_1 + 0x88,param_1,param_2);
  }
  *(long *)(param_1 + (long)(int)param_2 * 8 + 8) = lVar2;
  return;
}


