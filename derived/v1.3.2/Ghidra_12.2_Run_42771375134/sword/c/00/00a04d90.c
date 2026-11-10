/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a04d90; name: FUN_00a04d90
 */


void FUN_00a04d90(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_2 = lVar1;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a04da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  return;
}


