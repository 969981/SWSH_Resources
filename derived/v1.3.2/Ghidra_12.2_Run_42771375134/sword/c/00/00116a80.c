/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00116a80; name: FUN_00116a80
 */


void FUN_00116a80(long param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  byte *pbVar9;
  uint *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
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
  uVar18 = *(uint *)(param_1 + 0xb0);
  if (uVar18 != 0) {
    lVar6 = *(long *)(param_1 + 0xa8);
    lVar8 = *(long *)(param_1 + 0x38);
    lVar12 = 0;
    if (uVar18 != 1) {
      do {
        puVar1 = (uint *)(lVar6 + lVar12 * 4);
        lVar12 = lVar12 + 2;
        lVar13 = lVar8 + (ulong)*puVar1 * 0x10;
        *(ushort *)(lVar13 + 4) = *(ushort *)(lVar13 + 4) & 0xffbf;
        lVar13 = lVar8 + (ulong)puVar1[1] * 0x10;
        *(ushort *)(lVar13 + 4) = *(ushort *)(lVar13 + 4) & 0xffbf;
      } while ((ulong)uVar18 - ((ulong)uVar18 & 1) != lVar12);
    }
    if ((uVar18 & 1) != 0) {
      lVar8 = lVar8 + (ulong)*(uint *)(lVar6 + lVar12 * 4) * 0x10;
      *(ushort *)(lVar8 + 4) = *(ushort *)(lVar8 + 4) & 0xffbf;
    }
  }
  uVar18 = *(uint *)(param_1 + 0xc0);
  if (uVar18 != 0) {
    lVar6 = *(long *)(param_1 + 0xb8);
    lVar8 = *(long *)(param_1 + 0x38);
    lVar12 = 0;
    if (uVar18 != 1) {
      do {
        puVar1 = (uint *)(lVar6 + lVar12 * 4);
        lVar12 = lVar12 + 2;
        lVar13 = lVar8 + (ulong)*puVar1 * 0x10;
        *(ushort *)(lVar13 + 4) = *(ushort *)(lVar13 + 4) & 0xffbf;
        lVar13 = lVar8 + (ulong)puVar1[1] * 0x10;
        *(ushort *)(lVar13 + 4) = *(ushort *)(lVar13 + 4) & 0xffbf;
      } while ((ulong)uVar18 - ((ulong)uVar18 & 1) != lVar12);
    }
    if ((uVar18 & 1) != 0) {
      lVar8 = lVar8 + (ulong)*(uint *)(lVar6 + lVar12 * 4) * 0x10;
      *(ushort *)(lVar8 + 4) = *(ushort *)(lVar8 + 4) & 0xffbf;
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(int *)(param_1 + 0x198) == 0) {
    uVar19 = uVar17;
  }
  else {
    uVar19 = 0;
    lVar12 = param_1 + 0x98;
    do {
      local_70 = *(uint *)(*(long *)(param_1 + 400) + uVar19 * 4);
      lVar8 = *(long *)(param_1 + 0x18);
      uVar15 = (ulong)(local_70 >> 6);
      uVar18 = *(uint *)(*(long *)(param_1 + 0xf0) + uVar15 * 4);
      pbVar9 = (byte *)(lVar8 + uVar15 * 0x20 + 4);
      bVar3 = *pbVar9;
      *pbVar9 = bVar3 & 0xdf;
      if (uVar18 == 0xffffffff) {
        *pbVar9 = bVar3 & 0xdf | 2;
        *(undefined4 *)(*(long *)(param_1 + 0x28) + uVar15 * 4) = *(undefined4 *)(param_1 + 0xa0);
        if (*(uint *)(param_1 + 0xa0) < (*(uint *)(param_1 + 0xa4) & 0x7fffffff)) {
          *(uint *)(*(long *)(param_1 + 0x98) + (ulong)*(uint *)(param_1 + 0xa0) * 4) = local_70;
          *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
          uVar18 = *(uint *)(lVar8 + uVar15 * 0x20);
          uVar4 = local_6c;
        }
        else {
          FUN_00114650(lVar12,&local_70);
          uVar18 = *(uint *)(lVar8 + uVar15 * 0x20);
          uVar4 = local_6c;
        }
        for (; local_6c = uVar4, uVar18 != 0xffffffff; uVar18 = *(uint *)(lVar8 + (ulong)uVar18 * 8)
            ) {
          uVar2 = *(uint *)(**(long **)(param_1 + 0x240) + (ulong)(uVar18 ^ 1) * 4);
          lVar8 = *(long *)(param_1 + 0x48);
          if (uVar2 < 0xffffffc0) {
            uVar2 = *(uint *)(*(long *)(param_1 + 0xf0) + (ulong)(uVar2 >> 6) * 4);
            if (uVar2 == 0xffffffff) goto LAB_00116d84;
            lVar6 = *(long *)(param_1 + 0x100);
            uVar5 = 1 << (ulong)(uVar2 & 0x1f);
            if ((*(uint *)(lVar6 + (ulong)(uVar2 >> 5) * 4) & uVar5) == 0) {
              lVar13 = (ulong)(uVar2 >> 5) * 4;
              lVar14 = *(long *)(param_1 + 0x58);
              *(uint *)(lVar6 + lVar13) = *(uint *)(lVar6 + lVar13) | uVar5;
              uVar5 = *(uint *)(param_1 + 0x128);
              *(uint *)(lVar14 + (ulong)uVar2 * 0x2c + 0x10) = uVar5;
              local_68[0] = uVar2;
              if (uVar5 < (*(uint *)(param_1 + 300) & 0x7fffffff)) {
                *(uint *)(*(long *)(param_1 + 0x120) + (ulong)uVar5 * 4) = uVar2;
                *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
              }
              else {
                FUN_001b4230(param_1 + 0x120,local_68);
                uVar4 = local_6c;
              }
            }
          }
          else {
LAB_00116d84:
            local_6c = uVar18 >> 1;
            puVar16 = (ushort *)(*(long *)(param_1 + 0x38) + (ulong)local_6c * 0x10 + 4);
            if ((*puVar16 >> 2 & 1) == 0) {
              puVar1 = (uint *)(*(long *)(param_1 + 0x38) + (ulong)local_6c * 0x10);
              uVar2 = *puVar1;
              uVar15 = (ulong)uVar2;
              if (uVar2 != 1) {
                *puVar16 = *puVar16 | 0x40;
                lVar6 = param_1 + uVar15 * 0x10;
                puVar10 = (uint *)(lVar6 + 0xb0);
                if (*puVar10 < (*(uint *)(lVar6 + 0xb4) & 0x7fffffff)) {
                  *(uint *)(*(long *)(lVar6 + 0xa8) + (ulong)*puVar10 * 4) = local_6c;
                  *puVar10 = *puVar10 + 1;
                }
                else {
                  FUN_001b4230((long *)(lVar6 + 0xa8),&local_6c);
                  uVar15 = (ulong)*puVar1;
                }
                lVar6 = param_1 + uVar15 * 4;
                *(int *)(lVar6 + 200) = *(int *)(lVar6 + 200) + 1;
                if ((int)uVar15 == 0) {
                  lVar6 = (ulong)(local_6c >> 5) * 4;
                  *(uint *)(*(long *)(param_1 + 0x110) + lVar6) =
                       *(uint *)(*(long *)(param_1 + 0x110) + lVar6) | 1 << ((ulong)local_6c & 0x1f)
                  ;
                }
                uVar4 = *(uint *)(**(long **)(param_1 + 0x240) + (ulong)(local_6c << 1) * 4);
                if (uVar4 >> 6 != 0x3ffffff) {
                  uVar2 = *(uint *)(**(long **)(param_1 + 0x240) + (ulong)(local_6c << 1 | 1) * 4);
                  if (uVar2 >> 6 != 0x3ffffff) {
                    lVar13 = *(long *)(param_1 + 0x18);
                    uVar15 = (ulong)(uVar4 >> 6);
                    lVar6 = lVar13 + uVar15 * 0x20;
                    piVar20 = (int *)(lVar6 + 0x10);
                    iVar11 = *piVar20;
                    if (iVar11 == 0) {
                      if ((*(byte *)(lVar6 + 4) & 0x26) == 4) {
                        local_68[0] = uVar4;
                        if (*(int *)(*(long *)(param_1 + 0x28) + uVar15 * 4) == 0x3ffffff) {
                          *(undefined4 *)(*(long *)(param_1 + 0x28) + uVar15 * 4) =
                               *(undefined4 *)(param_1 + 0xa0);
                          if (*(uint *)(param_1 + 0xa0) < (*(uint *)(param_1 + 0xa4) & 0x7fffffff))
                          {
                            *(uint *)(*(long *)(param_1 + 0x98) +
                                     (ulong)*(uint *)(param_1 + 0xa0) * 4) = uVar4;
                            *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
                          }
                          else {
                            FUN_00114650(lVar12,local_68);
                            lVar13 = *(long *)(param_1 + 0x18);
                          }
                        }
                        iVar11 = *piVar20;
                      }
                      else {
                        iVar11 = 0;
                      }
                    }
                    *piVar20 = iVar11 + 1;
                    uVar15 = (ulong)(uVar2 >> 6);
                    lVar13 = lVar13 + uVar15 * 0x20;
                    piVar20 = (int *)(lVar13 + 0x10);
                    iVar11 = *piVar20;
                    if (iVar11 == 0) {
                      if ((*(byte *)(lVar13 + 4) & 0x26) == 4) {
                        local_68[0] = uVar2;
                        if (*(int *)(*(long *)(param_1 + 0x28) + uVar15 * 4) == 0x3ffffff) {
                          *(undefined4 *)(*(long *)(param_1 + 0x28) + uVar15 * 4) =
                               *(undefined4 *)(param_1 + 0xa0);
                          if (*(uint *)(param_1 + 0xa0) < (*(uint *)(param_1 + 0xa4) & 0x7fffffff))
                          {
                            *(uint *)(*(long *)(param_1 + 0x98) +
                                     (ulong)*(uint *)(param_1 + 0xa0) * 4) = uVar2;
                            *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
                          }
                          else {
                            FUN_00114650(lVar12,local_68);
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
                uVar4 = local_6c;
              }
            }
          }
          local_6c = uVar4;
          uVar4 = local_6c;
        }
      }
      else {
        lVar8 = *(long *)(param_1 + 0x100);
        uVar4 = 1 << (ulong)(uVar18 & 0x1f);
        if ((*(uint *)(lVar8 + (ulong)(uVar18 >> 5) * 4) & uVar4) == 0) {
          lVar6 = (ulong)(uVar18 >> 5) * 4;
          lVar13 = *(long *)(param_1 + 0x58);
          *(uint *)(lVar8 + lVar6) = *(uint *)(lVar8 + lVar6) | uVar4;
          uVar4 = *(uint *)(param_1 + 0x128);
          *(uint *)(lVar13 + (ulong)uVar18 * 0x2c + 0x10) = uVar4;
          local_68[0] = uVar18;
          if (uVar4 < (*(uint *)(param_1 + 300) & 0x7fffffff)) {
            *(uint *)(*(long *)(param_1 + 0x120) + (ulong)uVar4 * 4) = uVar18;
            *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
          }
          else {
            FUN_001b4230(param_1 + 0x120,local_68);
          }
          uVar15 = (ulong)(local_70 >> 6);
        }
        *(undefined4 *)(*(long *)(param_1 + 0x28) + uVar15 * 4) = 0x3ffffff;
        FUN_001162e0(param_1,local_70);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < *(uint *)(param_1 + 0x198));
    uVar19 = (ulong)*(uint *)(param_1 + 0x128);
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x90);
  if (uVar7 < (uint)uVar19) {
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
  return;
}


