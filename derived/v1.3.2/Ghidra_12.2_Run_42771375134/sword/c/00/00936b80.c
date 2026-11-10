/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00936b80; name: FUN_00936b80
 */


void FUN_00936b80(long param_1,undefined8 param_2,char param_3,undefined4 param_4,char param_5)

{
  undefined1 uVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  uVar1 = FUN_008e0a00(param_2);
  if (param_3 == '\x03') {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = 0xba;
    iVar5 = 0x17b;
  }
  else if (param_3 == '\x02') {
    if (param_5 == '\x05') {
      sVar2 = FUN_009486e0(param_4);
      iVar5 = (int)sVar2;
      if (-1 < iVar5) {
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        uVar4 = 0xbb;
        goto LAB_00936c74;
      }
    }
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = 0xbb;
    iVar5 = 0x120;
  }
  else {
    if (param_3 != '\x01') {
switchD_00936be8_caseD_7:
      FUN_00917e70(*(undefined8 *)(param_1 + 0x18),0xba,0x55,0xffff0000);
      return;
    }
    switch(param_4) {
    case 1:
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      uVar4 = 0xbb;
      iVar5 = 0x180;
      break;
    case 2:
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      uVar4 = 0xbb;
      iVar5 = 0x1ac;
      break;
    case 3:
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      uVar4 = 0xbb;
      iVar5 = 0x194;
      break;
    case 4:
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      uVar4 = 0xbb;
      iVar5 = 0x16c;
      break;
    case 5:
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      uVar4 = 0xbb;
      iVar5 = 0x154;
      break;
    case 6:
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      uVar4 = 0xbb;
      iVar5 = 0x1e0;
      break;
    default:
      goto switchD_00936be8_caseD_7;
    case 0xf:
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      uVar4 = 0xbb;
      iVar5 = 0x28;
      break;
    case 0x14:
      return;
    }
  }
LAB_00936c74:
  FUN_00917e70(uVar3,uVar4,iVar5,uVar1,0xffff0000);
  return;
}


