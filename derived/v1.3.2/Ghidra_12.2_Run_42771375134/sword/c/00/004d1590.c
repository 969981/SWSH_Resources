/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d1590; name: FUN_004d1590
 */


void FUN_004d1590(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  long *plVar1;
  
  *param_3 = 0xffffffff;
  *param_2 = 0xffffffff;
  plVar1 = (long *)FUN_0047d760(param_1 + 0x70);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004d15d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2,param_3);
  return;
}


