/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01416400; name: FUN_01416400
 */


void FUN_01416400(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x5d0);
                    /* WARNING: Could not recover jumptable at 0x01416418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x70))(plVar1,0);
  return;
}


