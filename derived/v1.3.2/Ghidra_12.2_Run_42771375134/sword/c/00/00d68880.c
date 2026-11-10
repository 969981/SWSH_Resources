/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d68880; name: FUN_00d68880
 */


undefined1  [16] FUN_00d68880(undefined8 param_1,int param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  float local_50 [8];
  
  fVar1 = (float)FUN_00773540(param_1,0);
  if (param_2 == 0) {
    local_50[0] = 1.0;
  }
  else {
    if (param_2 == -100) {
      FUN_00771ef0(local_50,param_1);
    }
    else {
      local_50[0] = (float)FUN_00773540(param_1,param_2);
    }
    local_50[0] = local_50[0] / fVar1;
  }
  auVar2._4_4_ = local_50[0];
  auVar2._0_4_ = local_50[0];
  auVar2._8_4_ = local_50[0];
  auVar2._12_4_ = 0;
  return auVar2;
}


