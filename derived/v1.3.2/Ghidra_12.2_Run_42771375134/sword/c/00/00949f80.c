/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00949f80; name: FUN_00949f80
 */


void FUN_00949f80(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_008e2d10(*param_3);
  sVar1 = *(short *)(param_3 + 1);
  uVar4 = FUN_009423e0(param_1);
  FUN_0092e7b0(uVar4,*param_3,*(undefined2 *)(param_3 + 1));
  if (sVar1 == 0) {
    uVar4 = FUN_009423b0(param_1);
    FUN_009375c0(uVar4,*param_3,0xf);
  }
  uVar4 = FUN_009423b0(param_1);
  FUN_00937920(uVar4,*param_3,*(undefined2 *)(param_3 + 1));
  uVar4 = FUN_009423b0(param_1);
  FUN_00938a80(uVar4,*param_3,sVar1 != 0);
  uVar4 = FUN_009423b0(param_1);
  uVar3 = FUN_008e0a00(*param_3);
  FUN_0093a7c0(uVar4,uVar3);
  if (sVar1 != 0) {
    uVar4 = FUN_009423b0(param_1);
    uVar3 = FUN_008e0a00(*param_3);
    FUN_0093a780(uVar4,uVar3);
  }
  uVar4 = FUN_009423e0(param_1);
  FUN_0092e820(uVar4,*param_3);
  if (*(char *)((long)param_3 + 10) != '\0') {
    uVar4 = FUN_009423b0(param_1);
    FUN_00937980(uVar4,*param_3,uVar2);
    uVar4 = FUN_009423b0(param_1);
    FUN_00937550(uVar4,*param_3,8);
  }
  uVar4 = FUN_009423f0(param_1);
  uVar2 = FUN_008e0a00(*param_3);
  FUN_00943060(uVar4,uVar2);
  return;
}


