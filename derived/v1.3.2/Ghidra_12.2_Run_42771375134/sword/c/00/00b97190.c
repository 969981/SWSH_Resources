/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b97190; name: FUN_00b97190
 */


void FUN_00b97190(long param_1,uint param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x80) + 0x198);
                    /* WARNING: Could not recover jumptable at 0x00b971a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x70))(plVar1,param_2 & 1,0);
  return;
}


