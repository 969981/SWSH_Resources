/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e0db0; name: FUN_004e0db0
 */


void FUN_004e0db0(undefined8 param_1,long *param_2,long param_3,long param_4,long param_5,
                 uint param_6,uint param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  float *pfVar3;
  byte bVar4;
  ushort uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  float *pfVar18;
  float *pfVar19;
  undefined8 *puVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
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
  
  if (param_6 != 0) {
    uVar14 = (uint)*(byte *)(param_2 + 1);
    uVar8 = 0;
    do {
      pfVar19 = (float *)(param_3 + uVar8 * 8);
      fVar21 = *pfVar19;
      if (uVar14 != 0) {
        fVar23 = pfVar19[1];
        uVar9 = 0;
        puVar10 = *(undefined8 **)(param_5 + uVar8 * 8);
        do {
          puVar11 = (undefined8 *)(*param_2 + uVar9 * *(ushort *)(param_2 + 2) * 4);
          uVar16 = (ulong)(*(ushort *)(param_2 + 2) >> 2);
          puVar2 = puVar11 + uVar16 * 2;
          if (puVar11 < puVar2) {
            uVar16 = uVar16 * 0x10 - 1;
            uVar14 = ((uint)(uVar16 >> 4) & 0xfffffff) + 1;
            puVar15 = puVar10;
            if ((uVar14 & 3) != 0) {
              lVar17 = -((ulong)uVar14 & 3);
              puVar7 = puVar10;
              puVar20 = puVar11;
              do {
                puVar15 = puVar7 + 2;
                uVar22 = *puVar7;
                puVar11 = puVar20 + 2;
                lVar17 = lVar17 + 1;
                puVar20[1] = CONCAT44((fVar21 + (float)((ulong)puVar7[1] >> 0x20) * fVar23) *
                                      (float)((ulong)puVar20[1] >> 0x20),
                                      (fVar21 + (float)puVar7[1] * fVar23) * (float)puVar20[1]);
                *puVar20 = CONCAT44((fVar21 + (float)((ulong)uVar22 >> 0x20) * fVar23) *
                                    (float)((ulong)*puVar20 >> 0x20),
                                    (fVar21 + (float)uVar22 * fVar23) * (float)*puVar20);
                puVar7 = puVar15;
                puVar20 = puVar11;
              } while (lVar17 != 0);
            }
            if (0x2f < uVar16) {
              do {
                uVar22 = *puVar15;
                puVar11[1] = CONCAT44((fVar21 + (float)((ulong)puVar15[1] >> 0x20) * fVar23) *
                                      (float)((ulong)puVar11[1] >> 0x20),
                                      (fVar21 + (float)puVar15[1] * fVar23) * (float)puVar11[1]);
                *puVar11 = CONCAT44((fVar21 + (float)((ulong)uVar22 >> 0x20) * fVar23) *
                                    (float)((ulong)*puVar11 >> 0x20),
                                    (fVar21 + (float)uVar22 * fVar23) * (float)*puVar11);
                uVar22 = puVar15[2];
                puVar11[3] = CONCAT44((fVar21 + (float)((ulong)puVar15[3] >> 0x20) * fVar23) *
                                      (float)((ulong)puVar11[3] >> 0x20),
                                      (fVar21 + (float)puVar15[3] * fVar23) * (float)puVar11[3]);
                puVar11[2] = CONCAT44((fVar21 + (float)((ulong)uVar22 >> 0x20) * fVar23) *
                                      (float)((ulong)puVar11[2] >> 0x20),
                                      (fVar21 + (float)uVar22 * fVar23) * (float)puVar11[2]);
                uVar22 = puVar15[4];
                puVar11[5] = CONCAT44((fVar21 + (float)((ulong)puVar15[5] >> 0x20) * fVar23) *
                                      (float)((ulong)puVar11[5] >> 0x20),
                                      (fVar21 + (float)puVar15[5] * fVar23) * (float)puVar11[5]);
                puVar11[4] = CONCAT44((fVar21 + (float)((ulong)uVar22 >> 0x20) * fVar23) *
                                      (float)((ulong)puVar11[4] >> 0x20),
                                      (fVar21 + (float)uVar22 * fVar23) * (float)puVar11[4]);
                puVar7 = puVar15 + 7;
                uVar22 = puVar15[6];
                puVar15 = puVar15 + 8;
                puVar11[7] = CONCAT44((fVar21 + (float)((ulong)*puVar7 >> 0x20) * fVar23) *
                                      (float)((ulong)puVar11[7] >> 0x20),
                                      (fVar21 + (float)*puVar7 * fVar23) * (float)puVar11[7]);
                puVar11[6] = CONCAT44((fVar21 + (float)((ulong)uVar22 >> 0x20) * fVar23) *
                                      (float)((ulong)puVar11[6] >> 0x20),
                                      (fVar21 + (float)uVar22 * fVar23) * (float)puVar11[6]);
                puVar11 = puVar11 + 8;
              } while (puVar11 < puVar2);
            }
            uVar14 = (uint)*(byte *)(param_2 + 1);
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar14);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != param_6);
  }
  if (param_7 != 0) {
    uVar8 = 0;
    do {
      pfVar19 = (float *)(param_4 + uVar8 * 8);
      fVar21 = *pfVar19;
      fVar23 = pfVar19[1];
      bVar4 = *(byte *)(param_2 + 1);
      uVar9 = (ulong)bVar4;
      uVar5 = *(ushort *)((long)param_2 + 0x12);
      uVar16 = (ulong)uVar5;
      if (fVar23 == fVar21) {
        if ((bVar4 != 0) && (fVar21 != 1.0)) {
          if (uVar5 < 4) {
            uVar13 = uVar16 * 4 - 1;
            uVar14 = ((uint)(uVar13 >> 2) & 0x3fffffff) + 1;
            uVar12 = 0;
            do {
              pfVar19 = (float *)(*param_2 + uVar12 * *(ushort *)(param_2 + 2) * 4);
              pfVar3 = pfVar19 + uVar16;
              if (pfVar19 < pfVar3) {
                if ((uVar14 & 7) != 0) {
                  pfVar18 = pfVar19;
                  lVar17 = -((ulong)uVar14 & 7);
                  do {
                    lVar17 = lVar17 + 1;
                    pfVar19 = pfVar18 + 1;
                    *pfVar18 = *pfVar18 * fVar21;
                    pfVar18 = pfVar19;
                  } while (lVar17 != 0);
                }
                if (0x1b < uVar13) {
                  do {
                    *pfVar19 = *pfVar19 * fVar21;
                    pfVar19[1] = pfVar19[1] * fVar21;
                    pfVar19[2] = pfVar19[2] * fVar21;
                    pfVar19[3] = pfVar19[3] * fVar21;
                    pfVar19[4] = pfVar19[4] * fVar21;
                    pfVar19[5] = pfVar19[5] * fVar21;
                    pfVar19[6] = pfVar19[6] * fVar21;
                    pfVar19[7] = pfVar19[7] * fVar21;
                    pfVar19 = pfVar19 + 8;
                  } while (pfVar19 < pfVar3);
                }
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 != uVar9);
          }
          else if ((uVar5 & 0xfffc) == 0) {
            uVar13 = uVar16 * 4 - 1;
            uVar14 = ((uint)(uVar13 >> 2) & 0x3fffffff) + 1;
            uVar12 = 0;
            do {
              pfVar19 = (float *)(*param_2 + uVar12 * *(ushort *)(param_2 + 2) * 4);
              pfVar3 = pfVar19 + uVar16;
              if (pfVar19 < pfVar3) {
                if ((uVar14 & 7) != 0) {
                  pfVar18 = pfVar19;
                  lVar17 = -((ulong)uVar14 & 7);
                  do {
                    lVar17 = lVar17 + 1;
                    pfVar19 = pfVar18 + 1;
                    *pfVar18 = *pfVar18 * fVar21;
                    pfVar18 = pfVar19;
                  } while (lVar17 != 0);
                }
                if (0x1b < uVar13) {
                  do {
                    pfVar19[1] = pfVar19[1] * fVar21;
                    *pfVar19 = *pfVar19 * fVar21;
                    pfVar19[3] = pfVar19[3] * fVar21;
                    pfVar19[2] = pfVar19[2] * fVar21;
                    pfVar19[5] = pfVar19[5] * fVar21;
                    pfVar19[4] = pfVar19[4] * fVar21;
                    pfVar19[7] = pfVar19[7] * fVar21;
                    pfVar19[6] = pfVar19[6] * fVar21;
                    pfVar19 = pfVar19 + 8;
                  } while (pfVar19 < pfVar3);
                }
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 != uVar9);
          }
          else {
            uVar12 = 0;
            do {
              lVar17 = *param_2;
              lVar6 = uVar12 * *(ushort *)(param_2 + 2) * 4;
              puVar2 = (undefined8 *)(lVar17 + lVar6);
              puVar11 = (undefined8 *)((long)puVar2 + (ulong)(uVar5 & 0xfffc) * 4);
              puVar10 = puVar2 + 2;
              puVar15 = puVar11;
              if (puVar11 <= puVar10) {
                puVar15 = puVar10;
              }
              puVar7 = (undefined8 *)(lVar17 + (ulong)((uVar5 & 0xfffc) << 2) + lVar6);
              if (puVar7 <= puVar10) {
                puVar7 = puVar10;
              }
              uVar13 = (long)puVar7 + (uVar12 * *(ushort *)(param_2 + 2) * -4 - lVar17) + -1;
              uVar14 = ((uint)(uVar13 >> 4) & 0xfffffff) + 1;
              puVar10 = puVar2;
              if ((uVar14 & 7) != 0) {
                lVar17 = -((ulong)uVar14 & 7);
                puVar7 = puVar2;
                do {
                  puVar10 = puVar7 + 2;
                  lVar17 = lVar17 + 1;
                  puVar7[1] = CONCAT44((float)((ulong)puVar7[1] >> 0x20) * fVar21,
                                       (float)puVar7[1] * fVar21);
                  *puVar7 = CONCAT44((float)((ulong)*puVar7 >> 0x20) * fVar21,
                                     (float)*puVar7 * fVar21);
                  puVar7 = puVar10;
                } while (lVar17 != 0);
              }
              if (0x6f < uVar13) {
                do {
                  puVar10[1] = CONCAT44((float)((ulong)puVar10[1] >> 0x20) * fVar21,
                                        (float)puVar10[1] * fVar21);
                  *puVar10 = CONCAT44((float)((ulong)*puVar10 >> 0x20) * fVar21,
                                      (float)*puVar10 * fVar21);
                  puVar10[3] = CONCAT44((float)((ulong)puVar10[3] >> 0x20) * fVar21,
                                        (float)puVar10[3] * fVar21);
                  puVar10[2] = CONCAT44((float)((ulong)puVar10[2] >> 0x20) * fVar21,
                                        (float)puVar10[2] * fVar21);
                  puVar10[5] = CONCAT44((float)((ulong)puVar10[5] >> 0x20) * fVar21,
                                        (float)puVar10[5] * fVar21);
                  puVar10[4] = CONCAT44((float)((ulong)puVar10[4] >> 0x20) * fVar21,
                                        (float)puVar10[4] * fVar21);
                  puVar10[7] = CONCAT44((float)((ulong)puVar10[7] >> 0x20) * fVar21,
                                        (float)puVar10[7] * fVar21);
                  puVar10[6] = CONCAT44((float)((ulong)puVar10[6] >> 0x20) * fVar21,
                                        (float)puVar10[6] * fVar21);
                  puVar10[9] = CONCAT44((float)((ulong)puVar10[9] >> 0x20) * fVar21,
                                        (float)puVar10[9] * fVar21);
                  puVar10[8] = CONCAT44((float)((ulong)puVar10[8] >> 0x20) * fVar21,
                                        (float)puVar10[8] * fVar21);
                  puVar10[0xb] = CONCAT44((float)((ulong)puVar10[0xb] >> 0x20) * fVar21,
                                          (float)puVar10[0xb] * fVar21);
                  puVar10[10] = CONCAT44((float)((ulong)puVar10[10] >> 0x20) * fVar21,
                                         (float)puVar10[10] * fVar21);
                  puVar10[0xd] = CONCAT44((float)((ulong)puVar10[0xd] >> 0x20) * fVar21,
                                          (float)puVar10[0xd] * fVar21);
                  puVar10[0xc] = CONCAT44((float)((ulong)puVar10[0xc] >> 0x20) * fVar21,
                                          (float)puVar10[0xc] * fVar21);
                  puVar10[0xf] = CONCAT44((float)((ulong)puVar10[0xf] >> 0x20) * fVar21,
                                          (float)puVar10[0xf] * fVar21);
                  puVar10[0xe] = CONCAT44((float)((ulong)puVar10[0xe] >> 0x20) * fVar21,
                                          (float)puVar10[0xe] * fVar21);
                  puVar10 = puVar10 + 0x10;
                } while (puVar10 < puVar11);
              }
              pfVar3 = (float *)((long)puVar2 + uVar16 * 4);
              pfVar19 = (float *)((long)puVar2 +
                                 ((long)puVar15 + ~(ulong)puVar2 & 0xfffffffffffffff0) + 0x10);
              if (pfVar19 < pfVar3) {
                uVar13 = (uVar16 * 4 + -0x11) -
                         ((long)puVar15 + ~(ulong)puVar2 & 0xfffffffffffffff0);
                uVar14 = ((uint)(uVar13 >> 2) & 0x3fffffff) + 1;
                if ((uVar14 & 7) != 0) {
                  lVar17 = -((ulong)uVar14 & 7);
                  pfVar18 = pfVar19;
                  do {
                    lVar17 = lVar17 + 1;
                    pfVar19 = pfVar18 + 1;
                    *pfVar18 = *pfVar18 * fVar21;
                    pfVar18 = pfVar19;
                  } while (lVar17 != 0);
                }
                if (0x1b < uVar13) {
                  do {
                    *pfVar19 = *pfVar19 * fVar21;
                    pfVar19[1] = pfVar19[1] * fVar21;
                    pfVar19[2] = pfVar19[2] * fVar21;
                    pfVar19[3] = pfVar19[3] * fVar21;
                    pfVar19[4] = pfVar19[4] * fVar21;
                    pfVar19[5] = pfVar19[5] * fVar21;
                    pfVar19[6] = pfVar19[6] * fVar21;
                    pfVar19[7] = pfVar19[7] * fVar21;
                    pfVar19 = pfVar19 + 8;
                  } while (pfVar19 < pfVar3);
                }
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 != uVar9);
          }
        }
      }
      else if (bVar4 != 0) {
        fVar23 = fVar23 - fVar21;
        if (uVar5 < 4) {
          fVar23 = (1.0 / (float)uVar16) * fVar23;
          uVar13 = uVar16 * 4 - 1;
          uVar14 = ((uint)(uVar13 >> 2) & 0x3fffffff) + 1;
          uVar12 = 0;
          do {
            pfVar19 = (float *)(*param_2 + uVar12 * *(ushort *)(param_2 + 2) * 4);
            pfVar3 = pfVar19 + uVar16;
            if (pfVar19 < pfVar3) {
              fVar24 = fVar21;
              if ((uVar14 & 3) != 0) {
                pfVar18 = pfVar19;
                lVar17 = -((ulong)uVar14 & 3);
                do {
                  fVar26 = *pfVar18 * fVar24;
                  fVar24 = fVar24 + fVar23;
                  pfVar19 = pfVar18 + 1;
                  *pfVar18 = fVar26;
                  lVar17 = lVar17 + 1;
                  pfVar18 = pfVar19;
                } while (lVar17 != 0);
              }
              if (0xb < uVar13) {
                do {
                  fVar26 = fVar24 + fVar23 + fVar23;
                  *pfVar19 = *pfVar19 * fVar24;
                  pfVar19[1] = pfVar19[1] * (fVar24 + fVar23);
                  fVar25 = fVar26 + fVar23;
                  fVar24 = fVar25 + fVar23;
                  pfVar19[2] = pfVar19[2] * fVar26;
                  pfVar19[3] = pfVar19[3] * fVar25;
                  pfVar19 = pfVar19 + 4;
                } while (pfVar19 < pfVar3);
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 != uVar9);
        }
        else {
          fVar24 = (1.0 / (float)uVar16) * fVar23;
          uVar14 = uVar5 & 0xfffc;
          if ((uVar5 & 0xfffc) == 0) {
            uVar13 = uVar16 * 4 - 1;
            uVar14 = ((uint)(uVar13 >> 2) & 0x3fffffff) + 1;
            uVar12 = 0;
            do {
              pfVar19 = (float *)(*param_2 + uVar12 * *(ushort *)(param_2 + 2) * 4);
              pfVar3 = pfVar19 + uVar16;
              if (pfVar19 < pfVar3) {
                fVar23 = fVar21;
                if ((uVar14 & 3) != 0) {
                  pfVar18 = pfVar19;
                  lVar17 = -((ulong)uVar14 & 3);
                  do {
                    fVar26 = *pfVar18 * fVar23;
                    fVar23 = fVar23 + fVar24;
                    pfVar19 = pfVar18 + 1;
                    *pfVar18 = fVar26;
                    lVar17 = lVar17 + 1;
                    pfVar18 = pfVar19;
                  } while (lVar17 != 0);
                }
                if (0xb < uVar13) {
                  do {
                    fVar26 = fVar23 + fVar24 + fVar24;
                    *pfVar19 = *pfVar19 * fVar23;
                    pfVar19[1] = pfVar19[1] * (fVar23 + fVar24);
                    fVar25 = fVar26 + fVar24;
                    fVar23 = fVar25 + fVar24;
                    pfVar19[2] = pfVar19[2] * fVar26;
                    pfVar19[3] = pfVar19[3] * fVar25;
                    pfVar19 = pfVar19 + 4;
                  } while (pfVar19 < pfVar3);
                }
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 != uVar9);
          }
          else {
            fVar23 = (1.0 / (float)uVar14) * fVar23;
            fVar25 = fVar23 + fVar21;
            fVar35 = fVar25 + fVar23;
            fVar26 = fVar23 * 4.0;
            uVar12 = 0;
            do {
              lVar17 = *param_2;
              lVar6 = uVar12 * *(ushort *)(param_2 + 2) * 4;
              puVar2 = (undefined8 *)(lVar17 + lVar6);
              puVar11 = (undefined8 *)((long)puVar2 + (ulong)uVar14 * 4);
              puVar10 = puVar2 + 2;
              puVar15 = puVar11;
              if (puVar11 <= puVar10) {
                puVar15 = puVar10;
              }
              puVar7 = (undefined8 *)(lVar17 + (ulong)(uVar14 << 2) + lVar6);
              if (puVar7 <= puVar10) {
                puVar7 = puVar10;
              }
              uVar13 = (long)puVar7 + (uVar12 * *(ushort *)(param_2 + 2) * -4 - lVar17) + -1;
              uVar1 = ((uint)(uVar13 >> 4) & 0xfffffff) + 1;
              fVar27 = fVar21;
              fVar28 = fVar25;
              fVar29 = fVar35;
              fVar32 = fVar35 + fVar23;
              puVar10 = puVar2;
              if ((uVar1 & 3) != 0) {
                lVar17 = -((ulong)uVar1 & 3);
                puVar7 = puVar2;
                do {
                  puVar10 = puVar7 + 2;
                  lVar17 = lVar17 + 1;
                  fVar36 = (float)*puVar7 * fVar27;
                  fVar37 = (float)((ulong)*puVar7 >> 0x20) * fVar28;
                  fVar38 = (float)puVar7[1] * fVar29;
                  fVar39 = (float)((ulong)puVar7[1] >> 0x20) * fVar32;
                  fVar27 = fVar27 + fVar26;
                  fVar28 = fVar28 + fVar26;
                  fVar29 = fVar29 + fVar26;
                  fVar32 = fVar32 + fVar26;
                  puVar7[1] = CONCAT44(fVar39,fVar38);
                  *puVar7 = CONCAT44(fVar37,fVar36);
                  puVar7 = puVar10;
                } while (lVar17 != 0);
              }
              if (0x2f < uVar13) {
                do {
                  puVar10[1] = CONCAT44((float)((ulong)puVar10[1] >> 0x20) * fVar32,
                                        (float)puVar10[1] * fVar29);
                  *puVar10 = CONCAT44((float)((ulong)*puVar10 >> 0x20) * fVar28,
                                      (float)*puVar10 * fVar27);
                  fVar36 = fVar27 + fVar26 + fVar26;
                  fVar38 = fVar28 + fVar26 + fVar26;
                  fVar30 = fVar29 + fVar26 + fVar26;
                  fVar33 = fVar32 + fVar26 + fVar26;
                  puVar10[3] = CONCAT44((float)((ulong)puVar10[3] >> 0x20) * (fVar32 + fVar26),
                                        (float)puVar10[3] * (fVar29 + fVar26));
                  puVar10[2] = CONCAT44((float)((ulong)puVar10[2] >> 0x20) * (fVar28 + fVar26),
                                        (float)puVar10[2] * (fVar27 + fVar26));
                  fVar37 = fVar36 + fVar26;
                  fVar39 = fVar38 + fVar26;
                  fVar31 = fVar30 + fVar26;
                  fVar34 = fVar33 + fVar26;
                  puVar10[5] = CONCAT44((float)((ulong)puVar10[5] >> 0x20) * fVar33,
                                        (float)puVar10[5] * fVar30);
                  puVar10[4] = CONCAT44((float)((ulong)puVar10[4] >> 0x20) * fVar38,
                                        (float)puVar10[4] * fVar36);
                  fVar27 = fVar37 + fVar26;
                  fVar28 = fVar39 + fVar26;
                  fVar29 = fVar31 + fVar26;
                  fVar32 = fVar34 + fVar26;
                  puVar10[7] = CONCAT44((float)((ulong)puVar10[7] >> 0x20) * fVar34,
                                        (float)puVar10[7] * fVar31);
                  puVar10[6] = CONCAT44((float)((ulong)puVar10[6] >> 0x20) * fVar39,
                                        (float)puVar10[6] * fVar37);
                  puVar10 = puVar10 + 8;
                } while (puVar10 < puVar11);
              }
              pfVar3 = (float *)((long)puVar2 + uVar16 * 4);
              pfVar19 = (float *)((long)puVar2 +
                                 ((long)puVar15 + ~(ulong)puVar2 & 0xfffffffffffffff0) + 0x10);
              if (pfVar19 < pfVar3) {
                uVar13 = (uVar16 * 4 + -0x11) -
                         ((long)puVar15 + ~(ulong)puVar2 & 0xfffffffffffffff0);
                uVar1 = ((uint)(uVar13 >> 2) & 0x3fffffff) + 1;
                fVar27 = fVar21;
                if ((uVar1 & 3) != 0) {
                  lVar17 = -((ulong)uVar1 & 3);
                  pfVar18 = pfVar19;
                  do {
                    fVar28 = *pfVar18 * fVar27;
                    fVar27 = fVar27 + fVar24;
                    pfVar19 = pfVar18 + 1;
                    *pfVar18 = fVar28;
                    lVar17 = lVar17 + 1;
                    pfVar18 = pfVar19;
                  } while (lVar17 != 0);
                }
                if (0xb < uVar13) {
                  do {
                    fVar28 = fVar27 + fVar24 + fVar24;
                    *pfVar19 = *pfVar19 * fVar27;
                    pfVar19[1] = pfVar19[1] * (fVar27 + fVar24);
                    fVar29 = fVar28 + fVar24;
                    fVar27 = fVar29 + fVar24;
                    pfVar19[2] = pfVar19[2] * fVar28;
                    pfVar19[3] = pfVar19[3] * fVar29;
                    pfVar19 = pfVar19 + 4;
                  } while (pfVar19 < pfVar3);
                }
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 != uVar9);
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != param_7);
  }
  return;
}


