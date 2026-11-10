/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012fe910; name: FUN_012fe910
 */


int FUN_012fe910(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar4 = *(uint *)(param_1 + 0xc0);
  if (uVar4 == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    iVar3 = iVar1;
  }
  else if ((int)uVar4 < 0) {
    iVar3 = *(int *)(param_1 + 0x20);
    iVar1 = iVar3 + 0xb;
  }
  else if (uVar4 < 0x80) {
    iVar3 = *(int *)(param_1 + 0x20);
    iVar1 = iVar3 + 2;
  }
  else {
    iVar1 = FUN_0080e440();
    iVar3 = *(int *)(param_1 + 0x20);
    iVar1 = iVar3 + iVar1 + 1;
  }
  if (0 < iVar3) {
    lVar6 = 0;
    do {
      lVar7 = *(long *)(*(long *)(param_1 + 0x28) + lVar6 * 8 + 8);
      uVar4 = *(uint *)(lVar7 + 0x14);
      if (uVar4 == 0) {
        uVar4 = 0;
        uVar2 = *(uint *)(lVar7 + 0x18);
      }
      else if ((int)uVar4 < 0) {
        uVar4 = 0xb;
        uVar2 = *(uint *)(lVar7 + 0x18);
      }
      else if (uVar4 < 0x80) {
        uVar4 = 2;
        uVar2 = *(uint *)(lVar7 + 0x18);
      }
      else {
        iVar3 = FUN_0080e440();
        uVar4 = iVar3 + 1;
        uVar2 = *(uint *)(lVar7 + 0x18);
      }
      if (uVar2 != 0) {
        if (uVar2 < 0x80) {
          iVar3 = 2;
        }
        else {
          iVar3 = FUN_0080e440();
          iVar3 = iVar3 + 1;
        }
        uVar4 = iVar3 + uVar4;
      }
      *(uint *)(lVar7 + 0x1c) = uVar4;
      if (uVar4 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = FUN_0080e440(uVar4);
      }
      iVar1 = uVar4 + iVar1 + iVar3;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x20));
  }
  iVar1 = *(int *)(param_1 + 0x38) + iVar1;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar6 = 0;
    do {
      lVar7 = *(long *)(*(long *)(param_1 + 0x40) + lVar6 * 8 + 8);
      if (*(uint *)(lVar7 + 0x14) == 0) {
        uVar4 = 0;
        uVar2 = *(uint *)(lVar7 + 0x18);
joined_r0x012feac4:
        if (uVar2 != 0) goto LAB_012fea98;
LAB_012feac8:
        *(uint *)(lVar7 + 0x1c) = uVar4;
joined_r0x012feb00:
        if (0x7f < uVar4) goto LAB_012feb20;
LAB_012fead4:
        iVar3 = 1;
      }
      else {
        if (0x7f < *(uint *)(lVar7 + 0x14)) {
          iVar3 = FUN_0080e440();
          uVar4 = iVar3 + 1;
          uVar2 = *(uint *)(lVar7 + 0x18);
          goto joined_r0x012feac4;
        }
        uVar4 = 2;
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (uVar2 == 0) goto LAB_012feac8;
LAB_012fea98:
        if ((int)uVar2 < 0) {
          uVar4 = uVar4 + 0xb;
          *(uint *)(lVar7 + 0x1c) = uVar4;
          goto joined_r0x012feb00;
        }
        if (0x7f < uVar2) {
          iVar3 = FUN_0080e440();
          uVar4 = iVar3 + 1 + uVar4;
          *(uint *)(lVar7 + 0x1c) = uVar4;
          goto joined_r0x012feb00;
        }
        uVar4 = uVar4 + 2;
        *(uint *)(lVar7 + 0x1c) = uVar4;
        if (uVar4 < 0x80) goto LAB_012fead4;
LAB_012feb20:
        iVar3 = FUN_0080e440(uVar4);
      }
      iVar1 = uVar4 + iVar1 + iVar3;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x38));
  }
  iVar1 = *(int *)(param_1 + 0x50) + iVar1;
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar6 = 0;
    do {
      uVar4 = FUN_012faca0(*(undefined8 *)(*(long *)(param_1 + 0x58) + lVar6 * 8 + 8));
      if (uVar4 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = FUN_0080e440(uVar4);
      }
      iVar1 = uVar4 + iVar1 + iVar3;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x50));
  }
  iVar1 = *(int *)(param_1 + 0x68) + iVar1;
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar6 = 0;
    do {
      lVar7 = *(long *)(*(long *)(param_1 + 0x70) + lVar6 * 8 + 8);
      if (*(uint *)(lVar7 + 0x20) == 0) {
        uVar4 = 0;
        lVar5 = *(long *)(lVar7 + 0x18);
      }
      else if (*(uint *)(lVar7 + 0x20) < 0x80) {
        uVar4 = 2;
        lVar5 = *(long *)(lVar7 + 0x18);
      }
      else {
        iVar3 = FUN_0080e440();
        uVar4 = iVar3 + 1;
        lVar5 = *(long *)(lVar7 + 0x18);
      }
      if (lVar5 != 0) {
        iVar3 = FUN_0080e480();
        uVar4 = uVar4 + iVar3 + 1;
      }
      uVar2 = *(uint *)(lVar7 + 0x24);
      if (uVar2 != 0) {
        if ((int)uVar2 < 0) {
          iVar3 = 0xb;
        }
        else if (uVar2 < 0x80) {
          iVar3 = 2;
        }
        else {
          iVar3 = FUN_0080e440();
          iVar3 = iVar3 + 1;
        }
        uVar4 = iVar3 + uVar4;
      }
      if (*(uint *)(lVar7 + 0x28) != 0) {
        if (*(uint *)(lVar7 + 0x28) < 0x80) {
          iVar3 = 2;
        }
        else {
          iVar3 = FUN_0080e440();
          iVar3 = iVar3 + 1;
        }
        uVar4 = iVar3 + uVar4;
      }
      *(uint *)(lVar7 + 0x2c) = uVar4;
      if (uVar4 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = FUN_0080e440(uVar4);
      }
      iVar1 = uVar4 + iVar1 + iVar3;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x68));
  }
  iVar1 = *(int *)(param_1 + 0x80) + iVar1;
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar6 = 0;
    do {
      lVar7 = *(long *)(*(long *)(param_1 + 0x88) + lVar6 * 8 + 8);
      uVar4 = *(uint *)(lVar7 + 0x14);
      if (uVar4 == 0) {
        uVar4 = 0;
        uVar2 = *(uint *)(lVar7 + 0x18);
joined_r0x012fece0:
        if (uVar2 != 0) goto LAB_012fece4;
LAB_012fed14:
        *(uint *)(lVar7 + 0x1c) = uVar4;
joined_r0x012fed1c:
        if (0x7f < uVar4) goto LAB_012fed6c;
LAB_012fed20:
        iVar3 = 1;
      }
      else {
        if ((int)uVar4 < 0) {
          uVar4 = 0xb;
          uVar2 = *(uint *)(lVar7 + 0x18);
          goto joined_r0x012fece0;
        }
        if (uVar4 < 0x80) {
          uVar4 = 2;
          uVar2 = *(uint *)(lVar7 + 0x18);
          goto joined_r0x012fece0;
        }
        iVar3 = FUN_0080e440();
        uVar4 = iVar3 + 1;
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (uVar2 == 0) goto LAB_012fed14;
LAB_012fece4:
        if ((int)uVar2 < 0) {
          uVar4 = uVar4 + 0xb;
          *(uint *)(lVar7 + 0x1c) = uVar4;
        }
        else {
          if (0x7f < uVar2) {
            iVar3 = FUN_0080e440();
            uVar4 = iVar3 + 1 + uVar4;
            *(uint *)(lVar7 + 0x1c) = uVar4;
            goto joined_r0x012fed1c;
          }
          uVar4 = uVar4 + 2;
          *(uint *)(lVar7 + 0x1c) = uVar4;
        }
        if (uVar4 < 0x80) goto LAB_012fed20;
LAB_012fed6c:
        iVar3 = FUN_0080e440(uVar4);
      }
      iVar1 = uVar4 + iVar1 + iVar3;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x80));
  }
  iVar1 = *(int *)(param_1 + 0x98) + iVar1;
  if (0 < *(int *)(param_1 + 0x98)) {
    lVar6 = 0;
    do {
      uVar4 = FUN_012fc890(*(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar6 * 8 + 8));
      if (uVar4 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = FUN_0080e440(uVar4);
      }
      iVar1 = uVar4 + iVar1 + iVar3;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x98));
  }
  iVar1 = *(int *)(param_1 + 0xb0) + iVar1;
  if (0 < *(int *)(param_1 + 0xb0)) {
    lVar6 = 0;
    do {
      uVar4 = FUN_012fd210(*(undefined8 *)(*(long *)(param_1 + 0xb8) + lVar6 * 8 + 8));
      if (uVar4 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = FUN_0080e440(uVar4);
      }
      iVar1 = uVar4 + iVar1 + iVar3;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0xb0));
  }
  *(int *)(param_1 + 0xc4) = iVar1;
  return iVar1;
}


