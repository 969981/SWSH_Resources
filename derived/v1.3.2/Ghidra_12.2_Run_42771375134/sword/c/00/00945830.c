/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00945830; name: FUN_00945830
 */


undefined8 FUN_00945830(undefined8 param_1,undefined8 param_2,undefined2 param_3,long param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 auStack_78 [8];
  undefined8 *local_70;
  undefined8 local_68;
  undefined2 local_60;
  
  FUN_00942390();
  uVar4 = FUN_00931920();
  uVar5 = FUN_00942380(param_1);
  uVar2 = FUN_008e0a00(param_2);
  uVar2 = FUN_008f9470(uVar5,uVar4,uVar2);
  uVar4 = FUN_00942380(param_1);
  FUN_008f8e50(uVar4,uVar2,local_7c,local_80);
  uVar3 = FUN_00945af0(param_1,local_7c[0]);
  if ((int)uVar3 < 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00942510(param_1,local_7c[0],uVar3);
    local_68 = param_2;
    local_60 = param_3;
    FUN_00942450(param_1);
    uVar5 = FUN_009259e0();
    FUN_00945c60(uVar5,&local_70,&local_68);
    if (param_4 != 0) {
      uVar5 = FUN_009423b0(param_1);
      FUN_00935bf0(uVar5,param_4);
    }
    local_68._0_4_ = (uVar3 & 0xff) << 0x10;
    local_68._0_2_ = CONCAT11(local_80[0],local_7c[0]);
    FUN_00942450(param_1);
    uVar5 = FUN_009259b0();
    FUN_00941dc0(uVar5,&local_70,&local_68);
    uVar5 = FUN_009423b0(param_1);
    uVar1 = FUN_008e0a00(uVar4);
    FUN_009360c0(uVar5,0x478,uVar1);
    FUN_0093ac80(&local_68);
    FUN_0093ad00(&local_68,(ulong)local_70 & 0xff);
    local_70 = &local_68;
    FUN_00942450(param_1);
    uVar4 = FUN_00925020();
    FUN_00943510(uVar4,auStack_78,&local_70);
    uVar4 = 1;
  }
  return uVar4;
}


