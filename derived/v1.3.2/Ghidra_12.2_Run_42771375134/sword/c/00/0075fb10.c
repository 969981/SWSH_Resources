/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075fb10; name: FUN_0075fb10
 */


undefined8 FUN_0075fb10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_0075f2a0(param_2,param_4);
  if (uVar2 == 0) {
    uVar2 = FUN_0075f590(param_2,param_3);
    FUN_00760150(param_1,param_2);
    if ((uVar2 & 1) != 0) {
      uVar4 = FUN_0075f450(param_2,param_3);
      FUN_0075f7c0(param_1,uVar4);
      FUN_0075f5d0(param_2,1);
    }
  }
  else {
    uVar3 = FUN_0075f230(param_2);
    uVar1 = uVar2 + param_3;
    if (uVar3 < uVar1) {
      param_2 = 0;
    }
    else {
      uVar3 = FUN_0075f590(param_2,uVar1);
      if ((uVar3 & 1) != 0) {
        FUN_00760150(param_1,param_2);
        uVar4 = FUN_0075f450(param_2,uVar1);
        FUN_0075f7c0(param_1,uVar4);
        FUN_0075f5d0(param_2,1);
      }
      if (uVar2 < 0x100) {
        FUN_00760150(param_1,param_2);
        FUN_0075f2c0(param_2,param_4);
      }
      else {
        FUN_00760150(param_1,param_2);
        uVar4 = FUN_0075f450(param_2,uVar2 - 0x18);
        FUN_0075f7c0(param_1,param_2);
        FUN_0075f5d0(uVar4,1);
        param_2 = uVar4;
      }
    }
  }
  return param_2;
}


