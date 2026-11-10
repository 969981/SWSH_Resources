/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f39f90; name: FUN_00f39f90
 */


void FUN_00f39f90(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_00f39f90(param_1,*param_2);
  FUN_00f39f90(param_1,param_2[1]);
  lVar1 = param_2[5];
  param_2[5] = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)param_2[6] + 0x18))((long *)param_2[6],lVar1,param_2[7],param_2[8]);
  }
                    /* WARNING: Could not recover jumptable at 0x00f39ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),param_2,0x48,8);
  return;
}


