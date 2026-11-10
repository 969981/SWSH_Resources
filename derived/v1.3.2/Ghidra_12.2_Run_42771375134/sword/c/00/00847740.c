/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00847740; name: FUN_00847740
 */


undefined8 FUN_00847740(long param_1,ulong *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  int *piVar4;
  undefined *puVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  long *plVar21;
  undefined *local_78;
  undefined *local_70;
  undefined1 local_68;
  
  puVar1 = PTR_DAT_027172a0 + 0x10;
  puVar2 = PTR_DAT_02716670 + 0x10;
  piVar3 = (int *)(param_1 + 0x40);
  piVar4 = (int *)(param_1 + 0x50);
  puVar5 = PTR_DAT_027172f0 + 0x10;
LAB_008477f4:
  pbVar19 = (byte *)*param_2;
  if (pbVar19 < (byte *)param_2[1]) {
    bVar6 = *pbVar19;
    uVar13 = (ulong)(uint)bVar6;
    if ((char)bVar6 < '\x01') goto LAB_00847af0;
    *(uint *)(param_2 + 4) = (uint)bVar6;
    *param_2 = (ulong)(pbVar19 + 1);
LAB_00847824:
    uVar20 = (uint)uVar13;
    switch((uint)(uVar13 >> 3) & 0x1fffffff) {
    case 1:
      if (uVar20 == 10) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
        lVar14 = *(long *)(param_1 + 0x18);
        if (lVar14 == *(long *)PTR_DAT_02716d10) {
          FUN_009b58d0((long *)(param_1 + 0x18),*(long *)PTR_DAT_02716d10);
          lVar14 = *(long *)(param_1 + 0x18);
        }
        uVar13 = FUN_008160d0(param_2,lVar14);
        if ((uVar13 & 1) == 0) {
          return 0;
        }
        pcVar17 = (char *)*param_2;
        if ((pcVar17 < (char *)param_2[1]) && (*pcVar17 == '\x12')) {
          *param_2 = (ulong)(pcVar17 + 1);
LAB_008478b8:
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
          lVar14 = *(long *)(param_1 + 0x20);
          if (lVar14 == *(long *)PTR_DAT_02716d10) {
            FUN_009b58d0((long *)(param_1 + 0x20),*(long *)PTR_DAT_02716d10);
            lVar14 = *(long *)(param_1 + 0x20);
          }
          uVar13 = FUN_008160d0(param_2,lVar14);
          if ((uVar13 & 1) == 0) {
            return 0;
          }
          pcVar17 = (char *)*param_2;
          if ((pcVar17 < (char *)param_2[1]) && (*pcVar17 == '\x1a')) {
            do {
              *param_2 = (ulong)(pcVar17 + 1);
LAB_00847b70:
              uVar12 = FUN_007f7930(param_1 + 0x28);
              uVar13 = FUN_008160d0(param_2,uVar12);
              if ((uVar13 & 1) == 0) {
                return 0;
              }
              pcVar17 = (char *)*param_2;
              if ((char *)param_2[1] <= pcVar17) goto LAB_008477f4;
            } while (*pcVar17 == '\x1a');
            if (*pcVar17 == '\"') {
              *param_2 = (ulong)(pcVar17 + 1);
              iVar10 = (int)param_2[7];
              *(int *)(param_2 + 7) = iVar10 + -1;
joined_r0x00847938:
              if (iVar10 < 1) {
                return 0;
              }
              do {
                piVar15 = *(int **)(param_1 + 0x70);
                if (piVar15 == (int *)0x0) {
                  iVar10 = *(int *)(param_1 + 0x6c);
LAB_00847c10:
                  FUN_00824290(param_1 + 0x60,iVar10 + 1);
                  piVar15 = *(int **)(param_1 + 0x70);
                  iVar10 = *piVar15;
LAB_00847c24:
                  *piVar15 = iVar10 + 1;
                  uVar12 = FUN_007f7b70(0,*(undefined8 *)(param_1 + 0x60));
                  iVar10 = *(int *)(param_1 + 0x68);
                  *(int *)(param_1 + 0x68) = iVar10 + 1;
                  *(undefined8 *)(*(long *)(param_1 + 0x70) + (long)iVar10 * 8 + 8) = uVar12;
                }
                else {
                  iVar8 = *(int *)(param_1 + 0x68);
                  iVar10 = *piVar15;
                  if (iVar10 <= iVar8) {
                    if (iVar10 == *(int *)(param_1 + 0x6c)) goto LAB_00847c10;
                    goto LAB_00847c24;
                  }
                  *(int *)(param_1 + 0x68) = iVar8 + 1;
                  uVar12 = *(undefined8 *)(piVar15 + (long)iVar8 * 2 + 2);
                }
                uVar11 = FUN_0080cab0(param_2);
                uVar13 = FUN_0084b700(uVar12,param_2);
                if ((uVar13 & 1) == 0) {
                  return 0;
                }
                uVar13 = FUN_0080cc00(param_2,uVar11);
                if ((uVar13 & 1) == 0) {
                  return 0;
                }
                pcVar17 = (char *)*param_2;
                if ((char *)param_2[1] <= pcVar17) goto LAB_008477e8;
                if (*pcVar17 != '\"') goto code_r0x00847c98;
                *param_2 = (ulong)(pcVar17 + 1);
              } while( true );
            }
          }
        }
        goto LAB_008477f4;
      }
      break;
    case 2:
      if (uVar20 == 0x12) goto LAB_008478b8;
      break;
    case 3:
      if (uVar20 == 0x1a) goto LAB_00847b70;
      break;
    case 4:
      if (uVar20 == 0x22) {
        iVar10 = (int)param_2[7];
        *(int *)(param_2 + 7) = iVar10 + -1;
        goto joined_r0x00847938;
      }
      break;
    case 5:
      if (uVar20 == 0x2a) {
        uVar13 = param_2[7];
        *(int *)(param_2 + 7) = (int)uVar13 + -1;
        if ((int)uVar13 < 1) {
          return 0;
        }
        piVar15 = *(int **)(param_1 + 0x88);
        if (piVar15 == (int *)0x0) goto LAB_00847cb4;
        goto LAB_00847964;
      }
      break;
    case 6:
      if (uVar20 == 0x32) {
        uVar13 = param_2[7];
        *(int *)(param_2 + 7) = (int)uVar13 + -1;
        if ((int)uVar13 < 1) {
          return 0;
        }
        piVar15 = *(int **)(param_1 + 0xa0);
        if (piVar15 == (int *)0x0) goto LAB_00847d5c;
        goto LAB_008479ac;
      }
      break;
    case 7:
      if (uVar20 == 0x3a) {
        uVar13 = param_2[7];
        *(int *)(param_2 + 7) = (int)uVar13 + -1;
        if ((int)uVar13 < 1) {
          return 0;
        }
        piVar15 = *(int **)(param_1 + 0xb8);
        if (piVar15 == (int *)0x0) goto LAB_00847e04;
        goto LAB_008479f4;
      }
      break;
    case 8:
      if (uVar20 != 0x42) break;
      goto LAB_00847eb0;
    case 9:
      if (uVar20 != 0x4a) break;
      goto LAB_00847fe4;
    case 10:
      if (uVar20 == 0x50) {
        pbVar19 = (byte *)*param_2;
        if (pbVar19 < (byte *)param_2[1]) goto LAB_008480b0;
        goto LAB_00847ad0;
      }
      if (uVar20 == 0x52) {
        uVar13 = FUN_008483b0(param_2,piVar3);
        if ((uVar13 & 1) != 0) goto LAB_008481a8;
        return 0;
      }
      break;
    case 0xb:
      if (uVar20 == 0x58) {
        pbVar19 = (byte *)*param_2;
        if (pbVar19 < (byte *)param_2[1]) goto LAB_008481dc;
        goto LAB_00847ae4;
      }
      if (uVar20 == 0x5a) {
        uVar13 = FUN_008483b0(param_2,piVar4);
        if ((uVar13 & 1) != 0) goto LAB_008482d4;
        return 0;
      }
      break;
    case 0xc:
      if (uVar20 != 0x62) break;
      goto LAB_00848300;
    default:
      goto switchD_0084783c_default;
    }
    if ((uVar20 == 0) || ((uVar20 & 7) == 4)) {
      return 1;
    }
  }
  else {
    uVar13 = 0;
LAB_00847af0:
    iVar10 = FUN_0080d8c0(param_2,uVar13);
    bVar9 = iVar10 - 1U < 0x7f;
    *(int *)(param_2 + 4) = iVar10;
    uVar13 = (ulong)CONCAT14(bVar9,iVar10);
    if (bVar9) goto LAB_00847824;
switchD_0084783c_default:
    if ((uint)uVar13 == 0) {
      return 1;
    }
    if (((uint)uVar13 & 7) == 4) {
      return 1;
    }
  }
  uVar16 = *(ulong *)(param_1 + 8);
  if ((uVar16 & 1) == 0) {
    uVar12 = FUN_009bb7d0((ulong *)(param_1 + 8));
    uVar13 = FUN_00810550(param_2,uVar13 & 0xffffffff,uVar12);
    if ((uVar13 & 1) == 0) {
      return 0;
    }
  }
  else {
    uVar13 = FUN_00810550(param_2,uVar13 & 0xffffffff,uVar16 & 0xfffffffffffffffe);
    if ((uVar13 & 1) == 0) {
      return 0;
    }
  }
  goto LAB_008477f4;
code_r0x00847c98:
  if (*pcVar17 == '*') {
    do {
      *param_2 = (ulong)(pcVar17 + 1);
      piVar15 = *(int **)(param_1 + 0x88);
      if (piVar15 == (int *)0x0) {
LAB_00847cb4:
        iVar10 = *(int *)(param_1 + 0x84);
LAB_00847cb8:
        FUN_00824290(param_1 + 0x78,iVar10 + 1);
        piVar15 = *(int **)(param_1 + 0x88);
        iVar10 = *piVar15;
LAB_00847ccc:
        *piVar15 = iVar10 + 1;
        uVar12 = FUN_007f7bf0(0,*(undefined8 *)(param_1 + 0x78));
        iVar10 = *(int *)(param_1 + 0x80);
        *(int *)(param_1 + 0x80) = iVar10 + 1;
        *(undefined8 *)(*(long *)(param_1 + 0x88) + (long)iVar10 * 8 + 8) = uVar12;
      }
      else {
LAB_00847964:
        iVar8 = *(int *)(param_1 + 0x80);
        iVar10 = *piVar15;
        if (iVar10 <= iVar8) {
          if (iVar10 == *(int *)(param_1 + 0x84)) goto LAB_00847cb8;
          goto LAB_00847ccc;
        }
        *(int *)(param_1 + 0x80) = iVar8 + 1;
        uVar12 = *(undefined8 *)(piVar15 + (long)iVar8 * 2 + 2);
      }
      uVar11 = FUN_0080cab0(param_2);
      uVar13 = FUN_008503d0(uVar12,param_2);
      if ((uVar13 & 1) == 0) {
        return 0;
      }
      uVar13 = FUN_0080cc00(param_2,uVar11);
      if ((uVar13 & 1) == 0) {
        return 0;
      }
      pcVar17 = (char *)*param_2;
      if ((char *)param_2[1] <= pcVar17) goto LAB_008477e8;
    } while (*pcVar17 == '*');
    if (*pcVar17 == '2') {
      do {
        *param_2 = (ulong)(pcVar17 + 1);
        piVar15 = *(int **)(param_1 + 0xa0);
        if (piVar15 == (int *)0x0) {
LAB_00847d5c:
          iVar10 = *(int *)(param_1 + 0x9c);
LAB_00847d60:
          FUN_00824290(param_1 + 0x90,iVar10 + 1);
          piVar15 = *(int **)(param_1 + 0xa0);
          iVar10 = *piVar15;
LAB_00847d74:
          *piVar15 = iVar10 + 1;
          uVar12 = FUN_007f7c70(0,*(undefined8 *)(param_1 + 0x90));
          iVar10 = *(int *)(param_1 + 0x98);
          *(int *)(param_1 + 0x98) = iVar10 + 1;
          *(undefined8 *)(*(long *)(param_1 + 0xa0) + (long)iVar10 * 8 + 8) = uVar12;
        }
        else {
LAB_008479ac:
          iVar8 = *(int *)(param_1 + 0x98);
          iVar10 = *piVar15;
          if (iVar10 <= iVar8) {
            if (iVar10 == *(int *)(param_1 + 0x9c)) goto LAB_00847d60;
            goto LAB_00847d74;
          }
          *(int *)(param_1 + 0x98) = iVar8 + 1;
          uVar12 = *(undefined8 *)(piVar15 + (long)iVar8 * 2 + 2);
        }
        uVar11 = FUN_0080cab0(param_2);
        uVar13 = FUN_008524a0(uVar12,param_2);
        if ((uVar13 & 1) == 0) {
          return 0;
        }
        uVar13 = FUN_0080cc00(param_2,uVar11);
        if ((uVar13 & 1) == 0) {
          return 0;
        }
        pcVar17 = (char *)*param_2;
        if ((char *)param_2[1] <= pcVar17) goto LAB_008477e8;
      } while (*pcVar17 == '2');
      if (*pcVar17 == ':') {
        do {
          *param_2 = (ulong)(pcVar17 + 1);
          piVar15 = *(int **)(param_1 + 0xb8);
          if (piVar15 == (int *)0x0) {
LAB_00847e04:
            iVar10 = *(int *)(param_1 + 0xb4);
LAB_00847e08:
            FUN_00824290(param_1 + 0xa8,iVar10 + 1);
            piVar15 = *(int **)(param_1 + 0xb8);
            iVar10 = *piVar15;
LAB_00847e1c:
            *piVar15 = iVar10 + 1;
            uVar12 = FUN_007f7cf0(0,*(undefined8 *)(param_1 + 0xa8));
            iVar10 = *(int *)(param_1 + 0xb0);
            *(int *)(param_1 + 0xb0) = iVar10 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0xb8) + (long)iVar10 * 8 + 8) = uVar12;
          }
          else {
LAB_008479f4:
            iVar8 = *(int *)(param_1 + 0xb0);
            iVar10 = *piVar15;
            if (iVar10 <= iVar8) {
              if (iVar10 == *(int *)(param_1 + 0xb4)) goto LAB_00847e08;
              goto LAB_00847e1c;
            }
            *(int *)(param_1 + 0xb0) = iVar8 + 1;
            uVar12 = *(undefined8 *)(piVar15 + (long)iVar8 * 2 + 2);
          }
          uVar11 = FUN_0080cab0(param_2);
          uVar13 = FUN_0084de10(uVar12,param_2);
          if ((uVar13 & 1) == 0) {
            return 0;
          }
          uVar13 = FUN_0080cc00(param_2,uVar11);
          if ((uVar13 & 1) == 0) {
            return 0;
          }
          pcVar17 = (char *)*param_2;
          if ((char *)param_2[1] <= pcVar17) goto LAB_008477e8;
        } while (*pcVar17 == ':');
        *(int *)(param_2 + 7) = (int)param_2[7] + 1;
        if (*pcVar17 == 'B') {
          *param_2 = (ulong)(pcVar17 + 1);
LAB_00847eb0:
          plVar21 = *(long **)(param_1 + 0xc0);
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200;
          if (plVar21 == (long *)0x0) {
            plVar21 = operator_new(0x88);
            *plVar21 = (long)puVar1;
            FUN_00825430(plVar21 + 1);
            plVar21[5] = 0;
            plVar21[0xe] = 0;
            plVar21[0xf] = 0;
            plVar21[0xd] = 0;
            if (*(long *)PTR_DAT_02716d70 != 2) {
              local_70 = PTR_LAB_02716d78;
              local_68 = 0;
              local_78 = puVar2;
              FUN_00801c10(PTR_DAT_02716d70,&local_78);
              FUN_00801390(&local_78);
            }
            plVar21[6] = 0;
            lVar14 = *(long *)PTR_DAT_02716d10;
            *(undefined4 *)(plVar21 + 0x10) = 0;
            plVar21[7] = lVar14;
            plVar21[8] = lVar14;
            plVar21[9] = 0x100000000;
            plVar21[10] = lVar14;
            plVar21[0xb] = lVar14;
            plVar21[0xc] = lVar14;
            *(long **)(param_1 + 0xc0) = plVar21;
          }
          pcVar17 = (char *)*param_2;
          if ((pcVar17 < (char *)param_2[1]) && (cVar7 = *pcVar17, -1 < cVar7)) {
            *param_2 = (ulong)(pcVar17 + 1);
            uVar13 = FUN_0080ca20(param_2,cVar7);
          }
          else {
            iVar10 = FUN_0080d720(param_2);
            if (iVar10 < 0) {
              return 0;
            }
            uVar13 = FUN_0080ca20(param_2,iVar10);
          }
          if (((-1 < (long)uVar13) && (uVar16 = FUN_008547a0(plVar21,param_2), (uVar16 & 1) != 0))
             && (uVar13 = FUN_0080cb90(param_2,uVar13 & 0xffffffff), (uVar13 & 1) != 0)) {
            pcVar17 = (char *)*param_2;
            if (((char *)param_2[1] <= pcVar17) || (*pcVar17 != 'J')) goto LAB_008477f4;
            *param_2 = (ulong)(pcVar17 + 1);
LAB_00847fe4:
            plVar21 = *(long **)(param_1 + 200);
            *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x400;
            if (plVar21 == (long *)0x0) {
              plVar21 = operator_new(0x30);
              plVar21[4] = 0;
              plVar21[5] = 0;
              plVar21[2] = 0;
              plVar21[3] = 0;
              *plVar21 = (long)puVar5;
              plVar21[1] = 0;
              *(long **)(param_1 + 200) = plVar21;
            }
            pcVar17 = (char *)*param_2;
            if ((pcVar17 < (char *)param_2[1]) && (cVar7 = *pcVar17, -1 < cVar7)) {
              *param_2 = (ulong)(pcVar17 + 1);
              uVar13 = FUN_0080ca20(param_2,cVar7);
            }
            else {
              iVar10 = FUN_0080d720(param_2);
              if (iVar10 < 0) {
                return 0;
              }
              uVar13 = FUN_0080ca20(param_2,iVar10);
            }
            if (((-1 < (long)uVar13) && (uVar16 = FUN_0085df50(plVar21,param_2), (uVar16 & 1) != 0))
               && (uVar13 = FUN_0080cb90(param_2,uVar13 & 0xffffffff), (uVar13 & 1) != 0)) {
              pbVar19 = (byte *)*param_2;
              pbVar18 = (byte *)param_2[1];
              if ((pbVar18 <= pbVar19) || (*pbVar19 != 0x50)) goto LAB_008477f4;
              do {
                pbVar19 = pbVar19 + 1;
                *param_2 = (ulong)pbVar19;
                if (pbVar19 < pbVar18) {
LAB_008480b0:
                  uVar13 = (ulong)*pbVar19;
                  if ((char)*pbVar19 < '\0') goto LAB_008480d4;
                  *param_2 = (ulong)(pbVar19 + 1);
                  iVar10 = *(int *)(param_1 + 0x40);
                  if (iVar10 == *(int *)(param_1 + 0x44)) goto LAB_008480f4;
                }
                else {
LAB_00847ad0:
                  uVar13 = 0;
LAB_008480d4:
                  uVar13 = FUN_0080d5d0(param_2,uVar13);
                  if ((long)uVar13 < 0) {
                    return 0;
                  }
                  iVar10 = *(int *)(param_1 + 0x40);
                  if (iVar10 == *(int *)(param_1 + 0x44)) {
LAB_008480f4:
                    FUN_007f7a40(piVar3,iVar10 + 1);
                    iVar10 = *piVar3;
                  }
                }
                *(int *)(param_1 + 0x40) = iVar10 + 1;
                *(int *)(*(long *)(param_1 + 0x48) + (long)iVar10 * 4 + 8) = (int)uVar13;
                if (0 < *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40)) {
                  iVar10 = (*(int *)(param_1 + 0x44) + 1) - *(int *)(param_1 + 0x40);
                  do {
                    pbVar19 = (byte *)*param_2;
                    if (((byte *)param_2[1] <= pbVar19) || (*pbVar19 != 0x50)) break;
                    pbVar18 = pbVar19 + 1;
                    *param_2 = (ulong)pbVar18;
                    if (pbVar18 < (byte *)param_2[1]) {
                      uVar13 = (ulong)*pbVar18;
                      if ((char)*pbVar18 < '\0') goto LAB_00848174;
                      *param_2 = (ulong)(pbVar19 + 2);
                    }
                    else {
                      uVar13 = 0;
LAB_00848174:
                      uVar13 = FUN_0080d5d0(param_2,uVar13);
                      if ((long)uVar13 < 0) {
                        return 0;
                      }
                    }
                    iVar8 = *(int *)(param_1 + 0x40);
                    iVar10 = iVar10 + -1;
                    *(int *)(param_1 + 0x40) = iVar8 + 1;
                    *(int *)(*(long *)(param_1 + 0x48) + (long)iVar8 * 4 + 8) = (int)uVar13;
                  } while (1 < iVar10);
                }
LAB_008481a8:
                pbVar19 = (byte *)*param_2;
                pbVar18 = (byte *)param_2[1];
                if (pbVar18 <= pbVar19) goto LAB_008477f4;
              } while (*pbVar19 == 0x50);
              if (*pbVar19 != 0x58) goto LAB_008477f4;
              do {
                pbVar19 = pbVar19 + 1;
                *param_2 = (ulong)pbVar19;
                if (pbVar19 < pbVar18) {
LAB_008481dc:
                  uVar13 = (ulong)*pbVar19;
                  if ((char)*pbVar19 < '\0') goto LAB_00848200;
                  *param_2 = (ulong)(pbVar19 + 1);
                  iVar10 = *(int *)(param_1 + 0x50);
                  if (iVar10 == *(int *)(param_1 + 0x54)) goto LAB_00848220;
                }
                else {
LAB_00847ae4:
                  uVar13 = 0;
LAB_00848200:
                  uVar13 = FUN_0080d5d0(param_2,uVar13);
                  if ((long)uVar13 < 0) {
                    return 0;
                  }
                  iVar10 = *(int *)(param_1 + 0x50);
                  if (iVar10 == *(int *)(param_1 + 0x54)) {
LAB_00848220:
                    FUN_007f7a40(piVar4,iVar10 + 1);
                    iVar10 = *piVar4;
                  }
                }
                *(int *)(param_1 + 0x50) = iVar10 + 1;
                *(int *)(*(long *)(param_1 + 0x58) + (long)iVar10 * 4 + 8) = (int)uVar13;
                if (0 < *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50)) {
                  iVar10 = (*(int *)(param_1 + 0x54) + 1) - *(int *)(param_1 + 0x50);
                  do {
                    pbVar19 = (byte *)*param_2;
                    if (((byte *)param_2[1] <= pbVar19) || (*pbVar19 != 0x58)) break;
                    pbVar18 = pbVar19 + 1;
                    *param_2 = (ulong)pbVar18;
                    if (pbVar18 < (byte *)param_2[1]) {
                      uVar13 = (ulong)*pbVar18;
                      if ((char)*pbVar18 < '\0') goto LAB_008482a0;
                      *param_2 = (ulong)(pbVar19 + 2);
                    }
                    else {
                      uVar13 = 0;
LAB_008482a0:
                      uVar13 = FUN_0080d5d0(param_2,uVar13);
                      if ((long)uVar13 < 0) {
                        return 0;
                      }
                    }
                    iVar8 = *(int *)(param_1 + 0x50);
                    iVar10 = iVar10 + -1;
                    *(int *)(param_1 + 0x50) = iVar8 + 1;
                    *(int *)(*(long *)(param_1 + 0x58) + (long)iVar8 * 4 + 8) = (int)uVar13;
                  } while (1 < iVar10);
                }
LAB_008482d4:
                pbVar19 = (byte *)*param_2;
                pbVar18 = (byte *)param_2[1];
                if (pbVar18 <= pbVar19) goto LAB_008477f4;
              } while (*pbVar19 == 0x58);
              if (*pbVar19 != 0x62) goto LAB_008477f4;
              *param_2 = (ulong)(pbVar19 + 1);
LAB_00848300:
              *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x800;
              lVar14 = *(long *)(param_1 + 0xd0);
              if (lVar14 == *(long *)PTR_DAT_02716d10) {
                FUN_009b58d0((long *)(param_1 + 0xd0),*(long *)PTR_DAT_02716d10);
                lVar14 = *(long *)(param_1 + 0xd0);
              }
              uVar13 = FUN_008160d0(param_2,lVar14);
              if ((uVar13 & 1) != 0) {
                if ((*param_2 == param_2[1]) &&
                   ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5]))))
                {
                  *(undefined4 *)(param_2 + 4) = 0;
                  *(undefined1 *)((long)param_2 + 0x24) = 1;
                  return 1;
                }
                goto LAB_008477f4;
              }
            }
          }
          return 0;
        }
        goto LAB_008477f4;
      }
    }
  }
LAB_008477e8:
  *(int *)(param_2 + 7) = (int)param_2[7] + 1;
  goto LAB_008477f4;
}


