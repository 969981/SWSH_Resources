/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f96f0; name: FUN_005f96f0
 */


void FUN_005f96f0(long param_1,long *param_2)

{
  uint *puVar1;
  long *plVar2;
  
  puVar1 = (uint *)(**(code **)(*param_2 + 0x40))(param_2);
  plVar2 = *(long **)(param_1 + (ulong)*puVar1 * 8 + 0x2d0);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005f9738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x68))(plVar2,param_2);
  return;
}


