/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0095fa40; name: FUN_0095fa40
 */


void FUN_0095fa40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_008e0a00(param_2);
  uVar4 = FUN_009423b0(param_1);
  uVar2 = FUN_008e12a0(param_2,0xd);
  uVar3 = FUN_008e0a00(param_3);
  FUN_00937b40(uVar4,param_2,uVar2,1,5,uVar3);
  uVar4 = FUN_009423b0(param_1);
  FUN_0093a140(uVar4,uVar1,param_5,*param_4);
  uVar4 = FUN_009423b0(param_1);
  FUN_0093a130(uVar4,uVar1);
  uVar4 = FUN_009423e0(param_1);
  FUN_009287c0(uVar4,param_3,param_2);
  return;
}


