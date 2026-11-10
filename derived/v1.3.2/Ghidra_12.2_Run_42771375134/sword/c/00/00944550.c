/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00944550; name: FUN_00944550
 */


void FUN_00944550(undefined8 param_1,int param_2,long param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (((param_2 == 3) && (sVar1 = FUN_008e1290(param_3), sVar1 == 0x1ec)) &&
     (*(char *)(param_3 + 0x33d) == '\x01')) {
    uVar3 = FUN_009423e0(param_1);
    FUN_009288e0(uVar3,param_3);
    uVar3 = FUN_009423b0(param_1);
    uVar2 = FUN_008e0a00(param_3);
    FUN_0093a6f0(uVar3,uVar2);
    FUN_008e4ab0(param_3,0,0);
    uVar3 = FUN_009423b0(param_1);
    uVar2 = FUN_008e0a00(param_3);
    FUN_00938360(uVar3,uVar2,0,0);
    uVar3 = FUN_009423b0(param_1);
    uVar2 = FUN_008e0a00(param_3);
    FUN_00938350(uVar3,uVar2);
    uVar3 = FUN_009423b0(param_1);
    uVar4 = FUN_009423e0(param_1);
    FUN_0092fa00(uVar3,uVar4,param_3);
    uVar3 = FUN_009423b0(param_1);
    FUN_00936080(uVar3,param_3,0x130);
    return;
  }
  return;
}


