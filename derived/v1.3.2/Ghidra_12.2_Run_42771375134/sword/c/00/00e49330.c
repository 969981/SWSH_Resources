/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e49330; name: FUN_00e49330
 */


void FUN_00e49330(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x78) + 0x68);
  if (plVar1 == (long *)0x0) {
    return;
  }
  plVar2 = plVar1 + 9;
  (**(code **)(*plVar2 + 0x10))(plVar2);
  (**(code **)(*plVar1 + 0x48))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00e49380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


