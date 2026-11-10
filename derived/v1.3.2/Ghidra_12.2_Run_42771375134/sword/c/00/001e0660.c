/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e0660; name: FUN_001e0660
 */


void FUN_001e0660(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x58);
  if (*(long *)(param_1 + 0x10) == param_2) {
    (**(code **)(*plVar2 + 0x18))(plVar2,0);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x18);
  }
  if (lVar1 == param_2) {
                    /* WARNING: Could not recover jumptable at 0x001e06e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,1);
    return;
  }
  return;
}


