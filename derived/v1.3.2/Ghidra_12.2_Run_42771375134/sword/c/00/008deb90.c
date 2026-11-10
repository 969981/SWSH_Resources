/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008deb90; name: FUN_008deb90
 */


void FUN_008deb90(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  
  lVar8 = 0;
  lVar1 = param_2 + 0x120;
  lVar2 = param_1 + 0x120;
  do {
    while (*(long *)(lVar1 + lVar8) == 0) {
      lVar3 = lVar2 + lVar8;
      if (*(long *)(lVar3 + 0xf0) == 0) {
        lVar10 = *(long *)(lVar2 + lVar8);
        if (lVar10 == 0) {
          *(undefined8 *)(lVar3 + 0xf0) = 0;
          lVar10 = *(long *)(lVar2 + lVar8);
          *(undefined8 *)(lVar2 + lVar8) = 0;
        }
        else {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
          lVar7 = *(long *)(lVar3 + 0xf0);
          *(long *)(lVar3 + 0xf0) = lVar10;
          if (lVar7 != 0) {
            (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
          }
          lVar10 = *(long *)(lVar2 + lVar8);
          *(undefined8 *)(lVar2 + lVar8) = 0;
        }
        if (lVar10 != 0) {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
        }
      }
      FUN_008e0f20(*(undefined8 *)(lVar3 + 0xf0),*(undefined8 *)(lVar1 + lVar8 + 0xf0));
      lVar8 = lVar8 + 8;
      if (lVar8 == 0xf0) goto LAB_008decd0;
    }
    if (*(long *)(lVar2 + lVar8) == 0) {
      lVar3 = lVar2 + lVar8;
      lVar10 = *(long *)(lVar3 + 0xf0);
      if (lVar10 == 0) {
        *(undefined8 *)(lVar2 + lVar8) = 0;
        lVar10 = *(long *)(lVar3 + 0xf0);
        *(undefined8 *)(lVar3 + 0xf0) = 0;
      }
      else {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
        lVar7 = *(long *)(lVar2 + lVar8);
        *(long *)(lVar2 + lVar8) = lVar10;
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
        }
        lVar10 = *(long *)(lVar3 + 0xf0);
        *(undefined8 *)(lVar3 + 0xf0) = 0;
      }
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
      }
    }
    FUN_008e0f20(*(undefined8 *)(lVar2 + lVar8),*(undefined8 *)(lVar1 + lVar8));
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0xf0);
LAB_008decd0:
  lVar1 = param_2 + 8;
  FUN_009140d0(param_1 + 8);
  cVar4 = FUN_009141c0(lVar1);
  if (cVar4 != '\0') {
    uVar9 = 0;
    do {
      FUN_00914330(lVar1,uVar9);
      bVar5 = FUN_008e0a00();
      FUN_009140f0(param_1 + 8,*(undefined8 *)(param_1 + (ulong)bVar5 * 8 + 0x120));
      uVar9 = uVar9 + 1;
      uVar6 = FUN_009141c0(lVar1);
    } while (uVar9 < (uVar6 & 0xff));
  }
  lVar1 = param_2 + 0x40;
  FUN_009140d0(param_1 + 0x40);
  cVar4 = FUN_009141c0(lVar1);
  if (cVar4 != '\0') {
    uVar9 = 0;
    do {
      FUN_00914330(lVar1,uVar9);
      bVar5 = FUN_008e0a00();
      FUN_009140f0(param_1 + 0x40,*(undefined8 *)(param_1 + (ulong)bVar5 * 8 + 0x120));
      uVar9 = uVar9 + 1;
      uVar6 = FUN_009141c0(lVar1);
    } while (uVar9 < (uVar6 & 0xff));
  }
  lVar1 = param_2 + 0x78;
  FUN_009140d0(param_1 + 0x78);
  cVar4 = FUN_009141c0(lVar1);
  if (cVar4 != '\0') {
    uVar9 = 0;
    do {
      FUN_00914330(lVar1,uVar9);
      bVar5 = FUN_008e0a00();
      FUN_009140f0(param_1 + 0x78,*(undefined8 *)(param_1 + (ulong)bVar5 * 8 + 0x120));
      uVar9 = uVar9 + 1;
      uVar6 = FUN_009141c0(lVar1);
    } while (uVar9 < (uVar6 & 0xff));
  }
  lVar1 = param_2 + 0xb0;
  FUN_009140d0(param_1 + 0xb0);
  cVar4 = FUN_009141c0(lVar1);
  if (cVar4 != '\0') {
    uVar9 = 0;
    do {
      FUN_00914330(lVar1,uVar9);
      bVar5 = FUN_008e0a00();
      FUN_009140f0(param_1 + 0xb0,*(undefined8 *)(param_1 + (ulong)bVar5 * 8 + 0x120));
      uVar9 = uVar9 + 1;
      uVar6 = FUN_009141c0(lVar1);
    } while (uVar9 < (uVar6 & 0xff));
  }
  param_2 = param_2 + 0xe8;
  FUN_009140d0(param_1 + 0xe8);
  cVar4 = FUN_009141c0(param_2);
  if (cVar4 != '\0') {
    uVar9 = 0;
    do {
      FUN_00914330(param_2,uVar9);
      bVar5 = FUN_008e0a00();
      FUN_009140f0(param_1 + 0xe8,*(undefined8 *)(param_1 + (ulong)bVar5 * 8 + 0x120));
      uVar9 = uVar9 + 1;
      uVar6 = FUN_009141c0(param_2);
    } while (uVar9 < (uVar6 & 0xff));
  }
  return;
}


