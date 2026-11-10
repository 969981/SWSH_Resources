/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00945c60; name: FUN_00945c60
 */


void FUN_00945c60(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  
  uVar2 = FUN_008e0a00(*param_3);
  uVar1 = *(undefined2 *)(param_3 + 1);
  uVar3 = FUN_008e0a00(*param_3);
  uVar5 = FUN_00942380(param_1);
  FUN_00942390(param_1);
  uVar6 = FUN_00931920();
  uVar4 = FUN_008f9470(uVar5,uVar6,uVar3);
  if ((uVar4 & 0xff) != 5) {
    uVar5 = FUN_009423b0(param_1);
    FUN_0093a230(uVar5,uVar4,uVar1);
  }
  uVar5 = FUN_00942420(param_1);
  FUN_00946170(uVar5,uVar2);
  uVar5 = *param_3;
  uVar7 = FUN_008e0a10(uVar5);
  if ((uVar7 & 1) != 0) {
    uVar6 = FUN_009423b0(param_1);
    uVar3 = FUN_008e0a00(uVar5);
    FUN_00939e30(uVar6,uVar3);
  }
  uVar5 = FUN_009423e0(param_1);
  FUN_009298a0(uVar5,*param_3);
  local_50 = *param_3;
  FUN_00942450(param_1);
  uVar5 = FUN_00925250();
  FUN_00946e70(uVar5,auStack_48,&local_50);
  uVar5 = FUN_009423b0(param_1);
  FUN_00938680(uVar5,uVar2);
  return;
}


