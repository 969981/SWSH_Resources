/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00604870; name: FUN_00604870
 */


void FUN_00604870(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  if ((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) {
    lVar2 = param_1[1];
    *param_2 = lVar2;
    param_2[1] = 0;
    plVar1 = param_1;
    if (lVar2 != 0) {
      plVar1 = (long *)(lVar2 + 8);
    }
    *plVar1 = (long)param_2;
    param_1[1] = (long)param_2;
  }
  return;
}


