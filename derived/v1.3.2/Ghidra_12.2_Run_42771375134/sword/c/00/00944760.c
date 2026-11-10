/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00944760; name: FUN_00944760
 */


void FUN_00944760(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined8 param_5)

{
  undefined1 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined4 uVar4;
  
  FUN_00943e70(param_2);
  uVar4 = 0x15c;
  switch(param_4) {
  case 1:
    uVar4 = 0x174;
    break;
  case 2:
    uVar4 = 0x1a0;
    break;
  case 3:
    uVar4 = 0x188;
    break;
  case 4:
    break;
  case 5:
    uVar3 = FUN_008ed1d0(param_5,extraout_x1,0x15c);
    uVar4 = 0x144;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0x140;
    }
    break;
  case 6:
    uVar4 = 0x1d4;
    break;
  case 7:
    uVar4 = 0x1bc;
    break;
  default:
    goto switchD_009447a8_caseD_8;
  case 9:
    uVar4 = 0x1b4;
    break;
  case 0xb:
    uVar4 = 0x2fe;
    break;
  case 0xc:
    uVar4 = 0x30a;
    break;
  case 0xd:
    uVar4 = 0x31e;
    break;
  case 0xe:
    uVar4 = 900;
    break;
  case 0xf:
    uVar4 = 0x4a8;
    break;
  case 0x11:
    uVar4 = 500;
    break;
  case 0x12:
    uVar4 = 0x332;
    break;
  case 0x13:
    uVar4 = 0x3d4;
    break;
  case 0x15:
    uVar4 = 0x3e0;
  }
  FUN_00943f20(param_2,2,uVar4);
  uVar1 = FUN_008e0a00(param_3);
  FUN_00943f60(param_2,uVar1);
  if (param_4 == 0xd) {
    uVar2 = FUN_008ed2f0(param_5);
    FUN_00943f60(param_2,uVar2);
    return;
  }
switchD_009447a8_caseD_8:
  return;
}


