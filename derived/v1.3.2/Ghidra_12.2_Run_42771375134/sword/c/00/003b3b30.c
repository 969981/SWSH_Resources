/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b3b30; name: FUN_003b3b30
 */


void FUN_003b3b30(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)(*(long *)*param_2 + 0x50))();
  (**(code **)(*(long *)*param_2 + 0x58))(param_1);
  if ((long *)param_2[1] == (long *)0x0) {
    return;
  }
  (**(code **)(*(long *)param_2[1] + 0x50))(param_1);
                    /* WARNING: Could not recover jumptable at 0x003b3ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2[1] + 0x58))(param_1);
  return;
}


