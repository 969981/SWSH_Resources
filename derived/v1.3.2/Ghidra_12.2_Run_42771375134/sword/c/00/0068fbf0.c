/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0068fbf0; name: FUN_0068fbf0
 */


void FUN_0068fbf0(long *param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  short sVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined1 uVar14;
  byte *pbVar15;
  ulong uVar16;
  ushort *puVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  
  if (*(int *)((long)param_1 + 0xb4) < 1) {
    uVar16 = param_3 + 5;
    iVar9 = 0;
    uVar7 = uVar16;
    if (param_2 != 0) goto LAB_0068ff50;
LAB_00690124:
    uVar18 = *(uint *)((long)param_1 + 0x1724);
    if ((uVar16 == uVar7) || ((int)param_1[0x17] == 4)) {
      uVar20 = param_4 + 2U & 0xffff;
      uVar11 = (uint)*(ushort *)(param_1 + 0x2e4) | uVar20 << (ulong)(uVar18 & 0x1f);
      *(short *)(param_1 + 0x2e4) = (short)uVar11;
      if ((int)uVar18 < 0xe) {
        iVar9 = uVar18 + 3;
      }
      else {
        uVar18 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar18 + 1;
        *(char *)(param_1[2] + (ulong)uVar18) = (char)uVar11;
        uVar18 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar18 + 1;
        *(undefined1 *)(param_1[2] + (ulong)uVar18) = *(undefined1 *)((long)param_1 + 0x1721);
        *(short *)(param_1 + 0x2e4) =
             (short)(uVar20 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1724) & 0x1f));
        iVar9 = *(int *)((long)param_1 + 0x1724) + -0xd;
      }
      *(int *)((long)param_1 + 0x1724) = iVar9;
      FUN_00690e50(param_1,&DAT_0213da78,&DAT_0213def8);
      FUN_0068f640(param_1);
    }
    else {
      uVar20 = param_4 + 4U & 0xffff;
      uVar11 = (uint)*(ushort *)(param_1 + 0x2e4) | uVar20 << (ulong)(uVar18 & 0x1f);
      *(short *)(param_1 + 0x2e4) = (short)uVar11;
      if ((int)uVar18 < 0xe) {
        uVar18 = uVar18 + 3;
      }
      else {
        uVar18 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar18 + 1;
        *(char *)(param_1[2] + (ulong)uVar18) = (char)uVar11;
        uVar18 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar18 + 1;
        *(undefined1 *)(param_1[2] + (ulong)uVar18) = *(undefined1 *)((long)param_1 + 0x1721);
        uVar11 = uVar20 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1724) & 0x1f);
        uVar18 = *(int *)((long)param_1 + 0x1724) - 0xd;
        *(short *)(param_1 + 0x2e4) = (short)uVar11;
      }
      uVar1 = *(uint *)(param_1 + 0x16d);
      uVar20 = (int)param_1[0x16a] + 0xff00U & 0xffff;
      uVar11 = uVar11 | uVar20 << (ulong)(uVar18 & 0x1f);
      *(uint *)((long)param_1 + 0x1724) = uVar18;
      *(short *)(param_1 + 0x2e4) = (short)uVar11;
      if ((int)uVar18 < 0xc) {
        uVar18 = uVar18 + 5;
      }
      else {
        uVar18 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar18 + 1;
        *(char *)(param_1[2] + (ulong)uVar18) = (char)uVar11;
        uVar18 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar18 + 1;
        *(undefined1 *)(param_1[2] + (ulong)uVar18) = *(undefined1 *)((long)param_1 + 0x1721);
        uVar11 = uVar20 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1724) & 0x1f);
        *(short *)(param_1 + 0x2e4) = (short)uVar11;
        uVar18 = *(int *)((long)param_1 + 0x1724) - 0xb;
      }
      uVar20 = uVar1 & 0xffff;
      uVar11 = uVar11 | uVar20 << (ulong)(uVar18 & 0x1f);
      *(uint *)((long)param_1 + 0x1724) = uVar18;
      *(short *)(param_1 + 0x2e4) = (short)uVar11;
      if ((int)uVar18 < 0xc) {
        uVar18 = uVar18 + 5;
      }
      else {
        uVar18 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar18 + 1;
        *(char *)(param_1[2] + (ulong)uVar18) = (char)uVar11;
        uVar18 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar18 + 1;
        *(undefined1 *)(param_1[2] + (ulong)uVar18) = *(undefined1 *)((long)param_1 + 0x1721);
        uVar11 = uVar20 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1724) & 0x1f);
        *(short *)(param_1 + 0x2e4) = (short)uVar11;
        uVar18 = *(int *)((long)param_1 + 0x1724) - 0xb;
      }
      uVar20 = iVar9 + 0xfffdU & 0xffff;
      uVar11 = uVar11 | uVar20 << (ulong)(uVar18 & 0x1f);
      *(uint *)((long)param_1 + 0x1724) = uVar18;
      *(short *)(param_1 + 0x2e4) = (short)uVar11;
      if ((int)uVar18 < 0xd) {
        uVar18 = uVar18 + 4;
      }
      else {
        uVar18 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar18 + 1;
        *(char *)(param_1[2] + (ulong)uVar18) = (char)uVar11;
        uVar18 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar18 + 1;
        *(undefined1 *)(param_1[2] + (ulong)uVar18) = *(undefined1 *)((long)param_1 + 0x1721);
        uVar11 = uVar20 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1724) & 0x1f);
        *(short *)(param_1 + 0x2e4) = (short)uVar11;
        uVar18 = *(int *)((long)param_1 + 0x1724) - 0xc;
      }
      uVar16 = (ulong)(iVar9 + 1);
      pbVar15 = &DAT_0213e0a8;
      *(uint *)((long)param_1 + 0x1724) = uVar18;
      do {
        while( true ) {
          uVar2 = *(ushort *)((long)param_1 + (ulong)*pbVar15 * 4 + 0xaae);
          uVar11 = uVar11 | (uint)uVar2 << (ulong)(uVar18 & 0x1f);
          *(short *)(param_1 + 0x2e4) = (short)uVar11;
          if ((int)uVar18 < 0xe) break;
          uVar18 = *(uint *)(param_1 + 5);
          *(uint *)(param_1 + 5) = uVar18 + 1;
          *(char *)(param_1[2] + (ulong)uVar18) = (char)uVar11;
          uVar18 = *(uint *)(param_1 + 5);
          *(uint *)(param_1 + 5) = uVar18 + 1;
          *(undefined1 *)(param_1[2] + (ulong)uVar18) = *(undefined1 *)((long)param_1 + 0x1721);
          uVar18 = *(int *)((long)param_1 + 0x1724) - 0xd;
          uVar2 = uVar2 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1724) & 0x1f);
          uVar11 = (uint)uVar2;
          *(ushort *)(param_1 + 0x2e4) = uVar2;
          uVar16 = uVar16 - 1;
          pbVar15 = pbVar15 + 1;
          *(uint *)((long)param_1 + 0x1724) = uVar18;
          if (uVar16 == 0) goto LAB_00690448;
        }
        uVar18 = uVar18 + 3;
        uVar16 = uVar16 - 1;
        pbVar15 = pbVar15 + 1;
        *(uint *)((long)param_1 + 0x1724) = uVar18;
      } while (uVar16 != 0);
LAB_00690448:
      FUN_00691240(param_1,(long)param_1 + 0xc4);
      FUN_00691240(param_1,param_1 + 0x137,uVar1);
      FUN_00690e50(param_1,(long)param_1 + 0xc4,param_1 + 0x137);
      FUN_0068f640(param_1);
    }
  }
  else {
    if (*(int *)(*param_1 + 0x58) == 2) {
      if (((((((((*(short *)((long)param_1 + 0xc4) == 0) && ((short)param_1[0x19] == 0)) &&
               (*(short *)((long)param_1 + 0xcc) == 0)) &&
              (((short)param_1[0x1a] == 0 && (*(short *)((long)param_1 + 0xd4) == 0)))) &&
             ((short)param_1[0x1b] == 0)) &&
            (((*(short *)((long)param_1 + 0xdc) == 0 && (*(short *)((long)param_1 + 0xfc) == 0)) &&
             (((short)param_1[0x20] == 0 &&
              (((*(short *)((long)param_1 + 0x104) == 0 && ((short)param_1[0x21] == 0)) &&
               (*(short *)((long)param_1 + 0x10c) == 0)))))))) &&
           (((short)param_1[0x22] == 0 && (*(short *)((long)param_1 + 0x114) == 0)))) &&
          (((short)param_1[0x23] == 0 &&
           (((*(short *)((long)param_1 + 0x11c) == 0 && ((short)param_1[0x24] == 0)) &&
            ((*(short *)((long)param_1 + 0x124) == 0 &&
             ((((short)param_1[0x25] == 0 && (*(short *)((long)param_1 + 0x134) == 0)) &&
              ((short)param_1[0x27] == 0)))))))))) &&
         ((*(short *)((long)param_1 + 0x13c) == 0 && ((short)param_1[0x28] == 0)))) {
        if (((short)param_1[0x1d] == 0) &&
           ((*(short *)((long)param_1 + 0xec) == 0 && ((short)param_1[0x1f] == 0)))) {
          plVar6 = param_1 + 0x29;
          uVar16 = 0x20;
          do {
            if ((*(short *)((long)plVar6 + -4) != 0) || ((short)*plVar6 != 0)) goto LAB_006904a4;
            uVar16 = uVar16 + 2;
            plVar6 = plVar6 + 1;
          } while (uVar16 < 0x100);
          uVar12 = 0;
        }
        else {
LAB_006904a4:
          uVar12 = 1;
        }
      }
      else {
        uVar12 = 0;
      }
      *(undefined4 *)(*param_1 + 0x58) = uVar12;
    }
    FUN_006904e0(param_1,param_1 + 0x169);
    FUN_006904e0(param_1,param_1 + 0x16c);
    lVar4 = param_1[0x16a];
    uVar2 = *(ushort *)((long)param_1 + 0xc6);
    uVar18 = (int)lVar4 + 1;
    *(undefined2 *)((long)param_1 + (long)(int)uVar18 * 4 + 0xc6) = 0xffff;
    if (-1 < (int)lVar4) {
      iVar9 = 3;
      if (uVar2 != 0) {
        iVar9 = 4;
      }
      iVar13 = 0x8a;
      if (uVar2 != 0) {
        iVar13 = 7;
      }
      uVar16 = (ulong)uVar18;
      puVar17 = (ushort *)((long)param_1 + 0xca);
      uVar7 = 0xffffffff;
      iVar10 = 0;
      do {
        uVar19 = (ulong)uVar2;
        uVar3 = *puVar17;
        iVar8 = iVar10 + 1;
        uVar18 = (uint)uVar2;
        uVar20 = (uint)uVar3;
        if ((iVar13 <= iVar8) || (uVar18 != uVar20)) {
          if (iVar8 < iVar9) {
            sVar5 = *(short *)((long)param_1 + uVar19 * 4 + 0xaac) + (short)iVar8;
            plVar6 = (long *)((long)param_1 + uVar19 * 4 + 0xaac);
          }
          else if (uVar18 == 0) {
            if (iVar10 < 10) {
              sVar5 = (short)param_1[0x15e] + 1;
              plVar6 = param_1 + 0x15e;
            }
            else {
              sVar5 = *(short *)((long)param_1 + 0xaf4) + 1;
              plVar6 = (long *)((long)param_1 + 0xaf4);
            }
          }
          else {
            if (uVar18 != (uint)uVar7) {
              *(short *)((long)param_1 + uVar19 * 4 + 0xaac) =
                   *(short *)((long)param_1 + uVar19 * 4 + 0xaac) + 1;
            }
            sVar5 = *(short *)((long)param_1 + 0xaec) + 1;
            plVar6 = (long *)((long)param_1 + 0xaec);
          }
          *(short *)plVar6 = sVar5;
          iVar9 = 6;
          if (uVar18 != uVar20) {
            iVar9 = 7;
          }
          iVar10 = 3;
          if (uVar18 != uVar20) {
            iVar10 = 4;
          }
          iVar8 = 0;
          iVar13 = 0x8a;
          if (uVar20 != 0) {
            iVar13 = iVar9;
          }
          iVar9 = 3;
          if (uVar20 != 0) {
            iVar9 = iVar10;
          }
          uVar7 = uVar19;
        }
        uVar16 = uVar16 - 1;
        puVar17 = puVar17 + 2;
        iVar10 = iVar8;
        uVar2 = uVar3;
      } while (uVar16 != 0);
    }
    lVar4 = param_1[0x16d];
    uVar2 = *(ushort *)((long)param_1 + 0x9ba);
    uVar18 = (int)lVar4 + 1;
    *(undefined2 *)((long)param_1 + (long)(int)uVar18 * 4 + 0x9ba) = 0xffff;
    if (-1 < (int)lVar4) {
      iVar9 = 3;
      if (uVar2 != 0) {
        iVar9 = 4;
      }
      iVar13 = 0x8a;
      if (uVar2 != 0) {
        iVar13 = 7;
      }
      uVar16 = (ulong)uVar18;
      puVar17 = (ushort *)((long)param_1 + 0x9be);
      uVar7 = 0xffffffff;
      iVar10 = 0;
      do {
        uVar19 = (ulong)uVar2;
        uVar3 = *puVar17;
        iVar8 = iVar10 + 1;
        uVar18 = (uint)uVar2;
        uVar20 = (uint)uVar3;
        if ((iVar13 <= iVar8) || (uVar18 != uVar20)) {
          if (iVar8 < iVar9) {
            sVar5 = *(short *)((long)param_1 + uVar19 * 4 + 0xaac) + (short)iVar8;
            plVar6 = (long *)((long)param_1 + uVar19 * 4 + 0xaac);
          }
          else if (uVar18 == 0) {
            if (iVar10 < 10) {
              sVar5 = (short)param_1[0x15e] + 1;
              plVar6 = param_1 + 0x15e;
            }
            else {
              sVar5 = *(short *)((long)param_1 + 0xaf4) + 1;
              plVar6 = (long *)((long)param_1 + 0xaf4);
            }
          }
          else {
            if (uVar18 != (uint)uVar7) {
              *(short *)((long)param_1 + uVar19 * 4 + 0xaac) =
                   *(short *)((long)param_1 + uVar19 * 4 + 0xaac) + 1;
            }
            sVar5 = *(short *)((long)param_1 + 0xaec) + 1;
            plVar6 = (long *)((long)param_1 + 0xaec);
          }
          *(short *)plVar6 = sVar5;
          iVar9 = 6;
          if (uVar18 != uVar20) {
            iVar9 = 7;
          }
          iVar10 = 3;
          if (uVar18 != uVar20) {
            iVar10 = 4;
          }
          iVar8 = 0;
          iVar13 = 0x8a;
          if (uVar20 != 0) {
            iVar13 = iVar9;
          }
          iVar9 = 3;
          if (uVar20 != 0) {
            iVar9 = iVar10;
          }
          uVar7 = uVar19;
        }
        uVar16 = uVar16 - 1;
        puVar17 = puVar17 + 2;
        iVar10 = iVar8;
        uVar2 = uVar3;
      } while (uVar16 != 0);
    }
    FUN_006904e0(param_1,param_1 + 0x16f);
    if (*(short *)((long)param_1 + 0xaea) == 0) {
      if (*(short *)((long)param_1 + 0xab2) == 0) {
        if (*(short *)((long)param_1 + 0xae6) == 0) {
          if (*(short *)((long)param_1 + 0xab6) == 0) {
            if (*(short *)((long)param_1 + 0xae2) == 0) {
              if (*(short *)((long)param_1 + 0xaba) == 0) {
                if (*(short *)((long)param_1 + 0xade) == 0) {
                  if (*(short *)((long)param_1 + 0xabe) == 0) {
                    if (*(short *)((long)param_1 + 0xada) == 0) {
                      if (*(short *)((long)param_1 + 0xac2) == 0) {
                        if (*(short *)((long)param_1 + 0xad6) == 0) {
                          if (*(short *)((long)param_1 + 0xac6) == 0) {
                            if (*(short *)((long)param_1 + 0xad2) == 0) {
                              if (*(short *)((long)param_1 + 0xaca) == 0) {
                                if (*(short *)((long)param_1 + 0xace) == 0) {
                                  iVar9 = 2;
                                  if (*(short *)((long)param_1 + 0xaae) != 0) {
                                    iVar9 = 3;
                                  }
                                }
                                else {
                                  iVar9 = 4;
                                }
                              }
                              else {
                                iVar9 = 5;
                              }
                            }
                            else {
                              iVar9 = 6;
                            }
                          }
                          else {
                            iVar9 = 7;
                          }
                        }
                        else {
                          iVar9 = 8;
                        }
                      }
                      else {
                        iVar9 = 9;
                      }
                    }
                    else {
                      iVar9 = 10;
                    }
                  }
                  else {
                    iVar9 = 0xb;
                  }
                }
                else {
                  iVar9 = 0xc;
                }
              }
              else {
                iVar9 = 0xd;
              }
            }
            else {
              iVar9 = 0xe;
            }
          }
          else {
            iVar9 = 0xf;
          }
        }
        else {
          iVar9 = 0x10;
        }
      }
      else {
        iVar9 = 0x11;
      }
    }
    else {
      iVar9 = 0x12;
    }
    lVar4 = param_1[0x2e1] + (ulong)(iVar9 * 3 + 0x11);
    param_1[0x2e1] = lVar4;
    uVar7 = lVar4 + 10U >> 3;
    uVar16 = param_1[0x2e2] + 10U >> 3;
    if (uVar16 <= uVar7) {
      uVar7 = uVar16;
    }
    if (param_2 == 0) goto LAB_00690124;
LAB_0068ff50:
    if (uVar7 < param_3 + 4U) goto LAB_00690124;
    FUN_0068f740(param_1,param_2,param_3,param_4);
    FUN_0068f640(param_1);
  }
  if (param_4 == 0) {
    return;
  }
  if (*(int *)((long)param_1 + 0x1724) < 9) {
    if (*(int *)((long)param_1 + 0x1724) < 1) goto LAB_0068ffe4;
    uVar14 = (undefined1)param_1[0x2e4];
  }
  else {
    uVar18 = *(uint *)(param_1 + 5);
    *(uint *)(param_1 + 5) = uVar18 + 1;
    *(char *)(param_1[2] + (ulong)uVar18) = (char)param_1[0x2e4];
    uVar14 = *(undefined1 *)((long)param_1 + 0x1721);
  }
  uVar18 = *(uint *)(param_1 + 5);
  *(uint *)(param_1 + 5) = uVar18 + 1;
  *(undefined1 *)(param_1[2] + (ulong)uVar18) = uVar14;
LAB_0068ffe4:
  *(undefined2 *)(param_1 + 0x2e4) = 0;
  *(undefined4 *)((long)param_1 + 0x1724) = 0;
  return;
}


