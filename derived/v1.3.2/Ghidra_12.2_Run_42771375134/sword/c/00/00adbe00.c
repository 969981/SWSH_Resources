/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00adbe00; name: FUN_00adbe00
 */


void FUN_00adbe00(long *param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 400))();
  if ((uVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00adbe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a0))(param_1,param_2 & 1,2);
  return;
}


