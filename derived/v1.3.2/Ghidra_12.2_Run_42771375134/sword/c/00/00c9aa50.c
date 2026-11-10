/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c9aa50; name: FUN_00c9aa50
 */


void FUN_00c9aa50(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (1 < *(uint *)(param_1 + 0xb0)) {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0xb4)) {
  case 0:
    uVar1 = FUN_00c84420(*(undefined8 *)(param_1 + 0xa8),0);
    *param_3 = uVar1;
    return;
  case 1:
    uVar1 = FUN_00c84420(*(undefined8 *)(param_1 + 0xa8),1);
    *param_2 = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 0x12;
    goto LAB_00c9abc0;
  case 2:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 2;
    break;
  case 3:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 3;
    break;
  case 4:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 4;
    break;
  case 5:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 5;
    break;
  case 6:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 6;
    break;
  case 7:
    uVar1 = FUN_00c84420(*(undefined8 *)(param_1 + 0xa8),7);
    *param_2 = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 0x13;
    goto LAB_00c9abc0;
  case 8:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 8;
    break;
  case 9:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 9;
    break;
  case 10:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 10;
    break;
  case 0xb:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 0xb;
    break;
  case 0xc:
    uVar1 = FUN_00c84420(*(undefined8 *)(param_1 + 0xa8),0xc);
    *param_2 = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 0x14;
    goto LAB_00c9abc0;
  case 0xd:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 0xd;
    break;
  case 0xe:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 0xe;
    break;
  case 0xf:
    uVar1 = FUN_00c84420(*(undefined8 *)(param_1 + 0xa8),0x15);
    *param_2 = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 0x17;
LAB_00c9abc0:
    uVar1 = FUN_00c84420(uVar1,uVar2);
    *param_4 = uVar1;
    return;
  default:
    return;
  }
  uVar1 = FUN_00c84420(uVar1,uVar2);
  *param_2 = uVar1;
  return;
}


