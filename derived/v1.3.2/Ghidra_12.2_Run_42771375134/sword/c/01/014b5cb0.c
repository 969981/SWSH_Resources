/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b5cb0; name: FUN_014b5cb0
 */


void FUN_014b5cb0(undefined8 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_0087f070();
  uVar2 = FUN_0087d610(param_1,2);
  if ((uVar2 & 1) == 0) {
    FUN_00878f70(param_1,7,param_2);
    FUN_00878f70(param_1,4,param_3 % 100);
    FUN_00878f70(param_1,5,param_4);
    uVar3 = 6;
  }
  else {
    FUN_00878f70(param_1,3,param_2);
    FUN_00878f70(param_1,0,param_3 % 100);
    FUN_00878f70(param_1,1,param_4);
    uVar3 = 2;
  }
  FUN_00878f70(param_1,uVar3,param_5);
  FUN_0087f0c0(param_1,uVar1 & 1);
  return;
}


