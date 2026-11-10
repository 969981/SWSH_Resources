/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00604b70; name: FUN_00604b70
 */


void FUN_00604b70(long param_1,int *param_2)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  
  lVar3 = *(long *)(param_1 + 0xa0);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0x10000;
    *(undefined8 *)(lVar3 + 0x28) = 0x10000;
    return;
  }
  switch(*param_2) {
  case 0:
    uVar12 = (ulong)*(ushort *)(param_1 + 0x88);
    uVar4 = *(ulong *)(param_2 + 2);
    uVar1 = param_2[6];
    uVar14 = uVar12;
    goto joined_r0x00604bec;
  case 1:
    uVar14 = (long)*(short *)(param_1 + 0x8a) - (long)*(short *)(param_1 + 0x8c);
    uVar4 = uVar14;
    break;
  case 2:
    uVar14 = *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x68);
    uVar4 = *(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x70);
    break;
  case 3:
    uVar14 = (ulong)*(short *)(param_1 + 0x90);
    uVar4 = (long)*(short *)(param_1 + 0x8a) - (long)*(short *)(param_1 + 0x8c);
    break;
  case 4:
    uVar12 = *(ulong *)(param_2 + 2);
    *(ulong *)(lVar3 + 0x20) = uVar12;
    uVar4 = *(ulong *)(param_2 + 4);
    uVar10 = 0;
    uVar6 = 0;
    *(ulong *)(lVar3 + 0x28) = uVar4;
    if (uVar12 == 0) {
      *(ulong *)(lVar3 + 0x20) = uVar4;
      goto LAB_00604dd0;
    }
    bVar2 = uVar4 == 0;
    uVar14 = uVar4;
    uVar4 = uVar12;
    if (bVar2) {
      *(ulong *)(lVar3 + 0x28) = uVar12;
      uVar14 = uVar12;
    }
    goto LAB_00604dd4;
  default:
    uVar12 = 0;
    uVar14 = 0;
    uVar4 = *(ulong *)(param_2 + 2);
    uVar1 = param_2[6];
    goto joined_r0x00604bec;
  }
  uVar12 = -uVar14;
  if (-1 < (long)uVar14) {
    uVar12 = uVar14;
  }
  uVar14 = -uVar4;
  if (-1 < (long)uVar4) {
    uVar14 = uVar4;
  }
  uVar4 = *(ulong *)(param_2 + 2);
  uVar1 = param_2[6];
joined_r0x00604bec:
  uVar10 = uVar4;
  if (uVar1 != 0) {
    uVar10 = (long)(uVar4 * uVar1 + 0x24) / 0x48;
  }
  uVar6 = *(ulong *)(param_2 + 4);
  if (param_2[7] != 0) {
    uVar6 = (long)(uVar6 * (uint)param_2[7] + 0x24) / 0x48;
  }
  if (uVar4 == 0) {
    bVar2 = -1 < (long)uVar6;
    if (uVar14 == 0) {
      uVar4 = 0x7fffffff;
      if (!bVar2) {
        uVar4 = 0xffffffff80000001;
      }
      uVar7 = 0x7fffffff;
    }
    else {
      uVar10 = -uVar6;
      if (bVar2) {
        uVar10 = uVar6;
      }
      uVar7 = 0;
      if (uVar14 != 0) {
        uVar7 = ((uVar14 >> 1) + uVar10 * 0x10000) / uVar14;
      }
      uVar4 = -uVar7;
      if (bVar2) {
        uVar4 = uVar7;
      }
      uVar7 = 0;
      if (uVar14 != 0) {
        uVar7 = ((uVar14 >> 1) + uVar10 * uVar12) / uVar14;
      }
    }
    uVar10 = -uVar7;
    if (-1 < (long)uVar6) {
      uVar10 = uVar7;
    }
    *(ulong *)(lVar3 + 0x20) = uVar4;
    *(ulong *)(lVar3 + 0x28) = uVar4;
LAB_00604dd0:
    uVar14 = uVar4;
  }
  else {
    if (uVar12 == 0) {
      uVar7 = 0x7fffffff;
    }
    else {
      uVar4 = -uVar10;
      if (-1 < (long)uVar10) {
        uVar4 = uVar10;
      }
      uVar7 = 0;
      if (uVar12 != 0) {
        uVar7 = (uVar4 * 0x10000 + (uVar12 >> 1)) / uVar12;
      }
    }
    uVar4 = -uVar7;
    if (-1 < (long)uVar10) {
      uVar4 = uVar7;
    }
    *(ulong *)(lVar3 + 0x20) = uVar4;
    if (*(long *)(param_2 + 4) == 0) {
      *(ulong *)(lVar3 + 0x28) = uVar4;
      if (uVar12 == 0) {
        uVar7 = 0x7fffffff;
      }
      else {
        uVar6 = -uVar10;
        if (-1 < (long)uVar10) {
          uVar6 = uVar10;
        }
        uVar7 = 0;
        if (uVar12 != 0) {
          uVar7 = (uVar6 * uVar14 + (uVar12 >> 1)) / uVar12;
        }
      }
      uVar6 = -uVar7;
      if (-1 < (long)uVar10) {
        uVar6 = uVar7;
      }
      goto LAB_00604dd0;
    }
    if (uVar14 == 0) {
      uVar12 = 0x7fffffff;
    }
    else {
      uVar7 = -uVar6;
      if (-1 < (long)uVar6) {
        uVar7 = uVar6;
      }
      uVar12 = 0;
      if (uVar14 != 0) {
        uVar12 = (uVar7 * 0x10000 + (uVar14 >> 1)) / uVar14;
      }
    }
    uVar14 = -uVar12;
    if (-1 < (long)uVar6) {
      uVar14 = uVar12;
    }
    *(ulong *)(lVar3 + 0x28) = uVar14;
    iVar13 = *param_2;
    if (iVar13 != 3) goto LAB_00604de4;
    if ((long)uVar4 < (long)uVar14) {
      *(ulong *)(lVar3 + 0x28) = uVar4;
      goto LAB_00604dd0;
    }
    *(ulong *)(lVar3 + 0x20) = uVar14;
    uVar4 = uVar14;
  }
LAB_00604dd4:
  iVar13 = *param_2;
LAB_00604de4:
  iVar5 = (int)uVar6;
  iVar9 = (int)uVar10;
  if (iVar13 != 0) {
    lVar11 = uVar4 * *(ushort *)(param_1 + 0x88);
    lVar8 = uVar14 * *(ushort *)(param_1 + 0x88);
    iVar9 = (int)((ulong)(lVar11 + (lVar11 >> 0x3f) + 0x8000) >> 0x10);
    iVar5 = (int)((ulong)(lVar8 + (lVar8 >> 0x3f) + 0x8000) >> 0x10);
  }
  *(short *)(lVar3 + 0x18) = (short)(iVar9 + 0x20U >> 6);
  *(short *)(lVar3 + 0x1a) = (short)(iVar5 + 0x20U >> 6);
  lVar8 = uVar14 * (long)*(short *)(param_1 + 0x8a);
  *(ulong *)(lVar3 + 0x30) = (lVar8 + (lVar8 >> 0x3f) + 0x8000 >> 0x10) + 0x3fU & 0xffffffffffffffc0
  ;
  lVar8 = uVar14 * (long)*(short *)(param_1 + 0x8c);
  *(ulong *)(lVar3 + 0x38) = lVar8 + (lVar8 >> 0x3f) + 0x8000 >> 0x10 & 0xffffffffffffffc0;
  lVar8 = uVar14 * (long)*(short *)(param_1 + 0x8e);
  *(ulong *)(lVar3 + 0x40) = (lVar8 + (lVar8 >> 0x3f) + 0x8000 >> 0x10) + 0x20U & 0xffffffffffffffc0
  ;
  lVar8 = uVar4 * (long)*(short *)(param_1 + 0x90);
  *(ulong *)(lVar3 + 0x48) = (lVar8 + (lVar8 >> 0x3f) + 0x8000 >> 0x10) + 0x20U & 0xffffffffffffffc0
  ;
  return;
}


