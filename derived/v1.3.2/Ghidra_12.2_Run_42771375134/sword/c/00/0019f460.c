/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0019f460; name: FUN_0019f460
 */


void FUN_0019f460(undefined4 *param_1,int param_2,long param_3,long param_4,long param_5,
                 long param_6,long param_7,long param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  int iVar26;
  uint uVar27;
  long lVar28;
  uint *puVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  long lVar33;
  ulong uVar34;
  float *pfVar35;
  long lVar36;
  float *pfVar37;
  float *pfVar38;
  uint *puVar39;
  uint *puVar40;
  long lVar41;
  uint *puVar42;
  float *pfVar43;
  uint uVar44;
  uint uVar45;
  undefined4 *puVar46;
  ulong uVar47;
  long lVar48;
  ulong uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  undefined4 *puVar53;
  float *pfVar54;
  uint uVar55;
  uint uVar56;
  undefined1 (*pauVar57) [16];
  undefined1 (*pauVar58) [12];
  undefined *puVar59;
  undefined1 (*pauVar60) [12];
  ulong uVar61;
  ulong uVar62;
  uint *puVar63;
  uint *puVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar72 [13];
  undefined1 auVar76 [13];
  undefined1 auVar77 [13];
  undefined1 auVar78 [16];
  undefined1 auVar73 [13];
  undefined1 auVar79 [16];
  undefined1 auVar74 [13];
  undefined1 auVar75 [13];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar82;
  float fVar83;
  float fVar84;
  undefined1 auVar85 [16];
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
  float fVar103;
  float fVar104;
  float *local_288;
  float *local_1b0;
  float *local_1a8;
  float *local_1a0;
  float *local_198;
  float *local_190;
  float *local_188;
  float *local_180;
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
  
  uVar44 = *(uint *)(param_5 + 8);
  uVar47 = (ulong)uVar44;
  uVar34 = (ulong)*(uint *)(param_5 + 0xc);
  lVar41 = param_4 + uVar34 * 0x20;
  if ((param_2 == 0) && (uVar44 != 0)) {
    uVar65 = *param_1;
    puVar46 = (undefined4 *)(param_3 + uVar34 * 0xc + 8);
    puVar53 = (undefined4 *)(lVar41 + 0xc);
    uVar62 = uVar47;
    do {
      *puVar53 = uVar65;
      *(undefined8 *)(puVar46 + -2) = 0;
      uVar62 = uVar62 - 1;
      *puVar46 = 0;
      puVar46 = puVar46 + 3;
      puVar53 = puVar53 + 8;
    } while (uVar62 != 0);
  }
  if ((uVar44 < 0x65) && (*(uint *)(param_7 + 0x310) < 0x65)) {
    if (1 < uVar44) {
      lVar33 = param_3 + uVar34 * 0xc;
      iVar30 = -1;
      uVar34 = 1;
      do {
        local_180 = (float *)(param_1 + 0xd);
        local_188 = (float *)(param_1 + 7);
        local_190 = (float *)(param_1 + 6);
        local_198 = (float *)(param_1 + 0xc);
        local_1a0 = (float *)(param_1 + 9);
        local_1a8 = (float *)(param_1 + 0xb);
        local_1b0 = (float *)(param_1 + 10);
        local_288 = (float *)(param_1 + 8);
        lVar28 = *(long *)(param_8 + 0x48);
        puVar29 = (uint *)(lVar28 + uVar34 * 4);
        iVar26 = (int)uVar47;
        uVar44 = iVar26 - (int)uVar34;
        if (uVar44 < 8) {
          uVar27 = uVar44 & 0xfffffffc;
          if (param_2 == 0) {
            fVar69 = (float)param_1[4];
            fVar71 = (float)param_1[0xd];
            fVar67 = (float)param_1[7];
            fVar68 = (float)param_1[8];
            pfVar43 = (float *)(lVar41 + (ulong)puVar29[-1] * 0x20);
            if (uVar27 != 0) {
              fVar70 = *pfVar43;
              fVar82 = pfVar43[1];
              fVar86 = pfVar43[2];
              pfVar35 = pfVar43 + 3;
              uVar47 = 0;
              puVar29 = (uint *)(lVar28 + uVar34 * 4 + 8);
              do {
                pfVar54 = (float *)(lVar41 + (ulong)puVar29[-1] * 0x20);
                pfVar3 = (float *)(lVar41 + (ulong)puVar29[-2] * 0x20);
                pfVar38 = (float *)(lVar41 + (ulong)*puVar29 * 0x20);
                pfVar7 = (float *)(lVar41 + (ulong)puVar29[1] * 0x20);
                fVar91 = (fVar70 - *pfVar3) * (fVar70 - *pfVar3) +
                         (fVar82 - pfVar3[1]) * (fVar82 - pfVar3[1]) +
                         (fVar86 - pfVar3[2]) * (fVar86 - pfVar3[2]);
                fVar90 = (fVar70 - *pfVar54) * (fVar70 - *pfVar54) +
                         (fVar82 - pfVar54[1]) * (fVar82 - pfVar54[1]) +
                         (fVar86 - pfVar54[2]) * (fVar86 - pfVar54[2]);
                fVar89 = (fVar70 - *pfVar38) * (fVar70 - *pfVar38) +
                         (fVar82 - pfVar38[1]) * (fVar82 - pfVar38[1]) +
                         (fVar86 - pfVar38[2]) * (fVar86 - pfVar38[2]);
                fVar88 = (fVar70 - *pfVar7) * (fVar70 - *pfVar7) +
                         (fVar82 - pfVar7[1]) * (fVar82 - pfVar7[1]) +
                         (fVar86 - pfVar7[2]) * (fVar86 - pfVar7[2]);
                bVar22 = false;
                bVar24 = false;
                if (fVar69 - fVar88 < 0.0) {
                  bVar22 = false;
                  bVar24 = true;
                  if (!NAN(fVar69 - fVar89)) {
                    bVar22 = fVar69 - fVar89 < 0.0;
                    bVar24 = false;
                  }
                }
                bVar23 = false;
                bVar25 = false;
                if (bVar22 != bVar24) {
                  bVar23 = false;
                  bVar25 = true;
                  if (!NAN(fVar69 - fVar90)) {
                    bVar23 = fVar69 - fVar90 < 0.0;
                    bVar25 = false;
                  }
                }
                bVar22 = false;
                bVar24 = false;
                if (bVar23 != bVar25) {
                  bVar22 = false;
                  bVar24 = true;
                  if (!NAN(fVar69 - fVar91)) {
                    bVar22 = fVar69 - fVar91 < 0.0;
                    bVar24 = false;
                  }
                }
                fVar93 = 1.0;
                if (bVar22 != bVar24) {
                  fVar93 = 0.0;
                }
                if (fVar93 != 0.0) {
                  if ((uint)fVar91 < (uint)fVar69 && fVar91 != 0.0) {
                    fVar91 = fVar67 - fVar71 * fVar91;
                    fVar91 = fVar91 * fVar91 * fVar68 * fVar91;
                    *pfVar35 = fVar91 + *pfVar35;
                    pfVar3[3] = fVar91 + pfVar3[3];
                    if ((uint)fVar69 <= (uint)fVar90 || fVar90 == 0.0) goto LAB_001a0684;
LAB_001a04fc:
                    fVar90 = fVar67 - fVar71 * fVar90;
                    fVar90 = fVar90 * fVar90 * fVar68 * fVar90;
                    *pfVar35 = fVar90 + *pfVar35;
                    pfVar54[3] = fVar90 + pfVar54[3];
                    if ((uint)fVar69 <= (uint)fVar89 || fVar89 == 0.0) goto LAB_001a0694;
LAB_001a0538:
                    fVar89 = fVar67 - fVar71 * fVar89;
                    fVar89 = fVar89 * fVar89 * fVar68 * fVar89;
                    *pfVar35 = fVar89 + *pfVar35;
                    pfVar38[3] = fVar89 + pfVar38[3];
                    if ((uint)fVar69 <= (uint)fVar88 || fVar88 == 0.0) goto LAB_001a06cc;
                  }
                  else {
                    if ((uint)fVar90 < (uint)fVar69 && fVar90 != 0.0) goto LAB_001a04fc;
LAB_001a0684:
                    if ((uint)fVar89 < (uint)fVar69 && fVar89 != 0.0) goto LAB_001a0538;
LAB_001a0694:
                    if ((uint)fVar69 <= (uint)fVar88 || fVar88 == 0.0) goto LAB_001a06cc;
                  }
                  fVar88 = fVar67 - fVar71 * fVar88;
                  fVar88 = fVar88 * fVar88 * fVar68 * fVar88;
                  *pfVar35 = fVar88 + *pfVar35;
                  pfVar7[3] = fVar88 + pfVar7[3];
                }
LAB_001a06cc:
                uVar47 = uVar47 + 4;
                puVar29 = puVar29 + 4;
              } while (uVar47 < uVar27);
            }
            if (uVar27 < uVar44) {
              fVar70 = *pfVar43;
              fVar82 = pfVar43[1];
              fVar86 = pfVar43[2];
              uVar47 = (ulong)(iVar26 + iVar30 & 0xfffffffc);
              lVar36 = (uint)(iVar26 + iVar30) - uVar47;
              puVar29 = (uint *)(lVar28 + (uVar34 + uVar47) * 4);
              do {
                pfVar35 = (float *)(lVar41 + (ulong)*puVar29 * 0x20);
                fVar88 = (fVar70 - *pfVar35) * (fVar70 - *pfVar35) +
                         (fVar82 - pfVar35[1]) * (fVar82 - pfVar35[1]) +
                         (fVar86 - pfVar35[2]) * (fVar86 - pfVar35[2]);
                if ((uint)fVar88 < (uint)fVar69 && fVar88 != 0.0) {
                  fVar88 = fVar67 - fVar71 * fVar88;
                  fVar88 = fVar88 * fVar88 * fVar68 * fVar88;
                  pfVar43[3] = fVar88 + pfVar43[3];
                  pfVar35[3] = fVar88 + pfVar35[3];
                }
                lVar36 = lVar36 + -1;
                puVar29 = puVar29 + 1;
              } while (lVar36 != 0);
            }
          }
          else {
            uVar47 = (ulong)puVar29[-1];
            fVar71 = (float)param_1[4];
            pfVar43 = (float *)(lVar41 + uVar47 * 0x20);
            pfVar35 = (float *)(lVar33 + uVar47 * 0xc);
            if (uVar27 != 0) {
              pfVar54 = pfVar43 + 4;
              lVar36 = lVar33 + uVar47 * 0xc;
              fVar67 = *pfVar43;
              fVar68 = pfVar43[1];
              pfVar3 = pfVar43 + 3;
              pfVar38 = pfVar43 + 5;
              pfVar7 = pfVar43 + 6;
              pfVar1 = (float *)(lVar36 + 4);
              pfVar2 = (float *)(lVar36 + 8);
              fVar69 = pfVar43[2];
              uVar62 = 0;
              puVar29 = (uint *)(lVar28 + uVar34 * 4 + 8);
              do {
                uVar27 = puVar29[-2];
                uVar32 = puVar29[-1];
                pfVar37 = (float *)(lVar41 + (ulong)uVar27 * 0x20);
                uVar55 = *puVar29;
                uVar56 = puVar29[1];
                fVar98 = fVar67 - *pfVar37;
                pfVar4 = (float *)(lVar41 + (ulong)uVar32 * 0x20);
                fVar94 = fVar68 - pfVar37[1];
                pfVar5 = (float *)(lVar41 + (ulong)uVar55 * 0x20);
                fVar97 = fVar69 - pfVar37[2];
                fVar95 = fVar68 - pfVar4[1];
                fVar101 = fVar67 - *pfVar4;
                fVar100 = fVar69 - pfVar4[2];
                fVar91 = fVar68 - pfVar5[1];
                fVar102 = fVar67 - *pfVar5;
                pfVar6 = (float *)(lVar41 + (ulong)uVar56 * 0x20);
                fVar93 = fVar69 - pfVar5[2];
                fVar86 = fVar68 - pfVar6[1];
                fVar90 = fVar67 - *pfVar6;
                fVar88 = fVar69 - pfVar6[2];
                fVar70 = fVar98 * fVar98 + fVar94 * fVar94 + fVar97 * fVar97;
                fVar99 = fVar101 * fVar101 + fVar95 * fVar95 + fVar100 * fVar100;
                fVar96 = fVar102 * fVar102 + fVar91 * fVar91 + fVar93 * fVar93;
                fVar89 = fVar90 * fVar90 + fVar86 * fVar86 + fVar88 * fVar88;
                fVar82 = (float)param_1[4];
                bVar22 = false;
                bVar24 = false;
                if (fVar82 - fVar70 < 0.0) {
                  bVar22 = false;
                  bVar24 = true;
                  if (!NAN(fVar82 - fVar99)) {
                    bVar22 = fVar82 - fVar99 < 0.0;
                    bVar24 = false;
                  }
                }
                bVar23 = false;
                bVar25 = false;
                if (bVar22 != bVar24) {
                  bVar23 = false;
                  bVar25 = true;
                  if (!NAN(fVar82 - fVar96)) {
                    bVar23 = fVar82 - fVar96 < 0.0;
                    bVar25 = false;
                  }
                }
                bVar22 = false;
                bVar24 = false;
                if (bVar23 != bVar25) {
                  bVar22 = false;
                  bVar24 = true;
                  if (!NAN(fVar82 - fVar89)) {
                    bVar22 = fVar82 - fVar89 < 0.0;
                    bVar24 = false;
                  }
                }
                fVar82 = 1.0;
                if (bVar22 != bVar24) {
                  fVar82 = 0.0;
                }
                if (fVar82 != 0.0) {
                  if ((uint)fVar70 < (uint)fVar71 && fVar70 != 0.0) {
                    fVar83 = *local_180;
                    fVar82 = sqrtf(fVar70 * fVar83);
                    fVar84 = *local_190;
                    fVar103 = *pfVar3 - *local_1a8;
                    fVar87 = pfVar37[3] - *local_1a8;
                    fVar92 = 1.0 / pfVar37[3];
                    if (fVar87 <= 0.0) {
                      fVar87 = 0.0;
                    }
                    if (fVar103 <= 0.0) {
                      fVar103 = 0.0;
                    }
                    fVar70 = fVar70 * fVar83 * (1.0 / fVar82);
                    fVar83 = (fVar84 - fVar70) * *local_1b0;
                    fVar70 = (fVar103 + fVar87) *
                             *local_1a0 *
                             (fVar70 + ((1.0 / fVar82) * *local_188 - (fVar84 + fVar84)));
                    fVar84 = *local_198;
                    fVar82 = 1.0 / *pfVar3;
                    fVar98 = fVar84 * fVar98 * fVar70 + fVar83 * fVar84 * (pfVar37[4] - *pfVar54);
                    fVar94 = fVar84 * fVar94 * fVar70 + fVar83 * fVar84 * (pfVar37[5] - *pfVar38);
                    fVar70 = fVar84 * fVar97 * fVar70 + fVar83 * fVar84 * (pfVar37[6] - *pfVar7);
                    pfVar37 = (float *)(lVar33 + (ulong)uVar27 * 0xc);
                    *pfVar35 = fVar92 * fVar98 + *pfVar35;
                    *pfVar1 = fVar92 * fVar94 + *pfVar1;
                    *pfVar2 = fVar92 * fVar70 + *pfVar2;
                    *pfVar37 = *pfVar37 - fVar82 * fVar98;
                    pfVar37[1] = pfVar37[1] - fVar82 * fVar94;
                    pfVar37[2] = pfVar37[2] - fVar82 * fVar70;
                  }
                  if ((uint)fVar99 < (uint)fVar71 && fVar99 != 0.0) {
                    fVar70 = *local_180;
                    fVar82 = sqrtf(fVar99 * fVar70);
                    fVar94 = *local_190;
                    fVar70 = fVar99 * fVar70 * (1.0 / fVar82);
                    fVar99 = *pfVar3 - *local_1a8;
                    fVar97 = pfVar4[3] - *local_1a8;
                    fVar98 = 1.0 / pfVar4[3];
                    if (fVar97 <= 0.0) {
                      fVar97 = 0.0;
                    }
                    if (fVar99 <= 0.0) {
                      fVar99 = 0.0;
                    }
                    fVar83 = (fVar94 - fVar70) * *local_1b0;
                    fVar70 = (fVar99 + fVar97) *
                             *local_1a0 *
                             (fVar70 + ((1.0 / fVar82) * *local_188 - (fVar94 + fVar94)));
                    fVar94 = *local_198;
                    pfVar37 = (float *)(lVar33 + (ulong)uVar32 * 0xc);
                    fVar82 = 1.0 / *pfVar3;
                    fVar97 = fVar94 * fVar101 * fVar70 + fVar83 * fVar94 * (pfVar4[4] - *pfVar54);
                    fVar95 = fVar94 * fVar95 * fVar70 + fVar83 * fVar94 * (pfVar4[5] - *pfVar38);
                    fVar70 = fVar94 * fVar100 * fVar70 + fVar83 * fVar94 * (pfVar4[6] - *pfVar7);
                    *pfVar35 = fVar98 * fVar97 + *pfVar35;
                    *pfVar1 = fVar98 * fVar95 + *pfVar1;
                    *pfVar2 = fVar98 * fVar70 + *pfVar2;
                    *pfVar37 = *pfVar37 - fVar82 * fVar97;
                    pfVar37[1] = pfVar37[1] - fVar82 * fVar95;
                    pfVar37[2] = pfVar37[2] - fVar82 * fVar70;
                  }
                  if ((uint)fVar96 < (uint)fVar71 && fVar96 != 0.0) {
                    fVar70 = *local_180;
                    fVar82 = sqrtf(fVar96 * fVar70);
                    fVar94 = *local_190;
                    fVar70 = fVar96 * fVar70 * (1.0 / fVar82);
                    fVar97 = *pfVar3 - *local_1a8;
                    fVar95 = pfVar5[3] - *local_1a8;
                    fVar96 = 1.0 / pfVar5[3];
                    if (fVar95 <= 0.0) {
                      fVar95 = 0.0;
                    }
                    if (fVar97 <= 0.0) {
                      fVar97 = 0.0;
                    }
                    fVar98 = (fVar94 - fVar70) * *local_1b0;
                    fVar70 = (fVar97 + fVar95) *
                             *local_1a0 *
                             (fVar70 + ((1.0 / fVar82) * *local_188 - (fVar94 + fVar94)));
                    fVar94 = *local_198;
                    pfVar37 = (float *)(lVar33 + (ulong)uVar55 * 0xc);
                    fVar82 = 1.0 / *pfVar3;
                    fVar95 = fVar94 * fVar102 * fVar70 + fVar98 * fVar94 * (pfVar5[4] - *pfVar54);
                    fVar91 = fVar94 * fVar91 * fVar70 + fVar98 * fVar94 * (pfVar5[5] - *pfVar38);
                    fVar70 = fVar94 * fVar93 * fVar70 + fVar98 * fVar94 * (pfVar5[6] - *pfVar7);
                    *pfVar35 = fVar96 * fVar95 + *pfVar35;
                    *pfVar1 = fVar96 * fVar91 + *pfVar1;
                    *pfVar2 = fVar96 * fVar70 + *pfVar2;
                    *pfVar37 = *pfVar37 - fVar82 * fVar95;
                    pfVar37[1] = pfVar37[1] - fVar82 * fVar91;
                    pfVar37[2] = pfVar37[2] - fVar82 * fVar70;
                  }
                  if ((uint)fVar89 < (uint)fVar71 && fVar89 != 0.0) {
                    fVar70 = *local_180;
                    fVar82 = sqrtf(fVar89 * fVar70);
                    fVar91 = *local_190;
                    fVar70 = fVar89 * fVar70 * (1.0 / fVar82);
                    fVar94 = *pfVar3 - *local_1a8;
                    fVar89 = pfVar6[3] - *local_1a8;
                    fVar93 = 1.0 / pfVar6[3];
                    if (fVar89 <= 0.0) {
                      fVar89 = 0.0;
                    }
                    if (fVar94 <= 0.0) {
                      fVar94 = 0.0;
                    }
                    fVar95 = (fVar91 - fVar70) * *local_1b0;
                    fVar70 = (fVar94 + fVar89) *
                             *local_1a0 *
                             (fVar70 + ((1.0 / fVar82) * *local_188 - (fVar91 + fVar91)));
                    fVar89 = *local_198;
                    fVar82 = 1.0 / *pfVar3;
                    fVar86 = fVar89 * fVar86 * fVar70 + fVar95 * fVar89 * (pfVar6[5] - *pfVar38);
                    fVar90 = fVar89 * fVar90 * fVar70 + fVar95 * fVar89 * (pfVar6[4] - *pfVar54);
                    fVar70 = fVar89 * fVar88 * fVar70 + fVar95 * fVar89 * (pfVar6[6] - *pfVar7);
                    pfVar37 = (float *)(lVar33 + (ulong)uVar56 * 0xc);
                    *pfVar35 = fVar93 * fVar90 + *pfVar35;
                    *pfVar1 = fVar93 * fVar86 + *pfVar1;
                    *pfVar2 = fVar93 * fVar70 + *pfVar2;
                    *pfVar37 = *pfVar37 - fVar82 * fVar90;
                    pfVar37[1] = pfVar37[1] - fVar82 * fVar86;
                    pfVar37[2] = pfVar37[2] - fVar82 * fVar70;
                  }
                }
                uVar62 = uVar62 + 4;
                puVar29 = puVar29 + 4;
              } while (uVar62 < ((ulong)uVar44 & 0xfffffffc));
            }
            if ((uVar44 & 0xfffffffc) < uVar44) {
              fVar69 = pfVar43[2];
              fVar67 = *pfVar43;
              fVar68 = pfVar43[1];
              uVar62 = (ulong)(iVar26 + iVar30 & 0xfffffffc);
              lVar48 = lVar33 + uVar47 * 0xc;
              lVar36 = (uint)(iVar26 + iVar30) - uVar62;
              pfVar54 = (float *)(lVar48 + 4);
              pfVar3 = (float *)(lVar48 + 8);
              puVar29 = (uint *)(lVar28 + (uVar34 + uVar62) * 4);
              do {
                uVar44 = *puVar29;
                pfVar38 = (float *)(lVar41 + (ulong)uVar44 * 0x20);
                fVar82 = fVar68 - pfVar38[1];
                fVar88 = fVar67 - *pfVar38;
                fVar86 = fVar69 - pfVar38[2];
                fVar70 = fVar88 * fVar88 + fVar82 * fVar82 + fVar86 * fVar86;
                if ((uint)fVar70 < (uint)fVar71 && fVar70 != 0.0) {
                  fVar90 = *local_180;
                  fVar89 = sqrtf(fVar70 * fVar90);
                  fVar91 = *local_190;
                  fVar70 = fVar70 * fVar90 * (1.0 / fVar89);
                  fVar94 = pfVar43[3] - *local_1a8;
                  fVar90 = pfVar38[3] - *local_1a8;
                  fVar93 = 1.0 / pfVar38[3];
                  if (fVar90 <= 0.0) {
                    fVar90 = 0.0;
                  }
                  if (fVar94 <= 0.0) {
                    fVar94 = 0.0;
                  }
                  fVar96 = 1.0 / pfVar43[3];
                  fVar95 = (fVar91 - fVar70) * *local_1b0;
                  fVar70 = (fVar94 + fVar90) *
                           *local_1a0 * (fVar70 + ((1.0 / fVar89) * *local_188 - (fVar91 + fVar91)))
                  ;
                  fVar89 = *local_198;
                  fVar88 = fVar89 * fVar88 * fVar70 + fVar95 * fVar89 * (pfVar38[4] - pfVar43[4]);
                  fVar82 = fVar89 * fVar82 * fVar70 + fVar95 * fVar89 * (pfVar38[5] - pfVar43[5]);
                  fVar70 = fVar89 * fVar86 * fVar70 + fVar95 * fVar89 * (pfVar38[6] - pfVar43[6]);
                  *pfVar35 = fVar93 * fVar88 + *pfVar35;
                  *pfVar54 = fVar93 * fVar82 + *pfVar54;
                  pfVar38 = (float *)(lVar33 + (ulong)uVar44 * 0xc);
                  *pfVar3 = fVar93 * fVar70 + *pfVar3;
                  *pfVar38 = *pfVar38 - fVar96 * fVar88;
                  pfVar38[1] = pfVar38[1] - fVar96 * fVar82;
                  pfVar38[2] = pfVar38[2] - fVar96 * fVar70;
                }
                lVar36 = lVar36 + -1;
                puVar29 = puVar29 + 1;
              } while (lVar36 != 0);
            }
          }
        }
        else {
          pfVar43 = *(float **)(param_8 + 0x38);
          puVar63 = *(uint **)(param_8 + 0x40);
          uVar27 = uVar44 + 7 & 0xfffffffc;
          local_b0[0] = 3.4028235e+38;
          local_b0[1] = 3.4028235e+38;
          local_b0[2] = 3.4028235e+38;
          local_b0[3] = 3.4028235e+38;
          if (uVar27 != 0) {
            uVar55 = 0;
            pfVar35 = pfVar43 + 8;
            puVar40 = (uint *)(lVar28 + uVar34 * 4 + 8);
            do {
              if (uVar55 < uVar44) {
                pfVar54 = (float *)(lVar41 + (ulong)puVar40[-2] * 0x20);
                if (uVar55 + 1 < uVar44) goto LAB_001a00d0;
LAB_001a0098:
                pauVar57 = (undefined1 (*) [16])local_b0;
                if (uVar55 + 2 < uVar44) goto LAB_001a00e4;
LAB_001a00a8:
                pauVar58 = (undefined1 (*) [12])local_b0;
                if (uVar55 + 3 < uVar44) goto LAB_001a00f8;
LAB_001a00b8:
                pauVar60 = (undefined1 (*) [12])local_b0;
              }
              else {
                pfVar54 = local_b0;
                if (uVar44 <= uVar55 + 1) goto LAB_001a0098;
LAB_001a00d0:
                pauVar57 = (undefined1 (*) [16])(lVar41 + (ulong)puVar40[-1] * 0x20);
                if (uVar44 <= uVar55 + 2) goto LAB_001a00a8;
LAB_001a00e4:
                pauVar58 = (undefined1 (*) [12])(lVar41 + (ulong)*puVar40 * 0x20);
                if (uVar44 <= uVar55 + 3) goto LAB_001a00b8;
LAB_001a00f8:
                pauVar60 = (undefined1 (*) [12])(lVar41 + (ulong)puVar40[1] * 0x20);
              }
              fVar71 = *pfVar54;
              fVar67 = pfVar54[2];
              auVar20 = *pauVar58;
              fVar69 = SUB124(*pauVar58,0);
              uVar65 = SUB124(*pauVar58,4);
              auVar13 = *pauVar57;
              auVar21 = *pauVar60;
              fVar68 = auVar13._0_4_;
              fVar70 = SUB124(*pauVar60,0);
              uVar66 = SUB124(*pauVar60,4);
              auVar78._4_4_ = fVar69;
              auVar78._0_4_ = fVar71;
              auVar78._8_4_ = pfVar54[1];
              auVar78._12_4_ = uVar65;
              auVar80._4_4_ = fVar69;
              auVar80._0_4_ = fVar71;
              auVar80._8_4_ = pfVar54[1];
              auVar80._12_4_ = uVar65;
              auVar78 = NEON_ext(auVar78,auVar80,8,1);
              auVar85._4_4_ = fVar70;
              auVar85._0_4_ = fVar68;
              auVar85._8_4_ = auVar13._4_4_;
              auVar85._12_4_ = uVar66;
              auVar19._4_4_ = fVar70;
              auVar19._0_4_ = fVar68;
              auVar19._8_4_ = auVar13._4_4_;
              auVar19._12_4_ = uVar66;
              auVar80 = NEON_ext(auVar85,auVar19,8,1);
              uVar55 = uVar55 + 4;
              pfVar35[-8] = fVar71;
              pfVar35[-7] = fVar68;
              pfVar35[-6] = fVar69;
              pfVar35[-5] = fVar70;
              puVar40 = puVar40 + 4;
              pfVar35[-4] = auVar78._0_4_;
              pfVar35[-3] = auVar80._0_4_;
              pfVar35[-2] = auVar78._4_4_;
              pfVar35[-1] = auVar80._4_4_;
              *pfVar35 = fVar67;
              pfVar35[1] = auVar13._8_4_;
              pfVar35[2] = auVar20._8_4_;
              pfVar35[3] = auVar21._8_4_;
              pfVar35 = pfVar35 + 0xc;
            } while (uVar55 < uVar27);
          }
          uStack_138 = param_1[0xc];
          uStack_134 = uStack_138;
          local_140 = uStack_138;
          uStack_13c = uStack_138;
          uStack_128 = param_1[0xd];
          uStack_124 = uStack_128;
          local_130 = uStack_128;
          uStack_12c = uStack_128;
          uStack_118 = param_1[6];
          uStack_114 = uStack_118;
          local_120 = uStack_118;
          uStack_11c = uStack_118;
          uStack_108 = param_1[7];
          uStack_104 = uStack_108;
          local_110 = uStack_108;
          uStack_10c = uStack_108;
          uStack_f8 = param_1[8];
          uStack_f4 = uStack_f8;
          local_100 = uStack_f8;
          uStack_fc = uStack_f8;
          uStack_e8 = param_1[9];
          uStack_e4 = uStack_e8;
          local_f0 = uStack_e8;
          uStack_ec = uStack_e8;
          uStack_d8 = param_1[10];
          uStack_d4 = uStack_d8;
          local_e0 = uStack_d8;
          uStack_dc = uStack_d8;
          uVar65 = param_1[0xb];
          uStack_c8 = CONCAT44(uVar65,uVar65);
          local_d0 = CONCAT44(uVar65,uVar65);
          uVar27 = puVar29[-1];
          fVar71 = (float)param_1[4];
          *puVar63 = uVar27;
          pfVar35 = (float *)(lVar41 + (ulong)uVar27 * 0x20);
          fVar67 = *pfVar35;
          fVar68 = pfVar35[1];
          fVar69 = pfVar35[2];
          fVar70 = fVar68 - (float)*(undefined8 *)(pfVar43 + 4);
          fVar82 = fVar68 - (float)((ulong)*(undefined8 *)(pfVar43 + 4) >> 0x20);
          fVar86 = fVar68 - (float)*(undefined8 *)(pfVar43 + 6);
          fVar88 = fVar68 - (float)((ulong)*(undefined8 *)(pfVar43 + 6) >> 0x20);
          fVar89 = fVar69 - (float)*(undefined8 *)(pfVar43 + 8);
          fVar90 = fVar69 - (float)((ulong)*(undefined8 *)(pfVar43 + 8) >> 0x20);
          fVar91 = fVar69 - (float)*(undefined8 *)(pfVar43 + 10);
          fVar93 = fVar69 - (float)((ulong)*(undefined8 *)(pfVar43 + 10) >> 0x20);
          fVar70 = fVar89 * fVar89 + (fVar67 - *pfVar43) * (fVar67 - *pfVar43) + fVar70 * fVar70;
          fVar82 = fVar90 * fVar90 + (fVar67 - pfVar43[1]) * (fVar67 - pfVar43[1]) + fVar82 * fVar82
          ;
          fVar86 = fVar91 * fVar91 + (fVar67 - pfVar43[2]) * (fVar67 - pfVar43[2]) + fVar86 * fVar86
          ;
          fVar88 = fVar93 * fVar93 + (fVar67 - pfVar43[3]) * (fVar67 - pfVar43[3]) + fVar88 * fVar88
          ;
          uVar47 = CONCAT26(-(ushort)(0.0 < fVar88),
                            CONCAT24(-(ushort)(0.0 < fVar86),
                                     CONCAT22(-(ushort)(0.0 < fVar82),-(ushort)(0.0 < fVar70)))) &
                   CONCAT26(-(ushort)(fVar88 < fVar71),
                            CONCAT24(-(ushort)(fVar86 < fVar71),
                                     CONCAT22(-(ushort)(fVar82 < fVar71),-(ushort)(fVar70 < fVar71))
                                    ));
          auVar72._0_8_ =
               CONCAT35(0,CONCAT14((char)(uVar47 >> 0x10),(uint)((byte)uVar47 & 1)) & 0x1ffffffff);
          auVar72[8] = (byte)(uVar47 >> 0x20) & 1;
          auVar72._9_3_ = 0;
          auVar72[0xc] = (byte)(uVar47 >> 0x30) & 1;
          local_160[1] = (ulong)auVar72._8_5_;
          local_160[0] = auVar72._0_8_;
          if (uVar44 == 0) {
            uVar47 = 2;
            puVar63[1] = 0;
            if (param_2 != 0) goto LAB_001a0458;
LAB_001a0798:
            fVar71 = *local_188;
            fVar67 = *local_288;
            fVar68 = *local_180;
            uVar44 = 0;
            do {
              uVar55 = puVar63[uVar44 + 1];
              uVar27 = uVar44 + 2;
              if (uVar55 != 0) {
                pfVar43 = (float *)(lVar41 + (ulong)puVar63[uVar44] * 0x20);
                fVar69 = *pfVar43;
                fVar82 = pfVar43[1];
                fVar86 = pfVar43[2];
                fVar70 = pfVar43[3];
                uVar32 = uVar55;
                uVar44 = uVar27;
                do {
                  uVar62 = (ulong)uVar44;
                  uVar44 = uVar44 + 1;
                  pfVar35 = (float *)(lVar41 + (ulong)puVar63[uVar62] * 0x20);
                  fVar88 = fVar71 - fVar68 * ((fVar69 - *pfVar35) * (fVar69 - *pfVar35) +
                                              (fVar82 - pfVar35[1]) * (fVar82 - pfVar35[1]) +
                                             (fVar86 - pfVar35[2]) * (fVar86 - pfVar35[2]));
                  fVar88 = fVar88 * fVar88 * fVar67 * fVar88;
                  fVar70 = fVar70 + fVar88;
                  uVar32 = uVar32 - 1;
                  pfVar35[3] = pfVar35[3] + fVar88;
                } while (uVar32 != 0);
                pfVar43[3] = fVar70;
                uVar27 = uVar27 + uVar55;
              }
              uVar44 = uVar27;
            } while (uVar44 < (uint)uVar47);
          }
          else {
            puVar40 = puVar29 + uVar44;
            uVar47 = 2;
            uVar55 = 0;
            do {
              uVar32 = uVar55 + 4;
              fVar70 = fVar67 - pfVar43[0xc];
              lVar28 = (ulong)(uVar32 & 4) * 4;
              fVar82 = fVar69 - (float)*(undefined8 *)(pfVar43 + 0x14);
              fVar86 = fVar69 - (float)((ulong)*(undefined8 *)(pfVar43 + 0x14) >> 0x20);
              fVar88 = fVar69 - (float)*(undefined8 *)(pfVar43 + 0x16);
              fVar89 = fVar69 - (float)((ulong)*(undefined8 *)(pfVar43 + 0x16) >> 0x20);
              uVar55 = uVar55 & 4;
              fVar70 = fVar82 * fVar82 +
                       fVar70 * fVar70 + (fVar68 - pfVar43[0x10]) * (fVar68 - pfVar43[0x10]);
              fVar82 = fVar86 * fVar86 +
                       (fVar67 - pfVar43[0xd]) * (fVar67 - pfVar43[0xd]) +
                       (fVar68 - pfVar43[0x11]) * (fVar68 - pfVar43[0x11]);
              fVar86 = fVar88 * fVar88 +
                       (fVar67 - pfVar43[0xe]) * (fVar67 - pfVar43[0xe]) +
                       (fVar68 - pfVar43[0x12]) * (fVar68 - pfVar43[0x12]);
              fVar88 = fVar89 * fVar89 +
                       (fVar67 - pfVar43[0xf]) * (fVar67 - pfVar43[0xf]) +
                       (fVar68 - pfVar43[0x13]) * (fVar68 - pfVar43[0x13]);
              uVar62 = CONCAT26(-(ushort)(0.0 < fVar88),
                                CONCAT24(-(ushort)(0.0 < fVar86),
                                         CONCAT22(-(ushort)(0.0 < fVar82),-(ushort)(0.0 < fVar70))))
                       & CONCAT26(-(ushort)(fVar88 < fVar71),
                                  CONCAT24(-(ushort)(fVar86 < fVar71),
                                           CONCAT22(-(ushort)(fVar82 < fVar71),
                                                    -(ushort)(fVar70 < fVar71))));
              auVar73._0_8_ =
                   CONCAT35(0,CONCAT14((char)(uVar62 >> 0x10),(uint)((byte)uVar62 & 1)) &
                              0x1ffffffff);
              auVar73[8] = (byte)(uVar62 >> 0x20) & 1;
              auVar73._9_3_ = 0;
              auVar73[0xc] = (byte)(uVar62 >> 0x30) & 1;
              *(ulong *)((long)local_160 + lVar28 + 8) = (ulong)auVar73._8_5_;
              *(ulong *)((long)local_160 + lVar28) = auVar73._0_8_;
              iVar26 = *(int *)((long)local_160 + (ulong)(uVar55 | 1) * 4);
              iVar9 = *(int *)((long)local_160 + (ulong)(uVar55 | 2) * 4);
              iVar8 = *(int *)((long)local_160 + (ulong)(uVar55 | 3) * 4);
              uVar55 = *(int *)((long)local_160 + (ulong)uVar55 * 4) + (int)uVar47;
              puVar63[uVar47] = *puVar29;
              if (puVar29 + 1 < puVar40) {
                uVar56 = puVar29[1];
              }
              else {
                uVar56 = 0;
              }
              puVar63[uVar55] = uVar56;
              uVar55 = uVar55 + iVar26;
              if (puVar29 + 2 < puVar40) {
                uVar56 = puVar29[2];
              }
              else {
                uVar56 = 0;
              }
              puVar63[uVar55] = uVar56;
              uVar55 = uVar55 + iVar9;
              if (puVar29 + 3 < puVar40) {
                uVar56 = puVar29[3];
              }
              else {
                uVar56 = 0;
              }
              uVar31 = uVar55 + iVar8;
              uVar47 = (ulong)uVar31;
              puVar63[uVar55] = uVar56;
              if (0x80 - uVar31 < 6) {
                puVar63[1] = uVar31 - 2;
                if (param_2 == 0) {
                  if (uVar31 != 0) {
                    fVar70 = *local_188;
                    fVar82 = *local_288;
                    fVar86 = *local_180;
                    uVar55 = 0;
                    do {
                      uVar45 = puVar63[uVar55 + 1];
                      uVar56 = uVar55 + 2;
                      if (uVar45 != 0) {
                        pfVar35 = (float *)(lVar41 + (ulong)puVar63[uVar55] * 0x20);
                        fVar88 = *pfVar35;
                        fVar90 = pfVar35[1];
                        fVar91 = pfVar35[2];
                        fVar89 = pfVar35[3];
                        uVar50 = uVar45;
                        uVar55 = uVar56;
                        do {
                          uVar47 = (ulong)uVar55;
                          uVar55 = uVar55 + 1;
                          pfVar54 = (float *)(lVar41 + (ulong)puVar63[uVar47] * 0x20);
                          fVar93 = fVar70 - fVar86 * ((fVar88 - *pfVar54) * (fVar88 - *pfVar54) +
                                                      (fVar90 - pfVar54[1]) * (fVar90 - pfVar54[1])
                                                     + (fVar91 - pfVar54[2]) * (fVar91 - pfVar54[2])
                                                     );
                          fVar93 = fVar93 * fVar93 * fVar82 * fVar93;
                          fVar89 = fVar89 + fVar93;
                          uVar50 = uVar50 - 1;
                          pfVar54[3] = pfVar54[3] + fVar93;
                        } while (uVar50 != 0);
                        pfVar35[3] = fVar89;
                        uVar56 = uVar56 + uVar45;
                      }
                      uVar55 = uVar56;
                    } while (uVar55 < uVar31);
                  }
                }
                else {
                  FUN_001a5720(lVar33,lVar33,lVar41,lVar41,puVar63,uVar47,param_1,&local_140);
                }
                uVar47 = 2;
                *puVar63 = uVar27;
              }
              puVar29 = puVar29 + 4;
              pfVar43 = pfVar43 + 0xc;
              uVar55 = uVar32;
            } while (uVar32 < uVar44);
            puVar63[1] = (int)uVar47 - 2;
            if ((int)uVar47 != 0) {
              if (param_2 == 0) goto LAB_001a0798;
LAB_001a0458:
              FUN_001a5720(lVar33,lVar33,lVar41,lVar41,puVar63,uVar47,param_1,&local_140);
            }
          }
        }
        uVar44 = (int)uVar34 + 1;
        uVar34 = (ulong)uVar44;
        uVar47 = (ulong)*(uint *)(param_5 + 8);
        iVar30 = iVar30 + -1;
      } while (uVar44 < *(uint *)(param_5 + 8));
    }
    local_180 = (float *)(param_1 + 0xd);
    local_188 = (float *)(param_1 + 7);
    local_190 = (float *)(param_1 + 6);
    local_198 = (float *)(param_1 + 0xc);
    local_1a0 = (float *)(param_1 + 9);
    local_1a8 = (float *)(param_1 + 0xb);
    local_1b0 = (float *)(param_1 + 10);
    local_288 = (float *)(param_1 + 8);
    lVar41 = 0;
    do {
      if ((*(int *)(param_6 + lVar41 * 4) != 0) &&
         (uVar44 = *(uint *)(PTR_DAT_02710ff0 + lVar41 * 0x50), uVar44 != 0)) {
        uVar47 = (ulong)*(uint *)(param_6 + lVar41 * 4 + 0x6c);
        lVar33 = param_4 + uVar47 * 0x20;
        lVar28 = param_3 + uVar47 * 0xc;
        uVar47 = 0;
        uVar27 = 0;
        puVar59 = PTR_DAT_02710ff0;
        do {
          uVar34 = (ulong)*(uint *)(puVar59 + uVar47 * 4 + lVar41 * 0x50 + 4);
          iVar30 = *(int *)(param_7 + uVar34 * 4);
          if (iVar30 != 0) {
            if (0x200 < iVar30 + uVar27) {
              uVar55 = *(uint *)(param_6 + lVar41 * 4);
              puVar29 = *(uint **)(param_8 + 0x48);
              puVar63 = *(uint **)(param_8 + 0x10);
              if (uVar27 < 8) {
                uVar32 = uVar27 & 0xfffffffc;
                if (param_2 == 0) {
                  if (uVar55 != 0) {
                    fVar71 = (float)param_1[4];
                    fVar67 = *local_180;
                    fVar68 = *local_188;
                    fVar69 = *local_288;
                    uVar62 = 0;
                    do {
                      pfVar43 = (float *)(lVar33 + (ulong)puVar29[uVar62] * 0x20);
                      if (uVar32 != 0) {
                        fVar70 = *pfVar43;
                        fVar82 = pfVar43[1];
                        fVar86 = pfVar43[2];
                        uVar49 = 0;
                        pfVar35 = pfVar43 + 3;
                        do {
                          puVar40 = puVar63 + uVar49;
                          pfVar54 = (float *)(param_4 + (ulong)*puVar40 * 0x20);
                          pfVar3 = (float *)(param_4 + (ulong)puVar40[1] * 0x20);
                          pfVar38 = (float *)(param_4 + (ulong)puVar40[2] * 0x20);
                          pfVar7 = (float *)(param_4 + (ulong)puVar40[3] * 0x20);
                          fVar91 = (fVar70 - *pfVar54) * (fVar70 - *pfVar54) +
                                   (fVar82 - pfVar54[1]) * (fVar82 - pfVar54[1]) +
                                   (fVar86 - pfVar54[2]) * (fVar86 - pfVar54[2]);
                          fVar90 = (fVar70 - *pfVar3) * (fVar70 - *pfVar3) +
                                   (fVar82 - pfVar3[1]) * (fVar82 - pfVar3[1]) +
                                   (fVar86 - pfVar3[2]) * (fVar86 - pfVar3[2]);
                          fVar89 = (fVar70 - *pfVar38) * (fVar70 - *pfVar38) +
                                   (fVar82 - pfVar38[1]) * (fVar82 - pfVar38[1]) +
                                   (fVar86 - pfVar38[2]) * (fVar86 - pfVar38[2]);
                          fVar88 = (fVar70 - *pfVar7) * (fVar70 - *pfVar7) +
                                   (fVar82 - pfVar7[1]) * (fVar82 - pfVar7[1]) +
                                   (fVar86 - pfVar7[2]) * (fVar86 - pfVar7[2]);
                          bVar22 = false;
                          bVar24 = false;
                          if (fVar71 - fVar88 < 0.0) {
                            bVar22 = false;
                            bVar24 = true;
                            if (!NAN(fVar71 - fVar89)) {
                              bVar22 = fVar71 - fVar89 < 0.0;
                              bVar24 = false;
                            }
                          }
                          bVar23 = false;
                          bVar25 = false;
                          if (bVar22 != bVar24) {
                            bVar23 = false;
                            bVar25 = true;
                            if (!NAN(fVar71 - fVar90)) {
                              bVar23 = fVar71 - fVar90 < 0.0;
                              bVar25 = false;
                            }
                          }
                          bVar22 = false;
                          bVar24 = false;
                          if (bVar23 != bVar25) {
                            bVar22 = false;
                            bVar24 = true;
                            if (!NAN(fVar71 - fVar91)) {
                              bVar22 = fVar71 - fVar91 < 0.0;
                              bVar24 = false;
                            }
                          }
                          fVar93 = 1.0;
                          if (bVar22 != bVar24) {
                            fVar93 = 0.0;
                          }
                          if (fVar93 != 0.0) {
                            if ((uint)fVar91 < (uint)fVar71 && fVar91 != 0.0) {
                              fVar91 = fVar68 - fVar67 * fVar91;
                              *pfVar35 = fVar91 * fVar91 * fVar69 * fVar91 + *pfVar35;
                              if ((uint)fVar71 <= (uint)fVar90 || fVar90 == 0.0) goto LAB_001a1998;
LAB_001a1828:
                              fVar90 = fVar68 - fVar67 * fVar90;
                              *pfVar35 = fVar90 * fVar90 * fVar69 * fVar90 + *pfVar35;
                              if ((uint)fVar71 <= (uint)fVar89 || fVar89 == 0.0) goto LAB_001a19a8;
LAB_001a1858:
                              fVar89 = fVar68 - fVar67 * fVar89;
                              *pfVar35 = fVar89 * fVar89 * fVar69 * fVar89 + *pfVar35;
                              if ((uint)fVar71 <= (uint)fVar88 || fVar88 == 0.0) goto LAB_001a19d4;
                            }
                            else {
                              if ((uint)fVar90 < (uint)fVar71 && fVar90 != 0.0) goto LAB_001a1828;
LAB_001a1998:
                              if ((uint)fVar89 < (uint)fVar71 && fVar89 != 0.0) goto LAB_001a1858;
LAB_001a19a8:
                              if ((uint)fVar71 <= (uint)fVar88 || fVar88 == 0.0) goto LAB_001a19d4;
                            }
                            fVar88 = fVar68 - fVar67 * fVar88;
                            *pfVar35 = fVar88 * fVar88 * fVar69 * fVar88 + *pfVar35;
                          }
LAB_001a19d4:
                          uVar49 = uVar49 + 4;
                        } while (uVar49 < uVar32);
                      }
                      if (uVar32 < uVar27) {
                        puVar40 = puVar63 + uVar32;
                        lVar36 = (ulong)uVar27 - (ulong)uVar32;
                        do {
                          pfVar35 = (float *)(param_4 + (ulong)*puVar40 * 0x20);
                          fVar70 = (*pfVar43 - *pfVar35) * (*pfVar43 - *pfVar35) +
                                   (pfVar43[1] - pfVar35[1]) * (pfVar43[1] - pfVar35[1]) +
                                   (pfVar43[2] - pfVar35[2]) * (pfVar43[2] - pfVar35[2]);
                          if ((uint)fVar70 < (uint)fVar71 && fVar70 != 0.0) {
                            fVar70 = fVar68 - fVar67 * fVar70;
                            pfVar43[3] = fVar70 * fVar70 * fVar69 * fVar70 + pfVar43[3];
                          }
                          lVar36 = lVar36 + -1;
                          puVar40 = puVar40 + 1;
                        } while (lVar36 != 0);
                      }
                      uVar62 = uVar62 + 1;
                    } while (uVar62 != uVar55);
                  }
                }
                else if (uVar55 != 0) {
                  fVar71 = (float)param_1[4];
                  uVar62 = 0;
                  do {
                    uVar49 = (ulong)puVar29[uVar62];
                    pfVar43 = (float *)(lVar33 + uVar49 * 0x20);
                    pfVar35 = (float *)(lVar28 + uVar49 * 0xc);
                    if (uVar32 != 0) {
                      fVar67 = *pfVar43;
                      pfVar54 = pfVar43 + 3;
                      pfVar3 = pfVar43 + 4;
                      pfVar38 = pfVar43 + 5;
                      pfVar7 = pfVar43 + 6;
                      fVar68 = pfVar43[1];
                      lVar36 = lVar28 + uVar49 * 0xc;
                      fVar69 = pfVar43[2];
                      uVar61 = 0;
                      pfVar1 = (float *)(lVar36 + 4);
                      pfVar2 = (float *)(lVar36 + 8);
                      do {
                        puVar40 = puVar63 + uVar61;
                        pfVar37 = (float *)(param_4 + (ulong)*puVar40 * 0x20);
                        fVar96 = fVar67 - *pfVar37;
                        pfVar4 = (float *)(param_4 + (ulong)puVar40[1] * 0x20);
                        fVar97 = fVar68 - pfVar37[1];
                        pfVar5 = (float *)(param_4 + (ulong)puVar40[2] * 0x20);
                        pfVar6 = (float *)(param_4 + (ulong)puVar40[3] * 0x20);
                        fVar95 = fVar69 - pfVar37[2];
                        fVar102 = fVar68 - pfVar4[1];
                        fVar100 = fVar67 - *pfVar4;
                        fVar94 = fVar69 - pfVar4[2];
                        fVar93 = fVar68 - pfVar5[1];
                        fVar91 = fVar67 - *pfVar5;
                        fVar101 = fVar69 - pfVar5[2];
                        fVar86 = fVar68 - pfVar6[1];
                        fVar90 = fVar67 - *pfVar6;
                        fVar89 = fVar69 - pfVar6[2];
                        fVar70 = fVar96 * fVar96 + fVar97 * fVar97 + fVar95 * fVar95;
                        fVar98 = fVar100 * fVar100 + fVar102 * fVar102 + fVar94 * fVar94;
                        fVar99 = fVar91 * fVar91 + fVar93 * fVar93 + fVar101 * fVar101;
                        fVar88 = fVar90 * fVar90 + fVar86 * fVar86 + fVar89 * fVar89;
                        fVar82 = (float)param_1[4];
                        bVar22 = false;
                        bVar24 = false;
                        if (fVar82 - fVar70 < 0.0) {
                          bVar22 = false;
                          bVar24 = true;
                          if (!NAN(fVar82 - fVar98)) {
                            bVar22 = fVar82 - fVar98 < 0.0;
                            bVar24 = false;
                          }
                        }
                        bVar23 = false;
                        bVar25 = false;
                        if (bVar22 != bVar24) {
                          bVar23 = false;
                          bVar25 = true;
                          if (!NAN(fVar82 - fVar99)) {
                            bVar23 = fVar82 - fVar99 < 0.0;
                            bVar25 = false;
                          }
                        }
                        bVar22 = false;
                        bVar24 = false;
                        if (bVar23 != bVar25) {
                          bVar22 = false;
                          bVar24 = true;
                          if (!NAN(fVar82 - fVar88)) {
                            bVar22 = fVar82 - fVar88 < 0.0;
                            bVar24 = false;
                          }
                        }
                        fVar82 = 1.0;
                        if (bVar22 != bVar24) {
                          fVar82 = 0.0;
                        }
                        if (fVar82 != 0.0) {
                          if ((uint)fVar70 < (uint)fVar71 && fVar70 != 0.0) {
                            fVar83 = *local_180;
                            fVar82 = sqrtf(fVar70 * fVar83);
                            fVar84 = *local_190;
                            fVar87 = *pfVar54 - *local_1a8;
                            fVar92 = pfVar37[3] - *local_1a8;
                            fVar103 = pfVar37[5];
                            fVar104 = pfVar37[6];
                            fVar70 = fVar70 * fVar83 * (1.0 / fVar82);
                            if (fVar87 <= 0.0) {
                              fVar87 = 0.0;
                            }
                            if (fVar92 <= 0.0) {
                              fVar92 = 0.0;
                            }
                            fVar82 = (fVar87 + fVar92) *
                                     *local_1a0 *
                                     (fVar70 + ((1.0 / fVar82) * *local_188 - (fVar84 + fVar84)));
                            fVar83 = *local_198;
                            fVar84 = (fVar84 - fVar70) * *local_1b0;
                            fVar87 = *pfVar38;
                            fVar92 = *pfVar7;
                            fVar70 = 1.0 / pfVar37[3];
                            *pfVar35 = fVar70 * (fVar83 * fVar96 * fVar82 +
                                                fVar84 * fVar83 * (pfVar37[4] - *pfVar3)) + *pfVar35
                            ;
                            *pfVar1 = fVar70 * (fVar83 * fVar97 * fVar82 +
                                               fVar84 * fVar83 * (fVar103 - fVar87)) + *pfVar1;
                            *pfVar2 = fVar70 * (fVar83 * fVar95 * fVar82 +
                                               fVar84 * fVar83 * (fVar104 - fVar92)) + *pfVar2;
                          }
                          if ((uint)fVar98 < (uint)fVar71 && fVar98 != 0.0) {
                            fVar70 = *local_180;
                            fVar82 = sqrtf(fVar98 * fVar70);
                            fVar95 = *local_190;
                            fVar96 = *pfVar54 - *local_1a8;
                            fVar97 = pfVar4[3] - *local_1a8;
                            fVar83 = pfVar4[5];
                            fVar84 = pfVar4[6];
                            fVar70 = fVar98 * fVar70 * (1.0 / fVar82);
                            if (fVar96 <= 0.0) {
                              fVar96 = 0.0;
                            }
                            if (fVar97 <= 0.0) {
                              fVar97 = 0.0;
                            }
                            fVar82 = (fVar96 + fVar97) *
                                     *local_1a0 *
                                     (fVar70 + ((1.0 / fVar82) * *local_188 - (fVar95 + fVar95)));
                            fVar96 = *local_198;
                            fVar95 = (fVar95 - fVar70) * *local_1b0;
                            fVar97 = *pfVar38;
                            fVar98 = *pfVar7;
                            fVar70 = 1.0 / pfVar4[3];
                            *pfVar35 = fVar70 * (fVar96 * fVar100 * fVar82 +
                                                fVar95 * fVar96 * (pfVar4[4] - *pfVar3)) + *pfVar35;
                            *pfVar1 = fVar70 * (fVar96 * fVar102 * fVar82 +
                                               fVar95 * fVar96 * (fVar83 - fVar97)) + *pfVar1;
                            *pfVar2 = fVar70 * (fVar96 * fVar94 * fVar82 +
                                               fVar95 * fVar96 * (fVar84 - fVar98)) + *pfVar2;
                          }
                          if ((uint)fVar99 < (uint)fVar71 && fVar99 != 0.0) {
                            fVar70 = *local_180;
                            fVar82 = sqrtf(fVar99 * fVar70);
                            fVar94 = *local_190;
                            fVar95 = *pfVar54 - *local_1a8;
                            fVar96 = pfVar5[3] - *local_1a8;
                            fVar97 = pfVar5[5];
                            fVar98 = pfVar5[6];
                            fVar70 = fVar99 * fVar70 * (1.0 / fVar82);
                            if (fVar95 <= 0.0) {
                              fVar95 = 0.0;
                            }
                            if (fVar96 <= 0.0) {
                              fVar96 = 0.0;
                            }
                            fVar82 = (fVar95 + fVar96) *
                                     *local_1a0 *
                                     (fVar70 + ((1.0 / fVar82) * *local_188 - (fVar94 + fVar94)));
                            fVar95 = *local_198;
                            fVar94 = (fVar94 - fVar70) * *local_1b0;
                            fVar96 = *pfVar38;
                            fVar99 = *pfVar7;
                            fVar70 = 1.0 / pfVar5[3];
                            *pfVar35 = fVar70 * (fVar95 * fVar91 * fVar82 +
                                                fVar94 * fVar95 * (pfVar5[4] - *pfVar3)) + *pfVar35;
                            *pfVar1 = fVar70 * (fVar95 * fVar93 * fVar82 +
                                               fVar94 * fVar95 * (fVar97 - fVar96)) + *pfVar1;
                            *pfVar2 = fVar70 * (fVar95 * fVar101 * fVar82 +
                                               fVar94 * fVar95 * (fVar98 - fVar99)) + *pfVar2;
                          }
                          if ((uint)fVar88 < (uint)fVar71 && fVar88 != 0.0) {
                            fVar70 = *local_180;
                            fVar82 = sqrtf(fVar88 * fVar70);
                            fVar91 = *local_190;
                            fVar93 = *pfVar54 - *local_1a8;
                            fVar94 = pfVar6[3] - *local_1a8;
                            fVar95 = pfVar6[5];
                            fVar96 = pfVar6[6];
                            fVar70 = fVar88 * fVar70 * (1.0 / fVar82);
                            if (fVar93 <= 0.0) {
                              fVar93 = 0.0;
                            }
                            if (fVar94 <= 0.0) {
                              fVar94 = 0.0;
                            }
                            fVar82 = (fVar93 + fVar94) *
                                     *local_1a0 *
                                     (fVar70 + ((1.0 / fVar82) * *local_188 - (fVar91 + fVar91)));
                            fVar88 = *local_198;
                            fVar91 = (fVar91 - fVar70) * *local_1b0;
                            fVar93 = *pfVar38;
                            fVar94 = *pfVar7;
                            fVar70 = 1.0 / pfVar6[3];
                            *pfVar35 = fVar70 * (fVar88 * fVar90 * fVar82 +
                                                fVar91 * fVar88 * (pfVar6[4] - *pfVar3)) + *pfVar35;
                            *pfVar1 = fVar70 * (fVar88 * fVar86 * fVar82 +
                                               fVar91 * fVar88 * (fVar95 - fVar93)) + *pfVar1;
                            *pfVar2 = fVar70 * (fVar88 * fVar89 * fVar82 +
                                               fVar91 * fVar88 * (fVar96 - fVar94)) + *pfVar2;
                          }
                        }
                        uVar61 = uVar61 + 4;
                      } while (uVar61 < uVar32);
                    }
                    if (uVar32 < uVar27) {
                      lVar36 = lVar28 + uVar49 * 0xc;
                      fVar69 = pfVar43[2];
                      fVar67 = *pfVar43;
                      fVar68 = pfVar43[1];
                      pfVar54 = (float *)(lVar36 + 4);
                      pfVar3 = (float *)(lVar36 + 8);
                      lVar36 = (ulong)uVar27 - (ulong)uVar32;
                      puVar40 = puVar63 + uVar32;
                      do {
                        pfVar38 = (float *)(param_4 + (ulong)*puVar40 * 0x20);
                        fVar86 = fVar68 - pfVar38[1];
                        fVar82 = fVar67 - *pfVar38;
                        fVar88 = fVar69 - pfVar38[2];
                        fVar70 = fVar82 * fVar82 + fVar86 * fVar86 + fVar88 * fVar88;
                        if ((uint)fVar70 < (uint)fVar71 && fVar70 != 0.0) {
                          fVar90 = *local_180;
                          fVar89 = sqrtf(fVar70 * fVar90);
                          fVar91 = *local_190;
                          fVar93 = pfVar43[3] - *local_1a8;
                          fVar94 = pfVar38[3] - *local_1a8;
                          fVar95 = pfVar38[5];
                          fVar96 = pfVar38[6];
                          fVar70 = fVar70 * fVar90 * (1.0 / fVar89);
                          if (fVar93 <= 0.0) {
                            fVar93 = 0.0;
                          }
                          if (fVar94 <= 0.0) {
                            fVar94 = 0.0;
                          }
                          fVar89 = (fVar93 + fVar94) *
                                   *local_1a0 *
                                   (fVar70 + ((1.0 / fVar89) * *local_188 - (fVar91 + fVar91)));
                          fVar90 = *local_198;
                          fVar91 = (fVar91 - fVar70) * *local_1b0;
                          fVar93 = pfVar43[5];
                          fVar94 = pfVar43[6];
                          fVar70 = 1.0 / pfVar38[3];
                          *pfVar35 = fVar70 * (fVar90 * fVar82 * fVar89 +
                                              fVar91 * fVar90 * (pfVar38[4] - pfVar43[4])) +
                                     *pfVar35;
                          *pfVar54 = fVar70 * (fVar90 * fVar86 * fVar89 +
                                              fVar91 * fVar90 * (fVar95 - fVar93)) + *pfVar54;
                          *pfVar3 = fVar70 * (fVar90 * fVar88 * fVar89 +
                                             fVar91 * fVar90 * (fVar96 - fVar94)) + *pfVar3;
                        }
                        lVar36 = lVar36 + -1;
                        puVar40 = puVar40 + 1;
                      } while (lVar36 != 0);
                    }
                    uVar62 = uVar62 + 1;
                  } while (uVar62 != uVar55);
                }
              }
              else {
                pfVar43 = *(float **)(param_8 + 0x38);
                puVar40 = *(uint **)(param_8 + 0x40);
                uVar32 = uVar27 + 7 & 0xfffffffc;
                local_b0[0] = 3.4028235e+38;
                local_b0[1] = 3.4028235e+38;
                local_b0[2] = 3.4028235e+38;
                local_b0[3] = 3.4028235e+38;
                if (uVar32 != 0) {
                  uVar56 = 0;
                  puVar42 = puVar63 + 2;
                  pfVar35 = pfVar43 + 8;
                  do {
                    if (uVar56 < uVar27) {
                      pfVar54 = (float *)(param_4 + (ulong)puVar42[-2] * 0x20);
                      if (uVar56 + 1 < uVar27) goto LAB_001a138c;
LAB_001a1354:
                      pauVar57 = (undefined1 (*) [16])local_b0;
                      if (uVar56 + 2 < uVar27) goto LAB_001a13a0;
LAB_001a1364:
                      pauVar58 = (undefined1 (*) [12])local_b0;
                      if (uVar56 + 3 < uVar27) goto LAB_001a13b4;
LAB_001a1374:
                      pauVar60 = (undefined1 (*) [12])local_b0;
                    }
                    else {
                      pfVar54 = local_b0;
                      if (uVar27 <= uVar56 + 1) goto LAB_001a1354;
LAB_001a138c:
                      pauVar57 = (undefined1 (*) [16])(param_4 + (ulong)puVar42[-1] * 0x20);
                      if (uVar27 <= uVar56 + 2) goto LAB_001a1364;
LAB_001a13a0:
                      pauVar58 = (undefined1 (*) [12])(param_4 + (ulong)*puVar42 * 0x20);
                      if (uVar27 <= uVar56 + 3) goto LAB_001a1374;
LAB_001a13b4:
                      pauVar60 = (undefined1 (*) [12])(param_4 + (ulong)puVar42[1] * 0x20);
                    }
                    fVar71 = *pfVar54;
                    fVar67 = pfVar54[2];
                    auVar20 = *pauVar58;
                    fVar69 = SUB124(*pauVar58,0);
                    uVar65 = SUB124(*pauVar58,4);
                    auVar78 = *pauVar57;
                    auVar21 = *pauVar60;
                    fVar68 = auVar78._0_4_;
                    fVar70 = SUB124(*pauVar60,0);
                    uVar66 = SUB124(*pauVar60,4);
                    auVar13._4_4_ = fVar69;
                    auVar13._0_4_ = fVar71;
                    auVar13._8_4_ = pfVar54[1];
                    auVar13._12_4_ = uVar65;
                    auVar14._4_4_ = fVar69;
                    auVar14._0_4_ = fVar71;
                    auVar14._8_4_ = pfVar54[1];
                    auVar14._12_4_ = uVar65;
                    auVar80 = NEON_ext(auVar13,auVar14,8,1);
                    auVar17._4_4_ = fVar70;
                    auVar17._0_4_ = fVar68;
                    auVar17._8_4_ = auVar78._4_4_;
                    auVar17._12_4_ = uVar66;
                    auVar18._4_4_ = fVar70;
                    auVar18._0_4_ = fVar68;
                    auVar18._8_4_ = auVar78._4_4_;
                    auVar18._12_4_ = uVar66;
                    auVar85 = NEON_ext(auVar17,auVar18,8,1);
                    uVar56 = uVar56 + 4;
                    pfVar35[-8] = fVar71;
                    pfVar35[-7] = fVar68;
                    pfVar35[-6] = fVar69;
                    pfVar35[-5] = fVar70;
                    puVar42 = puVar42 + 4;
                    pfVar35[-4] = auVar80._0_4_;
                    pfVar35[-3] = auVar85._0_4_;
                    pfVar35[-2] = auVar80._4_4_;
                    pfVar35[-1] = auVar85._4_4_;
                    *pfVar35 = fVar67;
                    pfVar35[1] = auVar78._8_4_;
                    pfVar35[2] = auVar20._8_4_;
                    pfVar35[3] = auVar21._8_4_;
                    pfVar35 = pfVar35 + 0xc;
                  } while (uVar56 < uVar32);
                }
                uStack_138 = param_1[0xc];
                uStack_134 = uStack_138;
                local_140 = uStack_138;
                uStack_13c = uStack_138;
                uStack_128 = param_1[0xd];
                uStack_124 = uStack_128;
                local_130 = uStack_128;
                uStack_12c = uStack_128;
                uStack_118 = param_1[6];
                uStack_114 = uStack_118;
                local_120 = uStack_118;
                uStack_11c = uStack_118;
                uStack_108 = param_1[7];
                uStack_104 = uStack_108;
                local_110 = uStack_108;
                uStack_10c = uStack_108;
                uStack_f8 = param_1[8];
                uStack_f4 = uStack_f8;
                local_100 = uStack_f8;
                uStack_fc = uStack_f8;
                uStack_e8 = param_1[9];
                uStack_e4 = uStack_e8;
                local_f0 = uStack_e8;
                uStack_ec = uStack_e8;
                uStack_d8 = param_1[10];
                uStack_d4 = uStack_d8;
                local_e0 = uStack_d8;
                uStack_dc = uStack_d8;
                uVar65 = param_1[0xb];
                auVar79._0_8_ = CONCAT44(uVar65,uVar65);
                auVar79._8_4_ = uVar65;
                auVar79._12_4_ = uVar65;
                uStack_c8 = auVar79._8_8_;
                local_d0 = auVar79._0_8_;
                if (uVar55 != 0) {
                  puVar42 = puVar63 + uVar27;
                  fVar71 = (float)param_1[4];
                  uVar62 = 0;
                  uVar32 = 0;
                  do {
                    uVar31 = *puVar29;
                    puVar40[uVar62] = uVar31;
                    pfVar35 = (float *)(lVar33 + (ulong)uVar31 * 0x20);
                    fVar67 = *pfVar35;
                    fVar68 = pfVar35[1];
                    fVar69 = pfVar35[2];
                    iVar30 = (int)uVar62;
                    uVar56 = iVar30 + 2;
                    uVar62 = (ulong)uVar56;
                    puVar39 = puVar40 + (iVar30 + 1);
                    fVar70 = fVar68 - (float)*(undefined8 *)(pfVar43 + 4);
                    fVar82 = fVar68 - (float)((ulong)*(undefined8 *)(pfVar43 + 4) >> 0x20);
                    fVar86 = fVar68 - (float)*(undefined8 *)(pfVar43 + 6);
                    fVar88 = fVar68 - (float)((ulong)*(undefined8 *)(pfVar43 + 6) >> 0x20);
                    fVar89 = fVar69 - (float)*(undefined8 *)(pfVar43 + 8);
                    fVar90 = fVar69 - (float)((ulong)*(undefined8 *)(pfVar43 + 8) >> 0x20);
                    fVar91 = fVar69 - (float)*(undefined8 *)(pfVar43 + 10);
                    fVar93 = fVar69 - (float)((ulong)*(undefined8 *)(pfVar43 + 10) >> 0x20);
                    fVar70 = fVar89 * fVar89 +
                             (fVar67 - *pfVar43) * (fVar67 - *pfVar43) + fVar70 * fVar70;
                    fVar82 = fVar90 * fVar90 +
                             (fVar67 - pfVar43[1]) * (fVar67 - pfVar43[1]) + fVar82 * fVar82;
                    fVar86 = fVar91 * fVar91 +
                             (fVar67 - pfVar43[2]) * (fVar67 - pfVar43[2]) + fVar86 * fVar86;
                    fVar88 = fVar93 * fVar93 +
                             (fVar67 - pfVar43[3]) * (fVar67 - pfVar43[3]) + fVar88 * fVar88;
                    uVar49 = CONCAT26(-(ushort)(0.0 < fVar88),
                                      CONCAT24(-(ushort)(0.0 < fVar86),
                                               CONCAT22(-(ushort)(0.0 < fVar82),
                                                        -(ushort)(0.0 < fVar70)))) &
                             CONCAT26(-(ushort)(fVar88 < fVar71),
                                      CONCAT24(-(ushort)(fVar86 < fVar71),
                                               CONCAT22(-(ushort)(fVar82 < fVar71),
                                                        -(ushort)(fVar70 < fVar71))));
                    auVar74._0_8_ =
                         CONCAT35(0,CONCAT14((char)(uVar49 >> 0x10),(uint)((byte)uVar49 & 1)) &
                                    0x1ffffffff);
                    auVar74[8] = (byte)(uVar49 >> 0x20) & 1;
                    auVar74._9_3_ = 0;
                    auVar74[0xc] = (byte)(uVar49 >> 0x30) & 1;
                    local_160[1] = (ulong)auVar74._8_5_;
                    local_160[0] = auVar74._0_8_;
                    if (uVar27 != 0) {
                      uVar49 = uVar62;
                      pfVar35 = pfVar43;
                      puVar64 = puVar63;
                      uVar45 = 0;
                      do {
                        uVar50 = uVar45 + 4;
                        fVar70 = fVar67 - pfVar35[0xc];
                        lVar36 = (ulong)(uVar50 & 4) * 4;
                        fVar82 = fVar69 - (float)*(undefined8 *)(pfVar35 + 0x14);
                        fVar86 = fVar69 - (float)((ulong)*(undefined8 *)(pfVar35 + 0x14) >> 0x20);
                        fVar88 = fVar69 - (float)*(undefined8 *)(pfVar35 + 0x16);
                        fVar89 = fVar69 - (float)((ulong)*(undefined8 *)(pfVar35 + 0x16) >> 0x20);
                        uVar45 = uVar45 & 4;
                        fVar70 = fVar82 * fVar82 +
                                 fVar70 * fVar70 +
                                 (fVar68 - pfVar35[0x10]) * (fVar68 - pfVar35[0x10]);
                        fVar82 = fVar86 * fVar86 +
                                 (fVar67 - pfVar35[0xd]) * (fVar67 - pfVar35[0xd]) +
                                 (fVar68 - pfVar35[0x11]) * (fVar68 - pfVar35[0x11]);
                        fVar86 = fVar88 * fVar88 +
                                 (fVar67 - pfVar35[0xe]) * (fVar67 - pfVar35[0xe]) +
                                 (fVar68 - pfVar35[0x12]) * (fVar68 - pfVar35[0x12]);
                        fVar88 = fVar89 * fVar89 +
                                 (fVar67 - pfVar35[0xf]) * (fVar67 - pfVar35[0xf]) +
                                 (fVar68 - pfVar35[0x13]) * (fVar68 - pfVar35[0x13]);
                        uVar61 = CONCAT26(-(ushort)(0.0 < fVar88),
                                          CONCAT24(-(ushort)(0.0 < fVar86),
                                                   CONCAT22(-(ushort)(0.0 < fVar82),
                                                            -(ushort)(0.0 < fVar70)))) &
                                 CONCAT26(-(ushort)(fVar88 < fVar71),
                                          CONCAT24(-(ushort)(fVar86 < fVar71),
                                                   CONCAT22(-(ushort)(fVar82 < fVar71),
                                                            -(ushort)(fVar70 < fVar71))));
                        auVar75._0_8_ =
                             CONCAT35(0,CONCAT14((char)(uVar61 >> 0x10),(uint)((byte)uVar61 & 1)) &
                                        0x1ffffffff);
                        auVar75[8] = (byte)(uVar61 >> 0x20) & 1;
                        auVar75._9_3_ = 0;
                        auVar75[0xc] = (byte)(uVar61 >> 0x30) & 1;
                        *(ulong *)((long)local_160 + lVar36 + 8) = (ulong)auVar75._8_5_;
                        *(ulong *)((long)local_160 + lVar36) = auVar75._0_8_;
                        iVar30 = *(int *)((long)local_160 + (ulong)(uVar45 | 1) * 4);
                        iVar26 = *(int *)((long)local_160 + (ulong)(uVar45 | 2) * 4);
                        iVar9 = *(int *)((long)local_160 + (ulong)(uVar45 | 3) * 4);
                        uVar56 = *(int *)((long)local_160 + (ulong)uVar45 * 4) + (int)uVar62;
                        puVar40[uVar62] = *puVar64;
                        if (puVar64 + 1 < puVar42) {
                          uVar45 = puVar64[1];
                        }
                        else {
                          uVar45 = 0;
                        }
                        puVar40[uVar56] = uVar45;
                        uVar56 = uVar56 + iVar30;
                        if (puVar64 + 2 < puVar42) {
                          uVar45 = puVar64[2];
                        }
                        else {
                          uVar45 = 0;
                        }
                        puVar40[uVar56] = uVar45;
                        uVar56 = uVar56 + iVar26;
                        if (puVar64 + 3 < puVar42) {
                          uVar45 = puVar64[3];
                        }
                        else {
                          uVar45 = 0;
                        }
                        uVar10 = uVar56 + iVar9;
                        uVar62 = (ulong)uVar10;
                        puVar40[uVar56] = uVar45;
                        if (0x80 - uVar10 < 6) {
                          *puVar39 = uVar10 - (int)uVar49;
                          if (param_2 == 0) {
                            if (uVar10 != 0) {
                              fVar70 = *local_188;
                              fVar82 = *local_288;
                              fVar86 = *local_180;
                              uVar56 = 0;
                              do {
                                uVar52 = puVar40[uVar56 + 1];
                                uVar45 = uVar56 + 2;
                                if (uVar52 != 0) {
                                  pfVar54 = (float *)(lVar33 + (ulong)puVar40[uVar56] * 0x20);
                                  fVar88 = pfVar54[3];
                                  uVar51 = uVar52;
                                  uVar56 = uVar45;
                                  do {
                                    uVar62 = (ulong)uVar56;
                                    uVar56 = uVar56 + 1;
                                    pfVar3 = (float *)(param_4 + (ulong)puVar40[uVar62] * 0x20);
                                    fVar89 = fVar70 - fVar86 * ((*pfVar54 - *pfVar3) *
                                                                (*pfVar54 - *pfVar3) +
                                                                (pfVar54[1] - pfVar3[1]) *
                                                                (pfVar54[1] - pfVar3[1]) +
                                                               (pfVar54[2] - pfVar3[2]) *
                                                               (pfVar54[2] - pfVar3[2]));
                                    fVar88 = fVar88 + fVar89 * fVar89 * fVar82 * fVar89;
                                    uVar51 = uVar51 - 1;
                                  } while (uVar51 != 0);
                                  pfVar54[3] = fVar88;
                                  uVar45 = uVar45 + uVar52;
                                }
                                uVar56 = uVar45;
                              } while (uVar56 < uVar10);
                            }
                          }
                          else {
                            FUN_001a5d00(lVar28,lVar33,param_4,puVar40,uVar62,param_1,&local_140);
                          }
                          uVar49 = 2;
                          uVar62 = 2;
                          *puVar40 = uVar31;
                          puVar39 = puVar40 + 1;
                        }
                        uVar56 = (uint)uVar49;
                        puVar64 = puVar64 + 4;
                        pfVar35 = pfVar35 + 0xc;
                        uVar45 = uVar50;
                      } while (uVar50 < uVar27);
                    }
                    uVar31 = (uint)uVar62;
                    *puVar39 = uVar31 - uVar56;
                    uVar32 = uVar32 + 1;
                    puVar29 = puVar29 + 1;
                  } while (uVar32 != uVar55);
                  if (uVar31 != 0) {
                    if (param_2 == 0) {
                      fVar71 = *local_188;
                      fVar67 = *local_288;
                      fVar68 = *local_180;
                      uVar27 = 0;
                      do {
                        uVar32 = puVar40[uVar27 + 1];
                        uVar55 = uVar27 + 2;
                        if (uVar32 != 0) {
                          pfVar43 = (float *)(lVar33 + (ulong)puVar40[uVar27] * 0x20);
                          fVar69 = pfVar43[3];
                          uVar56 = uVar32;
                          uVar27 = uVar55;
                          do {
                            uVar62 = (ulong)uVar27;
                            uVar27 = uVar27 + 1;
                            pfVar35 = (float *)(param_4 + (ulong)puVar40[uVar62] * 0x20);
                            fVar70 = fVar71 - fVar68 * ((*pfVar43 - *pfVar35) *
                                                        (*pfVar43 - *pfVar35) +
                                                        (pfVar43[1] - pfVar35[1]) *
                                                        (pfVar43[1] - pfVar35[1]) +
                                                       (pfVar43[2] - pfVar35[2]) *
                                                       (pfVar43[2] - pfVar35[2]));
                            fVar69 = fVar69 + fVar70 * fVar70 * fVar67 * fVar70;
                            uVar56 = uVar56 - 1;
                          } while (uVar56 != 0);
                          pfVar43[3] = fVar69;
                          uVar55 = uVar55 + uVar32;
                        }
                        uVar27 = uVar55;
                      } while (uVar27 < uVar31);
                    }
                    else {
                      FUN_001a5d00(lVar28,lVar33,param_4,puVar40,uVar62,param_1,&local_140);
                    }
                  }
                }
              }
              uVar27 = 0;
              puVar59 = PTR_DAT_02710ff0;
              if (*(int *)(param_7 + uVar34 * 4) == 0) goto LAB_001a1b8c;
            }
            iVar30 = *(int *)(param_7 + uVar34 * 4 + 0x188);
            lVar36 = *(long *)(param_8 + 0x10);
            uVar55 = 0;
            do {
              iVar26 = iVar30 + uVar55;
              uVar32 = uVar27 + uVar55;
              uVar55 = uVar55 + 1;
              *(int *)(lVar36 + (ulong)uVar32 * 4) = iVar26;
            } while (uVar55 < *(uint *)(param_7 + uVar34 * 4));
            uVar27 = uVar27 + uVar55;
          }
LAB_001a1b8c:
          uVar47 = uVar47 + 1;
        } while (uVar47 != uVar44);
        if (uVar27 != 0) {
          uVar44 = *(uint *)(param_6 + lVar41 * 4);
          puVar29 = *(uint **)(param_8 + 0x48);
          puVar63 = *(uint **)(param_8 + 0x10);
          if (uVar27 < 8) {
            uVar55 = uVar27 & 0xfffffffc;
            if (param_2 == 0) {
              if (uVar44 != 0) {
                fVar71 = (float)param_1[4];
                fVar67 = *local_180;
                fVar68 = *local_188;
                fVar69 = *local_288;
                uVar47 = 0;
                do {
                  pfVar43 = (float *)(lVar33 + (ulong)puVar29[uVar47] * 0x20);
                  if (uVar55 != 0) {
                    fVar70 = *pfVar43;
                    fVar82 = pfVar43[1];
                    fVar86 = pfVar43[2];
                    uVar34 = 0;
                    pfVar35 = pfVar43 + 3;
                    do {
                      puVar40 = puVar63 + uVar34;
                      pfVar54 = (float *)(param_4 + (ulong)*puVar40 * 0x20);
                      pfVar3 = (float *)(param_4 + (ulong)puVar40[1] * 0x20);
                      pfVar38 = (float *)(param_4 + (ulong)puVar40[2] * 0x20);
                      pfVar7 = (float *)(param_4 + (ulong)puVar40[3] * 0x20);
                      fVar91 = (fVar70 - *pfVar54) * (fVar70 - *pfVar54) +
                               (fVar82 - pfVar54[1]) * (fVar82 - pfVar54[1]) +
                               (fVar86 - pfVar54[2]) * (fVar86 - pfVar54[2]);
                      fVar90 = (fVar70 - *pfVar3) * (fVar70 - *pfVar3) +
                               (fVar82 - pfVar3[1]) * (fVar82 - pfVar3[1]) +
                               (fVar86 - pfVar3[2]) * (fVar86 - pfVar3[2]);
                      fVar89 = (fVar70 - *pfVar38) * (fVar70 - *pfVar38) +
                               (fVar82 - pfVar38[1]) * (fVar82 - pfVar38[1]) +
                               (fVar86 - pfVar38[2]) * (fVar86 - pfVar38[2]);
                      fVar88 = (fVar70 - *pfVar7) * (fVar70 - *pfVar7) +
                               (fVar82 - pfVar7[1]) * (fVar82 - pfVar7[1]) +
                               (fVar86 - pfVar7[2]) * (fVar86 - pfVar7[2]);
                      bVar22 = false;
                      bVar24 = false;
                      if (fVar71 - fVar88 < 0.0) {
                        bVar22 = false;
                        bVar24 = true;
                        if (!NAN(fVar71 - fVar89)) {
                          bVar22 = fVar71 - fVar89 < 0.0;
                          bVar24 = false;
                        }
                      }
                      bVar23 = false;
                      bVar25 = false;
                      if (bVar22 != bVar24) {
                        bVar23 = false;
                        bVar25 = true;
                        if (!NAN(fVar71 - fVar90)) {
                          bVar23 = fVar71 - fVar90 < 0.0;
                          bVar25 = false;
                        }
                      }
                      bVar22 = false;
                      bVar24 = false;
                      if (bVar23 != bVar25) {
                        bVar22 = false;
                        bVar24 = true;
                        if (!NAN(fVar71 - fVar91)) {
                          bVar22 = fVar71 - fVar91 < 0.0;
                          bVar24 = false;
                        }
                      }
                      fVar93 = 1.0;
                      if (bVar22 != bVar24) {
                        fVar93 = 0.0;
                      }
                      if (fVar93 != 0.0) {
                        if ((uint)fVar91 < (uint)fVar71 && fVar91 != 0.0) {
                          fVar91 = fVar68 - fVar67 * fVar91;
                          *pfVar35 = fVar91 * fVar91 * fVar69 * fVar91 + *pfVar35;
                          if ((uint)fVar71 <= (uint)fVar90 || fVar90 == 0.0) goto LAB_001a2ba0;
LAB_001a2a30:
                          fVar90 = fVar68 - fVar67 * fVar90;
                          *pfVar35 = fVar90 * fVar90 * fVar69 * fVar90 + *pfVar35;
                          if ((uint)fVar71 <= (uint)fVar89 || fVar89 == 0.0) goto LAB_001a2bb0;
LAB_001a2a60:
                          fVar89 = fVar68 - fVar67 * fVar89;
                          *pfVar35 = fVar89 * fVar89 * fVar69 * fVar89 + *pfVar35;
                          if ((uint)fVar71 <= (uint)fVar88 || fVar88 == 0.0) goto LAB_001a2bdc;
                        }
                        else {
                          if ((uint)fVar90 < (uint)fVar71 && fVar90 != 0.0) goto LAB_001a2a30;
LAB_001a2ba0:
                          if ((uint)fVar89 < (uint)fVar71 && fVar89 != 0.0) goto LAB_001a2a60;
LAB_001a2bb0:
                          if ((uint)fVar71 <= (uint)fVar88 || fVar88 == 0.0) goto LAB_001a2bdc;
                        }
                        fVar88 = fVar68 - fVar67 * fVar88;
                        *pfVar35 = fVar88 * fVar88 * fVar69 * fVar88 + *pfVar35;
                      }
LAB_001a2bdc:
                      uVar34 = uVar34 + 4;
                    } while (uVar34 < uVar55);
                  }
                  if (uVar55 < uVar27) {
                    puVar40 = puVar63 + uVar55;
                    lVar28 = (ulong)uVar27 - (ulong)uVar55;
                    do {
                      pfVar35 = (float *)(param_4 + (ulong)*puVar40 * 0x20);
                      fVar70 = (*pfVar43 - *pfVar35) * (*pfVar43 - *pfVar35) +
                               (pfVar43[1] - pfVar35[1]) * (pfVar43[1] - pfVar35[1]) +
                               (pfVar43[2] - pfVar35[2]) * (pfVar43[2] - pfVar35[2]);
                      if ((uint)fVar70 < (uint)fVar71 && fVar70 != 0.0) {
                        fVar70 = fVar68 - fVar67 * fVar70;
                        pfVar43[3] = fVar70 * fVar70 * fVar69 * fVar70 + pfVar43[3];
                      }
                      lVar28 = lVar28 + -1;
                      puVar40 = puVar40 + 1;
                    } while (lVar28 != 0);
                  }
                  uVar47 = uVar47 + 1;
                } while (uVar47 != uVar44);
              }
            }
            else if (uVar44 != 0) {
              fVar71 = (float)param_1[4];
              uVar47 = 0;
              do {
                uVar34 = (ulong)puVar29[uVar47];
                pfVar43 = (float *)(lVar33 + uVar34 * 0x20);
                pfVar35 = (float *)(lVar28 + uVar34 * 0xc);
                if (uVar55 != 0) {
                  fVar67 = *pfVar43;
                  pfVar54 = pfVar43 + 3;
                  pfVar3 = pfVar43 + 4;
                  pfVar38 = pfVar43 + 5;
                  pfVar7 = pfVar43 + 6;
                  fVar68 = pfVar43[1];
                  lVar36 = lVar28 + uVar34 * 0xc;
                  fVar69 = pfVar43[2];
                  uVar62 = 0;
                  pfVar1 = (float *)(lVar36 + 4);
                  pfVar2 = (float *)(lVar36 + 8);
                  do {
                    puVar40 = puVar63 + uVar62;
                    pfVar37 = (float *)(param_4 + (ulong)*puVar40 * 0x20);
                    fVar96 = fVar67 - *pfVar37;
                    pfVar4 = (float *)(param_4 + (ulong)puVar40[1] * 0x20);
                    fVar97 = fVar68 - pfVar37[1];
                    pfVar5 = (float *)(param_4 + (ulong)puVar40[2] * 0x20);
                    pfVar6 = (float *)(param_4 + (ulong)puVar40[3] * 0x20);
                    fVar95 = fVar69 - pfVar37[2];
                    fVar102 = fVar68 - pfVar4[1];
                    fVar100 = fVar67 - *pfVar4;
                    fVar94 = fVar69 - pfVar4[2];
                    fVar93 = fVar68 - pfVar5[1];
                    fVar91 = fVar67 - *pfVar5;
                    fVar101 = fVar69 - pfVar5[2];
                    fVar86 = fVar68 - pfVar6[1];
                    fVar90 = fVar67 - *pfVar6;
                    fVar89 = fVar69 - pfVar6[2];
                    fVar70 = fVar96 * fVar96 + fVar97 * fVar97 + fVar95 * fVar95;
                    fVar98 = fVar100 * fVar100 + fVar102 * fVar102 + fVar94 * fVar94;
                    fVar99 = fVar91 * fVar91 + fVar93 * fVar93 + fVar101 * fVar101;
                    fVar88 = fVar90 * fVar90 + fVar86 * fVar86 + fVar89 * fVar89;
                    fVar82 = (float)param_1[4];
                    bVar22 = false;
                    bVar24 = false;
                    if (fVar82 - fVar70 < 0.0) {
                      bVar22 = false;
                      bVar24 = true;
                      if (!NAN(fVar82 - fVar98)) {
                        bVar22 = fVar82 - fVar98 < 0.0;
                        bVar24 = false;
                      }
                    }
                    bVar23 = false;
                    bVar25 = false;
                    if (bVar22 != bVar24) {
                      bVar23 = false;
                      bVar25 = true;
                      if (!NAN(fVar82 - fVar99)) {
                        bVar23 = fVar82 - fVar99 < 0.0;
                        bVar25 = false;
                      }
                    }
                    bVar22 = false;
                    bVar24 = false;
                    if (bVar23 != bVar25) {
                      bVar22 = false;
                      bVar24 = true;
                      if (!NAN(fVar82 - fVar88)) {
                        bVar22 = fVar82 - fVar88 < 0.0;
                        bVar24 = false;
                      }
                    }
                    fVar82 = 1.0;
                    if (bVar22 != bVar24) {
                      fVar82 = 0.0;
                    }
                    if (fVar82 != 0.0) {
                      if ((uint)fVar70 < (uint)fVar71 && fVar70 != 0.0) {
                        fVar83 = *local_180;
                        fVar82 = sqrtf(fVar70 * fVar83);
                        fVar84 = *local_190;
                        fVar87 = *pfVar54 - *local_1a8;
                        fVar92 = pfVar37[3] - *local_1a8;
                        fVar103 = pfVar37[5];
                        fVar104 = pfVar37[6];
                        fVar70 = fVar70 * fVar83 * (1.0 / fVar82);
                        if (fVar87 <= 0.0) {
                          fVar87 = 0.0;
                        }
                        if (fVar92 <= 0.0) {
                          fVar92 = 0.0;
                        }
                        fVar82 = (fVar87 + fVar92) *
                                 *local_1a0 *
                                 (fVar70 + ((1.0 / fVar82) * *local_188 - (fVar84 + fVar84)));
                        fVar83 = *local_198;
                        fVar84 = (fVar84 - fVar70) * *local_1b0;
                        fVar87 = *pfVar38;
                        fVar92 = *pfVar7;
                        fVar70 = 1.0 / pfVar37[3];
                        *pfVar35 = fVar70 * (fVar83 * fVar96 * fVar82 +
                                            fVar84 * fVar83 * (pfVar37[4] - *pfVar3)) + *pfVar35;
                        *pfVar1 = fVar70 * (fVar83 * fVar97 * fVar82 +
                                           fVar84 * fVar83 * (fVar103 - fVar87)) + *pfVar1;
                        *pfVar2 = fVar70 * (fVar83 * fVar95 * fVar82 +
                                           fVar84 * fVar83 * (fVar104 - fVar92)) + *pfVar2;
                      }
                      if ((uint)fVar98 < (uint)fVar71 && fVar98 != 0.0) {
                        fVar70 = *local_180;
                        fVar82 = sqrtf(fVar98 * fVar70);
                        fVar95 = *local_190;
                        fVar96 = *pfVar54 - *local_1a8;
                        fVar97 = pfVar4[3] - *local_1a8;
                        fVar83 = pfVar4[5];
                        fVar84 = pfVar4[6];
                        fVar70 = fVar98 * fVar70 * (1.0 / fVar82);
                        if (fVar96 <= 0.0) {
                          fVar96 = 0.0;
                        }
                        if (fVar97 <= 0.0) {
                          fVar97 = 0.0;
                        }
                        fVar82 = (fVar96 + fVar97) *
                                 *local_1a0 *
                                 (fVar70 + ((1.0 / fVar82) * *local_188 - (fVar95 + fVar95)));
                        fVar96 = *local_198;
                        fVar95 = (fVar95 - fVar70) * *local_1b0;
                        fVar97 = *pfVar38;
                        fVar98 = *pfVar7;
                        fVar70 = 1.0 / pfVar4[3];
                        *pfVar35 = fVar70 * (fVar96 * fVar100 * fVar82 +
                                            fVar95 * fVar96 * (pfVar4[4] - *pfVar3)) + *pfVar35;
                        *pfVar1 = fVar70 * (fVar96 * fVar102 * fVar82 +
                                           fVar95 * fVar96 * (fVar83 - fVar97)) + *pfVar1;
                        *pfVar2 = fVar70 * (fVar96 * fVar94 * fVar82 +
                                           fVar95 * fVar96 * (fVar84 - fVar98)) + *pfVar2;
                      }
                      if ((uint)fVar99 < (uint)fVar71 && fVar99 != 0.0) {
                        fVar70 = *local_180;
                        fVar82 = sqrtf(fVar99 * fVar70);
                        fVar94 = *local_190;
                        fVar95 = *pfVar54 - *local_1a8;
                        fVar96 = pfVar5[3] - *local_1a8;
                        fVar97 = pfVar5[5];
                        fVar98 = pfVar5[6];
                        fVar70 = fVar99 * fVar70 * (1.0 / fVar82);
                        if (fVar95 <= 0.0) {
                          fVar95 = 0.0;
                        }
                        if (fVar96 <= 0.0) {
                          fVar96 = 0.0;
                        }
                        fVar82 = (fVar95 + fVar96) *
                                 *local_1a0 *
                                 (fVar70 + ((1.0 / fVar82) * *local_188 - (fVar94 + fVar94)));
                        fVar95 = *local_198;
                        fVar94 = (fVar94 - fVar70) * *local_1b0;
                        fVar96 = *pfVar38;
                        fVar99 = *pfVar7;
                        fVar70 = 1.0 / pfVar5[3];
                        *pfVar35 = fVar70 * (fVar95 * fVar91 * fVar82 +
                                            fVar94 * fVar95 * (pfVar5[4] - *pfVar3)) + *pfVar35;
                        *pfVar1 = fVar70 * (fVar95 * fVar93 * fVar82 +
                                           fVar94 * fVar95 * (fVar97 - fVar96)) + *pfVar1;
                        *pfVar2 = fVar70 * (fVar95 * fVar101 * fVar82 +
                                           fVar94 * fVar95 * (fVar98 - fVar99)) + *pfVar2;
                      }
                      if ((uint)fVar88 < (uint)fVar71 && fVar88 != 0.0) {
                        fVar70 = *local_180;
                        fVar82 = sqrtf(fVar88 * fVar70);
                        fVar91 = *local_190;
                        fVar93 = *pfVar54 - *local_1a8;
                        fVar94 = pfVar6[3] - *local_1a8;
                        fVar95 = pfVar6[5];
                        fVar96 = pfVar6[6];
                        fVar70 = fVar88 * fVar70 * (1.0 / fVar82);
                        if (fVar93 <= 0.0) {
                          fVar93 = 0.0;
                        }
                        if (fVar94 <= 0.0) {
                          fVar94 = 0.0;
                        }
                        fVar82 = (fVar93 + fVar94) *
                                 *local_1a0 *
                                 (fVar70 + ((1.0 / fVar82) * *local_188 - (fVar91 + fVar91)));
                        fVar88 = *local_198;
                        fVar91 = (fVar91 - fVar70) * *local_1b0;
                        fVar93 = *pfVar38;
                        fVar94 = *pfVar7;
                        fVar70 = 1.0 / pfVar6[3];
                        *pfVar35 = fVar70 * (fVar88 * fVar90 * fVar82 +
                                            fVar91 * fVar88 * (pfVar6[4] - *pfVar3)) + *pfVar35;
                        *pfVar1 = fVar70 * (fVar88 * fVar86 * fVar82 +
                                           fVar91 * fVar88 * (fVar95 - fVar93)) + *pfVar1;
                        *pfVar2 = fVar70 * (fVar88 * fVar89 * fVar82 +
                                           fVar91 * fVar88 * (fVar96 - fVar94)) + *pfVar2;
                      }
                    }
                    uVar62 = uVar62 + 4;
                  } while (uVar62 < uVar55);
                }
                if (uVar55 < uVar27) {
                  lVar36 = lVar28 + uVar34 * 0xc;
                  fVar69 = pfVar43[2];
                  fVar67 = *pfVar43;
                  fVar68 = pfVar43[1];
                  pfVar54 = (float *)(lVar36 + 4);
                  pfVar3 = (float *)(lVar36 + 8);
                  lVar36 = (ulong)uVar27 - (ulong)uVar55;
                  puVar40 = puVar63 + uVar55;
                  do {
                    pfVar38 = (float *)(param_4 + (ulong)*puVar40 * 0x20);
                    fVar86 = fVar68 - pfVar38[1];
                    fVar82 = fVar67 - *pfVar38;
                    fVar88 = fVar69 - pfVar38[2];
                    fVar70 = fVar82 * fVar82 + fVar86 * fVar86 + fVar88 * fVar88;
                    if ((uint)fVar70 < (uint)fVar71 && fVar70 != 0.0) {
                      fVar90 = *local_180;
                      fVar89 = sqrtf(fVar70 * fVar90);
                      fVar91 = *local_190;
                      fVar93 = pfVar43[3] - *local_1a8;
                      fVar94 = pfVar38[3] - *local_1a8;
                      fVar95 = pfVar38[5];
                      fVar96 = pfVar38[6];
                      fVar70 = fVar70 * fVar90 * (1.0 / fVar89);
                      if (fVar93 <= 0.0) {
                        fVar93 = 0.0;
                      }
                      if (fVar94 <= 0.0) {
                        fVar94 = 0.0;
                      }
                      fVar89 = (fVar93 + fVar94) *
                               *local_1a0 *
                               (fVar70 + ((1.0 / fVar89) * *local_188 - (fVar91 + fVar91)));
                      fVar90 = *local_198;
                      fVar91 = (fVar91 - fVar70) * *local_1b0;
                      fVar93 = pfVar43[5];
                      fVar94 = pfVar43[6];
                      fVar70 = 1.0 / pfVar38[3];
                      *pfVar35 = fVar70 * (fVar90 * fVar82 * fVar89 +
                                          fVar91 * fVar90 * (pfVar38[4] - pfVar43[4])) + *pfVar35;
                      *pfVar54 = fVar70 * (fVar90 * fVar86 * fVar89 +
                                          fVar91 * fVar90 * (fVar95 - fVar93)) + *pfVar54;
                      *pfVar3 = fVar70 * (fVar90 * fVar88 * fVar89 +
                                         fVar91 * fVar90 * (fVar96 - fVar94)) + *pfVar3;
                    }
                    lVar36 = lVar36 + -1;
                    puVar40 = puVar40 + 1;
                  } while (lVar36 != 0);
                }
                uVar47 = uVar47 + 1;
              } while (uVar47 != uVar44);
            }
          }
          else {
            pfVar43 = *(float **)(param_8 + 0x38);
            puVar40 = *(uint **)(param_8 + 0x40);
            uVar55 = uVar27 + 7 & 0xfffffffc;
            local_b0[0] = 3.4028235e+38;
            local_b0[1] = 3.4028235e+38;
            local_b0[2] = 3.4028235e+38;
            local_b0[3] = 3.4028235e+38;
            if (uVar55 != 0) {
              uVar32 = 0;
              puVar42 = puVar63 + 2;
              pfVar35 = pfVar43 + 8;
              do {
                if (uVar32 < uVar27) {
                  pfVar54 = (float *)(param_4 + (ulong)puVar42[-2] * 0x20);
                  if (uVar32 + 1 < uVar27) goto LAB_001a25a8;
LAB_001a2570:
                  pauVar57 = (undefined1 (*) [16])local_b0;
                  if (uVar32 + 2 < uVar27) goto LAB_001a25bc;
LAB_001a2580:
                  pauVar58 = (undefined1 (*) [12])local_b0;
                  if (uVar32 + 3 < uVar27) goto LAB_001a25d0;
LAB_001a2590:
                  pauVar60 = (undefined1 (*) [12])local_b0;
                }
                else {
                  pfVar54 = local_b0;
                  if (uVar27 <= uVar32 + 1) goto LAB_001a2570;
LAB_001a25a8:
                  pauVar57 = (undefined1 (*) [16])(param_4 + (ulong)puVar42[-1] * 0x20);
                  if (uVar27 <= uVar32 + 2) goto LAB_001a2580;
LAB_001a25bc:
                  pauVar58 = (undefined1 (*) [12])(param_4 + (ulong)*puVar42 * 0x20);
                  if (uVar27 <= uVar32 + 3) goto LAB_001a2590;
LAB_001a25d0:
                  pauVar60 = (undefined1 (*) [12])(param_4 + (ulong)puVar42[1] * 0x20);
                }
                fVar71 = *pfVar54;
                fVar67 = pfVar54[2];
                auVar20 = *pauVar58;
                fVar69 = SUB124(*pauVar58,0);
                uVar65 = SUB124(*pauVar58,4);
                auVar78 = *pauVar57;
                auVar21 = *pauVar60;
                fVar68 = auVar78._0_4_;
                fVar70 = SUB124(*pauVar60,0);
                uVar66 = SUB124(*pauVar60,4);
                auVar11._4_4_ = fVar69;
                auVar11._0_4_ = fVar71;
                auVar11._8_4_ = pfVar54[1];
                auVar11._12_4_ = uVar65;
                auVar12._4_4_ = fVar69;
                auVar12._0_4_ = fVar71;
                auVar12._8_4_ = pfVar54[1];
                auVar12._12_4_ = uVar65;
                auVar80 = NEON_ext(auVar11,auVar12,8,1);
                auVar15._4_4_ = fVar70;
                auVar15._0_4_ = fVar68;
                auVar15._8_4_ = auVar78._4_4_;
                auVar15._12_4_ = uVar66;
                auVar16._4_4_ = fVar70;
                auVar16._0_4_ = fVar68;
                auVar16._8_4_ = auVar78._4_4_;
                auVar16._12_4_ = uVar66;
                auVar85 = NEON_ext(auVar15,auVar16,8,1);
                uVar32 = uVar32 + 4;
                pfVar35[-8] = fVar71;
                pfVar35[-7] = fVar68;
                pfVar35[-6] = fVar69;
                pfVar35[-5] = fVar70;
                puVar42 = puVar42 + 4;
                pfVar35[-4] = auVar80._0_4_;
                pfVar35[-3] = auVar85._0_4_;
                pfVar35[-2] = auVar80._4_4_;
                pfVar35[-1] = auVar85._4_4_;
                *pfVar35 = fVar67;
                pfVar35[1] = auVar78._8_4_;
                pfVar35[2] = auVar20._8_4_;
                pfVar35[3] = auVar21._8_4_;
                pfVar35 = pfVar35 + 0xc;
              } while (uVar32 < uVar55);
            }
            uStack_138 = param_1[0xc];
            uStack_134 = uStack_138;
            local_140 = uStack_138;
            uStack_13c = uStack_138;
            uStack_128 = param_1[0xd];
            uStack_124 = uStack_128;
            local_130 = uStack_128;
            uStack_12c = uStack_128;
            uStack_118 = param_1[6];
            uStack_114 = uStack_118;
            local_120 = uStack_118;
            uStack_11c = uStack_118;
            uStack_108 = param_1[7];
            uStack_104 = uStack_108;
            local_110 = uStack_108;
            uStack_10c = uStack_108;
            uStack_f8 = param_1[8];
            uStack_f4 = uStack_f8;
            local_100 = uStack_f8;
            uStack_fc = uStack_f8;
            uStack_e8 = param_1[9];
            uStack_e4 = uStack_e8;
            local_f0 = uStack_e8;
            uStack_ec = uStack_e8;
            uStack_d8 = param_1[10];
            uStack_d4 = uStack_d8;
            local_e0 = uStack_d8;
            uStack_dc = uStack_d8;
            uVar65 = param_1[0xb];
            auVar81._0_8_ = CONCAT44(uVar65,uVar65);
            auVar81._8_4_ = uVar65;
            auVar81._12_4_ = uVar65;
            uStack_c8 = auVar81._8_8_;
            local_d0 = auVar81._0_8_;
            if (uVar44 != 0) {
              puVar42 = puVar63 + uVar27;
              fVar71 = (float)param_1[4];
              uVar47 = 0;
              uVar55 = 0;
              do {
                uVar56 = *puVar29;
                puVar40[uVar47] = uVar56;
                pfVar35 = (float *)(lVar33 + (ulong)uVar56 * 0x20);
                fVar67 = *pfVar35;
                fVar68 = pfVar35[1];
                fVar69 = pfVar35[2];
                fVar89 = fVar68 - (float)*(undefined8 *)(pfVar43 + 4);
                fVar90 = fVar68 - (float)((ulong)*(undefined8 *)(pfVar43 + 4) >> 0x20);
                fVar91 = fVar68 - (float)*(undefined8 *)(pfVar43 + 6);
                fVar93 = fVar68 - (float)((ulong)*(undefined8 *)(pfVar43 + 6) >> 0x20);
                fVar70 = fVar69 - (float)*(undefined8 *)(pfVar43 + 8);
                fVar82 = fVar69 - (float)((ulong)*(undefined8 *)(pfVar43 + 8) >> 0x20);
                fVar86 = fVar69 - (float)*(undefined8 *)(pfVar43 + 10);
                fVar88 = fVar69 - (float)((ulong)*(undefined8 *)(pfVar43 + 10) >> 0x20);
                puVar39 = puVar40 + ((int)uVar47 + 1);
                uVar47 = (ulong)((int)uVar47 + 2);
                fVar70 = fVar70 * fVar70 +
                         (fVar67 - *pfVar43) * (fVar67 - *pfVar43) + fVar89 * fVar89;
                fVar82 = fVar82 * fVar82 +
                         (fVar67 - pfVar43[1]) * (fVar67 - pfVar43[1]) + fVar90 * fVar90;
                fVar86 = fVar86 * fVar86 +
                         (fVar67 - pfVar43[2]) * (fVar67 - pfVar43[2]) + fVar91 * fVar91;
                fVar88 = fVar88 * fVar88 +
                         (fVar67 - pfVar43[3]) * (fVar67 - pfVar43[3]) + fVar93 * fVar93;
                uVar34 = CONCAT26(-(ushort)(0.0 < fVar88),
                                  CONCAT24(-(ushort)(0.0 < fVar86),
                                           CONCAT22(-(ushort)(0.0 < fVar82),-(ushort)(0.0 < fVar70))
                                          )) &
                         CONCAT26(-(ushort)(fVar88 < fVar71),
                                  CONCAT24(-(ushort)(fVar86 < fVar71),
                                           CONCAT22(-(ushort)(fVar82 < fVar71),
                                                    -(ushort)(fVar70 < fVar71))));
                auVar76._0_8_ =
                     CONCAT35(0,CONCAT14((char)(uVar34 >> 0x10),(uint)((byte)uVar34 & 1)) &
                                0x1ffffffff);
                auVar76[8] = (byte)(uVar34 >> 0x20) & 1;
                auVar76._9_3_ = 0;
                auVar76[0xc] = (byte)(uVar34 >> 0x30) & 1;
                local_160[1] = (ulong)auVar76._8_5_;
                local_160[0] = auVar76._0_8_;
                uVar34 = uVar47;
                pfVar35 = pfVar43;
                puVar64 = puVar63;
                uVar32 = 0;
                do {
                  uVar31 = uVar32 + 4;
                  fVar70 = fVar67 - pfVar35[0xc];
                  lVar36 = (ulong)(uVar31 & 4) * 4;
                  fVar82 = fVar69 - (float)*(undefined8 *)(pfVar35 + 0x14);
                  fVar86 = fVar69 - (float)((ulong)*(undefined8 *)(pfVar35 + 0x14) >> 0x20);
                  fVar88 = fVar69 - (float)*(undefined8 *)(pfVar35 + 0x16);
                  fVar89 = fVar69 - (float)((ulong)*(undefined8 *)(pfVar35 + 0x16) >> 0x20);
                  uVar32 = uVar32 & 4;
                  fVar70 = fVar82 * fVar82 +
                           fVar70 * fVar70 + (fVar68 - pfVar35[0x10]) * (fVar68 - pfVar35[0x10]);
                  fVar82 = fVar86 * fVar86 +
                           (fVar67 - pfVar35[0xd]) * (fVar67 - pfVar35[0xd]) +
                           (fVar68 - pfVar35[0x11]) * (fVar68 - pfVar35[0x11]);
                  fVar86 = fVar88 * fVar88 +
                           (fVar67 - pfVar35[0xe]) * (fVar67 - pfVar35[0xe]) +
                           (fVar68 - pfVar35[0x12]) * (fVar68 - pfVar35[0x12]);
                  fVar88 = fVar89 * fVar89 +
                           (fVar67 - pfVar35[0xf]) * (fVar67 - pfVar35[0xf]) +
                           (fVar68 - pfVar35[0x13]) * (fVar68 - pfVar35[0x13]);
                  uVar62 = CONCAT26(-(ushort)(0.0 < fVar88),
                                    CONCAT24(-(ushort)(0.0 < fVar86),
                                             CONCAT22(-(ushort)(0.0 < fVar82),
                                                      -(ushort)(0.0 < fVar70)))) &
                           CONCAT26(-(ushort)(fVar88 < fVar71),
                                    CONCAT24(-(ushort)(fVar86 < fVar71),
                                             CONCAT22(-(ushort)(fVar82 < fVar71),
                                                      -(ushort)(fVar70 < fVar71))));
                  auVar77._0_8_ =
                       CONCAT35(0,CONCAT14((char)(uVar62 >> 0x10),(uint)((byte)uVar62 & 1)) &
                                  0x1ffffffff);
                  auVar77[8] = (byte)(uVar62 >> 0x20) & 1;
                  auVar77._9_3_ = 0;
                  auVar77[0xc] = (byte)(uVar62 >> 0x30) & 1;
                  *(ulong *)((long)local_160 + lVar36 + 8) = (ulong)auVar77._8_5_;
                  *(ulong *)((long)local_160 + lVar36) = auVar77._0_8_;
                  iVar30 = *(int *)((long)local_160 + (ulong)(uVar32 | 1) * 4);
                  iVar26 = *(int *)((long)local_160 + (ulong)(uVar32 | 2) * 4);
                  iVar9 = *(int *)((long)local_160 + (ulong)(uVar32 | 3) * 4);
                  uVar32 = *(int *)((long)local_160 + (ulong)uVar32 * 4) + (int)uVar47;
                  puVar40[uVar47] = *puVar64;
                  if (puVar64 + 1 < puVar42) {
                    uVar45 = puVar64[1];
                  }
                  else {
                    uVar45 = 0;
                  }
                  puVar40[uVar32] = uVar45;
                  uVar32 = uVar32 + iVar30;
                  if (puVar64 + 2 < puVar42) {
                    uVar45 = puVar64[2];
                  }
                  else {
                    uVar45 = 0;
                  }
                  puVar40[uVar32] = uVar45;
                  uVar32 = uVar32 + iVar26;
                  if (puVar64 + 3 < puVar42) {
                    uVar45 = puVar64[3];
                  }
                  else {
                    uVar45 = 0;
                  }
                  uVar50 = uVar32 + iVar9;
                  uVar47 = (ulong)uVar50;
                  puVar40[uVar32] = uVar45;
                  if (0x80 - uVar50 < 6) {
                    *puVar39 = uVar50 - (int)uVar34;
                    if (param_2 == 0) {
                      if (uVar50 != 0) {
                        fVar70 = *local_188;
                        fVar82 = *local_288;
                        fVar86 = *local_180;
                        uVar32 = 0;
                        do {
                          uVar10 = puVar40[uVar32 + 1];
                          uVar45 = uVar32 + 2;
                          if (uVar10 != 0) {
                            pfVar54 = (float *)(lVar33 + (ulong)puVar40[uVar32] * 0x20);
                            fVar88 = pfVar54[3];
                            uVar52 = uVar10;
                            uVar32 = uVar45;
                            do {
                              uVar47 = (ulong)uVar32;
                              uVar32 = uVar32 + 1;
                              pfVar3 = (float *)(param_4 + (ulong)puVar40[uVar47] * 0x20);
                              fVar89 = fVar70 - fVar86 * ((*pfVar54 - *pfVar3) *
                                                          (*pfVar54 - *pfVar3) +
                                                          (pfVar54[1] - pfVar3[1]) *
                                                          (pfVar54[1] - pfVar3[1]) +
                                                         (pfVar54[2] - pfVar3[2]) *
                                                         (pfVar54[2] - pfVar3[2]));
                              fVar88 = fVar88 + fVar89 * fVar89 * fVar82 * fVar89;
                              uVar52 = uVar52 - 1;
                            } while (uVar52 != 0);
                            pfVar54[3] = fVar88;
                            uVar45 = uVar45 + uVar10;
                          }
                          uVar32 = uVar45;
                        } while (uVar32 < uVar50);
                      }
                    }
                    else {
                      FUN_001a5d00(lVar28,lVar33,param_4,puVar40,uVar47,param_1,&local_140);
                    }
                    uVar34 = 2;
                    uVar47 = 2;
                    *puVar40 = uVar56;
                    puVar39 = puVar40 + 1;
                  }
                  puVar64 = puVar64 + 4;
                  pfVar35 = pfVar35 + 0xc;
                  uVar32 = uVar31;
                } while (uVar31 < uVar27);
                uVar32 = (uint)uVar47;
                *puVar39 = uVar32 - (int)uVar34;
                uVar55 = uVar55 + 1;
                puVar29 = puVar29 + 1;
              } while (uVar55 != uVar44);
              if (uVar32 != 0) {
                if (param_2 == 0) {
                  fVar71 = *local_188;
                  fVar67 = *local_288;
                  fVar68 = *local_180;
                  uVar44 = 0;
                  do {
                    uVar55 = puVar40[uVar44 + 1];
                    uVar27 = uVar44 + 2;
                    if (uVar55 != 0) {
                      pfVar43 = (float *)(lVar33 + (ulong)puVar40[uVar44] * 0x20);
                      fVar69 = pfVar43[3];
                      uVar56 = uVar55;
                      uVar44 = uVar27;
                      do {
                        uVar47 = (ulong)uVar44;
                        uVar44 = uVar44 + 1;
                        pfVar35 = (float *)(param_4 + (ulong)puVar40[uVar47] * 0x20);
                        fVar70 = fVar71 - fVar68 * ((*pfVar43 - *pfVar35) * (*pfVar43 - *pfVar35) +
                                                    (pfVar43[1] - pfVar35[1]) *
                                                    (pfVar43[1] - pfVar35[1]) +
                                                   (pfVar43[2] - pfVar35[2]) *
                                                   (pfVar43[2] - pfVar35[2]));
                        fVar69 = fVar69 + fVar70 * fVar70 * fVar67 * fVar70;
                        uVar56 = uVar56 - 1;
                      } while (uVar56 != 0);
                      pfVar43[3] = fVar69;
                      uVar27 = uVar27 + uVar55;
                    }
                    uVar44 = uVar27;
                  } while (uVar44 < uVar32);
                }
                else {
                  FUN_001a5d00(lVar28,lVar33,param_4,puVar40,uVar47,param_1,&local_140);
                }
              }
            }
          }
        }
      }
      lVar41 = lVar41 + 1;
    } while (lVar41 != 0x1a);
  }
  else {
    FUN_001a2df0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  if ((param_2 == 1) && (uVar47 = (ulong)*(uint *)(param_5 + 8), *(uint *)(param_5 + 8) != 0)) {
    fVar71 = (float)param_1[0xe];
    pfVar43 = (float *)(param_3 + (ulong)*(uint *)(param_5 + 0xc) * 0xc + 8);
    pfVar35 = (float *)(param_4 + (ulong)*(uint *)(param_5 + 0xc) * 0x20 + 0xc);
    do {
      fVar67 = fVar71 * (1.0 / *pfVar35);
      pfVar43[-2] = pfVar43[-2] * fVar67;
      pfVar43[-1] = fVar67 * pfVar43[-1];
      uVar47 = uVar47 - 1;
      *pfVar43 = fVar67 * *pfVar43;
      pfVar43 = pfVar43 + 3;
      pfVar35 = pfVar35 + 8;
    } while (uVar47 != 0);
  }
  return;
}


