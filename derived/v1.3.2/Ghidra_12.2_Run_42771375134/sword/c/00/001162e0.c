/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001162e0; name: FUN_001162e0
 */


void FUN_001162e0(long param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  byte *pbVar11;
  ulong uVar12;
  uint uVar13;
  int *piVar14;
  ushort *puVar15;
  uint local_6c;
  uint local_68 [2];
  
  uVar12 = param_2 >> 6 & 0x3ffffff;
  pbVar11 = (byte *)(*(long *)(param_1 + 0x18) + uVar12 * 0x20 + 4);
  bVar2 = *pbVar11;
  if ((bVar2 >> 1 & 1) != 0) {
    return;
  }
  uVar13 = *(uint *)(*(long *)(param_1 + 0x18) + uVar12 * 0x20);
  if (uVar13 != 0xffffffff) {
    do {
      uVar3 = uVar13 >> 1;
      puVar15 = (ushort *)(*(long *)(param_1 + 0x38) + (ulong)uVar3 * 0x10 + 4);
      if ((*puVar15 >> 2 & 1) == 0) {
        puVar8 = (uint *)(*(long *)(param_1 + 0x38) + (ulong)uVar3 * 0x10);
        *puVar15 = *puVar15 | 0x40;
        uVar5 = (ulong)*puVar8;
        lVar6 = param_1 + uVar5 * 0x10;
        puVar9 = (uint *)(lVar6 + 0xb0);
        local_6c = uVar3;
        if (*puVar9 < (*(uint *)(lVar6 + 0xb4) & 0x7fffffff)) {
          *(uint *)(*(long *)(lVar6 + 0xa8) + (ulong)*puVar9 * 4) = uVar3;
          *puVar9 = *puVar9 + 1;
        }
        else {
          FUN_001b4230((long *)(lVar6 + 0xa8),&local_6c);
          uVar5 = (ulong)*puVar8;
        }
        lVar6 = param_1 + uVar5 * 4;
        *(int *)(lVar6 + 200) = *(int *)(lVar6 + 200) + 1;
        if ((int)uVar5 == 0) {
          lVar6 = (ulong)(local_6c >> 5) * 4;
          *(uint *)(*(long *)(param_1 + 0x110) + lVar6) =
               *(uint *)(*(long *)(param_1 + 0x110) + lVar6) | 1 << ((ulong)local_6c & 0x1f);
        }
        uVar3 = *(uint *)(**(long **)(param_1 + 0x240) + (ulong)(local_6c << 1) * 4);
        if (uVar3 >> 6 != 0x3ffffff) {
          uVar1 = *(uint *)(**(long **)(param_1 + 0x240) + (ulong)(local_6c << 1 | 1) * 4);
          if (uVar1 >> 6 != 0x3ffffff) {
            lVar7 = *(long *)(param_1 + 0x18);
            uVar5 = (ulong)(uVar3 >> 6);
            lVar6 = lVar7 + uVar5 * 0x20;
            piVar14 = (int *)(lVar6 + 0x10);
            iVar10 = *piVar14;
            if (iVar10 == 0) {
              if ((*(byte *)(lVar6 + 4) & 0x26) == 4) {
                local_68[0] = uVar3;
                if (*(int *)(*(long *)(param_1 + 0x28) + uVar5 * 4) == 0x3ffffff) {
                  *(undefined4 *)(*(long *)(param_1 + 0x28) + uVar5 * 4) =
                       *(undefined4 *)(param_1 + 0xa0);
                  if (*(uint *)(param_1 + 0xa0) < (*(uint *)(param_1 + 0xa4) & 0x7fffffff)) {
                    *(uint *)(*(long *)(param_1 + 0x98) + (ulong)*(uint *)(param_1 + 0xa0) * 4) =
                         uVar3;
                    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
                  }
                  else {
                    FUN_00114650(param_1 + 0x98,local_68);
                    lVar7 = *(long *)(param_1 + 0x18);
                  }
                }
                iVar10 = *piVar14;
              }
              else {
                iVar10 = 0;
              }
            }
            *piVar14 = iVar10 + 1;
            uVar5 = (ulong)(uVar1 >> 6);
            lVar7 = lVar7 + uVar5 * 0x20;
            piVar14 = (int *)(lVar7 + 0x10);
            iVar10 = *piVar14;
            if (iVar10 == 0) {
              if ((*(byte *)(lVar7 + 4) & 0x26) == 4) {
                local_68[0] = uVar1;
                if (*(int *)(*(long *)(param_1 + 0x28) + uVar5 * 4) == 0x3ffffff) {
                  *(undefined4 *)(*(long *)(param_1 + 0x28) + uVar5 * 4) =
                       *(undefined4 *)(param_1 + 0xa0);
                  if (*(uint *)(param_1 + 0xa0) < (*(uint *)(param_1 + 0xa4) & 0x7fffffff)) {
                    *(uint *)(*(long *)(param_1 + 0x98) + (ulong)*(uint *)(param_1 + 0xa0) * 4) =
                         uVar1;
                    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
                  }
                  else {
                    FUN_00114650(param_1 + 0x98,local_68);
                  }
                }
                iVar10 = *piVar14;
              }
              else {
                iVar10 = 0;
              }
            }
            *piVar14 = iVar10 + 1;
          }
        }
        *puVar15 = *puVar15 | 4;
      }
      uVar13 = *(uint *)(*(long *)(param_1 + 0x48) + (ulong)uVar13 * 8);
    } while (uVar13 != 0xffffffff);
    bVar2 = *pbVar11;
  }
  local_68[0] = (uint)param_2;
  if ((bVar2 >> 2 & 1) == 0) {
    lVar6 = param_1 + (ulong)*(byte *)(*(long *)(param_1 + 0x18) + uVar12 * 0x20 + 5) * 0x10;
    puVar8 = (uint *)(lVar6 + 0x80);
    *(uint *)(*(long *)(param_1 + 0x28) + uVar12 * 4) = *puVar8;
    plVar4 = (long *)(lVar6 + 0x78);
    if (*puVar8 < (*(uint *)(lVar6 + 0x84) & 0x7fffffff)) {
      *(uint *)(*plVar4 + (ulong)*puVar8 * 4) = local_68[0];
      *puVar8 = *puVar8 + 1;
      goto LAB_00116620;
    }
  }
  else {
    if ((*(int *)(*(long *)(param_1 + 0x18) + uVar12 * 0x20 + 0x10) != 0) ||
       (*(int *)(*(long *)(param_1 + 0x28) + uVar12 * 4) != 0x3ffffff)) goto LAB_00116620;
    *(undefined4 *)(*(long *)(param_1 + 0x28) + uVar12 * 4) = *(undefined4 *)(param_1 + 0xa0);
    if (*(uint *)(param_1 + 0xa0) < (*(uint *)(param_1 + 0xa4) & 0x7fffffff)) {
      *(uint *)(*(long *)(param_1 + 0x98) + (ulong)*(uint *)(param_1 + 0xa0) * 4) = local_68[0];
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      goto LAB_00116620;
    }
    plVar4 = (long *)(param_1 + 0x98);
  }
  FUN_00114650(plVar4,local_68);
LAB_00116620:
  *pbVar11 = *pbVar11 | 2;
  return;
}


