/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d8fbd0; name: FUN_00d8fbd0
 */


void FUN_00d8fbd0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0xb0);
  *param_1 = lVar1;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d8fbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  return;
}


