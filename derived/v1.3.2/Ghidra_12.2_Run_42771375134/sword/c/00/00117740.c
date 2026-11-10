/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00117740; name: FUN_00117740
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00117740(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  byte bVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  uint local_68 [2];
  
  FUN_001175c0();
  local_68[0] = 0;
  FUN_001ed3f0((long *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0x20),local_68);
  plVar1 = (long *)(param_1 + 0xe0);
  local_68[0] = 0xffffffc0;
  FUN_00113990(plVar1,*(undefined4 *)(param_1 + 0x20),local_68);
  lVar5 = 0;
  lVar2 = param_1 + 0x120;
  do {
    lVar3 = param_1 + lVar5 * 0x10;
    if (*(int *)(lVar3 + 0x160) != 0) {
      uVar17 = 0;
      do {
        while( true ) {
          uVar4 = *(uint *)(*(long *)(lVar3 + 0x158) + uVar17 * 4);
          uVar21 = (ulong)uVar4;
          lVar6 = *(long *)(param_1 + 0x38);
          if ((*(byte *)(lVar6 + uVar21 * 0x10 + 4) >> 1 & 1) == 0) break;
LAB_00118104:
          uVar17 = uVar17 + 1;
          if (*(uint *)(lVar3 + 0x160) <= uVar17) goto LAB_00118114;
        }
        uVar7 = *(uint *)(**(long **)(param_1 + 0x240) + (ulong)(uVar4 << 1) * 4);
        uVar24 = *(uint *)(**(long **)(param_1 + 0x240) + (ulong)(uVar4 << 1 | 1) * 4);
        uVar10 = uVar7 >> 6;
        uVar9 = (ulong)uVar10;
        uVar23 = 0xffffffff;
        if (uVar10 == 0x3ffffff) {
          uVar12 = (ulong)(uVar24 >> 6);
          if (uVar24 >> 6 == 0x3ffffff) goto LAB_00117f18;
LAB_00117fac:
          uVar26 = (ulong)*(uint *)(*(long *)(param_1 + 0xf0) + uVar12 * 4);
          if (uVar10 != 0x3ffffff) goto LAB_00117fbc;
LAB_00117f20:
          bVar18 = 0;
          if ((int)uVar12 != 0x3ffffff) goto LAB_00117f2c;
LAB_00117fd8:
          bVar13 = 0;
          uVar22 = (uint)uVar26 & (uint)uVar23;
        }
        else {
          uVar23 = (ulong)*(uint *)(*(long *)(param_1 + 0xf0) + (ulong)uVar10 * 4);
          uVar12 = (ulong)(uVar24 >> 6);
          if (uVar24 >> 6 != 0x3ffffff) goto LAB_00117fac;
LAB_00117f18:
          uVar26 = 0xffffffff;
          if (uVar10 == 0x3ffffff) goto LAB_00117f20;
LAB_00117fbc:
          bVar18 = *(byte *)(*(long *)(param_1 + 0x18) + (ulong)uVar10 * 0x20 + 4) >> 1 & 1;
          if ((int)uVar12 == 0x3ffffff) goto LAB_00117fd8;
LAB_00117f2c:
          bVar13 = *(byte *)(*(long *)(param_1 + 0x18) + uVar12 * 0x20 + 4) >> 1 & 1;
          uVar22 = (uint)uVar26 & (uint)uVar23;
        }
        if (uVar22 == 0xffffffff) goto LAB_00118104;
        uVar22 = (uint)uVar23;
        uVar25 = (uint)uVar26;
        if (uVar22 == uVar25) {
          lVar6 = *(long *)(param_1 + 0xd0);
          uVar20 = *(uint *)(lVar6 + (ulong)uVar10 * 4);
          uVar25 = uVar20 + 1;
          uVar19 = *(uint *)(lVar6 + uVar12 * 4);
          if (uVar25 < uVar19) {
            *(uint *)(lVar6 + uVar12 * 4) = uVar25;
            *(uint *)(*plVar1 + uVar12 * 4) = uVar7;
          }
          else {
            uVar19 = uVar19 + 1;
            if (uVar20 <= uVar19) goto LAB_00117c5c;
            *(uint *)(lVar6 + (ulong)uVar10 * 4) = uVar19;
            *(uint *)(*plVar1 + (ulong)uVar10 * 4) = uVar24;
          }
joined_r0x00117d00:
          if (uVar22 == 0xffffffff) goto LAB_00118104;
          lVar6 = *(long *)(param_1 + 0x38);
        }
        else {
          if (uVar22 == 0xffffffff) {
            lVar6 = *(long *)(param_1 + 0x18);
            uVar23 = uVar26;
            uVar22 = uVar25;
            if (uVar10 == 0x3ffffff) {
              lVar6 = lVar6 + uVar12 * 0x20;
              *(short *)(lVar6 + 6) = *(short *)(lVar6 + 6) + 1;
              *(int *)(*(long *)(param_1 + 0x68) + uVar26 * 4) =
                   *(int *)(*(long *)(param_1 + 0x68) + uVar26 * 4) + 1;
            }
            else {
              lVar8 = lVar6 + uVar9 * 0x20;
              if ((*(byte *)(lVar8 + 4) >> 2 & 1) == 0) {
                lVar16 = *(long *)(param_1 + 0x58);
                lVar15 = lVar16 + uVar26 * 0x2c;
                *(uint *)(lVar6 + (ulong)(*(uint *)(lVar15 + 4) >> 6) * 0x20 + 8) = uVar7;
                *(undefined4 *)(lVar8 + 0xc) = *(undefined4 *)(lVar15 + 4);
                *(uint *)(lVar15 + 4) = uVar7;
                lVar15 = lVar15 + (ulong)*(byte *)(lVar8 + 5) * 4;
                *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
                lVar6 = uVar9 * 4;
                *(uint *)(*(long *)(param_1 + 0xf0) + lVar6) = uVar25;
                *(int *)(*(long *)(param_1 + 0xd0) + lVar6) =
                     *(int *)(*(long *)(param_1 + 0xd0) + uVar12 * 4) + 1;
                *(uint *)(*(long *)(param_1 + 0xe0) + lVar6) = uVar24;
                if ((bVar18 | bVar13) == 1) {
                  puVar14 = (uint *)(*(long *)(param_1 + 0x100) + (ulong)(uVar25 >> 5) * 4);
                  uVar24 = 1 << (ulong)(uVar25 & 0x1f);
                  if ((*puVar14 & uVar24) == 0) {
                    uVar10 = *(uint *)(lVar16 + uVar26 * 0x2c);
                    uVar19 = uVar10 >> 6;
                    if (uVar19 != 0x3ffffff) {
                      do {
                        FUN_001162e0(param_1,uVar10);
                        uVar10 = *(uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar19 * 0x20 + 8);
                        uVar19 = uVar10 >> 6;
                      } while (uVar19 != 0x3ffffff);
                      lVar16 = *(long *)(param_1 + 0x58);
                      puVar14 = (uint *)(*(long *)(param_1 + 0x100) + (ulong)(uVar25 >> 5) * 4);
                    }
                    *puVar14 = *puVar14 | uVar24;
                    uVar24 = *(uint *)(param_1 + 0x128);
                    *(uint *)(lVar16 + uVar26 * 0x2c + 0x10) = uVar24;
                    if (uVar24 < (*(uint *)(param_1 + 300) & 0x7fffffff)) {
                      *(uint *)(*(long *)(param_1 + 0x120) + (ulong)uVar24 * 4) = uVar25;
                      *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
                      local_68[0] = uVar25;
                    }
                    else {
                      local_68[0] = uVar25;
                      FUN_001b4230(lVar2,local_68);
                    }
                  }
                  if (bVar18 == 0) {
                    FUN_001162e0(param_1,uVar7);
                  }
                }
              }
              else if (bVar13 == 0 && bVar18 == 1) {
                lVar6 = *(long *)(param_1 + 0x58);
                uVar7 = *(uint *)(lVar6 + uVar26 * 0x2c);
                uVar24 = uVar7 >> 6;
                if (uVar24 != 0x3ffffff) {
                  do {
                    FUN_001162e0(param_1,uVar7);
                    uVar7 = *(uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar24 * 0x20 + 8);
                    uVar24 = uVar7 >> 6;
                  } while (uVar24 != 0x3ffffff);
                  lVar6 = *(long *)(param_1 + 0x58);
                }
                lVar8 = (ulong)(uVar25 >> 5) * 4;
                *(uint *)(*(long *)(param_1 + 0x100) + lVar8) =
                     *(uint *)(*(long *)(param_1 + 0x100) + lVar8) | 1 << (ulong)(uVar25 & 0x1f);
                uVar7 = *(uint *)(param_1 + 0x128);
                *(uint *)(lVar6 + uVar26 * 0x2c + 0x10) = uVar7;
                if (uVar7 < (*(uint *)(param_1 + 300) & 0x7fffffff)) {
                  lVar6 = *(long *)(param_1 + 0x120);
                  local_68[0] = uVar25;
LAB_00117b2c:
                  *(uint *)(lVar6 + (ulong)uVar7 * 4) = local_68[0];
                  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
                  uVar23 = uVar26;
                  uVar22 = (uint)uVar26;
                }
                else {
                  local_68[0] = uVar25;
                  FUN_001b4230(lVar2,local_68);
                }
              }
            }
            goto joined_r0x00117d00;
          }
          if (uVar25 != 0xffffffff) {
            if ((bVar18 | bVar13) == 1) {
              lVar6 = *(long *)(param_1 + 0x100);
              puVar14 = (uint *)(lVar6 + (ulong)(uVar22 >> 5) * 4);
              uVar10 = 1 << (ulong)(uVar22 & 0x1f);
              if ((*puVar14 & uVar10) == 0) {
                lVar8 = *(long *)(param_1 + 0x58);
                uVar19 = *(uint *)(lVar8 + uVar23 * 0x2c);
                uVar20 = uVar19 >> 6;
                if (uVar20 != 0x3ffffff) {
                  do {
                    FUN_001162e0(param_1,uVar19);
                    uVar19 = *(uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar20 * 0x20 + 8);
                    uVar20 = uVar19 >> 6;
                  } while (uVar20 != 0x3ffffff);
                  lVar6 = *(long *)(param_1 + 0x100);
                  lVar8 = *(long *)(param_1 + 0x58);
                  puVar14 = (uint *)(lVar6 + (ulong)(uVar22 >> 5) * 4);
                }
                *puVar14 = *puVar14 | uVar10;
                uVar10 = *(uint *)(param_1 + 0x128);
                *(uint *)(lVar8 + uVar23 * 0x2c + 0x10) = uVar10;
                if (uVar10 < (*(uint *)(param_1 + 300) & 0x7fffffff)) {
                  *(uint *)(*(long *)(param_1 + 0x120) + (ulong)uVar10 * 4) = uVar22;
                  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
                  local_68[0] = uVar22;
                }
                else {
                  local_68[0] = uVar22;
                  FUN_001b4230(lVar2,local_68);
                  lVar6 = *(long *)(param_1 + 0x100);
                }
              }
              puVar14 = (uint *)(lVar6 + (ulong)(uVar25 >> 5) * 4);
              uVar10 = 1 << (ulong)(uVar25 & 0x1f);
              if ((*puVar14 & uVar10) == 0) {
                lVar6 = *(long *)(param_1 + 0x58);
                uVar22 = *(uint *)(lVar6 + uVar26 * 0x2c);
                uVar19 = uVar22 >> 6;
                if (uVar19 != 0x3ffffff) {
                  do {
                    FUN_001162e0(param_1,uVar22);
                    uVar22 = *(uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar19 * 0x20 + 8);
                    uVar19 = uVar22 >> 6;
                  } while (uVar19 != 0x3ffffff);
                  lVar6 = *(long *)(param_1 + 0x58);
                  puVar14 = (uint *)(*(long *)(param_1 + 0x100) + (ulong)(uVar25 >> 5) * 4);
                }
                *puVar14 = *puVar14 | uVar10;
                uVar10 = *(uint *)(param_1 + 0x128);
                *(uint *)(lVar6 + uVar26 * 0x2c + 0x10) = uVar10;
                if (uVar10 < (*(uint *)(param_1 + 300) & 0x7fffffff)) {
                  *(uint *)(*(long *)(param_1 + 0x120) + (ulong)uVar10 * 4) = uVar25;
                  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
                  local_68[0] = uVar25;
                }
                else {
                  local_68[0] = uVar25;
                  FUN_001b4230(lVar2,local_68);
                }
              }
            }
            uVar23 = FUN_00118150(param_1,uVar23,uVar26,uVar7,uVar24);
            uVar23 = uVar23 & 0xffffffff;
LAB_00117c5c:
            uVar22 = (uint)uVar23;
            goto joined_r0x00117d00;
          }
          lVar8 = *(long *)(param_1 + 0x18);
          if ((int)uVar12 == 0x3ffffff) {
            lVar8 = lVar8 + uVar9 * 0x20;
            *(short *)(lVar8 + 6) = *(short *)(lVar8 + 6) + 1;
            *(int *)(*(long *)(param_1 + 0x68) + uVar23 * 4) =
                 *(int *)(*(long *)(param_1 + 0x68) + uVar23 * 4) + 1;
          }
          else {
            lVar15 = lVar8 + uVar12 * 0x20;
            if ((*(byte *)(lVar15 + 4) >> 2 & 1) == 0) {
              lVar11 = *(long *)(param_1 + 0x58);
              lVar16 = lVar11 + uVar23 * 0x2c;
              *(uint *)(lVar8 + (ulong)(*(uint *)(lVar16 + 4) >> 6) * 0x20 + 8) = uVar24;
              *(undefined4 *)(lVar15 + 0xc) = *(undefined4 *)(lVar16 + 4);
              *(uint *)(lVar16 + 4) = uVar24;
              lVar16 = lVar16 + (ulong)*(byte *)(lVar15 + 5) * 4;
              *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
              lVar8 = uVar12 * 4;
              *(uint *)(*(long *)(param_1 + 0xf0) + lVar8) = uVar22;
              *(int *)(*(long *)(param_1 + 0xd0) + lVar8) =
                   *(int *)(*(long *)(param_1 + 0xd0) + uVar9 * 4) + 1;
              *(uint *)(*(long *)(param_1 + 0xe0) + lVar8) = uVar7;
              if ((bVar18 | bVar13) == 1) {
                puVar14 = (uint *)(*(long *)(param_1 + 0x100) + (ulong)(uVar22 >> 5) * 4);
                uVar7 = 1 << (ulong)(uVar22 & 0x1f);
                if ((*puVar14 & uVar7) == 0) {
                  uVar10 = *(uint *)(lVar11 + uVar23 * 0x2c);
                  uVar25 = uVar10 >> 6;
                  if (uVar25 != 0x3ffffff) {
                    do {
                      FUN_001162e0(param_1,uVar10);
                      uVar10 = *(uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar25 * 0x20 + 8);
                      uVar25 = uVar10 >> 6;
                    } while (uVar25 != 0x3ffffff);
                    lVar11 = *(long *)(param_1 + 0x58);
                    puVar14 = (uint *)(*(long *)(param_1 + 0x100) + (ulong)(uVar22 >> 5) * 4);
                  }
                  *puVar14 = *puVar14 | uVar7;
                  uVar7 = *(uint *)(param_1 + 0x128);
                  *(uint *)(lVar11 + uVar23 * 0x2c + 0x10) = uVar7;
                  if (uVar7 < (*(uint *)(param_1 + 300) & 0x7fffffff)) {
                    *(uint *)(*(long *)(param_1 + 0x120) + (ulong)uVar7 * 4) = uVar22;
                    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
                    local_68[0] = uVar22;
                  }
                  else {
                    local_68[0] = uVar22;
                    FUN_001b4230(lVar2,local_68);
                  }
                }
                if (bVar18 != 0) goto LAB_00117c5c;
                FUN_001162e0(param_1,uVar24);
                goto joined_r0x00117d00;
              }
            }
            else if (bVar18 == 0 && bVar13 == 1) {
              lVar6 = *(long *)(param_1 + 0x58);
              uVar7 = *(uint *)(lVar6 + uVar23 * 0x2c);
              uVar24 = uVar7 >> 6;
              if (uVar24 != 0x3ffffff) {
                do {
                  FUN_001162e0(param_1,uVar7);
                  uVar7 = *(uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar24 * 0x20 + 8);
                  uVar24 = uVar7 >> 6;
                } while (uVar24 != 0x3ffffff);
                lVar6 = *(long *)(param_1 + 0x58);
              }
              lVar8 = (ulong)(uVar22 >> 5) * 4;
              *(uint *)(*(long *)(param_1 + 0x100) + lVar8) =
                   *(uint *)(*(long *)(param_1 + 0x100) + lVar8) | 1 << (ulong)(uVar22 & 0x1f);
              uVar7 = *(uint *)(param_1 + 0x128);
              *(uint *)(lVar6 + uVar23 * 0x2c + 0x10) = uVar7;
              if (uVar7 < (*(uint *)(param_1 + 300) & 0x7fffffff)) {
                lVar6 = *(long *)(param_1 + 0x120);
                uVar26 = uVar23;
                local_68[0] = uVar22;
                goto LAB_00117b2c;
              }
              local_68[0] = uVar22;
              FUN_001b4230(lVar2,local_68);
              goto joined_r0x00117d00;
            }
          }
        }
        lVar8 = *(long *)(param_1 + 0x58);
        uVar9 = (ulong)*(uint *)(lVar6 + uVar21 * 0x10);
        puVar14 = (uint *)(lVar8 + uVar23 * 0x2c + uVar9 * 4 + 0x1c);
        if (*puVar14 == 0xffffffff) {
          *(uint *)(lVar8 + uVar23 * 0x2c + uVar9 * 4 + 0x14) = uVar4;
          uVar7 = 0xffffffff;
        }
        else {
          *(uint *)(lVar6 + (ulong)*puVar14 * 0x10 + 8) = uVar4;
          uVar7 = *puVar14;
        }
        *(uint *)(lVar6 + uVar21 * 0x10 + 0xc) = uVar7;
        lVar6 = lVar8 + uVar23 * 0x2c + uVar9 * 4;
        *puVar14 = uVar4;
        *(int *)(lVar6 + 0x24) = *(int *)(lVar6 + 0x24) + 1;
        uVar17 = uVar17 + 1;
      } while (uVar17 < *(uint *)(lVar3 + 0x160));
    }
LAB_00118114:
    lVar5 = lVar5 + 1;
    if (lVar5 == 2) {
      return;
    }
  } while( true );
}


