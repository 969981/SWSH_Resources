/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0019a340; name: FUN_0019a340
 */


void FUN_0019a340(int param_1,long param_2,long param_3,long param_4,long param_5,short *param_6,
                 short *param_7,long param_8,long param_9,uint param_10,uint param_11,byte param_12,
                 long param_13,long param_14,byte param_15)

{
  undefined4 *puVar1;
  short *psVar2;
  uint uVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  long lVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  long lVar37;
  uint *puVar38;
  float *pfVar39;
  float *pfVar40;
  float *pfVar41;
  float *pfVar42;
  long lVar43;
  ulong uVar44;
  uint *puVar45;
  uint *puVar46;
  ulong uVar47;
  ulong uVar48;
  uint uVar49;
  uint uVar50;
  long lVar51;
  float *pfVar52;
  uint uVar53;
  short *psVar54;
  undefined4 *puVar55;
  undefined1 (*pauVar56) [16];
  ulong uVar57;
  undefined1 (*pauVar58) [12];
  ulong uVar59;
  undefined1 (*pauVar60) [12];
  uint *puVar61;
  uint uVar62;
  ulong uVar63;
  uint *puVar64;
  uint *puVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined1 auVar73 [13];
  undefined1 auVar75 [13];
  undefined1 auVar76 [13];
  undefined1 auVar77 [16];
  undefined1 auVar74 [13];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  undefined1 auVar81 [16];
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  long local_238 [27];
  ulong local_160 [4];
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  float local_b0 [4];
  
  psVar54 = param_7;
  lVar28 = param_8;
  uVar33 = param_11;
  if ((param_15 & 1) == 0) {
    psVar54 = param_6;
    lVar28 = param_9;
    uVar33 = param_10;
    param_6 = param_7;
  }
  if (uVar33 != 0) {
    if ((param_15 & 1) == 0) {
      param_10 = param_11;
    }
    psVar2 = psVar54 + (ulong)uVar33 * 8;
    lVar4 = param_9 + 8;
    do {
      if (*(int *)(psVar54 + 4) != -1) {
        sVar18 = *psVar54;
        sVar19 = psVar54[1];
        sVar20 = psVar54[2];
        lVar37 = 0;
        do {
          while( true ) {
            uVar59 = (ulong)((short)((&DAT_01d4ca10)[lVar37 * 3] + sVar19) * 0x65 +
                             (int)(short)((&DAT_01d4ca0e)[lVar37 * 3] + sVar18) +
                             (short)((&DAT_01d4ca12)[lVar37 * 3] + sVar20) * 0x1eef & param_10 - 1);
            if (*(int *)(param_6 + uVar59 * 8 + 4) != -1) break;
            local_238[lVar37] = 0;
joined_r0x0019a4ec:
            lVar37 = lVar37 + 1;
            if (lVar37 == 0x1b) goto LAB_0019a508;
          }
          do {
            if (((param_6[uVar59 * 8] == (short)((&DAT_01d4ca0e)[lVar37 * 3] + sVar18)) &&
                (param_6[uVar59 * 8 + 1] == (short)((&DAT_01d4ca10)[lVar37 * 3] + sVar19))) &&
               (param_6[uVar59 * 8 + 2] == (short)((&DAT_01d4ca12)[lVar37 * 3] + sVar20))) {
              local_238[lVar37] = (long)(param_6 + uVar59 * 8);
              goto joined_r0x0019a4ec;
            }
            uVar59 = (ulong)((int)uVar59 + 1U & param_10 - 1);
          } while (*(int *)(param_6 + uVar59 * 8 + 4) != -1);
          local_238[lVar37] = 0;
          lVar37 = lVar37 + 1;
        } while (lVar37 != 0x1b);
LAB_0019a508:
        lVar43 = *(long *)(param_14 + 0x10);
        lVar37 = 0;
        uVar33 = 0;
        do {
          lVar51 = local_238[lVar37];
          if (lVar51 != 0) {
            iVar34 = *(int *)(lVar51 + 8);
            uVar62 = *(uint *)(lVar51 + 0xc);
            uVar59 = (ulong)uVar62;
            uVar8 = iVar34 + uVar62;
            if (uVar62 < uVar8) {
              uVar57 = ((ulong)uVar8 - 1) - uVar59;
              uVar36 = uVar33;
              if ((uVar8 - uVar62 & 3) != 0) {
                lVar51 = -((ulong)(uVar8 - uVar62) & 3);
                uVar62 = uVar33;
                do {
                  uVar36 = uVar62 + 1;
                  *(undefined4 *)(lVar43 + (ulong)uVar62 * 4) = *(undefined4 *)(lVar28 + uVar59 * 4)
                  ;
                  uVar59 = uVar59 + 1;
                  lVar51 = lVar51 + 1;
                  uVar62 = uVar36;
                } while (lVar51 != 0);
              }
              if (2 < uVar57) {
                lVar51 = uVar8 - uVar59;
                puVar55 = (undefined4 *)(lVar28 + 8 + uVar59 * 4);
                do {
                  *(undefined4 *)(lVar43 + (ulong)uVar36 * 4) = puVar55[-2];
                  lVar51 = lVar51 + -4;
                  *(undefined4 *)(lVar43 + (ulong)(uVar36 + 1) * 4) = puVar55[-1];
                  *(undefined4 *)(lVar43 + (ulong)(uVar36 + 2) * 4) = *puVar55;
                  puVar1 = puVar55 + 1;
                  uVar8 = uVar36 + 3;
                  uVar36 = uVar36 + 4;
                  puVar55 = puVar55 + 4;
                  *(undefined4 *)(lVar43 + (ulong)uVar8 * 4) = *puVar1;
                } while (lVar51 != 0);
              }
              uVar33 = uVar33 + iVar34;
            }
          }
          lVar37 = lVar37 + 1;
        } while (lVar37 != 0x1b);
        if (uVar33 != 0) {
          if ((param_15 & 1) == 0) {
            uVar8 = *(uint *)(psVar54 + 4);
            uVar59 = (ulong)uVar8;
            puVar38 = (uint *)(param_8 + (ulong)*(uint *)(psVar54 + 6) * 4);
            puVar65 = *(uint **)(param_14 + 0x10);
            if (uVar33 < 8) {
              uVar62 = uVar33 & 0xfffffffc;
              if (param_1 == 0) {
                fVar72 = *(float *)(param_13 + 0x10);
                if ((param_12 & 1) == 0) {
                  if (uVar8 != 0) {
                    fVar68 = *(float *)(param_13 + 0x34);
                    fVar69 = *(float *)(param_13 + 0x1c);
                    fVar70 = *(float *)(param_13 + 0x20);
                    uVar57 = 0;
                    do {
                      pfVar9 = (float *)(param_4 + (ulong)puVar38[uVar57] * 0x20);
                      if (uVar62 != 0) {
                        fVar71 = *pfVar9;
                        fVar80 = pfVar9[1];
                        fVar83 = pfVar9[2];
                        uVar47 = 0;
                        pfVar39 = pfVar9 + 3;
                        do {
                          puVar61 = puVar65 + uVar47;
                          pfVar52 = (float *)(param_5 + (ulong)*puVar61 * 0x20);
                          pfVar7 = (float *)(param_5 + (ulong)puVar61[1] * 0x20);
                          pfVar13 = (float *)(param_5 + (ulong)puVar61[2] * 0x20);
                          pfVar42 = (float *)(param_5 + (ulong)puVar61[3] * 0x20);
                          fVar89 = (fVar71 - *pfVar52) * (fVar71 - *pfVar52) +
                                   (fVar80 - pfVar52[1]) * (fVar80 - pfVar52[1]) +
                                   (fVar83 - pfVar52[2]) * (fVar83 - pfVar52[2]);
                          fVar87 = (fVar71 - *pfVar7) * (fVar71 - *pfVar7) +
                                   (fVar80 - pfVar7[1]) * (fVar80 - pfVar7[1]) +
                                   (fVar83 - pfVar7[2]) * (fVar83 - pfVar7[2]);
                          fVar85 = (fVar71 - *pfVar13) * (fVar71 - *pfVar13) +
                                   (fVar80 - pfVar13[1]) * (fVar80 - pfVar13[1]) +
                                   (fVar83 - pfVar13[2]) * (fVar83 - pfVar13[2]);
                          fVar84 = (fVar71 - *pfVar42) * (fVar71 - *pfVar42) +
                                   (fVar80 - pfVar42[1]) * (fVar80 - pfVar42[1]) +
                                   (fVar83 - pfVar42[2]) * (fVar83 - pfVar42[2]);
                          bVar29 = false;
                          bVar31 = false;
                          if (fVar72 - fVar84 < 0.0) {
                            bVar29 = false;
                            bVar31 = true;
                            if (!NAN(fVar72 - fVar85)) {
                              bVar29 = fVar72 - fVar85 < 0.0;
                              bVar31 = false;
                            }
                          }
                          bVar30 = false;
                          bVar32 = false;
                          if (bVar29 != bVar31) {
                            bVar30 = false;
                            bVar32 = true;
                            if (!NAN(fVar72 - fVar87)) {
                              bVar30 = fVar72 - fVar87 < 0.0;
                              bVar32 = false;
                            }
                          }
                          bVar29 = false;
                          bVar31 = false;
                          if (bVar30 != bVar32) {
                            bVar29 = false;
                            bVar31 = true;
                            if (!NAN(fVar72 - fVar89)) {
                              bVar29 = fVar72 - fVar89 < 0.0;
                              bVar31 = false;
                            }
                          }
                          fVar90 = 1.0;
                          if (bVar29 != bVar31) {
                            fVar90 = 0.0;
                          }
                          if (fVar90 != 0.0) {
                            if ((uint)fVar89 < (uint)fVar72 && fVar89 != 0.0) {
                              fVar89 = fVar69 - fVar68 * fVar89;
                              *pfVar39 = fVar89 * fVar89 * fVar70 * fVar89 + *pfVar39;
                              if ((uint)fVar72 <= (uint)fVar87 || fVar87 == 0.0) goto LAB_0019e418;
LAB_0019e2a4:
                              fVar87 = fVar69 - fVar68 * fVar87;
                              *pfVar39 = fVar87 * fVar87 * fVar70 * fVar87 + *pfVar39;
                              if ((uint)fVar72 <= (uint)fVar85 || fVar85 == 0.0) goto LAB_0019e428;
LAB_0019e2d4:
                              fVar85 = fVar69 - fVar68 * fVar85;
                              *pfVar39 = fVar85 * fVar85 * fVar70 * fVar85 + *pfVar39;
                              if ((uint)fVar72 <= (uint)fVar84 || fVar84 == 0.0) goto LAB_0019e454;
                            }
                            else {
                              if ((uint)fVar87 < (uint)fVar72 && fVar87 != 0.0) goto LAB_0019e2a4;
LAB_0019e418:
                              if ((uint)fVar85 < (uint)fVar72 && fVar85 != 0.0) goto LAB_0019e2d4;
LAB_0019e428:
                              if ((uint)fVar72 <= (uint)fVar84 || fVar84 == 0.0) goto LAB_0019e454;
                            }
                            fVar84 = fVar69 - fVar68 * fVar84;
                            *pfVar39 = fVar84 * fVar84 * fVar70 * fVar84 + *pfVar39;
                          }
LAB_0019e454:
                          uVar47 = uVar47 + 4;
                        } while (uVar47 < ((ulong)uVar33 & 0xfffffffc));
                      }
                      if (uVar62 < uVar33) {
                        puVar61 = puVar65 + ((ulong)uVar33 & 0xfffffffc);
                        lVar37 = (ulong)uVar33 - ((ulong)uVar33 & 0xfffffffc);
                        do {
                          pfVar39 = (float *)(param_5 + (ulong)*puVar61 * 0x20);
                          fVar71 = (*pfVar9 - *pfVar39) * (*pfVar9 - *pfVar39) +
                                   (pfVar9[1] - pfVar39[1]) * (pfVar9[1] - pfVar39[1]) +
                                   (pfVar9[2] - pfVar39[2]) * (pfVar9[2] - pfVar39[2]);
                          if ((uint)fVar71 < (uint)fVar72 && fVar71 != 0.0) {
                            fVar71 = fVar69 - fVar68 * fVar71;
                            pfVar9[3] = fVar71 * fVar71 * fVar70 * fVar71 + pfVar9[3];
                          }
                          lVar37 = lVar37 + -1;
                          puVar61 = puVar61 + 1;
                        } while (lVar37 != 0);
                      }
                      uVar57 = uVar57 + 1;
                    } while (uVar57 != uVar59);
                  }
                }
                else if (uVar8 != 0) {
                  fVar68 = *(float *)(param_13 + 0x34);
                  fVar69 = *(float *)(param_13 + 0x1c);
                  fVar70 = *(float *)(param_13 + 0x20);
                  uVar57 = 0;
                  do {
                    pfVar9 = (float *)(param_4 + (ulong)puVar38[uVar57] * 0x20);
                    if (uVar62 != 0) {
                      fVar71 = *pfVar9;
                      fVar80 = pfVar9[1];
                      fVar83 = pfVar9[2];
                      uVar47 = 0;
                      pfVar39 = pfVar9 + 3;
                      do {
                        puVar61 = puVar65 + uVar47;
                        pfVar52 = (float *)(param_5 + (ulong)puVar61[1] * 0x20);
                        pfVar7 = (float *)(param_5 + (ulong)*puVar61 * 0x20);
                        pfVar13 = (float *)(param_5 + (ulong)puVar61[2] * 0x20);
                        pfVar42 = (float *)(param_5 + (ulong)puVar61[3] * 0x20);
                        fVar89 = (fVar71 - *pfVar7) * (fVar71 - *pfVar7) +
                                 (fVar80 - pfVar7[1]) * (fVar80 - pfVar7[1]) +
                                 (fVar83 - pfVar7[2]) * (fVar83 - pfVar7[2]);
                        fVar87 = (fVar71 - *pfVar52) * (fVar71 - *pfVar52) +
                                 (fVar80 - pfVar52[1]) * (fVar80 - pfVar52[1]) +
                                 (fVar83 - pfVar52[2]) * (fVar83 - pfVar52[2]);
                        fVar85 = (fVar71 - *pfVar13) * (fVar71 - *pfVar13) +
                                 (fVar80 - pfVar13[1]) * (fVar80 - pfVar13[1]) +
                                 (fVar83 - pfVar13[2]) * (fVar83 - pfVar13[2]);
                        fVar84 = (fVar71 - *pfVar42) * (fVar71 - *pfVar42) +
                                 (fVar80 - pfVar42[1]) * (fVar80 - pfVar42[1]) +
                                 (fVar83 - pfVar42[2]) * (fVar83 - pfVar42[2]);
                        bVar29 = false;
                        bVar31 = false;
                        if (fVar72 - fVar84 < 0.0) {
                          bVar29 = false;
                          bVar31 = true;
                          if (!NAN(fVar72 - fVar85)) {
                            bVar29 = fVar72 - fVar85 < 0.0;
                            bVar31 = false;
                          }
                        }
                        bVar30 = false;
                        bVar32 = false;
                        if (bVar29 != bVar31) {
                          bVar30 = false;
                          bVar32 = true;
                          if (!NAN(fVar72 - fVar87)) {
                            bVar30 = fVar72 - fVar87 < 0.0;
                            bVar32 = false;
                          }
                        }
                        bVar29 = false;
                        bVar31 = false;
                        if (bVar30 != bVar32) {
                          bVar29 = false;
                          bVar31 = true;
                          if (!NAN(fVar72 - fVar89)) {
                            bVar29 = fVar72 - fVar89 < 0.0;
                            bVar31 = false;
                          }
                        }
                        fVar90 = 1.0;
                        if (bVar29 != bVar31) {
                          fVar90 = 0.0;
                        }
                        if (fVar90 != 0.0) {
                          if ((uint)fVar89 < (uint)fVar72 && fVar89 != 0.0) {
                            fVar89 = fVar69 - fVar68 * fVar89;
                            fVar89 = fVar89 * fVar89 * fVar70 * fVar89;
                            *pfVar39 = fVar89 + *pfVar39;
                            pfVar7[3] = fVar89 + pfVar7[3];
                            if ((uint)fVar72 <= (uint)fVar87 || fVar87 == 0.0) goto LAB_0019cc1c;
LAB_0019ca90:
                            fVar87 = fVar69 - fVar68 * fVar87;
                            fVar87 = fVar87 * fVar87 * fVar70 * fVar87;
                            *pfVar39 = fVar87 + *pfVar39;
                            pfVar52[3] = fVar87 + pfVar52[3];
                            if ((uint)fVar72 <= (uint)fVar85 || fVar85 == 0.0) goto LAB_0019cc2c;
LAB_0019cacc:
                            fVar85 = fVar69 - fVar68 * fVar85;
                            fVar85 = fVar85 * fVar85 * fVar70 * fVar85;
                            *pfVar39 = fVar85 + *pfVar39;
                            pfVar13[3] = fVar85 + pfVar13[3];
                            if ((uint)fVar72 <= (uint)fVar84 || fVar84 == 0.0) goto LAB_0019cc64;
                          }
                          else {
                            if ((uint)fVar87 < (uint)fVar72 && fVar87 != 0.0) goto LAB_0019ca90;
LAB_0019cc1c:
                            if ((uint)fVar85 < (uint)fVar72 && fVar85 != 0.0) goto LAB_0019cacc;
LAB_0019cc2c:
                            if ((uint)fVar72 <= (uint)fVar84 || fVar84 == 0.0) goto LAB_0019cc64;
                          }
                          fVar84 = fVar69 - fVar68 * fVar84;
                          fVar84 = fVar84 * fVar84 * fVar70 * fVar84;
                          *pfVar39 = fVar84 + *pfVar39;
                          pfVar42[3] = fVar84 + pfVar42[3];
                        }
LAB_0019cc64:
                        uVar47 = uVar47 + 4;
                      } while (uVar47 < ((ulong)uVar33 & 0xfffffffc));
                    }
                    if (uVar62 < uVar33) {
                      fVar71 = *pfVar9;
                      fVar80 = pfVar9[1];
                      fVar83 = pfVar9[2];
                      puVar61 = puVar65 + ((ulong)uVar33 & 0xfffffffc);
                      lVar37 = (ulong)uVar33 - ((ulong)uVar33 & 0xfffffffc);
                      do {
                        pfVar39 = (float *)(param_5 + (ulong)*puVar61 * 0x20);
                        fVar84 = (fVar71 - *pfVar39) * (fVar71 - *pfVar39) +
                                 (fVar80 - pfVar39[1]) * (fVar80 - pfVar39[1]) +
                                 (fVar83 - pfVar39[2]) * (fVar83 - pfVar39[2]);
                        if ((uint)fVar84 < (uint)fVar72 && fVar84 != 0.0) {
                          fVar84 = fVar69 - fVar68 * fVar84;
                          fVar84 = fVar84 * fVar84 * fVar70 * fVar84;
                          pfVar9[3] = fVar84 + pfVar9[3];
                          pfVar39[3] = fVar84 + pfVar39[3];
                        }
                        lVar37 = lVar37 + -1;
                        puVar61 = puVar61 + 1;
                      } while (lVar37 != 0);
                    }
                    uVar57 = uVar57 + 1;
                  } while (uVar57 != uVar59);
                }
              }
              else {
                fVar72 = *(float *)(param_13 + 0x10);
                if ((param_12 & 1) == 0) {
                  if (uVar8 != 0) {
                    uVar57 = 0;
                    do {
                      uVar47 = (ulong)puVar38[uVar57];
                      pfVar9 = (float *)(param_4 + uVar47 * 0x20);
                      pfVar39 = (float *)(param_2 + uVar47 * 0xc);
                      if (uVar62 != 0) {
                        fVar68 = *pfVar9;
                        pfVar52 = pfVar9 + 3;
                        pfVar7 = pfVar9 + 4;
                        pfVar13 = pfVar9 + 5;
                        pfVar42 = pfVar9 + 6;
                        fVar69 = pfVar9[1];
                        lVar37 = param_2 + uVar47 * 0xc;
                        fVar70 = pfVar9[2];
                        uVar44 = 0;
                        pfVar5 = (float *)(lVar37 + 4);
                        pfVar6 = (float *)(lVar37 + 8);
                        do {
                          puVar61 = puVar65 + uVar44;
                          pfVar41 = (float *)(param_5 + (ulong)*puVar61 * 0x20);
                          fVar94 = fVar68 - *pfVar41;
                          pfVar10 = (float *)(param_5 + (ulong)puVar61[1] * 0x20);
                          fVar96 = fVar69 - pfVar41[1];
                          pfVar11 = (float *)(param_5 + (ulong)puVar61[2] * 0x20);
                          pfVar12 = (float *)(param_5 + (ulong)puVar61[3] * 0x20);
                          fVar97 = fVar70 - pfVar41[2];
                          fVar99 = fVar69 - pfVar10[1];
                          fVar101 = fVar68 - *pfVar10;
                          fVar93 = fVar70 - pfVar10[2];
                          fVar95 = fVar69 - pfVar11[1];
                          fVar98 = fVar68 - *pfVar11;
                          fVar100 = fVar70 - pfVar11[2];
                          fVar87 = fVar69 - pfVar12[1];
                          fVar90 = fVar68 - *pfVar12;
                          fVar89 = fVar70 - pfVar12[2];
                          fVar71 = fVar94 * fVar94 + fVar96 * fVar96 + fVar97 * fVar97;
                          fVar80 = fVar101 * fVar101 + fVar99 * fVar99 + fVar93 * fVar93;
                          fVar83 = fVar98 * fVar98 + fVar95 * fVar95 + fVar100 * fVar100;
                          fVar85 = fVar90 * fVar90 + fVar87 * fVar87 + fVar89 * fVar89;
                          fVar84 = *(float *)(param_13 + 0x10);
                          bVar29 = false;
                          bVar31 = false;
                          if (fVar84 - fVar71 < 0.0) {
                            bVar29 = false;
                            bVar31 = true;
                            if (!NAN(fVar84 - fVar80)) {
                              bVar29 = fVar84 - fVar80 < 0.0;
                              bVar31 = false;
                            }
                          }
                          bVar30 = false;
                          bVar32 = false;
                          if (bVar29 != bVar31) {
                            bVar30 = false;
                            bVar32 = true;
                            if (!NAN(fVar84 - fVar83)) {
                              bVar30 = fVar84 - fVar83 < 0.0;
                              bVar32 = false;
                            }
                          }
                          bVar29 = false;
                          bVar31 = false;
                          if (bVar30 != bVar32) {
                            bVar29 = false;
                            bVar31 = true;
                            if (!NAN(fVar84 - fVar85)) {
                              bVar29 = fVar84 - fVar85 < 0.0;
                              bVar31 = false;
                            }
                          }
                          fVar84 = 1.0;
                          if (bVar29 != bVar31) {
                            fVar84 = 0.0;
                          }
                          if (fVar84 != 0.0) {
                            if ((uint)fVar71 < (uint)fVar72 && fVar71 != 0.0) {
                              fVar71 = fVar71 * *(float *)(param_13 + 0x34);
                              fVar84 = sqrtf(fVar71);
                              fVar88 = *(float *)(param_13 + 0x30);
                              fVar82 = *pfVar52 - *(float *)(param_13 + 0x2c);
                              fVar86 = pfVar41[3] - *(float *)(param_13 + 0x2c);
                              if (fVar82 <= 0.0) {
                                fVar82 = 0.0;
                              }
                              if (fVar86 <= 0.0) {
                                fVar86 = 0.0;
                              }
                              fVar91 = *(float *)(param_13 + 0x18);
                              fVar71 = fVar71 * (1.0 / fVar84);
                              fVar102 = (fVar91 - fVar71) * *(float *)(param_13 + 0x28);
                              fVar92 = *pfVar13;
                              fVar71 = (fVar82 + fVar86) *
                                       *(float *)(param_13 + 0x24) *
                                       (fVar71 + ((1.0 / fVar84) * *(float *)(param_13 + 0x1c) -
                                                 (fVar91 + fVar91)));
                              fVar82 = pfVar41[5];
                              fVar91 = pfVar41[6];
                              fVar86 = *pfVar42;
                              fVar84 = 1.0 / pfVar41[3];
                              *pfVar39 = fVar84 * (fVar88 * fVar94 * fVar71 +
                                                  fVar102 * fVar88 * (pfVar41[4] - *pfVar7)) +
                                         *pfVar39;
                              *pfVar5 = fVar84 * (fVar88 * fVar96 * fVar71 +
                                                 fVar102 * fVar88 * (fVar82 - fVar92)) + *pfVar5;
                              *pfVar6 = fVar84 * (fVar88 * fVar97 * fVar71 +
                                                 fVar102 * fVar88 * (fVar91 - fVar86)) + *pfVar6;
                              if ((uint)fVar72 <= (uint)fVar80 || fVar80 == 0.0) goto LAB_0019dbf8;
LAB_0019d830:
                              fVar80 = fVar80 * *(float *)(param_13 + 0x34);
                              fVar71 = sqrtf(fVar80);
                              fVar96 = *(float *)(param_13 + 0x30);
                              fVar84 = *pfVar52 - *(float *)(param_13 + 0x2c);
                              fVar94 = pfVar10[3] - *(float *)(param_13 + 0x2c);
                              if (fVar84 <= 0.0) {
                                fVar84 = 0.0;
                              }
                              if (fVar94 <= 0.0) {
                                fVar94 = 0.0;
                              }
                              fVar97 = *(float *)(param_13 + 0x18);
                              fVar80 = fVar80 * (1.0 / fVar71);
                              fVar82 = (fVar97 - fVar80) * *(float *)(param_13 + 0x28);
                              fVar86 = *pfVar13;
                              fVar71 = (fVar84 + fVar94) *
                                       *(float *)(param_13 + 0x24) *
                                       (fVar80 + ((1.0 / fVar71) * *(float *)(param_13 + 0x1c) -
                                                 (fVar97 + fVar97)));
                              fVar84 = pfVar10[5];
                              fVar97 = pfVar10[6];
                              fVar94 = *pfVar42;
                              fVar80 = 1.0 / pfVar10[3];
                              *pfVar39 = fVar80 * (fVar96 * fVar101 * fVar71 +
                                                  fVar82 * fVar96 * (pfVar10[4] - *pfVar7)) +
                                         *pfVar39;
                              *pfVar5 = fVar80 * (fVar96 * fVar99 * fVar71 +
                                                 fVar82 * fVar96 * (fVar84 - fVar86)) + *pfVar5;
                              *pfVar6 = fVar80 * (fVar96 * fVar93 * fVar71 +
                                                 fVar82 * fVar96 * (fVar97 - fVar94)) + *pfVar6;
                              if ((uint)fVar72 <= (uint)fVar83 || fVar83 == 0.0) goto LAB_0019dc08;
LAB_0019d97c:
                              fVar83 = fVar83 * *(float *)(param_13 + 0x34);
                              fVar71 = sqrtf(fVar83);
                              fVar93 = *(float *)(param_13 + 0x30);
                              fVar80 = *pfVar52 - *(float *)(param_13 + 0x2c);
                              fVar84 = pfVar11[3] - *(float *)(param_13 + 0x2c);
                              if (fVar80 <= 0.0) {
                                fVar80 = 0.0;
                              }
                              if (fVar84 <= 0.0) {
                                fVar84 = 0.0;
                              }
                              fVar94 = *(float *)(param_13 + 0x18);
                              fVar83 = fVar83 * (1.0 / fVar71);
                              fVar96 = (fVar94 - fVar83) * *(float *)(param_13 + 0x28);
                              fVar97 = *pfVar13;
                              fVar71 = (fVar80 + fVar84) *
                                       *(float *)(param_13 + 0x24) *
                                       (fVar83 + ((1.0 / fVar71) * *(float *)(param_13 + 0x1c) -
                                                 (fVar94 + fVar94)));
                              fVar83 = pfVar11[5];
                              fVar94 = pfVar11[6];
                              fVar84 = *pfVar42;
                              fVar80 = 1.0 / pfVar11[3];
                              *pfVar39 = fVar80 * (fVar93 * fVar98 * fVar71 +
                                                  fVar96 * fVar93 * (pfVar11[4] - *pfVar7)) +
                                         *pfVar39;
                              *pfVar5 = fVar80 * (fVar93 * fVar95 * fVar71 +
                                                 fVar96 * fVar93 * (fVar83 - fVar97)) + *pfVar5;
                              *pfVar6 = fVar80 * (fVar93 * fVar100 * fVar71 +
                                                 fVar96 * fVar93 * (fVar94 - fVar84)) + *pfVar6;
                              if ((uint)fVar72 <= (uint)fVar85 || fVar85 == 0.0) goto LAB_0019dd40;
                            }
                            else {
                              if ((uint)fVar80 < (uint)fVar72 && fVar80 != 0.0) goto LAB_0019d830;
LAB_0019dbf8:
                              if ((uint)fVar83 < (uint)fVar72 && fVar83 != 0.0) goto LAB_0019d97c;
LAB_0019dc08:
                              if ((uint)fVar72 <= (uint)fVar85 || fVar85 == 0.0) goto LAB_0019dd40;
                            }
                            fVar85 = fVar85 * *(float *)(param_13 + 0x34);
                            fVar71 = sqrtf(fVar85);
                            fVar84 = *(float *)(param_13 + 0x30);
                            fVar80 = *pfVar52 - *(float *)(param_13 + 0x2c);
                            fVar83 = pfVar12[3] - *(float *)(param_13 + 0x2c);
                            if (fVar80 <= 0.0) {
                              fVar80 = 0.0;
                            }
                            if (fVar83 <= 0.0) {
                              fVar83 = 0.0;
                            }
                            fVar98 = *(float *)(param_13 + 0x18);
                            fVar85 = fVar85 * (1.0 / fVar71);
                            fVar95 = (fVar98 - fVar85) * *(float *)(param_13 + 0x28);
                            fVar71 = (fVar80 + fVar83) *
                                     *(float *)(param_13 + 0x24) *
                                     (fVar85 + ((1.0 / fVar71) * *(float *)(param_13 + 0x1c) -
                                               (fVar98 + fVar98)));
                            fVar83 = *pfVar13;
                            fVar85 = pfVar12[5];
                            fVar93 = pfVar12[6];
                            fVar98 = *pfVar42;
                            fVar80 = 1.0 / pfVar12[3];
                            *pfVar39 = fVar80 * (fVar84 * fVar90 * fVar71 +
                                                fVar95 * fVar84 * (pfVar12[4] - *pfVar7)) + *pfVar39
                            ;
                            *pfVar5 = fVar80 * (fVar84 * fVar87 * fVar71 +
                                               fVar95 * fVar84 * (fVar85 - fVar83)) + *pfVar5;
                            *pfVar6 = fVar80 * (fVar84 * fVar89 * fVar71 +
                                               fVar95 * fVar84 * (fVar93 - fVar98)) + *pfVar6;
                          }
LAB_0019dd40:
                          uVar44 = uVar44 + 4;
                        } while (uVar44 < ((ulong)uVar33 & 0xfffffffc));
                      }
                      if (uVar62 < uVar33) {
                        fVar68 = *pfVar9;
                        fVar69 = pfVar9[1];
                        lVar37 = param_2 + uVar47 * 0xc;
                        fVar70 = pfVar9[2];
                        pfVar52 = (float *)(lVar37 + 4);
                        pfVar7 = (float *)(lVar37 + 8);
                        lVar37 = (ulong)uVar33 - ((ulong)uVar33 & 0xfffffffc);
                        puVar61 = puVar65 + ((ulong)uVar33 & 0xfffffffc);
                        do {
                          pfVar13 = (float *)(param_5 + (ulong)*puVar61 * 0x20);
                          fVar83 = fVar69 - pfVar13[1];
                          fVar80 = fVar68 - *pfVar13;
                          fVar84 = fVar70 - pfVar13[2];
                          fVar71 = fVar80 * fVar80 + fVar83 * fVar83 + fVar84 * fVar84;
                          if ((uint)fVar71 < (uint)fVar72 && fVar71 != 0.0) {
                            fVar71 = fVar71 * *(float *)(param_13 + 0x34);
                            fVar85 = sqrtf(fVar71);
                            fVar90 = *(float *)(param_13 + 0x30);
                            fVar87 = pfVar9[3] - *(float *)(param_13 + 0x2c);
                            fVar89 = pfVar13[3] - *(float *)(param_13 + 0x2c);
                            if (fVar87 <= 0.0) {
                              fVar87 = 0.0;
                            }
                            if (fVar89 <= 0.0) {
                              fVar89 = 0.0;
                            }
                            fVar98 = *(float *)(param_13 + 0x18);
                            fVar71 = fVar71 * (1.0 / fVar85);
                            fVar95 = (fVar98 - fVar71) * *(float *)(param_13 + 0x28);
                            fVar93 = pfVar9[5];
                            fVar71 = (fVar87 + fVar89) *
                                     *(float *)(param_13 + 0x24) *
                                     (fVar71 + ((1.0 / fVar85) * *(float *)(param_13 + 0x1c) -
                                               (fVar98 + fVar98)));
                            fVar87 = pfVar13[5];
                            fVar98 = pfVar13[6];
                            fVar89 = pfVar9[6];
                            fVar85 = 1.0 / pfVar13[3];
                            *pfVar39 = fVar85 * (fVar90 * fVar80 * fVar71 +
                                                fVar95 * fVar90 * (pfVar13[4] - pfVar9[4])) +
                                       *pfVar39;
                            *pfVar52 = fVar85 * (fVar90 * fVar83 * fVar71 +
                                                fVar95 * fVar90 * (fVar87 - fVar93)) + *pfVar52;
                            *pfVar7 = fVar85 * (fVar90 * fVar84 * fVar71 +
                                               fVar95 * fVar90 * (fVar98 - fVar89)) + *pfVar7;
                          }
                          lVar37 = lVar37 + -1;
                          puVar61 = puVar61 + 1;
                        } while (lVar37 != 0);
                      }
                      uVar57 = uVar57 + 1;
                    } while (uVar57 != uVar59);
                  }
                }
                else if (uVar8 != 0) {
                  uVar57 = 0;
                  do {
                    uVar47 = (ulong)puVar38[uVar57];
                    pfVar9 = (float *)(param_4 + uVar47 * 0x20);
                    pfVar39 = (float *)(param_2 + uVar47 * 0xc);
                    if (uVar62 != 0) {
                      fVar68 = *pfVar9;
                      pfVar52 = pfVar9 + 3;
                      pfVar7 = pfVar9 + 4;
                      pfVar13 = pfVar9 + 5;
                      pfVar42 = pfVar9 + 6;
                      fVar69 = pfVar9[1];
                      lVar37 = param_2 + uVar47 * 0xc;
                      fVar70 = pfVar9[2];
                      uVar44 = 0;
                      pfVar5 = (float *)(lVar37 + 4);
                      pfVar6 = (float *)(lVar37 + 8);
                      do {
                        puVar61 = puVar65 + uVar44;
                        uVar8 = *puVar61;
                        uVar35 = puVar61[1];
                        uVar36 = puVar61[2];
                        uVar49 = puVar61[3];
                        pfVar41 = (float *)(param_5 + (ulong)uVar8 * 0x20);
                        fVar97 = fVar68 - *pfVar41;
                        pfVar10 = (float *)(param_5 + (ulong)uVar35 * 0x20);
                        fVar93 = fVar69 - pfVar41[1];
                        fVar96 = fVar70 - pfVar41[2];
                        pfVar11 = (float *)(param_5 + (ulong)uVar36 * 0x20);
                        fVar94 = fVar69 - pfVar10[1];
                        fVar100 = fVar68 - *pfVar10;
                        fVar99 = fVar70 - pfVar10[2];
                        fVar89 = fVar69 - pfVar11[1];
                        fVar101 = fVar68 - *pfVar11;
                        pfVar12 = (float *)(param_5 + (ulong)uVar49 * 0x20);
                        fVar90 = fVar70 - pfVar11[2];
                        fVar83 = fVar69 - pfVar12[1];
                        fVar87 = fVar68 - *pfVar12;
                        fVar84 = fVar70 - pfVar12[2];
                        fVar71 = fVar97 * fVar97 + fVar93 * fVar93 + fVar96 * fVar96;
                        fVar98 = fVar100 * fVar100 + fVar94 * fVar94 + fVar99 * fVar99;
                        fVar95 = fVar101 * fVar101 + fVar89 * fVar89 + fVar90 * fVar90;
                        fVar85 = fVar87 * fVar87 + fVar83 * fVar83 + fVar84 * fVar84;
                        fVar80 = *(float *)(param_13 + 0x10);
                        bVar29 = false;
                        bVar31 = false;
                        if (fVar80 - fVar71 < 0.0) {
                          bVar29 = false;
                          bVar31 = true;
                          if (!NAN(fVar80 - fVar98)) {
                            bVar29 = fVar80 - fVar98 < 0.0;
                            bVar31 = false;
                          }
                        }
                        bVar30 = false;
                        bVar32 = false;
                        if (bVar29 != bVar31) {
                          bVar30 = false;
                          bVar32 = true;
                          if (!NAN(fVar80 - fVar95)) {
                            bVar30 = fVar80 - fVar95 < 0.0;
                            bVar32 = false;
                          }
                        }
                        bVar29 = false;
                        bVar31 = false;
                        if (bVar30 != bVar32) {
                          bVar29 = false;
                          bVar31 = true;
                          if (!NAN(fVar80 - fVar85)) {
                            bVar29 = fVar80 - fVar85 < 0.0;
                            bVar31 = false;
                          }
                        }
                        fVar80 = 1.0;
                        if (bVar29 != bVar31) {
                          fVar80 = 0.0;
                        }
                        if (fVar80 != 0.0) {
                          if ((uint)fVar71 < (uint)fVar72 && fVar71 != 0.0) {
                            fVar71 = fVar71 * *(float *)(param_13 + 0x34);
                            fVar80 = sqrtf(fVar71);
                            fVar88 = *(float *)(param_13 + 0x30);
                            fVar82 = *(float *)(param_13 + 0x18);
                            fVar102 = *pfVar52 - *(float *)(param_13 + 0x2c);
                            fVar86 = pfVar41[3] - *(float *)(param_13 + 0x2c);
                            fVar91 = 1.0 / pfVar41[3];
                            if (fVar102 <= 0.0) {
                              fVar102 = 0.0;
                            }
                            if (fVar86 <= 0.0) {
                              fVar86 = 0.0;
                            }
                            fVar71 = fVar71 * (1.0 / fVar80);
                            fVar80 = (fVar102 + fVar86) *
                                     *(float *)(param_13 + 0x24) *
                                     (fVar71 + ((1.0 / fVar80) * *(float *)(param_13 + 0x1c) -
                                               (fVar82 + fVar82)));
                            fVar86 = 1.0 / *pfVar52;
                            fVar82 = (fVar82 - fVar71) * *(float *)(param_13 + 0x28);
                            pfVar40 = (float *)(param_3 + (ulong)uVar8 * 0xc);
                            fVar102 = *pfVar40;
                            fVar92 = pfVar40[1];
                            fVar97 = fVar88 * fVar97 * fVar80 +
                                     fVar82 * fVar88 * (pfVar41[4] - *pfVar7);
                            fVar71 = fVar88 * fVar96 * fVar80 +
                                     fVar82 * fVar88 * (pfVar41[6] - *pfVar42);
                            fVar80 = fVar88 * fVar93 * fVar80 +
                                     fVar82 * fVar88 * (pfVar41[5] - *pfVar13);
                            *pfVar39 = fVar91 * fVar97 + *pfVar39;
                            pfVar40[1] = fVar92 - fVar86 * fVar80;
                            *pfVar5 = fVar91 * fVar80 + *pfVar5;
                            *pfVar40 = fVar102 - fVar86 * fVar97;
                            *pfVar6 = fVar91 * fVar71 + *pfVar6;
                            pfVar40[2] = pfVar40[2] - fVar86 * fVar71;
                            if ((uint)fVar72 <= (uint)fVar98 || fVar98 == 0.0) goto LAB_0019b754;
LAB_0019b300:
                            fVar98 = fVar98 * *(float *)(param_13 + 0x34);
                            fVar71 = sqrtf(fVar98);
                            fVar96 = *(float *)(param_13 + 0x30);
                            fVar80 = *(float *)(param_13 + 0x18);
                            fVar82 = *pfVar52 - *(float *)(param_13 + 0x2c);
                            fVar93 = pfVar10[3] - *(float *)(param_13 + 0x2c);
                            fVar97 = 1.0 / pfVar10[3];
                            if (fVar82 <= 0.0) {
                              fVar82 = 0.0;
                            }
                            if (fVar93 <= 0.0) {
                              fVar93 = 0.0;
                            }
                            fVar98 = fVar98 * (1.0 / fVar71);
                            fVar86 = (fVar80 - fVar98) * *(float *)(param_13 + 0x28);
                            fVar71 = (fVar82 + fVar93) *
                                     *(float *)(param_13 + 0x24) *
                                     (fVar98 + ((1.0 / fVar71) * *(float *)(param_13 + 0x1c) -
                                               (fVar80 + fVar80)));
                            fVar98 = 1.0 / *pfVar52;
                            pfVar41 = (float *)(param_3 + (ulong)uVar35 * 0xc);
                            fVar82 = *pfVar41;
                            fVar88 = pfVar41[1];
                            fVar93 = fVar96 * fVar100 * fVar71 +
                                     fVar86 * fVar96 * (pfVar10[4] - *pfVar7);
                            fVar80 = fVar96 * fVar99 * fVar71 +
                                     fVar86 * fVar96 * (pfVar10[6] - *pfVar42);
                            fVar71 = fVar96 * fVar94 * fVar71 +
                                     fVar86 * fVar96 * (pfVar10[5] - *pfVar13);
                            *pfVar39 = fVar97 * fVar93 + *pfVar39;
                            pfVar41[1] = fVar88 - fVar98 * fVar71;
                            *pfVar5 = fVar97 * fVar71 + *pfVar5;
                            *pfVar41 = fVar82 - fVar98 * fVar93;
                            *pfVar6 = fVar97 * fVar80 + *pfVar6;
                            pfVar41[2] = pfVar41[2] - fVar98 * fVar80;
                            if ((uint)fVar72 <= (uint)fVar95 || fVar95 == 0.0) goto LAB_0019b764;
LAB_0019b490:
                            fVar95 = fVar95 * *(float *)(param_13 + 0x34);
                            fVar71 = sqrtf(fVar95);
                            fVar93 = *(float *)(param_13 + 0x30);
                            fVar80 = *(float *)(param_13 + 0x18);
                            fVar96 = *pfVar52 - *(float *)(param_13 + 0x2c);
                            fVar98 = pfVar11[3] - *(float *)(param_13 + 0x2c);
                            fVar94 = 1.0 / pfVar11[3];
                            if (fVar96 <= 0.0) {
                              fVar96 = 0.0;
                            }
                            if (fVar98 <= 0.0) {
                              fVar98 = 0.0;
                            }
                            fVar95 = fVar95 * (1.0 / fVar71);
                            fVar97 = (fVar80 - fVar95) * *(float *)(param_13 + 0x28);
                            fVar71 = (fVar96 + fVar98) *
                                     *(float *)(param_13 + 0x24) *
                                     (fVar95 + ((1.0 / fVar71) * *(float *)(param_13 + 0x1c) -
                                               (fVar80 + fVar80)));
                            fVar98 = 1.0 / *pfVar52;
                            pfVar41 = (float *)(param_3 + (ulong)uVar36 * 0xc);
                            fVar96 = *pfVar41;
                            fVar95 = fVar93 * fVar101 * fVar71 +
                                     fVar97 * fVar93 * (pfVar11[4] - *pfVar7);
                            fVar80 = fVar93 * fVar90 * fVar71 +
                                     fVar97 * fVar93 * (pfVar11[6] - *pfVar42);
                            fVar71 = fVar93 * fVar89 * fVar71 +
                                     fVar97 * fVar93 * (pfVar11[5] - *pfVar13);
                            fVar89 = *pfVar39;
                            pfVar41[1] = pfVar41[1] - fVar98 * fVar71;
                            *pfVar39 = fVar94 * fVar95 + fVar89;
                            *pfVar5 = fVar94 * fVar71 + *pfVar5;
                            *pfVar41 = fVar96 - fVar98 * fVar95;
                            *pfVar6 = fVar94 * fVar80 + *pfVar6;
                            pfVar41[2] = pfVar41[2] - fVar98 * fVar80;
                            if ((uint)fVar72 <= (uint)fVar85 || fVar85 == 0.0) goto LAB_0019b8e0;
                          }
                          else {
                            if ((uint)fVar98 < (uint)fVar72 && fVar98 != 0.0) goto LAB_0019b300;
LAB_0019b754:
                            if ((uint)fVar95 < (uint)fVar72 && fVar95 != 0.0) goto LAB_0019b490;
LAB_0019b764:
                            if ((uint)fVar72 <= (uint)fVar85 || fVar85 == 0.0) goto LAB_0019b8e0;
                          }
                          fVar85 = fVar85 * *(float *)(param_13 + 0x34);
                          fVar71 = sqrtf(fVar85);
                          fVar90 = *(float *)(param_13 + 0x30);
                          fVar80 = *(float *)(param_13 + 0x18);
                          fVar95 = *pfVar52 - *(float *)(param_13 + 0x2c);
                          fVar89 = pfVar12[3] - *(float *)(param_13 + 0x2c);
                          fVar98 = 1.0 / pfVar12[3];
                          if (fVar95 <= 0.0) {
                            fVar95 = 0.0;
                          }
                          if (fVar89 <= 0.0) {
                            fVar89 = 0.0;
                          }
                          fVar85 = fVar85 * (1.0 / fVar71);
                          fVar93 = (fVar80 - fVar85) * *(float *)(param_13 + 0x28);
                          fVar71 = (fVar95 + fVar89) *
                                   *(float *)(param_13 + 0x24) *
                                   (fVar85 + ((1.0 / fVar71) * *(float *)(param_13 + 0x1c) -
                                             (fVar80 + fVar80)));
                          fVar85 = 1.0 / *pfVar52;
                          pfVar41 = (float *)(param_3 + (ulong)uVar49 * 0xc);
                          fVar89 = *pfVar41;
                          fVar95 = pfVar41[1];
                          fVar87 = fVar90 * fVar87 * fVar71 +
                                   fVar93 * fVar90 * (pfVar12[4] - *pfVar7);
                          fVar80 = fVar90 * fVar84 * fVar71 +
                                   fVar93 * fVar90 * (pfVar12[6] - *pfVar42);
                          fVar71 = fVar90 * fVar83 * fVar71 +
                                   fVar93 * fVar90 * (pfVar12[5] - *pfVar13);
                          *pfVar39 = fVar98 * fVar87 + *pfVar39;
                          pfVar41[1] = fVar95 - fVar85 * fVar71;
                          *pfVar5 = fVar98 * fVar71 + *pfVar5;
                          *pfVar6 = fVar98 * fVar80 + *pfVar6;
                          *pfVar41 = fVar89 - fVar85 * fVar87;
                          pfVar41[2] = pfVar41[2] - fVar85 * fVar80;
                        }
LAB_0019b8e0:
                        uVar44 = uVar44 + 4;
                      } while (uVar44 < ((ulong)uVar33 & 0xfffffffc));
                    }
                    if (uVar62 < uVar33) {
                      fVar68 = *pfVar9;
                      fVar69 = pfVar9[1];
                      lVar37 = param_2 + uVar47 * 0xc;
                      fVar70 = pfVar9[2];
                      pfVar52 = (float *)(lVar37 + 4);
                      pfVar7 = (float *)(lVar37 + 8);
                      lVar37 = (ulong)uVar33 - ((ulong)uVar33 & 0xfffffffc);
                      puVar61 = puVar65 + ((ulong)uVar33 & 0xfffffffc);
                      do {
                        uVar8 = *puVar61;
                        pfVar13 = (float *)(param_5 + (ulong)uVar8 * 0x20);
                        fVar80 = fVar69 - pfVar13[1];
                        fVar84 = fVar68 - *pfVar13;
                        fVar83 = fVar70 - pfVar13[2];
                        fVar71 = fVar84 * fVar84 + fVar80 * fVar80 + fVar83 * fVar83;
                        if ((uint)fVar71 < (uint)fVar72 && fVar71 != 0.0) {
                          fVar71 = fVar71 * *(float *)(param_13 + 0x34);
                          fVar85 = sqrtf(fVar71);
                          fVar90 = *(float *)(param_13 + 0x30);
                          fVar87 = *(float *)(param_13 + 0x18);
                          fVar95 = pfVar9[3] - *(float *)(param_13 + 0x2c);
                          fVar89 = pfVar13[3] - *(float *)(param_13 + 0x2c);
                          fVar98 = 1.0 / pfVar13[3];
                          if (fVar95 <= 0.0) {
                            fVar95 = 0.0;
                          }
                          if (fVar89 <= 0.0) {
                            fVar89 = 0.0;
                          }
                          fVar71 = fVar71 * (1.0 / fVar85);
                          fVar93 = (fVar87 - fVar71) * *(float *)(param_13 + 0x28);
                          fVar71 = (fVar95 + fVar89) *
                                   *(float *)(param_13 + 0x24) *
                                   (fVar71 + ((1.0 / fVar85) * *(float *)(param_13 + 0x1c) -
                                             (fVar87 + fVar87)));
                          fVar85 = 1.0 / pfVar9[3];
                          pfVar42 = (float *)(param_3 + (ulong)uVar8 * 0xc);
                          fVar84 = fVar90 * fVar84 * fVar71 +
                                   fVar93 * fVar90 * (pfVar13[4] - pfVar9[4]);
                          fVar83 = fVar90 * fVar83 * fVar71 +
                                   fVar93 * fVar90 * (pfVar13[6] - pfVar9[6]);
                          fVar71 = fVar90 * fVar80 * fVar71 +
                                   fVar93 * fVar90 * (pfVar13[5] - pfVar9[5]);
                          fVar80 = *pfVar39;
                          *pfVar42 = *pfVar42 - fVar85 * fVar84;
                          pfVar42[1] = pfVar42[1] - fVar85 * fVar71;
                          *pfVar39 = fVar98 * fVar84 + fVar80;
                          *pfVar52 = fVar98 * fVar71 + *pfVar52;
                          *pfVar7 = fVar98 * fVar83 + *pfVar7;
                          pfVar42[2] = pfVar42[2] - fVar85 * fVar83;
                        }
                        lVar37 = lVar37 + -1;
                        puVar61 = puVar61 + 1;
                      } while (lVar37 != 0);
                    }
                    uVar57 = uVar57 + 1;
                  } while (uVar57 != uVar59);
                }
              }
            }
            else {
              pfVar9 = *(float **)(param_14 + 0x38);
              puVar61 = *(uint **)(param_14 + 0x40);
              uVar62 = uVar33 + 7 & 0xfffffffc;
              local_b0[0] = 3.4028235e+38;
              local_b0[1] = 3.4028235e+38;
              local_b0[2] = 3.4028235e+38;
              local_b0[3] = 3.4028235e+38;
              if (uVar62 != 0) {
                uVar36 = 0;
                puVar45 = puVar65 + 2;
                pfVar39 = pfVar9 + 8;
                do {
                  if (uVar36 < uVar33) {
                    pfVar52 = (float *)(param_5 + (ulong)puVar45[-2] * 0x20);
                    if (uVar36 + 1 < uVar33) goto LAB_0019c1bc;
LAB_0019c184:
                    pauVar56 = (undefined1 (*) [16])local_b0;
                    if (uVar36 + 2 < uVar33) goto LAB_0019c1d0;
LAB_0019c194:
                    pauVar58 = (undefined1 (*) [12])local_b0;
                    if (uVar36 + 3 < uVar33) goto LAB_0019c1e4;
LAB_0019c1a4:
                    pauVar60 = (undefined1 (*) [12])local_b0;
                  }
                  else {
                    pfVar52 = local_b0;
                    if (uVar33 <= uVar36 + 1) goto LAB_0019c184;
LAB_0019c1bc:
                    pauVar56 = (undefined1 (*) [16])(param_5 + (ulong)puVar45[-1] * 0x20);
                    if (uVar33 <= uVar36 + 2) goto LAB_0019c194;
LAB_0019c1d0:
                    pauVar58 = (undefined1 (*) [12])(param_5 + (ulong)*puVar45 * 0x20);
                    if (uVar33 <= uVar36 + 3) goto LAB_0019c1a4;
LAB_0019c1e4:
                    pauVar60 = (undefined1 (*) [12])(param_5 + (ulong)puVar45[1] * 0x20);
                  }
                  fVar72 = *pfVar52;
                  fVar68 = pfVar52[2];
                  auVar26 = *pauVar58;
                  fVar70 = SUB124(*pauVar58,0);
                  uVar66 = SUB124(*pauVar58,4);
                  auVar79 = *pauVar56;
                  auVar27 = *pauVar60;
                  fVar69 = auVar79._0_4_;
                  fVar71 = SUB124(*pauVar60,0);
                  uVar67 = SUB124(*pauVar60,4);
                  auVar78._4_4_ = fVar70;
                  auVar78._0_4_ = fVar72;
                  auVar78._8_4_ = pfVar52[1];
                  auVar78._12_4_ = uVar66;
                  auVar77._4_4_ = fVar70;
                  auVar77._0_4_ = fVar72;
                  auVar77._8_4_ = pfVar52[1];
                  auVar77._12_4_ = uVar66;
                  auVar78 = NEON_ext(auVar78,auVar77,8,1);
                  auVar81._4_4_ = fVar71;
                  auVar81._0_4_ = fVar69;
                  auVar81._8_4_ = auVar79._4_4_;
                  auVar81._12_4_ = uVar67;
                  auVar25._4_4_ = fVar71;
                  auVar25._0_4_ = fVar69;
                  auVar25._8_4_ = auVar79._4_4_;
                  auVar25._12_4_ = uVar67;
                  auVar77 = NEON_ext(auVar81,auVar25,8,1);
                  uVar36 = uVar36 + 4;
                  pfVar39[-8] = fVar72;
                  pfVar39[-7] = fVar69;
                  pfVar39[-6] = fVar70;
                  pfVar39[-5] = fVar71;
                  puVar45 = puVar45 + 4;
                  pfVar39[-4] = auVar78._0_4_;
                  pfVar39[-3] = auVar77._0_4_;
                  pfVar39[-2] = auVar78._4_4_;
                  pfVar39[-1] = auVar77._4_4_;
                  *pfVar39 = fVar68;
                  pfVar39[1] = auVar79._8_4_;
                  pfVar39[2] = auVar26._8_4_;
                  pfVar39[3] = auVar27._8_4_;
                  pfVar39 = pfVar39 + 0xc;
                } while (uVar36 < uVar62);
              }
              uStack_138 = *(undefined4 *)(param_13 + 0x30);
              uStack_134 = uStack_138;
              local_140 = uStack_138;
              uStack_13c = uStack_138;
              uStack_128 = *(undefined4 *)(param_13 + 0x34);
              uStack_124 = uStack_128;
              local_130 = uStack_128;
              uStack_12c = uStack_128;
              uStack_118 = *(undefined4 *)(param_13 + 0x18);
              uStack_114 = uStack_118;
              local_120 = uStack_118;
              uStack_11c = uStack_118;
              uStack_108 = *(undefined4 *)(param_13 + 0x1c);
              uStack_104 = uStack_108;
              local_110 = uStack_108;
              uStack_10c = uStack_108;
              uStack_f8 = *(undefined4 *)(param_13 + 0x20);
              uStack_f4 = uStack_f8;
              local_100 = uStack_f8;
              uStack_fc = uStack_f8;
              uStack_e8 = *(undefined4 *)(param_13 + 0x24);
              uStack_e4 = uStack_e8;
              local_f0 = uStack_e8;
              uStack_ec = uStack_e8;
              uStack_d8 = *(undefined4 *)(param_13 + 0x28);
              uStack_d4 = uStack_d8;
              local_e0 = uStack_d8;
              uStack_dc = uStack_d8;
              uVar66 = *(undefined4 *)(param_13 + 0x2c);
              auVar79._0_8_ = CONCAT44(uVar66,uVar66);
              auVar79._8_4_ = uVar66;
              auVar79._12_4_ = uVar66;
              uStack_c8 = auVar79._8_8_;
              local_d0 = auVar79._0_8_;
              if (uVar8 != 0) {
                puVar45 = puVar65 + uVar33;
                uVar59 = 0;
                fVar72 = *(float *)(param_13 + 0x10);
                uVar62 = 0;
                do {
                  uVar35 = *puVar38;
                  puVar61[uVar59] = uVar35;
                  pfVar39 = (float *)(param_4 + (ulong)uVar35 * 0x20);
                  fVar68 = *pfVar39;
                  fVar69 = pfVar39[1];
                  fVar70 = pfVar39[2];
                  fVar85 = fVar69 - (float)*(undefined8 *)(pfVar9 + 4);
                  fVar87 = fVar69 - (float)((ulong)*(undefined8 *)(pfVar9 + 4) >> 0x20);
                  fVar89 = fVar69 - (float)*(undefined8 *)(pfVar9 + 6);
                  fVar90 = fVar69 - (float)((ulong)*(undefined8 *)(pfVar9 + 6) >> 0x20);
                  fVar71 = fVar70 - (float)*(undefined8 *)(pfVar9 + 8);
                  fVar80 = fVar70 - (float)((ulong)*(undefined8 *)(pfVar9 + 8) >> 0x20);
                  fVar83 = fVar70 - (float)*(undefined8 *)(pfVar9 + 10);
                  fVar84 = fVar70 - (float)((ulong)*(undefined8 *)(pfVar9 + 10) >> 0x20);
                  puVar46 = puVar61 + ((int)uVar59 + 1);
                  uVar59 = (ulong)((int)uVar59 + 2);
                  fVar71 = fVar71 * fVar71 +
                           (fVar68 - *pfVar9) * (fVar68 - *pfVar9) + fVar85 * fVar85;
                  fVar80 = fVar80 * fVar80 +
                           (fVar68 - pfVar9[1]) * (fVar68 - pfVar9[1]) + fVar87 * fVar87;
                  fVar83 = fVar83 * fVar83 +
                           (fVar68 - pfVar9[2]) * (fVar68 - pfVar9[2]) + fVar89 * fVar89;
                  fVar84 = fVar84 * fVar84 +
                           (fVar68 - pfVar9[3]) * (fVar68 - pfVar9[3]) + fVar90 * fVar90;
                  uVar57 = CONCAT26(-(ushort)(0.0 < fVar84),
                                    CONCAT24(-(ushort)(0.0 < fVar83),
                                             CONCAT22(-(ushort)(0.0 < fVar80),
                                                      -(ushort)(0.0 < fVar71)))) &
                           CONCAT26(-(ushort)(fVar84 < fVar72),
                                    CONCAT24(-(ushort)(fVar83 < fVar72),
                                             CONCAT22(-(ushort)(fVar80 < fVar72),
                                                      -(ushort)(fVar71 < fVar72))));
                  auVar75._0_8_ =
                       CONCAT35(0,CONCAT14((char)(uVar57 >> 0x10),(uint)((byte)uVar57 & 1)) &
                                  0x1ffffffff);
                  auVar75[8] = (byte)(uVar57 >> 0x20) & 1;
                  auVar75._9_3_ = 0;
                  auVar75[0xc] = (byte)(uVar57 >> 0x30) & 1;
                  local_160[1] = (ulong)auVar75._8_5_;
                  local_160[0] = auVar75._0_8_;
                  uVar57 = uVar59;
                  pfVar39 = pfVar9;
                  puVar64 = puVar65;
                  uVar36 = 0;
                  do {
                    uVar49 = uVar36 + 4;
                    fVar71 = fVar68 - pfVar39[0xc];
                    lVar37 = (ulong)(uVar49 & 4) * 4;
                    fVar80 = fVar70 - (float)*(undefined8 *)(pfVar39 + 0x14);
                    fVar83 = fVar70 - (float)((ulong)*(undefined8 *)(pfVar39 + 0x14) >> 0x20);
                    fVar84 = fVar70 - (float)*(undefined8 *)(pfVar39 + 0x16);
                    fVar85 = fVar70 - (float)((ulong)*(undefined8 *)(pfVar39 + 0x16) >> 0x20);
                    uVar36 = uVar36 & 4;
                    fVar71 = fVar80 * fVar80 +
                             fVar71 * fVar71 + (fVar69 - pfVar39[0x10]) * (fVar69 - pfVar39[0x10]);
                    fVar80 = fVar83 * fVar83 +
                             (fVar68 - pfVar39[0xd]) * (fVar68 - pfVar39[0xd]) +
                             (fVar69 - pfVar39[0x11]) * (fVar69 - pfVar39[0x11]);
                    fVar83 = fVar84 * fVar84 +
                             (fVar68 - pfVar39[0xe]) * (fVar68 - pfVar39[0xe]) +
                             (fVar69 - pfVar39[0x12]) * (fVar69 - pfVar39[0x12]);
                    fVar84 = fVar85 * fVar85 +
                             (fVar68 - pfVar39[0xf]) * (fVar68 - pfVar39[0xf]) +
                             (fVar69 - pfVar39[0x13]) * (fVar69 - pfVar39[0x13]);
                    uVar47 = CONCAT26(-(ushort)(0.0 < fVar84),
                                      CONCAT24(-(ushort)(0.0 < fVar83),
                                               CONCAT22(-(ushort)(0.0 < fVar80),
                                                        -(ushort)(0.0 < fVar71)))) &
                             CONCAT26(-(ushort)(fVar84 < fVar72),
                                      CONCAT24(-(ushort)(fVar83 < fVar72),
                                               CONCAT22(-(ushort)(fVar80 < fVar72),
                                                        -(ushort)(fVar71 < fVar72))));
                    auVar76._0_8_ =
                         CONCAT35(0,CONCAT14((char)(uVar47 >> 0x10),(uint)((byte)uVar47 & 1)) &
                                    0x1ffffffff);
                    auVar76[8] = (byte)(uVar47 >> 0x20) & 1;
                    auVar76._9_3_ = 0;
                    auVar76[0xc] = (byte)(uVar47 >> 0x30) & 1;
                    *(ulong *)((long)local_160 + lVar37 + 8) = (ulong)auVar76._8_5_;
                    *(ulong *)((long)local_160 + lVar37) = auVar76._0_8_;
                    iVar34 = *(int *)((long)local_160 + (ulong)uVar36 * 4);
                    iVar14 = *(int *)((long)local_160 + (ulong)(uVar36 | 1) * 4);
                    iVar15 = *(int *)((long)local_160 + (ulong)(uVar36 | 2) * 4);
                    iVar16 = *(int *)((long)local_160 + (ulong)(uVar36 | 3) * 4);
                    puVar61[uVar59] = *puVar64;
                    uVar36 = iVar34 + (int)uVar59;
                    if (puVar64 + 1 < puVar45) {
                      uVar50 = puVar64[1];
                    }
                    else {
                      uVar50 = 0;
                    }
                    puVar61[uVar36] = uVar50;
                    uVar36 = uVar36 + iVar14;
                    if (puVar64 + 2 < puVar45) {
                      uVar50 = puVar64[2];
                    }
                    else {
                      uVar50 = 0;
                    }
                    puVar61[uVar36] = uVar50;
                    uVar36 = uVar36 + iVar15;
                    if (puVar64 + 3 < puVar45) {
                      uVar50 = puVar64[3];
                    }
                    else {
                      uVar50 = 0;
                    }
                    puVar61[uVar36] = uVar50;
                    uVar36 = uVar36 + iVar16;
                    uVar59 = (ulong)uVar36;
                    if (0x80 - uVar36 < 6) {
                      *puVar46 = uVar36 - (int)uVar57;
                      if (param_1 == 0) {
                        fVar71 = *(float *)(param_13 + 0x1c);
                        fVar80 = *(float *)(param_13 + 0x20);
                        fVar83 = *(float *)(param_13 + 0x34);
                        if ((param_12 & 1) == 0) {
                          if (uVar36 != 0) {
                            uVar50 = 0;
                            do {
                              uVar17 = puVar61[uVar50 + 1];
                              uVar3 = uVar50 + 2;
                              if (uVar17 != 0) {
                                pfVar52 = (float *)(param_4 + (ulong)puVar61[uVar50] * 0x20);
                                fVar84 = pfVar52[3];
                                uVar53 = uVar17;
                                uVar50 = uVar3;
                                do {
                                  uVar59 = (ulong)uVar50;
                                  uVar50 = uVar50 + 1;
                                  pfVar7 = (float *)(param_5 + (ulong)puVar61[uVar59] * 0x20);
                                  fVar85 = fVar71 - fVar83 * ((*pfVar52 - *pfVar7) *
                                                              (*pfVar52 - *pfVar7) +
                                                              (pfVar52[1] - pfVar7[1]) *
                                                              (pfVar52[1] - pfVar7[1]) +
                                                             (pfVar52[2] - pfVar7[2]) *
                                                             (pfVar52[2] - pfVar7[2]));
                                  fVar84 = fVar84 + fVar85 * fVar85 * fVar80 * fVar85;
                                  uVar53 = uVar53 - 1;
                                } while (uVar53 != 0);
                                pfVar52[3] = fVar84;
                                uVar3 = uVar3 + uVar17;
                              }
                              uVar50 = uVar3;
                            } while (uVar50 < uVar36);
                          }
                        }
                        else if (uVar36 != 0) {
                          uVar50 = 0;
                          do {
                            uVar17 = puVar61[uVar50 + 1];
                            uVar3 = uVar50 + 2;
                            if (uVar17 != 0) {
                              pfVar52 = (float *)(param_4 + (ulong)puVar61[uVar50] * 0x20);
                              fVar84 = *pfVar52;
                              fVar87 = pfVar52[1];
                              fVar89 = pfVar52[2];
                              fVar85 = pfVar52[3];
                              uVar53 = uVar17;
                              uVar50 = uVar3;
                              do {
                                uVar59 = (ulong)uVar50;
                                uVar50 = uVar50 + 1;
                                pfVar7 = (float *)(param_5 + (ulong)puVar61[uVar59] * 0x20);
                                fVar90 = fVar71 - fVar83 * ((fVar84 - *pfVar7) * (fVar84 - *pfVar7)
                                                            + (fVar87 - pfVar7[1]) *
                                                              (fVar87 - pfVar7[1]) +
                                                           (fVar89 - pfVar7[2]) *
                                                           (fVar89 - pfVar7[2]));
                                fVar90 = fVar90 * fVar90 * fVar80 * fVar90;
                                fVar85 = fVar85 + fVar90;
                                uVar53 = uVar53 - 1;
                                pfVar7[3] = pfVar7[3] + fVar90;
                              } while (uVar53 != 0);
                              pfVar52[3] = fVar85;
                              uVar3 = uVar3 + uVar17;
                            }
                            uVar50 = uVar3;
                          } while (uVar50 < uVar36);
                        }
                      }
                      else if ((param_12 & 1) == 0) {
                        FUN_001a5d00(param_2,param_4,param_5,puVar61,uVar36,param_13,&local_140);
                      }
                      else {
                        FUN_001a5720(param_2,param_3,param_4,param_5,puVar61,uVar36,param_13,
                                     &local_140);
                      }
                      uVar57 = 2;
                      uVar59 = 2;
                      *puVar61 = uVar35;
                      puVar46 = puVar61 + 1;
                    }
                    puVar64 = puVar64 + 4;
                    pfVar39 = pfVar39 + 0xc;
                    uVar36 = uVar49;
                  } while (uVar49 < uVar33);
                  uVar36 = (uint)uVar59;
                  *puVar46 = uVar36 - (int)uVar57;
                  uVar62 = uVar62 + 1;
                  puVar38 = puVar38 + 1;
                } while (uVar62 != uVar8);
                if (uVar36 != 0) {
                  if (param_1 != 0) goto LAB_0019c698;
                  fVar72 = *(float *)(param_13 + 0x1c);
                  fVar68 = *(float *)(param_13 + 0x20);
                  fVar69 = *(float *)(param_13 + 0x34);
                  if ((param_12 & 1) == 0) {
                    uVar33 = 0;
                    do {
                      uVar62 = puVar61[uVar33 + 1];
                      uVar8 = uVar33 + 2;
                      if (uVar62 != 0) {
                        pfVar9 = (float *)(param_4 + (ulong)puVar61[uVar33] * 0x20);
                        fVar70 = pfVar9[3];
                        uVar35 = uVar62;
                        uVar33 = uVar8;
                        do {
                          uVar59 = (ulong)uVar33;
                          uVar33 = uVar33 + 1;
                          pfVar39 = (float *)(param_5 + (ulong)puVar61[uVar59] * 0x20);
                          fVar71 = fVar72 - fVar69 * ((*pfVar9 - *pfVar39) * (*pfVar9 - *pfVar39) +
                                                      (pfVar9[1] - pfVar39[1]) *
                                                      (pfVar9[1] - pfVar39[1]) +
                                                     (pfVar9[2] - pfVar39[2]) *
                                                     (pfVar9[2] - pfVar39[2]));
                          fVar70 = fVar70 + fVar71 * fVar71 * fVar68 * fVar71;
                          uVar35 = uVar35 - 1;
                        } while (uVar35 != 0);
                        pfVar9[3] = fVar70;
                        uVar8 = uVar8 + uVar62;
                      }
                      uVar33 = uVar8;
                    } while (uVar33 < uVar36);
                  }
                  else {
                    uVar33 = 0;
                    do {
                      uVar62 = puVar61[uVar33 + 1];
                      uVar8 = uVar33 + 2;
                      if (uVar62 != 0) {
                        pfVar9 = (float *)(param_4 + (ulong)puVar61[uVar33] * 0x20);
                        fVar70 = *pfVar9;
                        fVar80 = pfVar9[1];
                        fVar83 = pfVar9[2];
                        fVar71 = pfVar9[3];
                        uVar35 = uVar62;
                        uVar33 = uVar8;
                        do {
                          uVar59 = (ulong)uVar33;
                          uVar33 = uVar33 + 1;
                          pfVar39 = (float *)(param_5 + (ulong)puVar61[uVar59] * 0x20);
                          fVar84 = fVar72 - fVar69 * ((fVar70 - *pfVar39) * (fVar70 - *pfVar39) +
                                                      (fVar80 - pfVar39[1]) * (fVar80 - pfVar39[1])
                                                     + (fVar83 - pfVar39[2]) * (fVar83 - pfVar39[2])
                                                     );
                          fVar84 = fVar84 * fVar84 * fVar68 * fVar84;
                          fVar71 = fVar71 + fVar84;
                          uVar35 = uVar35 - 1;
                          pfVar39[3] = pfVar39[3] + fVar84;
                        } while (uVar35 != 0);
                        pfVar9[3] = fVar71;
                        uVar8 = uVar8 + uVar62;
                      }
                      uVar33 = uVar8;
                    } while (uVar33 < uVar36);
                  }
                }
              }
            }
          }
          else {
            puVar38 = *(uint **)(param_14 + 0x10);
            uVar8 = *(uint *)(psVar54 + 4);
            uVar59 = (ulong)uVar8;
            uVar57 = (ulong)*(uint *)(psVar54 + 6);
            if (uVar8 < 8) {
              uVar62 = uVar8 & 0xfffffffc;
              if (param_1 == 0) {
                fVar72 = *(float *)(param_13 + 0x10);
                fVar68 = *(float *)(param_13 + 0x34);
                fVar69 = *(float *)(param_13 + 0x1c);
                fVar70 = *(float *)(param_13 + 0x20);
                uVar47 = (ulong)uVar62;
                if ((param_12 & 1) == 0) {
                  uVar44 = 0;
                  do {
                    pfVar9 = (float *)(param_4 + (ulong)puVar38[uVar44] * 0x20);
                    if (uVar62 != 0) {
                      fVar71 = *pfVar9;
                      fVar80 = pfVar9[1];
                      fVar83 = pfVar9[2];
                      uVar48 = 0;
                      pfVar39 = pfVar9 + 3;
                      puVar65 = (uint *)(lVar4 + uVar57 * 4);
                      do {
                        pfVar52 = (float *)(param_5 + (ulong)puVar65[-2] * 0x20);
                        pfVar7 = (float *)(param_5 + (ulong)puVar65[-1] * 0x20);
                        pfVar13 = (float *)(param_5 + (ulong)*puVar65 * 0x20);
                        pfVar42 = (float *)(param_5 + (ulong)puVar65[1] * 0x20);
                        fVar89 = (fVar71 - *pfVar52) * (fVar71 - *pfVar52) +
                                 (fVar80 - pfVar52[1]) * (fVar80 - pfVar52[1]) +
                                 (fVar83 - pfVar52[2]) * (fVar83 - pfVar52[2]);
                        fVar87 = (fVar71 - *pfVar7) * (fVar71 - *pfVar7) +
                                 (fVar80 - pfVar7[1]) * (fVar80 - pfVar7[1]) +
                                 (fVar83 - pfVar7[2]) * (fVar83 - pfVar7[2]);
                        fVar85 = (fVar71 - *pfVar13) * (fVar71 - *pfVar13) +
                                 (fVar80 - pfVar13[1]) * (fVar80 - pfVar13[1]) +
                                 (fVar83 - pfVar13[2]) * (fVar83 - pfVar13[2]);
                        fVar84 = (fVar71 - *pfVar42) * (fVar71 - *pfVar42) +
                                 (fVar80 - pfVar42[1]) * (fVar80 - pfVar42[1]) +
                                 (fVar83 - pfVar42[2]) * (fVar83 - pfVar42[2]);
                        bVar29 = false;
                        bVar31 = false;
                        if (fVar72 - fVar84 < 0.0) {
                          bVar29 = false;
                          bVar31 = true;
                          if (!NAN(fVar72 - fVar85)) {
                            bVar29 = fVar72 - fVar85 < 0.0;
                            bVar31 = false;
                          }
                        }
                        bVar30 = false;
                        bVar32 = false;
                        if (bVar29 != bVar31) {
                          bVar30 = false;
                          bVar32 = true;
                          if (!NAN(fVar72 - fVar87)) {
                            bVar30 = fVar72 - fVar87 < 0.0;
                            bVar32 = false;
                          }
                        }
                        bVar29 = false;
                        bVar31 = false;
                        if (bVar30 != bVar32) {
                          bVar29 = false;
                          bVar31 = true;
                          if (!NAN(fVar72 - fVar89)) {
                            bVar29 = fVar72 - fVar89 < 0.0;
                            bVar31 = false;
                          }
                        }
                        fVar90 = 1.0;
                        if (bVar29 != bVar31) {
                          fVar90 = 0.0;
                        }
                        if (fVar90 != 0.0) {
                          if ((uint)fVar89 < (uint)fVar72 && fVar89 != 0.0) {
                            fVar89 = fVar69 - fVar68 * fVar89;
                            *pfVar39 = fVar89 * fVar89 * fVar70 * fVar89 + *pfVar39;
                            if ((uint)fVar72 <= (uint)fVar87 || fVar87 == 0.0) goto LAB_0019e13c;
LAB_0019dfcc:
                            fVar87 = fVar69 - fVar68 * fVar87;
                            *pfVar39 = fVar87 * fVar87 * fVar70 * fVar87 + *pfVar39;
                            if ((uint)fVar72 <= (uint)fVar85 || fVar85 == 0.0) goto LAB_0019e14c;
LAB_0019dffc:
                            fVar85 = fVar69 - fVar68 * fVar85;
                            *pfVar39 = fVar85 * fVar85 * fVar70 * fVar85 + *pfVar39;
                            if ((uint)fVar72 <= (uint)fVar84 || fVar84 == 0.0) goto LAB_0019e178;
                          }
                          else {
                            if ((uint)fVar87 < (uint)fVar72 && fVar87 != 0.0) goto LAB_0019dfcc;
LAB_0019e13c:
                            if ((uint)fVar85 < (uint)fVar72 && fVar85 != 0.0) goto LAB_0019dffc;
LAB_0019e14c:
                            if ((uint)fVar72 <= (uint)fVar84 || fVar84 == 0.0) goto LAB_0019e178;
                          }
                          fVar84 = fVar69 - fVar68 * fVar84;
                          *pfVar39 = fVar84 * fVar84 * fVar70 * fVar84 + *pfVar39;
                        }
LAB_0019e178:
                        uVar48 = uVar48 + 4;
                        puVar65 = puVar65 + 4;
                      } while (uVar48 < uVar47);
                    }
                    if (uVar62 < uVar8) {
                      puVar65 = (uint *)(param_9 + (uVar57 + uVar47) * 4);
                      lVar37 = uVar59 - uVar47;
                      do {
                        pfVar39 = (float *)(param_5 + (ulong)*puVar65 * 0x20);
                        fVar71 = (*pfVar9 - *pfVar39) * (*pfVar9 - *pfVar39) +
                                 (pfVar9[1] - pfVar39[1]) * (pfVar9[1] - pfVar39[1]) +
                                 (pfVar9[2] - pfVar39[2]) * (pfVar9[2] - pfVar39[2]);
                        if ((uint)fVar71 < (uint)fVar72 && fVar71 != 0.0) {
                          fVar71 = fVar69 - fVar68 * fVar71;
                          pfVar9[3] = fVar71 * fVar71 * fVar70 * fVar71 + pfVar9[3];
                        }
                        lVar37 = lVar37 + -1;
                        puVar65 = puVar65 + 1;
                      } while (lVar37 != 0);
                    }
                    uVar44 = uVar44 + 1;
                  } while (uVar44 != uVar33);
                }
                else {
                  uVar44 = 0;
                  do {
                    pfVar9 = (float *)(param_4 + (ulong)puVar38[uVar44] * 0x20);
                    if (uVar62 != 0) {
                      fVar71 = *pfVar9;
                      fVar80 = pfVar9[1];
                      fVar83 = pfVar9[2];
                      uVar48 = 0;
                      pfVar39 = pfVar9 + 3;
                      puVar65 = (uint *)(lVar4 + uVar57 * 4);
                      do {
                        pfVar52 = (float *)(param_5 + (ulong)puVar65[-1] * 0x20);
                        pfVar7 = (float *)(param_5 + (ulong)puVar65[-2] * 0x20);
                        pfVar13 = (float *)(param_5 + (ulong)*puVar65 * 0x20);
                        pfVar42 = (float *)(param_5 + (ulong)puVar65[1] * 0x20);
                        fVar89 = (fVar71 - *pfVar7) * (fVar71 - *pfVar7) +
                                 (fVar80 - pfVar7[1]) * (fVar80 - pfVar7[1]) +
                                 (fVar83 - pfVar7[2]) * (fVar83 - pfVar7[2]);
                        fVar87 = (fVar71 - *pfVar52) * (fVar71 - *pfVar52) +
                                 (fVar80 - pfVar52[1]) * (fVar80 - pfVar52[1]) +
                                 (fVar83 - pfVar52[2]) * (fVar83 - pfVar52[2]);
                        fVar85 = (fVar71 - *pfVar13) * (fVar71 - *pfVar13) +
                                 (fVar80 - pfVar13[1]) * (fVar80 - pfVar13[1]) +
                                 (fVar83 - pfVar13[2]) * (fVar83 - pfVar13[2]);
                        fVar84 = (fVar71 - *pfVar42) * (fVar71 - *pfVar42) +
                                 (fVar80 - pfVar42[1]) * (fVar80 - pfVar42[1]) +
                                 (fVar83 - pfVar42[2]) * (fVar83 - pfVar42[2]);
                        bVar29 = false;
                        bVar31 = false;
                        if (fVar72 - fVar84 < 0.0) {
                          bVar29 = false;
                          bVar31 = true;
                          if (!NAN(fVar72 - fVar85)) {
                            bVar29 = fVar72 - fVar85 < 0.0;
                            bVar31 = false;
                          }
                        }
                        bVar30 = false;
                        bVar32 = false;
                        if (bVar29 != bVar31) {
                          bVar30 = false;
                          bVar32 = true;
                          if (!NAN(fVar72 - fVar87)) {
                            bVar30 = fVar72 - fVar87 < 0.0;
                            bVar32 = false;
                          }
                        }
                        bVar29 = false;
                        bVar31 = false;
                        if (bVar30 != bVar32) {
                          bVar29 = false;
                          bVar31 = true;
                          if (!NAN(fVar72 - fVar89)) {
                            bVar29 = fVar72 - fVar89 < 0.0;
                            bVar31 = false;
                          }
                        }
                        fVar90 = 1.0;
                        if (bVar29 != bVar31) {
                          fVar90 = 0.0;
                        }
                        if (fVar90 != 0.0) {
                          if ((uint)fVar89 < (uint)fVar72 && fVar89 != 0.0) {
                            fVar89 = fVar69 - fVar68 * fVar89;
                            fVar89 = fVar89 * fVar89 * fVar70 * fVar89;
                            *pfVar39 = fVar89 + *pfVar39;
                            pfVar7[3] = fVar89 + pfVar7[3];
                            if ((uint)fVar72 <= (uint)fVar87 || fVar87 == 0.0) goto LAB_0019c8f0;
LAB_0019c768:
                            fVar87 = fVar69 - fVar68 * fVar87;
                            fVar87 = fVar87 * fVar87 * fVar70 * fVar87;
                            *pfVar39 = fVar87 + *pfVar39;
                            pfVar52[3] = fVar87 + pfVar52[3];
                            if ((uint)fVar72 <= (uint)fVar85 || fVar85 == 0.0) goto LAB_0019c900;
LAB_0019c7a4:
                            fVar85 = fVar69 - fVar68 * fVar85;
                            fVar85 = fVar85 * fVar85 * fVar70 * fVar85;
                            *pfVar39 = fVar85 + *pfVar39;
                            pfVar13[3] = fVar85 + pfVar13[3];
                            if ((uint)fVar72 <= (uint)fVar84 || fVar84 == 0.0) goto LAB_0019c938;
                          }
                          else {
                            if ((uint)fVar87 < (uint)fVar72 && fVar87 != 0.0) goto LAB_0019c768;
LAB_0019c8f0:
                            if ((uint)fVar85 < (uint)fVar72 && fVar85 != 0.0) goto LAB_0019c7a4;
LAB_0019c900:
                            if ((uint)fVar72 <= (uint)fVar84 || fVar84 == 0.0) goto LAB_0019c938;
                          }
                          fVar84 = fVar69 - fVar68 * fVar84;
                          fVar84 = fVar84 * fVar84 * fVar70 * fVar84;
                          *pfVar39 = fVar84 + *pfVar39;
                          pfVar42[3] = fVar84 + pfVar42[3];
                        }
LAB_0019c938:
                        uVar48 = uVar48 + 4;
                        puVar65 = puVar65 + 4;
                      } while (uVar48 < uVar47);
                    }
                    if (uVar62 < uVar8) {
                      fVar71 = *pfVar9;
                      fVar80 = pfVar9[1];
                      fVar83 = pfVar9[2];
                      puVar65 = (uint *)(param_9 + (uVar57 + uVar47) * 4);
                      lVar37 = uVar59 - uVar47;
                      do {
                        pfVar39 = (float *)(param_5 + (ulong)*puVar65 * 0x20);
                        fVar84 = (fVar71 - *pfVar39) * (fVar71 - *pfVar39) +
                                 (fVar80 - pfVar39[1]) * (fVar80 - pfVar39[1]) +
                                 (fVar83 - pfVar39[2]) * (fVar83 - pfVar39[2]);
                        if ((uint)fVar84 < (uint)fVar72 && fVar84 != 0.0) {
                          fVar84 = fVar69 - fVar68 * fVar84;
                          fVar84 = fVar84 * fVar84 * fVar70 * fVar84;
                          pfVar9[3] = fVar84 + pfVar9[3];
                          pfVar39[3] = fVar84 + pfVar39[3];
                        }
                        lVar37 = lVar37 + -1;
                        puVar65 = puVar65 + 1;
                      } while (lVar37 != 0);
                    }
                    uVar44 = uVar44 + 1;
                  } while (uVar44 != uVar33);
                }
              }
              else {
                fVar72 = *(float *)(param_13 + 0x10);
                uVar44 = (ulong)uVar62;
                uVar47 = 0;
                if ((param_12 & 1) == 0) {
                  do {
                    uVar48 = (ulong)puVar38[uVar47];
                    pfVar9 = (float *)(param_4 + uVar48 * 0x20);
                    pfVar39 = (float *)(param_2 + uVar48 * 0xc);
                    if ((uVar8 & 0xfffffffc) != 0) {
                      fVar68 = *pfVar9;
                      pfVar52 = pfVar9 + 3;
                      pfVar7 = pfVar9 + 4;
                      pfVar13 = pfVar9 + 5;
                      pfVar42 = pfVar9 + 6;
                      fVar69 = pfVar9[1];
                      lVar37 = param_2 + uVar48 * 0xc;
                      fVar70 = pfVar9[2];
                      uVar63 = 0;
                      pfVar5 = (float *)(lVar37 + 4);
                      pfVar6 = (float *)(lVar37 + 8);
                      puVar65 = (uint *)(lVar4 + uVar57 * 4);
                      do {
                        pfVar41 = (float *)(param_5 + (ulong)puVar65[-2] * 0x20);
                        fVar94 = fVar68 - *pfVar41;
                        pfVar10 = (float *)(param_5 + (ulong)puVar65[-1] * 0x20);
                        fVar96 = fVar69 - pfVar41[1];
                        pfVar11 = (float *)(param_5 + (ulong)*puVar65 * 0x20);
                        pfVar12 = (float *)(param_5 + (ulong)puVar65[1] * 0x20);
                        fVar97 = fVar70 - pfVar41[2];
                        fVar99 = fVar69 - pfVar10[1];
                        fVar101 = fVar68 - *pfVar10;
                        fVar93 = fVar70 - pfVar10[2];
                        fVar95 = fVar69 - pfVar11[1];
                        fVar98 = fVar68 - *pfVar11;
                        fVar100 = fVar70 - pfVar11[2];
                        fVar87 = fVar69 - pfVar12[1];
                        fVar90 = fVar68 - *pfVar12;
                        fVar89 = fVar70 - pfVar12[2];
                        fVar71 = fVar94 * fVar94 + fVar96 * fVar96 + fVar97 * fVar97;
                        fVar80 = fVar101 * fVar101 + fVar99 * fVar99 + fVar93 * fVar93;
                        fVar83 = fVar98 * fVar98 + fVar95 * fVar95 + fVar100 * fVar100;
                        fVar85 = fVar90 * fVar90 + fVar87 * fVar87 + fVar89 * fVar89;
                        fVar84 = *(float *)(param_13 + 0x10);
                        bVar29 = false;
                        bVar31 = false;
                        if (fVar84 - fVar71 < 0.0) {
                          bVar29 = false;
                          bVar31 = true;
                          if (!NAN(fVar84 - fVar80)) {
                            bVar29 = fVar84 - fVar80 < 0.0;
                            bVar31 = false;
                          }
                        }
                        bVar30 = false;
                        bVar32 = false;
                        if (bVar29 != bVar31) {
                          bVar30 = false;
                          bVar32 = true;
                          if (!NAN(fVar84 - fVar83)) {
                            bVar30 = fVar84 - fVar83 < 0.0;
                            bVar32 = false;
                          }
                        }
                        bVar29 = false;
                        bVar31 = false;
                        if (bVar30 != bVar32) {
                          bVar29 = false;
                          bVar31 = true;
                          if (!NAN(fVar84 - fVar85)) {
                            bVar29 = fVar84 - fVar85 < 0.0;
                            bVar31 = false;
                          }
                        }
                        fVar84 = 1.0;
                        if (bVar29 != bVar31) {
                          fVar84 = 0.0;
                        }
                        if (fVar84 != 0.0) {
                          if ((uint)fVar71 < (uint)fVar72 && fVar71 != 0.0) {
                            fVar71 = fVar71 * *(float *)(param_13 + 0x34);
                            fVar84 = sqrtf(fVar71);
                            fVar88 = *(float *)(param_13 + 0x30);
                            fVar82 = *pfVar52 - *(float *)(param_13 + 0x2c);
                            fVar86 = pfVar41[3] - *(float *)(param_13 + 0x2c);
                            if (fVar82 <= 0.0) {
                              fVar82 = 0.0;
                            }
                            if (fVar86 <= 0.0) {
                              fVar86 = 0.0;
                            }
                            fVar91 = *(float *)(param_13 + 0x18);
                            fVar71 = fVar71 * (1.0 / fVar84);
                            fVar102 = (fVar91 - fVar71) * *(float *)(param_13 + 0x28);
                            fVar92 = *pfVar13;
                            fVar71 = (fVar82 + fVar86) *
                                     *(float *)(param_13 + 0x24) *
                                     (fVar71 + ((1.0 / fVar84) * *(float *)(param_13 + 0x1c) -
                                               (fVar91 + fVar91)));
                            fVar82 = pfVar41[5];
                            fVar91 = pfVar41[6];
                            fVar86 = *pfVar42;
                            fVar84 = 1.0 / pfVar41[3];
                            *pfVar39 = fVar84 * (fVar88 * fVar94 * fVar71 +
                                                fVar102 * fVar88 * (pfVar41[4] - *pfVar7)) +
                                       *pfVar39;
                            *pfVar5 = fVar84 * (fVar88 * fVar96 * fVar71 +
                                               fVar102 * fVar88 * (fVar82 - fVar92)) + *pfVar5;
                            *pfVar6 = fVar84 * (fVar88 * fVar97 * fVar71 +
                                               fVar102 * fVar88 * (fVar91 - fVar86)) + *pfVar6;
                            if ((uint)fVar72 <= (uint)fVar80 || fVar80 == 0.0) goto LAB_0019d2e8;
LAB_0019cf20:
                            fVar80 = fVar80 * *(float *)(param_13 + 0x34);
                            fVar71 = sqrtf(fVar80);
                            fVar96 = *(float *)(param_13 + 0x30);
                            fVar84 = *pfVar52 - *(float *)(param_13 + 0x2c);
                            fVar94 = pfVar10[3] - *(float *)(param_13 + 0x2c);
                            if (fVar84 <= 0.0) {
                              fVar84 = 0.0;
                            }
                            if (fVar94 <= 0.0) {
                              fVar94 = 0.0;
                            }
                            fVar97 = *(float *)(param_13 + 0x18);
                            fVar80 = fVar80 * (1.0 / fVar71);
                            fVar82 = (fVar97 - fVar80) * *(float *)(param_13 + 0x28);
                            fVar86 = *pfVar13;
                            fVar71 = (fVar84 + fVar94) *
                                     *(float *)(param_13 + 0x24) *
                                     (fVar80 + ((1.0 / fVar71) * *(float *)(param_13 + 0x1c) -
                                               (fVar97 + fVar97)));
                            fVar84 = pfVar10[5];
                            fVar97 = pfVar10[6];
                            fVar94 = *pfVar42;
                            fVar80 = 1.0 / pfVar10[3];
                            *pfVar39 = fVar80 * (fVar96 * fVar101 * fVar71 +
                                                fVar82 * fVar96 * (pfVar10[4] - *pfVar7)) + *pfVar39
                            ;
                            *pfVar5 = fVar80 * (fVar96 * fVar99 * fVar71 +
                                               fVar82 * fVar96 * (fVar84 - fVar86)) + *pfVar5;
                            *pfVar6 = fVar80 * (fVar96 * fVar93 * fVar71 +
                                               fVar82 * fVar96 * (fVar97 - fVar94)) + *pfVar6;
                            if ((uint)fVar72 <= (uint)fVar83 || fVar83 == 0.0) goto LAB_0019d2f8;
LAB_0019d070:
                            fVar83 = fVar83 * *(float *)(param_13 + 0x34);
                            fVar71 = sqrtf(fVar83);
                            fVar93 = *(float *)(param_13 + 0x30);
                            fVar80 = *pfVar52 - *(float *)(param_13 + 0x2c);
                            fVar84 = pfVar11[3] - *(float *)(param_13 + 0x2c);
                            if (fVar80 <= 0.0) {
                              fVar80 = 0.0;
                            }
                            if (fVar84 <= 0.0) {
                              fVar84 = 0.0;
                            }
                            fVar94 = *(float *)(param_13 + 0x18);
                            fVar83 = fVar83 * (1.0 / fVar71);
                            fVar96 = (fVar94 - fVar83) * *(float *)(param_13 + 0x28);
                            fVar97 = *pfVar13;
                            fVar71 = (fVar80 + fVar84) *
                                     *(float *)(param_13 + 0x24) *
                                     (fVar83 + ((1.0 / fVar71) * *(float *)(param_13 + 0x1c) -
                                               (fVar94 + fVar94)));
                            fVar83 = pfVar11[5];
                            fVar94 = pfVar11[6];
                            fVar84 = *pfVar42;
                            fVar80 = 1.0 / pfVar11[3];
                            *pfVar39 = fVar80 * (fVar93 * fVar98 * fVar71 +
                                                fVar96 * fVar93 * (pfVar11[4] - *pfVar7)) + *pfVar39
                            ;
                            *pfVar5 = fVar80 * (fVar93 * fVar95 * fVar71 +
                                               fVar96 * fVar93 * (fVar83 - fVar97)) + *pfVar5;
                            *pfVar6 = fVar80 * (fVar93 * fVar100 * fVar71 +
                                               fVar96 * fVar93 * (fVar94 - fVar84)) + *pfVar6;
                            if ((uint)fVar72 <= (uint)fVar85 || fVar85 == 0.0) goto LAB_0019d430;
                          }
                          else {
                            if ((uint)fVar80 < (uint)fVar72 && fVar80 != 0.0) goto LAB_0019cf20;
LAB_0019d2e8:
                            if ((uint)fVar83 < (uint)fVar72 && fVar83 != 0.0) goto LAB_0019d070;
LAB_0019d2f8:
                            if ((uint)fVar72 <= (uint)fVar85 || fVar85 == 0.0) goto LAB_0019d430;
                          }
                          fVar85 = fVar85 * *(float *)(param_13 + 0x34);
                          fVar71 = sqrtf(fVar85);
                          fVar84 = *(float *)(param_13 + 0x30);
                          fVar80 = *pfVar52 - *(float *)(param_13 + 0x2c);
                          fVar83 = pfVar12[3] - *(float *)(param_13 + 0x2c);
                          if (fVar80 <= 0.0) {
                            fVar80 = 0.0;
                          }
                          if (fVar83 <= 0.0) {
                            fVar83 = 0.0;
                          }
                          fVar98 = *(float *)(param_13 + 0x18);
                          fVar85 = fVar85 * (1.0 / fVar71);
                          fVar95 = (fVar98 - fVar85) * *(float *)(param_13 + 0x28);
                          fVar71 = (fVar80 + fVar83) *
                                   *(float *)(param_13 + 0x24) *
                                   (fVar85 + ((1.0 / fVar71) * *(float *)(param_13 + 0x1c) -
                                             (fVar98 + fVar98)));
                          fVar83 = *pfVar13;
                          fVar85 = pfVar12[5];
                          fVar93 = pfVar12[6];
                          fVar98 = *pfVar42;
                          fVar80 = 1.0 / pfVar12[3];
                          *pfVar39 = fVar80 * (fVar84 * fVar90 * fVar71 +
                                              fVar95 * fVar84 * (pfVar12[4] - *pfVar7)) + *pfVar39;
                          *pfVar5 = fVar80 * (fVar84 * fVar87 * fVar71 +
                                             fVar95 * fVar84 * (fVar85 - fVar83)) + *pfVar5;
                          *pfVar6 = fVar80 * (fVar84 * fVar89 * fVar71 +
                                             fVar95 * fVar84 * (fVar93 - fVar98)) + *pfVar6;
                        }
LAB_0019d430:
                        uVar63 = uVar63 + 4;
                        puVar65 = puVar65 + 4;
                      } while (uVar63 < uVar44);
                    }
                    if ((uVar8 & 0xfffffffc) < uVar8) {
                      fVar68 = *pfVar9;
                      fVar69 = pfVar9[1];
                      lVar37 = param_2 + uVar48 * 0xc;
                      fVar70 = pfVar9[2];
                      pfVar52 = (float *)(lVar37 + 4);
                      pfVar7 = (float *)(lVar37 + 8);
                      lVar37 = uVar59 - uVar44;
                      puVar65 = (uint *)(param_9 + (uVar57 + uVar44) * 4);
                      do {
                        pfVar13 = (float *)(param_5 + (ulong)*puVar65 * 0x20);
                        fVar83 = fVar69 - pfVar13[1];
                        fVar80 = fVar68 - *pfVar13;
                        fVar84 = fVar70 - pfVar13[2];
                        fVar71 = fVar80 * fVar80 + fVar83 * fVar83 + fVar84 * fVar84;
                        if ((uint)fVar71 < (uint)fVar72 && fVar71 != 0.0) {
                          fVar71 = fVar71 * *(float *)(param_13 + 0x34);
                          fVar85 = sqrtf(fVar71);
                          fVar90 = *(float *)(param_13 + 0x30);
                          fVar87 = pfVar9[3] - *(float *)(param_13 + 0x2c);
                          fVar89 = pfVar13[3] - *(float *)(param_13 + 0x2c);
                          if (fVar87 <= 0.0) {
                            fVar87 = 0.0;
                          }
                          if (fVar89 <= 0.0) {
                            fVar89 = 0.0;
                          }
                          fVar98 = *(float *)(param_13 + 0x18);
                          fVar71 = fVar71 * (1.0 / fVar85);
                          fVar95 = (fVar98 - fVar71) * *(float *)(param_13 + 0x28);
                          fVar93 = pfVar9[5];
                          fVar71 = (fVar87 + fVar89) *
                                   *(float *)(param_13 + 0x24) *
                                   (fVar71 + ((1.0 / fVar85) * *(float *)(param_13 + 0x1c) -
                                             (fVar98 + fVar98)));
                          fVar87 = pfVar13[5];
                          fVar98 = pfVar13[6];
                          fVar89 = pfVar9[6];
                          fVar85 = 1.0 / pfVar13[3];
                          *pfVar39 = fVar85 * (fVar90 * fVar80 * fVar71 +
                                              fVar95 * fVar90 * (pfVar13[4] - pfVar9[4])) + *pfVar39
                          ;
                          *pfVar52 = fVar85 * (fVar90 * fVar83 * fVar71 +
                                              fVar95 * fVar90 * (fVar87 - fVar93)) + *pfVar52;
                          *pfVar7 = fVar85 * (fVar90 * fVar84 * fVar71 +
                                             fVar95 * fVar90 * (fVar98 - fVar89)) + *pfVar7;
                        }
                        lVar37 = lVar37 + -1;
                        puVar65 = puVar65 + 1;
                      } while (lVar37 != 0);
                    }
                    uVar47 = uVar47 + 1;
                  } while (uVar47 != uVar33);
                }
                else {
                  do {
                    uVar48 = (ulong)puVar38[uVar47];
                    pfVar9 = (float *)(param_4 + uVar48 * 0x20);
                    pfVar39 = (float *)(param_2 + uVar48 * 0xc);
                    if ((uVar8 & 0xfffffffc) != 0) {
                      fVar68 = *pfVar9;
                      pfVar52 = pfVar9 + 3;
                      pfVar7 = pfVar9 + 4;
                      pfVar13 = pfVar9 + 5;
                      pfVar42 = pfVar9 + 6;
                      fVar69 = pfVar9[1];
                      lVar37 = param_2 + uVar48 * 0xc;
                      fVar70 = pfVar9[2];
                      uVar63 = 0;
                      pfVar5 = (float *)(lVar37 + 4);
                      pfVar6 = (float *)(lVar37 + 8);
                      puVar65 = (uint *)(lVar4 + uVar57 * 4);
                      do {
                        uVar62 = puVar65[-2];
                        uVar35 = puVar65[-1];
                        pfVar41 = (float *)(param_5 + (ulong)uVar62 * 0x20);
                        uVar36 = *puVar65;
                        uVar49 = puVar65[1];
                        fVar97 = fVar68 - *pfVar41;
                        pfVar10 = (float *)(param_5 + (ulong)uVar35 * 0x20);
                        fVar93 = fVar69 - pfVar41[1];
                        pfVar11 = (float *)(param_5 + (ulong)uVar49 * 0x20);
                        fVar96 = fVar70 - pfVar41[2];
                        fVar94 = fVar69 - pfVar10[1];
                        fVar100 = fVar68 - *pfVar10;
                        pfVar12 = (float *)(param_5 + (ulong)uVar36 * 0x20);
                        fVar99 = fVar70 - pfVar10[2];
                        fVar89 = fVar69 - pfVar12[1];
                        fVar101 = fVar68 - *pfVar12;
                        fVar90 = fVar70 - pfVar12[2];
                        fVar83 = fVar69 - pfVar11[1];
                        fVar87 = fVar68 - *pfVar11;
                        fVar84 = fVar70 - pfVar11[2];
                        fVar71 = fVar97 * fVar97 + fVar93 * fVar93 + fVar96 * fVar96;
                        fVar98 = fVar100 * fVar100 + fVar94 * fVar94 + fVar99 * fVar99;
                        fVar95 = fVar101 * fVar101 + fVar89 * fVar89 + fVar90 * fVar90;
                        fVar85 = fVar87 * fVar87 + fVar83 * fVar83 + fVar84 * fVar84;
                        fVar80 = *(float *)(param_13 + 0x10);
                        bVar29 = false;
                        bVar31 = false;
                        if (fVar80 - fVar71 < 0.0) {
                          bVar29 = false;
                          bVar31 = true;
                          if (!NAN(fVar80 - fVar98)) {
                            bVar29 = fVar80 - fVar98 < 0.0;
                            bVar31 = false;
                          }
                        }
                        bVar30 = false;
                        bVar32 = false;
                        if (bVar29 != bVar31) {
                          bVar30 = false;
                          bVar32 = true;
                          if (!NAN(fVar80 - fVar95)) {
                            bVar30 = fVar80 - fVar95 < 0.0;
                            bVar32 = false;
                          }
                        }
                        bVar29 = false;
                        bVar31 = false;
                        if (bVar30 != bVar32) {
                          bVar29 = false;
                          bVar31 = true;
                          if (!NAN(fVar80 - fVar85)) {
                            bVar29 = fVar80 - fVar85 < 0.0;
                            bVar31 = false;
                          }
                        }
                        fVar80 = 1.0;
                        if (bVar29 != bVar31) {
                          fVar80 = 0.0;
                        }
                        if (fVar80 != 0.0) {
                          if ((uint)fVar71 < (uint)fVar72 && fVar71 != 0.0) {
                            fVar71 = fVar71 * *(float *)(param_13 + 0x34);
                            fVar80 = sqrtf(fVar71);
                            fVar88 = *(float *)(param_13 + 0x30);
                            fVar82 = *(float *)(param_13 + 0x18);
                            fVar102 = *pfVar52 - *(float *)(param_13 + 0x2c);
                            fVar86 = pfVar41[3] - *(float *)(param_13 + 0x2c);
                            fVar91 = 1.0 / pfVar41[3];
                            if (fVar102 <= 0.0) {
                              fVar102 = 0.0;
                            }
                            if (fVar86 <= 0.0) {
                              fVar86 = 0.0;
                            }
                            fVar71 = fVar71 * (1.0 / fVar80);
                            fVar80 = (fVar102 + fVar86) *
                                     *(float *)(param_13 + 0x24) *
                                     (fVar71 + ((1.0 / fVar80) * *(float *)(param_13 + 0x1c) -
                                               (fVar82 + fVar82)));
                            fVar86 = 1.0 / *pfVar52;
                            fVar82 = (fVar82 - fVar71) * *(float *)(param_13 + 0x28);
                            pfVar40 = (float *)(param_3 + (ulong)uVar62 * 0xc);
                            fVar97 = fVar88 * fVar97 * fVar80 +
                                     fVar82 * fVar88 * (pfVar41[4] - *pfVar7);
                            fVar71 = fVar88 * fVar96 * fVar80 +
                                     fVar82 * fVar88 * (pfVar41[6] - *pfVar42);
                            fVar80 = fVar88 * fVar93 * fVar80 +
                                     fVar82 * fVar88 * (pfVar41[5] - *pfVar13);
                            fVar93 = *pfVar39;
                            *pfVar40 = *pfVar40 - fVar86 * fVar97;
                            pfVar40[1] = pfVar40[1] - fVar86 * fVar80;
                            *pfVar39 = fVar91 * fVar97 + fVar93;
                            *pfVar5 = fVar91 * fVar80 + *pfVar5;
                            *pfVar6 = fVar91 * fVar71 + *pfVar6;
                            pfVar40[2] = pfVar40[2] - fVar86 * fVar71;
                          }
                          if ((uint)fVar98 < (uint)fVar72 && fVar98 != 0.0) {
                            fVar98 = fVar98 * *(float *)(param_13 + 0x34);
                            fVar71 = sqrtf(fVar98);
                            fVar96 = *(float *)(param_13 + 0x30);
                            fVar80 = *(float *)(param_13 + 0x18);
                            fVar82 = *pfVar52 - *(float *)(param_13 + 0x2c);
                            fVar93 = pfVar10[3] - *(float *)(param_13 + 0x2c);
                            fVar97 = 1.0 / pfVar10[3];
                            if (fVar82 <= 0.0) {
                              fVar82 = 0.0;
                            }
                            if (fVar93 <= 0.0) {
                              fVar93 = 0.0;
                            }
                            fVar98 = fVar98 * (1.0 / fVar71);
                            fVar86 = (fVar80 - fVar98) * *(float *)(param_13 + 0x28);
                            fVar71 = (fVar82 + fVar93) *
                                     *(float *)(param_13 + 0x24) *
                                     (fVar98 + ((1.0 / fVar71) * *(float *)(param_13 + 0x1c) -
                                               (fVar80 + fVar80)));
                            fVar98 = 1.0 / *pfVar52;
                            pfVar41 = (float *)(param_3 + (ulong)uVar35 * 0xc);
                            fVar93 = fVar96 * fVar100 * fVar71 +
                                     fVar86 * fVar96 * (pfVar10[4] - *pfVar7);
                            fVar80 = fVar96 * fVar99 * fVar71 +
                                     fVar86 * fVar96 * (pfVar10[6] - *pfVar42);
                            fVar71 = fVar96 * fVar94 * fVar71 +
                                     fVar86 * fVar96 * (pfVar10[5] - *pfVar13);
                            fVar94 = *pfVar39;
                            *pfVar41 = *pfVar41 - fVar98 * fVar93;
                            pfVar41[1] = pfVar41[1] - fVar98 * fVar71;
                            *pfVar39 = fVar97 * fVar93 + fVar94;
                            *pfVar5 = fVar97 * fVar71 + *pfVar5;
                            *pfVar6 = fVar97 * fVar80 + *pfVar6;
                            pfVar41[2] = pfVar41[2] - fVar98 * fVar80;
                            if ((uint)fVar72 <= (uint)fVar95 || fVar95 == 0.0) goto LAB_0019acc4;
LAB_0019a87c:
                            fVar95 = fVar95 * *(float *)(param_13 + 0x34);
                            fVar71 = sqrtf(fVar95);
                            fVar93 = *(float *)(param_13 + 0x30);
                            fVar80 = *(float *)(param_13 + 0x18);
                            fVar96 = *pfVar52 - *(float *)(param_13 + 0x2c);
                            fVar98 = pfVar12[3] - *(float *)(param_13 + 0x2c);
                            fVar94 = 1.0 / pfVar12[3];
                            if (fVar96 <= 0.0) {
                              fVar96 = 0.0;
                            }
                            if (fVar98 <= 0.0) {
                              fVar98 = 0.0;
                            }
                            fVar95 = fVar95 * (1.0 / fVar71);
                            fVar97 = (fVar80 - fVar95) * *(float *)(param_13 + 0x28);
                            fVar71 = (fVar96 + fVar98) *
                                     *(float *)(param_13 + 0x24) *
                                     (fVar95 + ((1.0 / fVar71) * *(float *)(param_13 + 0x1c) -
                                               (fVar80 + fVar80)));
                            fVar98 = 1.0 / *pfVar52;
                            pfVar41 = (float *)(param_3 + (ulong)uVar36 * 0xc);
                            fVar95 = fVar93 * fVar101 * fVar71 +
                                     fVar97 * fVar93 * (pfVar12[4] - *pfVar7);
                            fVar80 = fVar93 * fVar90 * fVar71 +
                                     fVar97 * fVar93 * (pfVar12[6] - *pfVar42);
                            fVar71 = fVar93 * fVar89 * fVar71 +
                                     fVar97 * fVar93 * (pfVar12[5] - *pfVar13);
                            fVar89 = *pfVar41;
                            fVar90 = pfVar41[1];
                            *pfVar39 = fVar94 * fVar95 + *pfVar39;
                            *pfVar41 = fVar89 - fVar98 * fVar95;
                            pfVar41[1] = fVar90 - fVar98 * fVar71;
                            *pfVar5 = fVar94 * fVar71 + *pfVar5;
                            *pfVar6 = fVar94 * fVar80 + *pfVar6;
                            pfVar41[2] = pfVar41[2] - fVar98 * fVar80;
                            if ((uint)fVar72 <= (uint)fVar85 || fVar85 == 0.0) goto LAB_0019ae34;
                          }
                          else {
                            if ((uint)fVar95 < (uint)fVar72 && fVar95 != 0.0) goto LAB_0019a87c;
LAB_0019acc4:
                            if ((uint)fVar72 <= (uint)fVar85 || fVar85 == 0.0) goto LAB_0019ae34;
                          }
                          fVar85 = fVar85 * *(float *)(param_13 + 0x34);
                          fVar71 = sqrtf(fVar85);
                          fVar90 = *(float *)(param_13 + 0x30);
                          fVar80 = *(float *)(param_13 + 0x18);
                          fVar95 = *pfVar52 - *(float *)(param_13 + 0x2c);
                          fVar89 = pfVar11[3] - *(float *)(param_13 + 0x2c);
                          fVar98 = 1.0 / pfVar11[3];
                          if (fVar95 <= 0.0) {
                            fVar95 = 0.0;
                          }
                          if (fVar89 <= 0.0) {
                            fVar89 = 0.0;
                          }
                          fVar85 = fVar85 * (1.0 / fVar71);
                          fVar93 = (fVar80 - fVar85) * *(float *)(param_13 + 0x28);
                          fVar71 = (fVar95 + fVar89) *
                                   *(float *)(param_13 + 0x24) *
                                   (fVar85 + ((1.0 / fVar71) * *(float *)(param_13 + 0x1c) -
                                             (fVar80 + fVar80)));
                          fVar85 = 1.0 / *pfVar52;
                          pfVar41 = (float *)(param_3 + (ulong)uVar49 * 0xc);
                          fVar87 = fVar90 * fVar87 * fVar71 +
                                   fVar93 * fVar90 * (pfVar11[4] - *pfVar7);
                          fVar80 = fVar90 * fVar84 * fVar71 +
                                   fVar93 * fVar90 * (pfVar11[6] - *pfVar42);
                          fVar71 = fVar90 * fVar83 * fVar71 +
                                   fVar93 * fVar90 * (pfVar11[5] - *pfVar13);
                          fVar83 = *pfVar41;
                          fVar84 = pfVar41[1];
                          *pfVar39 = fVar98 * fVar87 + *pfVar39;
                          *pfVar41 = fVar83 - fVar85 * fVar87;
                          pfVar41[1] = fVar84 - fVar85 * fVar71;
                          *pfVar5 = fVar98 * fVar71 + *pfVar5;
                          *pfVar6 = fVar98 * fVar80 + *pfVar6;
                          pfVar41[2] = pfVar41[2] - fVar85 * fVar80;
                        }
LAB_0019ae34:
                        uVar63 = uVar63 + 4;
                        puVar65 = puVar65 + 4;
                      } while (uVar63 < uVar44);
                    }
                    if ((uVar8 & 0xfffffffc) < uVar8) {
                      fVar68 = *pfVar9;
                      fVar69 = pfVar9[1];
                      fVar70 = pfVar9[2];
                      lVar37 = param_2 + uVar48 * 0xc;
                      pfVar52 = (float *)(lVar37 + 4);
                      pfVar7 = (float *)(lVar37 + 8);
                      lVar37 = uVar59 - uVar44;
                      puVar65 = (uint *)(param_9 + (uVar57 + uVar44) * 4);
                      do {
                        uVar62 = *puVar65;
                        pfVar13 = (float *)(param_5 + (ulong)uVar62 * 0x20);
                        fVar80 = fVar69 - pfVar13[1];
                        fVar84 = fVar68 - *pfVar13;
                        fVar83 = fVar70 - pfVar13[2];
                        fVar71 = fVar84 * fVar84 + fVar80 * fVar80 + fVar83 * fVar83;
                        if ((uint)fVar71 < (uint)fVar72 && fVar71 != 0.0) {
                          fVar71 = fVar71 * *(float *)(param_13 + 0x34);
                          fVar85 = sqrtf(fVar71);
                          fVar90 = *(float *)(param_13 + 0x30);
                          fVar87 = *(float *)(param_13 + 0x18);
                          fVar95 = pfVar9[3] - *(float *)(param_13 + 0x2c);
                          fVar89 = pfVar13[3] - *(float *)(param_13 + 0x2c);
                          fVar98 = 1.0 / pfVar13[3];
                          if (fVar95 <= 0.0) {
                            fVar95 = 0.0;
                          }
                          if (fVar89 <= 0.0) {
                            fVar89 = 0.0;
                          }
                          fVar71 = fVar71 * (1.0 / fVar85);
                          fVar93 = (fVar87 - fVar71) * *(float *)(param_13 + 0x28);
                          fVar71 = (fVar95 + fVar89) *
                                   *(float *)(param_13 + 0x24) *
                                   (fVar71 + ((1.0 / fVar85) * *(float *)(param_13 + 0x1c) -
                                             (fVar87 + fVar87)));
                          fVar85 = 1.0 / pfVar9[3];
                          pfVar42 = (float *)(param_3 + (ulong)uVar62 * 0xc);
                          fVar84 = fVar90 * fVar84 * fVar71 +
                                   fVar93 * fVar90 * (pfVar13[4] - pfVar9[4]);
                          fVar83 = fVar90 * fVar83 * fVar71 +
                                   fVar93 * fVar90 * (pfVar13[6] - pfVar9[6]);
                          fVar71 = fVar90 * fVar80 * fVar71 +
                                   fVar93 * fVar90 * (pfVar13[5] - pfVar9[5]);
                          fVar80 = *pfVar39;
                          *pfVar42 = *pfVar42 - fVar85 * fVar84;
                          pfVar42[1] = pfVar42[1] - fVar85 * fVar71;
                          *pfVar39 = fVar98 * fVar84 + fVar80;
                          *pfVar52 = fVar98 * fVar71 + *pfVar52;
                          *pfVar7 = fVar98 * fVar83 + *pfVar7;
                          pfVar42[2] = pfVar42[2] - fVar85 * fVar83;
                        }
                        lVar37 = lVar37 + -1;
                        puVar65 = puVar65 + 1;
                      } while (lVar37 != 0);
                    }
                    uVar47 = uVar47 + 1;
                  } while (uVar47 != uVar33);
                }
              }
            }
            else {
              puVar65 = (uint *)(param_9 + uVar57 * 4);
              pfVar9 = *(float **)(param_14 + 0x38);
              puVar61 = *(uint **)(param_14 + 0x40);
              uVar62 = uVar8 + 7 & 0xfffffffc;
              local_b0[0] = 3.4028235e+38;
              local_b0[1] = 3.4028235e+38;
              local_b0[2] = 3.4028235e+38;
              local_b0[3] = 3.4028235e+38;
              if (uVar62 != 0) {
                puVar45 = (uint *)(lVar4 + uVar57 * 4);
                uVar36 = 0;
                pfVar39 = pfVar9 + 8;
                do {
                  if (uVar36 < uVar8) {
                    pfVar52 = (float *)(param_5 + (ulong)puVar45[-2] * 0x20);
                    if (uVar36 + 1 < uVar8) goto LAB_0019bba0;
LAB_0019bb68:
                    pauVar56 = (undefined1 (*) [16])local_b0;
                    if (uVar36 + 2 < uVar8) goto LAB_0019bbb4;
LAB_0019bb78:
                    pauVar58 = (undefined1 (*) [12])local_b0;
                    if (uVar36 + 3 < uVar8) goto LAB_0019bbc8;
LAB_0019bb88:
                    pauVar60 = (undefined1 (*) [12])local_b0;
                  }
                  else {
                    pfVar52 = local_b0;
                    if (uVar8 <= uVar36 + 1) goto LAB_0019bb68;
LAB_0019bba0:
                    pauVar56 = (undefined1 (*) [16])(param_5 + (ulong)puVar45[-1] * 0x20);
                    if (uVar8 <= uVar36 + 2) goto LAB_0019bb78;
LAB_0019bbb4:
                    pauVar58 = (undefined1 (*) [12])(param_5 + (ulong)*puVar45 * 0x20);
                    if (uVar8 <= uVar36 + 3) goto LAB_0019bb88;
LAB_0019bbc8:
                    pauVar60 = (undefined1 (*) [12])(param_5 + (ulong)puVar45[1] * 0x20);
                  }
                  fVar72 = *pfVar52;
                  fVar68 = pfVar52[2];
                  auVar26 = *pauVar58;
                  fVar70 = SUB124(*pauVar58,0);
                  uVar66 = SUB124(*pauVar58,4);
                  auVar78 = *pauVar56;
                  auVar27 = *pauVar60;
                  fVar69 = auVar78._0_4_;
                  fVar71 = SUB124(*pauVar60,0);
                  uVar67 = SUB124(*pauVar60,4);
                  auVar21._4_4_ = fVar70;
                  auVar21._0_4_ = fVar72;
                  auVar21._8_4_ = pfVar52[1];
                  auVar21._12_4_ = uVar66;
                  auVar22._4_4_ = fVar70;
                  auVar22._0_4_ = fVar72;
                  auVar22._8_4_ = pfVar52[1];
                  auVar22._12_4_ = uVar66;
                  auVar77 = NEON_ext(auVar21,auVar22,8,1);
                  auVar23._4_4_ = fVar71;
                  auVar23._0_4_ = fVar69;
                  auVar23._8_4_ = auVar78._4_4_;
                  auVar23._12_4_ = uVar67;
                  auVar24._4_4_ = fVar71;
                  auVar24._0_4_ = fVar69;
                  auVar24._8_4_ = auVar78._4_4_;
                  auVar24._12_4_ = uVar67;
                  auVar81 = NEON_ext(auVar23,auVar24,8,1);
                  uVar36 = uVar36 + 4;
                  pfVar39[-8] = fVar72;
                  pfVar39[-7] = fVar69;
                  pfVar39[-6] = fVar70;
                  pfVar39[-5] = fVar71;
                  puVar45 = puVar45 + 4;
                  pfVar39[-4] = auVar77._0_4_;
                  pfVar39[-3] = auVar81._0_4_;
                  pfVar39[-2] = auVar77._4_4_;
                  pfVar39[-1] = auVar81._4_4_;
                  *pfVar39 = fVar68;
                  pfVar39[1] = auVar78._8_4_;
                  pfVar39[2] = auVar26._8_4_;
                  pfVar39[3] = auVar27._8_4_;
                  pfVar39 = pfVar39 + 0xc;
                } while (uVar36 < uVar62);
              }
              uStack_138 = *(undefined4 *)(param_13 + 0x30);
              uStack_134 = uStack_138;
              local_140 = uStack_138;
              uStack_13c = uStack_138;
              uStack_128 = *(undefined4 *)(param_13 + 0x34);
              uStack_124 = uStack_128;
              local_130 = uStack_128;
              uStack_12c = uStack_128;
              uStack_118 = *(undefined4 *)(param_13 + 0x18);
              uStack_114 = uStack_118;
              local_120 = uStack_118;
              uStack_11c = uStack_118;
              uStack_108 = *(undefined4 *)(param_13 + 0x1c);
              uStack_104 = uStack_108;
              local_110 = uStack_108;
              uStack_10c = uStack_108;
              uStack_f8 = *(undefined4 *)(param_13 + 0x20);
              uStack_f4 = uStack_f8;
              local_100 = uStack_f8;
              uStack_fc = uStack_f8;
              uStack_e8 = *(undefined4 *)(param_13 + 0x24);
              uStack_e4 = uStack_e8;
              local_f0 = uStack_e8;
              uStack_ec = uStack_e8;
              uStack_d8 = *(undefined4 *)(param_13 + 0x28);
              uStack_d4 = uStack_d8;
              local_e0 = uStack_d8;
              uStack_dc = uStack_d8;
              uVar66 = *(undefined4 *)(param_13 + 0x2c);
              puVar45 = puVar65 + uVar59;
              uVar59 = 0;
              uStack_c8 = CONCAT44(uVar66,uVar66);
              local_d0 = CONCAT44(uVar66,uVar66);
              fVar72 = *(float *)(param_13 + 0x10);
              uVar62 = 0;
              do {
                uVar35 = *puVar38;
                puVar61[uVar59] = uVar35;
                pfVar39 = (float *)(param_4 + (ulong)uVar35 * 0x20);
                fVar68 = *pfVar39;
                fVar69 = pfVar39[1];
                fVar70 = pfVar39[2];
                iVar34 = (int)uVar59;
                uVar36 = iVar34 + 2;
                uVar59 = (ulong)uVar36;
                puVar46 = puVar61 + (iVar34 + 1);
                fVar71 = fVar69 - (float)*(undefined8 *)(pfVar9 + 4);
                fVar80 = fVar69 - (float)((ulong)*(undefined8 *)(pfVar9 + 4) >> 0x20);
                fVar83 = fVar69 - (float)*(undefined8 *)(pfVar9 + 6);
                fVar84 = fVar69 - (float)((ulong)*(undefined8 *)(pfVar9 + 6) >> 0x20);
                fVar85 = fVar70 - (float)*(undefined8 *)(pfVar9 + 8);
                fVar87 = fVar70 - (float)((ulong)*(undefined8 *)(pfVar9 + 8) >> 0x20);
                fVar89 = fVar70 - (float)*(undefined8 *)(pfVar9 + 10);
                fVar90 = fVar70 - (float)((ulong)*(undefined8 *)(pfVar9 + 10) >> 0x20);
                fVar71 = fVar85 * fVar85 + (fVar68 - *pfVar9) * (fVar68 - *pfVar9) + fVar71 * fVar71
                ;
                fVar80 = fVar87 * fVar87 +
                         (fVar68 - pfVar9[1]) * (fVar68 - pfVar9[1]) + fVar80 * fVar80;
                fVar83 = fVar89 * fVar89 +
                         (fVar68 - pfVar9[2]) * (fVar68 - pfVar9[2]) + fVar83 * fVar83;
                fVar84 = fVar90 * fVar90 +
                         (fVar68 - pfVar9[3]) * (fVar68 - pfVar9[3]) + fVar84 * fVar84;
                uVar57 = CONCAT26(-(ushort)(0.0 < fVar84),
                                  CONCAT24(-(ushort)(0.0 < fVar83),
                                           CONCAT22(-(ushort)(0.0 < fVar80),-(ushort)(0.0 < fVar71))
                                          )) &
                         CONCAT26(-(ushort)(fVar84 < fVar72),
                                  CONCAT24(-(ushort)(fVar83 < fVar72),
                                           CONCAT22(-(ushort)(fVar80 < fVar72),
                                                    -(ushort)(fVar71 < fVar72))));
                auVar73._0_8_ =
                     CONCAT35(0,CONCAT14((char)(uVar57 >> 0x10),(uint)((byte)uVar57 & 1)) &
                                0x1ffffffff);
                auVar73[8] = (byte)(uVar57 >> 0x20) & 1;
                auVar73._9_3_ = 0;
                auVar73[0xc] = (byte)(uVar57 >> 0x30) & 1;
                local_160[1] = (ulong)auVar73._8_5_;
                local_160[0] = auVar73._0_8_;
                if (uVar8 != 0) {
                  uVar57 = uVar59;
                  pfVar39 = pfVar9;
                  puVar64 = puVar65;
                  uVar49 = 0;
                  do {
                    uVar50 = uVar49 + 4;
                    fVar71 = fVar68 - pfVar39[0xc];
                    lVar37 = (ulong)(uVar50 & 4) * 4;
                    fVar80 = fVar70 - (float)*(undefined8 *)(pfVar39 + 0x14);
                    fVar83 = fVar70 - (float)((ulong)*(undefined8 *)(pfVar39 + 0x14) >> 0x20);
                    fVar84 = fVar70 - (float)*(undefined8 *)(pfVar39 + 0x16);
                    fVar85 = fVar70 - (float)((ulong)*(undefined8 *)(pfVar39 + 0x16) >> 0x20);
                    uVar49 = uVar49 & 4;
                    fVar71 = fVar80 * fVar80 +
                             fVar71 * fVar71 + (fVar69 - pfVar39[0x10]) * (fVar69 - pfVar39[0x10]);
                    fVar80 = fVar83 * fVar83 +
                             (fVar68 - pfVar39[0xd]) * (fVar68 - pfVar39[0xd]) +
                             (fVar69 - pfVar39[0x11]) * (fVar69 - pfVar39[0x11]);
                    fVar83 = fVar84 * fVar84 +
                             (fVar68 - pfVar39[0xe]) * (fVar68 - pfVar39[0xe]) +
                             (fVar69 - pfVar39[0x12]) * (fVar69 - pfVar39[0x12]);
                    fVar84 = fVar85 * fVar85 +
                             (fVar68 - pfVar39[0xf]) * (fVar68 - pfVar39[0xf]) +
                             (fVar69 - pfVar39[0x13]) * (fVar69 - pfVar39[0x13]);
                    uVar47 = CONCAT26(-(ushort)(0.0 < fVar84),
                                      CONCAT24(-(ushort)(0.0 < fVar83),
                                               CONCAT22(-(ushort)(0.0 < fVar80),
                                                        -(ushort)(0.0 < fVar71)))) &
                             CONCAT26(-(ushort)(fVar84 < fVar72),
                                      CONCAT24(-(ushort)(fVar83 < fVar72),
                                               CONCAT22(-(ushort)(fVar80 < fVar72),
                                                        -(ushort)(fVar71 < fVar72))));
                    auVar74._0_8_ =
                         CONCAT35(0,CONCAT14((char)(uVar47 >> 0x10),(uint)((byte)uVar47 & 1)) &
                                    0x1ffffffff);
                    auVar74[8] = (byte)(uVar47 >> 0x20) & 1;
                    auVar74._9_3_ = 0;
                    auVar74[0xc] = (byte)(uVar47 >> 0x30) & 1;
                    *(ulong *)((long)local_160 + lVar37 + 8) = (ulong)auVar74._8_5_;
                    *(ulong *)((long)local_160 + lVar37) = auVar74._0_8_;
                    iVar34 = *(int *)((long)local_160 + (ulong)uVar49 * 4);
                    iVar14 = *(int *)((long)local_160 + (ulong)(uVar49 | 1) * 4);
                    iVar15 = *(int *)((long)local_160 + (ulong)(uVar49 | 2) * 4);
                    iVar16 = *(int *)((long)local_160 + (ulong)(uVar49 | 3) * 4);
                    puVar61[uVar59] = *puVar64;
                    uVar36 = iVar34 + (int)uVar59;
                    if (puVar64 + 1 < puVar45) {
                      uVar49 = puVar64[1];
                    }
                    else {
                      uVar49 = 0;
                    }
                    puVar61[uVar36] = uVar49;
                    uVar36 = uVar36 + iVar14;
                    if (puVar64 + 2 < puVar45) {
                      uVar49 = puVar64[2];
                    }
                    else {
                      uVar49 = 0;
                    }
                    puVar61[uVar36] = uVar49;
                    uVar36 = uVar36 + iVar15;
                    if (puVar64 + 3 < puVar45) {
                      uVar49 = puVar64[3];
                    }
                    else {
                      uVar49 = 0;
                    }
                    puVar61[uVar36] = uVar49;
                    uVar36 = uVar36 + iVar16;
                    uVar59 = (ulong)uVar36;
                    if (0x80 - uVar36 < 6) {
                      *puVar46 = uVar36 - (int)uVar57;
                      if (param_1 == 0) {
                        fVar71 = *(float *)(param_13 + 0x1c);
                        fVar80 = *(float *)(param_13 + 0x20);
                        fVar83 = *(float *)(param_13 + 0x34);
                        if ((param_12 & 1) == 0) {
                          if (uVar36 != 0) {
                            uVar49 = 0;
                            do {
                              uVar17 = puVar61[uVar49 + 1];
                              uVar3 = uVar49 + 2;
                              if (uVar17 != 0) {
                                pfVar52 = (float *)(param_4 + (ulong)puVar61[uVar49] * 0x20);
                                fVar84 = pfVar52[3];
                                uVar53 = uVar17;
                                uVar49 = uVar3;
                                do {
                                  uVar59 = (ulong)uVar49;
                                  uVar49 = uVar49 + 1;
                                  pfVar7 = (float *)(param_5 + (ulong)puVar61[uVar59] * 0x20);
                                  fVar85 = fVar71 - fVar83 * ((*pfVar52 - *pfVar7) *
                                                              (*pfVar52 - *pfVar7) +
                                                              (pfVar52[1] - pfVar7[1]) *
                                                              (pfVar52[1] - pfVar7[1]) +
                                                             (pfVar52[2] - pfVar7[2]) *
                                                             (pfVar52[2] - pfVar7[2]));
                                  fVar84 = fVar84 + fVar85 * fVar85 * fVar80 * fVar85;
                                  uVar53 = uVar53 - 1;
                                } while (uVar53 != 0);
                                pfVar52[3] = fVar84;
                                uVar3 = uVar3 + uVar17;
                              }
                              uVar49 = uVar3;
                            } while (uVar49 < uVar36);
                          }
                        }
                        else if (uVar36 != 0) {
                          uVar49 = 0;
                          do {
                            uVar17 = puVar61[uVar49 + 1];
                            uVar3 = uVar49 + 2;
                            if (uVar17 != 0) {
                              pfVar52 = (float *)(param_4 + (ulong)puVar61[uVar49] * 0x20);
                              fVar84 = *pfVar52;
                              fVar87 = pfVar52[1];
                              fVar89 = pfVar52[2];
                              fVar85 = pfVar52[3];
                              uVar53 = uVar17;
                              uVar49 = uVar3;
                              do {
                                uVar59 = (ulong)uVar49;
                                uVar49 = uVar49 + 1;
                                pfVar7 = (float *)(param_5 + (ulong)puVar61[uVar59] * 0x20);
                                fVar90 = fVar71 - fVar83 * ((fVar84 - *pfVar7) * (fVar84 - *pfVar7)
                                                            + (fVar87 - pfVar7[1]) *
                                                              (fVar87 - pfVar7[1]) +
                                                           (fVar89 - pfVar7[2]) *
                                                           (fVar89 - pfVar7[2]));
                                fVar90 = fVar90 * fVar90 * fVar80 * fVar90;
                                fVar85 = fVar85 + fVar90;
                                uVar53 = uVar53 - 1;
                                pfVar7[3] = pfVar7[3] + fVar90;
                              } while (uVar53 != 0);
                              pfVar52[3] = fVar85;
                              uVar3 = uVar3 + uVar17;
                            }
                            uVar49 = uVar3;
                          } while (uVar49 < uVar36);
                        }
                      }
                      else if ((param_12 & 1) == 0) {
                        FUN_001a5d00(param_2,param_4,param_5,puVar61,uVar36,param_13,&local_140);
                      }
                      else {
                        FUN_001a5720(param_2,param_3,param_4,param_5,puVar61,uVar36,param_13,
                                     &local_140);
                      }
                      uVar57 = 2;
                      uVar59 = 2;
                      *puVar61 = uVar35;
                      puVar46 = puVar61 + 1;
                    }
                    uVar36 = (uint)uVar57;
                    puVar64 = puVar64 + 4;
                    pfVar39 = pfVar39 + 0xc;
                    uVar49 = uVar50;
                  } while (uVar50 < uVar8);
                }
                uVar62 = uVar62 + 1;
                uVar35 = (uint)uVar59;
                puVar38 = puVar38 + 1;
                *puVar46 = uVar35 - uVar36;
              } while (uVar62 != uVar33);
              if (uVar35 != 0) {
                if (param_1 == 0) {
                  fVar72 = *(float *)(param_13 + 0x1c);
                  fVar68 = *(float *)(param_13 + 0x20);
                  fVar69 = *(float *)(param_13 + 0x34);
                  if ((param_12 & 1) == 0) {
                    uVar33 = 0;
                    do {
                      uVar62 = puVar61[uVar33 + 1];
                      uVar8 = uVar33 + 2;
                      if (uVar62 != 0) {
                        pfVar9 = (float *)(param_4 + (ulong)puVar61[uVar33] * 0x20);
                        fVar70 = pfVar9[3];
                        uVar36 = uVar62;
                        uVar33 = uVar8;
                        do {
                          uVar59 = (ulong)uVar33;
                          uVar33 = uVar33 + 1;
                          pfVar39 = (float *)(param_5 + (ulong)puVar61[uVar59] * 0x20);
                          fVar71 = fVar72 - fVar69 * ((*pfVar9 - *pfVar39) * (*pfVar9 - *pfVar39) +
                                                      (pfVar9[1] - pfVar39[1]) *
                                                      (pfVar9[1] - pfVar39[1]) +
                                                     (pfVar9[2] - pfVar39[2]) *
                                                     (pfVar9[2] - pfVar39[2]));
                          fVar70 = fVar70 + fVar71 * fVar71 * fVar68 * fVar71;
                          uVar36 = uVar36 - 1;
                        } while (uVar36 != 0);
                        pfVar9[3] = fVar70;
                        uVar8 = uVar8 + uVar62;
                      }
                      uVar33 = uVar8;
                    } while (uVar33 < uVar35);
                  }
                  else {
                    uVar33 = 0;
                    do {
                      uVar62 = puVar61[uVar33 + 1];
                      uVar8 = uVar33 + 2;
                      if (uVar62 != 0) {
                        pfVar9 = (float *)(param_4 + (ulong)puVar61[uVar33] * 0x20);
                        fVar70 = *pfVar9;
                        fVar80 = pfVar9[1];
                        fVar83 = pfVar9[2];
                        fVar71 = pfVar9[3];
                        uVar36 = uVar62;
                        uVar33 = uVar8;
                        do {
                          uVar59 = (ulong)uVar33;
                          uVar33 = uVar33 + 1;
                          pfVar39 = (float *)(param_5 + (ulong)puVar61[uVar59] * 0x20);
                          fVar84 = fVar72 - fVar69 * ((fVar70 - *pfVar39) * (fVar70 - *pfVar39) +
                                                      (fVar80 - pfVar39[1]) * (fVar80 - pfVar39[1])
                                                     + (fVar83 - pfVar39[2]) * (fVar83 - pfVar39[2])
                                                     );
                          fVar84 = fVar84 * fVar84 * fVar68 * fVar84;
                          fVar71 = fVar71 + fVar84;
                          uVar36 = uVar36 - 1;
                          pfVar39[3] = pfVar39[3] + fVar84;
                        } while (uVar36 != 0);
                        pfVar9[3] = fVar71;
                        uVar8 = uVar8 + uVar62;
                      }
                      uVar33 = uVar8;
                    } while (uVar33 < uVar35);
                  }
                }
                else {
LAB_0019c698:
                  if ((param_12 & 1) == 0) {
                    FUN_001a5d00(param_2,param_4,param_5,puVar61,uVar59,param_13,&local_140);
                  }
                  else {
                    FUN_001a5720(param_2,param_3,param_4,param_5,puVar61,uVar59,param_13,&local_140)
                    ;
                  }
                }
              }
            }
          }
        }
      }
      psVar54 = psVar54 + 8;
    } while (psVar54 < psVar2);
  }
  return;
}


