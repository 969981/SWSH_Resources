/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ed740; name: FUN_007ed740
 */


void FUN_007ed740(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  bool bVar1;
  int *piVar2;
  long lVar3;
  size_t sVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  string sVar9;
  void *pvVar10;
  int iVar11;
  byte *pbVar12;
  undefined8 uVar13;
  long lVar14;
  size_t sVar15;
  byte *pbVar16;
  string sVar17;
  int iVar18;
  string *__s2;
  string *psVar19;
  long *plVar20;
  ulong uVar21;
  string *psVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  ulong unaff_x21;
  ulong uVar27;
  undefined8 *puVar28;
  ulong uVar29;
  long lVar30;
  string *psVar31;
  long lVar32;
  undefined8 uVar33;
  long local_2c8;
  byte local_288 [16];
  void *local_278;
  void *local_270;
  ulong local_268;
  long *local_260;
  long local_258;
  float local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_158;
  undefined4 local_150;
  char *local_128;
  undefined4 local_120;
  undefined1 auStack_11c [36];
  byte *local_f8;
  uint local_f0;
  undefined1 auStack_ec [36];
  char *local_c8;
  undefined4 local_c0;
  undefined1 auStack_bc [36];
  string *local_98;
  uint local_90;
  undefined1 auStack_8c [44];
  
  lVar14 = param_3;
  if (param_3 == 0) {
    lVar14 = *(long *)(param_1 + 0x50);
  }
  pbVar12 = (byte *)FUN_007e1d20(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar14 + 8));
  if ((*pbVar12 & 1) == 0) {
    if (*pbVar12 >> 1 == 0) goto LAB_007ed7cc;
  }
  else if (*(long *)(pbVar12 + 8) == 0) goto LAB_007ed7cc;
  std::string::append((ulong)pbVar12,'\x01');
LAB_007ed7cc:
  pbVar16 = *(byte **)(param_2 + 0x18);
  pbVar5 = *(byte **)(pbVar16 + 0x10);
  if ((*pbVar16 & 1) == 0) {
    pbVar5 = pbVar16 + 1;
  }
  std::string::append((char *)pbVar12,(ulong)pbVar5);
  FUN_007ebbc0(param_1,*(undefined8 *)(param_2 + 0x18),pbVar12,param_2);
  uVar13 = FUN_007e1d20(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x18));
  *param_4 = uVar13;
  param_4[1] = pbVar12;
  param_4[2] = *(undefined8 *)(param_1 + 0x50);
  param_4[3] = param_3;
  *(undefined2 *)(param_4 + 5) = 0;
  *(undefined4 *)(param_4 + 7) = *(undefined4 *)(param_2 + 0xa0);
  uVar13 = FUN_007e1f40(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0xa0) * 0x30);
  param_4[8] = uVar13;
  if ((0 < *(int *)(param_2 + 0xa0)) &&
     (FUN_007f01e0(param_1,*(undefined8 *)(*(long *)(param_2 + 0xa8) + 8),param_4,uVar13),
     1 < *(int *)(param_2 + 0xa0))) {
    unaff_x21 = 0x30;
    lVar14 = 2;
    do {
      FUN_007f01e0(param_1,*(undefined8 *)(*(long *)(param_2 + 0xa8) + lVar14 * 8),param_4,
                   param_4[8] + unaff_x21);
      unaff_x21 = unaff_x21 + 0x30;
      bVar1 = lVar14 < *(int *)(param_2 + 0xa0);
      lVar14 = lVar14 + 1;
    } while (bVar1);
  }
  *(undefined4 *)((long)param_4 + 0x2c) = *(undefined4 *)(param_2 + 0x28);
  uVar13 = FUN_007e1f40(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0x28) * 0x90);
  param_4[6] = uVar13;
  if ((0 < *(int *)(param_2 + 0x28)) &&
     (FUN_007f07a0(param_1,*(undefined8 *)(*(long *)(param_2 + 0x30) + 8),param_4,uVar13,0),
     1 < *(int *)(param_2 + 0x28))) {
    unaff_x21 = 0x90;
    lVar14 = 2;
    do {
      FUN_007f07a0(param_1,*(undefined8 *)(*(long *)(param_2 + 0x30) + lVar14 * 8),param_4,
                   param_4[6] + unaff_x21,0);
      unaff_x21 = unaff_x21 + 0x90;
      bVar1 = lVar14 < *(int *)(param_2 + 0x28);
      lVar14 = lVar14 + 1;
    } while (bVar1);
  }
  *(undefined4 *)(param_4 + 9) = *(undefined4 *)(param_2 + 0x58);
  uVar13 = FUN_007e1f40(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0x58) * 0xa8);
  param_4[10] = uVar13;
  if ((0 < *(int *)(param_2 + 0x58)) &&
     (FUN_007ed740(param_1,*(undefined8 *)(*(long *)(param_2 + 0x60) + 8),param_4,uVar13),
     1 < *(int *)(param_2 + 0x58))) {
    unaff_x21 = 0xa8;
    lVar14 = 2;
    do {
      FUN_007ed740(param_1,*(undefined8 *)(*(long *)(param_2 + 0x60) + lVar14 * 8),param_4,
                   param_4[10] + unaff_x21);
      unaff_x21 = unaff_x21 + 0xa8;
      bVar1 = lVar14 < *(int *)(param_2 + 0x58);
      lVar14 = lVar14 + 1;
    } while (bVar1);
  }
  *(undefined4 *)(param_4 + 0xb) = *(undefined4 *)(param_2 + 0x70);
  uVar13 = FUN_007e1f40(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0x70) * 0x38);
  param_4[0xc] = uVar13;
  if ((0 < *(int *)(param_2 + 0x70)) &&
     (FUN_007eec30(param_1,*(undefined8 *)(*(long *)(param_2 + 0x78) + 8),param_4,uVar13),
     1 < *(int *)(param_2 + 0x70))) {
    unaff_x21 = 0x38;
    lVar14 = 2;
    do {
      FUN_007eec30(param_1,*(undefined8 *)(*(long *)(param_2 + 0x78) + lVar14 * 8),param_4,
                   param_4[0xc] + unaff_x21);
      unaff_x21 = unaff_x21 + 0x38;
      bVar1 = lVar14 < *(int *)(param_2 + 0x70);
      lVar14 = lVar14 + 1;
    } while (bVar1);
  }
  *(undefined4 *)(param_4 + 0xd) = *(undefined4 *)(param_2 + 0x88);
  lVar14 = FUN_007e1f40(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0x88) << 3);
  param_4[0xe] = lVar14;
  if (0 < *(int *)(param_2 + 0x88)) {
    lVar23 = 0;
    unaff_x21 = 1;
    do {
      lVar32 = *(long *)(*(long *)(param_2 + 0x90) + lVar23 + 8);
      iVar11 = *(int *)(lVar32 + 0x18);
      piVar2 = (int *)(lVar14 + lVar23);
      *piVar2 = iVar11;
      iVar18 = *(int *)(lVar32 + 0x1c);
      piVar2[1] = iVar18;
      if (iVar11 < 1) {
        FUN_007eac10(param_1,param_4[1],lVar32,1,"Extension numbers must be positive integers.");
        if (piVar2[1] <= *(int *)(lVar14 + lVar23)) goto LAB_007edb4c;
LAB_007edb10:
        iVar11 = *(int *)(param_2 + 0x88);
      }
      else {
        if (iVar11 < iVar18) goto LAB_007edb10;
LAB_007edb4c:
        FUN_007eac10(param_1,param_4[1],lVar32,1,
                     "Extension range end number must be greater than start number.");
        iVar11 = *(int *)(param_2 + 0x88);
      }
      if ((long)iVar11 <= (long)unaff_x21) break;
      lVar14 = param_4[0xe];
      lVar23 = lVar23 + 8;
      unaff_x21 = unaff_x21 + 1;
    } while( true );
  }
  *(undefined4 *)(param_4 + 0xf) = *(undefined4 *)(param_2 + 0x40);
  uVar13 = FUN_007e1f40(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0x40) * 0x90);
  param_4[0x10] = uVar13;
  if ((0 < *(int *)(param_2 + 0x40)) &&
     (FUN_007f07a0(param_1,*(undefined8 *)(*(long *)(param_2 + 0x48) + 8),param_4,uVar13,1),
     1 < *(int *)(param_2 + 0x40))) {
    unaff_x21 = 0x90;
    lVar14 = 2;
    do {
      FUN_007f07a0(param_1,*(undefined8 *)(*(long *)(param_2 + 0x48) + lVar14 * 8),param_4,
                   param_4[0x10] + unaff_x21,1);
      unaff_x21 = unaff_x21 + 0x90;
      bVar1 = lVar14 < *(int *)(param_2 + 0x40);
      lVar14 = lVar14 + 1;
    } while (bVar1);
  }
  *(undefined4 *)(param_4 + 0x11) = *(undefined4 *)(param_2 + 0xc0);
  lVar14 = FUN_007e1f40(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0xc0) << 3);
  param_4[0x12] = lVar14;
  if (0 < *(int *)(param_2 + 0xc0)) {
    lVar23 = 0;
    unaff_x21 = 1;
    while( true ) {
      lVar32 = *(long *)(*(long *)(param_2 + 200) + lVar23 + 8);
      iVar11 = *(int *)(lVar32 + 0x18);
      *(int *)(lVar14 + lVar23) = iVar11;
      ((int *)(lVar14 + lVar23))[1] = *(int *)(lVar32 + 0x1c);
      if (iVar11 < 1) {
        FUN_007eac10(param_1,param_4[1],lVar32,1,"Reserved numbers must be positive integers.");
        iVar11 = *(int *)(param_2 + 0xc0);
      }
      else {
        iVar11 = *(int *)(param_2 + 0xc0);
      }
      if ((long)iVar11 <= (long)unaff_x21) break;
      lVar14 = param_4[0x12];
      lVar23 = lVar23 + 8;
      unaff_x21 = unaff_x21 + 1;
    }
  }
  uVar6 = *(uint *)(param_2 + 0xd8);
  *(uint *)(param_4 + 0x13) = uVar6;
  uVar13 = FUN_007e1f40(*(undefined8 *)(param_1 + 8),uVar6 << 3);
  param_4[0x14] = uVar13;
  if (0 < (int)uVar6) {
    unaff_x21 = 0;
    do {
      lVar14 = unaff_x21 * 8;
      uVar13 = FUN_007e1d20(*(undefined8 *)(param_1 + 8),
                            *(undefined8 *)(*(long *)(param_2 + 0xe0) + lVar14 + 8));
      unaff_x21 = unaff_x21 + 1;
      *(undefined8 *)(param_4[0x14] + lVar14) = uVar13;
    } while (uVar6 != unaff_x21);
  }
  if (*(char *)(param_2 + 0x10) < '\0') {
    lVar14 = *(long *)(param_2 + 0xb0);
    if (lVar14 == 0) {
      lVar14 = *(long *)(*(long *)PTR_DAT_02716e40 + 0xb0);
    }
    FUN_007fc760(param_1,param_4[1],param_4[1],lVar14,param_4);
  }
  else {
    param_4[4] = 0;
  }
  FUN_007f02f0(param_1,param_4[1],param_3,*param_4,param_2,1,param_4);
  iVar11 = *(int *)(param_2 + 0xc0);
  if (0 < iVar11) {
    lVar14 = 2;
    uVar27 = 0;
    do {
      unaff_x21 = uVar27 + 1;
      if ((long)unaff_x21 < (long)iVar11) {
        lVar32 = *(long *)(param_2 + 200);
        lVar30 = *(long *)(lVar32 + uVar27 * 8 + 8);
        lVar23 = lVar14;
        while( true ) {
          lVar24 = *(long *)(lVar32 + lVar23 * 8);
          if ((*(int *)(lVar24 + 0x18) < *(int *)(lVar30 + 0x1c)) &&
             (*(int *)(lVar30 + 0x18) < *(int *)(lVar24 + 0x1c))) {
            uVar13 = param_4[1];
            uVar33 = *(undefined8 *)(lVar32 + uVar27 * 8 + 8);
            local_98 = (string *)FUN_007ff7d0(*(int *)(lVar24 + 0x18),auStack_8c);
            sVar15 = strlen((char *)local_98);
            local_90 = (uint)sVar15;
            local_c8 = (char *)FUN_007ff7d0(*(int *)(lVar24 + 0x1c) + -1,auStack_bc);
            sVar15 = strlen(local_c8);
            local_c0 = (undefined4)sVar15;
            local_f8 = (byte *)FUN_007ff7d0(*(undefined4 *)(lVar30 + 0x18),auStack_ec);
            sVar15 = strlen((char *)local_f8);
            local_f0 = (uint)sVar15;
            local_128 = (char *)FUN_007ff7d0(*(int *)(lVar30 + 0x1c) + -1,auStack_11c);
            sVar15 = strlen(local_128);
            local_120 = (undefined4)sVar15;
            local_158 = 0;
            local_150 = 0xffffffff;
            local_188 = 0;
            local_180 = 0xffffffff;
            local_1b8 = 0;
            local_1b0 = 0xffffffff;
            local_1e8 = 0;
            local_1e0 = 0xffffffff;
            local_218 = 0;
            local_210 = 0xffffffff;
            local_248 = 0;
            local_240 = 0xffffffff;
            FUN_00863000(&local_270,
                         "Reserved range $0 to $1 overlaps with already-defined range $2 to $3.",
                         &local_98,&local_c8,&local_f8,&local_128,&local_158,&local_188,&local_1b8,
                         &local_1e8,&local_218,&local_248);
            FUN_007eaaf0(param_1,uVar13,uVar33,1,&local_270);
            if (((ulong)local_270 & 1) != 0) {
              operator_delete(local_260);
            }
            iVar11 = *(int *)(param_2 + 0xc0);
          }
          if (iVar11 <= lVar23) break;
          lVar32 = *(long *)(param_2 + 200);
          lVar23 = lVar23 + 1;
        }
      }
      lVar14 = lVar14 + 1;
      uVar27 = unaff_x21;
    } while ((long)unaff_x21 < (long)iVar11);
  }
  local_260 = (long *)0x0;
  local_258 = 0;
  local_270 = (void *)0x0;
  local_268 = 0;
  local_250 = 1.0;
  if (0 < *(int *)(param_2 + 0xd8)) {
    lVar14 = 0;
    do {
      psVar31 = *(string **)(*(long *)(param_2 + 0xe0) + lVar14 * 8 + 8);
      lVar23 = FUN_007fcba0(&local_270,psVar31);
      uVar27 = local_268;
      if (lVar23 == 0) {
        sVar9 = *psVar31;
        __s2 = *(string **)(psVar31 + 0x10);
        if (((byte)sVar9 & 1) == 0) {
          __s2 = psVar31 + 1;
        }
        sVar17 = *__s2;
        if (sVar17 == (string)0x0) {
          uVar29 = 0;
        }
        else {
          uVar29 = 0;
          psVar19 = __s2;
          do {
            psVar19 = psVar19 + 1;
            uVar29 = uVar29 * 5 + (ulong)(byte)sVar17;
            sVar17 = *psVar19;
          } while (sVar17 != (string)0x0);
        }
        if (local_268 != 0) {
          uVar25 = local_268 - 1;
          if ((uVar25 & local_268) == 0) {
            unaff_x21 = uVar25 & uVar29;
            plVar20 = *(long **)((long)local_270 + unaff_x21 * 8);
          }
          else {
            unaff_x21 = uVar29;
            if (local_268 <= uVar29) {
              uVar21 = 0;
              if (local_268 != 0) {
                uVar21 = uVar29 / local_268;
              }
              unaff_x21 = uVar29 - uVar21 * local_268;
            }
            plVar20 = *(long **)((long)local_270 + unaff_x21 * 8);
          }
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            sVar15 = (ulong)((byte)sVar9 >> 1);
            if (((byte)sVar9 & 1) != 0) {
              sVar15 = *(size_t *)(psVar31 + 8);
            }
            if ((uVar25 & local_268) == 0) {
              if (sVar15 == 0) {
                do {
                  if (plVar20[1] != uVar29 && (plVar20[1] & uVar25) != unaff_x21) break;
                  uVar21 = (ulong)(*(byte *)(plVar20 + 2) >> 1);
                  if ((*(byte *)(plVar20 + 2) & 1) != 0) {
                    uVar21 = plVar20[3];
                  }
                  if (uVar21 == 0) goto LAB_007ee400;
                  plVar20 = (long *)*plVar20;
                } while (plVar20 != (long *)0x0);
              }
              else {
                do {
                  if (plVar20[1] != uVar29 && (plVar20[1] & uVar25) != unaff_x21) break;
                  bVar8 = *(byte *)(plVar20 + 2);
                  sVar4 = (ulong)(bVar8 >> 1);
                  if ((bVar8 & 1) != 0) {
                    sVar4 = plVar20[3];
                  }
                  if (sVar4 == sVar15) {
                    if ((bVar8 & 1) == 0) {
                      psVar19 = (string *)((long)plVar20 + 0x11);
                      lVar23 = -(ulong)(bVar8 >> 1);
                      psVar22 = __s2;
                      while (*psVar19 == *psVar22) {
                        psVar19 = psVar19 + 1;
                        psVar22 = psVar22 + 1;
                        lVar23 = lVar23 + 1;
                        if (lVar23 == 0) goto LAB_007ee400;
                      }
                    }
                    else {
                      iVar11 = memcmp((void *)plVar20[4],__s2,sVar15);
                      if (iVar11 == 0) goto LAB_007ee400;
                    }
                  }
                  plVar20 = (long *)*plVar20;
                } while (plVar20 != (long *)0x0);
              }
            }
            else if (sVar15 == 0) {
              do {
                uVar25 = plVar20[1];
                if (uVar25 != uVar29) {
                  if (local_268 <= uVar25) {
                    uVar21 = 0;
                    if (local_268 != 0) {
                      uVar21 = uVar25 / local_268;
                    }
                    uVar25 = uVar25 - uVar21 * local_268;
                  }
                  if (uVar25 != unaff_x21) break;
                }
                uVar25 = (ulong)(*(byte *)(plVar20 + 2) >> 1);
                if ((*(byte *)(plVar20 + 2) & 1) != 0) {
                  uVar25 = plVar20[3];
                }
                if (uVar25 == 0) goto LAB_007ee400;
                plVar20 = (long *)*plVar20;
              } while (plVar20 != (long *)0x0);
            }
            else {
              do {
                uVar25 = plVar20[1];
                if (uVar25 != uVar29) {
                  if (uVar27 <= uVar25) {
                    uVar21 = 0;
                    if (uVar27 != 0) {
                      uVar21 = uVar25 / uVar27;
                    }
                    uVar25 = uVar25 - uVar21 * uVar27;
                  }
                  if (uVar25 != unaff_x21) break;
                }
                bVar8 = *(byte *)(plVar20 + 2);
                sVar4 = (ulong)(bVar8 >> 1);
                if ((bVar8 & 1) != 0) {
                  sVar4 = plVar20[3];
                }
                if (sVar4 == sVar15) {
                  if ((bVar8 & 1) == 0) {
                    psVar19 = (string *)((long)plVar20 + 0x11);
                    lVar23 = -(ulong)(bVar8 >> 1);
                    psVar22 = __s2;
                    while (*psVar19 == *psVar22) {
                      psVar19 = psVar19 + 1;
                      psVar22 = psVar22 + 1;
                      lVar23 = lVar23 + 1;
                      if (lVar23 == 0) goto LAB_007ee400;
                    }
                  }
                  else {
                    iVar11 = memcmp((void *)plVar20[4],__s2,sVar15);
                    if (iVar11 == 0) goto LAB_007ee400;
                  }
                }
                plVar20 = (long *)*plVar20;
              } while (plVar20 != (long *)0x0);
            }
          }
        }
        plVar20 = operator_new(0x28);
        std::string::string((string *)(plVar20 + 2),psVar31);
        *plVar20 = 0;
        plVar20[1] = uVar29;
        if ((uVar27 == 0) || (local_250 * (float)uVar27 < (float)(local_258 + 1))) {
          if (uVar27 < 3) {
            uVar25 = 1;
          }
          else {
            uVar25 = (ulong)((uVar27 - 1 & uVar27) != 0);
          }
          uVar21 = (ulong)((float)(local_258 + 1) / local_250);
          uVar25 = uVar25 | uVar27 << 1;
          if (uVar21 <= uVar25) {
            uVar21 = uVar25;
          }
          FUN_007fbf80(&local_270,uVar21);
          uVar27 = local_268;
          if ((local_268 - 1 & local_268) == 0) {
            unaff_x21 = local_268 - 1 & uVar29;
            plVar26 = *(long **)((long)local_270 + unaff_x21 * 8);
            goto joined_r0x007ee2a8;
          }
          if (uVar29 < local_268) {
            plVar26 = *(long **)((long)local_270 + uVar29 * 8);
            unaff_x21 = uVar29;
            goto joined_r0x007ee2a8;
          }
          uVar25 = 0;
          if (local_268 != 0) {
            uVar25 = uVar29 / local_268;
          }
          unaff_x21 = uVar29 - uVar25 * local_268;
          plVar26 = *(long **)((long)local_270 + unaff_x21 * 8);
          if (plVar26 == (long *)0x0) goto LAB_007ee2c0;
LAB_007ee23c:
          *plVar20 = *plVar26;
LAB_007ee3f0:
          *plVar26 = (long)plVar20;
        }
        else {
          plVar26 = *(long **)((long)local_270 + unaff_x21 * 8);
joined_r0x007ee2a8:
          if (plVar26 != (long *)0x0) goto LAB_007ee23c;
LAB_007ee2c0:
          *plVar20 = (long)local_260;
          *(long ***)((long)local_270 + unaff_x21 * 8) = &local_260;
          local_260 = plVar20;
          if (*plVar20 != 0) {
            uVar29 = *(ulong *)(*plVar20 + 8);
            if ((uVar27 - 1 & uVar27) == 0) {
              uVar29 = uVar29 & uVar27 - 1;
            }
            else if (uVar27 <= uVar29) {
              uVar25 = 0;
              if (uVar27 != 0) {
                uVar25 = uVar29 / uVar27;
              }
              uVar29 = uVar29 - uVar25 * uVar27;
            }
            plVar26 = (long *)((long)local_270 + uVar29 * 8);
            goto LAB_007ee3f0;
          }
        }
        local_258 = local_258 + 1;
      }
      else {
        local_98 = *(string **)(psVar31 + 0x10);
        if (((byte)*psVar31 & 1) == 0) {
          local_98 = psVar31 + 1;
        }
        local_c8 = (char *)0x0;
        local_c0 = 0xffffffff;
        local_f8 = (byte *)0x0;
        local_f0 = 0xffffffff;
        local_128 = (char *)0x0;
        local_120 = 0xffffffff;
        local_158 = 0;
        local_150 = 0xffffffff;
        local_90 = (uint)((byte)*psVar31 >> 1);
        if (((byte)*psVar31 & 1) != 0) {
          local_90 = (uint)*(undefined8 *)(psVar31 + 8);
        }
        local_188 = 0;
        local_180 = 0xffffffff;
        local_1b8 = 0;
        local_1b0 = 0xffffffff;
        local_1e8 = 0;
        local_1e0 = 0xffffffff;
        local_218 = 0;
        local_210 = 0xffffffff;
        local_248 = 0;
        local_240 = 0xffffffff;
        FUN_00863000(local_288,"Field name \"$0\" is reserved multiple times.",&local_98,&local_c8,
                     &local_f8,&local_128,&local_158,&local_188,&local_1b8,&local_1e8,&local_218,
                     &local_248);
        FUN_007eaaf0(param_1,psVar31,param_2,0,local_288);
        if ((local_288[0] & 1) != 0) {
          operator_delete(local_278);
        }
      }
LAB_007ee400:
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)(param_2 + 0xd8));
  }
  if (0 < *(int *)((long)param_4 + 0x2c)) {
    lVar14 = 0;
    do {
      lVar23 = param_4[6];
      puVar28 = (undefined8 *)(lVar23 + lVar14 * 0x90);
      iVar11 = *(int *)(param_4 + 0xd);
      if (0 < iVar11) {
        lVar24 = lVar23 + lVar14 * 0x90;
        lVar30 = 0;
        lVar32 = 0;
        piVar2 = (int *)(lVar24 + 0x38);
        do {
          iVar7 = *(int *)(param_4[0xe] + lVar30);
          iVar18 = *piVar2;
          if ((iVar7 <= iVar18) && (lVar3 = param_4[0xe] + lVar30, iVar18 < *(int *)(lVar3 + 4))) {
            uVar33 = *(undefined8 *)(lVar24 + 8);
            uVar13 = *(undefined8 *)(*(long *)(param_2 + 0x90) + lVar30 + 8);
            local_98 = (string *)FUN_007ff7d0(iVar7,auStack_8c);
            sVar15 = strlen((char *)local_98);
            local_90 = (uint)sVar15;
            local_c8 = (char *)FUN_007ff7d0(*(int *)(lVar3 + 4) + -1,auStack_bc);
            sVar15 = strlen(local_c8);
            local_c0 = (undefined4)sVar15;
            pbVar12 = (byte *)*puVar28;
            local_f8 = *(byte **)(pbVar12 + 0x10);
            if ((*pbVar12 & 1) == 0) {
              local_f8 = pbVar12 + 1;
            }
            local_f0 = (uint)(*pbVar12 >> 1);
            if ((*pbVar12 & 1) != 0) {
              local_f0 = (uint)*(undefined8 *)(pbVar12 + 8);
            }
            local_128 = (char *)FUN_007ff7d0(*piVar2,auStack_11c);
            sVar15 = strlen(local_128);
            local_120 = (undefined4)sVar15;
            local_158 = 0;
            local_150 = 0xffffffff;
            local_188 = 0;
            local_180 = 0xffffffff;
            local_1b8 = 0;
            local_1b0 = 0xffffffff;
            local_1e8 = 0;
            local_1e0 = 0xffffffff;
            local_218 = 0;
            local_210 = 0xffffffff;
            local_248 = 0;
            local_240 = 0xffffffff;
            FUN_00863000(local_288,"Extension range $0 to $1 includes field \"$2\" ($3).",&local_98,
                         &local_c8,&local_f8,&local_128,&local_158,&local_188,&local_1b8,&local_1e8,
                         &local_218,&local_248);
            FUN_007eaaf0(param_1,uVar33,uVar13,1,local_288);
            if ((local_288[0] & 1) != 0) {
              operator_delete(local_278);
            }
            iVar11 = *(int *)(param_4 + 0xd);
          }
          lVar32 = lVar32 + 1;
          lVar30 = lVar30 + 8;
        } while (lVar32 < iVar11);
      }
      iVar11 = *(int *)(param_4 + 0x11);
      if (0 < iVar11) {
        lVar24 = lVar23 + lVar14 * 0x90;
        lVar30 = 0;
        lVar32 = 0;
        piVar2 = (int *)(lVar24 + 0x38);
        do {
          iVar18 = *piVar2;
          if ((*(int *)(param_4[0x12] + lVar30) <= iVar18) &&
             (iVar18 < *(int *)(param_4[0x12] + lVar30 + 4))) {
            uVar13 = *(undefined8 *)(*(long *)(param_2 + 200) + lVar30 + 8);
            pbVar12 = (byte *)*puVar28;
            local_98 = *(string **)(pbVar12 + 0x10);
            if ((*pbVar12 & 1) == 0) {
              local_98 = (string *)(pbVar12 + 1);
            }
            uVar33 = *(undefined8 *)(lVar24 + 8);
            local_90 = (uint)(*pbVar12 >> 1);
            if ((*pbVar12 & 1) != 0) {
              local_90 = (uint)*(undefined8 *)(pbVar12 + 8);
            }
            local_c8 = (char *)FUN_007ff7d0(*piVar2,auStack_bc);
            sVar15 = strlen(local_c8);
            local_c0 = (undefined4)sVar15;
            local_f8 = (byte *)0x0;
            local_f0 = 0xffffffff;
            local_128 = (char *)0x0;
            local_120 = 0xffffffff;
            local_158 = 0;
            local_150 = 0xffffffff;
            local_188 = 0;
            local_180 = 0xffffffff;
            local_1b8 = 0;
            local_1b0 = 0xffffffff;
            local_1e8 = 0;
            local_1e0 = 0xffffffff;
            local_218 = 0;
            local_210 = 0xffffffff;
            local_248 = 0;
            local_240 = 0xffffffff;
            FUN_00863000(local_288,"Field \"$0\" uses reserved number $1.",&local_98,&local_c8,
                         &local_f8,&local_128,&local_158,&local_188,&local_1b8,&local_1e8,&local_218
                         ,&local_248);
            FUN_007eaaf0(param_1,uVar33,uVar13,1,local_288);
            if ((local_288[0] & 1) != 0) {
              operator_delete(local_278);
            }
            iVar11 = *(int *)(param_4 + 0x11);
          }
          lVar32 = lVar32 + 1;
          lVar30 = lVar30 + 8;
        } while (lVar32 < iVar11);
      }
      lVar32 = FUN_007fcba0(&local_270,*puVar28);
      if (lVar32 != 0) {
        pbVar12 = (byte *)*puVar28;
        local_98 = *(string **)(pbVar12 + 0x10);
        uVar13 = *(undefined8 *)(*(long *)(param_2 + 0x30) + lVar14 * 8 + 8);
        if ((*pbVar12 & 1) == 0) {
          local_98 = (string *)(pbVar12 + 1);
        }
        uVar33 = *(undefined8 *)(lVar23 + lVar14 * 0x90 + 8);
        local_c8 = (char *)0x0;
        local_c0 = 0xffffffff;
        local_f8 = (byte *)0x0;
        local_f0 = 0xffffffff;
        local_128 = (char *)0x0;
        local_120 = 0xffffffff;
        local_158 = 0;
        local_150 = 0xffffffff;
        local_188 = 0;
        local_180 = 0xffffffff;
        local_1b8 = 0;
        local_1b0 = 0xffffffff;
        local_90 = (uint)(*pbVar12 >> 1);
        if ((*pbVar12 & 1) != 0) {
          local_90 = (uint)*(undefined8 *)(pbVar12 + 8);
        }
        local_1e8 = 0;
        local_1e0 = 0xffffffff;
        local_218 = 0;
        local_210 = 0xffffffff;
        local_248 = 0;
        local_240 = 0xffffffff;
        FUN_00863000(local_288,"Field name \"$0\" is reserved.",&local_98,&local_c8,&local_f8,
                     &local_128,&local_158,&local_188,&local_1b8,&local_1e8,&local_218,&local_248);
        FUN_007eaaf0(param_1,uVar33,uVar13,0,local_288);
        if ((local_288[0] & 1) != 0) {
          operator_delete(local_278);
        }
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)((long)param_4 + 0x2c));
  }
  iVar11 = *(int *)(param_4 + 0xd);
  pvVar10 = local_270;
  plVar20 = local_260;
  if (0 < iVar11) {
    lVar23 = 0;
    lVar14 = 0;
    local_2c8 = 1;
    do {
      piVar2 = (int *)(param_4[0xe] + lVar14 * 8);
      iVar18 = *(int *)(param_4 + 0x11);
      if (0 < iVar18) {
        lVar30 = 0;
        lVar32 = 0;
        do {
          lVar24 = param_4[0x12];
          if (*(int *)(lVar24 + lVar30) < piVar2[1]) {
            if (*piVar2 < *(int *)(lVar24 + lVar30 + 4)) {
              uVar33 = param_4[1];
              uVar13 = *(undefined8 *)(*(long *)(param_2 + 0x90) + lVar30 + 8);
              local_98 = (string *)FUN_007ff7d0(*piVar2,auStack_8c);
              sVar15 = strlen((char *)local_98);
              local_90 = (uint)sVar15;
              local_c8 = (char *)FUN_007ff7d0(piVar2[1] + -1,auStack_bc);
              sVar15 = strlen(local_c8);
              local_c0 = (undefined4)sVar15;
              local_f8 = (byte *)FUN_007ff7d0(*(undefined4 *)(lVar24 + lVar30),auStack_ec);
              sVar15 = strlen((char *)local_f8);
              local_f0 = (uint)sVar15;
              local_128 = (char *)FUN_007ff7d0(*(int *)(lVar24 + lVar30 + 4) + -1,auStack_11c);
              sVar15 = strlen(local_128);
              local_120 = (undefined4)sVar15;
              local_158 = 0;
              local_150 = 0xffffffff;
              local_188 = 0;
              local_180 = 0xffffffff;
              local_1b8 = 0;
              local_1b0 = 0xffffffff;
              local_1e8 = 0;
              local_1e0 = 0xffffffff;
              local_218 = 0;
              local_210 = 0xffffffff;
              local_248 = 0;
              local_240 = 0xffffffff;
              FUN_00863000(local_288,
                           "Extension range $0 to $1 overlaps with reserved range $2 to $3.",
                           &local_98,&local_c8,&local_f8,&local_128,&local_158,&local_188,&local_1b8
                           ,&local_1e8,&local_218,&local_248);
              FUN_007eaaf0(param_1,uVar33,uVar13,1,local_288);
              if ((local_288[0] & 1) != 0) {
                operator_delete(local_278);
              }
              iVar18 = *(int *)(param_4 + 0x11);
            }
          }
          lVar32 = lVar32 + 1;
          lVar30 = lVar30 + 8;
        } while (lVar32 < iVar18);
        iVar11 = *(int *)(param_4 + 0xd);
      }
      lVar14 = lVar14 + 1;
      if (lVar14 < iVar11) {
        lVar30 = lVar23;
        lVar32 = local_2c8;
        do {
          lVar24 = param_4[0xe] + lVar30;
          if ((*(int *)(lVar24 + 8) < piVar2[1]) && (*piVar2 < *(int *)(lVar24 + 0xc))) {
            uVar33 = param_4[1];
            uVar13 = *(undefined8 *)(*(long *)(param_2 + 0x90) + lVar30 + 0x10);
            local_98 = (string *)FUN_007ff7d0(*(int *)(lVar24 + 8),auStack_8c);
            sVar15 = strlen((char *)local_98);
            local_90 = (uint)sVar15;
            local_c8 = (char *)FUN_007ff7d0(*(int *)(lVar24 + 0xc) + -1,auStack_bc);
            sVar15 = strlen(local_c8);
            local_c0 = (undefined4)sVar15;
            local_f8 = (byte *)FUN_007ff7d0(*piVar2,auStack_ec);
            sVar15 = strlen((char *)local_f8);
            local_f0 = (uint)sVar15;
            local_128 = (char *)FUN_007ff7d0(piVar2[1] + -1,auStack_11c);
            sVar15 = strlen(local_128);
            local_120 = (undefined4)sVar15;
            local_158 = 0;
            local_150 = 0xffffffff;
            local_188 = 0;
            local_180 = 0xffffffff;
            local_1b8 = 0;
            local_1b0 = 0xffffffff;
            local_1e8 = 0;
            local_1e0 = 0xffffffff;
            local_218 = 0;
            local_210 = 0xffffffff;
            local_248 = 0;
            local_240 = 0xffffffff;
            FUN_00863000(local_288,
                         "Extension range $0 to $1 overlaps with already-defined range $2 to $3.",
                         &local_98,&local_c8,&local_f8,&local_128,&local_158,&local_188,&local_1b8,
                         &local_1e8,&local_218,&local_248);
            FUN_007eaaf0(param_1,uVar33,uVar13,1,local_288);
            if ((local_288[0] & 1) != 0) {
              operator_delete(local_278);
            }
            iVar11 = *(int *)(param_4 + 0xd);
          }
          lVar32 = lVar32 + 1;
          lVar30 = lVar30 + 8;
        } while (lVar32 < iVar11);
      }
      local_2c8 = local_2c8 + 1;
      lVar23 = lVar23 + 8;
      pvVar10 = local_270;
      plVar20 = local_260;
    } while (lVar14 < iVar11);
  }
  while (plVar20 != (long *)0x0) {
    plVar26 = (long *)*plVar20;
    local_270 = pvVar10;
    if ((*(byte *)(plVar20 + 2) & 1) != 0) {
      operator_delete((void *)plVar20[4]);
    }
    operator_delete(plVar20);
    pvVar10 = local_270;
    plVar20 = plVar26;
  }
  local_270 = (void *)0x0;
  if (pvVar10 != (void *)0x0) {
    operator_delete(pvVar10);
  }
  return;
}


