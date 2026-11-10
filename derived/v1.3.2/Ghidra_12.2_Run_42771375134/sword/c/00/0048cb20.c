/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048cb20; name: FUN_0048cb20
 */


void FUN_0048cb20(long *param_1,undefined8 param_2,uint param_3)

{
  FUN_0048cb60(param_1 + 0x34,param_2,param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x0048cb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1);
  return;
}


