/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0062eb90; name: FUN_0062eb90
 */


int FUN_0062eb90(long param_1,uint param_2,short *param_3,uint param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  undefined8 uVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  void *__dest;
  ulong uVar11;
  ulong uVar12;
  short *psVar13;
  short *psVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  undefined1 *puVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  int iVar27;
  long *plVar28;
  ulong uVar29;
  long lVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  long *plVar34;
  short *psVar35;
  char *pcVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  short *psVar43;
  uint *puVar44;
  ulong uVar45;
  long lVar46;
  ushort *local_180;
  ushort *local_f8;
  ulong local_c8;
  ushort *local_a8;
  uint local_74;
  uint local_70;
  int local_6c [3];
  
  plVar34 = *(long **)(param_1 + 0xc0);
  lVar33 = plVar34[7];
  puVar44 = *(uint **)(param_1 + 0x478);
  local_74 = 0;
  if (puVar44 == (uint *)0x0 || *(char *)(param_1 + 0x471) == '\0') {
    return 6;
  }
  if ((puVar44[0x1e] <= param_2) ||
     (*(long *)(*(long *)(puVar44 + 0x20) + (ulong)param_2 * 8) ==
      *(long *)(*(long *)(puVar44 + 0x20) + (ulong)(param_2 + 1) * 8))) {
    return 0;
  }
  uVar45 = (ulong)param_4;
  lVar10 = FUN_006029c0(lVar33,0x10,0,uVar45,0,local_6c);
  lVar24 = 0;
  lVar40 = 0;
  if (local_6c[0] != 0) goto LAB_0062ee24;
  lVar40 = FUN_006029c0(lVar33,0x10,0,uVar45,0,local_6c);
  if (local_6c[0] != 0) {
    lVar24 = 0;
    goto LAB_0062ee24;
  }
  lVar24 = FUN_006029c0(lVar33,1,0,uVar45,0,local_6c);
  if (local_6c[0] != 0) goto LAB_0062ee24;
  local_6c[0] = FUN_006069e0(plVar34,*(undefined8 *)(*(long *)(puVar44 + 0x20) + (ulong)param_2 * 8)
                            );
  if ((local_6c[0] != 0) ||
     (local_6c[0] = FUN_006081f0(plVar34,*(long *)(*(long *)(puVar44 + 0x20) +
                                                  (ulong)(param_2 + 1) * 8) -
                                         *(long *)(*(long *)(puVar44 + 0x20) + (ulong)param_2 * 8)),
     local_6c[0] != 0)) goto LAB_0062ee24;
  lVar37 = plVar34[8];
  lVar41 = *plVar34;
  __dest = (void *)FUN_006029c0(lVar33,8,0,*puVar44,0,local_6c);
  if (local_6c[0] == 0) {
    lVar38 = FUN_006029c0(lVar33,8,0,*puVar44,0,local_6c);
    if (local_6c[0] != 0) {
      local_180 = (ushort *)0x0;
      lVar42 = 0;
      goto LAB_0062ede4;
    }
    lVar42 = FUN_006029c0(lVar33,8,0,*puVar44,0,local_6c);
    if (local_6c[0] != 0) {
LAB_0062eddc:
      local_180 = (ushort *)0x0;
      goto LAB_0062ede4;
    }
    uVar7 = FUN_00608400(plVar34);
    uVar11 = FUN_00608400(plVar34);
    uVar3 = uVar7 & 0xfff;
    if (*(ulong *)(puVar44 + 0x22) < (ulong)(uVar3 << 2) + (uVar11 & 0xffff)) {
      local_6c[0] = 8;
      goto LAB_0062eddc;
    }
    local_c8 = (lVar37 - lVar41) + (uVar11 & 0xffff);
    if ((uVar7 & 0xffff) >> 0xf == 0) {
      local_180 = (ushort *)0x0;
    }
    else {
      lVar22 = *plVar34;
      lVar41 = plVar34[8];
      lVar37 = lVar22 + local_c8;
      if ((ulong)(plVar34[9] - lVar22) <= local_c8) {
        lVar37 = plVar34[9];
      }
      plVar34[8] = lVar37;
      local_180 = (ushort *)FUN_0062b390(plVar34,*(undefined8 *)(puVar44 + 0x22),&local_74);
      lVar30 = *plVar34;
      local_c8 = plVar34[8] - lVar30;
      lVar37 = lVar30 + (lVar41 - lVar22);
      if ((ulong)(plVar34[9] - lVar30) <= (ulong)(lVar41 - lVar22)) {
        lVar37 = plVar34[9];
      }
      plVar34[8] = lVar37;
    }
    if (param_4 != 0) {
      if (uVar45 - 1 < 3) {
        lVar41 = 0;
      }
      else {
        lVar37 = 0;
        lVar41 = 0;
        do {
          puVar26 = (undefined8 *)(lVar10 + lVar37);
          uVar4 = ((undefined8 *)(*(long *)(param_3 + 4) + lVar37))[1];
          lVar41 = lVar41 + 4;
          *puVar26 = *(undefined8 *)(*(long *)(param_3 + 4) + lVar37);
          puVar26[1] = uVar4;
          uVar4 = *(undefined8 *)(*(long *)(param_3 + 4) + lVar37 + 0x18);
          puVar26[2] = *(undefined8 *)(*(long *)(param_3 + 4) + lVar37 + 0x10);
          puVar26[3] = uVar4;
          uVar4 = *(undefined8 *)(*(long *)(param_3 + 4) + lVar37 + 0x28);
          puVar26[4] = *(undefined8 *)(*(long *)(param_3 + 4) + lVar37 + 0x20);
          puVar26[5] = uVar4;
          lVar22 = *(long *)(param_3 + 4) + lVar37;
          lVar37 = lVar37 + 0x40;
          uVar4 = *(undefined8 *)(lVar22 + 0x38);
          puVar26[6] = *(undefined8 *)(lVar22 + 0x30);
          puVar26[7] = uVar4;
        } while (uVar45 - (uVar45 & 3) != lVar41);
      }
      if ((param_4 & 3) != 0) {
        lVar41 = lVar41 << 4;
        lVar37 = -(uVar45 & 3);
        do {
          puVar26 = (undefined8 *)(*(long *)(param_3 + 4) + lVar41);
          puVar25 = (undefined8 *)(lVar10 + lVar41);
          uVar4 = puVar26[1];
          lVar41 = lVar41 + 0x10;
          lVar37 = lVar37 + 1;
          *puVar25 = *puVar26;
          puVar25[1] = uVar4;
        } while (lVar37 != 0);
      }
    }
    if (uVar3 != 0) {
      uVar11 = (ulong)(param_4 - 3);
      uVar7 = 0;
      local_f8 = (ushort *)0x0;
      do {
        uVar12 = FUN_00608400(plVar34);
        uVar8 = FUN_00608400(plVar34);
        if ((uVar8 >> 0xf & 1) == 0) {
          if (puVar44[0x1a] <= (uVar8 & 0xfff)) {
            local_6c[0] = 8;
            break;
          }
          memcpy(__dest,(void *)(*(long *)(puVar44 + 0x1c) + (ulong)(*puVar44 * (uVar8 & 0xfff)) * 8
                                ),(ulong)*puVar44 << 3);
        }
        else if (*puVar44 != 0) {
          uVar39 = 0;
          do {
            uVar9 = FUN_00608400(plVar34);
            *(long *)((long)__dest + uVar39 * 8) =
                 (long)(int)(-(uVar9 >> 0xf & 1) & 0xfffc0000 | (uVar9 & 0xffff) << 2);
            uVar39 = uVar39 + 1;
          } while (uVar39 < *puVar44);
        }
        if ((((uVar8 & 0xffff) >> 0xe & 1) != 0) && (*puVar44 != 0)) {
          uVar39 = 0;
          do {
            uVar9 = FUN_00608400(plVar34);
            *(long *)(lVar38 + uVar39 * 8) =
                 (long)(int)(-(uVar9 >> 0xf & 1) & 0xfffc0000 | (uVar9 & 0xffff) << 2);
            uVar39 = uVar39 + 1;
          } while (uVar39 < *puVar44);
          if (*puVar44 != 0) {
            uVar39 = 0;
            do {
              uVar9 = FUN_00608400(plVar34);
              *(long *)(lVar42 + uVar39 * 8) =
                   (long)(int)(-(uVar9 >> 0xf & 1) & 0xfffc0000 | (uVar9 & 0xffff) << 2);
              uVar39 = uVar39 + 1;
            } while (uVar39 < *puVar44);
          }
        }
        lVar37 = FUN_0062b280(puVar44,uVar8 & 0xffff,__dest,lVar38,lVar42);
        if (lVar37 != 0) {
          lVar30 = *plVar34;
          lVar22 = plVar34[8];
          lVar41 = lVar30 + local_c8;
          if ((ulong)(plVar34[9] - lVar30) <= local_c8) {
            lVar41 = plVar34[9];
          }
          plVar34[8] = lVar41;
          if (((uVar8 & 0xffff) >> 0xd & 1) == 0) {
            local_70 = local_74;
            local_a8 = local_180;
          }
          else {
            local_f8 = (ushort *)FUN_0062b390(plVar34,*(undefined8 *)(puVar44 + 0x22),&local_70);
            local_a8 = local_f8;
          }
          uVar9 = local_70;
          uVar8 = param_4;
          if (local_70 != 0) {
            uVar8 = local_70;
          }
          psVar13 = (short *)FUN_0062b530(plVar34,*(undefined8 *)(puVar44 + 0x22),uVar8);
          psVar14 = (short *)FUN_0062b530(plVar34,*(undefined8 *)(puVar44 + 0x22),uVar8);
          if (((psVar13 != (short *)0x0) && (local_a8 != (ushort *)0x0)) &&
             (psVar14 != (short *)0x0)) {
            if (local_a8 == (ushort *)0xffffffffffffffff) {
              if (param_4 != 0) {
                lVar41 = 0;
                uVar39 = 0;
                do {
                  lVar15 = FUN_00602580((long)*(short *)((long)psVar13 + lVar41),lVar37);
                  lVar17 = FUN_00602580((long)*(short *)((long)psVar14 + lVar41),lVar37);
                  if (uVar39 < uVar11) {
                    lVar32 = lVar41 * 8;
                    *(long *)(*(long *)(param_3 + 4) + lVar32) =
                         *(long *)(*(long *)(param_3 + 4) + lVar32) + lVar15;
                    lVar32 = *(long *)(param_3 + 4) + lVar32;
LAB_0062f318:
                    *(long *)(lVar32 + 8) = *(long *)(lVar32 + 8) + lVar17;
                  }
                  else if ((uVar11 << 1 == lVar41) && ((*(byte *)(param_1 + 0x484) >> 1 & 1) == 0))
                  {
                    *(long *)(*(long *)(param_3 + 4) + uVar11 * 0x10) =
                         *(long *)(*(long *)(param_3 + 4) + uVar11 * 0x10) + lVar15;
                  }
                  else if (((ulong)(param_4 - 2) << 1 == lVar41) &&
                          ((*(byte *)(param_1 + 0x484) >> 2 & 1) == 0)) {
                    lVar17 = (ulong)(param_4 - 2) * 0x10;
                    *(long *)(*(long *)(param_3 + 4) + lVar17) =
                         *(long *)(*(long *)(param_3 + 4) + lVar17) + lVar15;
                  }
                  else if (((ulong)(param_4 - 1) << 1 == lVar41) &&
                          ((*(byte *)(param_1 + 0x484) >> 4 & 1) == 0)) {
                    lVar32 = *(long *)(param_3 + 4) + (ulong)(param_4 - 1) * 0x10;
                    goto LAB_0062f318;
                  }
                  lVar41 = lVar41 + 2;
                  uVar39 = uVar39 + 1;
                } while (uVar45 << 1 != lVar41);
              }
            }
            else {
              if (param_4 != 0) {
                if (uVar45 - 1 < 7) {
                  lVar41 = 0;
                }
                else {
                  lVar41 = 0;
                  puVar25 = (undefined8 *)(lVar40 + 0x40);
                  puVar26 = (undefined8 *)(lVar10 + 0x40);
                  do {
                    puVar23 = (undefined1 *)(lVar24 + 3 + lVar41);
                    lVar41 = lVar41 + 8;
                    puVar23[-3] = 0;
                    uVar4 = puVar26[-7];
                    puVar25[-8] = puVar26[-8];
                    puVar25[-7] = uVar4;
                    puVar23[-2] = 0;
                    uVar4 = puVar26[-5];
                    puVar25[-6] = puVar26[-6];
                    puVar25[-5] = uVar4;
                    puVar23[-1] = 0;
                    uVar4 = puVar26[-3];
                    puVar25[-4] = puVar26[-4];
                    puVar25[-3] = uVar4;
                    *puVar23 = 0;
                    uVar4 = puVar26[-1];
                    puVar25[-2] = puVar26[-2];
                    puVar25[-1] = uVar4;
                    puVar23[1] = 0;
                    uVar4 = puVar26[1];
                    *puVar25 = *puVar26;
                    puVar25[1] = uVar4;
                    puVar23[2] = 0;
                    uVar4 = puVar26[3];
                    puVar25[2] = puVar26[2];
                    puVar25[3] = uVar4;
                    puVar23[3] = 0;
                    uVar4 = puVar26[5];
                    puVar25[4] = puVar26[4];
                    puVar25[5] = uVar4;
                    puVar23[4] = 0;
                    puVar1 = puVar26 + 6;
                    uVar4 = puVar26[7];
                    puVar26 = puVar26 + 0x10;
                    puVar25[6] = *puVar1;
                    puVar25[7] = uVar4;
                    puVar25 = puVar25 + 0x10;
                  } while (uVar45 - (uVar45 & 7) != lVar41);
                }
                if ((param_4 & 7) != 0) {
                  puVar23 = (undefined1 *)(lVar24 + lVar41);
                  puVar26 = (undefined8 *)(lVar10 + lVar41 * 0x10);
                  puVar25 = (undefined8 *)(lVar40 + lVar41 * 0x10);
                  lVar41 = -(uVar45 & 7);
                  do {
                    *puVar23 = 0;
                    uVar4 = puVar26[1];
                    *puVar25 = *puVar26;
                    puVar25[1] = uVar4;
                    lVar41 = lVar41 + 1;
                    puVar23 = puVar23 + 1;
                    puVar26 = puVar26 + 2;
                    puVar25 = puVar25 + 2;
                  } while (lVar41 != 0);
                }
              }
              if (uVar9 != 0) {
                uVar39 = (ulong)uVar9;
                psVar35 = psVar13;
                psVar43 = psVar14;
                do {
                  uVar5 = *local_a8;
                  if (uVar5 < param_4) {
                    *(undefined1 *)(lVar24 + (ulong)uVar5) = 1;
                    lVar41 = FUN_00602580((long)*psVar35,lVar37);
                    plVar28 = (long *)(lVar40 + (ulong)uVar5 * 0x10);
                    *plVar28 = *plVar28 + lVar41;
                    lVar41 = FUN_00602580((long)*psVar43,lVar37);
                    plVar28[1] = plVar28[1] + lVar41;
                  }
                  local_a8 = local_a8 + 1;
                  psVar35 = psVar35 + 1;
                  psVar43 = psVar43 + 1;
                  uVar39 = uVar39 - 1;
                } while (uVar39 != 0);
              }
              if (*param_3 != 0) {
                lVar37 = 0;
                uVar39 = 0;
LAB_0062f488:
                sVar6 = *(short *)(*(long *)(param_3 + 0xc) + lVar37 * 2);
                iVar31 = (int)uVar39;
                if (sVar6 < iVar31) {
                  uVar21 = uVar39;
                }
                else {
                  lVar32 = (long)iVar31;
                  lVar41 = 0;
                  iVar16 = (int)sVar6;
                  lVar17 = (long)iVar16;
                  lVar15 = uVar39 << 0x20;
                  uVar21 = uVar39;
LAB_0062f4c0:
                  iVar20 = (int)uVar21;
                  if (*(char *)(lVar24 + lVar32 + lVar41) == '\0') goto code_r0x0062f4c8;
                  uVar29 = lVar41 + uVar39;
                  uVar21 = uVar29 + 1;
                  iVar19 = (int)uVar29;
                  if (iVar16 <= iVar19) goto LAB_0062f5f4;
                  lVar46 = lVar17 - iVar20;
                  uVar18 = uVar29 & 0xffffffff;
                  pcVar36 = (char *)(lVar24 + 1 + (long)iVar20);
                  do {
                    if (*pcVar36 != '\0') {
                      FUN_0062f840((int)uVar18 + 1,(int)uVar21 + -1,uVar18,uVar21,lVar10,lVar40);
                      uVar18 = uVar21 & 0xffffffff;
                    }
                    uVar21 = (ulong)((int)uVar21 + 1);
                    lVar46 = lVar46 + -1;
                    pcVar36 = pcVar36 + 1;
                  } while (lVar46 != 0);
                  uVar21 = (ulong)((int)sVar6 + 1);
                  if ((iVar31 - (int)uVar18) + (int)lVar41 == 0) {
LAB_0062f5f4:
                    uVar39 = lVar15 >> 0x20;
                    plVar28 = (long *)(lVar40 + uVar39 * 0x10);
                    plVar2 = (long *)(lVar10 + uVar39 * 0x10);
                    lVar41 = *plVar28 - *plVar2;
                    lVar46 = plVar28[1] - plVar2[1];
                    if (lVar46 != 0 || lVar41 != 0) {
                      iVar27 = (int)((ulong)lVar15 >> 0x20);
                      if (iVar31 < iVar19) {
                        lVar15 = lVar32;
                        if ((iVar27 - iVar31 & 1U) != 0) {
                          plVar28 = (long *)(lVar40 + lVar32 * 0x10);
                          *plVar28 = *plVar28 + lVar41;
                          lVar15 = lVar32 + 1;
                          plVar28[1] = plVar28[1] + lVar46;
                        }
                        if (uVar39 != lVar32 + 1U) {
                          lVar32 = iVar20 - lVar15;
                          plVar28 = (long *)(lVar40 + 0x10 + lVar15 * 0x10);
                          do {
                            plVar28[-2] = plVar28[-2] + lVar41;
                            plVar28[-1] = plVar28[-1] + lVar46;
                            lVar32 = lVar32 + -2;
                            *plVar28 = *plVar28 + lVar41;
                            plVar28[1] = plVar28[1] + lVar46;
                            plVar28 = plVar28 + 4;
                          } while (lVar32 != 0);
                        }
                      }
                      if (iVar19 < sVar6) {
                        uVar29 = ~uVar39;
                        if ((iVar16 - iVar27 & 1U) != 0) {
                          uVar39 = uVar39 + 1;
                          plVar28 = (long *)(lVar40 + uVar39 * 0x10);
                          *plVar28 = *plVar28 + lVar41;
                          plVar28[1] = plVar28[1] + lVar46;
                        }
                        if (uVar29 + lVar17 != 0) {
                          lVar17 = lVar17 - uVar39;
                          plVar28 = (long *)(lVar40 + 0x28 + uVar39 * 0x10);
                          do {
                            plVar28[-3] = plVar28[-3] + lVar41;
                            plVar28[-2] = plVar28[-2] + lVar46;
                            plVar28[-1] = plVar28[-1] + lVar41;
                            *plVar28 = *plVar28 + lVar46;
                            lVar17 = lVar17 + -2;
                            plVar28 = plVar28 + 4;
                          } while (lVar17 != 0);
                        }
                      }
                    }
                    goto LAB_0062f724;
                  }
                  FUN_0062f840((int)uVar18 + 1,(long)sVar6,uVar18,uVar29 & 0xffffffff,lVar10,lVar40)
                  ;
                  if (0 < iVar19) {
                    FUN_0062f840(uVar39,iVar31 + (int)lVar41 + -1,uVar18,uVar29 & 0xffffffff,lVar10,
                                 lVar40);
                  }
                }
                goto LAB_0062f724;
              }
LAB_0062f738:
              if (param_4 != 0) {
                lVar37 = 0;
                uVar39 = uVar45;
                do {
                  lVar15 = ((long *)(lVar40 + lVar37))[1];
                  uVar39 = uVar39 - 1;
                  lVar17 = ((long *)(lVar10 + lVar37))[1];
                  *(long *)(*(long *)(param_3 + 4) + lVar37) =
                       (*(long *)(lVar40 + lVar37) - *(long *)(lVar10 + lVar37)) +
                       *(long *)(*(long *)(param_3 + 4) + lVar37);
                  lVar41 = *(long *)(param_3 + 4) + lVar37;
                  lVar37 = lVar37 + 0x10;
                  *(long *)(lVar41 + 8) = (lVar15 - lVar17) + *(long *)(lVar41 + 8);
                } while (uVar39 != 0);
              }
            }
          }
          if (local_f8 == (ushort *)0xffffffffffffffff) {
            local_f8 = (ushort *)0xffffffffffffffff;
          }
          else {
            FUN_006028c0(lVar33);
            local_f8 = (ushort *)0x0;
          }
          FUN_006028c0(lVar33,psVar13);
          FUN_006028c0(lVar33,psVar14);
          lVar37 = *plVar34 + (lVar22 - lVar30);
          if ((ulong)(plVar34[9] - *plVar34) <= (ulong)(lVar22 - lVar30)) {
            lVar37 = plVar34[9];
          }
          plVar34[8] = lVar37;
        }
        local_c8 = local_c8 + (uVar12 & 0xffff);
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar3);
    }
    if (local_180 != (ushort *)0xffffffffffffffff) goto LAB_0062ede4;
  }
  else {
    local_180 = (ushort *)0x0;
    lVar42 = 0;
    lVar38 = 0;
LAB_0062ede4:
    FUN_006028c0(lVar33,local_180);
  }
  FUN_006028c0(lVar33,__dest);
  FUN_006028c0(lVar33,lVar38);
  FUN_006028c0(lVar33,lVar42);
  FUN_00608390(plVar34);
LAB_0062ee24:
  FUN_006028c0(lVar33,lVar10);
  FUN_006028c0(lVar33,lVar40);
  FUN_006028c0(lVar33,lVar24);
  return local_6c[0];
code_r0x0062f4c8:
  lVar41 = lVar41 + 1;
  lVar15 = lVar15 + 0x100000000;
  uVar21 = (ulong)(iVar20 + 1);
  if (lVar17 <= lVar32 + lVar41 + -1) goto code_r0x0062f4e4;
  goto LAB_0062f4c0;
code_r0x0062f4e4:
  uVar21 = (ulong)(uint)(iVar31 + (int)lVar41);
LAB_0062f724:
  lVar37 = lVar37 + 1;
  uVar39 = uVar21 & 0xffffffff;
  if (*param_3 <= lVar37) goto LAB_0062f738;
  goto LAB_0062f488;
}


