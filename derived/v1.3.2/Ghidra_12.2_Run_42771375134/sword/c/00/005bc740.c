/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005bc740; name: FUN_005bc740
 */


void FUN_005bc740(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_005bf860();
  if (lVar1 == 0) {
    return;
  }
  plVar2 = (long *)FUN_005bf860();
                    /* WARNING: Could not recover jumptable at 0x005bc760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x60))();
  return;
}


