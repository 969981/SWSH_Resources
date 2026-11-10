/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f5e820; name: FUN_00f5e820
 */


void FUN_00f5e820(undefined8 param_1,long param_2,long *param_3,long *param_4,undefined4 param_5)

{
  long lVar1;
  
  if (*param_3 == 0) {
    FUN_01760310(param_2);
    lVar1 = *param_4;
  }
  else {
    FUN_0175f270(*param_3,(int)param_3[1]);
    if (*param_3 != param_2) {
      FUN_0175edc0(*param_3,param_2,1);
    }
    lVar1 = *param_4;
  }
  if (lVar1 == 0) {
    FUN_01760310(param_2);
  }
  else {
    FUN_0175f270(lVar1,(int)param_4[1]);
    if (*param_4 != param_2) {
      FUN_0175edc0(*param_4,param_2,1);
    }
  }
  FUN_01761620(param_2,param_5);
  return;
}


