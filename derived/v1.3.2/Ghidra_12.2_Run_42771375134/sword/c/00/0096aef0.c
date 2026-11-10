/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0096aef0; name: FUN_0096aef0
 */


void FUN_0096aef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_008e0a00(param_2);
  uVar2 = FUN_00960580(param_3,uVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_009423e0(param_1);
    uVar2 = FUN_0092dea0(uVar3,param_2);
    if ((uVar2 & 1) != 0) goto LAB_0096af4c;
  }
  uVar3 = FUN_009423b0(param_1);
  FUN_00936770(uVar3,param_2);
LAB_0096af4c:
  uVar3 = FUN_00942380(param_1);
  uVar4 = FUN_00942390(param_1);
  uVar5 = FUN_009423b0(param_1);
  FUN_0092f930(uVar3,uVar4,uVar5,9,uVar1,0,0);
  return;
}


