/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01322320; name: FUN_01322320
 */


void FUN_01322320(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x98);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_2 + 0x90);
    *param_1 = lVar2;
  }
  else {
    plVar1 = (long *)(param_2 + 0x90);
    if (*(int *)(lVar2 + 0x54) != 0) {
      plVar1 = (long *)(param_2 + 0x98);
    }
    lVar2 = *plVar1;
    *param_1 = lVar2;
  }
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01322354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  return;
}


