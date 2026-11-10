/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a242b0; name: FUN_00a242b0
 */


void FUN_00a242b0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    FUN_00a243b0();
    FUN_00a243b0(param_1,param_2,2,param_4);
    uVar1 = 4;
  }
  else {
    if (param_3 == 1) {
      FUN_00a243b0();
      FUN_00a243b0(param_1,param_2,3,param_4);
      uVar1 = 5;
      goto LAB_00a24394;
    }
    FUN_00a243b0(param_1,param_2,0,param_4);
    FUN_00a243b0(param_1,param_2,1,param_4);
    FUN_00a243b0(param_1,param_2,2,param_4);
    FUN_00a243b0(param_1,param_2,3,param_4);
    FUN_00a243b0(param_1,param_2,4,param_4);
    uVar1 = 5;
  }
  FUN_00a243b0(param_1,param_2,uVar1,param_4);
  uVar1 = 6;
LAB_00a24394:
  FUN_00a243b0(param_1,param_2,uVar1,param_4);
  return;
}


