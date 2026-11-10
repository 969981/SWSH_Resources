/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001170a0; name: FUN_001170a0
 */


void FUN_001170a0(long param_1)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  uint *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ushort *puVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  int *piVar20;
  uint local_70;
  uint local_6c;
  uint local_68 [2];
  
  uVar7 = *(uint *)(param_1 + 0x128);
  uVar17 = (ulong)uVar7;
  if (*(int *)(param_1 + 0x198) == 0) {
    *(undefined4 *)(param_1 + 0x198) = 0;
  }
  else {
    uVar19 = 0;
    lVar1 = param_1 + 0x98;
    do {
      local_70 = *(uint *)(*(long *)(param_1 + 400) + uVar19 * 4);
      lVar15 = *(long *)(param_1 + 0x18);
      uVar14 = (ulong)(local_70 >> 6);
      uVar18 = *(uint *)(*(long *)(param_1 + 0xf0) + uVar14 * 4);
      pbVar8 = (byte *)(lVar15 + uVar14 * 0x20 + 4);
      bVar4 = *pbVar8;
      *pbVar8 = bVar4 & 0xdf;
      if (uVar18 == 0xffffffff) {
        *pbVar8 = bVar4 & 0xdf | 2;
        *(undefined4 *)(*(long *)(param_1 + 0x28) + uVar14 * 4) = *(undefined4 *)(param_1 + 0xa0);
        if (*(uint *)(param_1 + 0xa0) < (*(uint *)(param_1 + 0xa4) & 0x7fffffff)) {
          *(uint *)(*(long *)(param_1 + 0x98) + (ulong)*(uint *)(param_1 + 0xa0) * 4) = local_70;
          *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
          uVar18 = *(uint *)(lVar15 + uVar14 * 0x20);
          uVar5 = local_6c;
        }
        else {
          FUN_00114650(lVar1,&local_70);
          uVar18 = *(uint *)(lVar15 + uVar14 * 0x20);
          uVar5 = local_6c;
        }
        for (; local_6c = uVar5, uVar18 != 0xffffffff;
            uVar18 = *(uint *)(lVar15 + (ulong)uVar18 * 8)) {
          uVar3 = *(uint *)(**(long **)(param_1 + 0x240) + (ulong)(uVar18 ^ 1) * 4);
          lVar15 = *(long *)(param_1 + 0x48);
          if (uVar3 < 0xffffffc0) {
            uVar3 = *(uint *)(*(long *)(param_1 + 0xf0) + (ulong)(uVar3 >> 6) * 4);
            if (uVar3 == 0xffffffff) goto LAB_001172b4;
            lVar9 = *(long *)(param_1 + 0x100);
            uVar6 = 1 << (ulong)(uVar3 & 0x1f);
            if ((*(uint *)(lVar9 + (ulong)(uVar3 >> 5) * 4) & uVar6) == 0) {
              lVar12 = (ulong)(uVar3 >> 5) * 4;
              lVar13 = *(long *)(param_1 + 0x58);
              *(uint *)(lVar9 + lVar12) = *(uint *)(lVar9 + lVar12) | uVar6;
              uVar6 = *(uint *)(param_1 + 0x128);
              *(uint *)(lVar13 + (ulong)uVar3 * 0x2c + 0x10) = uVar6;
              local_68[0] = uVar3;
              if (uVar6 < (*(uint *)(param_1 + 300) & 0x7fffffff)) {
                *(uint *)(*(long *)(param_1 + 0x120) + (ulong)uVar6 * 4) = uVar3;
                *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
              }
              else {
                FUN_001b4230(param_1 + 0x120,local_68);
                uVar5 = local_6c;
              }
            }
          }
          else {
LAB_001172b4:
            local_6c = uVar18 >> 1;
            puVar16 = (ushort *)(*(long *)(param_1 + 0x38) + (ulong)local_6c * 0x10 + 4);
            if ((*puVar16 >> 2 & 1) == 0) {
              puVar2 = (uint *)(*(long *)(param_1 + 0x38) + (ulong)local_6c * 0x10);
              uVar3 = *puVar2;
              uVar14 = (ulong)uVar3;
              if (uVar3 != 1) {
                *puVar16 = *puVar16 | 0x40;
                lVar9 = param_1 + uVar14 * 0x10;
                puVar10 = (uint *)(lVar9 + 0xb0);
                if (*puVar10 < (*(uint *)(lVar9 + 0xb4) & 0x7fffffff)) {
                  *(uint *)(*(long *)(lVar9 + 0xa8) + (ulong)*puVar10 * 4) = local_6c;
                  *puVar10 = *puVar10 + 1;
                }
                else {
                  FUN_001b4230((long *)(lVar9 + 0xa8),&local_6c);
                  uVar14 = (ulong)*puVar2;
                }
                lVar9 = param_1 + uVar14 * 4;
                *(int *)(lVar9 + 200) = *(int *)(lVar9 + 200) + 1;
                if ((int)uVar14 == 0) {
                  lVar9 = (ulong)(local_6c >> 5) * 4;
                  *(uint *)(*(long *)(param_1 + 0x110) + lVar9) =
                       *(uint *)(*(long *)(param_1 + 0x110) + lVar9) | 1 << ((ulong)local_6c & 0x1f)
                  ;
                }
                uVar5 = *(uint *)(**(long **)(param_1 + 0x240) + (ulong)(local_6c << 1) * 4);
                if (uVar5 >> 6 != 0x3ffffff) {
                  uVar3 = *(uint *)(**(long **)(param_1 + 0x240) + (ulong)(local_6c << 1 | 1) * 4);
                  if (uVar3 >> 6 != 0x3ffffff) {
                    lVar12 = *(long *)(param_1 + 0x18);
                    uVar14 = (ulong)(uVar5 >> 6);
                    lVar9 = lVar12 + uVar14 * 0x20;
                    piVar20 = (int *)(lVar9 + 0x10);
                    iVar11 = *piVar20;
                    if (iVar11 == 0) {
                      if ((*(byte *)(lVar9 + 4) & 0x26) == 4) {
                        local_68[0] = uVar5;
                        if (*(int *)(*(long *)(param_1 + 0x28) + uVar14 * 4) == 0x3ffffff) {
                          *(undefined4 *)(*(long *)(param_1 + 0x28) + uVar14 * 4) =
                               *(undefined4 *)(param_1 + 0xa0);
                          if (*(uint *)(param_1 + 0xa0) < (*(uint *)(param_1 + 0xa4) & 0x7fffffff))
                          {
                            *(uint *)(*(long *)(param_1 + 0x98) +
                                     (ulong)*(uint *)(param_1 + 0xa0) * 4) = uVar5;
                            *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
                          }
                          else {
                            FUN_00114650(lVar1,local_68);
                            lVar12 = *(long *)(param_1 + 0x18);
                          }
                        }
                        iVar11 = *piVar20;
                      }
                      else {
                        iVar11 = 0;
                      }
                    }
                    *piVar20 = iVar11 + 1;
                    uVar14 = (ulong)(uVar3 >> 6);
                    lVar12 = lVar12 + uVar14 * 0x20;
                    piVar20 = (int *)(lVar12 + 0x10);
                    iVar11 = *piVar20;
                    if (iVar11 == 0) {
                      if ((*(byte *)(lVar12 + 4) & 0x26) == 4) {
                        local_68[0] = uVar3;
                        if (*(int *)(*(long *)(param_1 + 0x28) + uVar14 * 4) == 0x3ffffff) {
                          *(undefined4 *)(*(long *)(param_1 + 0x28) + uVar14 * 4) =
                               *(undefined4 *)(param_1 + 0xa0);
                          if (*(uint *)(param_1 + 0xa0) < (*(uint *)(param_1 + 0xa4) & 0x7fffffff))
                          {
                            *(uint *)(*(long *)(param_1 + 0x98) +
                                     (ulong)*(uint *)(param_1 + 0xa0) * 4) = uVar3;
                            *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
                          }
                          else {
                            FUN_00114650(lVar1,local_68);
                          }
                        }
                        iVar11 = *piVar20;
                      }
                      else {
                        iVar11 = 0;
                      }
                    }
                    *piVar20 = iVar11 + 1;
                  }
                }
                *puVar16 = *puVar16 | 4;
                uVar5 = local_6c;
              }
            }
          }
          local_6c = uVar5;
          uVar5 = local_6c;
        }
      }
      else {
        lVar15 = *(long *)(param_1 + 0x100);
        uVar5 = 1 << (ulong)(uVar18 & 0x1f);
        if ((*(uint *)(lVar15 + (ulong)(uVar18 >> 5) * 4) & uVar5) == 0) {
          lVar9 = (ulong)(uVar18 >> 5) * 4;
          lVar12 = *(long *)(param_1 + 0x58);
          *(uint *)(lVar15 + lVar9) = *(uint *)(lVar15 + lVar9) | uVar5;
          uVar5 = *(uint *)(param_1 + 0x128);
          *(uint *)(lVar12 + (ulong)uVar18 * 0x2c + 0x10) = uVar5;
          local_68[0] = uVar18;
          if (uVar5 < (*(uint *)(param_1 + 300) & 0x7fffffff)) {
            *(uint *)(*(long *)(param_1 + 0x120) + (ulong)uVar5 * 4) = uVar18;
            *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
          }
          else {
            FUN_001b4230(param_1 + 0x120,local_68);
          }
          uVar14 = (ulong)(local_70 >> 6);
        }
        *(undefined4 *)(*(long *)(param_1 + 0x28) + uVar14 * 4) = 0x3ffffff;
        FUN_001162e0(param_1,local_70);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < *(uint *)(param_1 + 0x198));
    uVar19 = (ulong)*(uint *)(param_1 + 0x128);
    *(undefined4 *)(param_1 + 0x198) = 0;
    if (uVar7 < *(uint *)(param_1 + 0x128)) {
      do {
        uVar7 = *(uint *)(*(long *)(param_1 + 0x58) +
                         (ulong)*(uint *)(*(long *)(param_1 + 0x120) + uVar17 * 4) * 0x2c);
        uVar18 = uVar7 >> 6;
        if (uVar18 != 0x3ffffff) {
          do {
            FUN_001162e0(param_1,uVar7);
            uVar7 = *(uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar18 * 0x20 + 8);
            uVar18 = uVar7 >> 6;
          } while (uVar18 != 0x3ffffff);
          uVar19 = (ulong)*(uint *)(param_1 + 0x128);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar19);
    }
  }
  return;
}


