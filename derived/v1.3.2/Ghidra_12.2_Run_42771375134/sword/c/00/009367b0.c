/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009367b0; name: FUN_009367b0
 */


void FUN_009367b0(long param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  
  uVar1 = FUN_008e0a00(param_2);
  switch(param_4) {
  case 1:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0xba;
    iVar7 = 0x60;
    break;
  case 2:
    FUN_00917e70(*(undefined8 *)(param_1 + 0x18),0xbb,0x1a4,uVar1,0xffff0000);
    cVar2 = FUN_008fa2d0(*(undefined8 *)(param_1 + 8),param_2);
    if (cVar2 != -1) {
      return;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0x109;
    goto LAB_00936b24;
  case 3:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0xbb;
    iVar7 = 0x178;
    break;
  case 4:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0xbb;
    iVar7 = 0x18c;
    break;
  default:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0xba;
    iVar7 = 0x55;
    break;
  case 6:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0xbb;
    iVar7 = 0x1ec;
    break;
  case 7:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0xbb;
    iVar7 = 0x1f0;
    break;
  case 8:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0xbb;
    iVar7 = 0x1c8;
    break;
  case 9:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0x322;
    goto LAB_009369d4;
  case 10:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0x302;
    goto LAB_009369d4;
  case 0xb:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0x30e;
    goto LAB_009369d4;
  case 0xc:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0x31a;
    goto LAB_009369d4;
  case 0xd:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0x4b4;
    goto LAB_009369d4;
  case 0xe:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0xbb;
    iVar7 = 0x4b8;
    break;
  case 0xf:
    FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0xb7,uVar1,0);
    FUN_00917e70(*(undefined8 *)(param_1 + 0x18),0xbb,0x262,uVar1,0xffff0000);
    FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0xb8,uVar1);
    return;
  case 0x12:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0xbb;
    iVar7 = 0x25a;
    break;
  case 0x13:
  case 0x19:
    return;
  case 0x14:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0x5c0;
LAB_009369d4:
    FUN_00917e70(uVar4,0xbb,uVar6,uVar1,param_3,0xffff0000);
    return;
  case 0x16:
    uVar5 = FUN_008e1920(param_2,0);
    if ((uVar5 & 1) == 0) {
      uVar3 = FUN_008ebfa0(4);
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      iVar7 = (uVar3 & 0xff) + 0xd3;
      uVar6 = 0xba;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      uVar6 = 0xba;
      iVar7 = 0xd9;
    }
    break;
  case 0x17:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0xba;
    iVar7 = 0xd8;
    break;
  case 0x1a:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0x110;
    goto LAB_00936b24;
  case 0x1b:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0x123;
    goto LAB_00936b24;
  case 0x1c:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0x124;
LAB_00936b24:
    FUN_00917e70(uVar4,0xba,uVar6,0xffff0000);
    return;
  case 0x1d:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0xba;
    iVar7 = 0x129;
    break;
  case 0x1e:
  case 0x1f:
  case 0x20:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0xba;
    iVar7 = 0x12a;
    break;
  case 0x21:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0xbb;
    iVar7 = 0x744;
    break;
  case 0x22:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0xbb;
    iVar7 = 0x760;
    break;
  case 0x23:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0xbb;
    iVar7 = 0x7ae;
    break;
  case 0x24:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0xba;
    iVar7 = 0x1d6;
    break;
  case 0x28:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0xba;
    iVar7 = 0x19a;
    break;
  case 0x29:
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = 0xba;
    iVar7 = 0x19b;
  }
  FUN_00917e70(uVar4,uVar6,iVar7,uVar1,0xffff0000);
  return;
}


