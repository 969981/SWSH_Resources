/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a8ff0; name: FUN_009a8ff0
 */


void FUN_009a8ff0(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 *local_80;
  undefined1 local_78;
  undefined1 auStack_70 [40];
  undefined8 local_48;
  
  uVar1 = param_4 - 4;
  uVar6 = (undefined1)(0x2d2c0000002a2b >> (((ulong)uVar1 & 7) << 3));
  if (6 < uVar1) {
    uVar6 = 0;
  }
  local_48 = FUN_008e1aa0(param_2,param_4);
  uVar2 = FUN_008ed480(&local_48);
  FUN_00943e60(auStack_70);
  FUN_00943e70(auStack_70);
  uVar5 = 0x14c;
  switch((ulong)uVar1) {
  case 0:
    uVar5 = 0x164;
    break;
  case 1:
    break;
  default:
    goto switchD_009a907c_caseD_2;
  case 5:
    uVar5 = 0x1b8;
    break;
  case 6:
    uVar5 = 0x5ac;
  }
  FUN_00943f20(auStack_70,2,uVar5);
  uVar3 = FUN_008e0a00(param_2);
  FUN_00943f60(auStack_70,uVar3);
switchD_009a907c_caseD_2:
  iVar4 = FUN_00942620(param_1);
  if (iVar4 == 2) {
    FUN_00943e70(auStack_70);
  }
  local_80 = auStack_70;
  local_78 = 1;
  local_90 = param_2;
  local_88 = param_3;
  local_84 = uVar6;
  local_83 = uVar2;
  FUN_00942450(param_1);
  uVar5 = FUN_00925c00();
  FUN_0094ad90(uVar5,auStack_98,&local_90);
  return;
}


