/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00177020; name: FUN_00177020
 */


void FUN_00177020(long param_1)

{
  ushort *puVar1;
  short *psVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float *pfVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ushort uVar14;
  int iVar15;
  long *plVar16;
  float *pfVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  ushort uVar21;
  uint uVar22;
  long lVar23;
  undefined4 *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auStack_f0 [64];
  uint local_b0 [6];
  float local_98 [6];
  undefined1 auStack_78 [4];
  uint local_74;
  
  puVar8 = *(undefined4 **)(param_1 + 0x6b8);
  *(undefined4 *)(param_1 + 0xb0) = *puVar8;
  *(undefined4 *)(param_1 + 0xb4) = puVar8[1];
  uVar5 = puVar8[2];
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined2 *)(param_1 + 0xcc) = 0;
  *(undefined2 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = uVar5;
  uVar18 = *(uint *)(param_1 + 0x6c8);
  *(undefined4 *)(param_1 + 200) = puVar8[3];
  *(undefined2 *)(param_1 + 0xd2) = 0;
  fVar32 = DAT_01d4bd8c;
  if (uVar18 < 2) {
    uVar10 = 1;
    uVar14 = 1;
  }
  else {
    uVar11 = 1;
    uVar14 = 1;
    do {
      uVar10 = (uint)uVar11;
      if (uVar14 != 0) {
        lVar23 = *(long *)(param_1 + 0x6c0);
        pfVar9 = (float *)(puVar8 + uVar11 * 0x10);
        psVar2 = (short *)(lVar23 + uVar11 * 4);
        uVar22 = uVar14 - 1;
        pfVar7 = (float *)(param_1 + 0xb0 + (ulong)uVar22 * 0x28);
        do {
          if (((*(short *)(lVar23 + (ulong)*(ushort *)(pfVar7 + 7) * 4) == *psVar2) &&
              (*(short *)(lVar23 + (ulong)*(ushort *)(pfVar7 + 7) * 4 + 2) == psVar2[1])) &&
             (fVar32 <= *pfVar7 * *pfVar9 + pfVar7[1] * pfVar9[1] + pfVar7[2] * pfVar9[2]))
          goto LAB_00177144;
          uVar22 = uVar22 - 1;
          pfVar7 = pfVar7 + -10;
        } while (uVar22 != 0xffffffff);
      }
      uVar22 = 0xffffffff;
LAB_00177144:
      lVar23 = (ulong)(uint)uVar14 - 1;
      if (uVar22 != (uint)lVar23) {
        lVar23 = param_1 + lVar23 * 0x28;
        *(short *)(lVar23 + 0xce) = (short)uVar11 - *(short *)(lVar23 + 0xcc);
        if (uVar14 == 0x20) {
          uVar14 = 0x20;
          break;
        }
        uVar20 = (ulong)uVar14;
        lVar23 = param_1 + uVar20 * 0x28;
        puVar3 = (undefined4 *)(lVar23 + 0xb0);
        *(short *)(lVar23 + 0xcc) = (short)uVar11;
        *(undefined8 *)(lVar23 + 0xc0) = 0;
        if (uVar22 == 0xffffffff) {
          puVar24 = puVar8 + uVar11 * 0x10;
          *puVar3 = *puVar24;
          lVar23 = param_1 + uVar20 * 0x28;
          *(undefined4 *)(lVar23 + 0xb4) = puVar24[1];
          *(undefined4 *)(lVar23 + 0xb8) = puVar24[2];
          *(undefined4 *)(lVar23 + 200) = puVar24[3];
          uVar21 = uVar14;
        }
        else {
          lVar23 = param_1 + 0xb0;
          puVar24 = (undefined4 *)(lVar23 + (long)(int)uVar22 * 0x28);
          uVar21 = *(ushort *)(puVar24 + 8);
          *(undefined4 **)(puVar24 + 4) = puVar3;
          *puVar3 = *puVar24;
          lVar6 = lVar23 + uVar20 * 0x28;
          *(undefined4 *)(lVar6 + 4) = puVar24[1];
          *(undefined4 *)(lVar6 + 8) = puVar24[2];
          lVar23 = lVar23 + (ulong)uVar21 * 0x28;
          fVar26 = *(float *)(lVar23 + 0x18);
          if ((float)puVar8[uVar11 * 0x10 + 3] <= fVar26) {
            fVar26 = (float)puVar8[uVar11 * 0x10 + 3];
          }
          *(float *)(lVar6 + 0x18) = fVar26;
          *(float *)(lVar23 + 0x18) = fVar26;
        }
        lVar23 = param_1 + uVar20 * 0x28;
        *(ushort *)(lVar23 + 0xd0) = uVar21;
        *(ushort *)(lVar23 + 0xd2) = uVar14;
        uVar18 = *(uint *)(param_1 + 0x6c8);
        uVar14 = uVar14 + 1;
      }
      uVar10 = uVar10 + 1 & 0xffff;
      uVar11 = (ulong)uVar10;
    } while (uVar10 < uVar18);
  }
  uVar18 = (uint)uVar14;
  uVar11 = (ulong)uVar18;
  lVar23 = param_1 + uVar11 * 0x28;
  *(short *)(lVar23 + 0xa6) = (short)uVar10 - *(short *)(lVar23 + 0xa4);
  if (uVar18 != 0) {
    if (uVar18 == 1) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      lVar23 = param_1 + 0xd8;
      plVar16 = (long *)(param_1 + 0x5b8);
      do {
        lVar6 = lVar6 + 2;
        plVar16[-1] = lVar23 + -0x28;
        *plVar16 = lVar23;
        lVar23 = lVar23 + 0x50;
        plVar16 = plVar16 + 2;
      } while (uVar11 - (uVar11 & 1) != lVar6);
    }
    if ((uVar14 & 1) != 0) {
      *(long *)(param_1 + lVar6 * 8 + 0x5b0) = param_1 + lVar6 * 0x28 + 0xb0;
    }
  }
  FUN_00177a30(param_1 + 0x5b0,uVar11,auStack_78,auStack_f0,0x20);
  uVar5 = DAT_01d4c18c;
  fVar32 = DAT_01d4bb34;
  if (uVar18 == 0) {
    local_74 = 0;
  }
  else {
    uVar20 = 0;
    uVar13 = 0;
    do {
      while( true ) {
        pfVar9 = *(float **)(param_1 + uVar20 * 8 + 0x5b0);
        local_74 = (uint)uVar13;
        if (*(short *)(pfVar9 + 8) != *(short *)((long)pfVar9 + 0x22)) break;
        if (local_74 == 6) {
          local_74 = 6;
          goto LAB_001779fc;
        }
        local_74 = local_74 + 1;
        uVar18 = 0;
        if (pfVar9 != (float *)0x0) {
          pfVar7 = pfVar9;
          do {
            puVar1 = (ushort *)((long)pfVar7 + 0x1e);
            pfVar7 = *(float **)(pfVar7 + 4);
            uVar18 = uVar18 + *puVar1;
          } while (pfVar7 != (float *)0x0);
          if (6 < uVar18) {
            local_b0[0] = 0;
            if (pfVar9 != (float *)0x0) {
              fVar26 = 0.0;
              pfVar7 = pfVar9;
              do {
                if ((ulong)*(ushort *)((long)pfVar7 + 0x1e) != 0) {
                  uVar11 = 0;
                  pfVar17 = (float *)(*(long *)(param_1 + 0x6b8) +
                                      (ulong)*(ushort *)(pfVar7 + 7) * 0x40 + 0x18);
                  uVar18 = local_b0[0];
                  do {
                    fVar27 = pfVar17[-2] * pfVar17[-2] + pfVar17[-1] * pfVar17[-1] +
                             *pfVar17 * *pfVar17;
                    local_b0[0] = (uint)*(ushort *)(pfVar7 + 7) + (int)uVar11;
                    if (fVar27 <= fVar26) {
                      local_b0[0] = uVar18;
                      fVar27 = fVar26;
                    }
                    fVar26 = fVar27;
                    uVar11 = uVar11 + 1;
                    pfVar17 = pfVar17 + 0x10;
                    uVar18 = local_b0[0];
                  } while (uVar11 < *(ushort *)((long)pfVar7 + 0x1e));
                }
                pfVar7 = *(float **)(pfVar7 + 4);
              } while (pfVar7 != (float *)0x0);
            }
            uVar11 = (ulong)local_b0[0];
            *(uint *)(param_1 + uVar13 * 0x1c + 4) = local_b0[0];
            lVar6 = *(long *)(param_1 + 0x6b8);
            lVar23 = lVar6 + uVar11 * 0x40;
            fVar29 = *(float *)(lVar23 + 0x18);
            fVar25 = *(float *)(lVar23 + 0x10);
            fVar28 = *(float *)(lVar23 + 0x14);
            fVar26 = fVar28;
            fVar27 = fVar29;
            local_b0[1] = local_b0[0];
            fVar30 = fVar25;
            if (pfVar9 != (float *)0x0) {
              fVar26 = 0.0;
              pfVar7 = pfVar9;
              do {
                if ((ulong)*(ushort *)((long)pfVar7 + 0x1e) != 0) {
                  uVar11 = 0;
                  pfVar17 = (float *)(lVar6 + 0x18 + (ulong)*(ushort *)(pfVar7 + 7) * 0x40);
                  uVar18 = local_b0[1];
                  fVar27 = fVar26;
                  do {
                    fVar30 = (fVar25 - pfVar17[-2]) * (fVar25 - pfVar17[-2]) +
                             (fVar28 - pfVar17[-1]) * (fVar28 - pfVar17[-1]) +
                             (fVar29 - *pfVar17) * (fVar29 - *pfVar17);
                    fVar26 = fVar30;
                    if (fVar30 <= fVar27) {
                      fVar26 = fVar27;
                    }
                    iVar19 = (int)uVar11;
                    uVar11 = uVar11 + 1;
                    local_b0[1] = (uint)*(ushort *)(pfVar7 + 7) + iVar19;
                    if (fVar30 <= fVar27) {
                      local_b0[1] = uVar18;
                    }
                    pfVar17 = pfVar17 + 0x10;
                    uVar18 = local_b0[1];
                    fVar27 = fVar26;
                  } while (uVar11 < *(ushort *)((long)pfVar7 + 0x1e));
                }
                pfVar7 = *(float **)(pfVar7 + 4);
              } while (pfVar7 != (float *)0x0);
              uVar11 = (ulong)local_b0[1];
              lVar4 = lVar6 + uVar11 * 0x40;
              fVar27 = *(float *)(lVar4 + 0x18);
              fVar30 = *(float *)(lVar4 + 0x10);
              fVar26 = *(float *)(lVar4 + 0x14);
            }
            *(uint *)(param_1 + uVar13 * 0x1c + 8) = local_b0[1];
            local_b0[2] = local_b0[1];
            if (pfVar9 == (float *)0x0) {
              *(uint *)(param_1 + uVar13 * 0x1c + 0xc) = local_b0[1];
              local_b0[3] = local_b0[1];
            }
            else {
              fVar31 = (fVar28 - fVar26) * pfVar9[2] - (fVar29 - fVar27) * pfVar9[1];
              fVar33 = (fVar29 - fVar27) * *pfVar9 - (fVar25 - fVar30) * pfVar9[2];
              fVar35 = (fVar25 - fVar30) * pfVar9[1] - (fVar28 - fVar26) * *pfVar9;
              fVar34 = 0.0;
              pfVar7 = pfVar9;
              do {
                if ((ulong)*(ushort *)((long)pfVar7 + 0x1e) != 0) {
                  uVar20 = 0;
                  pfVar17 = (float *)(lVar6 + 0x18 + (ulong)*(ushort *)(pfVar7 + 7) * 0x40);
                  uVar18 = local_b0[2];
                  fVar37 = fVar34;
                  do {
                    fVar36 = fVar31 * (pfVar17[-2] - fVar25) + fVar33 * (pfVar17[-1] - fVar28) +
                             fVar35 * (*pfVar17 - fVar29);
                    fVar34 = fVar36;
                    if (fVar36 <= fVar37) {
                      fVar34 = fVar37;
                    }
                    iVar19 = (int)uVar20;
                    uVar20 = uVar20 + 1;
                    local_b0[2] = (uint)*(ushort *)(pfVar7 + 7) + iVar19;
                    if (fVar36 <= fVar37) {
                      local_b0[2] = uVar18;
                    }
                    pfVar17 = pfVar17 + 0x10;
                    uVar18 = local_b0[2];
                    fVar37 = fVar34;
                  } while (uVar20 < *(ushort *)((long)pfVar7 + 0x1e));
                }
                pfVar7 = *(float **)(pfVar7 + 4);
              } while (pfVar7 != (float *)0x0);
              *(uint *)(param_1 + uVar13 * 0x1c + 0xc) = local_b0[2];
              local_b0[3] = local_b0[2];
              if (pfVar9 == (float *)0x0) {
              }
              else {
                fVar34 = 0.0;
                pfVar7 = pfVar9;
                do {
                  if ((ulong)*(ushort *)((long)pfVar7 + 0x1e) != 0) {
                    uVar20 = 0;
                    pfVar17 = (float *)(lVar6 + 0x18 + (ulong)*(ushort *)(pfVar7 + 7) * 0x40);
                    uVar18 = local_b0[3];
                    fVar37 = fVar34;
                    do {
                      fVar36 = (-(fVar33 * (pfVar17[-1] - fVar28)) - fVar31 * (pfVar17[-2] - fVar25)
                               ) - fVar35 * (*pfVar17 - fVar29);
                      fVar34 = fVar36;
                      if (fVar36 <= fVar37) {
                        fVar34 = fVar37;
                      }
                      iVar19 = (int)uVar20;
                      uVar20 = uVar20 + 1;
                      local_b0[3] = (uint)*(ushort *)(pfVar7 + 7) + iVar19;
                      if (fVar36 <= fVar37) {
                        local_b0[3] = uVar18;
                      }
                      pfVar17 = pfVar17 + 0x10;
                      uVar18 = local_b0[3];
                      fVar37 = fVar34;
                    } while (uVar20 < *(ushort *)((long)pfVar7 + 0x1e));
                  }
                  pfVar7 = *(float **)(pfVar7 + 4);
                } while (pfVar7 != (float *)0x0);
              }
            }
            *(uint *)(param_1 + uVar13 * 0x1c + 0x10) = local_b0[3];
            local_98[0] = *(float *)(lVar23 + 0xc) + fVar32;
            lVar23 = lVar6 + (ulong)local_b0[2] * 0x40;
            local_98[1] = *(float *)(lVar6 + uVar11 * 0x40 + 0xc) + fVar32;
            lVar4 = lVar6 + (ulong)local_b0[3] * 0x40;
            local_98[2] = *(float *)(lVar23 + 0xc) + fVar32;
            local_98[3] = *(float *)(lVar4 + 0xc) + fVar32;
            if (pfVar9 != (float *)0x0) {
              do {
                uVar14 = *(ushort *)((long)pfVar9 + 0x1e);
                if ((ulong)uVar14 != 0) {
                  uVar21 = *(ushort *)(pfVar9 + 7);
                  fVar32 = *(float *)(lVar23 + 0x10);
                  pfVar7 = (float *)(lVar6 + 0x18 + (ulong)uVar21 * 0x40);
                  fVar34 = *(float *)(lVar23 + 0x14);
                  fVar31 = *(float *)(lVar23 + 0x18);
                  fVar33 = *(float *)(lVar4 + 0x10);
                  fVar35 = *(float *)(lVar4 + 0x14);
                  uVar11 = 0;
                  fVar37 = *(float *)(lVar4 + 0x18);
                  do {
                    fVar40 = pfVar7[-1];
                    fVar41 = *pfVar7;
                    fVar38 = pfVar7[-3];
                    fVar39 = pfVar7[-2];
                    fVar42 = (float)NEON_fminnm((fVar25 - fVar39) * (fVar25 - fVar39) +
                                                (fVar28 - fVar40) * (fVar28 - fVar40) +
                                                (fVar29 - fVar41) * (fVar29 - fVar41),uVar5);
                    fVar43 = (fVar30 - fVar39) * (fVar30 - fVar39) +
                             (fVar26 - fVar40) * (fVar26 - fVar40) +
                             (fVar27 - fVar41) * (fVar27 - fVar41);
                    fVar45 = fVar34 - fVar40;
                    fVar40 = fVar35 - fVar40;
                    fVar36 = fVar43;
                    if (fVar42 <= fVar43) {
                      fVar36 = fVar42;
                    }
                    fVar44 = fVar32 - fVar39;
                    fVar39 = fVar33 - fVar39;
                    fVar46 = fVar31 - fVar41;
                    fVar41 = fVar37 - fVar41;
                    fVar44 = fVar44 * fVar44 + fVar45 * fVar45 + fVar46 * fVar46;
                    fVar45 = fVar44;
                    if (fVar36 <= fVar44) {
                      fVar45 = fVar36;
                    }
                    uVar20 = 2;
                    if (fVar36 <= fVar44) {
                      uVar20 = (ulong)(fVar43 < fVar42);
                    }
                    uVar13 = 3;
                    if (fVar45 <= fVar39 * fVar39 + fVar40 * fVar40 + fVar41 * fVar41) {
                      uVar13 = uVar20;
                    }
                    if (fVar38 < local_98[uVar13]) {
                      local_b0[uVar13] = (uint)uVar21 + (int)uVar11;
                      local_98[uVar13] = fVar38;
                    }
                    uVar11 = uVar11 + 1;
                    pfVar7 = pfVar7 + 0x10;
                  } while (uVar11 < uVar14);
                }
                pfVar9 = *(float **)(pfVar9 + 4);
              } while (pfVar9 != (float *)0x0);
            }
                    /* WARNING: Subroutine does not return */
            memset(auStack_f0,0,0x40);
          }
          if (pfVar9 != (float *)0x0) {
            uVar10 = 0;
            do {
              while( true ) {
                uVar14 = *(ushort *)((long)pfVar9 + 0x1e);
                if (uVar14 == 0) break;
                uVar21 = *(ushort *)(pfVar9 + 7);
                uVar22 = uVar14 & 3;
                if (uVar14 - 1 < 3) {
                  iVar19 = 0;
                  uVar12 = uVar10;
                  uVar10 = (uint)uVar14;
                }
                else {
                  iVar19 = 0;
                  do {
                    uVar12 = uVar10 + iVar19;
                    iVar15 = (uint)uVar21 + iVar19;
                    iVar19 = iVar19 + 4;
                    lVar23 = param_1 + uVar13 * 0x1c + 4;
                    *(int *)(lVar23 + (ulong)uVar12 * 4) = iVar15;
                    *(int *)(lVar23 + (ulong)(uVar12 + 1) * 4) = iVar15 + 1;
                    *(int *)(lVar23 + (ulong)(uVar12 + 2) * 4) = iVar15 + 2;
                    *(int *)(lVar23 + (ulong)(uVar12 + 3) * 4) = iVar15 + 3;
                  } while (uVar14 - uVar22 != iVar19);
                  uVar12 = uVar10 + iVar19;
                  uVar10 = uVar10 + iVar19;
                }
                if ((uVar14 & 3) != 0) {
                  iVar19 = iVar19 + (uint)uVar21;
                  iVar15 = -uVar22;
                  do {
                    uVar10 = uVar12 + 1;
                    *(int *)(param_1 + uVar13 * 0x1c + (ulong)uVar12 * 4 + 4) = iVar19;
                    iVar19 = iVar19 + 1;
                    iVar15 = iVar15 + 1;
                    uVar12 = uVar10;
                  } while (iVar15 != 0);
                }
                pfVar9 = *(float **)(pfVar9 + 4);
                if (pfVar9 == (float *)0x0) goto LAB_00177440;
              }
              pfVar9 = *(float **)(pfVar9 + 4);
            } while (pfVar9 != (float *)0x0);
          }
        }
LAB_00177440:
        *(uint *)(param_1 + uVar13 * 0x1c) = uVar18;
        uVar20 = uVar20 + 1;
        uVar13 = (ulong)local_74;
        if (uVar11 <= uVar20) goto LAB_001779fc;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar11);
  }
LAB_001779fc:
  *(uint *)(param_1 + 0xa8) = local_74;
  return;
}


