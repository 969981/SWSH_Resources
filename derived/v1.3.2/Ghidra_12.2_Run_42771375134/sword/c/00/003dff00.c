/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dff00; name: FUN_003dff00
 */


void FUN_003dff00(undefined8 param_1,long *param_2)

{
  if ((long *)*param_2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003dff10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 8))();
  return;
}


