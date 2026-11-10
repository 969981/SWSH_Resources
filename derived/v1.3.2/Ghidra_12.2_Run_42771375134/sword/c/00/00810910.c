/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00810910; name: FUN_00810910
 */


void FUN_00810910(undefined8 *param_1,long param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  long *plVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  
  lVar15 = 0;
  plVar9 = (long *)*param_1;
joined_r0x00810940:
  if (plVar9 != (long *)0x0) goto LAB_00810954;
LAB_0081096c:
  if (-1 < lVar15) {
    return;
  }
LAB_00810978:
  piVar1 = (int *)(*plVar9 + lVar15 * 0x10);
  switch(piVar1[1]) {
  case 0:
    uVar6 = *piVar1 << 3;
    if (*(int *)(param_2 + 0x10) < 5) {
      FUN_0080dfa0(param_2);
    }
    else {
      pbVar10 = *(byte **)(param_2 + 8);
      if (uVar6 < 0x80) {
        pbVar11 = pbVar10;
      }
      else {
        pbVar12 = pbVar10;
        uVar13 = uVar6;
        do {
          uVar6 = uVar13 >> 7;
          uVar4 = uVar13 >> 0xe;
          pbVar11 = pbVar12 + 1;
          *pbVar12 = (byte)uVar13 | 0x80;
          pbVar12 = pbVar11;
          uVar13 = uVar6;
        } while (uVar4 != 0);
      }
      *pbVar11 = (byte)uVar6;
      iVar8 = ((int)pbVar11 + 1) - (int)pbVar10;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + (long)iVar8;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar8;
    }
    FUN_0080e0c0(param_2,*(undefined8 *)(piVar1 + 2));
    plVar9 = (long *)*param_1;
    break;
  case 1:
    uVar6 = *piVar1 << 3 | 5;
    if (*(int *)(param_2 + 0x10) < 5) {
      FUN_0080dfa0(param_2);
    }
    else {
      pbVar10 = *(byte **)(param_2 + 8);
      if (uVar6 < 0x80) {
        pbVar11 = pbVar10;
      }
      else {
        pbVar12 = pbVar10;
        uVar13 = uVar6;
        do {
          uVar6 = uVar13 >> 7;
          uVar4 = uVar13 >> 0xe;
          pbVar11 = pbVar12 + 1;
          *pbVar12 = (byte)uVar13 | 0x80;
          pbVar12 = pbVar11;
          uVar13 = uVar6;
        } while (uVar4 != 0);
      }
      *pbVar11 = (byte)uVar6;
      iVar8 = ((int)pbVar11 + 1) - (int)pbVar10;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + (long)iVar8;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar8;
    }
    FUN_0080dda0(param_2,piVar1[2]);
    plVar9 = (long *)*param_1;
    break;
  case 2:
    uVar6 = *piVar1 << 3 | 1;
    if (*(int *)(param_2 + 0x10) < 5) {
      FUN_0080dfa0(param_2);
    }
    else {
      pbVar10 = *(byte **)(param_2 + 8);
      if (uVar6 < 0x80) {
        pbVar11 = pbVar10;
      }
      else {
        pbVar12 = pbVar10;
        uVar13 = uVar6;
        do {
          uVar6 = uVar13 >> 7;
          uVar4 = uVar13 >> 0xe;
          pbVar11 = pbVar12 + 1;
          *pbVar12 = (byte)uVar13 | 0x80;
          pbVar12 = pbVar11;
          uVar13 = uVar6;
        } while (uVar4 != 0);
      }
      *pbVar11 = (byte)uVar6;
      iVar8 = ((int)pbVar11 + 1) - (int)pbVar10;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + (long)iVar8;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar8;
    }
    FUN_0080dea0(param_2,*(undefined8 *)(piVar1 + 2));
    plVar9 = (long *)*param_1;
    break;
  case 3:
    uVar6 = *piVar1 << 3 | 2;
    if (*(int *)(param_2 + 0x10) < 5) {
      FUN_0080dfa0(param_2);
      pbVar10 = *(byte **)(piVar1 + 2);
      bVar2 = *pbVar10;
    }
    else {
      pbVar10 = *(byte **)(param_2 + 8);
      if (uVar6 < 0x80) {
        pbVar11 = pbVar10;
      }
      else {
        pbVar12 = pbVar10;
        uVar13 = uVar6;
        do {
          uVar6 = uVar13 >> 7;
          uVar4 = uVar13 >> 0xe;
          pbVar11 = pbVar12 + 1;
          *pbVar12 = (byte)uVar13 | 0x80;
          pbVar12 = pbVar11;
          uVar13 = uVar6;
        } while (uVar4 != 0);
      }
      *pbVar11 = (byte)uVar6;
      iVar8 = ((int)pbVar11 + 1) - (int)pbVar10;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + (long)iVar8;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar8;
      pbVar10 = *(byte **)(piVar1 + 2);
      bVar2 = *pbVar10;
    }
    if ((bVar2 & 1) == 0) {
      uVar7 = (ulong)(bVar2 >> 1);
      if (4 < *(int *)(param_2 + 0x10)) goto LAB_00810c9c;
LAB_00810b58:
      FUN_0080dfa0(param_2);
      pbVar10 = *(byte **)(piVar1 + 2);
      bVar2 = *pbVar10;
      if ((bVar2 & 1) != 0) goto LAB_00810b6c;
LAB_00810cf4:
      pbVar10 = pbVar10 + 1;
      uVar7 = (ulong)(bVar2 >> 1);
      cVar3 = *(char *)(param_2 + 0x19);
    }
    else {
      uVar7 = *(ulong *)(pbVar10 + 8);
      if (*(int *)(param_2 + 0x10) < 5) goto LAB_00810b58;
LAB_00810c9c:
      pbVar11 = *(byte **)(param_2 + 8);
      uVar6 = (uint)uVar7;
      pbVar10 = pbVar11;
      if (0x7f < uVar6) {
        pbVar12 = pbVar11;
        uVar14 = uVar7 & 0xffffffff;
        do {
          bVar2 = (byte)uVar7;
          uVar7 = uVar14 >> 7;
          uVar6 = (uint)uVar7;
          uVar5 = uVar14 >> 0xe;
          pbVar10 = pbVar12 + 1;
          *pbVar12 = bVar2 | 0x80;
          pbVar12 = pbVar10;
          uVar14 = uVar7;
        } while (uVar5 != 0);
      }
      *pbVar10 = (byte)uVar6;
      iVar8 = ((int)pbVar10 + 1) - (int)pbVar11;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + (long)iVar8;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar8;
      pbVar10 = *(byte **)(piVar1 + 2);
      bVar2 = *pbVar10;
      if ((bVar2 & 1) == 0) goto LAB_00810cf4;
LAB_00810b6c:
      uVar7 = *(ulong *)(pbVar10 + 8);
      pbVar10 = *(byte **)(pbVar10 + 0x10);
      cVar3 = *(char *)(param_2 + 0x19);
    }
    if (cVar3 == '\0') {
      FUN_0080dbe0(param_2);
      plVar9 = (long *)*param_1;
    }
    else {
      FUN_0080dcc0(param_2,pbVar10,uVar7);
      plVar9 = (long *)*param_1;
    }
    goto joined_r0x00810950;
  case 4:
    goto switchD_00810994_caseD_4;
  default:
    goto switchD_00810994_default;
  }
  lVar15 = lVar15 + 1;
  if (plVar9 == (long *)0x0) goto LAB_0081096c;
LAB_00810954:
  if ((int)((ulong)(plVar9[1] - *plVar9) >> 4) <= lVar15) {
    return;
  }
  goto LAB_00810978;
switchD_00810994_caseD_4:
  uVar6 = *piVar1 << 3 | 3;
  if (*(int *)(param_2 + 0x10) < 5) {
    FUN_0080dfa0(param_2);
  }
  else {
    pbVar10 = *(byte **)(param_2 + 8);
    if (uVar6 < 0x80) {
      pbVar11 = pbVar10;
    }
    else {
      pbVar12 = pbVar10;
      uVar13 = uVar6;
      do {
        uVar6 = uVar13 >> 7;
        uVar4 = uVar13 >> 0xe;
        pbVar11 = pbVar12 + 1;
        *pbVar12 = (byte)uVar13 | 0x80;
        pbVar12 = pbVar11;
        uVar13 = uVar6;
      } while (uVar4 != 0);
    }
    *pbVar11 = (byte)uVar6;
    iVar8 = ((int)pbVar11 + 1) - (int)pbVar10;
    *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + (long)iVar8;
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar8;
  }
  FUN_00810910(*(undefined8 *)(piVar1 + 2),param_2);
  uVar6 = *piVar1 << 3 | 4;
  if (*(int *)(param_2 + 0x10) < 5) {
    FUN_0080dfa0(param_2);
switchD_00810994_default:
    plVar9 = (long *)*param_1;
  }
  else {
    pbVar10 = *(byte **)(param_2 + 8);
    if (uVar6 < 0x80) {
      pbVar11 = pbVar10;
    }
    else {
      pbVar12 = pbVar10;
      uVar13 = uVar6;
      do {
        uVar6 = uVar13 >> 7;
        uVar4 = uVar13 >> 0xe;
        pbVar11 = pbVar12 + 1;
        *pbVar12 = (byte)uVar13 | 0x80;
        pbVar12 = pbVar11;
        uVar13 = uVar6;
      } while (uVar4 != 0);
    }
    *pbVar11 = (byte)uVar6;
    iVar8 = ((int)pbVar11 + 1) - (int)pbVar10;
    *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + (long)iVar8;
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar8;
    plVar9 = (long *)*param_1;
  }
joined_r0x00810950:
  lVar15 = lVar15 + 1;
  goto joined_r0x00810940;
}


