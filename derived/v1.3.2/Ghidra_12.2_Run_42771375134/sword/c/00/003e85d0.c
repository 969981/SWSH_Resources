/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e85d0; name: FUN_003e85d0
 */


void FUN_003e85d0(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x720) + 0x6e8);
                    /* WARNING: Could not recover jumptable at 0x003e85e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x60))(plVar1,param_2 + 0x20);
  return;
}


