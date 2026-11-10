/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad2fa0; name: FUN_00ad2fa0
 */


void FUN_00ad2fa0(long *param_1,byte param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 400))();
  if ((uVar1 & 1) == 0) {
    return;
  }
  uVar1 = (**(code **)(*param_1 + 400))(param_1);
  if ((uVar1 & 1) != 0) {
    *(byte *)(param_1 + 0xae) = param_2 & 1;
    *(byte *)((long)param_1 + 0x571) = param_2 & 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00ad2ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x200))(param_1);
  return;
}


