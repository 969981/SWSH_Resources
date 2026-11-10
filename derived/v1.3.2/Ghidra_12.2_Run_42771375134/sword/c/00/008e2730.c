/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e2730; name: FUN_008e2730
 */


void FUN_008e2730(long param_1,ulong param_2,int param_3,byte param_4,uint param_5)

{
  int *piVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_2 = param_2 & 0xff;
  if ((param_5 & 1) != 0) {
    lVar3 = param_1 + param_2 * 0x1c;
    lVar4 = param_1 + param_2 * 0x1c;
    piVar1 = (int *)(lVar3 + 0x2c8);
    *piVar1 = param_3;
    *(undefined2 *)(lVar4 + 0x2cf) = 0;
    *(undefined1 *)(lVar4 + 0x2d1) = 0;
    if (param_3 == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = FUN_00880a40(param_3,0);
    }
    lVar4 = param_1 + param_2 * 0x1c;
    if (bVar2 <= param_4 || param_4 == 0) {
      param_4 = bVar2;
    }
    *(byte *)(lVar4 + 0x2cd) = param_4;
    *(byte *)(lVar4 + 0x2cc) = param_4;
    if (*(char *)(lVar4 + 0x2e0) != '\0') {
      param_1 = param_1 + param_2 * 0x1c;
      uVar5 = *(undefined8 *)piVar1;
      *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(lVar3 + 0x2d0);
      *(undefined8 *)(param_1 + 0x2d4) = uVar5;
    }
    return;
  }
  lVar3 = param_1 + param_2 * 0x1c;
  *(int *)(lVar3 + 0x2d4) = param_3;
  *(undefined2 *)(lVar3 + 0x2db) = 0;
  *(undefined1 *)(lVar3 + 0x2dd) = 0;
  if (param_3 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = FUN_00880a40(param_3,0);
  }
  param_1 = param_1 + param_2 * 0x1c;
  if (bVar2 <= param_4 || param_4 == 0) {
    param_4 = bVar2;
  }
  *(byte *)(param_1 + 0x2d9) = param_4;
  *(byte *)(param_1 + 0x2d8) = param_4;
  *(undefined1 *)(param_1 + 0x2e0) = 0;
  return;
}


