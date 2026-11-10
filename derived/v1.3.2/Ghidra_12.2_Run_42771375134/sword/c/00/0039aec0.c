/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039aec0; name: FUN_0039aec0
 */


void FUN_0039aec0(undefined8 *param_1,undefined8 param_2)

{
  (**(code **)(*(long *)*param_1 + 0x60))();
                    /* WARNING: Could not recover jumptable at 0x0039aefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[6] + 0x60))((long *)param_1[6],param_2);
  return;
}


