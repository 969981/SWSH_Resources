/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003de020; name: FUN_003de020
 */


void FUN_003de020(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x728) + 0x118);
                    /* WARNING: Could not recover jumptable at 0x003de034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3 & 1);
  return;
}


