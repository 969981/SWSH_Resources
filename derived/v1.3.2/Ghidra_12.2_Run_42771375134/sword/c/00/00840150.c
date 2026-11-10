/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00840150; name: FUN_00840150
 */


byte * FUN_00840150(ulong *param_1,undefined8 param_2,uint param_3,byte *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  long lVar17;
  long *plVar18;
  
  iVar7 = (int)param_2;
  if (*(char *)((long)param_1 + 9) != '\0') {
    if (*(char *)((long)param_1 + 0xb) == '\0') {
      switch((char)param_1[1]) {
      case '\x01':
        goto switchD_00840284_caseD_1;
      case '\x02':
        piVar9 = (int *)*param_1;
        if (*piVar9 < 1) {
          return param_4;
        }
        uVar6 = iVar7 << 3 | 5;
        if (uVar6 < 0x80) {
          lVar17 = 0;
          do {
            lVar10 = lVar17 * 4;
            lVar17 = lVar17 + 1;
            uVar1 = *(undefined4 *)(*(long *)(piVar9 + 2) + lVar10 + 8);
            *param_4 = (byte)uVar6;
            *(undefined4 *)(param_4 + 1) = uVar1;
            piVar9 = (int *)*param_1;
            param_4 = param_4 + 5;
          } while (lVar17 < *piVar9);
          return param_4;
        }
        lVar17 = 0;
        do {
          uVar1 = *(undefined4 *)(*(long *)(piVar9 + 2) + lVar17 * 4 + 8);
          param_4 = param_4 + 5;
          uVar5 = uVar6;
          do {
            pbVar15 = param_4;
            uVar14 = uVar5 >> 7;
            pbVar15[-5] = (byte)uVar5 | 0x80;
            param_4 = pbVar15 + 1;
            uVar12 = uVar5 >> 0xe;
            uVar5 = uVar14;
          } while (uVar12 != 0);
          pbVar15[-4] = (byte)uVar14;
          *(undefined4 *)(pbVar15 + -3) = uVar1;
          piVar9 = (int *)*param_1;
          lVar17 = lVar17 + 1;
        } while (lVar17 < *piVar9);
        return param_4;
      case '\x03':
        piVar9 = (int *)*param_1;
        if (*piVar9 < 1) {
          return param_4;
        }
        uVar6 = iVar7 * 8;
        if (uVar6 < 0x80) {
          lVar17 = 0;
          do {
            uVar13 = *(undefined8 *)(*(long *)(piVar9 + 2) + lVar17 * 8 + 8);
            *param_4 = (byte)uVar6;
            param_4 = (byte *)FUN_0080e320(uVar13,param_4 + 1);
            piVar9 = (int *)*param_1;
            lVar17 = lVar17 + 1;
          } while (lVar17 < *piVar9);
          return param_4;
        }
        lVar17 = 0;
        do {
          uVar13 = *(undefined8 *)(*(long *)(piVar9 + 2) + lVar17 * 8 + 8);
          uVar5 = uVar6;
          do {
            pbVar15 = param_4 + 1;
            uVar14 = uVar5 >> 7;
            *param_4 = (byte)uVar5 | 0x80;
            uVar12 = uVar5 >> 0xe;
            uVar5 = uVar14;
            param_4 = pbVar15;
          } while (uVar12 != 0);
          *pbVar15 = (byte)uVar14;
          param_4 = (byte *)FUN_0080e320(uVar13);
          piVar9 = (int *)*param_1;
          lVar17 = lVar17 + 1;
        } while (lVar17 < *piVar9);
        return param_4;
      case '\x04':
        piVar9 = (int *)*param_1;
        if (*piVar9 < 1) {
          return param_4;
        }
        uVar6 = iVar7 * 8;
        if (uVar6 < 0x80) {
          lVar17 = 0;
          do {
            uVar13 = *(undefined8 *)(*(long *)(piVar9 + 2) + lVar17 * 8 + 8);
            *param_4 = (byte)uVar6;
            param_4 = (byte *)FUN_0080e320(uVar13,param_4 + 1);
            piVar9 = (int *)*param_1;
            lVar17 = lVar17 + 1;
          } while (lVar17 < *piVar9);
          return param_4;
        }
        lVar17 = 0;
        do {
          uVar13 = *(undefined8 *)(*(long *)(piVar9 + 2) + lVar17 * 8 + 8);
          uVar5 = uVar6;
          do {
            pbVar15 = param_4 + 1;
            uVar14 = uVar5 >> 7;
            *param_4 = (byte)uVar5 | 0x80;
            uVar12 = uVar5 >> 0xe;
            uVar5 = uVar14;
            param_4 = pbVar15;
          } while (uVar12 != 0);
          *pbVar15 = (byte)uVar14;
          param_4 = (byte *)FUN_0080e320(uVar13);
          piVar9 = (int *)*param_1;
          lVar17 = lVar17 + 1;
        } while (lVar17 < *piVar9);
        return param_4;
      case '\x05':
        piVar9 = (int *)*param_1;
        if (*piVar9 < 1) {
          return param_4;
        }
        uVar6 = iVar7 * 8;
        if (uVar6 < 0x80) {
          lVar17 = 0;
          do {
            uVar5 = *(uint *)(*(long *)(piVar9 + 2) + lVar17 * 4 + 8);
            pbVar15 = param_4 + 1;
            *param_4 = (byte)uVar6;
            if ((int)uVar5 < 0) {
              param_4 = (byte *)FUN_0080e320((long)(int)uVar5,pbVar15);
            }
            else {
              if (0x7f < uVar5) {
                pbVar16 = pbVar15;
                uVar14 = uVar5;
                do {
                  uVar5 = uVar14 >> 7;
                  uVar12 = uVar14 >> 0xe;
                  pbVar15 = pbVar16 + 1;
                  *pbVar16 = (byte)uVar14 | 0x80;
                  pbVar16 = pbVar15;
                  uVar14 = uVar5;
                } while (uVar12 != 0);
              }
              param_4 = pbVar15 + 1;
              *pbVar15 = (byte)uVar5;
            }
            piVar9 = (int *)*param_1;
            lVar17 = lVar17 + 1;
          } while (lVar17 < *piVar9);
          return param_4;
        }
        lVar17 = 0;
        do {
          uVar5 = *(uint *)(*(long *)(piVar9 + 2) + lVar17 * 4 + 8);
          pbVar15 = param_4 + 1;
          uVar14 = uVar6;
          do {
            pbVar16 = pbVar15;
            uVar12 = uVar14 >> 7;
            pbVar16[-1] = (byte)uVar14 | 0x80;
            pbVar15 = pbVar16 + 1;
            uVar3 = uVar14 >> 0xe;
            uVar14 = uVar12;
          } while (uVar3 != 0);
          *pbVar16 = (byte)uVar12;
          if ((int)uVar5 < 0) {
            param_4 = (byte *)FUN_0080e320((long)(int)uVar5,pbVar15);
          }
          else {
            if (0x7f < uVar5) {
              pbVar16 = pbVar15;
              uVar14 = uVar5;
              do {
                uVar5 = uVar14 >> 7;
                uVar12 = uVar14 >> 0xe;
                pbVar15 = pbVar16 + 1;
                *pbVar16 = (byte)uVar14 | 0x80;
                pbVar16 = pbVar15;
                uVar14 = uVar5;
              } while (uVar12 != 0);
            }
            param_4 = pbVar15 + 1;
            *pbVar15 = (byte)uVar5;
          }
          piVar9 = (int *)*param_1;
          lVar17 = lVar17 + 1;
        } while (lVar17 < *piVar9);
        return param_4;
      case '\x06':
        piVar9 = (int *)*param_1;
        if (*piVar9 < 1) {
          return param_4;
        }
        uVar6 = iVar7 << 3 | 1;
        if (uVar6 < 0x80) {
          lVar17 = 0;
          do {
            lVar10 = lVar17 * 8;
            lVar17 = lVar17 + 1;
            uVar13 = *(undefined8 *)(*(long *)(piVar9 + 2) + lVar10 + 8);
            *param_4 = (byte)uVar6;
            *(undefined8 *)(param_4 + 1) = uVar13;
            piVar9 = (int *)*param_1;
            param_4 = param_4 + 9;
          } while (lVar17 < *piVar9);
          return param_4;
        }
        lVar17 = 0;
        do {
          uVar13 = *(undefined8 *)(*(long *)(piVar9 + 2) + lVar17 * 8 + 8);
          param_4 = param_4 + 9;
          uVar5 = uVar6;
          do {
            pbVar15 = param_4;
            uVar14 = uVar5 >> 7;
            pbVar15[-9] = (byte)uVar5 | 0x80;
            param_4 = pbVar15 + 1;
            uVar12 = uVar5 >> 0xe;
            uVar5 = uVar14;
          } while (uVar12 != 0);
          pbVar15[-8] = (byte)uVar14;
          *(undefined8 *)(pbVar15 + -7) = uVar13;
          piVar9 = (int *)*param_1;
          lVar17 = lVar17 + 1;
        } while (lVar17 < *piVar9);
        return param_4;
      case '\a':
        piVar9 = (int *)*param_1;
        if (*piVar9 < 1) {
          return param_4;
        }
        uVar6 = iVar7 << 3 | 5;
        if (uVar6 < 0x80) {
          lVar17 = 0;
          do {
            lVar10 = lVar17 * 4;
            lVar17 = lVar17 + 1;
            uVar1 = *(undefined4 *)(*(long *)(piVar9 + 2) + lVar10 + 8);
            *param_4 = (byte)uVar6;
            *(undefined4 *)(param_4 + 1) = uVar1;
            piVar9 = (int *)*param_1;
            param_4 = param_4 + 5;
          } while (lVar17 < *piVar9);
          return param_4;
        }
        lVar17 = 0;
        do {
          uVar1 = *(undefined4 *)(*(long *)(piVar9 + 2) + lVar17 * 4 + 8);
          param_4 = param_4 + 5;
          uVar5 = uVar6;
          do {
            pbVar15 = param_4;
            uVar14 = uVar5 >> 7;
            pbVar15[-5] = (byte)uVar5 | 0x80;
            param_4 = pbVar15 + 1;
            uVar12 = uVar5 >> 0xe;
            uVar5 = uVar14;
          } while (uVar12 != 0);
          pbVar15[-4] = (byte)uVar14;
          *(undefined4 *)(pbVar15 + -3) = uVar1;
          piVar9 = (int *)*param_1;
          lVar17 = lVar17 + 1;
        } while (lVar17 < *piVar9);
        return param_4;
      case '\b':
        piVar9 = (int *)*param_1;
        if (*piVar9 < 1) {
          return param_4;
        }
        uVar6 = iVar7 * 8;
        if (uVar6 < 0x80) {
          lVar17 = 8;
          do {
            bVar2 = *(byte *)(*(long *)(piVar9 + 2) + lVar17);
            *param_4 = (byte)uVar6;
            param_4[1] = bVar2;
            piVar9 = (int *)*param_1;
            lVar10 = lVar17 + -7;
            param_4 = param_4 + 2;
            lVar17 = lVar17 + 1;
          } while (lVar10 < *piVar9);
          return param_4;
        }
        lVar17 = 0;
        do {
          bVar2 = *(byte *)(*(long *)(piVar9 + 2) + lVar17 + 8);
          param_4 = param_4 + 2;
          uVar5 = uVar6;
          do {
            pbVar15 = param_4;
            uVar14 = uVar5 >> 7;
            pbVar15[-2] = (byte)uVar5 | 0x80;
            param_4 = pbVar15 + 1;
            uVar12 = uVar5 >> 0xe;
            uVar5 = uVar14;
          } while (uVar12 != 0);
          pbVar15[-1] = (byte)uVar14;
          *pbVar15 = bVar2;
          piVar9 = (int *)*param_1;
          lVar17 = lVar17 + 1;
        } while (lVar17 < *piVar9);
        return param_4;
      case '\t':
        uVar8 = *param_1;
        if (*(int *)(uVar8 + 8) < 1) {
          return param_4;
        }
        uVar6 = iVar7 << 3 | 2;
        if (uVar6 < 0x80) {
          lVar17 = 0;
          do {
            uVar13 = *(undefined8 *)(*(long *)(uVar8 + 0x10) + lVar17 * 8 + 8);
            *param_4 = (byte)uVar6;
            param_4 = (byte *)FUN_0080e510(uVar13,param_4 + 1);
            uVar8 = *param_1;
            lVar17 = lVar17 + 1;
          } while (lVar17 < *(int *)(uVar8 + 8));
          return param_4;
        }
        lVar17 = 0;
        do {
          uVar13 = *(undefined8 *)(*(long *)(uVar8 + 0x10) + lVar17 * 8 + 8);
          uVar5 = uVar6;
          do {
            pbVar15 = param_4 + 1;
            uVar14 = uVar5 >> 7;
            *param_4 = (byte)uVar5 | 0x80;
            uVar12 = uVar5 >> 0xe;
            uVar5 = uVar14;
            param_4 = pbVar15;
          } while (uVar12 != 0);
          *pbVar15 = (byte)uVar14;
          param_4 = (byte *)FUN_0080e510(uVar13);
          uVar8 = *param_1;
          lVar17 = lVar17 + 1;
        } while (lVar17 < *(int *)(uVar8 + 8));
        return param_4;
      case '\n':
        uVar8 = *param_1;
        if (*(int *)(uVar8 + 8) < 1) {
          return param_4;
        }
        uVar6 = iVar7 << 3 | 3;
        uVar5 = iVar7 << 3 | 4;
        if (uVar6 < 0x80) {
          lVar17 = 0;
          do {
            plVar18 = *(long **)(*(long *)(uVar8 + 0x10) + lVar17 * 8 + 8);
            *param_4 = (byte)uVar6;
            pbVar15 = (byte *)(**(code **)(*plVar18 + 0x80))(plVar18,param_3 & 1,param_4 + 1);
            uVar14 = uVar5;
            if (0x7f < uVar5) {
              pbVar16 = pbVar15;
              uVar12 = uVar5;
              do {
                uVar14 = uVar12 >> 7;
                uVar3 = uVar12 >> 0xe;
                pbVar15 = pbVar16 + 1;
                *pbVar16 = (byte)uVar12 | 0x80;
                pbVar16 = pbVar15;
                uVar12 = uVar14;
              } while (uVar3 != 0);
            }
            param_4 = pbVar15 + 1;
            *pbVar15 = (byte)uVar14;
            uVar8 = *param_1;
            lVar17 = lVar17 + 1;
          } while (lVar17 < *(int *)(uVar8 + 8));
          return param_4;
        }
        lVar17 = 0;
        do {
          plVar18 = *(long **)(*(long *)(uVar8 + 0x10) + lVar17 * 8 + 8);
          uVar14 = uVar6;
          do {
            pbVar15 = param_4 + 1;
            uVar12 = uVar14 >> 7;
            *param_4 = (byte)uVar14 | 0x80;
            uVar3 = uVar14 >> 0xe;
            uVar14 = uVar12;
            param_4 = pbVar15;
          } while (uVar3 != 0);
          *pbVar15 = (byte)uVar12;
          pbVar15 = (byte *)(**(code **)(*plVar18 + 0x80))(plVar18,param_3 & 1);
          uVar14 = uVar5;
          if (0x7f < uVar5) {
            pbVar16 = pbVar15;
            uVar12 = uVar5;
            do {
              uVar14 = uVar12 >> 7;
              uVar3 = uVar12 >> 0xe;
              pbVar15 = pbVar16 + 1;
              *pbVar16 = (byte)uVar12 | 0x80;
              pbVar16 = pbVar15;
              uVar12 = uVar14;
            } while (uVar3 != 0);
          }
          param_4 = pbVar15 + 1;
          *pbVar15 = (byte)uVar14;
          uVar8 = *param_1;
          lVar17 = lVar17 + 1;
        } while (lVar17 < *(int *)(uVar8 + 8));
        return param_4;
      case '\v':
        uVar8 = *param_1;
        if (*(int *)(uVar8 + 8) < 1) {
          return param_4;
        }
        uVar6 = iVar7 << 3 | 2;
        if (uVar6 < 0x80) {
          lVar17 = 0;
          do {
            plVar18 = *(long **)(*(long *)(uVar8 + 0x10) + lVar17 * 8 + 8);
            pbVar15 = param_4 + 1;
            *param_4 = (byte)uVar6;
            uVar8 = (**(code **)(*plVar18 + 0x78))(plVar18);
            uVar5 = (uint)uVar8;
            if (0x7f < uVar5) {
              uVar11 = uVar8 & 0xffffffff;
              pbVar16 = pbVar15;
              do {
                bVar2 = (byte)uVar8;
                uVar8 = uVar11 >> 7;
                uVar5 = (uint)uVar8;
                uVar4 = uVar11 >> 0xe;
                pbVar15 = pbVar16 + 1;
                *pbVar16 = bVar2 | 0x80;
                uVar11 = uVar8;
                pbVar16 = pbVar15;
              } while (uVar4 != 0);
            }
            *pbVar15 = (byte)uVar5;
            param_4 = (byte *)(**(code **)(*plVar18 + 0x80))(plVar18,param_3 & 1,pbVar15 + 1);
            uVar8 = *param_1;
            lVar17 = lVar17 + 1;
          } while (lVar17 < *(int *)(uVar8 + 8));
          return param_4;
        }
        lVar17 = 0;
        do {
          plVar18 = *(long **)(*(long *)(uVar8 + 0x10) + lVar17 * 8 + 8);
          pbVar15 = param_4 + 1;
          uVar5 = uVar6;
          do {
            pbVar16 = pbVar15;
            uVar14 = uVar5 >> 7;
            pbVar16[-1] = (byte)uVar5 | 0x80;
            pbVar15 = pbVar16 + 1;
            uVar12 = uVar5 >> 0xe;
            uVar5 = uVar14;
          } while (uVar12 != 0);
          *pbVar16 = (byte)uVar14;
          uVar8 = (**(code **)(*plVar18 + 0x78))(plVar18);
          uVar5 = (uint)uVar8;
          if (0x7f < uVar5) {
            uVar11 = uVar8 & 0xffffffff;
            pbVar16 = pbVar15;
            do {
              bVar2 = (byte)uVar8;
              uVar8 = uVar11 >> 7;
              uVar5 = (uint)uVar8;
              uVar4 = uVar11 >> 0xe;
              pbVar15 = pbVar16 + 1;
              *pbVar16 = bVar2 | 0x80;
              uVar11 = uVar8;
              pbVar16 = pbVar15;
            } while (uVar4 != 0);
          }
          *pbVar15 = (byte)uVar5;
          param_4 = (byte *)(**(code **)(*plVar18 + 0x80))(plVar18,param_3 & 1,pbVar15 + 1);
          uVar8 = *param_1;
          lVar17 = lVar17 + 1;
        } while (lVar17 < *(int *)(uVar8 + 8));
        return param_4;
      case '\f':
        uVar8 = *param_1;
        if (*(int *)(uVar8 + 8) < 1) {
          return param_4;
        }
        uVar6 = iVar7 << 3 | 2;
        if (uVar6 < 0x80) {
          lVar17 = 0;
          do {
            uVar13 = *(undefined8 *)(*(long *)(uVar8 + 0x10) + lVar17 * 8 + 8);
            *param_4 = (byte)uVar6;
            param_4 = (byte *)FUN_0080e510(uVar13,param_4 + 1);
            uVar8 = *param_1;
            lVar17 = lVar17 + 1;
          } while (lVar17 < *(int *)(uVar8 + 8));
          return param_4;
        }
        lVar17 = 0;
        do {
          uVar13 = *(undefined8 *)(*(long *)(uVar8 + 0x10) + lVar17 * 8 + 8);
          uVar5 = uVar6;
          do {
            pbVar15 = param_4 + 1;
            uVar14 = uVar5 >> 7;
            *param_4 = (byte)uVar5 | 0x80;
            uVar12 = uVar5 >> 0xe;
            uVar5 = uVar14;
            param_4 = pbVar15;
          } while (uVar12 != 0);
          *pbVar15 = (byte)uVar14;
          param_4 = (byte *)FUN_0080e510(uVar13);
          uVar8 = *param_1;
          lVar17 = lVar17 + 1;
        } while (lVar17 < *(int *)(uVar8 + 8));
        return param_4;
      case '\r':
        piVar9 = (int *)*param_1;
        if (*piVar9 < 1) {
          return param_4;
        }
        uVar6 = iVar7 * 8;
        if (uVar6 < 0x80) {
          lVar17 = 0;
          do {
            uVar5 = *(uint *)(*(long *)(piVar9 + 2) + lVar17 * 4 + 8);
            pbVar15 = param_4 + 1;
            *param_4 = (byte)uVar6;
            if (0x7f < uVar5) {
              pbVar16 = pbVar15;
              uVar14 = uVar5;
              do {
                uVar5 = uVar14 >> 7;
                uVar12 = uVar14 >> 0xe;
                pbVar15 = pbVar16 + 1;
                *pbVar16 = (byte)uVar14 | 0x80;
                pbVar16 = pbVar15;
                uVar14 = uVar5;
              } while (uVar12 != 0);
            }
            param_4 = pbVar15 + 1;
            *pbVar15 = (byte)uVar5;
            piVar9 = (int *)*param_1;
            lVar17 = lVar17 + 1;
          } while (lVar17 < *piVar9);
          return param_4;
        }
        lVar17 = 0;
        do {
          uVar5 = *(uint *)(*(long *)(piVar9 + 2) + lVar17 * 4 + 8);
          pbVar15 = param_4 + 1;
          uVar14 = uVar6;
          do {
            pbVar16 = pbVar15;
            uVar12 = uVar14 >> 7;
            pbVar16[-1] = (byte)uVar14 | 0x80;
            pbVar15 = pbVar16 + 1;
            uVar3 = uVar14 >> 0xe;
            uVar14 = uVar12;
          } while (uVar3 != 0);
          *pbVar16 = (byte)uVar12;
          if (0x7f < uVar5) {
            pbVar16 = pbVar15;
            uVar14 = uVar5;
            do {
              uVar5 = uVar14 >> 7;
              uVar12 = uVar14 >> 0xe;
              pbVar15 = pbVar16 + 1;
              *pbVar16 = (byte)uVar14 | 0x80;
              pbVar16 = pbVar15;
              uVar14 = uVar5;
            } while (uVar12 != 0);
          }
          param_4 = pbVar15 + 1;
          *pbVar15 = (byte)uVar5;
          piVar9 = (int *)*param_1;
          lVar17 = lVar17 + 1;
        } while (lVar17 < *piVar9);
        return param_4;
      case '\x0e':
        piVar9 = (int *)*param_1;
        if (*piVar9 < 1) {
          return param_4;
        }
        uVar6 = iVar7 * 8;
        if (uVar6 < 0x80) {
          lVar17 = 0;
          do {
            uVar5 = *(uint *)(*(long *)(piVar9 + 2) + lVar17 * 4 + 8);
            pbVar15 = param_4 + 1;
            *param_4 = (byte)uVar6;
            if ((int)uVar5 < 0) {
              param_4 = (byte *)FUN_0080e320((long)(int)uVar5,pbVar15);
            }
            else {
              if (0x7f < uVar5) {
                pbVar16 = pbVar15;
                uVar14 = uVar5;
                do {
                  uVar5 = uVar14 >> 7;
                  uVar12 = uVar14 >> 0xe;
                  pbVar15 = pbVar16 + 1;
                  *pbVar16 = (byte)uVar14 | 0x80;
                  pbVar16 = pbVar15;
                  uVar14 = uVar5;
                } while (uVar12 != 0);
              }
              param_4 = pbVar15 + 1;
              *pbVar15 = (byte)uVar5;
            }
            piVar9 = (int *)*param_1;
            lVar17 = lVar17 + 1;
          } while (lVar17 < *piVar9);
          return param_4;
        }
        lVar17 = 0;
        do {
          uVar5 = *(uint *)(*(long *)(piVar9 + 2) + lVar17 * 4 + 8);
          pbVar15 = param_4 + 1;
          uVar14 = uVar6;
          do {
            pbVar16 = pbVar15;
            uVar12 = uVar14 >> 7;
            pbVar16[-1] = (byte)uVar14 | 0x80;
            pbVar15 = pbVar16 + 1;
            uVar3 = uVar14 >> 0xe;
            uVar14 = uVar12;
          } while (uVar3 != 0);
          *pbVar16 = (byte)uVar12;
          if ((int)uVar5 < 0) {
            param_4 = (byte *)FUN_0080e320((long)(int)uVar5,pbVar15);
          }
          else {
            if (0x7f < uVar5) {
              pbVar16 = pbVar15;
              uVar14 = uVar5;
              do {
                uVar5 = uVar14 >> 7;
                uVar12 = uVar14 >> 0xe;
                pbVar15 = pbVar16 + 1;
                *pbVar16 = (byte)uVar14 | 0x80;
                pbVar16 = pbVar15;
                uVar14 = uVar5;
              } while (uVar12 != 0);
            }
            param_4 = pbVar15 + 1;
            *pbVar15 = (byte)uVar5;
          }
          piVar9 = (int *)*param_1;
          lVar17 = lVar17 + 1;
        } while (lVar17 < *piVar9);
        return param_4;
      case '\x0f':
        piVar9 = (int *)*param_1;
        if (*piVar9 < 1) {
          return param_4;
        }
        uVar6 = iVar7 << 3 | 5;
        if (uVar6 < 0x80) {
          lVar17 = 0;
          do {
            lVar10 = lVar17 * 4;
            lVar17 = lVar17 + 1;
            uVar1 = *(undefined4 *)(*(long *)(piVar9 + 2) + lVar10 + 8);
            *param_4 = (byte)uVar6;
            *(undefined4 *)(param_4 + 1) = uVar1;
            piVar9 = (int *)*param_1;
            param_4 = param_4 + 5;
          } while (lVar17 < *piVar9);
          return param_4;
        }
        lVar17 = 0;
        do {
          uVar1 = *(undefined4 *)(*(long *)(piVar9 + 2) + lVar17 * 4 + 8);
          param_4 = param_4 + 5;
          uVar5 = uVar6;
          do {
            pbVar15 = param_4;
            uVar14 = uVar5 >> 7;
            pbVar15[-5] = (byte)uVar5 | 0x80;
            param_4 = pbVar15 + 1;
            uVar12 = uVar5 >> 0xe;
            uVar5 = uVar14;
          } while (uVar12 != 0);
          pbVar15[-4] = (byte)uVar14;
          *(undefined4 *)(pbVar15 + -3) = uVar1;
          piVar9 = (int *)*param_1;
          lVar17 = lVar17 + 1;
        } while (lVar17 < *piVar9);
        return param_4;
      case '\x10':
        piVar9 = (int *)*param_1;
        if (*piVar9 < 1) {
          return param_4;
        }
        uVar6 = iVar7 << 3 | 1;
        if (uVar6 < 0x80) {
          lVar17 = 0;
          do {
            lVar10 = lVar17 * 8;
            lVar17 = lVar17 + 1;
            uVar13 = *(undefined8 *)(*(long *)(piVar9 + 2) + lVar10 + 8);
            *param_4 = (byte)uVar6;
            *(undefined8 *)(param_4 + 1) = uVar13;
            piVar9 = (int *)*param_1;
            param_4 = param_4 + 9;
          } while (lVar17 < *piVar9);
          return param_4;
        }
        lVar17 = 0;
        do {
          uVar13 = *(undefined8 *)(*(long *)(piVar9 + 2) + lVar17 * 8 + 8);
          param_4 = param_4 + 9;
          uVar5 = uVar6;
          do {
            pbVar15 = param_4;
            uVar14 = uVar5 >> 7;
            pbVar15[-9] = (byte)uVar5 | 0x80;
            param_4 = pbVar15 + 1;
            uVar12 = uVar5 >> 0xe;
            uVar5 = uVar14;
          } while (uVar12 != 0);
          pbVar15[-8] = (byte)uVar14;
          *(undefined8 *)(pbVar15 + -7) = uVar13;
          piVar9 = (int *)*param_1;
          lVar17 = lVar17 + 1;
        } while (lVar17 < *piVar9);
        return param_4;
      case '\x11':
        piVar9 = (int *)*param_1;
        if (*piVar9 < 1) {
          return param_4;
        }
        uVar6 = iVar7 * 8;
        if (uVar6 < 0x80) {
          lVar17 = 0;
          do {
            iVar7 = *(int *)(*(long *)(piVar9 + 2) + lVar17 * 4 + 8);
            pbVar15 = param_4 + 1;
            *param_4 = (byte)uVar6;
            uVar5 = iVar7 << 1 ^ iVar7 >> 0x1f;
            if (0x7f < uVar5) {
              pbVar16 = pbVar15;
              uVar14 = uVar5;
              do {
                uVar5 = uVar14 >> 7;
                uVar12 = uVar14 >> 0xe;
                pbVar15 = pbVar16 + 1;
                *pbVar16 = (byte)uVar14 | 0x80;
                pbVar16 = pbVar15;
                uVar14 = uVar5;
              } while (uVar12 != 0);
            }
            param_4 = pbVar15 + 1;
            *pbVar15 = (byte)uVar5;
            piVar9 = (int *)*param_1;
            lVar17 = lVar17 + 1;
          } while (lVar17 < *piVar9);
          return param_4;
        }
        lVar17 = 0;
        do {
          iVar7 = *(int *)(*(long *)(piVar9 + 2) + lVar17 * 4 + 8);
          pbVar15 = param_4 + 1;
          uVar5 = uVar6;
          do {
            pbVar16 = pbVar15;
            uVar14 = uVar5 >> 7;
            pbVar16[-1] = (byte)uVar5 | 0x80;
            pbVar15 = pbVar16 + 1;
            uVar12 = uVar5 >> 0xe;
            uVar5 = uVar14;
          } while (uVar12 != 0);
          *pbVar16 = (byte)uVar14;
          uVar5 = iVar7 << 1 ^ iVar7 >> 0x1f;
          if (0x7f < uVar5) {
            pbVar16 = pbVar15;
            uVar14 = uVar5;
            do {
              uVar5 = uVar14 >> 7;
              uVar12 = uVar14 >> 0xe;
              pbVar15 = pbVar16 + 1;
              *pbVar16 = (byte)uVar14 | 0x80;
              pbVar16 = pbVar15;
              uVar14 = uVar5;
            } while (uVar12 != 0);
          }
          param_4 = pbVar15 + 1;
          *pbVar15 = (byte)uVar5;
          piVar9 = (int *)*param_1;
          lVar17 = lVar17 + 1;
        } while (lVar17 < *piVar9);
        return param_4;
      case '\x12':
        piVar9 = (int *)*param_1;
        if (*piVar9 < 1) {
          return param_4;
        }
        uVar6 = iVar7 * 8;
        if (uVar6 < 0x80) {
          lVar17 = 0;
          do {
            lVar10 = *(long *)(*(long *)(piVar9 + 2) + lVar17 * 8 + 8);
            *param_4 = (byte)uVar6;
            param_4 = (byte *)FUN_0080e320(lVar10 << 1 ^ lVar10 >> 0x3f,param_4 + 1);
            piVar9 = (int *)*param_1;
            lVar17 = lVar17 + 1;
          } while (lVar17 < *piVar9);
          return param_4;
        }
        lVar17 = 0;
        do {
          lVar10 = *(long *)(*(long *)(piVar9 + 2) + lVar17 * 8 + 8);
          uVar5 = uVar6;
          do {
            pbVar15 = param_4 + 1;
            uVar14 = uVar5 >> 7;
            *param_4 = (byte)uVar5 | 0x80;
            uVar12 = uVar5 >> 0xe;
            uVar5 = uVar14;
            param_4 = pbVar15;
          } while (uVar12 != 0);
          *pbVar15 = (byte)uVar14;
          param_4 = (byte *)FUN_0080e320(lVar10 << 1 ^ lVar10 >> 0x3f);
          piVar9 = (int *)*param_1;
          lVar17 = lVar17 + 1;
        } while (lVar17 < *piVar9);
        return param_4;
      default:
        return param_4;
      }
    }
    if (*(uint *)((long)param_1 + 0xc) == 0) {
      return param_4;
    }
    uVar6 = iVar7 << 3 | 2;
    if (0x7f < uVar6) {
      pbVar15 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar14 = uVar5 >> 0xe;
        param_4 = pbVar15 + 1;
        *pbVar15 = (byte)uVar5 | 0x80;
        pbVar15 = param_4;
        uVar5 = uVar6;
      } while (uVar14 != 0);
    }
    pbVar15 = param_4 + 1;
    *param_4 = (byte)uVar6;
    uVar6 = *(uint *)((long)param_1 + 0xc);
    if ((int)uVar6 < 0) {
      pbVar16 = (byte *)FUN_0080e320((long)(int)uVar6,pbVar15);
      bVar2 = (byte)param_1[1];
    }
    else {
      if (0x7f < uVar6) {
        pbVar16 = pbVar15;
        uVar5 = uVar6;
        do {
          uVar6 = uVar5 >> 7;
          uVar14 = uVar5 >> 0xe;
          pbVar15 = pbVar16 + 1;
          *pbVar16 = (byte)uVar5 | 0x80;
          pbVar16 = pbVar15;
          uVar5 = uVar6;
        } while (uVar14 != 0);
      }
      pbVar16 = pbVar15 + 1;
      *pbVar15 = (byte)uVar6;
      bVar2 = (byte)param_1[1];
    }
    if (bVar2 - 1 < 0x12) {
                    /* WARNING: Could not recover jumptable at 0x00840330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pbVar15 = (byte *)(*(code *)(&DAT_02141cd8 + *(int *)(&DAT_02141cd8 + (ulong)(bVar2 - 1) * 4))
                        )();
      return pbVar15;
    }
    return pbVar16;
  }
  if ((*(byte *)((long)param_1 + 10) & 1) != 0) {
    return param_4;
  }
  switch((char)param_1[1]) {
  case '\x01':
    uVar8 = *param_1;
    uVar6 = iVar7 << 3 | 1;
    if (0x7f < uVar6) {
      pbVar15 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar14 = uVar5 >> 0xe;
        param_4 = pbVar15 + 1;
        *pbVar15 = (byte)uVar5 | 0x80;
        pbVar15 = param_4;
        uVar5 = uVar6;
      } while (uVar14 != 0);
    }
    break;
  case '\x02':
    uVar5 = (uint)*param_1;
    uVar6 = iVar7 << 3 | 5;
    if (0x7f < uVar6) {
      pbVar15 = param_4;
      uVar14 = uVar6;
      do {
        uVar6 = uVar14 >> 7;
        uVar12 = uVar14 >> 0xe;
        param_4 = pbVar15 + 1;
        *pbVar15 = (byte)uVar14 | 0x80;
        pbVar15 = param_4;
        uVar14 = uVar6;
      } while (uVar12 != 0);
    }
    goto LAB_00841438;
  case '\x03':
    uVar8 = *param_1;
    uVar6 = iVar7 << 3;
    if (0x7f < uVar6) {
      pbVar15 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar14 = uVar5 >> 0xe;
        param_4 = pbVar15 + 1;
        *pbVar15 = (byte)uVar5 | 0x80;
        pbVar15 = param_4;
        uVar5 = uVar6;
      } while (uVar14 != 0);
    }
    goto LAB_00841190;
  case '\x04':
    uVar8 = *param_1;
    uVar6 = iVar7 << 3;
    if (0x7f < uVar6) {
      pbVar15 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar14 = uVar5 >> 0xe;
        param_4 = pbVar15 + 1;
        *pbVar15 = (byte)uVar5 | 0x80;
        pbVar15 = param_4;
        uVar5 = uVar6;
      } while (uVar14 != 0);
    }
LAB_00841190:
    pbVar15 = param_4 + 1;
    *param_4 = (byte)uVar6;
LAB_00841630:
    pbVar15 = (byte *)FUN_0080e320(uVar8,pbVar15);
    return pbVar15;
  case '\x05':
    uVar6 = (uint)*param_1;
    uVar5 = iVar7 << 3;
    if (0x7f < uVar5) {
      pbVar15 = param_4;
      uVar14 = uVar5;
      do {
        uVar5 = uVar14 >> 7;
        uVar12 = uVar14 >> 0xe;
        param_4 = pbVar15 + 1;
        *pbVar15 = (byte)uVar14 | 0x80;
        pbVar15 = param_4;
        uVar14 = uVar5;
      } while (uVar12 != 0);
    }
    pbVar15 = param_4 + 1;
    *param_4 = (byte)uVar5;
    if (-1 < (int)uVar6) {
      if (0x7f < uVar6) {
        uVar8 = (ulong)uVar6;
        pbVar16 = pbVar15;
        do {
          uVar6 = (uint)(uVar8 >> 7);
          uVar11 = uVar8 >> 0xe;
          pbVar15 = pbVar16 + 1;
          *pbVar16 = (byte)uVar8 | 0x80;
          uVar8 = uVar8 >> 7;
          pbVar16 = pbVar15;
        } while (uVar11 != 0);
      }
LAB_00841400:
      *pbVar15 = (byte)uVar6;
      return pbVar15 + 1;
    }
    goto LAB_0084162c;
  case '\x06':
    uVar8 = *param_1;
    uVar6 = iVar7 << 3 | 1;
    if (0x7f < uVar6) {
      pbVar15 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar14 = uVar5 >> 0xe;
        param_4 = pbVar15 + 1;
        *pbVar15 = (byte)uVar5 | 0x80;
        pbVar15 = param_4;
        uVar5 = uVar6;
      } while (uVar14 != 0);
    }
    break;
  case '\a':
    uVar5 = (uint)*param_1;
    uVar6 = iVar7 << 3 | 5;
    if (0x7f < uVar6) {
      pbVar15 = param_4;
      uVar14 = uVar6;
      do {
        uVar6 = uVar14 >> 7;
        uVar12 = uVar14 >> 0xe;
        param_4 = pbVar15 + 1;
        *pbVar15 = (byte)uVar14 | 0x80;
        pbVar15 = param_4;
        uVar14 = uVar6;
      } while (uVar12 != 0);
    }
    goto LAB_00841438;
  case '\b':
    uVar8 = *param_1;
    uVar6 = iVar7 << 3;
    if (0x7f < uVar6) {
      pbVar15 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar14 = uVar5 >> 0xe;
        param_4 = pbVar15 + 1;
        *pbVar15 = (byte)uVar5 | 0x80;
        pbVar15 = param_4;
        uVar5 = uVar6;
      } while (uVar14 != 0);
    }
    *param_4 = (byte)uVar6;
    param_4[1] = (byte)uVar8;
    return param_4 + 2;
  case '\t':
    uVar8 = *param_1;
    uVar6 = iVar7 << 3 | 2;
    if (0x7f < uVar6) {
      pbVar15 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar14 = uVar5 >> 0xe;
        param_4 = pbVar15 + 1;
        *pbVar15 = (byte)uVar5 | 0x80;
        pbVar15 = param_4;
        uVar5 = uVar6;
      } while (uVar14 != 0);
    }
    goto LAB_00841570;
  case '\n':
    plVar18 = (long *)*param_1;
    uVar6 = iVar7 << 3 | 3;
    if (0x7f < uVar6) {
      pbVar15 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar14 = uVar5 >> 0xe;
        param_4 = pbVar15 + 1;
        *pbVar15 = (byte)uVar5 | 0x80;
        pbVar15 = param_4;
        uVar5 = uVar6;
      } while (uVar14 != 0);
    }
    *param_4 = (byte)uVar6;
    pbVar15 = (byte *)(**(code **)(*plVar18 + 0x80))(plVar18,0,param_4 + 1);
    uVar6 = iVar7 << 3 | 4;
    if (0x7f < uVar6) {
      pbVar16 = pbVar15;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar14 = uVar5 >> 0xe;
        pbVar15 = pbVar16 + 1;
        *pbVar16 = (byte)uVar5 | 0x80;
        pbVar16 = pbVar15;
        uVar5 = uVar6;
      } while (uVar14 != 0);
    }
    goto LAB_008414e4;
  case '\v':
    if ((*(byte *)((long)param_1 + 10) >> 4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00841674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pbVar15 = (byte *)(**(code **)(*(long *)*param_1 + 0x88))
                                  ((long *)*param_1,param_2,param_3 & 1,param_4);
      return pbVar15;
    }
    plVar18 = (long *)*param_1;
    uVar6 = iVar7 << 3 | 2;
    if (0x7f < uVar6) {
      pbVar15 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar14 = uVar5 >> 0xe;
        param_4 = pbVar15 + 1;
        *pbVar15 = (byte)uVar5 | 0x80;
        pbVar15 = param_4;
        uVar5 = uVar6;
      } while (uVar14 != 0);
    }
    pbVar15 = param_4 + 1;
    *param_4 = (byte)uVar6;
    uVar8 = (**(code **)(*plVar18 + 0x78))(plVar18);
    uVar6 = (uint)uVar8;
    if (0x7f < uVar6) {
      uVar11 = uVar8 & 0xffffffff;
      pbVar16 = pbVar15;
      do {
        bVar2 = (byte)uVar8;
        uVar8 = uVar11 >> 7;
        uVar6 = (uint)uVar8;
        uVar4 = uVar11 >> 0xe;
        pbVar15 = pbVar16 + 1;
        *pbVar16 = bVar2 | 0x80;
        uVar11 = uVar8;
        pbVar16 = pbVar15;
      } while (uVar4 != 0);
    }
    *pbVar15 = (byte)uVar6;
                    /* WARNING: Could not recover jumptable at 0x00841628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar15 = (byte *)(**(code **)(*plVar18 + 0x80))(plVar18,param_3 & 1,pbVar15 + 1);
    return pbVar15;
  case '\f':
    uVar8 = *param_1;
    uVar6 = iVar7 << 3 | 2;
    if (0x7f < uVar6) {
      pbVar15 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar14 = uVar5 >> 0xe;
        param_4 = pbVar15 + 1;
        *pbVar15 = (byte)uVar5 | 0x80;
        pbVar15 = param_4;
        uVar5 = uVar6;
      } while (uVar14 != 0);
    }
LAB_00841570:
    *param_4 = (byte)uVar6;
    pbVar15 = (byte *)FUN_0080e510(uVar8,param_4 + 1);
    return pbVar15;
  case '\r':
    uVar6 = (uint)*param_1;
    uVar5 = iVar7 << 3;
    if (0x7f < uVar5) {
      pbVar15 = param_4;
      uVar14 = uVar5;
      do {
        uVar5 = uVar14 >> 7;
        uVar12 = uVar14 >> 0xe;
        param_4 = pbVar15 + 1;
        *pbVar15 = (byte)uVar14 | 0x80;
        pbVar15 = param_4;
        uVar14 = uVar5;
      } while (uVar12 != 0);
    }
    pbVar15 = param_4 + 1;
    *param_4 = (byte)uVar5;
    if (0x7f < uVar6) {
      pbVar16 = pbVar15;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar14 = uVar5 >> 0xe;
        pbVar15 = pbVar16 + 1;
        *pbVar16 = (byte)uVar5 | 0x80;
        pbVar16 = pbVar15;
        uVar5 = uVar6;
      } while (uVar14 != 0);
    }
    goto LAB_008414e4;
  case '\x0e':
    uVar6 = (uint)*param_1;
    uVar5 = iVar7 << 3;
    if (0x7f < uVar5) {
      pbVar15 = param_4;
      uVar14 = uVar5;
      do {
        uVar5 = uVar14 >> 7;
        uVar12 = uVar14 >> 0xe;
        param_4 = pbVar15 + 1;
        *pbVar15 = (byte)uVar14 | 0x80;
        pbVar15 = param_4;
        uVar14 = uVar5;
      } while (uVar12 != 0);
    }
    pbVar15 = param_4 + 1;
    *param_4 = (byte)uVar5;
    if (-1 < (int)uVar6) {
      if (0x7f < uVar6) {
        uVar8 = (ulong)uVar6;
        pbVar16 = pbVar15;
        do {
          uVar6 = (uint)(uVar8 >> 7);
          uVar11 = uVar8 >> 0xe;
          pbVar15 = pbVar16 + 1;
          *pbVar16 = (byte)uVar8 | 0x80;
          uVar8 = uVar8 >> 7;
          pbVar16 = pbVar15;
        } while (uVar11 != 0);
      }
      goto LAB_00841400;
    }
LAB_0084162c:
    uVar8 = (ulong)(int)uVar6;
    goto LAB_00841630;
  case '\x0f':
    uVar5 = (uint)*param_1;
    uVar6 = iVar7 << 3 | 5;
    if (0x7f < uVar6) {
      pbVar15 = param_4;
      uVar14 = uVar6;
      do {
        uVar6 = uVar14 >> 7;
        uVar12 = uVar14 >> 0xe;
        param_4 = pbVar15 + 1;
        *pbVar15 = (byte)uVar14 | 0x80;
        pbVar15 = param_4;
        uVar14 = uVar6;
      } while (uVar12 != 0);
    }
LAB_00841438:
    *param_4 = (byte)uVar6;
    *(uint *)(param_4 + 1) = uVar5;
    return param_4 + 5;
  case '\x10':
    uVar8 = *param_1;
    uVar6 = iVar7 << 3 | 1;
    if (0x7f < uVar6) {
      pbVar15 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar14 = uVar5 >> 0xe;
        param_4 = pbVar15 + 1;
        *pbVar15 = (byte)uVar5 | 0x80;
        pbVar15 = param_4;
        uVar5 = uVar6;
      } while (uVar14 != 0);
    }
    break;
  case '\x11':
    uVar8 = *param_1;
    uVar6 = iVar7 << 3;
    if (0x7f < uVar6) {
      pbVar15 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar14 = uVar5 >> 0xe;
        param_4 = pbVar15 + 1;
        *pbVar15 = (byte)uVar5 | 0x80;
        pbVar15 = param_4;
        uVar5 = uVar6;
      } while (uVar14 != 0);
    }
    pbVar15 = param_4 + 1;
    *param_4 = (byte)uVar6;
    uVar6 = (uint)uVar8 << 1 ^ (int)(uint)uVar8 >> 0x1f;
    if (0x7f < uVar6) {
      pbVar16 = pbVar15;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar14 = uVar5 >> 0xe;
        pbVar15 = pbVar16 + 1;
        *pbVar16 = (byte)uVar5 | 0x80;
        pbVar16 = pbVar15;
        uVar5 = uVar6;
      } while (uVar14 != 0);
    }
LAB_008414e4:
    *pbVar15 = (byte)uVar6;
    return pbVar15 + 1;
  case '\x12':
    uVar8 = *param_1;
    uVar6 = iVar7 << 3;
    if (0x7f < uVar6) {
      pbVar15 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar14 = uVar5 >> 0xe;
        param_4 = pbVar15 + 1;
        *pbVar15 = (byte)uVar5 | 0x80;
        pbVar15 = param_4;
        uVar5 = uVar6;
      } while (uVar14 != 0);
    }
    pbVar15 = param_4 + 1;
    *param_4 = (byte)uVar6;
    uVar8 = uVar8 << 1 ^ (long)uVar8 >> 0x3f;
    goto LAB_00841630;
  default:
    goto switchD_00840284_default;
  }
  *param_4 = (byte)uVar6;
  *(ulong *)(param_4 + 1) = uVar8;
  param_4 = param_4 + 9;
switchD_00840284_default:
  return param_4;
switchD_00840284_caseD_1:
  piVar9 = (int *)*param_1;
  if (*piVar9 < 1) {
    return param_4;
  }
  uVar6 = iVar7 << 3 | 1;
  if (uVar6 < 0x80) {
    lVar17 = 0;
    do {
      lVar10 = lVar17 * 8;
      lVar17 = lVar17 + 1;
      uVar13 = *(undefined8 *)(*(long *)(piVar9 + 2) + lVar10 + 8);
      *param_4 = (byte)uVar6;
      *(undefined8 *)(param_4 + 1) = uVar13;
      piVar9 = (int *)*param_1;
      param_4 = param_4 + 9;
    } while (lVar17 < *piVar9);
    return param_4;
  }
  lVar17 = 0;
  do {
    uVar13 = *(undefined8 *)(*(long *)(piVar9 + 2) + lVar17 * 8 + 8);
    param_4 = param_4 + 9;
    uVar5 = uVar6;
    do {
      pbVar15 = param_4;
      uVar14 = uVar5 >> 7;
      pbVar15[-9] = (byte)uVar5 | 0x80;
      param_4 = pbVar15 + 1;
      uVar12 = uVar5 >> 0xe;
      uVar5 = uVar14;
    } while (uVar12 != 0);
    pbVar15[-8] = (byte)uVar14;
    *(undefined8 *)(pbVar15 + -7) = uVar13;
    piVar9 = (int *)*param_1;
    lVar17 = lVar17 + 1;
  } while (lVar17 < *piVar9);
  return param_4;
}


