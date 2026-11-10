/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00954e10; name: FUN_00954e10
 */


undefined8 FUN_00954e10(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined1 local_70;
  undefined4 local_6f;
  undefined1 auStack_68 [40];
  
  uVar2 = FUN_00954f20(param_1,param_2,param_4 & 1);
  if ((uVar2 & 0xff) == 4) {
    uVar6 = 0;
  }
  else {
    uVar5 = 0x14;
    if ((param_3 & 1) == 0) {
      uVar5 = 10;
    }
    uVar4 = FUN_0093ec60(param_1,param_2 & 0xffffffff);
    local_70 = 0x1f;
    local_6f = 0;
    FUN_00943e60(auStack_68);
    uVar6 = 1;
    local_70 = (undefined1)(param_2 & 0xffffffff);
    local_6f._0_3_ = CONCAT12(1,CONCAT11(uVar5,(char)uVar2));
    FUN_00943f20(auStack_68,2,0x4d4);
    FUN_00943f60(auStack_68,(uint)param_2 & 0xff);
    uVar1 = FUN_0093ec20(param_1);
    FUN_00943f60(auStack_68,uVar1);
    uVar3 = FUN_008e2240(uVar4,uVar2);
    FUN_00943f60(auStack_68,uVar3);
    FUN_0093f210(param_1,&local_70);
  }
  return uVar6;
}


