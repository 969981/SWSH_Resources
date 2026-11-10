/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005099f0; name: FUN_005099f0
 */


/* WARNING: Type propagation algorithm not settling */

char FUN_005099f0(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5,
                 long *param_6,uint param_7)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  ushort *puVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  undefined4 *__s;
  int iVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  char cVar24;
  long lVar25;
  uint auStack_140 [2];
  ulong local_138;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long *local_100;
  long local_f8;
  
  iVar12 = 1 << (ulong)(param_7 & 0x1f);
  *(short *)(param_1 + 3) = (short)iVar12 + -1;
  uVar14 = (uint)*(ushort *)(param_5 + 10);
  uVar22 = (iVar12 + uVar14 * 2) - 2;
  __s = (undefined4 *)
        ((long)auStack_140 -
        ((-(ulong)(uVar22 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar22 << 2) + 0xf &
        0xfffffffffffffff0));
  lVar18 = (long)iVar12;
  local_108 = (long)__s - (lVar18 + 0xfU & 0xfffffffffffffff0);
  local_138 = (ulong)*(ushort *)(param_5 + 8);
  local_118 = lVar18;
  local_100 = param_1;
  local_f8 = param_5;
  if (1 < local_138) {
                    /* WARNING: Subroutine does not return */
    memset(__s,0,lVar18 << 2);
  }
  *__s = 0x80000000;
  uVar22 = 3 << (ulong)(param_7 & 0x1f);
  iVar10 = 0;
  if ((param_4 & 0xff) != 2) {
    iVar10 = -uVar14;
  }
  *(char *)((long)param_1 + 0x1b) = (char)param_4;
  local_120 = FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,
                           (uVar22 - iVar12) + uVar14 * param_4 + iVar10);
  *param_1 = local_120;
  if (local_120 == 0) {
    cVar24 = '\x02';
  }
  else {
    lVar18 = local_120 + lVar18 * 2;
    param_1[1] = lVar18;
    if (param_7 != 0x1f) {
      lVar25 = 0;
      local_f8 = CONCAT44(local_f8._4_4_,param_4);
      do {
        *(undefined1 *)(lVar18 + lVar25) = *(undefined1 *)(local_108 + lVar25);
        local_110 = lVar25;
        iVar12 = __s[lVar25];
        if (iVar12 < 0) {
          cVar24 = '\0';
          *(ushort *)(local_120 + lVar25 * 2) = (ushort)iVar12 | 0x8000;
        }
        else {
          uVar14 = uVar22;
          if ((int)uVar22 < 0) {
            uVar14 = uVar22 + 1;
          }
          *(short *)(local_120 + lVar25 * 2) = (short)(uVar14 >> 1);
          lVar18 = *param_1;
          if ((int)param_6[1] < 2) {
            puVar6 = (ushort *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x100);
            if (puVar6 != (ushort *)0x0) {
              if (*param_6 != 0) {
                FUN_00404870(*(undefined4 *)PTR_DAT_02712e28);
              }
              *(undefined4 *)(param_6 + 1) = 0x100;
              *param_6 = (long)puVar6;
              goto LAB_0050a444;
            }
            lVar18 = *param_1;
joined_r0x0050a92c:
            cVar24 = '\x02';
            goto joined_r0x0050a92c;
          }
          puVar6 = (ushort *)*param_6;
LAB_0050a444:
          *puVar6 = (ushort)iVar12;
          uVar14 = __s[iVar12];
          uVar23 = (__s + iVar12)[1];
          if ((int)param_6[3] < 1) {
            lVar25 = FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x100);
            if (lVar25 == 0) {
              lVar18 = *local_100;
              param_1 = local_100;
              goto joined_r0x0050a92c;
            }
            if (param_6[2] != 0) {
              FUN_00404870(*(undefined4 *)PTR_DAT_02712e28);
            }
            *(undefined4 *)(param_6 + 3) = 0x100;
            param_6[2] = lVar25;
          }
          uVar21 = 1;
          iVar12 = (uVar23 >> 0x1f ^ 1) + (uVar14 >> 0x1f ^ 1);
          iVar10 = (int)param_6[5];
          uVar14 = 1;
          do {
            iVar11 = iVar12 * 2;
            iVar19 = (int)uVar21;
            uVar23 = uVar22;
            if (iVar10 < iVar11) {
              if (iVar11 < 0x101) {
                iVar11 = 0x100;
              }
              lVar25 = FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,iVar11);
              if (lVar25 == 0) {
                cVar24 = '\x02';
              }
              else {
                if (param_6[4] != 0) {
                  FUN_00404870(*(undefined4 *)PTR_DAT_02712e28);
                }
                cVar24 = '\0';
                *(int *)(param_6 + 5) = iVar11;
                param_6[4] = lVar25;
              }
              param_4 = (uint)local_f8;
              if (iVar12 * 4 <= (int)param_6[7]) goto joined_r0x0050a538;
LAB_0050a7f4:
              iVar12 = iVar12 * 4;
              if (iVar12 < 0x101) {
                iVar12 = 0x100;
              }
              lVar25 = FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,iVar12);
              if (lVar25 != 0) {
                if (param_6[6] != 0) {
                  FUN_00404870(*(undefined4 *)PTR_DAT_02712e28);
                }
                *(int *)(param_6 + 7) = iVar12;
                param_6[6] = lVar25;
                param_4 = (uint)local_f8;
                goto joined_r0x0050a538;
              }
              iVar12 = 0;
              uVar9 = uVar22 + iVar19 * 2;
              cVar24 = '\x02';
              uVar21 = 0;
              param_4 = (uint)local_f8;
            }
            else {
              cVar24 = '\0';
              if ((int)param_6[7] < iVar12 * 4) goto LAB_0050a7f4;
joined_r0x0050a538:
              uVar9 = uVar22 + iVar19 * 2;
              if ((iVar19 < 1) || (cVar24 != '\0')) {
                iVar12 = 0;
                uVar21 = 0;
              }
              else {
                lVar13 = 0;
                iVar12 = 0;
                iVar10 = -uVar22;
                lVar15 = lVar18 + (int)uVar22;
                lVar25 = 1;
                uVar21 = 0;
                do {
                  piVar2 = __s + *(short *)(*param_6 + lVar13);
                  iVar11 = (int)lVar13;
                  iVar20 = (int)uVar21;
                  sVar5 = (short)lVar13;
                  sVar4 = (short)uVar22;
                  if (uVar14 < 2) {
                    cVar24 = false;
                    iVar17 = *piVar2;
                    iVar16 = piVar2[1];
                    if (iVar17 < 0) goto LAB_0050a660;
LAB_0050a5ac:
                    if (iVar16 < 0) {
                      *(short *)(param_6[6] + (long)iVar20 * 2) = sVar4 + sVar5;
                      if (param_4 == 1) {
                        *(byte *)(lVar15 + lVar13 + 1) = (byte)iVar16 | 0x80;
                      }
                      else {
                        uVar23 = uVar9 + iVar10;
                        if ((int)uVar23 < 0) {
                          uVar23 = uVar23 + 1;
                        }
                        *(byte *)(lVar15 + lVar13 + 1) = (byte)(uVar23 >> 1) | 0x80;
                        *(short *)(lVar18 + (int)uVar9) = (short)iVar16;
                        uVar9 = uVar9 + 2;
                      }
                      lVar7 = (long)iVar20 * 2;
                      *(short *)(param_6[4] + lVar7) = (short)iVar17;
                      *piVar2 = 0;
LAB_0050a744:
                      iVar12 = ((uint)__s[*(short *)(param_6[4] + lVar7)] >> 0x1f ^ 1) + iVar12 +
                               ((uint)(__s + *(short *)(param_6[4] + lVar7))[1] >> 0x1f ^ 1);
                      uVar21 = (ulong)(iVar20 + 1);
                    }
                    else {
                      uVar8 = -(uVar21 >> 0x1f) & 0xfffffffe00000000 | uVar21 << 1;
                      uVar21 = (ulong)(iVar20 + 2);
                      *(short *)(param_6[4] + uVar8) = (short)iVar17;
                      lVar7 = uVar8 + 2;
                      *(short *)(param_6[4] + lVar7) = (short)iVar16;
                      *(short *)(param_6[6] + uVar8) = sVar4 + sVar5;
                      *(short *)(param_6[6] + lVar7) = sVar4 + sVar5 + 1;
                      piVar2[0] = 0;
                      piVar2[1] = 0;
                      iVar12 = ((uint)__s[*(short *)(param_6[4] + uVar8)] >> 0x1f ^ 1) + iVar12 +
                               ((uint)(__s + *(short *)(param_6[4] + uVar8))[1] >> 0x1f ^ 1) +
                               ((uint)__s[*(short *)(param_6[4] + lVar7)] >> 0x1f ^ 1) +
                               ((uint)(__s + *(short *)(param_6[4] + lVar7))[1] >> 0x1f ^ 1);
                    }
                  }
                  else {
                    uVar3 = (uVar22 + iVar11) - ((int)*(short *)(param_6[2] + lVar13) & 0xfffffffeU)
                    ;
                    uVar23 = uVar3;
                    if ((int)uVar3 < 0) {
                      uVar23 = uVar3 + 1;
                    }
                    cVar24 = 0xff < (int)uVar3;
                    *(char *)(lVar18 + *(short *)(param_6[2] + lVar13)) = (char)(uVar23 >> 1);
                    iVar17 = *piVar2;
                    iVar16 = piVar2[1];
                    if (-1 < iVar17) goto LAB_0050a5ac;
LAB_0050a660:
                    if (-1 < iVar16) {
                      *(short *)(param_6[6] + (long)iVar20 * 2) = sVar4 + sVar5 + 1;
                      if (param_4 == 1) {
                        *(byte *)(lVar15 + lVar13) = (byte)iVar17 | 0x80;
                      }
                      else {
                        uVar23 = uVar9 + iVar10;
                        if ((int)uVar23 < 0) {
                          uVar23 = uVar23 + 1;
                        }
                        *(byte *)(lVar15 + lVar13) = (byte)(uVar23 >> 1) | 0x80;
                        *(short *)(lVar18 + (int)uVar9) = (short)iVar17;
                        uVar9 = uVar9 + 2;
                      }
                      lVar7 = (long)iVar20 * 2;
                      *(short *)(param_6[4] + lVar7) = (short)iVar16;
                      piVar2[1] = 0;
                      goto LAB_0050a744;
                    }
                    if (param_4 == 1) {
                      *(byte *)(lVar15 + lVar13) = (byte)iVar17 | 0x80;
                      ((byte *)(lVar15 + lVar13))[1] = (byte)iVar16 | 0x80;
                    }
                    else {
                      uVar1 = uVar9 + iVar10;
                      uVar23 = uVar1 + 2;
                      uVar3 = uVar1 + 3;
                      if ((int)uVar1 < 0) {
                        uVar1 = uVar1 + 1;
                      }
                      if (-1 < (int)uVar23) {
                        uVar3 = uVar23;
                      }
                      *(byte *)(lVar15 + lVar13) = (byte)(uVar1 >> 1) | 0x80;
                      ((byte *)(lVar15 + lVar13))[1] = (byte)(uVar3 >> 1) | 0x80;
                      *(undefined2 *)(lVar18 + (int)uVar9) = (short)iVar17;
                      ((undefined2 *)(lVar18 + (int)uVar9))[1] = (short)iVar16;
                      uVar9 = uVar9 + 4;
                    }
                  }
                  if (iVar19 <= lVar25) break;
                  lVar13 = lVar13 + 2;
                  iVar10 = iVar10 + -2;
                  lVar25 = lVar25 + 1;
                } while ((bool)cVar24 == false);
                uVar23 = uVar22 + iVar11 + 2;
              }
            }
            lVar25 = param_6[4];
            param_6[4] = *param_6;
            *param_6 = lVar25;
            iVar10 = (int)param_6[1];
            *(int *)(param_6 + 1) = (int)param_6[5];
            lVar15 = param_6[2];
            param_6[2] = param_6[6];
            lVar25 = param_6[3];
            uVar22 = uVar9;
            if (param_4 != 2) {
              uVar22 = uVar23;
            }
            *(int *)(param_6 + 3) = (int)param_6[7];
            *(int *)(param_6 + 5) = iVar10;
            param_6[6] = lVar15;
            *(int *)(param_6 + 7) = (int)lVar25;
          } while ((cVar24 == '\0') && (uVar14 = uVar14 + 1, (int)uVar21 != 0));
        }
        lVar25 = local_110 + 1;
        param_1 = local_100;
        if ((local_118 <= lVar25) || (cVar24 != '\0')) {
          if (cVar24 == '\0') {
            return '\0';
          }
          lVar18 = *local_100;
joined_r0x0050a92c:
          if (lVar18 == 0) {
            return cVar24;
          }
          FUN_00404870(*(undefined4 *)PTR_DAT_02712e28);
          *param_1 = 0;
          return cVar24;
        }
        lVar18 = local_100[1];
      } while( true );
    }
    cVar24 = '\0';
  }
  return cVar24;
}


