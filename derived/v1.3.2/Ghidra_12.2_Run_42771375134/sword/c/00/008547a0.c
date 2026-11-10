/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008547a0; name: FUN_008547a0
 */


undefined8 FUN_008547a0(long param_1,ulong *param_2)

{
  ulong *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  char *pcVar13;
  int *piVar14;
  uint uVar15;
  ulong uVar16;
  byte *pbVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  
  puVar6 = PTR_DAT_027171d8;
  puVar5 = PTR_DAT_02716d10;
  puVar1 = (ulong *)(param_1 + 0x28);
LAB_00854814:
  while( true ) {
    pbVar12 = (byte *)*param_2;
    if (pbVar12 < (byte *)param_2[1]) break;
    uVar15 = 0;
LAB_0085518c:
    iVar9 = FUN_0080d8c0(param_2,uVar15);
    bVar7 = iVar9 - 1U < 0x3fff;
    uVar16 = (ulong)CONCAT14(bVar7,iVar9);
    *(int *)(param_2 + 4) = iVar9;
    if (bVar7) goto LAB_00854848;
switchD_00854860_caseD_2:
    if ((uint)uVar16 == 0) {
      return 1;
    }
    if (((uint)uVar16 & 7) == 4) {
      return 1;
    }
LAB_00854f5c:
    if (((uint)(uVar16 >> 6) & 0x3ffffff) < 0x7d) {
      if ((*puVar1 & 1) == 0) {
        uVar11 = FUN_009bb7d0(puVar1);
      }
      else {
        uVar11 = *puVar1 & 0xfffffffffffffffe;
      }
      uVar16 = FUN_00810550(param_2,uVar16 & 0xffffffff,uVar11);
      if ((uVar16 & 1) == 0) {
        return 0;
      }
    }
    else {
      uVar18 = *(undefined8 *)puVar6;
      if ((*puVar1 & 1) == 0) {
        uVar11 = FUN_009bb7d0(puVar1);
      }
      else {
        uVar11 = *puVar1 & 0xfffffffffffffffe;
      }
      uVar16 = FUN_0083fc30(param_1 + 8,uVar16 & 0xffffffff,param_2,uVar18,uVar11);
      if ((uVar16 & 1) == 0) {
        return 0;
      }
    }
  }
  bVar3 = *pbVar12;
  uVar15 = (uint)bVar3;
  if ((char)bVar3 < '\x01') {
    if (((byte *)param_2[1] <= pbVar12 + 1) ||
       (bVar2 = pbVar12[1], -1 < (char)((bVar2 ^ 0x80) & bVar3))) goto LAB_0085518c;
    uVar15 = (uVar15 + (uint)bVar2 * 0x80) - 0x80;
    uVar16 = (ulong)uVar15;
    *(uint *)(param_2 + 4) = uVar15;
    *param_2 = (ulong)(pbVar12 + 2);
  }
  else {
    uVar16 = (ulong)bVar3;
    *(uint *)(param_2 + 4) = uVar15;
    *param_2 = (ulong)(pbVar12 + 1);
  }
LAB_00854848:
  uVar15 = (uint)(uVar16 >> 3) & 0x1fffffff;
  uVar19 = (uint)uVar16;
  switch(uVar15) {
  case 1:
    if (uVar19 != 10) {
LAB_00854f4c:
      if ((uVar19 == 0) || ((uVar19 & 7) == 4)) {
        return 1;
      }
      goto LAB_00854f5c;
    }
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
    lVar10 = *(long *)(param_1 + 0x38);
    if (lVar10 == *(long *)puVar5) {
      FUN_009b58d0((long *)(param_1 + 0x38),*(long *)puVar5);
      lVar10 = *(long *)(param_1 + 0x38);
    }
    uVar16 = FUN_008160d0(param_2,lVar10);
    if ((uVar16 & 1) == 0) {
      return 0;
    }
    pcVar13 = (char *)*param_2;
    if ((pcVar13 < (char *)param_2[1]) && (*pcVar13 == 'B')) {
      *param_2 = (ulong)(pcVar13 + 1);
      goto LAB_00854940;
    }
    goto LAB_00854814;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x13:
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
    goto switchD_00854860_caseD_2;
  case 8:
    if (uVar19 != 0x42) goto LAB_00854f4c;
LAB_00854940:
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 2;
    lVar10 = *(long *)(param_1 + 0x40);
    if (lVar10 == *(long *)puVar5) {
      FUN_009b58d0((long *)(param_1 + 0x40),*(long *)puVar5);
      lVar10 = *(long *)(param_1 + 0x40);
    }
    uVar16 = FUN_008160d0(param_2,lVar10);
    if ((uVar16 & 1) == 0) {
      return 0;
    }
    pbVar12 = (byte *)*param_2;
    if (((byte *)param_2[1] <= pbVar12) || (*pbVar12 != 0x48)) goto LAB_00854814;
    pbVar12 = pbVar12 + 1;
    *param_2 = (ulong)pbVar12;
    if (pbVar12 < (byte *)param_2[1]) goto LAB_008549c0;
LAB_008549a4:
    uVar16 = 0;
LAB_00855148:
    uVar16 = FUN_0080d5d0(param_2,uVar16);
    uVar15 = (uint)uVar16;
    if ((long)uVar16 < 0) {
      return 0;
    }
    if (uVar15 - 1 < 3) goto LAB_00855168;
LAB_008549e0:
    if ((*puVar1 & 1) == 0) {
      uVar16 = FUN_009bb7d0(puVar1);
    }
    else {
      uVar16 = *puVar1 & 0xfffffffffffffffe;
    }
    FUN_0080fc40(uVar16,9,(long)(int)uVar15);
    pbVar12 = (byte *)*param_2;
    pbVar17 = (byte *)param_2[1];
    if (pbVar17 <= pbVar12) goto LAB_00854814;
    break;
  case 9:
    if (uVar19 != 0x48) goto LAB_00854f4c;
    pbVar12 = (byte *)*param_2;
    if ((byte *)param_2[1] <= pbVar12) goto LAB_008549a4;
LAB_008549c0:
    uVar15 = (uint)*pbVar12;
    uVar16 = (ulong)uVar15;
    if ((char)*pbVar12 < '\0') goto LAB_00855148;
    *param_2 = (ulong)(pbVar12 + 1);
    if (2 < uVar15 - 1) goto LAB_008549e0;
LAB_00855168:
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x20;
    *(int *)(param_1 + 0x4c) = (int)uVar16;
    pbVar12 = (byte *)*param_2;
    pbVar17 = (byte *)param_2[1];
    if (pbVar17 <= pbVar12) goto LAB_00854814;
    break;
  case 10:
    if (uVar19 != 0x50) goto LAB_00854f4c;
    pbVar12 = (byte *)*param_2;
    if (pbVar12 < (byte *)param_2[1]) goto LAB_00854a20;
    goto LAB_00854a4c;
  case 0xb:
    if (uVar19 != 0x5a) goto LAB_00854f4c;
    goto LAB_00854a9c;
  case 0x10:
    if (uVar19 != 0x80) goto LAB_00854f4c;
    pbVar12 = (byte *)*param_2;
    if (pbVar12 < (byte *)param_2[1]) goto LAB_00854b10;
    goto LAB_00854b3c;
  case 0x11:
    if (uVar19 != 0x88) goto LAB_00854f4c;
    pbVar12 = (byte *)*param_2;
    if (pbVar12 < (byte *)param_2[1]) goto LAB_00854b98;
    goto LAB_00854bc4;
  case 0x12:
    if (uVar19 != 0x90) goto LAB_00854f4c;
    pbVar12 = (byte *)*param_2;
    if (pbVar12 < (byte *)param_2[1]) goto LAB_00854c20;
    goto LAB_00854c4c;
  case 0x14:
    if (uVar19 != 0xa0) goto LAB_00854f4c;
    pbVar12 = (byte *)*param_2;
    if (pbVar12 < (byte *)param_2[1]) goto LAB_00854ca8;
    goto LAB_00854cd4;
  case 0x17:
    if (uVar19 != 0xb8) goto LAB_00854f4c;
    pbVar12 = (byte *)*param_2;
    if (pbVar12 < (byte *)param_2[1]) goto LAB_00854d30;
    goto LAB_00854d5c;
  case 0x1b:
    if (uVar19 != 0xd8) goto LAB_00854f4c;
    pbVar12 = (byte *)*param_2;
    if (pbVar12 < (byte *)param_2[1]) goto LAB_00854db8;
    goto LAB_00854de4;
  case 0x1f:
    if (uVar19 != 0xf8) goto LAB_00854f4c;
    pbVar12 = (byte *)*param_2;
    if (pbVar12 < (byte *)param_2[1]) goto LAB_00854e40;
    goto LAB_00854e6c;
  case 0x24:
    if (uVar19 != 0x122) goto LAB_00854f4c;
    goto LAB_00854ed0;
  case 0x25:
    if (uVar19 != 0x12a) goto LAB_00854f4c;
    goto LAB_00854fb4;
  default:
    if (uVar15 != 999) goto switchD_00854860_caseD_2;
    if (uVar19 != 0x1f3a) goto LAB_00854f4c;
    goto LAB_00855024;
  }
  if (*pbVar12 == 0x50) {
    pbVar12 = pbVar12 + 1;
    *param_2 = (ulong)pbVar12;
    if (pbVar12 < pbVar17) {
LAB_00854a20:
      if ((char)*pbVar12 < '\0') goto LAB_00854a4c;
      uVar16 = (ulong)*pbVar12;
      *param_2 = (ulong)(pbVar12 + 1);
    }
    else {
LAB_00854a4c:
      auVar20 = FUN_0080d3e0(param_2);
      uVar16 = auVar20._0_8_;
      if ((auVar20._8_8_ & 1) == 0) {
        return 0;
      }
    }
    *(bool *)(param_1 + 0x48) = uVar16 != 0;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 4;
    pcVar13 = (char *)*param_2;
    if ((pcVar13 < (char *)param_2[1]) && (*pcVar13 == 'Z')) {
      *param_2 = (ulong)(pcVar13 + 1);
LAB_00854a9c:
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x40;
      lVar10 = *(long *)(param_1 + 0x50);
      if (lVar10 == *(long *)puVar5) {
        FUN_009b58d0((long *)(param_1 + 0x50),*(long *)puVar5);
        lVar10 = *(long *)(param_1 + 0x50);
      }
      uVar16 = FUN_008160d0(param_2,lVar10);
      if ((uVar16 & 1) == 0) {
        return 0;
      }
      pcVar13 = (char *)*param_2;
      if (((1 < (int)(byte *)param_2[1] - (int)pcVar13) && (*pcVar13 == -0x80)) &&
         (pcVar13[1] == '\x01')) {
        pbVar12 = (byte *)(pcVar13 + 2);
        *param_2 = (ulong)pbVar12;
        if (pbVar12 < (byte *)param_2[1]) {
LAB_00854b10:
          if ((char)*pbVar12 < '\0') goto LAB_00854b3c;
          uVar16 = (ulong)*pbVar12;
          *param_2 = (ulong)(pbVar12 + 1);
        }
        else {
LAB_00854b3c:
          auVar20 = FUN_0080d3e0(param_2);
          uVar16 = auVar20._0_8_;
          if ((auVar20._8_8_ & 1) == 0) {
            return 0;
          }
        }
        *(bool *)(param_1 + 0x4b) = uVar16 != 0;
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80;
        pcVar13 = (char *)*param_2;
        if (((1 < (int)(byte *)param_2[1] - (int)pcVar13) && (*pcVar13 == -0x78)) &&
           (pcVar13[1] == '\x01')) {
          pbVar12 = (byte *)(pcVar13 + 2);
          *param_2 = (ulong)pbVar12;
          if (pbVar12 < (byte *)param_2[1]) {
LAB_00854b98:
            if ((char)*pbVar12 < '\0') goto LAB_00854bc4;
            uVar16 = (ulong)*pbVar12;
            *param_2 = (ulong)(pbVar12 + 1);
          }
          else {
LAB_00854bc4:
            auVar20 = FUN_0080d3e0(param_2);
            uVar16 = auVar20._0_8_;
            if ((auVar20._8_8_ & 1) == 0) {
              return 0;
            }
          }
          *(bool *)(param_1 + 0x80) = uVar16 != 0;
          *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x100;
          pcVar13 = (char *)*param_2;
          if (((1 < (int)(byte *)param_2[1] - (int)pcVar13) && (*pcVar13 == -0x70)) &&
             (pcVar13[1] == '\x01')) {
            pbVar12 = (byte *)(pcVar13 + 2);
            *param_2 = (ulong)pbVar12;
            if (pbVar12 < (byte *)param_2[1]) {
LAB_00854c20:
              if ((char)*pbVar12 < '\0') goto LAB_00854c4c;
              uVar16 = (ulong)*pbVar12;
              *param_2 = (ulong)(pbVar12 + 1);
            }
            else {
LAB_00854c4c:
              auVar20 = FUN_0080d3e0(param_2);
              uVar16 = auVar20._0_8_;
              if ((auVar20._8_8_ & 1) == 0) {
                return 0;
              }
            }
            *(bool *)(param_1 + 0x81) = uVar16 != 0;
            *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x200;
            pcVar13 = (char *)*param_2;
            if (((1 < (int)(byte *)param_2[1] - (int)pcVar13) && (*pcVar13 == -0x60)) &&
               (pcVar13[1] == '\x01')) {
              pbVar12 = (byte *)(pcVar13 + 2);
              *param_2 = (ulong)pbVar12;
              if (pbVar12 < (byte *)param_2[1]) {
LAB_00854ca8:
                if ((char)*pbVar12 < '\0') goto LAB_00854cd4;
                uVar16 = (ulong)*pbVar12;
                *param_2 = (ulong)(pbVar12 + 1);
              }
              else {
LAB_00854cd4:
                auVar20 = FUN_0080d3e0(param_2);
                uVar16 = auVar20._0_8_;
                if ((auVar20._8_8_ & 1) == 0) {
                  return 0;
                }
              }
              *(bool *)(param_1 + 0x49) = uVar16 != 0;
              *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 8;
              pcVar13 = (char *)*param_2;
              if (((1 < (int)(byte *)param_2[1] - (int)pcVar13) && (*pcVar13 == -0x48)) &&
                 (pcVar13[1] == '\x01')) {
                pbVar12 = (byte *)(pcVar13 + 2);
                *param_2 = (ulong)pbVar12;
                if (pbVar12 < (byte *)param_2[1]) {
LAB_00854d30:
                  if ((char)*pbVar12 < '\0') goto LAB_00854d5c;
                  uVar16 = (ulong)*pbVar12;
                  *param_2 = (ulong)(pbVar12 + 1);
                }
                else {
LAB_00854d5c:
                  auVar20 = FUN_0080d3e0(param_2);
                  uVar16 = auVar20._0_8_;
                  if ((auVar20._8_8_ & 1) == 0) {
                    return 0;
                  }
                }
                *(bool *)(param_1 + 0x82) = uVar16 != 0;
                *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x400;
                pcVar13 = (char *)*param_2;
                if (((1 < (int)(byte *)param_2[1] - (int)pcVar13) && (*pcVar13 == -0x28)) &&
                   (pcVar13[1] == '\x01')) {
                  pbVar12 = (byte *)(pcVar13 + 2);
                  *param_2 = (ulong)pbVar12;
                  if (pbVar12 < (byte *)param_2[1]) {
LAB_00854db8:
                    if ((char)*pbVar12 < '\0') goto LAB_00854de4;
                    uVar16 = (ulong)*pbVar12;
                    *param_2 = (ulong)(pbVar12 + 1);
                  }
                  else {
LAB_00854de4:
                    auVar20 = FUN_0080d3e0(param_2);
                    uVar16 = auVar20._0_8_;
                    if ((auVar20._8_8_ & 1) == 0) {
                      return 0;
                    }
                  }
                  *(bool *)(param_1 + 0x4a) = uVar16 != 0;
                  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x10;
                  pcVar13 = (char *)*param_2;
                  if (((1 < (int)(byte *)param_2[1] - (int)pcVar13) && (*pcVar13 == -8)) &&
                     (pcVar13[1] == '\x01')) {
                    pbVar12 = (byte *)(pcVar13 + 2);
                    *param_2 = (ulong)pbVar12;
                    if (pbVar12 < (byte *)param_2[1]) {
LAB_00854e40:
                      if ((char)*pbVar12 < '\0') goto LAB_00854e6c;
                      uVar16 = (ulong)*pbVar12;
                      *param_2 = (ulong)(pbVar12 + 1);
                    }
                    else {
LAB_00854e6c:
                      auVar20 = FUN_0080d3e0(param_2);
                      uVar16 = auVar20._0_8_;
                      if ((auVar20._8_8_ & 1) == 0) {
                        return 0;
                      }
                    }
                    *(bool *)(param_1 + 0x83) = uVar16 != 0;
                    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x800;
                    pcVar13 = (char *)*param_2;
                    if (((1 < (int)param_2[1] - (int)pcVar13) && (*pcVar13 == -0x5e)) &&
                       (pcVar13[1] == '\x02')) {
                      *param_2 = (ulong)(pcVar13 + 2);
LAB_00854ed0:
                      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x1000;
                      lVar10 = *(long *)(param_1 + 0x58);
                      if (lVar10 == *(long *)puVar5) {
                        FUN_009b58d0((long *)(param_1 + 0x58),*(long *)puVar5);
                        lVar10 = *(long *)(param_1 + 0x58);
                      }
                      uVar16 = FUN_008160d0(param_2,lVar10);
                      if ((uVar16 & 1) != 0) {
                        pcVar13 = (char *)*param_2;
                        if ((((int)param_2[1] - (int)pcVar13 < 2) || (*pcVar13 != -0x56)) ||
                           (pcVar13[1] != '\x02')) goto LAB_00854814;
                        *param_2 = (ulong)(pcVar13 + 2);
LAB_00854fb4:
                        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x2000;
                        lVar10 = *(long *)(param_1 + 0x60);
                        if (lVar10 == *(long *)puVar5) {
                          FUN_009b58d0((long *)(param_1 + 0x60),*(long *)puVar5);
                          lVar10 = *(long *)(param_1 + 0x60);
                        }
                        uVar16 = FUN_008160d0(param_2,lVar10);
                        if ((uVar16 & 1) != 0) {
                          pcVar13 = (char *)*param_2;
                          if ((((int)param_2[1] - (int)pcVar13 < 2) || (*pcVar13 != -0x46)) ||
                             (pcVar13[1] != '>')) goto LAB_00854814;
                          *param_2 = (ulong)(pcVar13 + 2);
LAB_00855024:
                          uVar16 = param_2[7];
                          *(int *)(param_2 + 7) = (int)uVar16 + -1;
                          if (0 < (int)uVar16) {
                            do {
                              piVar14 = *(int **)(param_1 + 0x78);
                              if (piVar14 == (int *)0x0) {
                                iVar9 = *(int *)(param_1 + 0x74);
LAB_00855080:
                                FUN_00824290(param_1 + 0x68,iVar9 + 1);
                                piVar14 = *(int **)(param_1 + 0x78);
                                iVar9 = *piVar14;
LAB_00855094:
                                *piVar14 = iVar9 + 1;
                                uVar18 = FUN_00860770(0,*(undefined8 *)(param_1 + 0x68));
                                iVar9 = *(int *)(param_1 + 0x70);
                                *(int *)(param_1 + 0x70) = iVar9 + 1;
                                *(undefined8 *)(*(long *)(param_1 + 0x78) + (long)iVar9 * 8 + 8) =
                                     uVar18;
                              }
                              else {
                                iVar4 = *(int *)(param_1 + 0x70);
                                iVar9 = *piVar14;
                                if (iVar9 <= iVar4) {
                                  if (iVar9 == *(int *)(param_1 + 0x74)) goto LAB_00855080;
                                  goto LAB_00855094;
                                }
                                *(int *)(param_1 + 0x70) = iVar4 + 1;
                                uVar18 = *(undefined8 *)(piVar14 + (long)iVar4 * 2 + 2);
                              }
                              uVar8 = FUN_0080cab0(param_2);
                              uVar16 = FUN_0085b9d0(uVar18,param_2);
                              if ((uVar16 & 1) == 0) {
                                return 0;
                              }
                              uVar16 = FUN_0080cc00(param_2,uVar8);
                              if ((uVar16 & 1) == 0) {
                                return 0;
                              }
                              pcVar13 = (char *)*param_2;
                              if ((((int)(char *)param_2[1] - (int)pcVar13 < 2) ||
                                  (*pcVar13 != -0x46)) || (pcVar13[1] != '>')) goto LAB_00855118;
                              *param_2 = (ulong)(pcVar13 + 2);
                            } while( true );
                          }
                        }
                      }
                      return 0;
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
  goto LAB_00854814;
LAB_00855118:
  *(int *)(param_2 + 7) = (int)param_2[7] + 1;
  if ((pcVar13 == (char *)param_2[1]) &&
     ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_00854814;
}


