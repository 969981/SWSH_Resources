/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d84090; name: FUN_00d84090
 */


void FUN_00d84090(long *param_1)

{
  long lVar1;
  
  if (param_1[0x1e] == 0) {
    (**(code **)(*param_1 + 0x50))(param_1);
    lVar1 = param_1[0x1f];
  }
  else {
    lVar1 = param_1[0x1f];
  }
  if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00d840e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x58))(param_1);
    return;
  }
  return;
}


