/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012fdb00; name: FUN_012fdb00
 */


undefined8 FUN_012fdb00(long param_1,ulong *param_2)

{
  ulong *puVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  undefined8 uVar13;
  
  puVar1 = param_2 + 7;
LAB_012fdb6c:
  pbVar2 = (byte *)*param_2;
  if (pbVar2 < (byte *)param_2[1]) {
    bVar3 = *pbVar2;
    uVar9 = (ulong)(uint)bVar3;
    if ((char)bVar3 < '\x01') goto LAB_012fdf2c;
    *(uint *)(param_2 + 4) = (uint)bVar3;
    *param_2 = (ulong)(pbVar2 + 1);
LAB_012fdb9c:
    uVar6 = (uint)uVar9;
    switch((uint)(uVar9 >> 3) & 0x1fffffff) {
    case 1:
      if (uVar6 == 8) {
        pbVar2 = (byte *)*param_2;
        if (pbVar2 < (byte *)param_2[1]) {
          uVar6 = (uint)*pbVar2;
          if ((char)*pbVar2 < '\0') goto LAB_012fdf78;
          *param_2 = (ulong)(pbVar2 + 1);
          *(uint *)(param_1 + 0xc0) = uVar6;
          pcVar11 = (char *)*param_2;
          if ((char *)param_2[1] <= pcVar11) goto LAB_012fdb6c;
        }
        else {
          uVar6 = 0;
LAB_012fdf78:
          lVar8 = FUN_0080d5d0(param_2,uVar6);
          if (lVar8 < 0) {
            return 0;
          }
          *(int *)(param_1 + 0xc0) = (int)lVar8;
          pcVar11 = (char *)*param_2;
          if ((char *)param_2[1] <= pcVar11) goto LAB_012fdb6c;
        }
        if (*pcVar11 == '\x12') {
          *param_2 = (ulong)(pcVar11 + 1);
LAB_012fdc10:
          uVar9 = *puVar1;
          *(int *)puVar1 = (int)uVar9 + -1;
          if ((int)uVar9 < 1) {
            return 0;
          }
          do {
            piVar10 = *(int **)(param_1 + 0x28);
            if (piVar10 == (int *)0x0) {
              iVar12 = *(int *)(param_1 + 0x24);
LAB_012fdc6c:
              FUN_00824290(param_1 + 0x18,iVar12 + 1);
              piVar10 = *(int **)(param_1 + 0x28);
              iVar12 = *piVar10;
LAB_012fdc80:
              *piVar10 = iVar12 + 1;
              uVar13 = FUN_012f57a0(0,*(undefined8 *)(param_1 + 0x18));
              iVar12 = *(int *)(param_1 + 0x20);
              *(int *)(param_1 + 0x20) = iVar12 + 1;
              *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)iVar12 * 8 + 8) = uVar13;
            }
            else {
              iVar4 = *(int *)(param_1 + 0x20);
              iVar12 = *piVar10;
              if (iVar12 <= iVar4) {
                if (iVar12 == *(int *)(param_1 + 0x24)) goto LAB_012fdc6c;
                goto LAB_012fdc80;
              }
              *(int *)(param_1 + 0x20) = iVar4 + 1;
              uVar13 = *(undefined8 *)(piVar10 + (long)iVar4 * 2 + 2);
            }
            uVar7 = FUN_0080cab0(param_2);
            uVar9 = FUN_012f9810(uVar13,param_2);
            if ((uVar9 & 1) == 0) {
              return 0;
            }
            uVar9 = FUN_0080cc00(param_2,uVar7);
            if ((uVar9 & 1) == 0) {
              return 0;
            }
            pcVar11 = (char *)*param_2;
            if ((char *)param_2[1] <= pcVar11) goto LAB_012fdb60;
            if (*pcVar11 != '\x12') goto code_r0x012fdcf4;
            *param_2 = (ulong)(pcVar11 + 1);
          } while( true );
        }
        goto LAB_012fdb6c;
      }
      break;
    case 2:
      if (uVar6 == 0x12) goto LAB_012fdc10;
      break;
    case 3:
      if (uVar6 == 0x1a) {
        uVar9 = *puVar1;
        *(int *)puVar1 = (int)uVar9 + -1;
        if ((int)uVar9 < 1) {
          return 0;
        }
        piVar10 = *(int **)(param_1 + 0x40);
        if (piVar10 == (int *)0x0) goto LAB_012fdfac;
        goto LAB_012fdd28;
      }
      break;
    case 4:
      if (uVar6 == 0x22) {
        uVar9 = *puVar1;
        *(int *)puVar1 = (int)uVar9 + -1;
        if ((int)uVar9 < 1) {
          return 0;
        }
        piVar10 = *(int **)(param_1 + 0x58);
        if (piVar10 == (int *)0x0) goto LAB_012fe054;
        goto LAB_012fdd70;
      }
      break;
    case 5:
      if (uVar6 == 0x2a) {
        uVar9 = *puVar1;
        *(int *)puVar1 = (int)uVar9 + -1;
        if ((int)uVar9 < 1) {
          return 0;
        }
        piVar10 = *(int **)(param_1 + 0x70);
        if (piVar10 == (int *)0x0) goto LAB_012fe0fc;
        goto LAB_012fddb8;
      }
      break;
    case 6:
      if (uVar6 == 0x32) {
        uVar9 = *puVar1;
        *(int *)puVar1 = (int)uVar9 + -1;
        if ((int)uVar9 < 1) {
          return 0;
        }
        piVar10 = *(int **)(param_1 + 0x88);
        if (piVar10 == (int *)0x0) goto LAB_012fe1a4;
        goto LAB_012fde00;
      }
      break;
    case 7:
      if (uVar6 == 0x3a) {
        uVar9 = *puVar1;
        *(int *)puVar1 = (int)uVar9 + -1;
        if ((int)uVar9 < 1) {
          return 0;
        }
        piVar10 = *(int **)(param_1 + 0xa0);
        if (piVar10 == (int *)0x0) goto LAB_012fe24c;
        goto LAB_012fde48;
      }
      break;
    case 8:
      if (uVar6 == 0x42) {
        uVar9 = *puVar1;
        *(int *)puVar1 = (int)uVar9 + -1;
        if ((int)uVar9 < 1) {
          return 0;
        }
        piVar10 = *(int **)(param_1 + 0xb8);
        if (piVar10 == (int *)0x0) goto LAB_012fe2f4;
        goto LAB_012fdef4;
      }
      break;
    default:
      goto switchD_012fdbb4_default;
    }
    if ((uVar6 == 0) || ((uVar6 & 7) == 4)) {
      return 1;
    }
  }
  else {
    uVar9 = 0;
LAB_012fdf2c:
    uVar6 = FUN_0080d8c0(param_2,uVar9);
    bVar5 = uVar6 - 1 < 0x7f;
    *(uint *)(param_2 + 4) = uVar6;
    uVar9 = (ulong)CONCAT14(bVar5,uVar6);
    if (bVar5) goto LAB_012fdb9c;
switchD_012fdbb4_default:
    if (uVar6 == 0) {
      return 1;
    }
    if ((uVar6 & 7) == 4) {
      return 1;
    }
  }
  uVar9 = FUN_008148c0(param_2);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  goto LAB_012fdb6c;
code_r0x012fdcf4:
  if (*pcVar11 == '\x1a') {
    do {
      *param_2 = (ulong)(pcVar11 + 1);
      piVar10 = *(int **)(param_1 + 0x40);
      if (piVar10 == (int *)0x0) {
LAB_012fdfac:
        iVar12 = *(int *)(param_1 + 0x3c);
LAB_012fdfb0:
        FUN_00824290(param_1 + 0x30,iVar12 + 1);
        piVar10 = *(int **)(param_1 + 0x40);
        iVar12 = *piVar10;
LAB_012fdfc4:
        *piVar10 = iVar12 + 1;
        uVar13 = FUN_012f5b40(0,*(undefined8 *)(param_1 + 0x30));
        iVar12 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar12 + 1;
        *(undefined8 *)(*(long *)(param_1 + 0x40) + (long)iVar12 * 8 + 8) = uVar13;
      }
      else {
LAB_012fdd28:
        iVar4 = *(int *)(param_1 + 0x38);
        iVar12 = *piVar10;
        if (iVar12 <= iVar4) {
          if (iVar12 == *(int *)(param_1 + 0x3c)) goto LAB_012fdfb0;
          goto LAB_012fdfc4;
        }
        *(int *)(param_1 + 0x38) = iVar4 + 1;
        uVar13 = *(undefined8 *)(piVar10 + (long)iVar4 * 2 + 2);
      }
      uVar7 = FUN_0080cab0(param_2);
      uVar9 = FUN_012f9f00(uVar13,param_2);
      if ((uVar9 & 1) == 0) {
        return 0;
      }
      uVar9 = FUN_0080cc00(param_2,uVar7);
      if ((uVar9 & 1) == 0) {
        return 0;
      }
      pcVar11 = (char *)*param_2;
      if ((char *)param_2[1] <= pcVar11) goto LAB_012fdb60;
    } while (*pcVar11 == '\x1a');
    if (*pcVar11 == '\"') {
      do {
        *param_2 = (ulong)(pcVar11 + 1);
        piVar10 = *(int **)(param_1 + 0x58);
        if (piVar10 == (int *)0x0) {
LAB_012fe054:
          iVar12 = *(int *)(param_1 + 0x54);
LAB_012fe058:
          FUN_00824290(param_1 + 0x48,iVar12 + 1);
          piVar10 = *(int **)(param_1 + 0x58);
          iVar12 = *piVar10;
LAB_012fe06c:
          *piVar10 = iVar12 + 1;
          uVar13 = FUN_012f42a0(0,*(undefined8 *)(param_1 + 0x48));
          iVar12 = *(int *)(param_1 + 0x50);
          *(int *)(param_1 + 0x50) = iVar12 + 1;
          *(undefined8 *)(*(long *)(param_1 + 0x58) + (long)iVar12 * 8 + 8) = uVar13;
        }
        else {
LAB_012fdd70:
          iVar4 = *(int *)(param_1 + 0x50);
          iVar12 = *piVar10;
          if (iVar12 <= iVar4) {
            if (iVar12 == *(int *)(param_1 + 0x54)) goto LAB_012fe058;
            goto LAB_012fe06c;
          }
          *(int *)(param_1 + 0x50) = iVar4 + 1;
          uVar13 = *(undefined8 *)(piVar10 + (long)iVar4 * 2 + 2);
        }
        uVar7 = FUN_0080cab0(param_2);
        uVar9 = FUN_012fa5c0(uVar13,param_2);
        if ((uVar9 & 1) == 0) {
          return 0;
        }
        uVar9 = FUN_0080cc00(param_2,uVar7);
        if ((uVar9 & 1) == 0) {
          return 0;
        }
        pcVar11 = (char *)*param_2;
        if ((char *)param_2[1] <= pcVar11) goto LAB_012fdb60;
      } while (*pcVar11 == '\"');
      if (*pcVar11 == '*') {
        do {
          *param_2 = (ulong)(pcVar11 + 1);
          piVar10 = *(int **)(param_1 + 0x70);
          if (piVar10 == (int *)0x0) {
LAB_012fe0fc:
            iVar12 = *(int *)(param_1 + 0x6c);
LAB_012fe100:
            FUN_00824290(param_1 + 0x60,iVar12 + 1);
            piVar10 = *(int **)(param_1 + 0x70);
            iVar12 = *piVar10;
LAB_012fe114:
            *piVar10 = iVar12 + 1;
            uVar13 = FUN_012f4220(0,*(undefined8 *)(param_1 + 0x60));
            iVar12 = *(int *)(param_1 + 0x68);
            *(int *)(param_1 + 0x68) = iVar12 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x70) + (long)iVar12 * 8 + 8) = uVar13;
          }
          else {
LAB_012fddb8:
            iVar4 = *(int *)(param_1 + 0x68);
            iVar12 = *piVar10;
            if (iVar12 <= iVar4) {
              if (iVar12 == *(int *)(param_1 + 0x6c)) goto LAB_012fe100;
              goto LAB_012fe114;
            }
            *(int *)(param_1 + 0x68) = iVar4 + 1;
            uVar13 = *(undefined8 *)(piVar10 + (long)iVar4 * 2 + 2);
          }
          uVar7 = FUN_0080cab0(param_2);
          uVar9 = FUN_012fb160(uVar13,param_2);
          if ((uVar9 & 1) == 0) {
            return 0;
          }
          uVar9 = FUN_0080cc00(param_2,uVar7);
          if ((uVar9 & 1) == 0) {
            return 0;
          }
          pcVar11 = (char *)*param_2;
          if ((char *)param_2[1] <= pcVar11) goto LAB_012fdb60;
        } while (*pcVar11 == '*');
        if (*pcVar11 == '2') {
          do {
            *param_2 = (ulong)(pcVar11 + 1);
            piVar10 = *(int **)(param_1 + 0x88);
            if (piVar10 == (int *)0x0) {
LAB_012fe1a4:
              iVar12 = *(int *)(param_1 + 0x84);
LAB_012fe1a8:
              FUN_00824290(param_1 + 0x78,iVar12 + 1);
              piVar10 = *(int **)(param_1 + 0x88);
              iVar12 = *piVar10;
LAB_012fe1bc:
              *piVar10 = iVar12 + 1;
              uVar13 = FUN_012f43a0(0,*(undefined8 *)(param_1 + 0x78));
              iVar12 = *(int *)(param_1 + 0x80);
              *(int *)(param_1 + 0x80) = iVar12 + 1;
              *(undefined8 *)(*(long *)(param_1 + 0x88) + (long)iVar12 * 8 + 8) = uVar13;
            }
            else {
LAB_012fde00:
              iVar4 = *(int *)(param_1 + 0x80);
              iVar12 = *piVar10;
              if (iVar12 <= iVar4) {
                if (iVar12 == *(int *)(param_1 + 0x84)) goto LAB_012fe1a8;
                goto LAB_012fe1bc;
              }
              *(int *)(param_1 + 0x80) = iVar4 + 1;
              uVar13 = *(undefined8 *)(piVar10 + (long)iVar4 * 2 + 2);
            }
            uVar7 = FUN_0080cab0(param_2);
            uVar9 = FUN_012fbaa0(uVar13,param_2);
            if ((uVar9 & 1) == 0) {
              return 0;
            }
            uVar9 = FUN_0080cc00(param_2,uVar7);
            if ((uVar9 & 1) == 0) {
              return 0;
            }
            pcVar11 = (char *)*param_2;
            if ((char *)param_2[1] <= pcVar11) goto LAB_012fdb60;
          } while (*pcVar11 == '2');
          if (*pcVar11 == ':') {
            do {
              *param_2 = (ulong)(pcVar11 + 1);
              piVar10 = *(int **)(param_1 + 0xa0);
              if (piVar10 == (int *)0x0) {
LAB_012fe24c:
                iVar12 = *(int *)(param_1 + 0x9c);
LAB_012fe250:
                FUN_00824290(param_1 + 0x90,iVar12 + 1);
                piVar10 = *(int **)(param_1 + 0xa0);
                iVar12 = *piVar10;
LAB_012fe264:
                *piVar10 = iVar12 + 1;
                uVar13 = FUN_012f6e70(0,*(undefined8 *)(param_1 + 0x90));
                iVar12 = *(int *)(param_1 + 0x98);
                *(int *)(param_1 + 0x98) = iVar12 + 1;
                *(undefined8 *)(*(long *)(param_1 + 0xa0) + (long)iVar12 * 8 + 8) = uVar13;
              }
              else {
LAB_012fde48:
                iVar4 = *(int *)(param_1 + 0x98);
                iVar12 = *piVar10;
                if (iVar12 <= iVar4) {
                  if (iVar12 == *(int *)(param_1 + 0x9c)) goto LAB_012fe250;
                  goto LAB_012fe264;
                }
                *(int *)(param_1 + 0x98) = iVar4 + 1;
                uVar13 = *(undefined8 *)(piVar10 + (long)iVar4 * 2 + 2);
              }
              uVar7 = FUN_0080cab0(param_2);
              uVar9 = FUN_012fc1c0(uVar13,param_2);
              if ((uVar9 & 1) == 0) {
                return 0;
              }
              uVar9 = FUN_0080cc00(param_2,uVar7);
              if ((uVar9 & 1) == 0) {
                return 0;
              }
              pcVar11 = (char *)*param_2;
              if ((char *)param_2[1] <= pcVar11) goto LAB_012fdb60;
            } while (*pcVar11 == ':');
            if (*pcVar11 == 'B') {
              do {
                *param_2 = (ulong)(pcVar11 + 1);
                piVar10 = *(int **)(param_1 + 0xb8);
                if (piVar10 == (int *)0x0) {
LAB_012fe2f4:
                  iVar12 = *(int *)(param_1 + 0xb4);
LAB_012fe2f8:
                  FUN_00824290(param_1 + 0xa8,iVar12 + 1);
                  piVar10 = *(int **)(param_1 + 0xb8);
                  iVar12 = *piVar10;
LAB_012fe30c:
                  *piVar10 = iVar12 + 1;
                  uVar13 = FUN_012f4320(0,*(undefined8 *)(param_1 + 0xa8));
                  iVar12 = *(int *)(param_1 + 0xb0);
                  *(int *)(param_1 + 0xb0) = iVar12 + 1;
                  *(undefined8 *)(*(long *)(param_1 + 0xb8) + (long)iVar12 * 8 + 8) = uVar13;
                }
                else {
LAB_012fdef4:
                  iVar4 = *(int *)(param_1 + 0xb0);
                  iVar12 = *piVar10;
                  if (iVar12 <= iVar4) {
                    if (iVar12 == *(int *)(param_1 + 0xb4)) goto LAB_012fe2f8;
                    goto LAB_012fe30c;
                  }
                  *(int *)(param_1 + 0xb0) = iVar4 + 1;
                  uVar13 = *(undefined8 *)(piVar10 + (long)iVar4 * 2 + 2);
                }
                uVar7 = FUN_0080cab0(param_2);
                uVar9 = FUN_012fcd30(uVar13,param_2);
                if ((uVar9 & 1) == 0) {
                  return 0;
                }
                uVar9 = FUN_0080cc00(param_2,uVar7);
                if ((uVar9 & 1) == 0) {
                  return 0;
                }
                pcVar11 = (char *)*param_2;
              } while ((pcVar11 < (char *)param_2[1]) && (*pcVar11 == 'B'));
              *(int *)puVar1 = (int)*puVar1 + 1;
              if ((pcVar11 == (char *)param_2[1]) &&
                 ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
                *(undefined4 *)(param_2 + 4) = 0;
                *(undefined1 *)((long)param_2 + 0x24) = 1;
                return 1;
              }
              goto LAB_012fdb6c;
            }
          }
        }
      }
    }
  }
LAB_012fdb60:
  *(int *)puVar1 = (int)*puVar1 + 1;
  goto LAB_012fdb6c;
}


