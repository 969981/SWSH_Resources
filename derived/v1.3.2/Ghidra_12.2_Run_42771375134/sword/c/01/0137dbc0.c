/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0137dbc0; name: FUN_0137dbc0
 */


void FUN_0137dbc0(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(param_1 + 0x90);
  if ((((*plVar2 != 0) && (plVar2 = (long *)(param_1 + 0x98), *plVar2 != 0)) &&
      (plVar2 = (long *)(param_1 + 0xa0), *plVar2 != 0)) &&
     (plVar2 = (long *)(param_1 + 0xa8), *plVar2 != 0)) {
    return;
  }
  lVar3 = *param_2;
  if (lVar3 == 0) {
    *plVar2 = 0;
  }
  else {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar1 = *plVar2;
    *plVar2 = lVar3;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0137dc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


