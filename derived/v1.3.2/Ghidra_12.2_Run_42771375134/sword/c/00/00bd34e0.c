/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd34e0; name: FUN_00bd34e0
 */


void FUN_00bd34e0(long param_1,undefined4 param_2,ulong param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  switch(param_2) {
  case 0:
    lVar4 = param_1 + 0x2d68;
    break;
  case 1:
    lVar4 = param_1 + 0x2d86;
    break;
  case 2:
    lVar4 = param_1 + 0x2da4;
    break;
  case 3:
    lVar4 = param_1 + 0x2dc2;
    break;
  default:
    lVar4 = 0;
  }
  if (param_4 == 0) {
    FUN_0167b9b0(*(undefined8 *)(param_1 + 0x58),
                 param_1 + 0x68 + (ulong)*(byte *)(lVar4 + (param_3 & 0xffffffff)) * 0x78 + 0x18,0);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    lVar4 = param_1 + 0x68 + (ulong)*(byte *)(lVar4 + (param_3 & 0xffffffff)) * 0x78 + 0x38;
    uVar3 = 0;
  }
  else {
    param_3 = param_3 & 0xffffffff;
    if (param_4 == 4) {
      FUN_0167b9b0(*(undefined8 *)(param_1 + 0x58),
                   param_1 + 0x68 + (ulong)*(byte *)(lVar4 + param_3) * 0x78 + 0x18,0);
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      lVar4 = param_1 + 0x68 + (ulong)*(byte *)(lVar4 + param_3) * 0x78 + 0x38;
    }
    else {
      lVar1 = param_1 + 0x68;
      FUN_0167b9b0(*(undefined8 *)(param_1 + 0x58),
                   lVar1 + (ulong)*(byte *)(lVar4 + param_3) * 0x78 + 0x38,0);
      FUN_0167b9b0(*(undefined8 *)(param_1 + 0x58),
                   lVar1 + (ulong)*(byte *)(lVar4 + param_3) * 0x78 + 0x18,1);
      if (param_4 == 3) {
        FUN_0167b9b0(*(undefined8 *)(param_1 + 0x58),
                     lVar1 + (ulong)*(byte *)(lVar4 + param_3) * 0x78 + 0x20,0);
        FUN_0167b9b0(*(undefined8 *)(param_1 + 0x58),
                     lVar1 + (ulong)*(byte *)(lVar4 + param_3) * 0x78 + 0x28,0);
        uVar2 = *(undefined8 *)(param_1 + 0x58);
        lVar4 = lVar1 + (ulong)*(byte *)(lVar4 + param_3) * 0x78 + 0x30;
      }
      else if (param_4 == 2) {
        lVar1 = param_1 + 0x68;
        FUN_0167b9b0(*(undefined8 *)(param_1 + 0x58),
                     lVar1 + (ulong)*(byte *)(lVar4 + param_3) * 0x78 + 0x20,0);
        FUN_0167b9b0(*(undefined8 *)(param_1 + 0x58),
                     lVar1 + (ulong)*(byte *)(lVar4 + param_3) * 0x78 + 0x30,0);
        uVar2 = *(undefined8 *)(param_1 + 0x58);
        lVar4 = lVar1 + (ulong)*(byte *)(lVar4 + param_3) * 0x78 + 0x28;
      }
      else {
        if (param_4 != 1) {
          return;
        }
        lVar1 = param_1 + 0x68;
        FUN_0167b9b0(*(undefined8 *)(param_1 + 0x58),
                     lVar1 + (ulong)*(byte *)(lVar4 + param_3) * 0x78 + 0x28,0);
        FUN_0167b9b0(*(undefined8 *)(param_1 + 0x58),
                     lVar1 + (ulong)*(byte *)(lVar4 + param_3) * 0x78 + 0x30,0);
        uVar2 = *(undefined8 *)(param_1 + 0x58);
        lVar4 = lVar1 + (ulong)*(byte *)(lVar4 + param_3) * 0x78 + 0x20;
      }
    }
    uVar3 = 1;
  }
  FUN_0167b9b0(uVar2,lVar4,uVar3);
  return;
}


