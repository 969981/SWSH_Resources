/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008660b0; name: FUN_008660b0
 */


void FUN_008660b0(void)

{
  long lVar1;
  
  lVar1 = FUN_00866030();
                    /* WARNING: Could not recover jumptable at 0x008660c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x280))();
  return;
}


