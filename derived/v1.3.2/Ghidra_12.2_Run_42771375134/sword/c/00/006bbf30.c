/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006bbf30; name: FUN_006bbf30
 */


void FUN_006bbf30(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x20))();
  if ((uVar1 & 1) == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006bbf84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x30))(param_1,param_2,param_3,param_4);
  return;
}


