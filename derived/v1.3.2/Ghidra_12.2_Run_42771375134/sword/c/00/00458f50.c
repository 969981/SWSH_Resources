/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00458f50; name: FUN_00458f50
 */


void FUN_00458f50(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x20);
  iVar3 = *(uint *)(param_1 + 0x20) - 1;
  if (iVar3 < 0) {
    return;
  }
  puVar7 = *(ulong **)(param_1 + 0x18);
  iVar11 = 0;
  iVar10 = iVar3;
  while( true ) {
    while( true ) {
      iVar14 = iVar10 - iVar11;
      if (iVar14 < 0) {
        iVar14 = iVar14 + 1;
      }
      iVar14 = iVar11 + (iVar14 >> 1);
      lVar15 = (long)iVar14;
      uVar6 = puVar7[(long)iVar14 * 3];
      if ((uVar6 <= param_2) && ((param_2 != uVar6 || ((uint)puVar7[lVar15 * 3 + 1] <= param_3))))
      break;
      iVar10 = iVar14 + -1;
      if (iVar10 < iVar11) {
        return;
      }
    }
    if ((param_2 <= uVar6) && ((param_2 != uVar6 || (param_3 <= (uint)puVar7[lVar15 * 3 + 1]))))
    break;
    iVar11 = iVar14 + 1;
    if (iVar10 < iVar11) {
      return;
    }
  }
  puVar9 = puVar7 + lVar15 * 3;
  if (puVar9 == (ulong *)0x0) {
    return;
  }
  if (((uVar6 != 0xffffffffffffffff) && ((puVar9 + -3 < puVar7 || (puVar9[-3] != uVar6)))) &&
     ((puVar7 + uVar4 * 3 + -3 < puVar9 + 3 || (puVar9[3] != uVar6)))) {
    uVar1 = *(uint *)(param_1 + 0x38);
    iVar11 = uVar1 - 1;
    if (-1 < iVar11) {
      lVar15 = *(long *)(param_1 + 0x30);
      iVar10 = 0;
      iVar14 = iVar11;
      do {
        while( true ) {
          iVar2 = iVar14 - iVar10;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar10 + (iVar2 >> 1);
          uVar16 = *(ulong *)(lVar15 + (long)iVar2 * 8);
          if (uVar6 < uVar16) break;
          if (uVar6 <= uVar16) {
            puVar8 = (undefined8 *)(lVar15 + (long)iVar2 * 8);
            puVar5 = (undefined8 *)(lVar15 + (ulong)uVar1 * 8 + -8);
            if (puVar8 < puVar5) {
              uVar4 = (ulong)uVar1 * 8 + -9 + (long)iVar2 * -8;
              uVar1 = ((uint)(uVar4 >> 3) & 0x1fffffff) + 1;
              if ((uVar1 & 3) != 0) {
                lVar15 = -((ulong)uVar1 & 3);
                puVar12 = puVar8;
                do {
                  puVar8 = puVar12 + 1;
                  *puVar12 = *puVar8;
                  lVar15 = lVar15 + 1;
                  puVar12 = puVar8;
                } while (lVar15 != 0);
              }
              if (0x17 < uVar4) {
                do {
                  *puVar8 = puVar8[1];
                  puVar8[1] = puVar8[2];
                  puVar8[2] = puVar8[3];
                  puVar12 = puVar8 + 4;
                  puVar8[3] = *puVar12;
                  puVar8 = puVar12;
                } while (puVar12 < puVar5);
              }
              uVar4 = (ulong)*(uint *)(param_1 + 0x20);
              iVar11 = *(int *)(param_1 + 0x38) + -1;
              iVar3 = *(uint *)(param_1 + 0x20) - 1;
            }
            *(int *)(param_1 + 0x38) = iVar11;
            goto LAB_00459124;
          }
          iVar10 = iVar2 + 1;
          if (iVar14 < iVar10) goto LAB_00459124;
        }
        iVar14 = iVar2 + -1;
      } while (iVar10 <= iVar14);
    }
  }
LAB_00459124:
  if (iVar3 < 0) {
    return;
  }
  lVar15 = *(long *)(param_1 + 0x18);
  iVar11 = 0;
  iVar10 = iVar3;
  while( true ) {
    while( true ) {
      iVar14 = iVar10 - iVar11;
      if (iVar14 < 0) {
        iVar14 = iVar14 + 1;
      }
      iVar14 = iVar11 + (iVar14 >> 1);
      lVar13 = (long)iVar14;
      uVar6 = *(ulong *)(lVar15 + (long)iVar14 * 0x18);
      if ((uVar6 <= param_2) &&
         ((param_2 != uVar6 || (*(uint *)(lVar15 + lVar13 * 0x18 + 8) <= param_3)))) break;
      iVar10 = iVar14 + -1;
      if (iVar10 < iVar11) {
        return;
      }
    }
    if ((param_2 <= uVar6) &&
       ((param_2 != uVar6 || (param_3 <= *(uint *)(lVar15 + lVar13 * 0x18 + 8))))) break;
    iVar11 = iVar14 + 1;
    if (iVar10 < iVar11) {
      return;
    }
  }
  puVar8 = (undefined8 *)(lVar15 + lVar13 * 0x18);
  puVar5 = (undefined8 *)((lVar15 + uVar4 * 0x18) - 0x18);
  if (puVar8 < puVar5) {
    do {
      puVar12 = puVar8 + 3;
      *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(puVar8 + 5);
      *puVar8 = *puVar12;
      puVar8[1] = puVar8[4];
      puVar8 = puVar12;
    } while (puVar12 < puVar5);
    iVar3 = *(int *)(param_1 + 0x20) + -1;
  }
  *(int *)(param_1 + 0x20) = iVar3;
  return;
}


