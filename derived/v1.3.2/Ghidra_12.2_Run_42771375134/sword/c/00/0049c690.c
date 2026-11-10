/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049c690; name: FUN_0049c690
 */


void FUN_0049c690(long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  
  uVar1 = *(uint *)(param_1 + 0x50);
  iVar5 = uVar1 - 1;
  if (iVar5 < 0) {
LAB_0049c714:
    uVar1 = *(uint *)(param_1 + 0x60);
    iVar5 = uVar1 - 1;
    if (-1 < iVar5) {
LAB_0049c720:
      lVar7 = *(long *)(param_1 + 0x58);
      iVar2 = *(int *)(param_2 + 0x48);
      iVar11 = 0;
      iVar10 = iVar5;
      do {
        while( true ) {
          iVar4 = iVar10 - iVar11;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar11 + (iVar4 >> 1);
          uVar12 = *(ulong *)(lVar7 + (long)iVar4 * 8);
          iVar3 = *(int *)(uVar12 + 0x48);
          if ((iVar3 <= iVar2) && (uVar12 <= param_2 || iVar2 != iVar3)) break;
          iVar10 = iVar4 + -1;
          if (iVar10 < iVar11) {
            return;
          }
        }
        if ((iVar2 == iVar3 || iVar2 < iVar3) && (param_2 <= uVar12 || iVar2 != iVar3)) {
          puVar6 = (undefined8 *)(lVar7 + (long)iVar4 * 8);
          puVar8 = (undefined8 *)(lVar7 + (ulong)uVar1 * 8 + -8);
          if (puVar6 < puVar8) {
            uVar12 = (ulong)uVar1 * 8 + -9 + (long)iVar4 * -8;
            uVar1 = ((uint)(uVar12 >> 3) & 0x1fffffff) + 1;
            if ((uVar1 & 3) != 0) {
              lVar7 = -((ulong)uVar1 & 3);
              puVar9 = puVar6;
              do {
                puVar6 = puVar9 + 1;
                *puVar9 = *puVar6;
                lVar7 = lVar7 + 1;
                puVar9 = puVar6;
              } while (lVar7 != 0);
            }
            if (0x17 < uVar12) {
              do {
                *puVar6 = puVar6[1];
                puVar6[1] = puVar6[2];
                puVar6[2] = puVar6[3];
                puVar9 = puVar6 + 4;
                puVar6[3] = *puVar9;
                puVar6 = puVar9;
              } while (puVar9 < puVar8);
            }
            iVar5 = *(int *)(param_1 + 0x60) + -1;
          }
          *(int *)(param_1 + 0x60) = iVar5;
          return;
        }
        iVar11 = iVar4 + 1;
      } while (iVar11 <= iVar10);
    }
    return;
  }
  lVar7 = *(long *)(param_1 + 0x48);
  iVar2 = *(int *)(param_2 + 0x48);
  iVar11 = 0;
  iVar10 = iVar5;
LAB_0049c6ac:
  do {
    iVar4 = iVar10 - iVar11;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 1;
    }
    iVar4 = iVar11 + (iVar4 >> 1);
    uVar12 = *(ulong *)(lVar7 + (long)iVar4 * 8);
    iVar3 = *(int *)(uVar12 + 0x48);
    if ((iVar2 < iVar3) || (param_2 < uVar12 && iVar2 == iVar3)) goto LAB_0049c708;
    if ((iVar2 == iVar3 || iVar2 < iVar3) && (param_2 <= uVar12 || iVar2 != iVar3)) {
      puVar6 = (undefined8 *)(lVar7 + (long)iVar4 * 8);
      puVar8 = (undefined8 *)(lVar7 + (ulong)uVar1 * 8 + -8);
      if (puVar6 < puVar8) {
        uVar12 = (ulong)uVar1 * 8 + -9 + (long)iVar4 * -8;
        uVar1 = ((uint)(uVar12 >> 3) & 0x1fffffff) + 1;
        if ((uVar1 & 3) != 0) {
          lVar7 = -((ulong)uVar1 & 3);
          puVar9 = puVar6;
          do {
            puVar6 = puVar9 + 1;
            *puVar9 = *puVar6;
            lVar7 = lVar7 + 1;
            puVar9 = puVar6;
          } while (lVar7 != 0);
        }
        if (0x17 < uVar12) {
          do {
            *puVar6 = puVar6[1];
            puVar6[1] = puVar6[2];
            puVar6[2] = puVar6[3];
            puVar9 = puVar6 + 4;
            puVar6[3] = *puVar9;
            puVar6 = puVar9;
          } while (puVar9 < puVar8);
        }
        iVar5 = *(int *)(param_1 + 0x50) + -1;
      }
      *(int *)(param_1 + 0x50) = iVar5;
      uVar1 = *(uint *)(param_1 + 0x60);
      iVar5 = uVar1 - 1;
      if (iVar5 < 0) {
        return;
      }
      goto LAB_0049c720;
    }
    iVar11 = iVar4 + 1;
  } while (iVar11 <= iVar10);
  goto LAB_0049c714;
LAB_0049c708:
  iVar10 = iVar4 + -1;
  if (iVar10 < iVar11) goto LAB_0049c714;
  goto LAB_0049c6ac;
}


