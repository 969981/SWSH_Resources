/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e7dc0; name: FUN_009e7dc0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_009e7dc0(long param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  undefined1 auStack_60 [12];
  undefined1 local_54 [4];
  
  uVar12 = 0;
  iVar15 = 0;
  piVar14 = (int *)(param_1 + 0x130);
  bVar3 = true;
  iVar13 = 100;
  do {
    while (piVar14[-3] != 0) {
      iVar2 = piVar14[-2];
joined_r0x009e7e9c:
      if (iVar2 == 0) goto LAB_009e7ea0;
LAB_009e7e0c:
      iVar2 = piVar14[-1];
joined_r0x009e7e10:
      if (iVar2 != 0) goto LAB_009e7e14;
LAB_009e7f10:
      uVar11 = FUN_008f9440(*(undefined8 *)(param_1 + 0x68),*(undefined1 *)(param_1 + 0xc2),
                            uVar12 & 0xffffffff);
      if (((uVar11 & 1) == 0) || (99 < piVar14[-0x15])) {
        iVar2 = piVar14[-0x15];
        if (!bVar3 && iVar2 <= iVar13) {
          bVar3 = false;
          if (iVar2 == iVar13) {
            iVar15 = iVar15 + 1;
          }
          iVar2 = *piVar14;
          goto joined_r0x009e7f7c;
        }
        bVar3 = false;
        iVar15 = 1;
        iVar1 = *piVar14;
        iVar13 = iVar2;
        goto joined_r0x009e7f64;
      }
      piVar14[-1] = 2;
      iVar2 = *piVar14;
joined_r0x009e7f7c:
      if (iVar2 == 0) goto LAB_009e7f80;
LAB_009e7e1c:
      uVar12 = uVar12 + 1;
      piVar14 = piVar14 + 4;
      if (uVar12 == 5) goto LAB_009e8008;
    }
    uVar11 = FUN_008f9440(*(undefined8 *)(param_1 + 0x68),*(undefined1 *)(param_1 + 0xc2),
                          uVar12 & 0xffffffff);
    if (((uVar11 & 1) == 0) || (99 < piVar14[-0x17])) {
      iVar2 = piVar14[-0x17];
      if (!(bool)(bVar3 | iVar13 < iVar2)) {
        bVar3 = false;
        if (iVar2 == iVar13) {
          iVar15 = iVar15 + 1;
        }
        iVar2 = piVar14[-2];
        goto joined_r0x009e7e9c;
      }
      bVar3 = false;
      iVar15 = 1;
      iVar1 = piVar14[-2];
      iVar13 = iVar2;
    }
    else {
      piVar14[-3] = 2;
      iVar1 = piVar14[-2];
    }
    if (iVar1 != 0) goto LAB_009e7e0c;
LAB_009e7ea0:
    uVar11 = FUN_008f9440(*(undefined8 *)(param_1 + 0x68),*(undefined1 *)(param_1 + 0xc2),
                          uVar12 & 0xffffffff);
    if (((uVar11 & 1) == 0) || (99 < piVar14[-0x16])) {
      iVar2 = piVar14[-0x16];
      if (bVar3 || iVar13 < iVar2) {
        bVar3 = false;
        iVar15 = 1;
        iVar1 = piVar14[-1];
        iVar13 = iVar2;
        goto joined_r0x009e7ef4;
      }
      bVar3 = false;
      if (iVar2 == iVar13) {
        iVar15 = iVar15 + 1;
      }
      iVar2 = piVar14[-1];
      goto joined_r0x009e7e10;
    }
    piVar14[-2] = 2;
    iVar1 = piVar14[-1];
joined_r0x009e7ef4:
    if (iVar1 == 0) goto LAB_009e7f10;
LAB_009e7e14:
    iVar1 = *piVar14;
joined_r0x009e7f64:
    if (iVar1 != 0) goto LAB_009e7e1c;
LAB_009e7f80:
    uVar11 = FUN_008f9440(*(undefined8 *)(param_1 + 0x68),*(undefined1 *)(param_1 + 0xc2),
                          uVar12 & 0xffffffff);
    if (((uVar11 & 1) == 0) || (99 < piVar14[-0x14])) {
      iVar2 = piVar14[-0x14];
      if (bVar3 || iVar13 < iVar2) {
        bVar3 = false;
        iVar15 = 1;
        iVar13 = iVar2;
      }
      else {
        bVar3 = false;
        if (iVar2 == iVar13) {
          iVar15 = iVar15 + 1;
        }
      }
    }
    else {
      *piVar14 = 2;
    }
    piVar14 = piVar14 + 4;
    uVar12 = uVar12 + 1;
  } while (uVar12 != 5);
LAB_009e8008:
  if (iVar15 == 0) {
    bVar4 = FUN_008e2150(*(undefined8 *)(param_1 + 0x78));
    if (bVar4 == 0) {
LAB_009e8330:
      *(undefined1 *)(param_1 + 0x1a1) = 0;
      return;
    }
    uVar12 = 0;
    uVar11 = 0;
    do {
      if (*(char *)(param_1 + 0x174 + uVar12) != '\0') {
        local_54[uVar11] = (char)uVar12;
        uVar11 = (ulong)((int)uVar11 + 1);
      }
      uVar12 = uVar12 + 1;
    } while (bVar4 != uVar12);
    if ((int)uVar11 == 0) goto LAB_009e8330;
    lVar8 = FUN_008ed5b0(param_1 + 0x88,uVar11);
    *(undefined4 *)(param_1 + 0x198) = 100;
    *(undefined1 *)(param_1 + 0x19c) = local_54[lVar8];
    uVar7 = FUN_008e2240(*(undefined8 *)(param_1 + 0x78));
    uVar12 = FUN_008e0a10(*(undefined8 *)(param_1 + 0x78));
    if (((uVar12 & 1) != 0) || (*(char *)(param_1 + 0xce) != '\0')) {
      uVar7 = FUN_00945420(uVar7);
    }
    uVar10 = *(undefined8 *)(param_1 + 0x68);
    uVar9 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
    uVar5 = FUN_008ecc30(uVar10,uVar9,*(undefined8 *)(param_1 + 0x78),uVar7,auStack_60);
    *(undefined1 *)(param_1 + 0x19d) = uVar5;
    goto LAB_009e844c;
  }
  lVar8 = FUN_008ed5b0(param_1 + 0x88,iVar15);
  if ((*(int *)(param_1 + 0x124) == 0) && (piVar14 = (int *)(param_1 + 0xd4), *piVar14 == iVar13)) {
    if (lVar8 != 0) {
      lVar8 = lVar8 + -1;
      goto LAB_009e8038;
    }
    uVar10 = 0;
    uVar5 = 0;
  }
  else {
LAB_009e8038:
    if ((*(int *)(param_1 + 0x128) == 0) && (piVar14 = (int *)(param_1 + 0xd8), *piVar14 == iVar13))
    {
      if (lVar8 == 0) {
        uVar10 = 0;
        uVar5 = 1;
        goto LAB_009e8430;
      }
      lVar8 = lVar8 + -1;
    }
    if ((*(int *)(param_1 + 300) == 0) && (piVar14 = (int *)(param_1 + 0xdc), *piVar14 == iVar13)) {
      if (lVar8 == 0) {
        uVar10 = 0;
        uVar5 = 2;
        goto LAB_009e8430;
      }
      lVar8 = lVar8 + -1;
    }
    if ((*(int *)(param_1 + 0x130) == 0) && (piVar14 = (int *)(param_1 + 0xe0), *piVar14 == iVar13))
    {
      if (lVar8 == 0) {
        uVar10 = 0;
        uVar5 = 3;
        goto LAB_009e8430;
      }
      lVar8 = lVar8 + -1;
    }
    if ((*(int *)(param_1 + 0x134) == 0) && (piVar14 = (int *)(param_1 + 0xe4), *piVar14 == iVar13))
    {
      if (lVar8 == 0) {
        uVar5 = 0;
        uVar10 = 1;
        goto LAB_009e8430;
      }
      lVar8 = lVar8 + -1;
    }
    if ((*(int *)(param_1 + 0x138) == 0) && (piVar14 = (int *)(param_1 + 0xe8), *piVar14 == iVar13))
    {
      if (lVar8 == 0) {
        uVar10 = 1;
        uVar5 = 1;
        goto LAB_009e8430;
      }
      lVar8 = lVar8 + -1;
    }
    if ((*(int *)(param_1 + 0x13c) == 0) && (piVar14 = (int *)(param_1 + 0xec), *piVar14 == iVar13))
    {
      if (lVar8 == 0) {
        uVar5 = 2;
        uVar10 = 1;
        goto LAB_009e8430;
      }
      lVar8 = lVar8 + -1;
    }
    if ((*(int *)(param_1 + 0x140) == 0) && (piVar14 = (int *)(param_1 + 0xf0), *piVar14 == iVar13))
    {
      if (lVar8 == 0) {
        uVar5 = 3;
        uVar10 = 1;
        goto LAB_009e8430;
      }
      lVar8 = lVar8 + -1;
    }
    if ((*(int *)(param_1 + 0x144) == 0) && (piVar14 = (int *)(param_1 + 0xf4), *piVar14 == iVar13))
    {
      if (lVar8 == 0) {
        uVar5 = 0;
        uVar10 = 2;
        goto LAB_009e8430;
      }
      lVar8 = lVar8 + -1;
    }
    if ((*(int *)(param_1 + 0x148) == 0) && (piVar14 = (int *)(param_1 + 0xf8), *piVar14 == iVar13))
    {
      if (lVar8 == 0) {
        uVar5 = 1;
        uVar10 = 2;
        goto LAB_009e8430;
      }
      lVar8 = lVar8 + -1;
    }
    if ((*(int *)(param_1 + 0x14c) == 0) && (piVar14 = (int *)(param_1 + 0xfc), *piVar14 == iVar13))
    {
      if (lVar8 == 0) {
        uVar10 = 2;
        uVar5 = 2;
        goto LAB_009e8430;
      }
      lVar8 = lVar8 + -1;
    }
    if ((*(int *)(param_1 + 0x150) == 0) && (*(int *)(param_1 + 0x100) == iVar13)) {
      if (lVar8 == 0) {
        piVar14 = (int *)(param_1 + 0x100);
        uVar5 = 3;
        uVar10 = 2;
        goto LAB_009e8430;
      }
      lVar8 = lVar8 + -1;
    }
    if ((*(int *)(param_1 + 0x154) == 0) && (*(int *)(param_1 + 0x104) == iVar13)) {
      if (lVar8 == 0) {
        uVar5 = 0;
        piVar14 = (int *)(param_1 + 0x104);
        uVar10 = 3;
        goto LAB_009e8430;
      }
      lVar8 = lVar8 + -1;
    }
    if ((*(int *)(param_1 + 0x158) == 0) && (*(int *)(param_1 + 0x108) == iVar13)) {
      if (lVar8 == 0) {
        piVar14 = (int *)(param_1 + 0x108);
        uVar5 = 1;
        uVar10 = 3;
        goto LAB_009e8430;
      }
      lVar8 = lVar8 + -1;
    }
    if ((*(int *)(param_1 + 0x15c) == 0) && (*(int *)(param_1 + 0x10c) == iVar13)) {
      if (lVar8 == 0) {
        piVar14 = (int *)(param_1 + 0x10c);
        uVar5 = 2;
        uVar10 = 3;
        goto LAB_009e8430;
      }
      lVar8 = lVar8 + -1;
    }
    if ((*(int *)(param_1 + 0x160) == 0) && (*(int *)(param_1 + 0x110) == iVar13)) {
      if (lVar8 == 0) {
        piVar14 = (int *)(param_1 + 0x110);
        uVar10 = 3;
        uVar5 = 3;
        goto LAB_009e8430;
      }
      lVar8 = lVar8 + -1;
    }
    if ((*(int *)(param_1 + 0x164) == 0) && (*(int *)(param_1 + 0x114) == iVar13)) {
      if (lVar8 != 0) {
        lVar8 = lVar8 + -1;
        goto LAB_009e8220;
      }
      uVar5 = 0;
      piVar14 = (int *)(param_1 + 0x114);
    }
    else {
LAB_009e8220:
      if ((*(int *)(param_1 + 0x168) == 0) && (*(int *)(param_1 + 0x118) == iVar13)) {
        if (lVar8 == 0) {
          piVar14 = (int *)(param_1 + 0x118);
          uVar5 = 1;
          goto LAB_009e842c;
        }
        lVar8 = lVar8 + -1;
      }
      if ((*(int *)(param_1 + 0x16c) == 0) && (*(int *)(param_1 + 0x11c) == iVar13)) {
        if (lVar8 == 0) {
          piVar14 = (int *)(param_1 + 0x11c);
          uVar5 = 2;
          goto LAB_009e842c;
        }
        lVar8 = lVar8 + -1;
      }
      if (*(int *)(param_1 + 0x170) != 0) {
        return;
      }
      if (*(int *)(param_1 + 0x120) != iVar13) {
        return;
      }
      if (lVar8 != 0) {
        return;
      }
      piVar14 = (int *)(param_1 + 0x120);
      uVar5 = 3;
    }
LAB_009e842c:
    uVar10 = 4;
  }
LAB_009e8430:
  uVar6 = FUN_009e8470(param_1,uVar10,uVar5);
  *(undefined1 *)(param_1 + 0x19d) = uVar6;
  *(undefined1 *)(param_1 + 0x19c) = uVar5;
  *(int *)(param_1 + 0x198) = *piVar14;
LAB_009e844c:
  *(undefined1 *)(param_1 + 0x1a1) = 1;
  return;
}


