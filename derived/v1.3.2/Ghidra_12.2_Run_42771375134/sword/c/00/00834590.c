/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00834590; name: FUN_00834590
 */


bool FUN_00834590(long param_1,long param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  byte *pbVar8;
  int *piVar9;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 != -1) {
switchD_008345ec_default:
    lVar5 = 0;
    if (iVar3 != -1) {
      lVar5 = param_2 + iVar3;
    }
    if (*(char *)(param_3 + 0x44) == '\0') {
      lVar4 = *(long *)(*(long *)(param_3 + 0x50) + 0x30);
    }
    else if (*(long *)(param_3 + 0x60) == 0) {
      lVar4 = *(long *)(*(long *)(param_3 + 0x30) + 0x88);
    }
    else {
      lVar4 = *(long *)(*(long *)(param_3 + 0x60) + 0x80);
    }
    iVar2 = (int)((ulong)(param_3 - lVar4) >> 4) * 0x38e38e39;
    iVar3 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar3 = iVar2;
    }
    return (1 << (ulong)(((uint)((ulong)(param_3 - lVar4) >> 4) & 0xfffffff) * 0x8e39 & 0x1f) &
           *(uint *)(lVar5 + (long)(iVar3 >> 5) * 4)) != 0;
  }
  switch(*(undefined4 *)(PTR_DAT_02716e20 + (ulong)*(uint *)(param_3 + 0x3c) * 4)) {
  case 1:
  case 3:
  case 8:
    lVar5 = *(long *)(param_3 + 0x58);
    if (lVar5 == 0) {
      if (*(char *)(param_3 + 0x44) == '\0') {
        plVar7 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar7 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
      }
      else {
        plVar7 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
      }
      iVar3 = (int)((ulong)(param_3 - *plVar7) >> 4) * 0x38e38e39;
    }
    else {
      lVar5 = lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x40) >> 4;
      uVar6 = lVar5 * -0x5555555555555555;
      if (*(int *)(param_2 + *(int *)(param_1 + 0x2c) +
                  (-(uVar6 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar5 * -0x5555555555555554 & 0x3fffffffcU)) != *(int *)(param_3 + 0x38)) {
        param_2 = *(long *)(param_1 + 0x18);
        if (*(char *)(param_3 + 0x44) == '\0') {
          plVar7 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
        }
        else if (*(long *)(param_3 + 0x60) == 0) {
          plVar7 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
        }
        else {
          plVar7 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
        }
        piVar9 = (int *)(*(long *)(param_1 + 0x20) +
                        ((long)((ulong)(uint)((int)((ulong)(param_3 - *plVar7) >> 4) * 0x38e38e39)
                               << 0x20) >> 0x1e));
        goto LAB_00834a38;
      }
      iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x2c) + (int)uVar6;
    }
    piVar9 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 4);
LAB_00834a38:
    return *(int *)(param_2 + *piVar9) != 0;
  case 2:
  case 4:
    goto switchD_008345ec_caseD_2;
  case 5:
    lVar5 = *(long *)(param_3 + 0x58);
    if (lVar5 == 0) {
      if (*(char *)(param_3 + 0x44) == '\0') {
        plVar7 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar7 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
      }
      else {
        plVar7 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
      }
      iVar3 = (int)((ulong)(param_3 - *plVar7) >> 4) * 0x38e38e39;
    }
    else {
      lVar5 = lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x40) >> 4;
      uVar6 = lVar5 * -0x5555555555555555;
      if (*(int *)(param_2 + *(int *)(param_1 + 0x2c) +
                  (-(uVar6 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar5 * -0x5555555555555554 & 0x3fffffffcU)) != *(int *)(param_3 + 0x38)) {
        param_2 = *(long *)(param_1 + 0x18);
        if (*(char *)(param_3 + 0x44) == '\0') {
          plVar7 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
        }
        else if (*(long *)(param_3 + 0x60) == 0) {
          plVar7 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
        }
        else {
          plVar7 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
        }
        piVar9 = (int *)(*(long *)(param_1 + 0x20) +
                        ((long)((ulong)(uint)((int)((ulong)(param_3 - *plVar7) >> 4) * 0x38e38e39)
                               << 0x20) >> 0x1e));
        goto LAB_00834bdc;
      }
      iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x2c) + (int)uVar6;
    }
    piVar9 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 4);
LAB_00834bdc:
    return *(double *)(param_2 + *piVar9) != 0.0;
  case 6:
    lVar5 = *(long *)(param_3 + 0x58);
    if (lVar5 == 0) {
      if (*(char *)(param_3 + 0x44) == '\0') {
        plVar7 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar7 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
      }
      else {
        plVar7 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
      }
      iVar3 = (int)((ulong)(param_3 - *plVar7) >> 4) * 0x38e38e39;
    }
    else {
      lVar5 = lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x40) >> 4;
      uVar6 = lVar5 * -0x5555555555555555;
      if (*(int *)(param_2 + *(int *)(param_1 + 0x2c) +
                  (-(uVar6 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar5 * -0x5555555555555554 & 0x3fffffffcU)) != *(int *)(param_3 + 0x38)) {
        param_2 = *(long *)(param_1 + 0x18);
        if (*(char *)(param_3 + 0x44) == '\0') {
          plVar7 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
        }
        else if (*(long *)(param_3 + 0x60) == 0) {
          plVar7 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
        }
        else {
          plVar7 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
        }
        piVar9 = (int *)(*(long *)(param_1 + 0x20) +
                        ((long)((ulong)(uint)((int)((ulong)(param_3 - *plVar7) >> 4) * 0x38e38e39)
                               << 0x20) >> 0x1e));
        goto LAB_00834c18;
      }
      iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x2c) + (int)uVar6;
    }
    piVar9 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 4);
LAB_00834c18:
    return *(float *)(param_2 + *piVar9) != 0.0;
  case 7:
    lVar5 = *(long *)(param_3 + 0x58);
    if (lVar5 == 0) {
      if (*(char *)(param_3 + 0x44) == '\0') {
        plVar7 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar7 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
      }
      else {
        plVar7 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
      }
      iVar3 = (int)((ulong)(param_3 - *plVar7) >> 4) * 0x38e38e39;
    }
    else {
      lVar5 = lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x40) >> 4;
      uVar6 = lVar5 * -0x5555555555555555;
      if (*(int *)(param_2 + *(int *)(param_1 + 0x2c) +
                  (-(uVar6 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar5 * -0x5555555555555554 & 0x3fffffffcU)) != *(int *)(param_3 + 0x38)) {
        param_2 = *(long *)(param_1 + 0x18);
        if (*(char *)(param_3 + 0x44) == '\0') {
          plVar7 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
        }
        else if (*(long *)(param_3 + 0x60) == 0) {
          plVar7 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
        }
        else {
          plVar7 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
        }
        piVar9 = (int *)(*(long *)(param_1 + 0x20) +
                        ((long)((ulong)(uint)((int)((ulong)(param_3 - *plVar7) >> 4) * 0x38e38e39)
                               << 0x20) >> 0x1e));
        goto LAB_00834c54;
      }
      iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x2c) + (int)uVar6;
    }
    piVar9 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 4);
LAB_00834c54:
    return *(char *)(param_2 + *piVar9) != '\0';
  case 9:
    lVar5 = *(long *)(param_3 + 0x58);
    if (lVar5 == 0) {
      if (*(char *)(param_3 + 0x44) == '\0') {
        plVar7 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar7 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
      }
      else {
        plVar7 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
      }
      iVar3 = (int)((ulong)(param_3 - *plVar7) >> 4) * 0x38e38e39;
    }
    else {
      lVar5 = lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x40) >> 4;
      uVar6 = lVar5 * -0x5555555555555555;
      if (*(int *)(param_2 + *(int *)(param_1 + 0x2c) +
                  (-(uVar6 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar5 * -0x5555555555555554 & 0x3fffffffcU)) != *(int *)(param_3 + 0x38)) {
        if (*(char *)(param_3 + 0x44) == '\0') {
          plVar7 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
        }
        else if (*(long *)(param_3 + 0x60) == 0) {
          plVar7 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
        }
        else {
          plVar7 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
        }
        pbVar8 = *(byte **)(*(long *)(param_1 + 0x18) +
                           (long)*(int *)(*(long *)(param_1 + 0x20) +
                                         ((long)((ulong)(uint)((int)((ulong)(param_3 - *plVar7) >> 4
                                                                    ) * 0x38e38e39) << 0x20) >> 0x1e
                                         )));
        bVar1 = *pbVar8;
        goto joined_r0x00834c9c;
      }
      iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x2c) + (int)uVar6;
    }
    pbVar8 = *(byte **)(param_2 + *(int *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 4));
    bVar1 = *pbVar8;
joined_r0x00834c9c:
    if ((bVar1 & 1) == 0) {
      return bVar1 >> 1 != 0;
    }
    return *(long *)(pbVar8 + 8) != 0;
  case 10:
    break;
  default:
    goto switchD_008345ec_default;
  }
  if ((*(int *)(param_1 + 0x3c) != -1) && (*(char *)(param_2 + *(int *)(param_1 + 0x3c)) != '\0')) {
    return false;
  }
switchD_008345ec_caseD_2:
  lVar5 = *(long *)(param_3 + 0x58);
  if (lVar5 == 0) {
    if (*(char *)(param_3 + 0x44) == '\0') {
      plVar7 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
    }
    else if (*(long *)(param_3 + 0x60) == 0) {
      plVar7 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
    }
    else {
      plVar7 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
    }
    iVar3 = (int)((ulong)(param_3 - *plVar7) >> 4) * 0x38e38e39;
  }
  else {
    lVar5 = lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x40) >> 4;
    uVar6 = lVar5 * -0x5555555555555555;
    if (*(int *)(param_2 + *(int *)(param_1 + 0x2c) +
                (-(uVar6 >> 0x1f & 1) & 0xfffffffc00000000 |
                lVar5 * -0x5555555555555554 & 0x3fffffffcU)) != *(int *)(param_3 + 0x38)) {
      param_2 = *(long *)(param_1 + 0x18);
      if (*(char *)(param_3 + 0x44) == '\0') {
        plVar7 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar7 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
      }
      else {
        plVar7 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
      }
      piVar9 = (int *)(*(long *)(param_1 + 0x20) +
                      ((long)((ulong)(uint)((int)((ulong)(param_3 - *plVar7) >> 4) * 0x38e38e39) <<
                             0x20) >> 0x1e));
      goto LAB_00834a74;
    }
    iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x2c) + (int)uVar6;
  }
  piVar9 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 4);
LAB_00834a74:
  return *(long *)(param_2 + *piVar9) != 0;
}


