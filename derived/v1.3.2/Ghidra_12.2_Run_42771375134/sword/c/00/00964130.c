/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00964130; name: FUN_00964130
 */


bool FUN_00964130(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 auStack_64 [36];
  char local_38 [8];
  
  sVar2 = FUN_008e4be0(param_2);
  if (((sVar2 == 0) || (uVar4 = FUN_00888fc0(), (uVar4 & 1) == 0)) ||
     (sVar3 = FUN_008e2d10(param_2), sVar3 != 0)) {
    return false;
  }
  uVar1 = FUN_008e0a00(param_2);
  local_70 = 0x1f000000001f1f;
  local_68 = 0;
  FUN_00943e60(auStack_64);
  uVar5 = local_70;
  local_70._5_3_ = SUB83(uVar5,5);
  local_70._0_5_ = CONCAT14(1,CONCAT22(sVar2,CONCAT11(uVar1,uVar1)));
  FUN_00943f20(auStack_64,2,0x3dc);
  FUN_00943f60(auStack_64,uVar1);
  FUN_00943f60(auStack_64,sVar2);
  FUN_00942450(param_1);
  uVar5 = FUN_009257c0();
  FUN_0094cca0(uVar5,local_38,&local_70);
  return local_38[0] != '\0';
}


