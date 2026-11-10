/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0136e060; name: FUN_0136e060
 */


void FUN_0136e060(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_2 + 0x80);
  while( true ) {
    if (plVar1 == *(long **)(param_2 + 0x88)) {
      *param_1 = 0;
      return;
    }
    if (*plVar1 == param_3) break;
    plVar1 = plVar1 + 9;
  }
  lVar2 = plVar1[4];
  *param_1 = lVar2;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0136e0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  return;
}


