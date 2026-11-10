/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002af330; name: FUN_002af330
 */


void FUN_002af330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  (**(code **)*param_5)(param_5,param_1,1);
  (**(code **)*param_5)(param_5,param_2,1);
  (**(code **)*param_5)(param_5,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x002af3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_5)(param_5,param_4,1);
  return;
}


