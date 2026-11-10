/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ca410; name: FUN_004ca410
 */


void FUN_004ca410(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  if ((long *)*param_1 == (long *)0x0) {
    *param_4 = 0xffffffff;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004ca420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x1d0))();
  return;
}


