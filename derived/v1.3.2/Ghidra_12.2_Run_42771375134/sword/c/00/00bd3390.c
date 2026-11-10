/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd3390; name: FUN_00bd3390
 */


void FUN_00bd3390(long param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  switch(param_2) {
  case 0:
    lVar3 = 0x2d68;
    break;
  case 1:
    lVar3 = 0x2d86;
    break;
  case 2:
    lVar3 = 0x2da4;
    break;
  case 3:
    lVar3 = 0x2dc2;
    break;
  default:
    lVar3 = 0;
    goto LAB_00bd33fc;
  }
  lVar3 = param_1 + lVar3;
LAB_00bd33fc:
  uVar4 = (ulong)param_3;
  lVar2 = param_1 + 0x68;
  FUN_0167bb70(*(undefined8 *)(param_1 + 0x58),lVar2 + (ulong)*(byte *)(lVar3 + uVar4) * 0x78 + 0x68
              );
  FUN_0167bb70(*(undefined8 *)(param_1 + 0x58),lVar2 + (ulong)*(byte *)(lVar3 + uVar4) * 0x78 + 0x50
              );
  FUN_0167bb70(*(undefined8 *)(param_1 + 0x58),lVar2 + (ulong)*(byte *)(lVar3 + uVar4) * 0x78 + 0x58
              );
  if (param_4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    lVar2 = param_1 + (ulong)*(byte *)(lVar3 + uVar4) * 0x78 + 0xd0;
  }
  else {
    lVar2 = param_1 + (ulong)*(byte *)(lVar3 + uVar4) * 0x78;
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    if (param_4 == 1) {
      lVar2 = lVar2 + 0xb8;
    }
    else {
      lVar2 = lVar2 + 0xc0;
    }
  }
  FUN_0167ba30(uVar1,lVar2);
  FUN_0167ba30(*(undefined8 *)(param_1 + 0x58),
               param_1 + 0x68 + (ulong)*(byte *)(lVar3 + uVar4) * 0x78 + 0x60);
  if ((param_5 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x3f800000;
  }
  FUN_0167bdb0(uVar5,*(undefined8 *)(param_1 + 0x58),
               param_1 + 0x68 + (ulong)*(byte *)(lVar3 + uVar4) * 0x78 + 0x60);
  return;
}


