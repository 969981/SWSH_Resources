/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014524f0; name: FUN_014524f0
 */


undefined1  [16] FUN_014524f0(long param_1,int param_2,int param_3)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  FUN_012b4190(auStack_30,param_1 + 0x120,(long)param_2);
  if (param_3 == 2) {
    local_58 = 0xce4edd21e24349e7;
    local_50 = "exp_bonus_factor_2";
  }
  else if (param_3 == 1) {
    local_58 = 0xce4ede21e2434b9a;
    local_50 = "exp_bonus_factor_1";
  }
  else {
    if (param_3 != 0) {
      return ZEXT816(0);
    }
    local_58 = 0xce4edf21e2434d4d;
    local_50 = "exp_bonus_factor_0";
  }
  local_48 = 0x12;
  FUN_012b4250(auStack_40,auStack_30,&local_58);
  FUN_012b4630(0,auStack_40);
  auVar1._4_4_ = extraout_var;
  auVar1._0_4_ = extraout_s0;
  auVar1._8_8_ = extraout_var_00;
  return auVar1;
}


