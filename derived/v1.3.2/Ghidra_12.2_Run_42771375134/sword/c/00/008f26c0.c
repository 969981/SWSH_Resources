/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f26c0; name: FUN_008f26c0
 */


void FUN_008f26c0(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_50 [3];
  undefined4 local_44;
  undefined2 local_40;
  
  if (*(long *)(param_1 + 0x750) != 0) {
    FUN_009b10e0();
    lVar5 = *(long *)(param_1 + 0x750);
    if (*(char *)(lVar5 + 0x3a9) != '\0') {
      bVar1 = *(byte *)(param_1 + 0x174);
      uVar3 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                           *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),(ulong)bVar1);
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + (ulong)bVar1 * 8 + 0x198) == 0)) {
        uVar2 = 0;
      }
      else {
        uVar4 = FUN_008fe500();
        uVar2 = FUN_009c9380(uVar4,0);
      }
      FUN_009b5530(lVar5,uVar2);
      lVar5 = *(long *)(param_1 + 0x750);
    }
    uVar3 = FUN_009b54a0(lVar5);
    if (((uVar3 & 1) != 0) && (FUN_008fb8f0(param_1), *(long *)(param_1 + 0x758) != 0)) {
      FUN_009caea0();
    }
    uVar3 = FUN_009b54b0(*(undefined8 *)(param_1 + 0x750));
    if ((uVar3 & 1) != 0) {
      uVar2 = FUN_009b5540(*(undefined8 *)(param_1 + 0x750));
      FUN_008fb990(param_1,uVar2);
      lVar5 = *(long *)(param_1 + 0x758);
      if (lVar5 != 0) {
        bVar1 = *(byte *)(param_1 + 0x174);
        uVar3 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                             *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),(ulong)bVar1);
        if (((uVar3 & 1) == 0) || (*(long *)(param_1 + (ulong)bVar1 * 8 + 0x198) == 0)) {
          uVar2 = 0;
        }
        else {
          uVar4 = FUN_008fe500();
          uVar2 = FUN_009c9380(uVar4,0);
        }
        FUN_009cae90(lVar5,uVar2);
      }
    }
  }
  if (*(long *)(param_1 + 0x758) == 0) {
    return;
  }
  FUN_009cab20();
  lVar5 = *(long *)(param_1 + 0x758);
  if ((*(byte *)(*(long *)(lVar5 + 0x60) + 0xb40) >> 4 & 1) != 0) {
    if (*(int *)(lVar5 + 0x2530) == 9) {
      FUN_008fb8f0(param_1);
      lVar5 = *(long *)(param_1 + 0x758);
      if ((*(byte *)(*(long *)(lVar5 + 0x60) + 0xb40) >> 4 & 1) == 0) goto LAB_008f28ec;
    }
    if (*(int *)(lVar5 + 0x2530) == 0xb) {
      FUN_008fb990(param_1,*(undefined4 *)(lVar5 + 0x2534));
      lVar5 = *(long *)(param_1 + 0x758);
      if ((*(byte *)(*(long *)(lVar5 + 0x60) + 0xb40) >> 4 & 1) == 0) goto LAB_008f28ec;
    }
    uVar3 = FUN_009caec0(lVar5,&local_44,5);
    if ((uVar3 & 1) != 0) {
      local_50[0] = CONCAT22(local_40,(short)local_44);
      if ((*(byte *)(*(long *)(param_1 + 0x88) + 0xb40) >> 4 & 1) != 0) {
        bVar1 = *(byte *)(param_1 + 0x174);
        uVar3 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                             *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),(ulong)bVar1);
        if (((uVar3 & 1) != 0) &&
           (lVar5 = *(long *)(param_1 + (ulong)bVar1 * 8 + 0x198), lVar5 != 0)) {
          FUN_008fe530(lVar5,local_50);
        }
      }
      FUN_009caed0(*(undefined8 *)(param_1 + 0x758));
    }
    lVar5 = *(long *)(param_1 + 0x758);
    if ((*(byte *)(*(long *)(lVar5 + 0x60) + 0xb40) >> 4 & 1) != 0) {
      uVar3 = FUN_009caf20(lVar5,&local_44,local_50);
      if ((uVar3 & 1) != 0) {
        *(undefined4 *)(param_1 + 0x16c) = local_44;
        *(undefined4 *)(param_1 + 0x170) = local_50[0];
        if (*(long *)(param_1 + 0x758) != 0) {
          FUN_009caee0();
        }
      }
      lVar5 = *(long *)(param_1 + 0x758);
    }
  }
LAB_008f28ec:
  if (((lVar5 != 0) && ((*(byte *)(*(long *)(lVar5 + 0x60) + 0xb40) >> 4 & 1) != 0)) &&
     (uVar3 = FUN_011faab0(*(undefined8 *)PTR_DAT_02710940), (uVar3 & 1) != 0)) {
    if (*(long *)(param_1 + 0x198) != 0) {
      FUN_008fe420();
    }
    if (*(long *)(param_1 + 0x1a0) != 0) {
      FUN_008fe420();
    }
    if (*(long *)(param_1 + 0x1a8) != 0) {
      FUN_008fe420();
    }
    if (*(long *)(param_1 + 0x1b0) != 0) {
      FUN_008fe420();
    }
    if (*(long *)(param_1 + 0x1b8) != 0) {
      FUN_008fe420();
    }
  }
  return;
}


