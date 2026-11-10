/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00610780; name: FUN_00610780
 */


void FUN_00610780(int *param_1,long param_2,int param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  int *piVar18;
  
  if ((*(byte *)(param_1 + 6) >> 3 & 1) != 0) {
    return;
  }
  uVar17 = *(undefined8 *)(param_2 + (long)param_3 * 0x198 + 400);
  lVar16 = *(long *)(param_2 + (long)param_3 * 0x198 + 0x198);
  lVar7 = FUN_00602580((long)*param_1,uVar17);
  uVar11 = lVar7 + lVar16;
  uVar8 = FUN_00602580((long)param_1[1],uVar17);
  if (param_3 == 1) {
    if (*(char *)(param_4 + 0xcd) == '\0') {
LAB_00610968:
      *(ulong *)(param_1 + 2) = uVar11;
      *(ulong *)(param_1 + 4) = uVar8;
      goto LAB_00610b58;
    }
    cVar3 = *(char *)(param_4 + 0xcf);
    *(ulong *)(param_1 + 4) = uVar8;
    iVar1 = *param_1;
    bVar6 = cVar3 != '\0';
    iVar12 = *(int *)(param_2 + 0x338);
    if (iVar12 != 0) {
      plVar15 = (long *)(param_2 + 0x350);
      do {
        iVar14 = (param_1[1] + iVar1) - *(int *)((long)plVar15 + -4);
        if (iVar14 < -*(int *)(param_2 + 0xf68)) break;
        if (param_1[1] + iVar1 <= (int)plVar15[-1] + *(int *)(param_2 + 0xf68)) {
          if ((*(char *)(param_2 + 0xf6c) != '\0') || (iVar14 <= *(int *)(param_2 + 0xf64))) {
            lVar7 = *plVar15;
            iVar14 = 3;
            iVar12 = 1;
            uVar2 = *(uint *)(param_2 + 0x640);
            goto joined_r0x00610a2c;
          }
          break;
        }
        iVar12 = iVar12 + -1;
        plVar15 = plVar15 + 6;
      } while (iVar12 != 0);
    }
    lVar7 = 0;
    iVar12 = 0;
    iVar14 = 2;
    uVar2 = *(uint *)(param_2 + 0x640);
joined_r0x00610a2c:
    if (uVar2 != 0) {
      uVar10 = (ulong)uVar2;
      plVar15 = (long *)(param_2 + uVar10 * 0x30 + 0x628);
      do {
        iVar4 = (int)plVar15[-1] - iVar1;
        if (iVar4 < -*(int *)(param_2 + 0xf68)) break;
        if (*(int *)((long)plVar15 + -4) - *(int *)(param_2 + 0xf68) <= iVar1) {
          if ((*(char *)(param_2 + 0xf6c) != '\0') || (iVar4 < *(int *)(param_2 + 0xf64))) {
            lVar16 = *plVar15;
            iVar12 = iVar14;
            goto joined_r0x00610a4c;
          }
          break;
        }
        uVar2 = (int)uVar10 - 1;
        uVar10 = (ulong)uVar2;
        plVar15 = plVar15 + -6;
      } while (uVar2 != 0);
    }
    lVar16 = 0;
joined_r0x00610a4c:
    if (iVar12 == 1) {
      *(ulong *)(param_1 + 2) = lVar7 - uVar8;
      if (cVar3 == '\0') goto LAB_00610b58;
      uVar11 = 0x40;
      if (0x3f < (long)uVar8) {
        uVar11 = uVar8 + 0x20 & 0xffffffffffffffc0;
      }
      *(ulong *)(param_1 + 2) = lVar7 - uVar11;
    }
    else if (iVar12 == 3) {
      uVar11 = lVar7 - lVar16;
      *(long *)(param_1 + 2) = lVar16;
    }
    else {
      if (iVar12 != 2) goto LAB_006108dc;
      *(long *)(param_1 + 2) = lVar16;
      if (cVar3 == '\0') goto LAB_00610b58;
      uVar11 = 0x40;
      if (0x3f < (long)uVar8) {
        uVar11 = uVar8 + 0x20 & 0xffffffffffffffc0;
      }
    }
    *(ulong *)(param_1 + 4) = uVar11;
    goto LAB_00610b58;
  }
  if (param_3 == 0) {
    if (*(char *)(param_4 + 0xcc) == '\0') goto LAB_00610968;
    bVar6 = *(char *)(param_4 + 0xce) != '\0';
  }
  else {
    bVar6 = false;
  }
  *(ulong *)(param_1 + 4) = uVar8;
LAB_006108dc:
  piVar18 = *(int **)(param_1 + 8);
  if (piVar18 != (int *)0x0) {
    if ((*(byte *)(piVar18 + 6) >> 3 & 1) == 0) {
      FUN_00610780(piVar18,param_2,param_3,param_4);
    }
    lVar7 = *(long *)(piVar18 + 2);
    lVar16 = *(long *)(piVar18 + 4);
    lVar9 = FUN_00602580(((long)*param_1 + (long)(param_1[1] >> 1)) -
                         ((long)*piVar18 + (long)(piVar18[1] >> 1)),uVar17);
    uVar11 = (lVar7 - ((long)uVar8 >> 1)) + (lVar16 >> 1) + lVar9;
  }
  *(ulong *)(param_1 + 2) = uVar11;
  *(ulong *)(param_1 + 4) = uVar8;
  if (*(char *)(param_4 + 0xd0) != '\0') {
    if ((long)uVar8 < 0x41) {
      if ((long)uVar8 < 0x20) {
        uVar10 = uVar11 + 0x20 & 0xffffffffffffffc0;
        if ((long)uVar8 < 1) {
          uVar11 = uVar10;
        }
        else {
          uVar13 = uVar11 + uVar8 + 0x20 & 0xffffffffffffffc0;
          lVar16 = uVar10 - uVar11;
          lVar7 = -lVar16;
          if (-1 < lVar16) {
            lVar7 = lVar16;
          }
          lVar9 = uVar13 - (uVar11 + uVar8);
          lVar16 = -lVar9;
          if (-1 < lVar9) {
            lVar16 = lVar9;
          }
          if (lVar7 <= lVar16) {
            uVar13 = uVar10;
          }
          uVar11 = uVar13;
        }
      }
      else {
        uVar10 = uVar8 >> 1;
        uVar8 = 0x40;
        uVar11 = uVar11 + uVar10 & 0xffffffffffffffc0;
      }
    }
    else {
      uVar10 = *(ulong *)(param_2 + (long)param_3 * 0x198 + 0x18);
      lVar16 = uVar8 - uVar10;
      lVar7 = -lVar16;
      if (-1 < lVar16) {
        lVar7 = lVar16;
      }
      if ((lVar7 < 0x28) && (uVar8 = uVar10, (long)uVar10 < 0x31)) {
        uVar8 = 0x36;
      }
      else if ((long)uVar8 < 0xc0) {
        uVar10 = uVar8 & 0x3f;
        if (9 < uVar10) {
          if (uVar10 < 0x20) {
            uVar10 = 10;
          }
          else {
            if (0x35 < uVar10) goto LAB_00610ae4;
            uVar10 = 0x36;
          }
          uVar8 = uVar8 & 0xffffffffffffffc0 | uVar10;
        }
      }
      else {
        uVar8 = uVar8 + 0x20 & 0xffffffffffffffc0;
      }
    }
  }
LAB_00610ae4:
  lVar16 = (uVar11 + 0x20 & 0xffffffffffffffc0) - uVar11;
  lVar7 = -lVar16;
  if (-1 < lVar16) {
    lVar7 = lVar16;
  }
  lVar5 = ((uVar11 + 0x20 + uVar8 & 0xffffffffffffffc0) - uVar11) - uVar8;
  lVar9 = -lVar5;
  if (-1 < lVar5) {
    lVar9 = lVar5;
  }
  if (lVar7 <= lVar9) {
    lVar5 = lVar16;
  }
  *(ulong *)(param_1 + 2) = lVar5 + uVar11;
  *(ulong *)(param_1 + 4) = uVar8;
  if (bVar6) {
    uVar10 = 0x40;
    if (0x3f < (long)uVar8) {
      uVar10 = uVar8 + 0x20 & 0xffffffffffffffc0;
    }
    uVar11 = ((long)uVar10 >> 1) + lVar5 + uVar11;
    uVar8 = uVar11 + 0x20 & 0xffffffffffffffc0;
    if ((uVar10 & 0x40) != 0) {
      uVar8 = uVar11 & 0xffffffffffffffc0 | 0x20;
    }
    *(ulong *)(param_1 + 2) = uVar8 - ((long)uVar10 >> 1);
    *(ulong *)(param_1 + 4) = uVar10;
  }
LAB_00610b58:
  param_1[6] = param_1[6] | 8;
  return;
}


