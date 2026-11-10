/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005633f0; name: FUN_005633f0
 */


undefined8 FUN_005633f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  int param3;
  long lVar1;
  char acStack_450 [1024];
  int local_50 [2];
  char *local_48;
  
  FUN_00550fe0(local_50,param_3);
  FUN_005515e0(local_50,local_50[0] + -3);
  lVar1 = 0;
  do {
    param3 = (int)lVar1;
    sprintf(acStack_450,"%s%d_%d",local_48,param3,0);
    FUN_00563090(param_1,param_2,acStack_450);
    sprintf(acStack_450,"%s%d_%d",local_48,param3,1);
    FUN_00563090(param_1,param_2 + 0x58,acStack_450);
    sprintf(acStack_450,"%s%d_%d",local_48,param3,2);
    FUN_00563090(param_1,param_2 + 0xb0,acStack_450);
    sprintf(acStack_450,"%s%d_%d",local_48,param3,3);
    FUN_00563090(param_1,param_2 + 0x108,acStack_450);
    sprintf(acStack_450,"%s%d_%d",local_48,param3,4);
    FUN_00563090(param_1,param_2 + 0x160,acStack_450);
    sprintf(acStack_450,"%s%d_%d",local_48,param3,5);
    FUN_00563090(param_1,param_2 + 0x1b8,acStack_450);
    sprintf(acStack_450,"%s%d_%d",local_48,param3,6);
    FUN_00563090(param_1,param_2 + 0x210,acStack_450);
    sprintf(acStack_450,"%s%d_%d",local_48,param3,7);
    FUN_00563090(param_1,param_2 + 0x268,acStack_450);
    lVar1 = lVar1 + 1;
    param_2 = param_2 + 0x2c0;
  } while (lVar1 != 8);
  FUN_00551380(local_50);
  return 0;
}


