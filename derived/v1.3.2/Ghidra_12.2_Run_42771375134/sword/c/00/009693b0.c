/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009693b0; name: FUN_009693b0
 */


void FUN_009693b0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 auStack_48 [8];
  
  uStack_70 = *param_3;
  local_78 = param_3[1];
  uStack_60 = param_3[2];
  local_68 = param_3[3];
  local_58 = 0x32;
  local_56 = 0;
  FUN_00942450();
  uVar4 = FUN_00925180();
  FUN_009697e0(uVar4,auStack_48,&local_78);
  uVar5 = FUN_0093b4e0(param_3[3]);
  uVar4 = *param_3;
  uVar1 = param_3[1];
  uVar7 = param_3[2];
  uVar2 = param_3[3];
  uVar6 = FUN_009423e0(param_1);
  FUN_0092a1a0(uVar6,uVar1,uVar4,uVar2);
  local_58 = 0x34;
  local_56 = 0;
  local_78 = uVar1;
  uStack_70 = uVar4;
  local_68 = uVar2;
  uStack_60 = uVar7;
  FUN_00942450(param_1);
  uVar7 = FUN_00925180();
  FUN_009697e0(uVar7,auStack_48,&local_78);
  uVar7 = FUN_009423e0(param_1);
  FUN_0092a290(uVar7,uVar1,uVar4,uVar2);
  FUN_00969510(param_1,*param_3,param_3[1],param_3[2],param_3[3]);
  uStack_70 = *param_3;
  local_78 = param_3[1];
  uStack_60 = param_3[2];
  local_68 = param_3[3];
  local_56 = 0;
  local_58 = 0x39;
  FUN_00942450(param_1);
  uVar4 = FUN_00925180();
  FUN_009697e0(uVar4,auStack_48,&local_78);
  if ((((uVar5 & 1) == 0) && (uVar5 = FUN_0093b4e0(param_3[3]), (uVar5 & 1) != 0)) &&
     (param_3[4] != 0)) {
    uVar4 = FUN_009423b0(param_1);
    uVar3 = FUN_008e0a00(*param_3);
    FUN_00939090(uVar4,uVar3,4);
  }
  return;
}


