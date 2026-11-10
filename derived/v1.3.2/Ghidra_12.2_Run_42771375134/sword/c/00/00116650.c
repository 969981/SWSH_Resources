/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00116650; name: FUN_00116650
 */


void FUN_00116650(long param_1,ulong param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ushort *puVar13;
  long lVar14;
  uint *puVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  uint local_44;
  
  lVar9 = *(long *)(param_1 + 0x18);
  uVar11 = param_2 >> 6 & 0x3ffffff;
  lVar12 = lVar9 + uVar11 * 0x20;
  bVar5 = *(byte *)(lVar12 + 4);
  if ((bVar5 >> 1 & 1) == 0) {
    return;
  }
  if ((bVar5 >> 2 & 1) == 0) {
    lVar10 = param_1 + (ulong)*(byte *)(lVar12 + 5) * 0x10;
    lVar18 = param_1 + (ulong)*(byte *)(lVar12 + 5) * 4;
    lVar14 = *(long *)(param_1 + 0x28);
    uVar8 = *(uint *)(lVar18 + 0x130);
    uVar16 = *(uint *)(lVar14 + uVar11 * 4);
    if (uVar16 < uVar8) {
      lVar17 = *(long *)(lVar10 + 0x78);
      lVar7 = uVar11 * 4;
      uVar8 = *(uint *)(lVar17 + (ulong)(uVar8 - 1) * 4);
      lVar20 = (ulong)(uVar8 >> 6) * 4;
      *(undefined4 *)(lVar14 + lVar7) = *(undefined4 *)(lVar14 + lVar20);
      *(uint *)(lVar14 + lVar20) = uVar16;
      *(uint *)(lVar17 + (ulong)uVar16 * 4) = uVar8;
      *(int *)(lVar17 + (ulong)*(uint *)(lVar14 + lVar7) * 4) = (int)param_2;
      piVar1 = (int *)(lVar18 + 0x130);
      *piVar1 = *piVar1 + -1;
      uVar16 = *(uint *)(lVar14 + lVar7);
    }
    else {
      lVar17 = *(long *)(lVar10 + 0x78);
    }
    uVar8 = *(uint *)(lVar17 + (ulong)(*(int *)(lVar10 + 0x80) - 1) * 4);
    *(uint *)(lVar14 + (ulong)(uVar8 >> 6) * 4) = uVar16;
    *(uint *)(lVar17 + (ulong)*(uint *)(lVar14 + uVar11 * 4) * 4) = uVar8;
    *(int *)(lVar10 + 0x80) = *(int *)(lVar10 + 0x80) + -1;
    *(undefined4 *)(lVar14 + uVar11 * 4) = 0x3ffffff;
  }
  else if (*(int *)(lVar12 + 0x10) == 0) {
    lVar10 = *(long *)(param_1 + 0x28);
    iVar3 = *(int *)(lVar10 + uVar11 * 4);
    if (iVar3 != 0x3ffffff) {
      lVar18 = *(long *)(param_1 + 0x98);
      uVar8 = *(uint *)(lVar18 + (ulong)(*(int *)(param_1 + 0xa0) - 1) * 4);
      *(int *)(lVar10 + (ulong)(uVar8 >> 6) * 4) = iVar3;
      *(uint *)(lVar18 + (ulong)*(uint *)(lVar10 + uVar11 * 4) * 4) = uVar8;
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
      *(undefined4 *)(lVar10 + uVar11 * 4) = 0x3ffffff;
    }
  }
  *(byte *)(lVar12 + 4) = bVar5 & 0xdd;
  uVar8 = *(uint *)(lVar9 + uVar11 * 0x20);
joined_r0x00116794:
  if (uVar8 == 0xffffffff) {
    return;
  }
  do {
    lVar12 = **(long **)(param_1 + 0x240);
    lVar9 = *(long *)(param_1 + 0x48);
    uVar16 = *(uint *)(lVar12 + (ulong)(uVar8 ^ 1) * 4) >> 6;
    if ((uVar16 == 0x3ffffff) ||
       ((*(byte *)(*(long *)(param_1 + 0x18) + (ulong)uVar16 * 0x20 + 4) >> 1 & 1) == 0)) {
      local_44 = uVar8 >> 1;
      lVar10 = *(long *)(param_1 + 0x38);
      puVar13 = (ushort *)(lVar10 + (ulong)local_44 * 0x10 + 4);
      uVar6 = *puVar13;
      if ((uVar6 >> 2 & 1) != 0) {
        *puVar13 = uVar6 & 0xfffb;
        uVar16 = *(uint *)(lVar10 + (ulong)local_44 * 0x10);
        uVar11 = (ulong)uVar16;
        lVar10 = param_1 + uVar11 * 4;
        *(int *)(lVar10 + 200) = *(int *)(lVar10 + 200) + -1;
        if ((uVar6 >> 6 & 1) != 0) {
          lVar10 = param_1 + uVar11 * 0x10;
          puVar15 = (uint *)(lVar10 + 0xb0);
          uVar2 = *puVar15;
          if (uVar2 != 0) {
            lVar10 = *(long *)(lVar10 + 0xa8);
            uVar19 = 0;
            do {
              if (*(uint *)(lVar10 + (uVar19 & 0xffffffff) * 4) == local_44) {
                *puVar15 = uVar2 - 1;
                *(undefined4 *)(lVar10 + uVar19 * 4) =
                     *(undefined4 *)(lVar10 + (ulong)(uVar2 - 1) * 4);
                break;
              }
              uVar19 = uVar19 + 1;
            } while ((uint)uVar19 < uVar2);
          }
          *puVar13 = uVar6 & 0xffbb;
        }
        uVar2 = *(uint *)(lVar12 + (ulong)(uVar8 & 0xfffffffe) * 4);
        if ((uVar2 < 0xffffffc0) &&
           (uVar4 = *(uint *)(lVar12 + (ulong)(uVar8 | 1) * 4), uVar4 < 0xffffffc0)) {
          lVar12 = *(long *)(param_1 + 0x18) + (ulong)(uVar2 >> 6) * 0x20;
          lVar10 = *(long *)(param_1 + 0x18) + (ulong)(uVar4 >> 6) * 0x20;
          *(int *)(lVar12 + 0x10) = *(int *)(lVar12 + 0x10) + -1;
          *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + -1;
        }
        if (uVar16 == 0) {
          lVar12 = (ulong)(uVar8 >> 6) * 4;
          *(uint *)(*(long *)(param_1 + 0x110) + lVar12) =
               *(uint *)(*(long *)(param_1 + 0x110) + lVar12) &
               (1 << (ulong)(uVar8 >> 1 & 0x1f) ^ 0xffffffffU);
        }
        lVar12 = param_1 + uVar11 * 0x10;
        if ((*(uint *)(lVar12 + 0x224) & 0x7fffffff) <= *(uint *)(lVar12 + 0x220)) break;
        *(uint *)(*(long *)(lVar12 + 0x218) + (ulong)*(uint *)(lVar12 + 0x220) * 4) = local_44;
        *(int *)(lVar12 + 0x220) = *(int *)(lVar12 + 0x220) + 1;
      }
    }
    uVar8 = *(uint *)(lVar9 + (ulong)uVar8 * 8);
    if (uVar8 == 0xffffffff) {
      return;
    }
  } while( true );
  FUN_001b4230((long *)(lVar12 + 0x218),&local_44);
  uVar8 = *(uint *)(lVar9 + (ulong)uVar8 * 8);
  goto joined_r0x00116794;
}


