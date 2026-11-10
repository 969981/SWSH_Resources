/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00661ec0; name: FUN_00661ec0
 */


void FUN_00661ec0(long param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)PTR_DAT_02714958)(*(undefined8 *)(param_1 + 0x328));
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00661ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_02714b18)();
  return;
}


