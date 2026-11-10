/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ac94e0; name: FUN_00ac94e0
 */


void FUN_00ac94e0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x478);
  *(undefined8 *)(param_1 + 0x478) = 0;
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (*plVar1 != 0) {
    (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
    *plVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00ac9534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x480) + 0x18))
            (*(long **)(param_1 + 0x480),plVar1,*(undefined8 *)(param_1 + 0x488),
             *(undefined8 *)(param_1 + 0x490));
  return;
}


