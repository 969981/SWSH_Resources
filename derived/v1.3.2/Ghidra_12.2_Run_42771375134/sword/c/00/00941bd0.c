/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00941bd0; name: FUN_00941bd0
 */


void FUN_00941bd0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 *local_28;
  
  uVar3 = FUN_009423b0();
  FUN_00938790(uVar3,*param_3,*(undefined2 *)(param_3 + 2));
  FUN_00942390(param_1);
  uVar3 = FUN_009319b0();
  FUN_00913140(uVar3,*param_3);
  uVar4 = FUN_00943f10(param_3 + 4);
  if ((uVar4 & 1) != 0) {
    uVar3 = FUN_009423b0(param_1);
    FUN_00935bf0(uVar3,param_3 + 4);
  }
  uVar3 = FUN_00942380(param_1);
  FUN_00942390(param_1);
  uVar5 = FUN_00931920();
  uVar2 = FUN_008f9470(uVar3,uVar5,*param_3);
  if ((uVar2 & 0xff) != 5) {
    uVar1 = FUN_008f94e0(*param_3);
    uVar3 = FUN_00942380(param_1);
    local_57 = FUN_008f96e0(uVar3,uVar2);
    local_55 = 1;
    local_58 = uVar1;
    local_56 = local_57;
    FUN_00942450(param_1);
    uVar3 = FUN_009259b0();
    FUN_00941dc0(uVar3,&local_28,&local_58);
    FUN_0093ac80(&local_58);
    FUN_0093ad00(&local_58,(ulong)local_28 & 0xff);
    local_28 = &local_58;
    FUN_00942450(param_1);
    uVar3 = FUN_00925020();
    FUN_00943510(uVar3,auStack_60,&local_28);
  }
  return;
}


