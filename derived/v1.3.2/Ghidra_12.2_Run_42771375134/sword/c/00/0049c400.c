/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049c400; name: FUN_0049c400
 */


undefined8 FUN_0049c400(int *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  
  if (*(uint *)(param_2 + 0x58) != 0) {
    lVar8 = (ulong)*(uint *)(param_2 + 0x58) * 0x18;
    piVar7 = (int *)(*(long *)(param_2 + 0x50) + 4);
    do {
      if (*piVar7 == *param_1) {
        return 0;
      }
      piVar7 = piVar7 + 6;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != 0);
  }
  uVar1 = param_1[0x14];
  iVar5 = uVar1 - 1;
  if (iVar5 < 0) {
LAB_0049c4b8:
    uVar1 = param_1[0x18];
    iVar5 = uVar1 - 1;
    if (-1 < iVar5) {
LAB_0049c4c4:
      lVar8 = *(long *)(param_1 + 0x16);
      iVar2 = *(int *)(param_2 + 0x48);
      iVar12 = 0;
      iVar11 = iVar5;
      do {
        while( true ) {
          iVar4 = iVar11 - iVar12;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar12 + (iVar4 >> 1);
          uVar13 = *(ulong *)(lVar8 + (long)iVar4 * 8);
          iVar3 = *(int *)(uVar13 + 0x48);
          if ((iVar3 <= iVar2) && (uVar13 <= param_2 || iVar2 != iVar3)) break;
          iVar11 = iVar4 + -1;
          if (iVar11 < iVar12) {
            return 1;
          }
        }
        if ((iVar2 == iVar3 || iVar2 < iVar3) && (param_2 <= uVar13 || iVar2 != iVar3)) {
          puVar6 = (undefined8 *)(lVar8 + (long)iVar4 * 8);
          puVar9 = (undefined8 *)(lVar8 + (ulong)uVar1 * 8 + -8);
          if (puVar6 < puVar9) {
            uVar13 = (ulong)uVar1 * 8 + -9 + (long)iVar4 * -8;
            uVar1 = ((uint)(uVar13 >> 3) & 0x1fffffff) + 1;
            if ((uVar1 & 3) != 0) {
              lVar8 = -((ulong)uVar1 & 3);
              puVar10 = puVar6;
              do {
                puVar6 = puVar10 + 1;
                *puVar10 = *puVar6;
                lVar8 = lVar8 + 1;
                puVar10 = puVar6;
              } while (lVar8 != 0);
            }
            if (0x17 < uVar13) {
              do {
                *puVar6 = puVar6[1];
                puVar6[1] = puVar6[2];
                puVar6[2] = puVar6[3];
                puVar10 = puVar6 + 4;
                puVar6[3] = *puVar10;
                puVar6 = puVar10;
              } while (puVar10 < puVar9);
            }
            iVar5 = param_1[0x18] + -1;
          }
          param_1[0x18] = iVar5;
          return 1;
        }
        iVar12 = iVar4 + 1;
      } while (iVar12 <= iVar11);
    }
    return 1;
  }
  lVar8 = *(long *)(param_1 + 0x12);
  iVar2 = *(int *)(param_2 + 0x48);
  iVar12 = 0;
  iVar11 = iVar5;
LAB_0049c450:
  do {
    iVar4 = iVar11 - iVar12;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 1;
    }
    iVar4 = iVar12 + (iVar4 >> 1);
    uVar13 = *(ulong *)(lVar8 + (long)iVar4 * 8);
    iVar3 = *(int *)(uVar13 + 0x48);
    if ((iVar2 < iVar3) || (param_2 < uVar13 && iVar2 == iVar3)) goto LAB_0049c4ac;
    if ((iVar2 == iVar3 || iVar2 < iVar3) && (param_2 <= uVar13 || iVar2 != iVar3)) {
      puVar6 = (undefined8 *)(lVar8 + (long)iVar4 * 8);
      puVar9 = (undefined8 *)(lVar8 + (ulong)uVar1 * 8 + -8);
      if (puVar6 < puVar9) {
        uVar13 = (ulong)uVar1 * 8 + -9 + (long)iVar4 * -8;
        uVar1 = ((uint)(uVar13 >> 3) & 0x1fffffff) + 1;
        if ((uVar1 & 3) != 0) {
          lVar8 = -((ulong)uVar1 & 3);
          puVar10 = puVar6;
          do {
            puVar6 = puVar10 + 1;
            *puVar10 = *puVar6;
            lVar8 = lVar8 + 1;
            puVar10 = puVar6;
          } while (lVar8 != 0);
        }
        if (0x17 < uVar13) {
          do {
            *puVar6 = puVar6[1];
            puVar6[1] = puVar6[2];
            puVar6[2] = puVar6[3];
            puVar10 = puVar6 + 4;
            puVar6[3] = *puVar10;
            puVar6 = puVar10;
          } while (puVar10 < puVar9);
        }
        iVar5 = param_1[0x14] + -1;
      }
      param_1[0x14] = iVar5;
      uVar1 = param_1[0x18];
      iVar5 = uVar1 - 1;
      if (iVar5 < 0) {
        return 1;
      }
      goto LAB_0049c4c4;
    }
    iVar12 = iVar4 + 1;
  } while (iVar12 <= iVar11);
  goto LAB_0049c4b8;
LAB_0049c4ac:
  iVar11 = iVar4 + -1;
  if (iVar11 < iVar12) goto LAB_0049c4b8;
  goto LAB_0049c450;
}


