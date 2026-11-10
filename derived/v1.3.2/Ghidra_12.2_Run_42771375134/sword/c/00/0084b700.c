/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0084b700; name: FUN_0084b700
 */


undefined8 FUN_0084b700(long param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  byte *pbVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  char *pcVar15;
  uint uVar16;
  long *plVar17;
  
  puVar1 = param_2 + 7;
  puVar2 = PTR_DAT_027172a8 + 0x10;
LAB_0084b794:
  pbVar3 = (byte *)*param_2;
  if (pbVar3 < (byte *)param_2[1]) {
    bVar4 = *pbVar3;
    uVar11 = (ulong)(uint)bVar4;
    if ((char)bVar4 < '\x01') goto LAB_0084bb3c;
    *(uint *)(param_2 + 4) = (uint)bVar4;
    *param_2 = (ulong)(pbVar3 + 1);
LAB_0084b7c4:
    uVar16 = (uint)uVar11;
    switch((uint)(uVar11 >> 3) & 0x1fffffff) {
    case 1:
      if (uVar16 == 10) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
        lVar12 = *(long *)(param_1 + 0x18);
        if (lVar12 == *(long *)PTR_DAT_02716d10) {
          FUN_009b58d0((long *)(param_1 + 0x18),*(long *)PTR_DAT_02716d10);
          lVar12 = *(long *)(param_1 + 0x18);
        }
        uVar11 = FUN_008160d0(param_2,lVar12);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
        pcVar15 = (char *)*param_2;
        if ((pcVar15 < (char *)param_2[1]) && (*pcVar15 == '\x12')) {
          *param_2 = (ulong)(pcVar15 + 1);
LAB_0084b858:
          uVar11 = *puVar1;
          *(int *)puVar1 = (int)uVar11 + -1;
          if ((int)uVar11 < 1) {
            return 0;
          }
          do {
            piVar13 = *(int **)(param_1 + 0x30);
            if (piVar13 == (int *)0x0) {
              iVar8 = *(int *)(param_1 + 0x2c);
LAB_0084b8b4:
              FUN_00824290(param_1 + 0x20,iVar8 + 1);
              piVar13 = *(int **)(param_1 + 0x30);
              iVar8 = *piVar13;
LAB_0084b8c8:
              *piVar13 = iVar8 + 1;
              uVar10 = FUN_007f7cf0(0,*(undefined8 *)(param_1 + 0x20));
              iVar8 = *(int *)(param_1 + 0x28);
              *(int *)(param_1 + 0x28) = iVar8 + 1;
              *(undefined8 *)(*(long *)(param_1 + 0x30) + (long)iVar8 * 8 + 8) = uVar10;
            }
            else {
              iVar6 = *(int *)(param_1 + 0x28);
              iVar8 = *piVar13;
              if (iVar8 <= iVar6) {
                if (iVar8 == *(int *)(param_1 + 0x2c)) goto LAB_0084b8b4;
                goto LAB_0084b8c8;
              }
              *(int *)(param_1 + 0x28) = iVar6 + 1;
              uVar10 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
            }
            uVar9 = FUN_0080cab0(param_2);
            uVar11 = FUN_0084de10(uVar10,param_2);
            if ((uVar11 & 1) == 0) {
              return 0;
            }
            uVar11 = FUN_0080cc00(param_2,uVar9);
            if ((uVar11 & 1) == 0) {
              return 0;
            }
            pcVar15 = (char *)*param_2;
            if ((char *)param_2[1] <= pcVar15) goto LAB_0084b788;
            if (*pcVar15 != '\x12') goto code_r0x0084b93c;
            *param_2 = (ulong)(pcVar15 + 1);
          } while( true );
        }
        goto LAB_0084b794;
      }
      break;
    case 2:
      if (uVar16 == 0x12) goto LAB_0084b858;
      break;
    case 3:
      if (uVar16 == 0x1a) {
        uVar11 = *puVar1;
        *(int *)puVar1 = (int)uVar11 + -1;
        if ((int)uVar11 < 1) {
          return 0;
        }
        piVar13 = *(int **)(param_1 + 0x60);
        if (piVar13 == (int *)0x0) goto LAB_0084bc08;
        goto LAB_0084b970;
      }
      break;
    case 4:
      if (uVar16 == 0x22) {
        uVar11 = *puVar1;
        *(int *)puVar1 = (int)uVar11 + -1;
        if ((int)uVar11 < 1) {
          return 0;
        }
        piVar13 = *(int **)(param_1 + 0x78);
        if (piVar13 == (int *)0x0) goto LAB_0084bc70;
        goto LAB_0084b9b8;
      }
      break;
    case 5:
      if (uVar16 == 0x2a) {
        uVar11 = *puVar1;
        *(int *)puVar1 = (int)uVar11 + -1;
        if ((int)uVar11 < 1) {
          return 0;
        }
        piVar13 = *(int **)(param_1 + 0x90);
        if (piVar13 == (int *)0x0) goto LAB_0084bd18;
        goto LAB_0084ba00;
      }
      break;
    case 6:
      if (uVar16 == 0x32) {
        uVar11 = *puVar1;
        *(int *)puVar1 = (int)uVar11 + -1;
        if ((int)uVar11 < 1) {
          return 0;
        }
        piVar13 = *(int **)(param_1 + 0x48);
        if (piVar13 == (int *)0x0) goto LAB_0084bdc0;
        goto LAB_0084ba48;
      }
      break;
    case 7:
      if (uVar16 != 0x3a) break;
      goto LAB_0084be6c;
    case 8:
      if (uVar16 == 0x42) goto LAB_0084bf3c;
      break;
    case 9:
      if (uVar16 == 0x4a) {
        uVar11 = *puVar1;
        *(int *)puVar1 = (int)uVar11 + -1;
        if ((int)uVar11 < 1) {
          return 0;
        }
        piVar13 = *(int **)(param_1 + 200);
        if (piVar13 == (int *)0x0) goto LAB_0084c03c;
        goto LAB_0084baa8;
      }
      break;
    case 10:
      if (uVar16 == 0x52) goto LAB_0084c0e8;
      break;
    default:
      goto switchD_0084b7dc_default;
    }
    if ((uVar16 == 0) || ((uVar16 & 7) == 4)) {
      return 1;
    }
  }
  else {
    uVar11 = 0;
LAB_0084bb3c:
    iVar8 = FUN_0080d8c0(param_2,uVar11);
    bVar7 = iVar8 - 1U < 0x7f;
    *(int *)(param_2 + 4) = iVar8;
    uVar11 = (ulong)CONCAT14(bVar7,iVar8);
    if (bVar7) goto LAB_0084b7c4;
switchD_0084b7dc_default:
    if ((uint)uVar11 == 0) {
      return 1;
    }
    if (((uint)uVar11 & 7) == 4) {
      return 1;
    }
  }
  uVar14 = *(ulong *)(param_1 + 8);
  if ((uVar14 & 1) == 0) {
    uVar10 = FUN_009bb7d0((ulong *)(param_1 + 8));
    uVar11 = FUN_00810550(param_2,uVar11 & 0xffffffff,uVar10);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
  }
  else {
    uVar11 = FUN_00810550(param_2,uVar11 & 0xffffffff,uVar14 & 0xfffffffffffffffe);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
  }
  goto LAB_0084b794;
code_r0x0084b93c:
  if (*pcVar15 == '\x1a') {
    do {
      *param_2 = (ulong)(pcVar15 + 1);
      piVar13 = *(int **)(param_1 + 0x60);
      if (piVar13 == (int *)0x0) {
LAB_0084bc08:
        iVar8 = *(int *)(param_1 + 0x5c);
LAB_0084bc0c:
        FUN_00824290(param_1 + 0x50,iVar8 + 1);
        piVar13 = *(int **)(param_1 + 0x60);
        iVar8 = *piVar13;
LAB_0084bc20:
        *piVar13 = iVar8 + 1;
        uVar10 = FUN_007f7b70(0,*(undefined8 *)(param_1 + 0x50));
        iVar8 = *(int *)(param_1 + 0x58);
        *(int *)(param_1 + 0x58) = iVar8 + 1;
        *(undefined8 *)(*(long *)(param_1 + 0x60) + (long)iVar8 * 8 + 8) = uVar10;
      }
      else {
LAB_0084b970:
        iVar6 = *(int *)(param_1 + 0x58);
        iVar8 = *piVar13;
        if (iVar8 <= iVar6) {
          if (iVar8 == *(int *)(param_1 + 0x5c)) goto LAB_0084bc0c;
          goto LAB_0084bc20;
        }
        *(int *)(param_1 + 0x58) = iVar6 + 1;
        uVar10 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
      }
      uVar9 = FUN_0080cab0(param_2);
      uVar11 = FUN_0084b700(uVar10,param_2);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      uVar11 = FUN_0080cc00(param_2,uVar9);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      pcVar15 = (char *)*param_2;
      if ((char *)param_2[1] <= pcVar15) goto LAB_0084b788;
    } while (*pcVar15 == '\x1a');
    if (*pcVar15 == '\"') {
      do {
        *param_2 = (ulong)(pcVar15 + 1);
        piVar13 = *(int **)(param_1 + 0x78);
        if (piVar13 == (int *)0x0) {
LAB_0084bc70:
          iVar8 = *(int *)(param_1 + 0x74);
LAB_0084bc74:
          FUN_00824290(param_1 + 0x68,iVar8 + 1);
          piVar13 = *(int **)(param_1 + 0x78);
          iVar8 = *piVar13;
LAB_0084bc88:
          *piVar13 = iVar8 + 1;
          uVar10 = FUN_007f7bf0(0,*(undefined8 *)(param_1 + 0x68));
          iVar8 = *(int *)(param_1 + 0x70);
          *(int *)(param_1 + 0x70) = iVar8 + 1;
          *(undefined8 *)(*(long *)(param_1 + 0x78) + (long)iVar8 * 8 + 8) = uVar10;
        }
        else {
LAB_0084b9b8:
          iVar6 = *(int *)(param_1 + 0x70);
          iVar8 = *piVar13;
          if (iVar8 <= iVar6) {
            if (iVar8 == *(int *)(param_1 + 0x74)) goto LAB_0084bc74;
            goto LAB_0084bc88;
          }
          *(int *)(param_1 + 0x70) = iVar6 + 1;
          uVar10 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
        }
        uVar9 = FUN_0080cab0(param_2);
        uVar11 = FUN_008503d0(uVar10,param_2);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
        uVar11 = FUN_0080cc00(param_2,uVar9);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
        pcVar15 = (char *)*param_2;
        if ((char *)param_2[1] <= pcVar15) goto LAB_0084b788;
      } while (*pcVar15 == '\"');
      if (*pcVar15 == '*') {
        do {
          *param_2 = (ulong)(pcVar15 + 1);
          piVar13 = *(int **)(param_1 + 0x90);
          if (piVar13 == (int *)0x0) {
LAB_0084bd18:
            iVar8 = *(int *)(param_1 + 0x8c);
LAB_0084bd1c:
            FUN_00824290(param_1 + 0x80,iVar8 + 1);
            piVar13 = *(int **)(param_1 + 0x90);
            iVar8 = *piVar13;
LAB_0084bd30:
            *piVar13 = iVar8 + 1;
            uVar10 = FUN_007f7df0(0,*(undefined8 *)(param_1 + 0x80));
            iVar8 = *(int *)(param_1 + 0x88);
            *(int *)(param_1 + 0x88) = iVar8 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x90) + (long)iVar8 * 8 + 8) = uVar10;
          }
          else {
LAB_0084ba00:
            iVar6 = *(int *)(param_1 + 0x88);
            iVar8 = *piVar13;
            if (iVar8 <= iVar6) {
              if (iVar8 == *(int *)(param_1 + 0x8c)) goto LAB_0084bd1c;
              goto LAB_0084bd30;
            }
            *(int *)(param_1 + 0x88) = iVar6 + 1;
            uVar10 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
          }
          uVar9 = FUN_0080cab0(param_2);
          uVar11 = FUN_00849d60(uVar10,param_2);
          if ((uVar11 & 1) == 0) {
            return 0;
          }
          uVar11 = FUN_0080cc00(param_2,uVar9);
          if ((uVar11 & 1) == 0) {
            return 0;
          }
          pcVar15 = (char *)*param_2;
          if ((char *)param_2[1] <= pcVar15) goto LAB_0084b788;
        } while (*pcVar15 == '*');
        if (*pcVar15 == '2') {
          do {
            *param_2 = (ulong)(pcVar15 + 1);
            piVar13 = *(int **)(param_1 + 0x48);
            if (piVar13 == (int *)0x0) {
LAB_0084bdc0:
              iVar8 = *(int *)(param_1 + 0x44);
LAB_0084bdc4:
              FUN_00824290(param_1 + 0x38,iVar8 + 1);
              piVar13 = *(int **)(param_1 + 0x48);
              iVar8 = *piVar13;
LAB_0084bdd8:
              *piVar13 = iVar8 + 1;
              uVar10 = FUN_007f7cf0(0,*(undefined8 *)(param_1 + 0x38));
              iVar8 = *(int *)(param_1 + 0x40);
              *(int *)(param_1 + 0x40) = iVar8 + 1;
              *(undefined8 *)(*(long *)(param_1 + 0x48) + (long)iVar8 * 8 + 8) = uVar10;
            }
            else {
LAB_0084ba48:
              iVar6 = *(int *)(param_1 + 0x40);
              iVar8 = *piVar13;
              if (iVar8 <= iVar6) {
                if (iVar8 == *(int *)(param_1 + 0x44)) goto LAB_0084bdc4;
                goto LAB_0084bdd8;
              }
              *(int *)(param_1 + 0x40) = iVar6 + 1;
              uVar10 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
            }
            uVar9 = FUN_0080cab0(param_2);
            uVar11 = FUN_0084de10(uVar10,param_2);
            if ((uVar11 & 1) == 0) {
              return 0;
            }
            uVar11 = FUN_0080cc00(param_2,uVar9);
            if ((uVar11 & 1) == 0) {
              return 0;
            }
            pcVar15 = (char *)*param_2;
            if ((char *)param_2[1] <= pcVar15) goto LAB_0084b788;
          } while (*pcVar15 == '2');
          *(int *)puVar1 = (int)*puVar1 + 1;
          if (*pcVar15 == ':') {
            *param_2 = (ulong)(pcVar15 + 1);
LAB_0084be6c:
            plVar17 = *(long **)(param_1 + 0xb0);
            *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x80;
            if (plVar17 == (long *)0x0) {
              plVar17 = operator_new(0x58);
              *plVar17 = (long)puVar2;
              FUN_00825430(plVar17 + 1);
              *(undefined4 *)(plVar17 + 10) = 0;
              plVar17[8] = 0;
              plVar17[9] = 0;
              plVar17[5] = 0;
              plVar17[6] = 0;
              plVar17[7] = 0;
              *(long **)(param_1 + 0xb0) = plVar17;
            }
            pcVar15 = (char *)*param_2;
            if ((pcVar15 < (char *)param_2[1]) && (cVar5 = *pcVar15, -1 < cVar5)) {
              *param_2 = (ulong)(pcVar15 + 1);
              uVar11 = FUN_0080ca20(param_2,cVar5);
            }
            else {
              iVar8 = FUN_0080d720(param_2);
              if (iVar8 < 0) {
                return 0;
              }
              uVar11 = FUN_0080ca20(param_2,iVar8);
            }
            if ((long)uVar11 < 0) {
              return 0;
            }
            uVar14 = FUN_00855fa0(plVar17,param_2);
            if ((uVar14 & 1) == 0) {
              return 0;
            }
            uVar11 = FUN_0080cb90(param_2,uVar11 & 0xffffffff);
            if ((uVar11 & 1) == 0) {
              return 0;
            }
            pcVar15 = (char *)*param_2;
            if ((pcVar15 < (char *)param_2[1]) && (*pcVar15 == 'B')) {
              *param_2 = (ulong)(pcVar15 + 1);
LAB_0084bf3c:
              uVar11 = *puVar1;
              *(int *)puVar1 = (int)uVar11 + -1;
              if ((int)uVar11 < 1) {
                return 0;
              }
              do {
                piVar13 = *(int **)(param_1 + 0xa8);
                if (piVar13 == (int *)0x0) {
                  iVar8 = *(int *)(param_1 + 0xa4);
LAB_0084bf98:
                  FUN_00824290(param_1 + 0x98,iVar8 + 1);
                  piVar13 = *(int **)(param_1 + 0xa8);
                  iVar8 = *piVar13;
LAB_0084bfac:
                  *piVar13 = iVar8 + 1;
                  uVar10 = FUN_007f7d70(0,*(undefined8 *)(param_1 + 0x98));
                  iVar8 = *(int *)(param_1 + 0xa0);
                  *(int *)(param_1 + 0xa0) = iVar8 + 1;
                  *(undefined8 *)(*(long *)(param_1 + 0xa8) + (long)iVar8 * 8 + 8) = uVar10;
                }
                else {
                  iVar6 = *(int *)(param_1 + 0xa0);
                  iVar8 = *piVar13;
                  if (iVar8 <= iVar6) {
                    if (iVar8 == *(int *)(param_1 + 0xa4)) goto LAB_0084bf98;
                    goto LAB_0084bfac;
                  }
                  *(int *)(param_1 + 0xa0) = iVar6 + 1;
                  uVar10 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
                }
                uVar9 = FUN_0080cab0(param_2);
                uVar11 = FUN_0084f5c0(uVar10,param_2);
                if ((uVar11 & 1) == 0) {
                  return 0;
                }
                uVar11 = FUN_0080cc00(param_2,uVar9);
                if ((uVar11 & 1) == 0) {
                  return 0;
                }
                pcVar15 = (char *)*param_2;
                if ((char *)param_2[1] <= pcVar15) goto LAB_0084b788;
                if (*pcVar15 != 'B') goto code_r0x0084c020;
                *param_2 = (ulong)(pcVar15 + 1);
              } while( true );
            }
          }
          goto LAB_0084b794;
        }
      }
    }
  }
LAB_0084b788:
  *(int *)puVar1 = (int)*puVar1 + 1;
  goto LAB_0084b794;
code_r0x0084c020:
  if (*pcVar15 == 'J') {
    do {
      *param_2 = (ulong)(pcVar15 + 1);
      piVar13 = *(int **)(param_1 + 200);
      if (piVar13 == (int *)0x0) {
LAB_0084c03c:
        iVar8 = *(int *)(param_1 + 0xc4);
LAB_0084c040:
        FUN_00824290(param_1 + 0xb8,iVar8 + 1);
        piVar13 = *(int **)(param_1 + 200);
        iVar8 = *piVar13;
LAB_0084c054:
        *piVar13 = iVar8 + 1;
        uVar10 = FUN_007f7e70(0,*(undefined8 *)(param_1 + 0xb8));
        iVar8 = *(int *)(param_1 + 0xc0);
        *(int *)(param_1 + 0xc0) = iVar8 + 1;
        *(undefined8 *)(*(long *)(param_1 + 200) + (long)iVar8 * 8 + 8) = uVar10;
      }
      else {
LAB_0084baa8:
        iVar6 = *(int *)(param_1 + 0xc0);
        iVar8 = *piVar13;
        if (iVar8 <= iVar6) {
          if (iVar8 == *(int *)(param_1 + 0xc4)) goto LAB_0084c040;
          goto LAB_0084c054;
        }
        *(int *)(param_1 + 0xc0) = iVar6 + 1;
        uVar10 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
      }
      uVar9 = FUN_0080cab0(param_2);
      uVar11 = FUN_0084a610(uVar10,param_2);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      uVar11 = FUN_0080cc00(param_2,uVar9);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      pcVar15 = (char *)*param_2;
      if ((char *)param_2[1] <= pcVar15) goto LAB_0084b788;
    } while (*pcVar15 == 'J');
    *(int *)puVar1 = (int)*puVar1 + 1;
    if (*pcVar15 == 'R') {
      do {
        *param_2 = (ulong)(pcVar15 + 1);
LAB_0084c0e8:
        uVar10 = FUN_007f7930(param_1 + 0xd0);
        uVar11 = FUN_008160d0(param_2,uVar10);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
        pcVar15 = (char *)*param_2;
      } while ((pcVar15 < (char *)param_2[1]) && (*pcVar15 == 'R'));
      if ((pcVar15 == (char *)param_2[1]) &&
         ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
        *(undefined4 *)(param_2 + 4) = 0;
        *(undefined1 *)((long)param_2 + 0x24) = 1;
        return 1;
      }
    }
    goto LAB_0084b794;
  }
  goto LAB_0084b788;
}


