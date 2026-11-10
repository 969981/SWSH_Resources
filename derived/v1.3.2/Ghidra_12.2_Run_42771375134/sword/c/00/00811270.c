/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00811270; name: FUN_00811270
 */


int FUN_00811270(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  lVar11 = 0;
  lVar12 = 0;
  iVar5 = 0;
  plVar6 = (long *)*param_1;
  if (plVar6 != (long *)0x0) goto LAB_008112c0;
LAB_008112d8:
  if (-1 < lVar12) {
    return iVar5;
  }
  do {
    lVar7 = *plVar6;
    piVar1 = (int *)(lVar7 + lVar11);
    switch(piVar1[1]) {
    case 0:
      if ((uint)(*(int *)(lVar7 + lVar11) << 3) < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = FUN_0080e440();
      }
      iVar4 = iVar4 + iVar5;
      iVar5 = FUN_0080e480(*(undefined8 *)(piVar1 + 2));
      goto LAB_00811468;
    case 1:
      if ((*(int *)(lVar7 + lVar11) << 3 | 5U) < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = FUN_0080e440();
      }
      iVar5 = iVar5 + iVar3 + 4;
      break;
    case 2:
      uVar2 = *(int *)(lVar7 + lVar11) << 3 | 1;
      iVar3 = 1;
      if (0x7f < uVar2) {
        iVar3 = FUN_0080e440(uVar2);
      }
      iVar5 = iVar5 + iVar3 + 8;
      break;
    case 3:
      if ((*(int *)(lVar7 + lVar11) << 3 | 2U) < 0x80) {
        iVar3 = 1;
        pbVar9 = *(byte **)(piVar1 + 2);
        uVar10 = (ulong)*pbVar9;
        if ((*pbVar9 & 1) != 0) goto LAB_00811388;
LAB_0081140c:
        uVar8 = uVar10 >> 1;
        iVar3 = iVar3 + iVar5;
        if ((uint)uVar8 < 0x80) goto LAB_0081141c;
LAB_00811398:
        iVar5 = FUN_0080e440(uVar8 & 0xffffffff);
        pbVar9 = *(byte **)(piVar1 + 2);
        uVar10 = (ulong)*pbVar9;
        iVar3 = iVar3 + iVar5;
        if ((*pbVar9 & 1) == 0) {
LAB_00811428:
          iVar5 = iVar3 + (int)(uVar10 >> 1);
          break;
        }
      }
      else {
        iVar3 = FUN_0080e440();
        pbVar9 = *(byte **)(piVar1 + 2);
        uVar10 = (ulong)*pbVar9;
        if ((*pbVar9 & 1) == 0) goto LAB_0081140c;
LAB_00811388:
        uVar8 = *(ulong *)(pbVar9 + 8);
        iVar3 = iVar3 + iVar5;
        if (0x7f < (uint)uVar8) goto LAB_00811398;
LAB_0081141c:
        iVar3 = iVar3 + 1;
        if ((uVar10 & 1) == 0) goto LAB_00811428;
      }
      iVar5 = iVar3 + (int)*(undefined8 *)(pbVar9 + 8);
      break;
    case 4:
      if ((*(int *)(lVar7 + lVar11) << 3 | 3U) < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = FUN_0080e440();
      }
      iVar4 = FUN_00811270(*(undefined8 *)(piVar1 + 2));
      iVar4 = iVar3 + iVar5 + iVar4;
      if ((*piVar1 << 3 | 4U) < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = FUN_0080e440();
      }
LAB_00811468:
      iVar5 = iVar4 + iVar5;
    }
    lVar12 = lVar12 + 1;
    lVar11 = lVar11 + 0x10;
    plVar6 = (long *)*param_1;
    if (plVar6 == (long *)0x0) goto LAB_008112d8;
LAB_008112c0:
    if ((int)((ulong)(plVar6[1] - *plVar6) >> 4) <= lVar12) {
      return iVar5;
    }
  } while( true );
}


