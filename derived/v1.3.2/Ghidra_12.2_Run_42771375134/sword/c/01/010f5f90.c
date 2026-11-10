/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f5f90; name: FUN_010f5f90
 */


void FUN_010f5f90(long *param_1)

{
  long *plVar1;
  
  FUN_01038270(*param_1,1);
  plVar1 = (long *)(*(long *)(*param_1 + 0x5d0) + 0x60);
                    /* WARNING: Could not recover jumptable at 0x010f5fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1,0);
  return;
}


