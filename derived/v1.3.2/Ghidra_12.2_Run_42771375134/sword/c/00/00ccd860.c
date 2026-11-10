/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ccd860; name: FUN_00ccd860
 */


void FUN_00ccd860(long param_1,uint param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_016b2d70(*(undefined8 *)(param_1 + 0x5d8),param_2 & 1);
    return;
  }
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5e0),param_2 & 1);
  if ((param_2 & 1) == 0) {
    FUN_016b2eb0();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ccd89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x5e0) + 0x50))();
  return;
}


