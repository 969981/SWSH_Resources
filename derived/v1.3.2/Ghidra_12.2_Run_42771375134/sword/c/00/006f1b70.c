/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f1b70; name: FUN_006f1b70
 */


void FUN_006f1b70(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  
  if (1 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar1 = *(long **)(param_1 + (long)(int)param_2 * 8);
                    /* WARNING: Could not recover jumptable at 0x006f1b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_3,param_4);
  return;
}


