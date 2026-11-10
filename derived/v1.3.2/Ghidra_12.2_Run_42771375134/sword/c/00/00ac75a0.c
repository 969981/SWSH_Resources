/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ac75a0; name: FUN_00ac75a0
 */


void FUN_00ac75a0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x498);
  *(undefined8 *)(param_1 + 0x498) = 0;
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (*plVar1 != 0) {
    (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
    *plVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00ac75f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x4a0) + 0x18))
            (*(long **)(param_1 + 0x4a0),plVar1,*(undefined8 *)(param_1 + 0x4a8),
             *(undefined8 *)(param_1 + 0x4b0));
  return;
}


