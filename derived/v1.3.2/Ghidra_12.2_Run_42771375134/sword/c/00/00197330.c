/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00197330; name: FUN_00197330
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00197330(int param_1,long param_2,long param_3,long param_4,long param_5,uint param_6,
                 long param_7,long param_8)

{
  undefined4 *puVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  short *psVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  uint uVar30;
  ulong uVar31;
  uint uVar32;
  uint *puVar33;
  uint uVar34;
  ulong uVar35;
  long lVar36;
  float *pfVar37;
  float *pfVar38;
  float *pfVar39;
  uint *puVar40;
  undefined4 *puVar41;
  uint *puVar42;
  int iVar43;
  ulong uVar44;
  uint uVar45;
  uint uVar46;
  float *pfVar47;
  uint uVar48;
  uint uVar49;
  long lVar50;
  undefined1 (*pauVar51) [16];
  uint uVar52;
  undefined1 (*pauVar53) [12];
  ulong uVar54;
  undefined1 (*pauVar55) [12];
  uint *puVar56;
  uint *puVar57;
  float *pfVar58;
  ulong uVar59;
  uint *puVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar68 [13];
  undefined1 auVar70 [13];
  undefined1 auVar71 [13];
  undefined1 auVar72 [16];
  undefined1 auVar69 [13];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar75;
  undefined1 auVar76 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
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
  long local_1c8 [13];
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
  
  if (param_6 != 0) {
    uVar35 = 0;
    lVar2 = param_5 + 8;
    do {
      psVar6 = (short *)(param_4 + uVar35 * 0x10);
      puVar57 = (uint *)(psVar6 + 4);
      uVar30 = *puVar57;
      if (uVar30 != 0xffffffff) {
        sVar16 = *psVar6;
        sVar17 = psVar6[1];
        sVar18 = psVar6[2];
        lVar36 = 0;
        do {
          uVar54 = (ulong)((short)((&DAT_01d4c9c2)[lVar36 * 3] + sVar17) * 0x65 +
                           (int)(short)((&DAT_01d4c9c0)[lVar36 * 3] + sVar16) +
                           (short)((&DAT_01d4c9c4)[lVar36 * 3] + sVar18) * 0x1eef & param_6 - 1);
          iVar43 = *(int *)(param_4 + uVar54 * 0x10 + 8);
          while (iVar43 != -1) {
            if (((*(short *)(param_4 + uVar54 * 0x10) ==
                  (short)((&DAT_01d4c9c0)[lVar36 * 3] + sVar16)) &&
                (lVar50 = param_4 + uVar54 * 0x10,
                *(short *)(lVar50 + 2) == (short)((&DAT_01d4c9c2)[lVar36 * 3] + sVar17))) &&
               (*(short *)(lVar50 + 4) == (short)((&DAT_01d4c9c4)[lVar36 * 3] + sVar18))) {
              lVar50 = param_4 + uVar54 * 0x10;
              goto LAB_0019747c;
            }
            uVar54 = (ulong)((int)uVar54 + 1U & param_6 - 1);
            iVar43 = *(int *)(param_4 + uVar54 * 0x10 + 8);
          }
          lVar50 = 0;
LAB_0019747c:
          local_1c8[lVar36] = lVar50;
          lVar36 = lVar36 + 1;
        } while (lVar36 != 0xd);
        if (1 < uVar30) {
          uVar54 = 1;
          iVar43 = -1;
          do {
            uVar31 = (ulong)*(uint *)(psVar6 + 6);
            puVar33 = (uint *)(param_5 + uVar31 * 4 + uVar54 * 4);
            uVar32 = uVar30 - (int)uVar54;
            if (uVar32 < 8) {
              uVar48 = uVar32 & 0xfffffffc;
              if (param_1 == 0) {
                fVar65 = *(float *)(param_7 + 0x10);
                fVar67 = *(float *)(param_7 + 0x34);
                fVar63 = *(float *)(param_7 + 0x1c);
                fVar64 = *(float *)(param_7 + 0x20);
                pfVar58 = (float *)(param_3 + (ulong)puVar33[-1] * 0x20);
                if (uVar48 != 0) {
                  pfVar37 = pfVar58 + 3;
                  fVar66 = *pfVar58;
                  fVar75 = pfVar58[1];
                  fVar78 = pfVar58[2];
                  puVar33 = (uint *)(lVar2 + (uVar31 + uVar54) * 4);
                  uVar44 = 0;
                  do {
                    pfVar47 = (float *)(param_3 + (ulong)puVar33[-1] * 0x20);
                    pfVar5 = (float *)(param_3 + (ulong)puVar33[-2] * 0x20);
                    pfVar39 = (float *)(param_3 + (ulong)*puVar33 * 0x20);
                    pfVar10 = (float *)(param_3 + (ulong)puVar33[1] * 0x20);
                    fVar84 = (fVar66 - *pfVar5) * (fVar66 - *pfVar5) +
                             (fVar75 - pfVar5[1]) * (fVar75 - pfVar5[1]) +
                             (fVar78 - pfVar5[2]) * (fVar78 - pfVar5[2]);
                    fVar82 = (fVar66 - *pfVar47) * (fVar66 - *pfVar47) +
                             (fVar75 - pfVar47[1]) * (fVar75 - pfVar47[1]) +
                             (fVar78 - pfVar47[2]) * (fVar78 - pfVar47[2]);
                    fVar80 = (fVar66 - *pfVar39) * (fVar66 - *pfVar39) +
                             (fVar75 - pfVar39[1]) * (fVar75 - pfVar39[1]) +
                             (fVar78 - pfVar39[2]) * (fVar78 - pfVar39[2]);
                    fVar79 = (fVar66 - *pfVar10) * (fVar66 - *pfVar10) +
                             (fVar75 - pfVar10[1]) * (fVar75 - pfVar10[1]) +
                             (fVar78 - pfVar10[2]) * (fVar78 - pfVar10[2]);
                    bVar26 = false;
                    bVar28 = false;
                    if (fVar65 - fVar79 < 0.0) {
                      bVar26 = false;
                      bVar28 = true;
                      if (!NAN(fVar65 - fVar80)) {
                        bVar26 = fVar65 - fVar80 < 0.0;
                        bVar28 = false;
                      }
                    }
                    bVar27 = false;
                    bVar29 = false;
                    if (bVar26 != bVar28) {
                      bVar27 = false;
                      bVar29 = true;
                      if (!NAN(fVar65 - fVar82)) {
                        bVar27 = fVar65 - fVar82 < 0.0;
                        bVar29 = false;
                      }
                    }
                    bVar26 = false;
                    bVar28 = false;
                    if (bVar27 != bVar29) {
                      bVar26 = false;
                      bVar28 = true;
                      if (!NAN(fVar65 - fVar84)) {
                        bVar26 = fVar65 - fVar84 < 0.0;
                        bVar28 = false;
                      }
                    }
                    fVar85 = 1.0;
                    if (bVar26 != bVar28) {
                      fVar85 = 0.0;
                    }
                    if (fVar85 != 0.0) {
                      if ((uint)fVar84 < (uint)fVar65 && fVar84 != 0.0) {
                        fVar84 = fVar63 - fVar67 * fVar84;
                        fVar84 = fVar84 * fVar84 * fVar64 * fVar84;
                        *pfVar37 = fVar84 + *pfVar37;
                        pfVar5[3] = fVar84 + pfVar5[3];
                        if ((uint)fVar82 < (uint)fVar65 && fVar82 != 0.0) goto LAB_0019837c;
LAB_00198504:
                        if ((uint)fVar65 <= (uint)fVar80 || fVar80 == 0.0) goto LAB_00198514;
LAB_001983b8:
                        fVar80 = fVar63 - fVar67 * fVar80;
                        fVar80 = fVar80 * fVar80 * fVar64 * fVar80;
                        *pfVar37 = fVar80 + *pfVar37;
                        pfVar39[3] = fVar80 + pfVar39[3];
                        if ((uint)fVar65 <= (uint)fVar79 || fVar79 == 0.0) goto LAB_0019854c;
                      }
                      else {
                        if ((uint)fVar65 <= (uint)fVar82 || fVar82 == 0.0) goto LAB_00198504;
LAB_0019837c:
                        fVar82 = fVar63 - fVar67 * fVar82;
                        fVar82 = fVar82 * fVar82 * fVar64 * fVar82;
                        *pfVar37 = fVar82 + *pfVar37;
                        pfVar47[3] = fVar82 + pfVar47[3];
                        if ((uint)fVar80 < (uint)fVar65 && fVar80 != 0.0) goto LAB_001983b8;
LAB_00198514:
                        if ((uint)fVar65 <= (uint)fVar79 || fVar79 == 0.0) goto LAB_0019854c;
                      }
                      fVar79 = fVar63 - fVar67 * fVar79;
                      fVar79 = fVar79 * fVar79 * fVar64 * fVar79;
                      *pfVar37 = fVar79 + *pfVar37;
                      pfVar10[3] = fVar79 + pfVar10[3];
                    }
LAB_0019854c:
                    uVar44 = uVar44 + 4;
                    puVar33 = puVar33 + 4;
                  } while (uVar44 < uVar48);
                }
                if (uVar48 < uVar32) {
                  fVar66 = *pfVar58;
                  fVar75 = pfVar58[1];
                  fVar78 = pfVar58[2];
                  uVar44 = (ulong)(uVar30 + iVar43 & 0xfffffffc);
                  lVar36 = (uVar30 + iVar43) - uVar44;
                  puVar33 = (uint *)(param_5 + (uVar31 + uVar54 + uVar44) * 4);
                  do {
                    pfVar37 = (float *)(param_3 + (ulong)*puVar33 * 0x20);
                    fVar79 = (fVar66 - *pfVar37) * (fVar66 - *pfVar37) +
                             (fVar75 - pfVar37[1]) * (fVar75 - pfVar37[1]) +
                             (fVar78 - pfVar37[2]) * (fVar78 - pfVar37[2]);
                    if ((uint)fVar79 < (uint)fVar65 && fVar79 != 0.0) {
                      fVar79 = fVar63 - fVar67 * fVar79;
                      fVar79 = fVar79 * fVar79 * fVar64 * fVar79;
                      pfVar58[3] = fVar79 + pfVar58[3];
                      pfVar37[3] = fVar79 + pfVar37[3];
                    }
                    lVar36 = lVar36 + -1;
                    puVar33 = puVar33 + 1;
                  } while (lVar36 != 0);
                }
              }
              else {
                uVar44 = (ulong)puVar33[-1];
                fVar67 = *(float *)(param_7 + 0x10);
                pfVar58 = (float *)(param_3 + uVar44 * 0x20);
                pfVar37 = (float *)(param_2 + uVar44 * 0xc);
                if (uVar48 != 0) {
                  pfVar47 = pfVar58 + 3;
                  lVar36 = param_2 + uVar44 * 0xc;
                  fVar63 = *pfVar58;
                  fVar64 = pfVar58[1];
                  pfVar5 = pfVar58 + 4;
                  pfVar39 = pfVar58 + 5;
                  pfVar10 = pfVar58 + 6;
                  pfVar3 = (float *)(lVar36 + 4);
                  pfVar4 = (float *)(lVar36 + 8);
                  fVar65 = pfVar58[2];
                  puVar33 = (uint *)(lVar2 + (uVar31 + uVar54) * 4);
                  uVar59 = 0;
                  do {
                    uVar48 = puVar33[-2];
                    uVar49 = puVar33[-1];
                    pfVar38 = (float *)(param_3 + (ulong)uVar48 * 0x20);
                    uVar34 = *puVar33;
                    uVar11 = puVar33[1];
                    fVar91 = fVar63 - *pfVar38;
                    pfVar7 = (float *)(param_3 + (ulong)uVar49 * 0x20);
                    fVar87 = fVar64 - pfVar38[1];
                    pfVar8 = (float *)(param_3 + (ulong)uVar34 * 0x20);
                    pfVar9 = (float *)(param_3 + (ulong)uVar11 * 0x20);
                    fVar90 = fVar65 - pfVar38[2];
                    fVar88 = fVar64 - pfVar7[1];
                    fVar94 = fVar63 - *pfVar7;
                    fVar93 = fVar65 - pfVar7[2];
                    fVar84 = fVar64 - pfVar8[1];
                    fVar95 = fVar63 - *pfVar8;
                    fVar85 = fVar65 - pfVar8[2];
                    fVar78 = fVar64 - pfVar9[1];
                    fVar82 = fVar63 - *pfVar9;
                    fVar79 = fVar65 - pfVar9[2];
                    fVar66 = fVar91 * fVar91 + fVar87 * fVar87 + fVar90 * fVar90;
                    fVar92 = fVar94 * fVar94 + fVar88 * fVar88 + fVar93 * fVar93;
                    fVar89 = fVar95 * fVar95 + fVar84 * fVar84 + fVar85 * fVar85;
                    fVar80 = fVar82 * fVar82 + fVar78 * fVar78 + fVar79 * fVar79;
                    fVar75 = *(float *)(param_7 + 0x10);
                    bVar26 = false;
                    bVar28 = false;
                    if (fVar75 - fVar66 < 0.0) {
                      bVar26 = false;
                      bVar28 = true;
                      if (!NAN(fVar75 - fVar92)) {
                        bVar26 = fVar75 - fVar92 < 0.0;
                        bVar28 = false;
                      }
                    }
                    bVar27 = false;
                    bVar29 = false;
                    if (bVar26 != bVar28) {
                      bVar27 = false;
                      bVar29 = true;
                      if (!NAN(fVar75 - fVar89)) {
                        bVar27 = fVar75 - fVar89 < 0.0;
                        bVar29 = false;
                      }
                    }
                    bVar26 = false;
                    bVar28 = false;
                    if (bVar27 != bVar29) {
                      bVar26 = false;
                      bVar28 = true;
                      if (!NAN(fVar75 - fVar80)) {
                        bVar26 = fVar75 - fVar80 < 0.0;
                        bVar28 = false;
                      }
                    }
                    fVar75 = 1.0;
                    if (bVar26 != bVar28) {
                      fVar75 = 0.0;
                    }
                    if (fVar75 != 0.0) {
                      if ((uint)fVar66 < (uint)fVar67 && fVar66 != 0.0) {
                        fVar66 = fVar66 * *(float *)(param_7 + 0x34);
                        fVar75 = sqrtf(fVar66);
                        fVar83 = *(float *)(param_7 + 0x30);
                        fVar77 = *(float *)(param_7 + 0x18);
                        fVar96 = *pfVar47 - *(float *)(param_7 + 0x2c);
                        fVar81 = pfVar38[3] - *(float *)(param_7 + 0x2c);
                        fVar86 = 1.0 / pfVar38[3];
                        if (fVar96 <= 0.0) {
                          fVar96 = 0.0;
                        }
                        if (fVar81 <= 0.0) {
                          fVar81 = 0.0;
                        }
                        fVar66 = fVar66 * (1.0 / fVar75);
                        fVar75 = (fVar96 + fVar81) *
                                 *(float *)(param_7 + 0x24) *
                                 (fVar66 + ((1.0 / fVar75) * *(float *)(param_7 + 0x1c) -
                                           (fVar77 + fVar77)));
                        fVar66 = (fVar77 - fVar66) * *(float *)(param_7 + 0x28);
                        fVar77 = 1.0 / *pfVar47;
                        fVar91 = fVar83 * fVar91 * fVar75 + fVar66 * fVar83 * (pfVar38[4] - *pfVar5)
                        ;
                        fVar87 = fVar83 * fVar87 * fVar75 +
                                 fVar66 * fVar83 * (pfVar38[5] - *pfVar39);
                        fVar66 = fVar83 * fVar90 * fVar75 +
                                 fVar66 * fVar83 * (pfVar38[6] - *pfVar10);
                        pfVar38 = (float *)(param_2 + (ulong)uVar48 * 0xc);
                        *pfVar37 = fVar86 * fVar91 + *pfVar37;
                        *pfVar3 = fVar86 * fVar87 + *pfVar3;
                        *pfVar4 = fVar86 * fVar66 + *pfVar4;
                        *pfVar38 = *pfVar38 - fVar77 * fVar91;
                        pfVar38[1] = pfVar38[1] - fVar77 * fVar87;
                        pfVar38[2] = pfVar38[2] - fVar77 * fVar66;
                      }
                      if ((uint)fVar92 < (uint)fVar67 && fVar92 != 0.0) {
                        fVar92 = fVar92 * *(float *)(param_7 + 0x34);
                        fVar66 = sqrtf(fVar92);
                        fVar90 = *(float *)(param_7 + 0x30);
                        fVar75 = *(float *)(param_7 + 0x18);
                        fVar77 = *pfVar47 - *(float *)(param_7 + 0x2c);
                        fVar87 = pfVar7[3] - *(float *)(param_7 + 0x2c);
                        fVar91 = 1.0 / pfVar7[3];
                        if (fVar77 <= 0.0) {
                          fVar77 = 0.0;
                        }
                        if (fVar87 <= 0.0) {
                          fVar87 = 0.0;
                        }
                        fVar92 = fVar92 * (1.0 / fVar66);
                        fVar81 = (fVar75 - fVar92) * *(float *)(param_7 + 0x28);
                        fVar66 = (fVar77 + fVar87) *
                                 *(float *)(param_7 + 0x24) *
                                 (fVar92 + ((1.0 / fVar66) * *(float *)(param_7 + 0x1c) -
                                           (fVar75 + fVar75)));
                        fVar75 = 1.0 / *pfVar47;
                        fVar87 = fVar90 * fVar94 * fVar66 + fVar81 * fVar90 * (pfVar7[4] - *pfVar5);
                        fVar92 = fVar90 * fVar88 * fVar66 + fVar81 * fVar90 * (pfVar7[5] - *pfVar39)
                        ;
                        fVar66 = fVar90 * fVar93 * fVar66 + fVar81 * fVar90 * (pfVar7[6] - *pfVar10)
                        ;
                        pfVar38 = (float *)(param_2 + (ulong)uVar49 * 0xc);
                        *pfVar37 = fVar91 * fVar87 + *pfVar37;
                        *pfVar3 = fVar91 * fVar92 + *pfVar3;
                        *pfVar4 = fVar91 * fVar66 + *pfVar4;
                        *pfVar38 = *pfVar38 - fVar75 * fVar87;
                        pfVar38[1] = pfVar38[1] - fVar75 * fVar92;
                        pfVar38[2] = pfVar38[2] - fVar75 * fVar66;
                      }
                      if ((uint)fVar89 < (uint)fVar67 && fVar89 != 0.0) {
                        fVar89 = fVar89 * *(float *)(param_7 + 0x34);
                        fVar66 = sqrtf(fVar89);
                        fVar92 = *(float *)(param_7 + 0x30);
                        fVar75 = *(float *)(param_7 + 0x18);
                        fVar90 = *pfVar47 - *(float *)(param_7 + 0x2c);
                        fVar87 = pfVar8[3] - *(float *)(param_7 + 0x2c);
                        fVar88 = 1.0 / pfVar8[3];
                        if (fVar90 <= 0.0) {
                          fVar90 = 0.0;
                        }
                        if (fVar87 <= 0.0) {
                          fVar87 = 0.0;
                        }
                        fVar89 = fVar89 * (1.0 / fVar66);
                        fVar91 = (fVar75 - fVar89) * *(float *)(param_7 + 0x28);
                        fVar66 = (fVar90 + fVar87) *
                                 *(float *)(param_7 + 0x24) *
                                 (fVar89 + ((1.0 / fVar66) * *(float *)(param_7 + 0x1c) -
                                           (fVar75 + fVar75)));
                        fVar75 = 1.0 / *pfVar47;
                        fVar87 = fVar92 * fVar95 * fVar66 + fVar91 * fVar92 * (pfVar8[4] - *pfVar5);
                        fVar84 = fVar92 * fVar84 * fVar66 + fVar91 * fVar92 * (pfVar8[5] - *pfVar39)
                        ;
                        fVar66 = fVar92 * fVar85 * fVar66 + fVar91 * fVar92 * (pfVar8[6] - *pfVar10)
                        ;
                        pfVar38 = (float *)(param_2 + (ulong)uVar34 * 0xc);
                        *pfVar37 = fVar88 * fVar87 + *pfVar37;
                        *pfVar3 = fVar88 * fVar84 + *pfVar3;
                        *pfVar4 = fVar88 * fVar66 + *pfVar4;
                        *pfVar38 = *pfVar38 - fVar75 * fVar87;
                        pfVar38[1] = pfVar38[1] - fVar75 * fVar84;
                        pfVar38[2] = pfVar38[2] - fVar75 * fVar66;
                      }
                      if ((uint)fVar80 < (uint)fVar67 && fVar80 != 0.0) {
                        fVar80 = fVar80 * *(float *)(param_7 + 0x34);
                        fVar66 = sqrtf(fVar80);
                        fVar85 = *(float *)(param_7 + 0x30);
                        fVar75 = *(float *)(param_7 + 0x18);
                        fVar92 = *pfVar47 - *(float *)(param_7 + 0x2c);
                        fVar84 = pfVar9[3] - *(float *)(param_7 + 0x2c);
                        fVar87 = 1.0 / pfVar9[3];
                        if (fVar92 <= 0.0) {
                          fVar92 = 0.0;
                        }
                        if (fVar84 <= 0.0) {
                          fVar84 = 0.0;
                        }
                        fVar80 = fVar80 * (1.0 / fVar66);
                        fVar89 = (fVar75 - fVar80) * *(float *)(param_7 + 0x28);
                        fVar66 = (fVar92 + fVar84) *
                                 *(float *)(param_7 + 0x24) *
                                 (fVar80 + ((1.0 / fVar66) * *(float *)(param_7 + 0x1c) -
                                           (fVar75 + fVar75)));
                        fVar75 = 1.0 / *pfVar47;
                        fVar80 = fVar85 * fVar82 * fVar66 + fVar89 * fVar85 * (pfVar9[4] - *pfVar5);
                        fVar78 = fVar85 * fVar78 * fVar66 + fVar89 * fVar85 * (pfVar9[5] - *pfVar39)
                        ;
                        fVar66 = fVar85 * fVar79 * fVar66 + fVar89 * fVar85 * (pfVar9[6] - *pfVar10)
                        ;
                        pfVar38 = (float *)(param_2 + (ulong)uVar11 * 0xc);
                        *pfVar37 = fVar87 * fVar80 + *pfVar37;
                        *pfVar3 = fVar87 * fVar78 + *pfVar3;
                        *pfVar4 = fVar87 * fVar66 + *pfVar4;
                        *pfVar38 = *pfVar38 - fVar75 * fVar80;
                        pfVar38[1] = pfVar38[1] - fVar75 * fVar78;
                        pfVar38[2] = pfVar38[2] - fVar75 * fVar66;
                      }
                    }
                    uVar59 = uVar59 + 4;
                    puVar33 = puVar33 + 4;
                  } while (uVar59 < ((ulong)uVar32 & 0xfffffffc));
                }
                if ((uVar32 & 0xfffffffc) < uVar32) {
                  lVar36 = param_2 + uVar44 * 0xc;
                  fVar63 = *pfVar58;
                  fVar64 = pfVar58[1];
                  fVar65 = pfVar58[2];
                  pfVar47 = (float *)(lVar36 + 4);
                  pfVar5 = (float *)(lVar36 + 8);
                  uVar44 = (ulong)(uVar30 + iVar43 & 0xfffffffc);
                  lVar36 = (uVar30 + iVar43) - uVar44;
                  puVar33 = (uint *)(param_5 + (uVar31 + uVar54 + uVar44) * 4);
                  do {
                    uVar30 = *puVar33;
                    pfVar39 = (float *)(param_3 + (ulong)uVar30 * 0x20);
                    fVar75 = fVar64 - pfVar39[1];
                    fVar79 = fVar63 - *pfVar39;
                    fVar78 = fVar65 - pfVar39[2];
                    fVar66 = fVar79 * fVar79 + fVar75 * fVar75 + fVar78 * fVar78;
                    if ((uint)fVar66 < (uint)fVar67 && fVar66 != 0.0) {
                      fVar66 = fVar66 * *(float *)(param_7 + 0x34);
                      fVar80 = sqrtf(fVar66);
                      fVar85 = *(float *)(param_7 + 0x30);
                      fVar82 = *(float *)(param_7 + 0x18);
                      fVar87 = pfVar58[3] - *(float *)(param_7 + 0x2c);
                      fVar84 = pfVar39[3] - *(float *)(param_7 + 0x2c);
                      if (fVar87 <= 0.0) {
                        fVar87 = 0.0;
                      }
                      if (fVar84 <= 0.0) {
                        fVar84 = 0.0;
                      }
                      fVar66 = fVar66 * (1.0 / fVar80);
                      fVar92 = (fVar82 - fVar66) * *(float *)(param_7 + 0x28);
                      fVar66 = (fVar87 + fVar84) *
                               *(float *)(param_7 + 0x24) *
                               (fVar66 + ((1.0 / fVar80) * *(float *)(param_7 + 0x1c) -
                                         (fVar82 + fVar82)));
                      fVar82 = 1.0 / pfVar39[3];
                      fVar80 = 1.0 / pfVar58[3];
                      fVar79 = fVar85 * fVar79 * fVar66 +
                               fVar92 * fVar85 * (pfVar39[4] - pfVar58[4]);
                      fVar75 = fVar85 * fVar75 * fVar66 +
                               fVar92 * fVar85 * (pfVar39[5] - pfVar58[5]);
                      fVar66 = fVar85 * fVar78 * fVar66 +
                               fVar92 * fVar85 * (pfVar39[6] - pfVar58[6]);
                      *pfVar37 = fVar82 * fVar79 + *pfVar37;
                      *pfVar47 = fVar82 * fVar75 + *pfVar47;
                      pfVar39 = (float *)(param_2 + (ulong)uVar30 * 0xc);
                      *pfVar5 = fVar82 * fVar66 + *pfVar5;
                      *pfVar39 = *pfVar39 - fVar80 * fVar79;
                      pfVar39[1] = pfVar39[1] - fVar80 * fVar75;
                      pfVar39[2] = pfVar39[2] - fVar80 * fVar66;
                    }
                    lVar36 = lVar36 + -1;
                    puVar33 = puVar33 + 1;
                  } while (lVar36 != 0);
                }
              }
            }
            else {
              pfVar58 = *(float **)(param_8 + 0x38);
              puVar56 = *(uint **)(param_8 + 0x40);
              uVar30 = uVar32 + 7 & 0xfffffffc;
              local_b0[0] = 3.4028235e+38;
              local_b0[1] = 3.4028235e+38;
              local_b0[2] = 3.4028235e+38;
              local_b0[3] = 3.4028235e+38;
              if (uVar30 != 0) {
                puVar42 = (uint *)(lVar2 + (uVar31 + uVar54) * 4);
                uVar48 = 0;
                pfVar37 = pfVar58 + 8;
                do {
                  if (uVar48 < uVar32) {
                    pfVar47 = (float *)(param_3 + (ulong)puVar42[-2] * 0x20);
                    if (uVar32 <= uVar48 + 1) goto LAB_00197f20;
LAB_00197f58:
                    pauVar51 = (undefined1 (*) [16])(param_3 + (ulong)puVar42[-1] * 0x20);
                    if (uVar48 + 2 < uVar32) goto LAB_00197f6c;
LAB_00197f30:
                    pauVar53 = (undefined1 (*) [12])local_b0;
                    if (uVar32 <= uVar48 + 3) goto LAB_00197f40;
LAB_00197f80:
                    pauVar55 = (undefined1 (*) [12])(param_3 + (ulong)puVar42[1] * 0x20);
                  }
                  else {
                    pfVar47 = local_b0;
                    if (uVar48 + 1 < uVar32) goto LAB_00197f58;
LAB_00197f20:
                    pauVar51 = (undefined1 (*) [16])local_b0;
                    if (uVar32 <= uVar48 + 2) goto LAB_00197f30;
LAB_00197f6c:
                    pauVar53 = (undefined1 (*) [12])(param_3 + (ulong)*puVar42 * 0x20);
                    if (uVar48 + 3 < uVar32) goto LAB_00197f80;
LAB_00197f40:
                    pauVar55 = (undefined1 (*) [12])local_b0;
                  }
                  fVar67 = *pfVar47;
                  fVar63 = pfVar47[2];
                  auVar24 = *pauVar53;
                  fVar65 = SUB124(*pauVar53,0);
                  uVar61 = SUB124(*pauVar53,4);
                  auVar19 = *pauVar51;
                  auVar25 = *pauVar55;
                  fVar64 = auVar19._0_4_;
                  fVar66 = SUB124(*pauVar55,0);
                  uVar62 = SUB124(*pauVar55,4);
                  auVar72._4_4_ = fVar65;
                  auVar72._0_4_ = fVar67;
                  auVar72._8_4_ = pfVar47[1];
                  auVar72._12_4_ = uVar61;
                  auVar73._4_4_ = fVar65;
                  auVar73._0_4_ = fVar67;
                  auVar73._8_4_ = pfVar47[1];
                  auVar73._12_4_ = uVar61;
                  auVar72 = NEON_ext(auVar72,auVar73,8,1);
                  auVar76._4_4_ = fVar66;
                  auVar76._0_4_ = fVar64;
                  auVar76._8_4_ = auVar19._4_4_;
                  auVar76._12_4_ = uVar62;
                  auVar23._4_4_ = fVar66;
                  auVar23._0_4_ = fVar64;
                  auVar23._8_4_ = auVar19._4_4_;
                  auVar23._12_4_ = uVar62;
                  auVar73 = NEON_ext(auVar76,auVar23,8,1);
                  uVar48 = uVar48 + 4;
                  pfVar37[-8] = fVar67;
                  pfVar37[-7] = fVar64;
                  pfVar37[-6] = fVar65;
                  pfVar37[-5] = fVar66;
                  puVar42 = puVar42 + 4;
                  pfVar37[-4] = auVar72._0_4_;
                  pfVar37[-3] = auVar73._0_4_;
                  pfVar37[-2] = auVar72._4_4_;
                  pfVar37[-1] = auVar73._4_4_;
                  *pfVar37 = fVar63;
                  pfVar37[1] = auVar19._8_4_;
                  pfVar37[2] = auVar24._8_4_;
                  pfVar37[3] = auVar25._8_4_;
                  pfVar37 = pfVar37 + 0xc;
                } while (uVar48 < uVar30);
              }
              uStack_138 = *(undefined4 *)(param_7 + 0x30);
              uStack_134 = uStack_138;
              local_140 = uStack_138;
              uStack_13c = uStack_138;
              uStack_128 = *(undefined4 *)(param_7 + 0x34);
              uStack_124 = uStack_128;
              local_130 = uStack_128;
              uStack_12c = uStack_128;
              uStack_118 = *(undefined4 *)(param_7 + 0x18);
              uStack_114 = uStack_118;
              local_120 = uStack_118;
              uStack_11c = uStack_118;
              uStack_108 = *(undefined4 *)(param_7 + 0x1c);
              uStack_104 = uStack_108;
              local_110 = uStack_108;
              uStack_10c = uStack_108;
              uStack_f8 = *(undefined4 *)(param_7 + 0x20);
              uStack_f4 = uStack_f8;
              local_100 = uStack_f8;
              uStack_fc = uStack_f8;
              uStack_e8 = *(undefined4 *)(param_7 + 0x24);
              uStack_e4 = uStack_e8;
              local_f0 = uStack_e8;
              uStack_ec = uStack_e8;
              uStack_d8 = *(undefined4 *)(param_7 + 0x28);
              uStack_d4 = uStack_d8;
              local_e0 = uStack_d8;
              uStack_dc = uStack_d8;
              uVar61 = *(undefined4 *)(param_7 + 0x2c);
              uVar30 = puVar33[-1];
              uStack_c8 = CONCAT44(uVar61,uVar61);
              local_d0 = CONCAT44(uVar61,uVar61);
              fVar67 = *(float *)(param_7 + 0x10);
              *puVar56 = uVar30;
              pfVar37 = (float *)(param_3 + (ulong)uVar30 * 0x20);
              fVar63 = *pfVar37;
              fVar64 = pfVar37[1];
              fVar65 = pfVar37[2];
              fVar66 = fVar64 - (float)*(undefined8 *)(pfVar58 + 4);
              fVar75 = fVar64 - (float)((ulong)*(undefined8 *)(pfVar58 + 4) >> 0x20);
              fVar78 = fVar64 - (float)*(undefined8 *)(pfVar58 + 6);
              fVar79 = fVar64 - (float)((ulong)*(undefined8 *)(pfVar58 + 6) >> 0x20);
              fVar80 = fVar65 - (float)*(undefined8 *)(pfVar58 + 8);
              fVar82 = fVar65 - (float)((ulong)*(undefined8 *)(pfVar58 + 8) >> 0x20);
              fVar84 = fVar65 - (float)*(undefined8 *)(pfVar58 + 10);
              fVar85 = fVar65 - (float)((ulong)*(undefined8 *)(pfVar58 + 10) >> 0x20);
              fVar66 = fVar80 * fVar80 + (fVar63 - *pfVar58) * (fVar63 - *pfVar58) + fVar66 * fVar66
              ;
              fVar75 = fVar82 * fVar82 +
                       (fVar63 - pfVar58[1]) * (fVar63 - pfVar58[1]) + fVar75 * fVar75;
              fVar78 = fVar84 * fVar84 +
                       (fVar63 - pfVar58[2]) * (fVar63 - pfVar58[2]) + fVar78 * fVar78;
              fVar79 = fVar85 * fVar85 +
                       (fVar63 - pfVar58[3]) * (fVar63 - pfVar58[3]) + fVar79 * fVar79;
              uVar31 = CONCAT26(-(ushort)(0.0 < fVar79),
                                CONCAT24(-(ushort)(0.0 < fVar78),
                                         CONCAT22(-(ushort)(0.0 < fVar75),-(ushort)(0.0 < fVar66))))
                       & CONCAT26(-(ushort)(fVar79 < fVar67),
                                  CONCAT24(-(ushort)(fVar78 < fVar67),
                                           CONCAT22(-(ushort)(fVar75 < fVar67),
                                                    -(ushort)(fVar66 < fVar67))));
              auVar68._0_8_ =
                   CONCAT35(0,CONCAT14((char)(uVar31 >> 0x10),(uint)((byte)uVar31 & 1)) &
                              0x1ffffffff);
              auVar68[8] = (byte)(uVar31 >> 0x20) & 1;
              auVar68._9_3_ = 0;
              auVar68[0xc] = (byte)(uVar31 >> 0x30) & 1;
              local_160[1] = (ulong)auVar68._8_5_;
              local_160[0] = auVar68._0_8_;
              if (uVar32 == 0) {
                uVar31 = 2;
                puVar56[1] = 0;
                if (param_1 != 0) goto LAB_001982d8;
LAB_00198620:
                fVar67 = *(float *)(param_7 + 0x1c);
                fVar63 = *(float *)(param_7 + 0x20);
                fVar64 = *(float *)(param_7 + 0x34);
                uVar30 = 0;
                do {
                  uVar48 = puVar56[uVar30 + 1];
                  uVar32 = uVar30 + 2;
                  if (uVar48 != 0) {
                    pfVar58 = (float *)(param_3 + (ulong)puVar56[uVar30] * 0x20);
                    fVar65 = *pfVar58;
                    fVar75 = pfVar58[1];
                    fVar78 = pfVar58[2];
                    fVar66 = pfVar58[3];
                    uVar34 = uVar48;
                    uVar30 = uVar32;
                    do {
                      uVar44 = (ulong)uVar30;
                      uVar30 = uVar30 + 1;
                      pfVar37 = (float *)(param_3 + (ulong)puVar56[uVar44] * 0x20);
                      fVar79 = fVar67 - fVar64 * ((fVar65 - *pfVar37) * (fVar65 - *pfVar37) +
                                                  (fVar75 - pfVar37[1]) * (fVar75 - pfVar37[1]) +
                                                 (fVar78 - pfVar37[2]) * (fVar78 - pfVar37[2]));
                      fVar79 = fVar79 * fVar79 * fVar63 * fVar79;
                      fVar66 = fVar66 + fVar79;
                      uVar34 = uVar34 - 1;
                      pfVar37[3] = pfVar37[3] + fVar79;
                    } while (uVar34 != 0);
                    pfVar58[3] = fVar66;
                    uVar32 = uVar32 + uVar48;
                  }
                  uVar30 = uVar32;
                } while (uVar30 < (uint)uVar31);
              }
              else {
                puVar42 = puVar33 + uVar32;
                uVar31 = 2;
                uVar48 = 0;
                do {
                  uVar34 = uVar48 + 4;
                  fVar66 = fVar63 - pfVar58[0xc];
                  lVar36 = (ulong)(uVar34 & 4) * 4;
                  fVar75 = fVar65 - (float)*(undefined8 *)(pfVar58 + 0x14);
                  fVar78 = fVar65 - (float)((ulong)*(undefined8 *)(pfVar58 + 0x14) >> 0x20);
                  fVar79 = fVar65 - (float)*(undefined8 *)(pfVar58 + 0x16);
                  fVar80 = fVar65 - (float)((ulong)*(undefined8 *)(pfVar58 + 0x16) >> 0x20);
                  uVar48 = uVar48 & 4;
                  fVar66 = fVar75 * fVar75 +
                           fVar66 * fVar66 + (fVar64 - pfVar58[0x10]) * (fVar64 - pfVar58[0x10]);
                  fVar75 = fVar78 * fVar78 +
                           (fVar63 - pfVar58[0xd]) * (fVar63 - pfVar58[0xd]) +
                           (fVar64 - pfVar58[0x11]) * (fVar64 - pfVar58[0x11]);
                  fVar78 = fVar79 * fVar79 +
                           (fVar63 - pfVar58[0xe]) * (fVar63 - pfVar58[0xe]) +
                           (fVar64 - pfVar58[0x12]) * (fVar64 - pfVar58[0x12]);
                  fVar79 = fVar80 * fVar80 +
                           (fVar63 - pfVar58[0xf]) * (fVar63 - pfVar58[0xf]) +
                           (fVar64 - pfVar58[0x13]) * (fVar64 - pfVar58[0x13]);
                  uVar44 = CONCAT26(-(ushort)(0.0 < fVar79),
                                    CONCAT24(-(ushort)(0.0 < fVar78),
                                             CONCAT22(-(ushort)(0.0 < fVar75),
                                                      -(ushort)(0.0 < fVar66)))) &
                           CONCAT26(-(ushort)(fVar79 < fVar67),
                                    CONCAT24(-(ushort)(fVar78 < fVar67),
                                             CONCAT22(-(ushort)(fVar75 < fVar67),
                                                      -(ushort)(fVar66 < fVar67))));
                  auVar69._0_8_ =
                       CONCAT35(0,CONCAT14((char)(uVar44 >> 0x10),(uint)((byte)uVar44 & 1)) &
                                  0x1ffffffff);
                  auVar69[8] = (byte)(uVar44 >> 0x20) & 1;
                  auVar69._9_3_ = 0;
                  auVar69[0xc] = (byte)(uVar44 >> 0x30) & 1;
                  *(ulong *)((long)local_160 + lVar36 + 8) = (ulong)auVar69._8_5_;
                  *(ulong *)((long)local_160 + lVar36) = auVar69._0_8_;
                  iVar13 = *(int *)((long)local_160 + (ulong)(uVar48 | 1) * 4);
                  iVar14 = *(int *)((long)local_160 + (ulong)(uVar48 | 2) * 4);
                  iVar12 = *(int *)((long)local_160 + (ulong)(uVar48 | 3) * 4);
                  uVar48 = *(int *)((long)local_160 + (ulong)uVar48 * 4) + (int)uVar31;
                  puVar56[uVar31] = *puVar33;
                  if (puVar33 + 1 < puVar42) {
                    uVar49 = puVar33[1];
                  }
                  else {
                    uVar49 = 0;
                  }
                  puVar56[uVar48] = uVar49;
                  uVar48 = uVar48 + iVar13;
                  if (puVar33 + 2 < puVar42) {
                    uVar49 = puVar33[2];
                  }
                  else {
                    uVar49 = 0;
                  }
                  puVar56[uVar48] = uVar49;
                  uVar48 = uVar48 + iVar14;
                  if (puVar33 + 3 < puVar42) {
                    uVar49 = puVar33[3];
                  }
                  else {
                    uVar49 = 0;
                  }
                  uVar11 = uVar48 + iVar12;
                  uVar31 = (ulong)uVar11;
                  puVar56[uVar48] = uVar49;
                  if (0x80 - uVar11 < 6) {
                    puVar56[1] = uVar11 - 2;
                    if (param_1 == 0) {
                      if (uVar11 != 0) {
                        fVar66 = *(float *)(param_7 + 0x1c);
                        fVar75 = *(float *)(param_7 + 0x20);
                        fVar78 = *(float *)(param_7 + 0x34);
                        uVar48 = 0;
                        do {
                          uVar52 = puVar56[uVar48 + 1];
                          uVar49 = uVar48 + 2;
                          if (uVar52 != 0) {
                            pfVar37 = (float *)(param_3 + (ulong)puVar56[uVar48] * 0x20);
                            fVar79 = *pfVar37;
                            fVar82 = pfVar37[1];
                            fVar84 = pfVar37[2];
                            fVar80 = pfVar37[3];
                            uVar45 = uVar52;
                            uVar48 = uVar49;
                            do {
                              uVar31 = (ulong)uVar48;
                              uVar48 = uVar48 + 1;
                              pfVar47 = (float *)(param_3 + (ulong)puVar56[uVar31] * 0x20);
                              fVar85 = fVar66 - fVar78 * ((fVar79 - *pfVar47) * (fVar79 - *pfVar47)
                                                          + (fVar82 - pfVar47[1]) *
                                                            (fVar82 - pfVar47[1]) +
                                                         (fVar84 - pfVar47[2]) *
                                                         (fVar84 - pfVar47[2]));
                              fVar85 = fVar85 * fVar85 * fVar75 * fVar85;
                              fVar80 = fVar80 + fVar85;
                              uVar45 = uVar45 - 1;
                              pfVar47[3] = pfVar47[3] + fVar85;
                            } while (uVar45 != 0);
                            pfVar37[3] = fVar80;
                            uVar49 = uVar49 + uVar52;
                          }
                          uVar48 = uVar49;
                        } while (uVar48 < uVar11);
                      }
                    }
                    else {
                      FUN_001a5720(param_2,param_2,param_3,param_3,puVar56,uVar31,param_7,&local_140
                                  );
                    }
                    uVar31 = 2;
                    *puVar56 = uVar30;
                  }
                  puVar33 = puVar33 + 4;
                  pfVar58 = pfVar58 + 0xc;
                  uVar48 = uVar34;
                } while (uVar34 < uVar32);
                puVar56[1] = (int)uVar31 - 2;
                if ((int)uVar31 != 0) {
                  if (param_1 == 0) goto LAB_00198620;
LAB_001982d8:
                  FUN_001a5720(param_2,param_2,param_3,param_3,puVar56,uVar31,param_7,&local_140);
                }
              }
            }
            uVar32 = (int)uVar54 + 1;
            uVar54 = (ulong)uVar32;
            uVar30 = *puVar57;
            iVar43 = iVar43 + -1;
          } while (uVar32 < uVar30);
        }
        lVar36 = *(long *)(param_8 + 0x10);
        if (local_1c8[0] == 0) {
LAB_00198740:
          uVar32 = 0;
        }
        else {
          uVar32 = *(uint *)(local_1c8[0] + 8);
          uVar48 = *(uint *)(local_1c8[0] + 0xc);
          uVar54 = (ulong)uVar48;
          uVar30 = uVar32 + uVar48;
          if (uVar30 <= uVar48) goto LAB_00198740;
          uVar31 = (ulong)(uVar30 - uVar48) & 3;
          if (((ulong)uVar30 - 1) - uVar54 < 3) {
            uVar44 = 0;
          }
          else {
            puVar41 = (undefined4 *)(lVar2 + uVar54 * 4);
            uVar44 = 0;
            do {
              *(undefined4 *)(lVar36 + (uVar44 & 0xffffffff) * 4) = puVar41[-2];
              iVar43 = (int)uVar44;
              *(undefined4 *)(lVar36 + (ulong)(iVar43 + 1) * 4) = puVar41[-1];
              *(undefined4 *)(lVar36 + (ulong)(iVar43 + 2) * 4) = *puVar41;
              puVar1 = puVar41 + 1;
              uVar44 = uVar44 + 4;
              puVar41 = puVar41 + 4;
              *(undefined4 *)(lVar36 + (ulong)(iVar43 + 3) * 4) = *puVar1;
            } while (uVar54 + (uVar31 - uVar30) + uVar44 != 0);
            uVar54 = uVar54 + uVar44;
          }
          if ((uVar30 - uVar48 & 3) != 0) {
            lVar50 = -uVar31;
            puVar41 = (undefined4 *)(param_5 + uVar54 * 4);
            do {
              lVar50 = lVar50 + 1;
              *(undefined4 *)(lVar36 + (uVar44 & 0xffffffff) * 4) = *puVar41;
              uVar44 = (ulong)((int)uVar44 + 1);
              puVar41 = puVar41 + 1;
            } while (lVar50 != 0);
          }
        }
        if (local_1c8[1] != 0) {
          iVar43 = *(int *)(local_1c8[1] + 8);
          uVar48 = *(uint *)(local_1c8[1] + 0xc);
          uVar54 = (ulong)uVar48;
          uVar30 = iVar43 + uVar48;
          if (uVar48 < uVar30) {
            uVar31 = ((ulong)uVar30 - 1) - uVar54;
            uVar34 = uVar32;
            if ((uVar30 - uVar48 & 3) != 0) {
              lVar50 = -((ulong)(uVar30 - uVar48) & 3);
              uVar48 = uVar32;
              do {
                uVar34 = uVar48 + 1;
                *(undefined4 *)(lVar36 + (ulong)uVar48 * 4) = *(undefined4 *)(param_5 + uVar54 * 4);
                uVar54 = uVar54 + 1;
                lVar50 = lVar50 + 1;
                uVar48 = uVar34;
              } while (lVar50 != 0);
            }
            if (2 < uVar31) {
              lVar50 = uVar30 - uVar54;
              puVar41 = (undefined4 *)(lVar2 + uVar54 * 4);
              do {
                *(undefined4 *)(lVar36 + (ulong)uVar34 * 4) = puVar41[-2];
                lVar50 = lVar50 + -4;
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 1) * 4) = puVar41[-1];
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 2) * 4) = *puVar41;
                puVar1 = puVar41 + 1;
                uVar30 = uVar34 + 3;
                uVar34 = uVar34 + 4;
                puVar41 = puVar41 + 4;
                *(undefined4 *)(lVar36 + (ulong)uVar30 * 4) = *puVar1;
              } while (lVar50 != 0);
            }
            uVar32 = uVar32 + iVar43;
          }
        }
        if (local_1c8[2] != 0) {
          iVar43 = *(int *)(local_1c8[2] + 8);
          uVar48 = *(uint *)(local_1c8[2] + 0xc);
          uVar54 = (ulong)uVar48;
          uVar30 = iVar43 + uVar48;
          if (uVar48 < uVar30) {
            uVar31 = ((ulong)uVar30 - 1) - uVar54;
            uVar34 = uVar32;
            if ((uVar30 - uVar48 & 3) != 0) {
              lVar50 = -((ulong)(uVar30 - uVar48) & 3);
              uVar48 = uVar32;
              do {
                uVar34 = uVar48 + 1;
                *(undefined4 *)(lVar36 + (ulong)uVar48 * 4) = *(undefined4 *)(param_5 + uVar54 * 4);
                uVar54 = uVar54 + 1;
                lVar50 = lVar50 + 1;
                uVar48 = uVar34;
              } while (lVar50 != 0);
            }
            if (2 < uVar31) {
              lVar50 = uVar30 - uVar54;
              puVar41 = (undefined4 *)(lVar2 + uVar54 * 4);
              do {
                *(undefined4 *)(lVar36 + (ulong)uVar34 * 4) = puVar41[-2];
                lVar50 = lVar50 + -4;
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 1) * 4) = puVar41[-1];
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 2) * 4) = *puVar41;
                puVar1 = puVar41 + 1;
                uVar30 = uVar34 + 3;
                uVar34 = uVar34 + 4;
                puVar41 = puVar41 + 4;
                *(undefined4 *)(lVar36 + (ulong)uVar30 * 4) = *puVar1;
              } while (lVar50 != 0);
            }
            uVar32 = uVar32 + iVar43;
          }
        }
        if (local_1c8[3] != 0) {
          iVar43 = *(int *)(local_1c8[3] + 8);
          uVar48 = *(uint *)(local_1c8[3] + 0xc);
          uVar54 = (ulong)uVar48;
          uVar30 = iVar43 + uVar48;
          if (uVar48 < uVar30) {
            uVar31 = ((ulong)uVar30 - 1) - uVar54;
            uVar34 = uVar32;
            if ((uVar30 - uVar48 & 3) != 0) {
              lVar50 = -((ulong)(uVar30 - uVar48) & 3);
              uVar48 = uVar32;
              do {
                uVar34 = uVar48 + 1;
                *(undefined4 *)(lVar36 + (ulong)uVar48 * 4) = *(undefined4 *)(param_5 + uVar54 * 4);
                uVar54 = uVar54 + 1;
                lVar50 = lVar50 + 1;
                uVar48 = uVar34;
              } while (lVar50 != 0);
            }
            if (2 < uVar31) {
              lVar50 = uVar30 - uVar54;
              puVar41 = (undefined4 *)(lVar2 + uVar54 * 4);
              do {
                *(undefined4 *)(lVar36 + (ulong)uVar34 * 4) = puVar41[-2];
                lVar50 = lVar50 + -4;
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 1) * 4) = puVar41[-1];
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 2) * 4) = *puVar41;
                puVar1 = puVar41 + 1;
                uVar30 = uVar34 + 3;
                uVar34 = uVar34 + 4;
                puVar41 = puVar41 + 4;
                *(undefined4 *)(lVar36 + (ulong)uVar30 * 4) = *puVar1;
              } while (lVar50 != 0);
            }
            uVar32 = uVar32 + iVar43;
          }
        }
        if (local_1c8[4] != 0) {
          iVar43 = *(int *)(local_1c8[4] + 8);
          uVar48 = *(uint *)(local_1c8[4] + 0xc);
          uVar54 = (ulong)uVar48;
          uVar30 = iVar43 + uVar48;
          if (uVar48 < uVar30) {
            uVar31 = ((ulong)uVar30 - 1) - uVar54;
            uVar34 = uVar32;
            if ((uVar30 - uVar48 & 3) != 0) {
              lVar50 = -((ulong)(uVar30 - uVar48) & 3);
              uVar48 = uVar32;
              do {
                uVar34 = uVar48 + 1;
                *(undefined4 *)(lVar36 + (ulong)uVar48 * 4) = *(undefined4 *)(param_5 + uVar54 * 4);
                uVar54 = uVar54 + 1;
                lVar50 = lVar50 + 1;
                uVar48 = uVar34;
              } while (lVar50 != 0);
            }
            if (2 < uVar31) {
              lVar50 = uVar30 - uVar54;
              puVar41 = (undefined4 *)(lVar2 + uVar54 * 4);
              do {
                *(undefined4 *)(lVar36 + (ulong)uVar34 * 4) = puVar41[-2];
                lVar50 = lVar50 + -4;
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 1) * 4) = puVar41[-1];
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 2) * 4) = *puVar41;
                puVar1 = puVar41 + 1;
                uVar30 = uVar34 + 3;
                uVar34 = uVar34 + 4;
                puVar41 = puVar41 + 4;
                *(undefined4 *)(lVar36 + (ulong)uVar30 * 4) = *puVar1;
              } while (lVar50 != 0);
            }
            uVar32 = uVar32 + iVar43;
          }
        }
        if (local_1c8[5] != 0) {
          iVar43 = *(int *)(local_1c8[5] + 8);
          uVar48 = *(uint *)(local_1c8[5] + 0xc);
          uVar54 = (ulong)uVar48;
          uVar30 = iVar43 + uVar48;
          if (uVar48 < uVar30) {
            uVar31 = ((ulong)uVar30 - 1) - uVar54;
            uVar34 = uVar32;
            if ((uVar30 - uVar48 & 3) != 0) {
              lVar50 = -((ulong)(uVar30 - uVar48) & 3);
              uVar48 = uVar32;
              do {
                uVar34 = uVar48 + 1;
                *(undefined4 *)(lVar36 + (ulong)uVar48 * 4) = *(undefined4 *)(param_5 + uVar54 * 4);
                uVar54 = uVar54 + 1;
                lVar50 = lVar50 + 1;
                uVar48 = uVar34;
              } while (lVar50 != 0);
            }
            if (2 < uVar31) {
              lVar50 = uVar30 - uVar54;
              puVar41 = (undefined4 *)(lVar2 + uVar54 * 4);
              do {
                *(undefined4 *)(lVar36 + (ulong)uVar34 * 4) = puVar41[-2];
                lVar50 = lVar50 + -4;
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 1) * 4) = puVar41[-1];
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 2) * 4) = *puVar41;
                puVar1 = puVar41 + 1;
                uVar30 = uVar34 + 3;
                uVar34 = uVar34 + 4;
                puVar41 = puVar41 + 4;
                *(undefined4 *)(lVar36 + (ulong)uVar30 * 4) = *puVar1;
              } while (lVar50 != 0);
            }
            uVar32 = uVar32 + iVar43;
          }
        }
        if (local_1c8[6] != 0) {
          iVar43 = *(int *)(local_1c8[6] + 8);
          uVar48 = *(uint *)(local_1c8[6] + 0xc);
          uVar54 = (ulong)uVar48;
          uVar30 = iVar43 + uVar48;
          if (uVar48 < uVar30) {
            uVar31 = ((ulong)uVar30 - 1) - uVar54;
            uVar34 = uVar32;
            if ((uVar30 - uVar48 & 3) != 0) {
              lVar50 = -((ulong)(uVar30 - uVar48) & 3);
              uVar48 = uVar32;
              do {
                uVar34 = uVar48 + 1;
                *(undefined4 *)(lVar36 + (ulong)uVar48 * 4) = *(undefined4 *)(param_5 + uVar54 * 4);
                uVar54 = uVar54 + 1;
                lVar50 = lVar50 + 1;
                uVar48 = uVar34;
              } while (lVar50 != 0);
            }
            if (2 < uVar31) {
              lVar50 = uVar30 - uVar54;
              puVar41 = (undefined4 *)(lVar2 + uVar54 * 4);
              do {
                *(undefined4 *)(lVar36 + (ulong)uVar34 * 4) = puVar41[-2];
                lVar50 = lVar50 + -4;
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 1) * 4) = puVar41[-1];
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 2) * 4) = *puVar41;
                puVar1 = puVar41 + 1;
                uVar30 = uVar34 + 3;
                uVar34 = uVar34 + 4;
                puVar41 = puVar41 + 4;
                *(undefined4 *)(lVar36 + (ulong)uVar30 * 4) = *puVar1;
              } while (lVar50 != 0);
            }
            uVar32 = uVar32 + iVar43;
          }
        }
        if (local_1c8[7] != 0) {
          iVar43 = *(int *)(local_1c8[7] + 8);
          uVar48 = *(uint *)(local_1c8[7] + 0xc);
          uVar54 = (ulong)uVar48;
          uVar30 = iVar43 + uVar48;
          if (uVar48 < uVar30) {
            uVar31 = ((ulong)uVar30 - 1) - uVar54;
            uVar34 = uVar32;
            if ((uVar30 - uVar48 & 3) != 0) {
              lVar50 = -((ulong)(uVar30 - uVar48) & 3);
              uVar48 = uVar32;
              do {
                uVar34 = uVar48 + 1;
                *(undefined4 *)(lVar36 + (ulong)uVar48 * 4) = *(undefined4 *)(param_5 + uVar54 * 4);
                uVar54 = uVar54 + 1;
                lVar50 = lVar50 + 1;
                uVar48 = uVar34;
              } while (lVar50 != 0);
            }
            if (2 < uVar31) {
              lVar50 = uVar30 - uVar54;
              puVar41 = (undefined4 *)(lVar2 + uVar54 * 4);
              do {
                *(undefined4 *)(lVar36 + (ulong)uVar34 * 4) = puVar41[-2];
                lVar50 = lVar50 + -4;
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 1) * 4) = puVar41[-1];
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 2) * 4) = *puVar41;
                puVar1 = puVar41 + 1;
                uVar30 = uVar34 + 3;
                uVar34 = uVar34 + 4;
                puVar41 = puVar41 + 4;
                *(undefined4 *)(lVar36 + (ulong)uVar30 * 4) = *puVar1;
              } while (lVar50 != 0);
            }
            uVar32 = uVar32 + iVar43;
          }
        }
        if (local_1c8[8] != 0) {
          iVar43 = *(int *)(local_1c8[8] + 8);
          uVar48 = *(uint *)(local_1c8[8] + 0xc);
          uVar54 = (ulong)uVar48;
          uVar30 = iVar43 + uVar48;
          if (uVar48 < uVar30) {
            uVar31 = ((ulong)uVar30 - 1) - uVar54;
            uVar34 = uVar32;
            if ((uVar30 - uVar48 & 3) != 0) {
              lVar50 = -((ulong)(uVar30 - uVar48) & 3);
              uVar48 = uVar32;
              do {
                uVar34 = uVar48 + 1;
                *(undefined4 *)(lVar36 + (ulong)uVar48 * 4) = *(undefined4 *)(param_5 + uVar54 * 4);
                uVar54 = uVar54 + 1;
                lVar50 = lVar50 + 1;
                uVar48 = uVar34;
              } while (lVar50 != 0);
            }
            if (2 < uVar31) {
              lVar50 = uVar30 - uVar54;
              puVar41 = (undefined4 *)(lVar2 + uVar54 * 4);
              do {
                *(undefined4 *)(lVar36 + (ulong)uVar34 * 4) = puVar41[-2];
                lVar50 = lVar50 + -4;
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 1) * 4) = puVar41[-1];
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 2) * 4) = *puVar41;
                puVar1 = puVar41 + 1;
                uVar30 = uVar34 + 3;
                uVar34 = uVar34 + 4;
                puVar41 = puVar41 + 4;
                *(undefined4 *)(lVar36 + (ulong)uVar30 * 4) = *puVar1;
              } while (lVar50 != 0);
            }
            uVar32 = uVar32 + iVar43;
          }
        }
        if (local_1c8[9] != 0) {
          iVar43 = *(int *)(local_1c8[9] + 8);
          uVar48 = *(uint *)(local_1c8[9] + 0xc);
          uVar54 = (ulong)uVar48;
          uVar30 = iVar43 + uVar48;
          if (uVar48 < uVar30) {
            uVar31 = ((ulong)uVar30 - 1) - uVar54;
            uVar34 = uVar32;
            if ((uVar30 - uVar48 & 3) != 0) {
              lVar50 = -((ulong)(uVar30 - uVar48) & 3);
              uVar48 = uVar32;
              do {
                uVar34 = uVar48 + 1;
                *(undefined4 *)(lVar36 + (ulong)uVar48 * 4) = *(undefined4 *)(param_5 + uVar54 * 4);
                uVar54 = uVar54 + 1;
                lVar50 = lVar50 + 1;
                uVar48 = uVar34;
              } while (lVar50 != 0);
            }
            if (2 < uVar31) {
              lVar50 = uVar30 - uVar54;
              puVar41 = (undefined4 *)(lVar2 + uVar54 * 4);
              do {
                *(undefined4 *)(lVar36 + (ulong)uVar34 * 4) = puVar41[-2];
                lVar50 = lVar50 + -4;
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 1) * 4) = puVar41[-1];
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 2) * 4) = *puVar41;
                puVar1 = puVar41 + 1;
                uVar30 = uVar34 + 3;
                uVar34 = uVar34 + 4;
                puVar41 = puVar41 + 4;
                *(undefined4 *)(lVar36 + (ulong)uVar30 * 4) = *puVar1;
              } while (lVar50 != 0);
            }
            uVar32 = uVar32 + iVar43;
          }
        }
        if (local_1c8[10] != 0) {
          iVar43 = *(int *)(local_1c8[10] + 8);
          uVar48 = *(uint *)(local_1c8[10] + 0xc);
          uVar54 = (ulong)uVar48;
          uVar30 = iVar43 + uVar48;
          if (uVar48 < uVar30) {
            uVar31 = ((ulong)uVar30 - 1) - uVar54;
            uVar34 = uVar32;
            if ((uVar30 - uVar48 & 3) != 0) {
              lVar50 = -((ulong)(uVar30 - uVar48) & 3);
              uVar48 = uVar32;
              do {
                uVar34 = uVar48 + 1;
                *(undefined4 *)(lVar36 + (ulong)uVar48 * 4) = *(undefined4 *)(param_5 + uVar54 * 4);
                uVar54 = uVar54 + 1;
                lVar50 = lVar50 + 1;
                uVar48 = uVar34;
              } while (lVar50 != 0);
            }
            if (2 < uVar31) {
              lVar50 = uVar30 - uVar54;
              puVar41 = (undefined4 *)(lVar2 + uVar54 * 4);
              do {
                *(undefined4 *)(lVar36 + (ulong)uVar34 * 4) = puVar41[-2];
                lVar50 = lVar50 + -4;
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 1) * 4) = puVar41[-1];
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 2) * 4) = *puVar41;
                puVar1 = puVar41 + 1;
                uVar30 = uVar34 + 3;
                uVar34 = uVar34 + 4;
                puVar41 = puVar41 + 4;
                *(undefined4 *)(lVar36 + (ulong)uVar30 * 4) = *puVar1;
              } while (lVar50 != 0);
            }
            uVar32 = uVar32 + iVar43;
          }
        }
        if (local_1c8[0xb] != 0) {
          iVar43 = *(int *)(local_1c8[0xb] + 8);
          uVar48 = *(uint *)(local_1c8[0xb] + 0xc);
          uVar54 = (ulong)uVar48;
          uVar30 = iVar43 + uVar48;
          if (uVar48 < uVar30) {
            uVar31 = ((ulong)uVar30 - 1) - uVar54;
            uVar34 = uVar32;
            if ((uVar30 - uVar48 & 3) != 0) {
              lVar50 = -((ulong)(uVar30 - uVar48) & 3);
              uVar48 = uVar32;
              do {
                uVar34 = uVar48 + 1;
                *(undefined4 *)(lVar36 + (ulong)uVar48 * 4) = *(undefined4 *)(param_5 + uVar54 * 4);
                uVar54 = uVar54 + 1;
                lVar50 = lVar50 + 1;
                uVar48 = uVar34;
              } while (lVar50 != 0);
            }
            if (2 < uVar31) {
              lVar50 = uVar30 - uVar54;
              puVar41 = (undefined4 *)(lVar2 + uVar54 * 4);
              do {
                *(undefined4 *)(lVar36 + (ulong)uVar34 * 4) = puVar41[-2];
                lVar50 = lVar50 + -4;
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 1) * 4) = puVar41[-1];
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 2) * 4) = *puVar41;
                puVar1 = puVar41 + 1;
                uVar30 = uVar34 + 3;
                uVar34 = uVar34 + 4;
                puVar41 = puVar41 + 4;
                *(undefined4 *)(lVar36 + (ulong)uVar30 * 4) = *puVar1;
              } while (lVar50 != 0);
            }
            uVar32 = uVar32 + iVar43;
          }
        }
        if (local_1c8[0xc] != 0) {
          iVar43 = *(int *)(local_1c8[0xc] + 8);
          uVar48 = *(uint *)(local_1c8[0xc] + 0xc);
          uVar54 = (ulong)uVar48;
          uVar30 = iVar43 + uVar48;
          if (uVar48 < uVar30) {
            uVar31 = ((ulong)uVar30 - 1) - uVar54;
            uVar34 = uVar32;
            if ((uVar30 - uVar48 & 3) != 0) {
              lVar50 = -((ulong)(uVar30 - uVar48) & 3);
              uVar48 = uVar32;
              do {
                uVar34 = uVar48 + 1;
                *(undefined4 *)(lVar36 + (ulong)uVar48 * 4) = *(undefined4 *)(param_5 + uVar54 * 4);
                uVar54 = uVar54 + 1;
                lVar50 = lVar50 + 1;
                uVar48 = uVar34;
              } while (lVar50 != 0);
            }
            if (2 < uVar31) {
              lVar50 = uVar30 - uVar54;
              puVar41 = (undefined4 *)(lVar2 + uVar54 * 4);
              do {
                *(undefined4 *)(lVar36 + (ulong)uVar34 * 4) = puVar41[-2];
                lVar50 = lVar50 + -4;
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 1) * 4) = puVar41[-1];
                *(undefined4 *)(lVar36 + (ulong)(uVar34 + 2) * 4) = *puVar41;
                puVar1 = puVar41 + 1;
                uVar30 = uVar34 + 3;
                uVar34 = uVar34 + 4;
                puVar41 = puVar41 + 4;
                *(undefined4 *)(lVar36 + (ulong)uVar30 * 4) = *puVar1;
              } while (lVar50 != 0);
            }
            uVar32 = uVar32 + iVar43;
          }
        }
        if (uVar32 != 0) {
          puVar33 = (uint *)(param_5 + (ulong)*(uint *)(psVar6 + 6) * 4);
          uVar30 = *puVar57;
          puVar57 = *(uint **)(param_8 + 0x10);
          if (uVar32 < 8) {
            uVar48 = uVar32 & 0xfffffffc;
            if (param_1 == 0) {
              if (uVar30 != 0) {
                fVar67 = *(float *)(param_7 + 0x10);
                fVar63 = *(float *)(param_7 + 0x34);
                fVar64 = *(float *)(param_7 + 0x1c);
                fVar65 = *(float *)(param_7 + 0x20);
                uVar54 = 0;
                do {
                  pfVar58 = (float *)(param_3 + (ulong)puVar33[uVar54] * 0x20);
                  if (uVar48 != 0) {
                    fVar66 = *pfVar58;
                    fVar75 = pfVar58[1];
                    fVar78 = pfVar58[2];
                    uVar31 = 0;
                    pfVar37 = pfVar58 + 3;
                    do {
                      puVar56 = puVar57 + uVar31;
                      pfVar47 = (float *)(param_3 + (ulong)puVar56[1] * 0x20);
                      pfVar5 = (float *)(param_3 + (ulong)*puVar56 * 0x20);
                      pfVar39 = (float *)(param_3 + (ulong)puVar56[2] * 0x20);
                      pfVar10 = (float *)(param_3 + (ulong)puVar56[3] * 0x20);
                      fVar84 = (fVar66 - *pfVar5) * (fVar66 - *pfVar5) +
                               (fVar75 - pfVar5[1]) * (fVar75 - pfVar5[1]) +
                               (fVar78 - pfVar5[2]) * (fVar78 - pfVar5[2]);
                      fVar82 = (fVar66 - *pfVar47) * (fVar66 - *pfVar47) +
                               (fVar75 - pfVar47[1]) * (fVar75 - pfVar47[1]) +
                               (fVar78 - pfVar47[2]) * (fVar78 - pfVar47[2]);
                      fVar80 = (fVar66 - *pfVar39) * (fVar66 - *pfVar39) +
                               (fVar75 - pfVar39[1]) * (fVar75 - pfVar39[1]) +
                               (fVar78 - pfVar39[2]) * (fVar78 - pfVar39[2]);
                      fVar79 = (fVar66 - *pfVar10) * (fVar66 - *pfVar10) +
                               (fVar75 - pfVar10[1]) * (fVar75 - pfVar10[1]) +
                               (fVar78 - pfVar10[2]) * (fVar78 - pfVar10[2]);
                      bVar26 = false;
                      bVar28 = false;
                      if (fVar67 - fVar79 < 0.0) {
                        bVar26 = false;
                        bVar28 = true;
                        if (!NAN(fVar67 - fVar80)) {
                          bVar26 = fVar67 - fVar80 < 0.0;
                          bVar28 = false;
                        }
                      }
                      bVar27 = false;
                      bVar29 = false;
                      if (bVar26 != bVar28) {
                        bVar27 = false;
                        bVar29 = true;
                        if (!NAN(fVar67 - fVar82)) {
                          bVar27 = fVar67 - fVar82 < 0.0;
                          bVar29 = false;
                        }
                      }
                      bVar26 = false;
                      bVar28 = false;
                      if (bVar27 != bVar29) {
                        bVar26 = false;
                        bVar28 = true;
                        if (!NAN(fVar67 - fVar84)) {
                          bVar26 = fVar67 - fVar84 < 0.0;
                          bVar28 = false;
                        }
                      }
                      fVar85 = 1.0;
                      if (bVar26 != bVar28) {
                        fVar85 = 0.0;
                      }
                      if (fVar85 != 0.0) {
                        if ((uint)fVar84 < (uint)fVar67 && fVar84 != 0.0) {
                          fVar84 = fVar64 - fVar63 * fVar84;
                          fVar84 = fVar84 * fVar84 * fVar65 * fVar84;
                          *pfVar37 = fVar84 + *pfVar37;
                          pfVar5[3] = fVar84 + pfVar5[3];
                          if ((uint)fVar82 < (uint)fVar67 && fVar82 != 0.0) goto LAB_00199fbc;
LAB_0019a148:
                          if ((uint)fVar67 <= (uint)fVar80 || fVar80 == 0.0) goto LAB_0019a158;
LAB_00199ff8:
                          fVar80 = fVar64 - fVar63 * fVar80;
                          fVar80 = fVar80 * fVar80 * fVar65 * fVar80;
                          *pfVar37 = fVar80 + *pfVar37;
                          pfVar39[3] = fVar80 + pfVar39[3];
                          if ((uint)fVar67 <= (uint)fVar79 || fVar79 == 0.0) goto LAB_0019a190;
                        }
                        else {
                          if ((uint)fVar67 <= (uint)fVar82 || fVar82 == 0.0) goto LAB_0019a148;
LAB_00199fbc:
                          fVar82 = fVar64 - fVar63 * fVar82;
                          fVar82 = fVar82 * fVar82 * fVar65 * fVar82;
                          *pfVar37 = fVar82 + *pfVar37;
                          pfVar47[3] = fVar82 + pfVar47[3];
                          if ((uint)fVar80 < (uint)fVar67 && fVar80 != 0.0) goto LAB_00199ff8;
LAB_0019a158:
                          if ((uint)fVar67 <= (uint)fVar79 || fVar79 == 0.0) goto LAB_0019a190;
                        }
                        fVar79 = fVar64 - fVar63 * fVar79;
                        fVar79 = fVar79 * fVar79 * fVar65 * fVar79;
                        *pfVar37 = fVar79 + *pfVar37;
                        pfVar10[3] = fVar79 + pfVar10[3];
                      }
LAB_0019a190:
                      uVar31 = uVar31 + 4;
                    } while (uVar31 < ((ulong)uVar32 & 0xfffffffc));
                  }
                  if (uVar48 < uVar32) {
                    fVar66 = *pfVar58;
                    fVar75 = pfVar58[1];
                    fVar78 = pfVar58[2];
                    puVar56 = puVar57 + ((ulong)uVar32 & 0xfffffffc);
                    lVar36 = (ulong)uVar32 - ((ulong)uVar32 & 0xfffffffc);
                    do {
                      pfVar37 = (float *)(param_3 + (ulong)*puVar56 * 0x20);
                      fVar79 = (fVar66 - *pfVar37) * (fVar66 - *pfVar37) +
                               (fVar75 - pfVar37[1]) * (fVar75 - pfVar37[1]) +
                               (fVar78 - pfVar37[2]) * (fVar78 - pfVar37[2]);
                      if ((uint)fVar79 < (uint)fVar67 && fVar79 != 0.0) {
                        fVar79 = fVar64 - fVar63 * fVar79;
                        fVar79 = fVar79 * fVar79 * fVar65 * fVar79;
                        pfVar58[3] = fVar79 + pfVar58[3];
                        pfVar37[3] = fVar79 + pfVar37[3];
                      }
                      lVar36 = lVar36 + -1;
                      puVar56 = puVar56 + 1;
                    } while (lVar36 != 0);
                  }
                  uVar54 = uVar54 + 1;
                } while (uVar54 != uVar30);
              }
            }
            else if (uVar30 != 0) {
              fVar67 = *(float *)(param_7 + 0x10);
              uVar54 = 0;
              do {
                uVar31 = (ulong)puVar33[uVar54];
                pfVar58 = (float *)(param_3 + uVar31 * 0x20);
                pfVar37 = (float *)(param_2 + uVar31 * 0xc);
                if (uVar48 != 0) {
                  fVar63 = *pfVar58;
                  pfVar47 = pfVar58 + 3;
                  pfVar5 = pfVar58 + 4;
                  pfVar39 = pfVar58 + 5;
                  pfVar10 = pfVar58 + 6;
                  fVar64 = pfVar58[1];
                  lVar36 = param_2 + uVar31 * 0xc;
                  fVar65 = pfVar58[2];
                  uVar44 = 0;
                  pfVar3 = (float *)(lVar36 + 4);
                  pfVar4 = (float *)(lVar36 + 8);
                  do {
                    puVar56 = puVar57 + uVar44;
                    uVar34 = *puVar56;
                    uVar11 = puVar56[1];
                    uVar49 = puVar56[2];
                    uVar52 = puVar56[3];
                    pfVar38 = (float *)(param_3 + (ulong)uVar34 * 0x20);
                    fVar91 = fVar63 - *pfVar38;
                    pfVar7 = (float *)(param_3 + (ulong)uVar11 * 0x20);
                    fVar87 = fVar64 - pfVar38[1];
                    fVar90 = fVar65 - pfVar38[2];
                    pfVar8 = (float *)(param_3 + (ulong)uVar49 * 0x20);
                    fVar88 = fVar64 - pfVar7[1];
                    fVar94 = fVar63 - *pfVar7;
                    fVar93 = fVar65 - pfVar7[2];
                    fVar84 = fVar64 - pfVar8[1];
                    fVar95 = fVar63 - *pfVar8;
                    pfVar9 = (float *)(param_3 + (ulong)uVar52 * 0x20);
                    fVar85 = fVar65 - pfVar8[2];
                    fVar78 = fVar64 - pfVar9[1];
                    fVar82 = fVar63 - *pfVar9;
                    fVar79 = fVar65 - pfVar9[2];
                    fVar66 = fVar91 * fVar91 + fVar87 * fVar87 + fVar90 * fVar90;
                    fVar92 = fVar94 * fVar94 + fVar88 * fVar88 + fVar93 * fVar93;
                    fVar89 = fVar95 * fVar95 + fVar84 * fVar84 + fVar85 * fVar85;
                    fVar80 = fVar82 * fVar82 + fVar78 * fVar78 + fVar79 * fVar79;
                    fVar75 = *(float *)(param_7 + 0x10);
                    bVar26 = false;
                    bVar28 = false;
                    if (fVar75 - fVar66 < 0.0) {
                      bVar26 = false;
                      bVar28 = true;
                      if (!NAN(fVar75 - fVar92)) {
                        bVar26 = fVar75 - fVar92 < 0.0;
                        bVar28 = false;
                      }
                    }
                    bVar27 = false;
                    bVar29 = false;
                    if (bVar26 != bVar28) {
                      bVar27 = false;
                      bVar29 = true;
                      if (!NAN(fVar75 - fVar89)) {
                        bVar27 = fVar75 - fVar89 < 0.0;
                        bVar29 = false;
                      }
                    }
                    bVar26 = false;
                    bVar28 = false;
                    if (bVar27 != bVar29) {
                      bVar26 = false;
                      bVar28 = true;
                      if (!NAN(fVar75 - fVar80)) {
                        bVar26 = fVar75 - fVar80 < 0.0;
                        bVar28 = false;
                      }
                    }
                    fVar75 = 1.0;
                    if (bVar26 != bVar28) {
                      fVar75 = 0.0;
                    }
                    if (fVar75 != 0.0) {
                      if ((uint)fVar66 < (uint)fVar67 && fVar66 != 0.0) {
                        fVar66 = fVar66 * *(float *)(param_7 + 0x34);
                        fVar75 = sqrtf(fVar66);
                        fVar83 = *(float *)(param_7 + 0x30);
                        fVar77 = *(float *)(param_7 + 0x18);
                        fVar96 = *pfVar47 - *(float *)(param_7 + 0x2c);
                        fVar81 = pfVar38[3] - *(float *)(param_7 + 0x2c);
                        fVar86 = 1.0 / pfVar38[3];
                        if (fVar96 <= 0.0) {
                          fVar96 = 0.0;
                        }
                        if (fVar81 <= 0.0) {
                          fVar81 = 0.0;
                        }
                        fVar66 = fVar66 * (1.0 / fVar75);
                        fVar75 = (fVar96 + fVar81) *
                                 *(float *)(param_7 + 0x24) *
                                 (fVar66 + ((1.0 / fVar75) * *(float *)(param_7 + 0x1c) -
                                           (fVar77 + fVar77)));
                        fVar66 = (fVar77 - fVar66) * *(float *)(param_7 + 0x28);
                        fVar77 = 1.0 / *pfVar47;
                        fVar91 = fVar83 * fVar91 * fVar75 + fVar66 * fVar83 * (pfVar38[4] - *pfVar5)
                        ;
                        fVar87 = fVar83 * fVar87 * fVar75 +
                                 fVar66 * fVar83 * (pfVar38[5] - *pfVar39);
                        fVar66 = fVar83 * fVar90 * fVar75 +
                                 fVar66 * fVar83 * (pfVar38[6] - *pfVar10);
                        pfVar38 = (float *)(param_2 + (ulong)uVar34 * 0xc);
                        *pfVar37 = fVar86 * fVar91 + *pfVar37;
                        *pfVar3 = fVar86 * fVar87 + *pfVar3;
                        *pfVar4 = fVar86 * fVar66 + *pfVar4;
                        *pfVar38 = *pfVar38 - fVar77 * fVar91;
                        pfVar38[1] = pfVar38[1] - fVar77 * fVar87;
                        pfVar38[2] = pfVar38[2] - fVar77 * fVar66;
                      }
                      if ((uint)fVar92 < (uint)fVar67 && fVar92 != 0.0) {
                        fVar92 = fVar92 * *(float *)(param_7 + 0x34);
                        fVar66 = sqrtf(fVar92);
                        fVar90 = *(float *)(param_7 + 0x30);
                        fVar75 = *(float *)(param_7 + 0x18);
                        fVar77 = *pfVar47 - *(float *)(param_7 + 0x2c);
                        fVar87 = pfVar7[3] - *(float *)(param_7 + 0x2c);
                        fVar91 = 1.0 / pfVar7[3];
                        if (fVar77 <= 0.0) {
                          fVar77 = 0.0;
                        }
                        if (fVar87 <= 0.0) {
                          fVar87 = 0.0;
                        }
                        fVar92 = fVar92 * (1.0 / fVar66);
                        fVar81 = (fVar75 - fVar92) * *(float *)(param_7 + 0x28);
                        fVar66 = (fVar77 + fVar87) *
                                 *(float *)(param_7 + 0x24) *
                                 (fVar92 + ((1.0 / fVar66) * *(float *)(param_7 + 0x1c) -
                                           (fVar75 + fVar75)));
                        fVar75 = 1.0 / *pfVar47;
                        fVar87 = fVar90 * fVar94 * fVar66 + fVar81 * fVar90 * (pfVar7[4] - *pfVar5);
                        fVar92 = fVar90 * fVar88 * fVar66 + fVar81 * fVar90 * (pfVar7[5] - *pfVar39)
                        ;
                        fVar66 = fVar90 * fVar93 * fVar66 + fVar81 * fVar90 * (pfVar7[6] - *pfVar10)
                        ;
                        pfVar38 = (float *)(param_2 + (ulong)uVar11 * 0xc);
                        *pfVar37 = fVar91 * fVar87 + *pfVar37;
                        *pfVar3 = fVar91 * fVar92 + *pfVar3;
                        *pfVar4 = fVar91 * fVar66 + *pfVar4;
                        *pfVar38 = *pfVar38 - fVar75 * fVar87;
                        pfVar38[1] = pfVar38[1] - fVar75 * fVar92;
                        pfVar38[2] = pfVar38[2] - fVar75 * fVar66;
                      }
                      if ((uint)fVar89 < (uint)fVar67 && fVar89 != 0.0) {
                        fVar89 = fVar89 * *(float *)(param_7 + 0x34);
                        fVar66 = sqrtf(fVar89);
                        fVar92 = *(float *)(param_7 + 0x30);
                        fVar75 = *(float *)(param_7 + 0x18);
                        fVar90 = *pfVar47 - *(float *)(param_7 + 0x2c);
                        fVar87 = pfVar8[3] - *(float *)(param_7 + 0x2c);
                        fVar88 = 1.0 / pfVar8[3];
                        if (fVar90 <= 0.0) {
                          fVar90 = 0.0;
                        }
                        if (fVar87 <= 0.0) {
                          fVar87 = 0.0;
                        }
                        fVar89 = fVar89 * (1.0 / fVar66);
                        fVar91 = (fVar75 - fVar89) * *(float *)(param_7 + 0x28);
                        fVar66 = (fVar90 + fVar87) *
                                 *(float *)(param_7 + 0x24) *
                                 (fVar89 + ((1.0 / fVar66) * *(float *)(param_7 + 0x1c) -
                                           (fVar75 + fVar75)));
                        fVar75 = 1.0 / *pfVar47;
                        fVar87 = fVar92 * fVar95 * fVar66 + fVar91 * fVar92 * (pfVar8[4] - *pfVar5);
                        fVar84 = fVar92 * fVar84 * fVar66 + fVar91 * fVar92 * (pfVar8[5] - *pfVar39)
                        ;
                        fVar66 = fVar92 * fVar85 * fVar66 + fVar91 * fVar92 * (pfVar8[6] - *pfVar10)
                        ;
                        pfVar38 = (float *)(param_2 + (ulong)uVar49 * 0xc);
                        *pfVar37 = fVar88 * fVar87 + *pfVar37;
                        *pfVar3 = fVar88 * fVar84 + *pfVar3;
                        *pfVar4 = fVar88 * fVar66 + *pfVar4;
                        *pfVar38 = *pfVar38 - fVar75 * fVar87;
                        pfVar38[1] = pfVar38[1] - fVar75 * fVar84;
                        pfVar38[2] = pfVar38[2] - fVar75 * fVar66;
                      }
                      if ((uint)fVar80 < (uint)fVar67 && fVar80 != 0.0) {
                        fVar80 = fVar80 * *(float *)(param_7 + 0x34);
                        fVar66 = sqrtf(fVar80);
                        fVar85 = *(float *)(param_7 + 0x30);
                        fVar75 = *(float *)(param_7 + 0x18);
                        fVar92 = *pfVar47 - *(float *)(param_7 + 0x2c);
                        fVar84 = pfVar9[3] - *(float *)(param_7 + 0x2c);
                        fVar87 = 1.0 / pfVar9[3];
                        if (fVar92 <= 0.0) {
                          fVar92 = 0.0;
                        }
                        if (fVar84 <= 0.0) {
                          fVar84 = 0.0;
                        }
                        fVar80 = fVar80 * (1.0 / fVar66);
                        fVar89 = (fVar75 - fVar80) * *(float *)(param_7 + 0x28);
                        fVar66 = (fVar92 + fVar84) *
                                 *(float *)(param_7 + 0x24) *
                                 (fVar80 + ((1.0 / fVar66) * *(float *)(param_7 + 0x1c) -
                                           (fVar75 + fVar75)));
                        fVar75 = 1.0 / *pfVar47;
                        fVar80 = fVar85 * fVar82 * fVar66 + fVar89 * fVar85 * (pfVar9[4] - *pfVar5);
                        fVar78 = fVar85 * fVar78 * fVar66 + fVar89 * fVar85 * (pfVar9[5] - *pfVar39)
                        ;
                        fVar66 = fVar85 * fVar79 * fVar66 + fVar89 * fVar85 * (pfVar9[6] - *pfVar10)
                        ;
                        pfVar38 = (float *)(param_2 + (ulong)uVar52 * 0xc);
                        *pfVar37 = fVar87 * fVar80 + *pfVar37;
                        *pfVar3 = fVar87 * fVar78 + *pfVar3;
                        *pfVar4 = fVar87 * fVar66 + *pfVar4;
                        *pfVar38 = *pfVar38 - fVar75 * fVar80;
                        pfVar38[1] = pfVar38[1] - fVar75 * fVar78;
                        pfVar38[2] = pfVar38[2] - fVar75 * fVar66;
                      }
                    }
                    uVar44 = uVar44 + 4;
                  } while (uVar44 < ((ulong)uVar32 & 0xfffffffc));
                }
                if (uVar48 < uVar32) {
                  fVar63 = *pfVar58;
                  fVar64 = pfVar58[1];
                  lVar36 = param_2 + uVar31 * 0xc;
                  fVar65 = pfVar58[2];
                  pfVar47 = (float *)(lVar36 + 4);
                  pfVar5 = (float *)(lVar36 + 8);
                  puVar56 = puVar57 + ((ulong)uVar32 & 0xfffffffc);
                  lVar36 = (ulong)uVar32 - ((ulong)uVar32 & 0xfffffffc);
                  do {
                    uVar34 = *puVar56;
                    pfVar39 = (float *)(param_3 + (ulong)uVar34 * 0x20);
                    fVar75 = fVar64 - pfVar39[1];
                    fVar79 = fVar63 - *pfVar39;
                    fVar78 = fVar65 - pfVar39[2];
                    fVar66 = fVar79 * fVar79 + fVar75 * fVar75 + fVar78 * fVar78;
                    if ((uint)fVar66 < (uint)fVar67 && fVar66 != 0.0) {
                      fVar66 = fVar66 * *(float *)(param_7 + 0x34);
                      fVar80 = sqrtf(fVar66);
                      fVar85 = *(float *)(param_7 + 0x30);
                      fVar82 = *(float *)(param_7 + 0x18);
                      fVar92 = pfVar58[3] - *(float *)(param_7 + 0x2c);
                      fVar84 = pfVar39[3] - *(float *)(param_7 + 0x2c);
                      fVar87 = 1.0 / pfVar39[3];
                      if (fVar92 <= 0.0) {
                        fVar92 = 0.0;
                      }
                      if (fVar84 <= 0.0) {
                        fVar84 = 0.0;
                      }
                      fVar66 = fVar66 * (1.0 / fVar80);
                      fVar89 = (fVar82 - fVar66) * *(float *)(param_7 + 0x28);
                      fVar66 = (fVar92 + fVar84) *
                               *(float *)(param_7 + 0x24) *
                               (fVar66 + ((1.0 / fVar80) * *(float *)(param_7 + 0x1c) -
                                         (fVar82 + fVar82)));
                      fVar80 = 1.0 / pfVar58[3];
                      fVar79 = fVar85 * fVar79 * fVar66 +
                               fVar89 * fVar85 * (pfVar39[4] - pfVar58[4]);
                      fVar75 = fVar85 * fVar75 * fVar66 +
                               fVar89 * fVar85 * (pfVar39[5] - pfVar58[5]);
                      fVar66 = fVar85 * fVar78 * fVar66 +
                               fVar89 * fVar85 * (pfVar39[6] - pfVar58[6]);
                      *pfVar37 = fVar87 * fVar79 + *pfVar37;
                      *pfVar47 = fVar87 * fVar75 + *pfVar47;
                      pfVar39 = (float *)(param_2 + (ulong)uVar34 * 0xc);
                      *pfVar5 = fVar87 * fVar66 + *pfVar5;
                      pfVar39[1] = pfVar39[1] - fVar80 * fVar75;
                      *pfVar39 = *pfVar39 - fVar80 * fVar79;
                      pfVar39[2] = pfVar39[2] - fVar80 * fVar66;
                    }
                    lVar36 = lVar36 + -1;
                    puVar56 = puVar56 + 1;
                  } while (lVar36 != 0);
                }
                uVar54 = uVar54 + 1;
              } while (uVar54 != uVar30);
            }
          }
          else {
            pfVar58 = *(float **)(param_8 + 0x38);
            puVar56 = *(uint **)(param_8 + 0x40);
            uVar48 = uVar32 + 7 & 0xfffffffc;
            local_b0[0] = 3.4028235e+38;
            local_b0[1] = 3.4028235e+38;
            local_b0[2] = 3.4028235e+38;
            local_b0[3] = 3.4028235e+38;
            if (uVar48 != 0) {
              uVar34 = 0;
              puVar42 = puVar57 + 2;
              pfVar37 = pfVar58 + 8;
              do {
                if (uVar34 < uVar32) {
                  pfVar47 = (float *)(param_3 + (ulong)puVar42[-2] * 0x20);
                  if (uVar32 <= uVar34 + 1) goto LAB_00199af4;
LAB_00199b2c:
                  pauVar51 = (undefined1 (*) [16])(param_3 + (ulong)puVar42[-1] * 0x20);
                  if (uVar34 + 2 < uVar32) goto LAB_00199b40;
LAB_00199b04:
                  pauVar53 = (undefined1 (*) [12])local_b0;
                  if (uVar32 <= uVar34 + 3) goto LAB_00199b14;
LAB_00199b54:
                  pauVar55 = (undefined1 (*) [12])(param_3 + (ulong)puVar42[1] * 0x20);
                }
                else {
                  pfVar47 = local_b0;
                  if (uVar34 + 1 < uVar32) goto LAB_00199b2c;
LAB_00199af4:
                  pauVar51 = (undefined1 (*) [16])local_b0;
                  if (uVar32 <= uVar34 + 2) goto LAB_00199b04;
LAB_00199b40:
                  pauVar53 = (undefined1 (*) [12])(param_3 + (ulong)*puVar42 * 0x20);
                  if (uVar34 + 3 < uVar32) goto LAB_00199b54;
LAB_00199b14:
                  pauVar55 = (undefined1 (*) [12])local_b0;
                }
                fVar67 = *pfVar47;
                fVar63 = pfVar47[2];
                auVar24 = *pauVar53;
                fVar65 = SUB124(*pauVar53,0);
                uVar61 = SUB124(*pauVar53,4);
                auVar72 = *pauVar51;
                auVar25 = *pauVar55;
                fVar64 = auVar72._0_4_;
                fVar66 = SUB124(*pauVar55,0);
                uVar62 = SUB124(*pauVar55,4);
                auVar19._4_4_ = fVar65;
                auVar19._0_4_ = fVar67;
                auVar19._8_4_ = pfVar47[1];
                auVar19._12_4_ = uVar61;
                auVar20._4_4_ = fVar65;
                auVar20._0_4_ = fVar67;
                auVar20._8_4_ = pfVar47[1];
                auVar20._12_4_ = uVar61;
                auVar73 = NEON_ext(auVar19,auVar20,8,1);
                auVar21._4_4_ = fVar66;
                auVar21._0_4_ = fVar64;
                auVar21._8_4_ = auVar72._4_4_;
                auVar21._12_4_ = uVar62;
                auVar22._4_4_ = fVar66;
                auVar22._0_4_ = fVar64;
                auVar22._8_4_ = auVar72._4_4_;
                auVar22._12_4_ = uVar62;
                auVar76 = NEON_ext(auVar21,auVar22,8,1);
                uVar34 = uVar34 + 4;
                pfVar37[-8] = fVar67;
                pfVar37[-7] = fVar64;
                pfVar37[-6] = fVar65;
                pfVar37[-5] = fVar66;
                puVar42 = puVar42 + 4;
                pfVar37[-4] = auVar73._0_4_;
                pfVar37[-3] = auVar76._0_4_;
                pfVar37[-2] = auVar73._4_4_;
                pfVar37[-1] = auVar76._4_4_;
                *pfVar37 = fVar63;
                pfVar37[1] = auVar72._8_4_;
                pfVar37[2] = auVar24._8_4_;
                pfVar37[3] = auVar25._8_4_;
                pfVar37 = pfVar37 + 0xc;
              } while (uVar34 < uVar48);
            }
            uStack_138 = *(undefined4 *)(param_7 + 0x30);
            uStack_134 = uStack_138;
            local_140 = uStack_138;
            uStack_13c = uStack_138;
            uStack_128 = *(undefined4 *)(param_7 + 0x34);
            uStack_124 = uStack_128;
            local_130 = uStack_128;
            uStack_12c = uStack_128;
            uStack_118 = *(undefined4 *)(param_7 + 0x18);
            uStack_114 = uStack_118;
            local_120 = uStack_118;
            uStack_11c = uStack_118;
            uStack_108 = *(undefined4 *)(param_7 + 0x1c);
            uStack_104 = uStack_108;
            local_110 = uStack_108;
            uStack_10c = uStack_108;
            uStack_f8 = *(undefined4 *)(param_7 + 0x20);
            uStack_f4 = uStack_f8;
            local_100 = uStack_f8;
            uStack_fc = uStack_f8;
            uStack_e8 = *(undefined4 *)(param_7 + 0x24);
            uStack_e4 = uStack_e8;
            local_f0 = uStack_e8;
            uStack_ec = uStack_e8;
            uStack_d8 = *(undefined4 *)(param_7 + 0x28);
            uStack_d4 = uStack_d8;
            local_e0 = uStack_d8;
            uStack_dc = uStack_d8;
            uVar61 = *(undefined4 *)(param_7 + 0x2c);
            auVar74._0_8_ = CONCAT44(uVar61,uVar61);
            auVar74._8_4_ = uVar61;
            auVar74._12_4_ = uVar61;
            uStack_c8 = auVar74._8_8_;
            local_d0 = auVar74._0_8_;
            if (uVar30 != 0) {
              puVar42 = puVar57 + uVar32;
              fVar67 = *(float *)(param_7 + 0x10);
              uVar54 = 0;
              uVar48 = 0;
              do {
                uVar49 = *puVar33;
                puVar56[uVar54] = uVar49;
                pfVar37 = (float *)(param_3 + (ulong)uVar49 * 0x20);
                fVar63 = *pfVar37;
                fVar64 = pfVar37[1];
                fVar65 = pfVar37[2];
                fVar80 = fVar64 - (float)*(undefined8 *)(pfVar58 + 4);
                fVar82 = fVar64 - (float)((ulong)*(undefined8 *)(pfVar58 + 4) >> 0x20);
                fVar84 = fVar64 - (float)*(undefined8 *)(pfVar58 + 6);
                fVar85 = fVar64 - (float)((ulong)*(undefined8 *)(pfVar58 + 6) >> 0x20);
                fVar66 = fVar65 - (float)*(undefined8 *)(pfVar58 + 8);
                fVar75 = fVar65 - (float)((ulong)*(undefined8 *)(pfVar58 + 8) >> 0x20);
                fVar78 = fVar65 - (float)*(undefined8 *)(pfVar58 + 10);
                fVar79 = fVar65 - (float)((ulong)*(undefined8 *)(pfVar58 + 10) >> 0x20);
                puVar40 = puVar56 + ((int)uVar54 + 1);
                uVar54 = (ulong)((int)uVar54 + 2);
                fVar66 = fVar66 * fVar66 +
                         (fVar63 - *pfVar58) * (fVar63 - *pfVar58) + fVar80 * fVar80;
                fVar75 = fVar75 * fVar75 +
                         (fVar63 - pfVar58[1]) * (fVar63 - pfVar58[1]) + fVar82 * fVar82;
                fVar78 = fVar78 * fVar78 +
                         (fVar63 - pfVar58[2]) * (fVar63 - pfVar58[2]) + fVar84 * fVar84;
                fVar79 = fVar79 * fVar79 +
                         (fVar63 - pfVar58[3]) * (fVar63 - pfVar58[3]) + fVar85 * fVar85;
                uVar31 = CONCAT26(-(ushort)(0.0 < fVar79),
                                  CONCAT24(-(ushort)(0.0 < fVar78),
                                           CONCAT22(-(ushort)(0.0 < fVar75),-(ushort)(0.0 < fVar66))
                                          )) &
                         CONCAT26(-(ushort)(fVar79 < fVar67),
                                  CONCAT24(-(ushort)(fVar78 < fVar67),
                                           CONCAT22(-(ushort)(fVar75 < fVar67),
                                                    -(ushort)(fVar66 < fVar67))));
                auVar70._0_8_ =
                     CONCAT35(0,CONCAT14((char)(uVar31 >> 0x10),(uint)((byte)uVar31 & 1)) &
                                0x1ffffffff);
                auVar70[8] = (byte)(uVar31 >> 0x20) & 1;
                auVar70._9_3_ = 0;
                auVar70[0xc] = (byte)(uVar31 >> 0x30) & 1;
                local_160[1] = (ulong)auVar70._8_5_;
                local_160[0] = auVar70._0_8_;
                uVar31 = uVar54;
                pfVar37 = pfVar58;
                puVar60 = puVar57;
                uVar34 = 0;
                do {
                  uVar11 = uVar34 + 4;
                  fVar66 = fVar63 - pfVar37[0xc];
                  lVar36 = (ulong)(uVar11 & 4) * 4;
                  fVar75 = fVar65 - (float)*(undefined8 *)(pfVar37 + 0x14);
                  fVar78 = fVar65 - (float)((ulong)*(undefined8 *)(pfVar37 + 0x14) >> 0x20);
                  fVar79 = fVar65 - (float)*(undefined8 *)(pfVar37 + 0x16);
                  fVar80 = fVar65 - (float)((ulong)*(undefined8 *)(pfVar37 + 0x16) >> 0x20);
                  uVar34 = uVar34 & 4;
                  fVar66 = fVar75 * fVar75 +
                           fVar66 * fVar66 + (fVar64 - pfVar37[0x10]) * (fVar64 - pfVar37[0x10]);
                  fVar75 = fVar78 * fVar78 +
                           (fVar63 - pfVar37[0xd]) * (fVar63 - pfVar37[0xd]) +
                           (fVar64 - pfVar37[0x11]) * (fVar64 - pfVar37[0x11]);
                  fVar78 = fVar79 * fVar79 +
                           (fVar63 - pfVar37[0xe]) * (fVar63 - pfVar37[0xe]) +
                           (fVar64 - pfVar37[0x12]) * (fVar64 - pfVar37[0x12]);
                  fVar79 = fVar80 * fVar80 +
                           (fVar63 - pfVar37[0xf]) * (fVar63 - pfVar37[0xf]) +
                           (fVar64 - pfVar37[0x13]) * (fVar64 - pfVar37[0x13]);
                  uVar44 = CONCAT26(-(ushort)(0.0 < fVar79),
                                    CONCAT24(-(ushort)(0.0 < fVar78),
                                             CONCAT22(-(ushort)(0.0 < fVar75),
                                                      -(ushort)(0.0 < fVar66)))) &
                           CONCAT26(-(ushort)(fVar79 < fVar67),
                                    CONCAT24(-(ushort)(fVar78 < fVar67),
                                             CONCAT22(-(ushort)(fVar75 < fVar67),
                                                      -(ushort)(fVar66 < fVar67))));
                  auVar71._0_8_ =
                       CONCAT35(0,CONCAT14((char)(uVar44 >> 0x10),(uint)((byte)uVar44 & 1)) &
                                  0x1ffffffff);
                  auVar71[8] = (byte)(uVar44 >> 0x20) & 1;
                  auVar71._9_3_ = 0;
                  auVar71[0xc] = (byte)(uVar44 >> 0x30) & 1;
                  *(ulong *)((long)local_160 + lVar36 + 8) = (ulong)auVar71._8_5_;
                  *(ulong *)((long)local_160 + lVar36) = auVar71._0_8_;
                  iVar43 = *(int *)((long)local_160 + (ulong)(uVar34 | 1) * 4);
                  iVar13 = *(int *)((long)local_160 + (ulong)(uVar34 | 2) * 4);
                  iVar14 = *(int *)((long)local_160 + (ulong)(uVar34 | 3) * 4);
                  uVar34 = *(int *)((long)local_160 + (ulong)uVar34 * 4) + (int)uVar54;
                  puVar56[uVar54] = *puVar60;
                  if (puVar60 + 1 < puVar42) {
                    uVar52 = puVar60[1];
                  }
                  else {
                    uVar52 = 0;
                  }
                  puVar56[uVar34] = uVar52;
                  uVar34 = uVar34 + iVar43;
                  if (puVar60 + 2 < puVar42) {
                    uVar52 = puVar60[2];
                  }
                  else {
                    uVar52 = 0;
                  }
                  puVar56[uVar34] = uVar52;
                  uVar34 = uVar34 + iVar13;
                  if (puVar60 + 3 < puVar42) {
                    uVar52 = puVar60[3];
                  }
                  else {
                    uVar52 = 0;
                  }
                  uVar45 = uVar34 + iVar14;
                  uVar54 = (ulong)uVar45;
                  puVar56[uVar34] = uVar52;
                  if (0x80 - uVar45 < 6) {
                    *puVar40 = uVar45 - (int)uVar31;
                    if (param_1 == 0) {
                      if (uVar45 != 0) {
                        fVar66 = *(float *)(param_7 + 0x1c);
                        fVar75 = *(float *)(param_7 + 0x20);
                        fVar78 = *(float *)(param_7 + 0x34);
                        uVar34 = 0;
                        do {
                          uVar15 = puVar56[uVar34 + 1];
                          uVar52 = uVar34 + 2;
                          if (uVar15 != 0) {
                            pfVar47 = (float *)(param_3 + (ulong)puVar56[uVar34] * 0x20);
                            fVar79 = *pfVar47;
                            fVar82 = pfVar47[1];
                            fVar84 = pfVar47[2];
                            fVar80 = pfVar47[3];
                            uVar46 = uVar15;
                            uVar34 = uVar52;
                            do {
                              uVar54 = (ulong)uVar34;
                              uVar34 = uVar34 + 1;
                              pfVar5 = (float *)(param_3 + (ulong)puVar56[uVar54] * 0x20);
                              fVar85 = fVar66 - fVar78 * ((fVar79 - *pfVar5) * (fVar79 - *pfVar5) +
                                                          (fVar82 - pfVar5[1]) *
                                                          (fVar82 - pfVar5[1]) +
                                                         (fVar84 - pfVar5[2]) * (fVar84 - pfVar5[2])
                                                         );
                              fVar85 = fVar85 * fVar85 * fVar75 * fVar85;
                              fVar80 = fVar80 + fVar85;
                              uVar46 = uVar46 - 1;
                              pfVar5[3] = pfVar5[3] + fVar85;
                            } while (uVar46 != 0);
                            pfVar47[3] = fVar80;
                            uVar52 = uVar52 + uVar15;
                          }
                          uVar34 = uVar52;
                        } while (uVar34 < uVar45);
                      }
                    }
                    else {
                      FUN_001a5720(param_2,param_2,param_3,param_3,puVar56,uVar54,param_7,&local_140
                                  );
                    }
                    uVar31 = 2;
                    uVar54 = 2;
                    *puVar56 = uVar49;
                    puVar40 = puVar56 + 1;
                  }
                  puVar60 = puVar60 + 4;
                  pfVar37 = pfVar37 + 0xc;
                  uVar34 = uVar11;
                } while (uVar11 < uVar32);
                uVar34 = (uint)uVar54;
                *puVar40 = uVar34 - (int)uVar31;
                uVar48 = uVar48 + 1;
                puVar33 = puVar33 + 1;
              } while (uVar48 != uVar30);
              if (uVar34 != 0) {
                if (param_1 == 0) {
                  fVar67 = *(float *)(param_7 + 0x1c);
                  fVar63 = *(float *)(param_7 + 0x20);
                  fVar64 = *(float *)(param_7 + 0x34);
                  uVar30 = 0;
                  do {
                    uVar48 = puVar56[uVar30 + 1];
                    uVar32 = uVar30 + 2;
                    if (uVar48 != 0) {
                      pfVar58 = (float *)(param_3 + (ulong)puVar56[uVar30] * 0x20);
                      fVar65 = *pfVar58;
                      fVar75 = pfVar58[1];
                      fVar78 = pfVar58[2];
                      fVar66 = pfVar58[3];
                      uVar49 = uVar48;
                      uVar30 = uVar32;
                      do {
                        uVar54 = (ulong)uVar30;
                        uVar30 = uVar30 + 1;
                        pfVar37 = (float *)(param_3 + (ulong)puVar56[uVar54] * 0x20);
                        fVar79 = fVar67 - fVar64 * ((fVar65 - *pfVar37) * (fVar65 - *pfVar37) +
                                                    (fVar75 - pfVar37[1]) * (fVar75 - pfVar37[1]) +
                                                   (fVar78 - pfVar37[2]) * (fVar78 - pfVar37[2]));
                        fVar79 = fVar79 * fVar79 * fVar63 * fVar79;
                        fVar66 = fVar66 + fVar79;
                        uVar49 = uVar49 - 1;
                        pfVar37[3] = pfVar37[3] + fVar79;
                      } while (uVar49 != 0);
                      pfVar58[3] = fVar66;
                      uVar32 = uVar32 + uVar48;
                    }
                    uVar30 = uVar32;
                  } while (uVar30 < uVar34);
                }
                else {
                  FUN_001a5720(param_2,param_2,param_3,param_3,puVar56,uVar54,param_7,&local_140);
                }
              }
            }
          }
        }
      }
      uVar35 = uVar35 + 1;
    } while (uVar35 != param_6);
  }
  return;
}


