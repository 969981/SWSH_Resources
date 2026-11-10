/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad2e80; name: FUN_00ad2e80
 */


void FUN_00ad2e80(long *param_1,byte param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 400))();
  if ((uVar1 & 1) == 0) {
    return;
  }
  *(byte *)((long)param_1 + 0x4ba) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x00ad2ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x200))(param_1);
  return;
}


