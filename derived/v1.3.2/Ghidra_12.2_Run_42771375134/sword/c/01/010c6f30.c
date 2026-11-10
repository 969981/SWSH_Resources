/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010c6f30; name: FUN_010c6f30
 */


void FUN_010c6f30(long *param_1,long param_2)

{
  long lVar1;
  
  if (*(int *)(param_2 + 0x70) == 8) {
    lVar1 = *(long *)(param_2 + 0x90);
    *param_1 = lVar1;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x88);
    *param_1 = lVar1;
  }
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010c6f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  return;
}


