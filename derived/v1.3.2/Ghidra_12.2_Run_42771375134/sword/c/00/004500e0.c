/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004500e0; name: FUN_004500e0
 */


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_004500e0(long *param_1,long *param_2)

{
  MutexType *pMVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  float fVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 uVar8;
  float *pfVar9;
  void *pvVar10;
  int iVar11;
  long *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  void *****pppppvVar24;
  long lVar25;
  void ******ppppppvVar26;
  float *pfVar27;
  uint uVar28;
  float *pfVar29;
  void ******ppppppvVar30;
  uint uVar31;
  long lVar32;
  undefined4 *puVar33;
  float *pfVar34;
  undefined8 *puVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  ulong local_d0;
  void ******local_c8 [2];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  
  *(undefined4 *)(param_2 + 1) = 0;
  puVar33 = (undefined4 *)PTR_DAT_02712a90;
  lVar25 = param_1[0x28];
  if ((*(ushort *)((long)param_1 + 0x154) & 0xc) == 4) {
    if ((*(byte *)(lVar25 + 0x4c) >> 4 & 1) == 0) {
      if ((*(ushort *)((long)param_1 + 0x154) >> 8 & 1) == 0) {
        uVar3 = *(ushort *)(**(long **)(param_1[2] + 0x38) + 0x38);
        ppppppvVar26 = (void ******)(ulong)uVar3;
        if (uVar3 != 0) {
          lVar25 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(long)ppppppvVar26 * 0x28);
          param_1[0x26] = lVar25;
          if (lVar25 == 0) {
            return 0;
          }
          *(uint *)((long)param_1 + 0x13c) = (uint)uVar3;
          uVar23 = *(ulong *)(**(long **)(param_1[2] + 0x38) + 0x20);
          ppppppvVar30 = (void ******)0x0;
          local_c8[1] = ppppppvVar26;
          local_b8 = uVar23;
          do {
            uVar31 = *(uint *)(param_1 + 0x27);
            uVar28 = *(uint *)((long)param_1 + 0x13c);
            if (uVar31 < uVar28) {
LAB_004502e8:
              if (uVar31 < uVar28) {
                pvVar10 = (void *)(param_1[0x26] + (ulong)*(uint *)(param_1 + 0x27) * 0x28);
                *(uint *)(param_1 + 0x27) = *(uint *)(param_1 + 0x27) + 1;
              }
              else {
                pvVar10 = (void *)0x0;
              }
            }
            else {
              uVar28 = uVar28 + 1;
              pvVar6 = (void *)FUN_00404690(*puVar33,(ulong)uVar28 * 0x28);
              pvVar10 = (void *)0x0;
              if (pvVar6 != (void *)0x0) {
                pvVar10 = (void *)param_1[0x26];
                if ((pvVar10 != (void *)0x0) && (pvVar10 != pvVar6)) {
                  uVar15 = *(uint *)(param_1 + 0x27);
                  if (uVar15 != 0) {
                    memcpy(pvVar6,pvVar10,0x28);
                    if (uVar15 != 1) {
                      uVar14 = uVar15 + 3 & 3;
                      local_c8[0] = (void ******)(ulong)uVar14;
                      if ((ulong)uVar15 - 2 < 3) {
                        lVar32 = 1;
                      }
                      else {
                        lVar19 = (ulong)uVar15 - (long)local_c8[0];
                        lVar25 = 0xa0;
                        lVar32 = 1;
                        do {
                          pvVar10 = (void *)((long)pvVar6 + lVar25);
                          memcpy((void *)((long)pvVar10 + -0x78),
                                 (void *)(param_1[0x26] + lVar25 + -0x78),0x28);
                          memcpy((void *)((long)pvVar10 + -0x50),
                                 (void *)(param_1[0x26] + lVar25 + -0x50),0x28);
                          memcpy((void *)((long)pvVar10 + -0x28),
                                 (void *)(param_1[0x26] + lVar25 + -0x28),0x28);
                          memcpy(pvVar10,(void *)(param_1[0x26] + lVar25),0x28);
                          lVar32 = lVar32 + 4;
                          lVar25 = lVar25 + 0xa0;
                        } while (lVar19 != lVar32);
                        uVar14 = (uint)local_c8[0];
                      }
                      if (uVar14 != 0) {
                        lVar32 = lVar32 * 0x28;
                        lVar25 = -(long)local_c8[0];
                        do {
                          memcpy((void *)((long)pvVar6 + lVar32),(void *)(param_1[0x26] + lVar32),
                                 0x28);
                          lVar32 = lVar32 + 0x28;
                          lVar25 = lVar25 + 1;
                        } while (lVar25 != 0);
                      }
                    }
                    pvVar10 = (void *)param_1[0x26];
                    ppppppvVar26 = local_c8[1];
                    puVar33 = (undefined4 *)PTR_DAT_02712a90;
                  }
                  uVar23 = local_b8;
                  FUN_00404870(*puVar33,pvVar10);
                }
                param_1[0x26] = (long)pvVar6;
                *(uint *)((long)param_1 + 0x13c) = uVar28;
                goto LAB_004502e8;
              }
            }
            memcpy(pvVar10,(void *)(uVar23 + (long)ppppppvVar30 * 0x28),0x28);
            ppppppvVar30 = (void ******)((long)ppppppvVar30 + 1);
          } while (ppppppvVar30 != ppppppvVar26);
        }
        *(ushort *)((long)param_1 + 0x154) = *(ushort *)((long)param_1 + 0x154) | 0x100;
      }
      *(undefined4 *)(param_2 + 1) = 0;
      uVar28 = *(uint *)(param_1 + 0x27);
      uVar23 = (ulong)uVar28;
      lVar25 = FUN_004959d0(param_1[2]);
      iVar11 = *(int *)(lVar25 + 0x10);
      uVar28 = iVar11 * uVar28;
      iVar4 = uVar28 - *(uint *)((long)param_2 + 0xc);
      if (*(uint *)((long)param_2 + 0xc) <= uVar28 && iVar4 != 0) {
        uVar7 = FUN_00450d00(param_2,iVar4);
        if ((uVar7 & 1) == 0) {
          return 0;
        }
        iVar11 = *(int *)(lVar25 + 0x10);
      }
      uVar44 = DAT_01d4c198;
      if (iVar11 != 0) {
        puVar35 = *(undefined8 **)(lVar25 + 8);
        local_c8[0] = local_c8 + uVar23 * -2;
        local_c8[1] = local_c8 + uVar23 * -2 + -1;
        local_b8 = uVar23;
        do {
          uVar7 = local_b8;
          ppppppvVar26 = local_c8[1];
          lVar32 = FUN_0042c0f0(*puVar35);
          if (lVar32 != 0) {
            plVar16 = *(long **)(**(long **)(param_1[2] + 0x38) + 0x28);
            uVar28 = *(uint *)(**(long **)(param_1[2] + 0x38) + 0x30);
            uVar31 = (uint)uVar7;
            plVar12 = plVar16;
            if (uVar28 == 0) {
LAB_00450408:
              if ((plVar12 != plVar16 + (ulong)uVar28 * 3) &&
                 (uVar28 = *(uint *)(plVar12 + 2), uVar28 != 0)) {
                uVar15 = uVar31;
                if (uVar28 <= uVar31) {
                  uVar15 = uVar28;
                }
                if (uVar15 != 0) {
                  uVar21 = (ulong)uVar15;
                  if (uVar21 - 1 < 7) {
                    lVar20 = 0;
                  }
                  else {
                    lVar20 = 0;
                    lVar19 = 0x70;
                    do {
                      puVar18 = (undefined8 *)((long)ppppppvVar26 + lVar19);
                      uVar8 = *(undefined8 *)(plVar12[1] + lVar19 + -0x68);
                      lVar20 = lVar20 + 8;
                      puVar18[-0xe] = *(undefined8 *)(plVar12[1] + lVar19 + -0x70);
                      puVar18[-0xd] = uVar8;
                      uVar8 = *(undefined8 *)(plVar12[1] + lVar19 + -0x58);
                      puVar18[-0xc] = *(undefined8 *)(plVar12[1] + lVar19 + -0x60);
                      puVar18[-0xb] = uVar8;
                      uVar8 = *(undefined8 *)(plVar12[1] + lVar19 + -0x48);
                      puVar18[-10] = *(undefined8 *)(plVar12[1] + lVar19 + -0x50);
                      puVar18[-9] = uVar8;
                      uVar8 = *(undefined8 *)(plVar12[1] + lVar19 + -0x38);
                      puVar18[-8] = *(undefined8 *)(plVar12[1] + lVar19 + -0x40);
                      puVar18[-7] = uVar8;
                      uVar8 = *(undefined8 *)(plVar12[1] + lVar19 + -0x28);
                      puVar18[-6] = *(undefined8 *)(plVar12[1] + lVar19 + -0x30);
                      puVar18[-5] = uVar8;
                      uVar8 = *(undefined8 *)(plVar12[1] + lVar19 + -0x18);
                      puVar18[-4] = *(undefined8 *)(plVar12[1] + lVar19 + -0x20);
                      puVar18[-3] = uVar8;
                      uVar8 = *(undefined8 *)(plVar12[1] + lVar19 + -8);
                      puVar18[-2] = *(undefined8 *)(plVar12[1] + lVar19 + -0x10);
                      puVar18[-1] = uVar8;
                      puVar13 = (undefined8 *)(plVar12[1] + lVar19);
                      lVar19 = lVar19 + 0x80;
                      uVar8 = puVar13[1];
                      *puVar18 = *puVar13;
                      puVar18[1] = uVar8;
                    } while (uVar21 - (uVar21 & 7) != lVar20);
                  }
                  if ((uVar15 & 7) != 0) {
                    lVar20 = lVar20 << 4;
                    lVar19 = -(uVar21 & 7);
                    do {
                      puVar18 = (undefined8 *)(plVar12[1] + lVar20);
                      puVar13 = (undefined8 *)((long)ppppppvVar26 + lVar20);
                      uVar8 = puVar18[1];
                      lVar20 = lVar20 + 0x10;
                      lVar19 = lVar19 + 1;
                      *puVar13 = *puVar18;
                      puVar13[1] = uVar8;
                    } while (lVar19 != 0);
                  }
                }
                if (uVar28 < uVar31) {
                  uVar28 = uVar15 - 1;
                  ppppppvVar26 = ppppppvVar26 + (ulong)uVar15 * 2;
                  do {
                    puVar18 = (undefined8 *)(plVar12[1] + (ulong)uVar28 * 0x10);
                    ppppppvVar26[1] = (void *****)puVar18[1];
                    uVar15 = uVar15 + 1;
                    *ppppppvVar26 = (void *****)*puVar18;
                    ppppppvVar26 = ppppppvVar26 + 2;
                  } while (uVar15 < uVar31);
                }
                if (uVar31 != 0) {
                  lVar19 = 0;
                  ppppppvVar26 = local_c8[0];
                  do {
                    uVar28 = *(uint *)(param_2 + 1);
                    uVar31 = *(uint *)((long)param_2 + 0xc);
                    if (uVar28 < uVar31) {
LAB_00450590:
                      if (uVar31 <= uVar28) goto LAB_004505e4;
                      uVar28 = *(uint *)(param_2 + 1);
                      *(uint *)(param_2 + 1) = uVar28 + 1;
                      pvVar10 = (void *)(*param_2 + (ulong)uVar28 * 0x60);
                      if (pvVar10 != (void *)0x0) {
                        lVar20 = *param_2 + (ulong)uVar28 * 0x60;
                        *(undefined8 *)(lVar20 + 0x2c) = 0x3f80000000000000;
                        *(undefined8 *)(lVar20 + 0x24) = 0;
                        *(undefined8 *)(lVar20 + 0x34) = 0x3f8000003f800000;
                        *(undefined8 *)(lVar20 + 0x44) = 0;
                        *(undefined8 *)(lVar20 + 0x3c) = 0;
                        *(undefined4 *)(lVar20 + 0x4c) = 0xffffffff;
                        *(undefined8 *)(lVar20 + 0x50) = 0;
                        *(undefined8 *)(lVar20 + 0x58) = 0x3f8000003f800000;
                      }
                    }
                    else {
                      uVar21 = FUN_00450d00(param_2,1);
                      if ((uVar21 & 1) != 0) {
                        uVar31 = *(uint *)((long)param_2 + 0xc);
                        goto LAB_00450590;
                      }
LAB_004505e4:
                      pvVar10 = (void *)0x0;
                    }
                    uVar36 = *(undefined4 *)(param_1[0x26] + lVar19 + 0x24);
                    uVar45 = *(undefined4 *)(**(long **)(param_1[2] + 0x38) + 0x40);
                    memcpy(pvVar10,(void *)(param_1[0x26] + lVar19),0x24);
                    *(undefined4 *)((long)pvVar10 + 0x4c) = uVar36;
                    *(undefined8 *)((long)pvVar10 + 0x50) =
                         *(undefined8 *)(*(long *)(lVar32 + 8) + 0x48);
                    *(undefined4 *)((long)pvVar10 + 0x40) = *(undefined4 *)((long)ppppppvVar26 + -4)
                    ;
                    *(undefined4 *)((long)pvVar10 + 0x3c) = *(undefined4 *)(ppppppvVar26 + -1);
                    *(undefined4 *)((long)pvVar10 + 0x44) = *(undefined4 *)ppppppvVar26;
                    *(undefined4 *)((long)pvVar10 + 0x48) = *(undefined4 *)((long)ppppppvVar26 + 4);
                    uVar36 = FUN_0042e5f0(uVar45,lVar32,pvVar10);
                    uVar44 = NEON_fminnm(uVar36,uVar44);
                    lVar19 = lVar19 + 0x28;
                    ppppppvVar26 = ppppppvVar26 + 2;
                    uVar7 = uVar7 - 1;
                  } while (uVar7 != 0);
                }
                goto LAB_00450664;
              }
            }
            else {
              lVar19 = (ulong)uVar28 * 0x18;
              do {
                if (*plVar12 == *(long *)(*(long *)(lVar32 + 8) + 0x48)) goto LAB_00450408;
                lVar19 = lVar19 + -0x18;
                plVar12 = plVar12 + 3;
              } while (lVar19 != 0);
            }
            if (uVar31 != 0) {
                    /* WARNING: Subroutine does not return */
              memset(ppppppvVar26,0,uVar23 << 4);
            }
          }
LAB_00450664:
          puVar35 = puVar35 + 1;
        } while (puVar35 !=
                 (undefined8 *)(*(long *)(lVar25 + 8) + (ulong)*(uint *)(lVar25 + 0x10) * 8));
      }
    }
    else {
      lVar25 = **(long **)(param_1[2] + 0x38);
      uVar44 = DAT_01d4c198;
      if (*(int *)(lVar25 + 0x50) != 0) {
        pvVar10 = *(void **)(lVar25 + 0x48);
        uVar31 = 0;
        uVar28 = *(uint *)((long)param_2 + 0xc);
        if (uVar28 != 0) goto LAB_00450768;
        while( true ) {
          uVar23 = FUN_00450d00(param_2,1);
          if (((uVar23 & 1) == 0) || (*(uint *)((long)param_2 + 0xc) <= uVar31)) break;
          while( true ) {
            uVar28 = *(uint *)(param_2 + 1);
            pvVar6 = (void *)(*param_2 + (ulong)uVar28 * 0x60);
            *(uint *)(param_2 + 1) = uVar28 + 1;
            if (pvVar6 == (void *)0x0) goto LAB_00450c88;
            lVar32 = *param_2 + (ulong)uVar28 * 0x60;
            *(undefined8 *)(lVar32 + 0x24) = 0;
            *(undefined8 *)(lVar32 + 0x2c) = 0x3f80000000000000;
            *(undefined8 *)(lVar32 + 0x34) = 0x3f8000003f800000;
            *(undefined8 *)(lVar32 + 0x44) = 0;
            *(undefined8 *)(lVar32 + 0x3c) = 0;
            *(undefined4 *)(lVar32 + 0x4c) = 0xffffffff;
            *(undefined8 *)(lVar32 + 0x50) = 0;
            *(undefined8 *)(lVar32 + 0x58) = 0x3f8000003f800000;
            memcpy(pvVar6,pvVar10,0x60);
            uVar44 = NEON_fminnm(*(undefined4 *)((long)pvVar10 + 0x24),uVar44);
            pvVar10 = (void *)((long)pvVar10 + 0x60);
            if (pvVar10 ==
                (void *)(*(long *)(lVar25 + 0x48) + (ulong)*(uint *)(lVar25 + 0x50) * 0x60))
            goto LAB_00450c88;
            uVar31 = *(uint *)(param_2 + 1);
            uVar28 = *(uint *)((long)param_2 + 0xc);
            if (uVar28 <= uVar31) break;
LAB_00450768:
            if (uVar28 <= uVar31) goto LAB_00450c88;
          }
        }
      }
    }
LAB_00450c88:
    (**(code **)(*param_1 + 0x68))(uVar44,param_1);
  }
  else {
    lVar32 = *(long *)(lVar25 + 0x50);
    if (lVar32 == 0) {
      lVar32 = *(long *)PTR_DAT_02712ae8;
      uVar28 = *(uint *)(lVar25 + 0xc);
      pMVar1 = (MutexType *)(lVar32 + 0x150);
      nn::os::LockMutex(pMVar1);
      uVar31 = *(uint *)(lVar32 + 0x178);
      if (uVar31 != 0) {
        uVar15 = 0;
        if (uVar31 != 0) {
          uVar15 = uVar28 / uVar31;
        }
        for (lVar32 = *(long *)(*(long *)(lVar32 + 0x170) + (ulong)(uVar28 - uVar15 * uVar31) * 8);
            lVar32 != 0; lVar32 = *(long *)(lVar32 + 8)) {
          if (*(uint *)(lVar32 + 0x10) == uVar28) {
            *(int *)(lVar32 + 0x14) = *(int *)(lVar32 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar1);
            *(long *)(lVar25 + 0x50) = lVar32;
            goto LAB_00450690;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
      local_b8 = (ulong)local_b8._4_4_ << 0x20;
      *(undefined8 *)(lVar25 + 0x50) = 0;
      lVar32 = param_1[0x20];
    }
    else {
LAB_00450690:
      local_b8 = CONCAT44(local_b8._4_4_,(uint)*(byte *)(lVar32 + 0xa7)) & 0xffffffff00000001;
      lVar32 = param_1[0x20];
    }
    if ((((lVar32 != 0) &&
         (bVar2 = *(byte *)(lVar25 + 0x4c), FUN_0048a460(lVar32,bVar2 >> 6 & 1),
         (bVar2 >> 6 & 1) != 0)) && ((*(byte *)(param_1[0x20] + 0x28) >> 1 & 1) != 0)) &&
       ((uVar23 = FUN_00489f70(), (uVar23 & 1) != 0 && (lVar32 = param_1[0x20], lVar32 != 0)))) {
      uVar22 = *(undefined8 *)PTR_DAT_02712dc8;
      uVar8 = FUN_00488860(param_1[0x29]);
      FUN_0048ae80(uVar22,lVar32,uVar8);
    }
    ppppppvVar26 = (void ******)FUN_004959d0(param_1[2]);
    fVar5 = DAT_01d4c1e0;
    if (*(int *)((long)ppppppvVar26 + 0x10) != 0) {
      local_d0 = local_b8 & 0xffffffff ^ 1;
      puVar35 = *(undefined8 **)((long)ppppppvVar26 + 8);
      local_c8[1] = ppppppvVar26;
      do {
        pppppvVar24 = (void *****)*puVar35;
        lVar32 = FUN_0042c0f0(pppppvVar24);
        if (lVar32 != 0) {
          uVar28 = *(uint *)(param_2 + 1);
          uVar31 = *(uint *)((long)param_2 + 0xc);
          if (uVar31 <= uVar28) {
            uVar23 = FUN_00450d00(param_2,1);
            if ((uVar23 & 1) == 0) break;
            uVar31 = *(uint *)((long)param_2 + 0xc);
          }
          if (uVar31 <= uVar28) break;
          ppppppvVar26 = (void ******)*param_2;
          uVar23 = (ulong)*(uint *)(param_2 + 1);
          ppppppvVar30 = ppppppvVar26 + uVar23 * 0xc;
          *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) + 1;
          if (ppppppvVar30 == (void ******)0x0) break;
          pfVar34 = (float *)((long)ppppppvVar26 + uVar23 * 0x60 + 0x24);
          pfVar34[0] = 0.0;
          pfVar34[1] = 0.0;
          *(undefined8 *)((long)ppppppvVar26 + uVar23 * 0x60 + 0x44) = 0;
          *(undefined8 *)((long)ppppppvVar26 + uVar23 * 0x60 + 0x2c) = 0x3f80000000000000;
          *(undefined8 *)((long)ppppppvVar26 + uVar23 * 0x60 + 0x34) = 0x3f8000003f800000;
          puVar13 = (undefined8 *)((long)ppppppvVar26 + uVar23 * 0x60 + 0x3c);
          *puVar13 = 0;
          *(undefined4 *)((long)ppppppvVar26 + uVar23 * 0x60 + 0x4c) = 0xffffffff;
          ppppppvVar26[uVar23 * 0xc + 0xb] = (void *****)0x3f8000003f800000;
          ppppppvVar26[uVar23 * 0xc + 10] = pppppvVar24;
          puVar17 = *(undefined8 **)(**(long **)(param_1[2] + 0x38) + 0x28);
          uVar28 = *(uint *)(**(long **)(param_1[2] + 0x38) + 0x30);
          puVar18 = puVar17;
          if (uVar28 == 0) {
LAB_00450950:
            if ((puVar18 == puVar17 + (ulong)uVar28 * 3) || (*(int *)(puVar18 + 2) == 0))
            goto LAB_00450984;
            local_b0 = *(undefined8 *)puVar18[1];
            uVar8 = ((undefined8 *)puVar18[1])[1];
            uVar36 = (undefined4)((ulong)local_b0 >> 0x20);
            local_a8._0_4_ = (undefined4)uVar8;
            local_a8._4_4_ = (undefined4)((ulong)uVar8 >> 0x20);
            uVar45 = (undefined4)local_b0;
            uVar44 = local_a8._4_4_;
          }
          else {
            lVar19 = (ulong)uVar28 * 0x18;
            do {
              if ((void *****)*puVar18 == pppppvVar24) goto LAB_00450950;
              lVar19 = lVar19 + -0x18;
              puVar18 = puVar18 + 3;
            } while (lVar19 != 0);
LAB_00450984:
            local_a8._0_4_ = 0;
            uVar45 = 0;
            uVar36 = 0;
            local_b0 = 0;
            local_a8 = 0;
            uVar44 = 0;
            uVar8 = local_a8;
          }
          local_a8 = uVar8;
          *(undefined4 *)(ppppppvVar26 + uVar23 * 0xc + 8) = uVar36;
          *(undefined4 *)((long)ppppppvVar26 + uVar23 * 0x60 + 0x44) = (undefined4)local_a8;
          *(undefined4 *)puVar13 = uVar45;
          *(undefined4 *)(ppppppvVar26 + uVar23 * 0xc + 9) = uVar44;
          fVar46 = SQRT(*(float *)(lVar25 + 0x1c) * *(float *)(lVar25 + 0x1c) +
                        *(float *)(lVar25 + 0x20) * *(float *)(lVar25 + 0x20) +
                        *(float *)(lVar25 + 0x24) * *(float *)(lVar25 + 0x24));
          *pfVar34 = fVar46 / (*(float *)(lVar32 + 0x84) *
                              *(float *)(**(long **)(param_1[2] + 0x38) + 0x40));
          *(undefined4 *)ppppppvVar30 = 0;
          pfVar27 = (float *)((long)ppppppvVar26 + uVar23 * 0x60 + 0x14);
          *pfVar27 = 0.0;
          pfVar29 = (float *)((long)ppppppvVar26 + uVar23 * 0x60 + 4);
          pfVar29[0] = 0.0;
          pfVar29[1] = 1.0;
          pfVar34 = (float *)((long)ppppppvVar26 + uVar23 * 0x60 + 0xc);
          pfVar34[0] = 0.0;
          pfVar34[1] = 1.0;
          fVar47 = *(float *)(lVar25 + 0x1c);
          fVar48 = *(float *)(lVar25 + 0x20);
          fVar49 = *(float *)(lVar25 + 0x24);
          if ((*(byte *)(lVar25 + 0x4c) & 7) == 0) {
            if ((int)local_b8 != 0) goto LAB_00450a30;
          }
          else if ((local_b8 & 1) != 0 || *(char *)(lVar32 + 0x88) != '\0') {
LAB_00450a30:
            local_c8[0] = ppppppvVar26;
            if (((*(byte *)(lVar25 + 0x4c) >> 5 & 1) == 0) && (lVar19 = param_1[0x20], lVar19 != 0))
            {
              puVar13 = *(undefined8 **)(lVar19 + 0x88);
              uVar28 = *(uint *)(lVar19 + 0x90);
              puVar18 = puVar13;
              if (uVar28 == 0) {
LAB_00450b04:
                pfVar9 = (float *)(puVar18 + 1);
                if (puVar18 == puVar13 + (ulong)uVar28 * 6) goto LAB_00450b1c;
              }
              else {
                lVar20 = (ulong)uVar28 * 0x30;
                do {
                  if ((void *****)*puVar18 == pppppvVar24) goto LAB_00450b04;
                  lVar20 = lVar20 + -0x30;
                  puVar18 = puVar18 + 6;
                } while (lVar20 != 0);
LAB_00450b1c:
                pfVar9 = (float *)FUN_0048a4d0(lVar19,pppppvVar24);
              }
              if (pfVar9 != (float *)0x0) {
                fVar49 = *(float *)(lVar25 + 0x1c);
                fVar37 = *(float *)(lVar25 + 0x20);
                fVar39 = pfVar9[1];
                fVar41 = pfVar9[6];
                fVar43 = pfVar9[7];
                fVar42 = pfVar9[4];
                fVar50 = pfVar9[5];
                fVar40 = *(float *)(lVar25 + 0x24);
                fVar47 = *pfVar9 * fVar49 + fVar37 * fVar39 + fVar40 * pfVar9[2];
                fVar38 = pfVar9[8];
                fVar48 = pfVar9[3] * fVar49 + fVar37 * fVar42 + fVar40 * fVar50;
                *(float *)ppppppvVar30 = pfVar9[2];
                *pfVar29 = fVar50;
                *(float *)(ppppppvVar26 + uVar23 * 0xc + 1) = fVar38;
                *pfVar34 = fVar39;
                fVar49 = fVar41 * fVar49 + fVar37 * fVar43 + fVar40 * fVar38;
                *(float *)(ppppppvVar26 + uVar23 * 0xc + 2) = fVar42;
                *pfVar27 = fVar43;
              }
            }
            else {
              *(undefined4 *)(ppppppvVar30 + 1) = *(undefined4 *)(lVar32 + 0x68);
              *ppppppvVar30 = *(void ******)(lVar32 + 0x60);
              *(undefined4 *)((long)ppppppvVar26 + uVar23 * 0x60 + 0x14) =
                   *(undefined4 *)(lVar32 + 0x74);
              *(undefined8 *)((long)ppppppvVar26 + uVar23 * 0x60 + 0xc) =
                   *(undefined8 *)(lVar32 + 0x6c);
              pfVar34 = (float *)FUN_0042c230(pppppvVar24);
              fVar49 = *(float *)(lVar25 + 0x1c);
              fVar37 = *(float *)(lVar25 + 0x20);
              fVar38 = *(float *)(lVar25 + 0x24);
              fVar47 = *pfVar34 * fVar49 + fVar37 * pfVar34[3] + fVar38 * pfVar34[6];
              fVar48 = pfVar34[1] * fVar49 + fVar37 * pfVar34[4] + fVar38 * pfVar34[7];
              fVar49 = pfVar34[2] * fVar49 + fVar37 * pfVar34[5] + fVar38 * pfVar34[8];
            }
            if (0.0 < fVar46 && (local_d0 & 1) == 0) {
              fVar46 = (float)NEON_fminnm((*(float *)(lVar32 + 0x60) * fVar47 +
                                           fVar48 * *(float *)(lVar32 + 100) +
                                          fVar49 * *(float *)(lVar32 + 0x68)) / fVar46,0x3f800000);
              if (fVar46 <= -1.0) {
                fVar46 = -1.0;
              }
              fVar38 = ABS(fVar46);
              fVar38 = (DAT_01d4bc40 +
                       fVar38 * (DAT_01d4bf9c +
                                fVar38 * (DAT_01d4c780 +
                                         fVar38 * (DAT_01d4bf98 +
                                                  fVar38 * (DAT_01d4bad0 + fVar5 * fVar38))))) *
                       fVar38;
              fVar37 = DAT_01d4c5b4 - fVar38;
              if (fVar46 < 0.0) {
                fVar37 = fVar38 + DAT_01d4c5b8;
              }
              *(float *)(ppppppvVar26 + uVar23 * 0xc + 5) = fVar37;
            }
            ppppppvVar26 = local_c8[0];
          }
          fVar46 = *(float *)(lVar32 + 0x7c);
          fVar37 = *(float *)(lVar32 + 0x80);
          *(float *)(ppppppvVar26 + uVar23 * 0xc + 3) = *(float *)(lVar32 + 0x78) + fVar47;
          *(float *)((long)ppppppvVar26 + uVar23 * 0x60 + 0x1c) = fVar46 + fVar48;
          *(float *)(ppppppvVar26 + uVar23 * 0xc + 4) = fVar37 + fVar49;
          ppppppvVar26 = local_c8[1];
        }
        puVar35 = puVar35 + 1;
      } while (puVar35 !=
               (undefined8 *)
               (*(long *)((long)ppppppvVar26 + 8) + (ulong)*(uint *)((long)ppppppvVar26 + 0x10) * 8)
              );
    }
  }
  return (int)param_2[1];
}


