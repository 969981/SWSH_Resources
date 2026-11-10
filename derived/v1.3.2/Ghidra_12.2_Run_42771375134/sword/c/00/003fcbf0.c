/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fcbf0; name: FUN_003fcbf0
 */


void FUN_003fcbf0(long param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined1 auStack_58 [40];
  
  bVar2 = *param_2;
  bVar3 = *(byte *)(*(long *)(param_1 + 0x40) + 0x40);
  if (((bVar3 & 5) != 0) == ((bVar2 & 5) != 0)) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x48);
    if ((*(byte *)(lVar5 + 0x110e) & 1) == 0) {
      if ((bVar3 >> 2 & 1) != (bVar2 & 4) >> 2) {
        FUN_003fc860(param_1);
        bVar2 = *param_2;
        goto joined_r0x003fcccc;
      }
    }
    else {
      lVar5 = *(long *)(*(long *)(lVar5 + 0x728) + 0xb0);
      lVar7 = ((ulong)*(uint *)(param_1 + 0x18) & 0x1fffffff) * 0x10;
      uVar1 = 3;
      if ((bVar3 & 4) == 0) {
        uVar1 = (ulong)(*(uint *)(param_1 + 0x18) >> 0x1d & 3);
      }
      *(ulong *)(lVar5 + lVar7) = uVar1 | *(ulong *)(lVar5 + lVar7) & 0xfffffffffffffff0;
      if ((bVar3 >> 2 & 1) != (bVar2 & 4) >> 2) {
        FUN_003c6a10(param_1,1,8);
      }
    }
    bVar2 = *param_2;
  }
  else if (((bVar2 & 5) == 0) && ((bVar3 & 5) != 0)) {
    lVar5 = *(long *)(param_1 + 0x10);
    cVar4 = *(char *)(*(long *)(lVar5 + 0x50) + 0xd);
    uVar6 = 2;
    if ((lVar5 != 0) && (cVar4 == '\x01' || cVar4 == '\x04')) {
      uVar6 = 2 - (*(byte *)(*(long *)(lVar5 + 0x50) + 0x2c) & 1);
    }
    if (cVar4 == '\0') {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(lVar5 + 0x58) * 4 + 0xcU | uVar6;
    }
    FUN_003c6b10(*(undefined4 *)(*(long *)(param_1 + 0x40) + 0x3c),param_1,uVar6,bVar3 & 4);
    bVar2 = *param_2;
  }
  else {
    FUN_003c6bd0(param_1);
    lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x48);
    (**(code **)(**(long **)(*(long *)(lVar5 + 0x720) + 0x6e8) + 0xa8))(auStack_58);
    FUN_003cde40(*(undefined8 *)(lVar5 + 0x1048),param_1,4,auStack_58,
                 *(uint *)(lVar5 + 0x110c) >> 4 & 1);
    bVar2 = *param_2;
  }
joined_r0x003fcccc:
  if ((bVar3 >> 1 & 1) == 0) {
    if (((bVar2 >> 1 & 1) != 0) && (*(int *)(param_1 + 0x4c) != -1)) {
      FUN_003fe730(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x820),param_1);
    }
  }
  else if ((bVar2 >> 1 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    cVar4 = *(char *)(*(long *)(lVar5 + 0x50) + 0xd);
    if ((((lVar5 != 0) && (cVar4 == '\x01' || cVar4 == '\x04')) &&
        (*(uint *)(lVar5 + 0xb8) < 0xfffffffe)) &&
       (((*(int *)(param_1 + 0x4c) == -1 && ((~*(byte *)(*(long *)(lVar5 + 0x50) + 0x2c) & 3) != 0))
        && (((*(byte *)(lVar5 + 0x7c) & 1) == 0 &&
            ((*(byte *)(*(long *)(param_1 + 0x40) + 0x40) >> 1 & 1) != 0)))))) {
      FUN_003fe610(*(undefined8 *)(*(long *)(lVar5 + 0x48) + 0x820),param_1);
    }
  }
  return;
}


