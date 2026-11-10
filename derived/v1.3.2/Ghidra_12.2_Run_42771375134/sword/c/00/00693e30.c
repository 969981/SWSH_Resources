/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00693e30; name: FUN_00693e30
 */


/* WARNING: Removing unreachable block (ram,0x00693e6c) */

undefined8
FUN_00693e30(int param_1,long param_2,uint param_3,long *param_4,uint *param_5,undefined *param_6)

{
  undefined1 *puVar1;
  ushort *puVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  undefined *puVar6;
  byte bVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  ushort uVar24;
  uint uVar25;
  undefined1 uVar26;
  uint uVar27;
  int iVar28;
  ulong uVar29;
  ushort auStack_90 [5];
  short local_86;
  short local_84;
  short local_82;
  short local_80;
  short local_7e;
  short local_7c;
  short local_7a;
  short local_78;
  short local_76;
  short local_74;
  short local_72;
  ushort local_70 [16];
  
  local_70[8] = 0;
  local_70[9] = 0;
  local_70[10] = 0;
  local_70[0xb] = 0;
  local_70[0xc] = 0;
  local_70[0xd] = 0;
  local_70[0xe] = 0;
  local_70[0xf] = 0;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  local_70[4] = 0;
  local_70[5] = 0;
  local_70[6] = 0;
  local_70[7] = 0;
  if (param_3 == 0) {
    uVar15 = *param_5;
LAB_00693eec:
    if (local_70[0xe] == 0) {
      if (local_70[0xd] == 0) {
        if (local_70[0xc] == 0) {
          if (local_70[0xb] == 0) {
            if (local_70[10] == 0) {
              if (local_70[9] == 0) {
                if (local_70[8] == 0) {
                  if (local_70[7] == 0) {
                    if (local_70[6] == 0) {
                      if (local_70[5] == 0) {
                        if (local_70[4] == 0) {
                          if (local_70[3] == 0) {
                            if (local_70[2] == 0) {
                              if (local_70[1] == 0) {
                                puVar14 = (undefined4 *)*param_4;
                                *param_4 = (long)(puVar14 + 1);
                                *puVar14 = 0x140;
                                puVar14 = (undefined4 *)*param_4;
                                *param_4 = (long)(puVar14 + 1);
                                *puVar14 = 0x140;
                                *param_5 = 1;
                                return 0;
                              }
                              uVar9 = 0;
                              uVar12 = 1;
                              uVar16 = (uint)(uVar15 != 0);
                              uVar18 = 1;
                              goto LAB_00694010;
                            }
                            uVar9 = 0;
                            uVar12 = 2;
                          }
                          else {
                            uVar9 = 0;
                            uVar12 = 3;
                          }
                        }
                        else {
                          uVar9 = 0;
                          uVar12 = 4;
                        }
                      }
                      else {
                        uVar9 = 0;
                        uVar12 = 5;
                      }
                    }
                    else {
                      uVar9 = 0;
                      uVar12 = 6;
                    }
                  }
                  else {
                    uVar9 = 0;
                    uVar12 = 7;
                  }
                }
                else {
                  uVar9 = 0;
                  uVar12 = 8;
                }
              }
              else {
                uVar9 = 0;
                uVar12 = 9;
              }
            }
            else {
              uVar9 = 0;
              uVar12 = 10;
            }
          }
          else {
            uVar9 = 0;
            uVar12 = 0xb;
          }
        }
        else {
          uVar9 = 0;
          uVar12 = 0xc;
        }
      }
      else {
        uVar9 = 0;
        uVar12 = 0xd;
      }
    }
    else {
      uVar9 = 0;
      uVar12 = 0xe;
    }
  }
  else {
    if (param_3 == 1) {
      lVar13 = 0;
LAB_00693ec0:
      uVar24 = *(ushort *)(param_2 + lVar13 * 2);
      local_70[uVar24] = local_70[uVar24] + 1;
    }
    else {
      lVar13 = 0;
      do {
        puVar2 = (ushort *)(param_2 + lVar13 * 2);
        lVar13 = lVar13 + 2;
        uVar24 = *puVar2;
        local_70[uVar24] = local_70[uVar24] + 1;
        uVar24 = puVar2[1];
        local_70[uVar24] = local_70[uVar24] + 1;
      } while ((ulong)param_3 - ((ulong)param_3 & 1) != lVar13);
      if ((param_3 & 1) != 0) goto LAB_00693ec0;
    }
    uVar9 = (uint)local_70[0xf];
    uVar15 = *param_5;
    if (local_70[0xf] == 0) goto LAB_00693eec;
    uVar12 = 0xf;
  }
  uVar16 = uVar12;
  if (uVar15 <= uVar12) {
    uVar16 = uVar15;
  }
  uVar18 = 1;
  do {
    if (local_70[uVar18] != 0) break;
    uVar18 = uVar18 + 1;
  } while ((uint)uVar18 < uVar12);
LAB_00694010:
  uVar15 = (uint)uVar18;
  if ((uint)uVar18 <= uVar16) {
    uVar15 = uVar16;
  }
  if (-1 < (int)(2 - (uint)local_70[1])) {
    iVar21 = (2 - (uint)local_70[1]) * 2 - (uint)local_70[2];
    if (-1 < iVar21) {
      iVar21 = iVar21 * 2 - (uint)local_70[3];
      if (-1 < iVar21) {
        iVar21 = iVar21 * 2 - (uint)local_70[4];
        if (-1 < iVar21) {
          iVar21 = iVar21 * 2 - (uint)local_70[5];
          if (-1 < iVar21) {
            iVar21 = iVar21 * 2 - (uint)local_70[6];
            if (-1 < iVar21) {
              iVar21 = iVar21 * 2 - (uint)local_70[7];
              if (-1 < iVar21) {
                iVar21 = iVar21 * 2 - (uint)local_70[8];
                if (-1 < iVar21) {
                  iVar21 = iVar21 * 2 - (uint)local_70[9];
                  if (-1 < iVar21) {
                    iVar21 = iVar21 * 2 - (uint)local_70[10];
                    if (-1 < iVar21) {
                      iVar21 = iVar21 * 2 - (uint)local_70[0xb];
                      if (-1 < iVar21) {
                        iVar21 = iVar21 * 2 - (uint)local_70[0xc];
                        if (-1 < iVar21) {
                          iVar21 = iVar21 * 2 - (uint)local_70[0xd];
                          if (-1 < iVar21) {
                            iVar21 = iVar21 * 2 - (uint)local_70[0xe];
                            if ((-1 < iVar21) && (uVar16 = iVar21 * 2, -1 < (int)(uVar16 - uVar9)))
                            {
                              if (uVar16 != uVar9) {
                                if (param_1 == 0) {
                                  return 0xffffffff;
                                }
                                if (uVar12 != 1) {
                                  return 0xffffffff;
                                }
                              }
                              auStack_90[3] = local_70[2] + local_70[1];
                              auStack_90[4] = local_70[3] + local_70[2] + local_70[1];
                              local_86 = local_70[4] + auStack_90[4];
                              local_84 = local_70[5] + local_86;
                              local_82 = local_70[6] + local_84;
                              local_80 = local_70[7] + local_82;
                              local_7e = local_70[8] + local_80;
                              local_7c = local_70[9] + local_7e;
                              local_7a = local_70[10] + local_7c;
                              local_78 = local_70[0xb] + local_7a;
                              local_76 = local_70[0xc] + local_78;
                              local_74 = local_70[0xd] + local_76;
                              auStack_90[1] = 0;
                              auStack_90[2] = local_70[1];
                              local_72 = local_70[0xe] + local_74;
                              if (param_3 != 0) {
                                uVar11 = 0;
                                do {
                                  uVar20 = (ulong)*(ushort *)(param_2 + uVar11 * 2);
                                  if (uVar20 != 0) {
                                    uVar24 = auStack_90[uVar20];
                                    auStack_90[uVar20] = uVar24 + 1;
                                    *(short *)(param_6 + (ulong)uVar24 * 2) = (short)uVar11;
                                  }
                                  uVar11 = uVar11 + 1;
                                } while (param_3 != uVar11);
                              }
                              if (param_1 == 0) {
                                bVar4 = false;
                                bVar7 = 0;
                                iVar21 = 0x13;
                                puVar6 = param_6;
                                puVar8 = param_6;
                              }
                              else if (param_1 == 1) {
                                if (9 < uVar15) {
                                  return 1;
                                }
                                bVar4 = false;
                                iVar21 = 0x100;
                                bVar7 = 1;
                                puVar6 = &DAT_0213e906;
                                puVar8 = &DAT_0213e8c8;
                              }
                              else {
                                bVar4 = param_1 == 2;
                                bVar7 = 0;
                                iVar21 = -1;
                                puVar6 = &UNK_0213eb86;
                                puVar8 = &UNK_0213eb46;
                                if ((bVar4) && (9 < uVar15)) {
                                  return 1;
                                }
                              }
                              lVar13 = *param_4;
                              uVar9 = 1 << (ulong)(uVar15 & 0x1f);
                              uVar20 = 0;
                              uVar16 = 0;
                              uVar3 = uVar9 - 1;
                              uVar11 = 0xffffffff;
                              uVar25 = uVar15;
                              uVar19 = 0;
                              do {
                                uVar23 = (ulong)(uint)(1 << (ulong)(uVar25 & 0x1f));
                                do {
                                  uVar24 = *(ushort *)(param_6 + uVar20 * 2);
                                  uVar17 = (uint)uVar18;
                                  uVar25 = uVar17 - uVar19;
                                  if ((int)(uint)uVar24 < iVar21) {
                                    uVar26 = 0;
                                  }
                                  else if (iVar21 < (int)(uint)uVar24) {
                                    uVar26 = puVar6[(ulong)uVar24 * 2];
                                    uVar24 = *(ushort *)(puVar8 + (ulong)uVar24 * 2);
                                  }
                                  else {
                                    uVar24 = 0;
                                    uVar26 = 0x60;
                                  }
                                  iVar10 = 1 << (ulong)(uVar25 & 0x1f);
                                  uVar29 = uVar23;
                                  do {
                                    iVar28 = (int)uVar29;
                                    uVar5 = iVar28 - iVar10;
                                    uVar29 = (ulong)uVar5;
                                    puVar1 = (undefined1 *)
                                             (lVar13 + (ulong)(((uVar16 >> (ulong)(uVar19 & 0x1f)) -
                                                               iVar10) + iVar28) * 4);
                                    *puVar1 = uVar26;
                                    puVar1[1] = (char)uVar25;
                                    *(ushort *)(puVar1 + 2) = uVar24;
                                  } while (uVar5 != 0);
                                  uVar5 = 1 << (ulong)(uVar17 - 1 & 0x1f);
                                  do {
                                    uVar27 = uVar5;
                                    uVar5 = uVar27 >> 1;
                                  } while ((uVar27 & uVar16) != 0);
                                  uVar5 = uVar27 - 1 & uVar16;
                                  uVar24 = local_70[uVar18 & 0xffffffff];
                                  uVar16 = 0;
                                  if (uVar27 != 0) {
                                    uVar16 = uVar5 + uVar27;
                                  }
                                  uVar20 = (ulong)((int)uVar20 + 1);
                                  local_70[uVar18 & 0xffffffff] = uVar24 - 1;
                                  if ((ushort)(uVar24 - 1) == 0) {
                                    if (uVar17 == uVar12) goto joined_r0x0069441c;
                                    uVar18 = (ulong)*(ushort *)
                                                     (param_2 +
                                                     (ulong)*(ushort *)(param_6 + uVar20 * 2) * 2);
                                  }
                                  uVar17 = (uint)uVar18;
                                } while ((uVar17 <= uVar15) ||
                                        (uVar5 = uVar16 & uVar3, uVar5 == (uint)uVar11));
                                uVar27 = uVar15;
                                if (uVar19 != 0) {
                                  uVar27 = uVar19;
                                }
                                uVar25 = uVar17 - uVar27;
                                iVar10 = 1 << (ulong)(uVar25 & 0x1f);
                                if (uVar17 < uVar12) {
                                  uVar11 = uVar18 & 0xffffffff;
                                  do {
                                    puVar2 = local_70 + uVar11;
                                    if ((int)(iVar10 - (uint)*puVar2) < 1) break;
                                    uVar11 = uVar11 + 1;
                                    iVar10 = (iVar10 - (uint)*puVar2) * 2;
                                  } while ((uint)uVar11 < uVar12);
                                  uVar25 = (int)uVar11 - uVar27;
                                  iVar10 = 1 << (ulong)(uVar25 & 0x1f);
                                }
                                uVar9 = iVar10 + uVar9;
                                if ((bool)(bVar7 & 0x353 < uVar9)) {
                                  return 1;
                                }
                                if ((bool)(bVar4 & 0x24f < uVar9)) {
                                  return 1;
                                }
                                lVar13 = lVar13 + uVar23 * 4;
                                lVar22 = (ulong)uVar5 * 4;
                                *(char *)(*param_4 + lVar22) = (char)uVar25;
                                *(char *)(*param_4 + lVar22 + 1) = (char)uVar15;
                                *(short *)(*param_4 + lVar22 + 2) =
                                     (short)((uint)((int)lVar13 - (int)*param_4) >> 2);
                                uVar11 = (ulong)uVar5;
                                uVar19 = uVar27;
                              } while( true );
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0xffffffff;
joined_r0x0069441c:
  if (uVar16 == 0) {
LAB_00694488:
    *param_4 = *param_4 + (ulong)uVar9 * 4;
    *param_5 = uVar15;
    return 0;
  }
  if ((uVar19 != 0) && ((uVar16 & uVar3) != (uint)uVar11)) {
    lVar13 = *param_4;
    uVar19 = 0;
    uVar12 = uVar15;
    uVar25 = uVar15;
  }
  puVar1 = (undefined1 *)(lVar13 + (ulong)(uVar16 >> (ulong)(uVar19 & 0x1f)) * 4);
  *puVar1 = 0x40;
  puVar1[1] = (char)uVar25;
  *(undefined2 *)(puVar1 + 2) = 0;
  uVar17 = 1 << (ulong)(uVar12 - 1 & 0x1f);
  do {
    uVar5 = uVar17;
    uVar17 = uVar5 >> 1;
  } while ((uVar5 & uVar16) != 0);
  if (uVar5 == 0) goto LAB_00694488;
  uVar16 = (uVar5 - 1 & uVar16) + uVar5;
  goto joined_r0x0069441c;
}


