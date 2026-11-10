/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a6cf0; name: FUN_009a6cf0
 */


undefined8
FUN_009a6cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_88;
  undefined4 local_87;
  undefined2 local_83;
  undefined4 local_80;
  undefined4 local_7c;
  undefined5 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 auStack_64 [36];
  undefined1 auStack_38 [8];
  
  uVar3 = FUN_008e0a00(param_2);
  cVar1 = FUN_00942580(param_1,uVar3);
  if (((cVar1 == '\x05') || (uVar4 = FUN_008e1600(param_2), (uVar4 & 1) != 0)) ||
     (uVar4 = FUN_008e2f50(param_2,param_5,param_4), (uVar4 & 1) == 0)) {
    uVar6 = 0;
  }
  else {
    uVar2 = FUN_008e0a00(param_2);
    local_88 = 0x1f;
    local_83 = 0;
    local_87 = 0;
    uStack_78 = 0;
    local_80 = 0;
    local_7c = 0;
    local_68 = 0;
    local_70 = 0;
    FUN_00943e60(auStack_64);
    uVar6 = 1;
    local_87._0_2_ = CONCAT11(uVar2,1);
    local_7c = CONCAT31(local_7c._1_3_,(char)param_4);
    local_70._0_6_ = CONCAT15(1,(undefined5)local_70);
    local_88 = uVar2;
    local_80 = param_5;
    FUN_00942450(param_1);
    uVar5 = FUN_00925700();
    FUN_0094f100(uVar5,auStack_38,&local_88);
  }
  return uVar6;
}


