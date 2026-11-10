/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f9bf0; name: FUN_003f9bf0
 */


void FUN_003f9bf0(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    return;
  }
  plVar1 = *(long **)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x720) + 0x6e8);
  FUN_001203c0();
                    /* WARNING: Could not recover jumptable at 0x003f9c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x50))(plVar1,*(undefined8 *)(param_1 + 0x58));
  return;
}


