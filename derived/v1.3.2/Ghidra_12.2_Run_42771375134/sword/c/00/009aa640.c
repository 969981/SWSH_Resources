/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009aa640; name: FUN_009aa640
 */


void FUN_009aa640(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a0 [16];
  byte local_90 [4];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined7 uStack_78;
  undefined1 local_71;
  undefined6 uStack_70;
  undefined1 uStack_6a;
  undefined4 local_68;
  undefined1 auStack_64 [36];
  
  bVar1 = FUN_008e0a00(param_2);
  uVar2 = FUN_008f94e0();
  local_90[0] = 0x1f;
  local_8c = 0x2d;
  local_68 = 0;
  uStack_70 = 0;
  uStack_6a = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_71 = 0;
  local_88 = 0;
  FUN_00943e60(auStack_64);
  local_88 = CONCAT71(local_88._1_7_,bVar1);
  uStack_6a = 1;
  local_68 = CONCAT13(1,(undefined3)local_68);
  local_90[0] = bVar1;
  local_8c = param_3;
  switch(param_3) {
  case 1:
    uVar3 = 0xf1;
    break;
  case 2:
    uVar3 = 0xee;
    break;
  case 3:
    uVar3 = 0xf2;
    break;
  case 4:
    uVar3 = 0xf0;
    break;
  case 5:
    uVar3 = 0xef;
    break;
  default:
    goto switchD_009aa6d8_default;
  }
  FUN_00943f20(auStack_64,1,uVar3);
  FUN_00943f60(auStack_64,bVar1);
  FUN_00943f60(auStack_64,uVar2);
switchD_009aa6d8_default:
  FUN_00942450(param_1);
  uVar3 = FUN_00925570();
  FUN_00948290(uVar3,auStack_a0,local_90);
  return;
}


