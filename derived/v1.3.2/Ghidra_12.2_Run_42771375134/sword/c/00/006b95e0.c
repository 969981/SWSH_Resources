/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b95e0; name: FUN_006b95e0
 */


undefined1  [16] FUN_006b95e0(long *param_1)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  if (((*param_1 == 0) || (lVar1 = FUN_006b6550(), lVar1 == 0)) ||
     (lVar1 = FUN_006b65f0(), lVar1 == 0)) {
    return ZEXT816(0);
  }
  FUN_006b6550(*param_1);
  FUN_006b65f0();
  FUN_006b8210();
  FUN_006b6610();
  auVar2._4_4_ = extraout_var;
  auVar2._0_4_ = extraout_s0;
  auVar2._8_8_ = extraout_var_00;
  return auVar2;
}


