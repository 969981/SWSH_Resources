/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001a2df0; name: FUN_001a2df0
 */


void FUN_001a2df0(long param_1,int param_2,long param_3,long param_4,short *param_5,long param_6,
                 long param_7,undefined8 *param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  long lVar29;
  uint *puVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  ulong uVar37;
  ulong uVar38;
  uint *puVar39;
  int iVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  uint *puVar44;
  uint uVar45;
  ulong uVar46;
  uint uVar47;
  uint uVar48;
  float *pfVar49;
  uint uVar50;
  int iVar51;
  undefined1 (*pauVar52) [16];
  undefined1 (*pauVar53) [12];
  undefined1 (*pauVar54) [12];
  uint *puVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  long lVar59;
  long lVar60;
  uint uVar61;
  ulong uVar62;
  float *pfVar63;
  uint *puVar64;
  uint *puVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar72 [13];
  undefined1 auVar74 [13];
  undefined1 auVar75 [13];
  undefined1 auVar76 [16];
  undefined1 auVar73 [13];
  undefined1 auVar77 [16];
  float fVar78;
  undefined1 auVar79 [16];
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
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  long local_188;
  long local_180;
  float local_170;
  float local_16c;
  float local_168;
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
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float local_b0 [4];
  
  uVar11 = *param_8;
  uVar13 = param_8[1];
  uVar12 = param_8[4];
  uVar14 = param_8[5];
  local_168 = *(float *)(param_1 + 0x14);
  local_170 = local_168 * (float)(int)*param_5;
  local_16c = local_168 * (float)(int)param_5[1];
  local_168 = local_168 * (float)(int)param_5[2];
  uVar61 = *(uint *)(param_5 + 4);
  if (uVar61 != 0) {
    local_188 = param_4 + (ulong)*(uint *)(param_5 + 6) * 0x20;
    local_180 = param_3 + (ulong)*(uint *)(param_5 + 6) * 0xc;
    while( true ) {
      uVar34 = uVar61;
      if (0x1ff < uVar61) {
        uVar34 = 0x200;
      }
      uVar56 = uVar34 + 1 | uVar34 + 1 >> 1;
      uVar56 = uVar56 | uVar56 >> 2;
      uVar56 = uVar56 | uVar56 >> 4;
      uVar56 = uVar56 | uVar56 >> 8;
      iVar31 = (uVar56 | uVar56 >> 0x10) + 1;
      FUN_001a67a0(local_188,uVar34,uVar12,uVar11,param_8[10],iVar31,&local_170);
      FUN_00197330(param_2,local_180,local_188,uVar12,uVar11,iVar31,param_1,param_8);
      uVar61 = uVar61 - uVar34;
      if (uVar61 == 0) break;
      lVar41 = local_188 + (ulong)uVar34 * 0x20;
      lVar59 = local_180 + (ulong)uVar34 * 0xc;
      lVar29 = lVar41;
      lVar60 = lVar59;
      uVar56 = uVar61;
      do {
        uVar35 = uVar56;
        if (0x1ff < uVar56) {
          uVar35 = 0x200;
        }
        uVar36 = uVar35 + 1 | uVar35 + 1 >> 1;
        uVar36 = uVar36 | uVar36 >> 2;
        uVar36 = uVar36 | uVar36 >> 4;
        uVar36 = uVar36 | uVar36 >> 8;
        iVar51 = (uVar36 | uVar36 >> 0x10) + 1;
        FUN_001a67a0(lVar29,uVar35,uVar14,uVar13,param_8[10],iVar51,&local_170);
        FUN_0019a340(param_2,local_180,lVar60,local_188,lVar29,uVar12,uVar14,uVar11,uVar13,iVar31,
                     iVar51,1,param_1,param_8,uVar34 < uVar35);
        lVar60 = lVar60 + (ulong)uVar35 * 0xc;
        lVar29 = lVar29 + (ulong)uVar35 * 0x20;
        uVar56 = uVar56 - uVar35;
      } while (uVar56 != 0);
      local_188 = lVar41;
      local_180 = lVar59;
    }
  }
  if (*(int *)(param_7 + 0x310) != 0) {
    lVar41 = 0;
    do {
      uVar61 = *(uint *)(param_6 + lVar41 * 4);
      uVar37 = (ulong)uVar61;
      if (uVar61 != 0) {
        uVar42 = (ulong)*(uint *)(param_6 + lVar41 * 4 + 0x6c);
        lVar29 = param_4 + uVar42 * 0x20;
        lVar60 = param_3 + uVar42 * 0xc;
        uVar34 = *(uint *)(PTR_DAT_02710ff0 + lVar41 * 0x50);
        uVar38 = (ulong)uVar34;
        uVar42 = uVar37;
        do {
          uVar35 = (uint)uVar42;
          uVar56 = uVar35;
          if (0x1ff < uVar35) {
            uVar56 = 0x200;
          }
          if (uVar34 != 0) {
            uVar36 = uVar56 + 1 | uVar56 + 1 >> 1;
            uVar36 = uVar36 | uVar36 >> 2;
            uVar36 = uVar36 | uVar36 >> 4;
            uVar36 = uVar36 | uVar36 >> 8;
            iVar31 = (uVar36 | uVar36 >> 0x10) + 1;
            uVar42 = 0;
            bVar25 = false;
            if (uVar61 < 0xc9) {
              do {
                uVar36 = *(uint *)(PTR_DAT_02710ff0 + uVar42 * 4 + lVar41 * 0x50 + 4);
                uVar58 = *(uint *)(param_7 + (ulong)uVar36 * 4);
                if (200 < uVar58) {
                  if (!bVar25) {
                    FUN_001a67a0(lVar29,uVar56,uVar12,uVar11,param_8[10],iVar31,&local_170);
                  }
                  lVar59 = param_4 + (ulong)*(uint *)(param_7 + (ulong)uVar36 * 4 + 0x188) * 0x20;
                  do {
                    uVar36 = uVar58;
                    if (0x1ff < uVar58) {
                      uVar36 = 0x200;
                    }
                    uVar33 = uVar36 + 1 | uVar36 + 1 >> 1;
                    uVar33 = uVar33 | uVar33 >> 2;
                    uVar33 = uVar33 | uVar33 >> 4;
                    uVar33 = uVar33 | uVar33 >> 8;
                    iVar51 = (uVar33 | uVar33 >> 0x10) + 1;
                    FUN_001a67a0(lVar59,uVar36,uVar14,uVar13,param_8[10],iVar51,&local_170);
                    FUN_0019a340(param_2,lVar60,0,lVar29,lVar59,uVar12,uVar14,uVar11,uVar13,iVar31,
                                 iVar51,0,param_1,param_8,uVar36 < uVar56);
                    lVar59 = lVar59 + (ulong)uVar36 * 0x20;
                    uVar58 = uVar58 - uVar36;
                  } while (uVar58 != 0);
                  bVar25 = true;
                }
                uVar42 = uVar42 + 1;
              } while (uVar42 != uVar38);
            }
            else {
              do {
                uVar36 = *(uint *)(PTR_DAT_02710ff0 + uVar42 * 4 + lVar41 * 0x50 + 4);
                uVar58 = *(uint *)(param_7 + (ulong)uVar36 * 4);
                if (!bVar25) {
                  FUN_001a67a0(lVar29,uVar56,uVar12,uVar11,param_8[10],iVar31,&local_170);
                }
                if (uVar58 != 0) {
                  lVar59 = param_4 + (ulong)*(uint *)(param_7 + (ulong)uVar36 * 4 + 0x188) * 0x20;
                  do {
                    uVar36 = uVar58;
                    if (0x1ff < uVar58) {
                      uVar36 = 0x200;
                    }
                    uVar33 = uVar36 + 1 | uVar36 + 1 >> 1;
                    uVar33 = uVar33 | uVar33 >> 2;
                    uVar33 = uVar33 | uVar33 >> 4;
                    uVar33 = uVar33 | uVar33 >> 8;
                    iVar51 = (uVar33 | uVar33 >> 0x10) + 1;
                    FUN_001a67a0(lVar59,uVar36,uVar14,uVar13,param_8[10],iVar51,&local_170);
                    FUN_0019a340(param_2,lVar60,0,lVar29,lVar59,uVar12,uVar14,uVar11,uVar13,iVar31,
                                 iVar51,0,param_1,param_8,uVar36 < uVar56);
                    lVar59 = lVar59 + (ulong)uVar36 * 0x20;
                    uVar58 = uVar58 - uVar36;
                  } while (uVar58 != 0);
                }
                uVar42 = uVar42 + 1;
                bVar25 = true;
              } while (uVar42 != uVar38);
            }
            if (uVar34 != 0) {
              uVar42 = 0;
              uVar36 = 0;
              do {
                if (uVar61 < 0xc9) {
                  uVar58 = *(uint *)(PTR_DAT_02710ff0 + uVar42 * 4 + lVar41 * 0x50 + 4);
                  uVar33 = *(uint *)(param_7 + (ulong)uVar58 * 4);
                  if (uVar33 - 1 < 200) {
                    if (0x200 < uVar33 + uVar36) {
                      puVar30 = (uint *)param_8[9];
                      puVar65 = (uint *)param_8[2];
                      if (uVar36 < 8) {
                        uVar57 = uVar36 & 0xfffffffc;
                        if (param_2 == 0) {
                          fVar68 = *(float *)(param_1 + 0x10);
                          fVar69 = *(float *)(param_1 + 0x34);
                          fVar15 = *(float *)(param_1 + 0x1c);
                          fVar70 = *(float *)(param_1 + 0x20);
                          uVar43 = 0;
                          do {
                            pfVar4 = (float *)(lVar29 + (ulong)puVar30[uVar43] * 0x20);
                            if (uVar57 != 0) {
                              fVar71 = *pfVar4;
                              fVar97 = pfVar4[1];
                              fVar93 = pfVar4[2];
                              uVar46 = 0;
                              pfVar63 = pfVar4 + 3;
                              do {
                                puVar55 = puVar65 + uVar46;
                                pfVar49 = (float *)(param_4 + (ulong)*puVar55 * 0x20);
                                pfVar3 = (float *)(param_4 + (ulong)puVar55[1] * 0x20);
                                pfVar9 = (float *)(param_4 + (ulong)puVar55[2] * 0x20);
                                pfVar10 = (float *)(param_4 + (ulong)puVar55[3] * 0x20);
                                fVar85 = (fVar71 - *pfVar49) * (fVar71 - *pfVar49) +
                                         (fVar97 - pfVar49[1]) * (fVar97 - pfVar49[1]) +
                                         (fVar93 - pfVar49[2]) * (fVar93 - pfVar49[2]);
                                fVar80 = (fVar71 - *pfVar3) * (fVar71 - *pfVar3) +
                                         (fVar97 - pfVar3[1]) * (fVar97 - pfVar3[1]) +
                                         (fVar93 - pfVar3[2]) * (fVar93 - pfVar3[2]);
                                fVar81 = (fVar71 - *pfVar9) * (fVar71 - *pfVar9) +
                                         (fVar97 - pfVar9[1]) * (fVar97 - pfVar9[1]) +
                                         (fVar93 - pfVar9[2]) * (fVar93 - pfVar9[2]);
                                fVar78 = (fVar71 - *pfVar10) * (fVar71 - *pfVar10) +
                                         (fVar97 - pfVar10[1]) * (fVar97 - pfVar10[1]) +
                                         (fVar93 - pfVar10[2]) * (fVar93 - pfVar10[2]);
                                bVar25 = false;
                                bVar27 = false;
                                if (fVar68 - fVar78 < 0.0) {
                                  bVar25 = false;
                                  bVar27 = true;
                                  if (!NAN(fVar68 - fVar81)) {
                                    bVar25 = fVar68 - fVar81 < 0.0;
                                    bVar27 = false;
                                  }
                                }
                                bVar26 = false;
                                bVar28 = false;
                                if (bVar25 != bVar27) {
                                  bVar26 = false;
                                  bVar28 = true;
                                  if (!NAN(fVar68 - fVar80)) {
                                    bVar26 = fVar68 - fVar80 < 0.0;
                                    bVar28 = false;
                                  }
                                }
                                bVar25 = false;
                                bVar27 = false;
                                if (bVar26 != bVar28) {
                                  bVar25 = false;
                                  bVar27 = true;
                                  if (!NAN(fVar68 - fVar85)) {
                                    bVar25 = fVar68 - fVar85 < 0.0;
                                    bVar27 = false;
                                  }
                                }
                                fVar87 = 1.0;
                                if (bVar25 != bVar27) {
                                  fVar87 = 0.0;
                                }
                                if (fVar87 != 0.0) {
                                  if ((uint)fVar85 < (uint)fVar68 && fVar85 != 0.0) {
                                    fVar85 = fVar15 - fVar69 * fVar85;
                                    *pfVar63 = fVar85 * fVar85 * fVar70 * fVar85 + *pfVar63;
                                    if (!((uint)fVar68 <= (uint)fVar80 || fVar80 == 0.0))
                                    goto LAB_001a4214;
LAB_001a4384:
                                    if (!((uint)fVar81 < (uint)fVar68 && fVar81 != 0.0))
                                    goto LAB_001a4394;
LAB_001a4244:
                                    fVar81 = fVar15 - fVar69 * fVar81;
                                    *pfVar63 = fVar81 * fVar81 * fVar70 * fVar81 + *pfVar63;
                                    if ((uint)fVar68 <= (uint)fVar78 || fVar78 == 0.0)
                                    goto LAB_001a43c0;
                                  }
                                  else {
                                    if (!((uint)fVar80 < (uint)fVar68 && fVar80 != 0.0))
                                    goto LAB_001a4384;
LAB_001a4214:
                                    fVar80 = fVar15 - fVar69 * fVar80;
                                    *pfVar63 = fVar80 * fVar80 * fVar70 * fVar80 + *pfVar63;
                                    if (!((uint)fVar68 <= (uint)fVar81 || fVar81 == 0.0))
                                    goto LAB_001a4244;
LAB_001a4394:
                                    if ((uint)fVar68 <= (uint)fVar78 || fVar78 == 0.0)
                                    goto LAB_001a43c0;
                                  }
                                  fVar78 = fVar15 - fVar69 * fVar78;
                                  *pfVar63 = fVar78 * fVar78 * fVar70 * fVar78 + *pfVar63;
                                }
LAB_001a43c0:
                                uVar46 = uVar46 + 4;
                              } while (uVar46 < uVar57);
                            }
                            if (uVar57 < uVar36) {
                              puVar55 = puVar65 + uVar57;
                              lVar59 = (ulong)uVar36 - (ulong)uVar57;
                              do {
                                pfVar63 = (float *)(param_4 + (ulong)*puVar55 * 0x20);
                                fVar71 = (*pfVar4 - *pfVar63) * (*pfVar4 - *pfVar63) +
                                         (pfVar4[1] - pfVar63[1]) * (pfVar4[1] - pfVar63[1]) +
                                         (pfVar4[2] - pfVar63[2]) * (pfVar4[2] - pfVar63[2]);
                                if ((uint)fVar71 < (uint)fVar68 && fVar71 != 0.0) {
                                  fVar71 = fVar15 - fVar69 * fVar71;
                                  pfVar4[3] = fVar71 * fVar71 * fVar70 * fVar71 + pfVar4[3];
                                }
                                lVar59 = lVar59 + -1;
                                puVar55 = puVar55 + 1;
                              } while (lVar59 != 0);
                            }
                            uVar43 = uVar43 + 1;
                          } while (uVar43 != uVar37);
                        }
                        else {
                          fVar15 = *(float *)(param_1 + 0x10);
                          uVar43 = 0;
                          do {
                            uVar46 = (ulong)puVar30[uVar43];
                            pfVar4 = (float *)(lVar29 + uVar46 * 0x20);
                            pfVar63 = (float *)(lVar60 + uVar46 * 0xc);
                            if ((uVar36 & 0xfffffffc) != 0) {
                              pfVar49 = pfVar4 + 3;
                              pfVar3 = pfVar4 + 4;
                              pfVar9 = pfVar4 + 5;
                              pfVar10 = pfVar4 + 6;
                              lVar59 = lVar60 + uVar46 * 0xc;
                              pfVar1 = (float *)(lVar59 + 4);
                              pfVar2 = (float *)(lVar59 + 8);
                              fVar68 = *pfVar4;
                              fVar69 = pfVar4[1];
                              fVar70 = pfVar4[2];
                              uVar62 = 0;
                              do {
                                puVar55 = puVar65 + uVar62;
                                pfVar5 = (float *)(param_4 + (ulong)*puVar55 * 0x20);
                                fVar94 = fVar68 - *pfVar5;
                                pfVar6 = (float *)(param_4 + (ulong)puVar55[1] * 0x20);
                                fVar95 = fVar69 - pfVar5[1];
                                pfVar7 = (float *)(param_4 + (ulong)puVar55[2] * 0x20);
                                pfVar8 = (float *)(param_4 + (ulong)puVar55[3] * 0x20);
                                fVar96 = fVar70 - pfVar5[2];
                                fVar98 = fVar69 - pfVar6[1];
                                fVar100 = fVar68 - *pfVar6;
                                fVar92 = fVar70 - pfVar6[2];
                                fVar89 = fVar69 - pfVar7[1];
                                fVar88 = fVar68 - *pfVar7;
                                fVar99 = fVar70 - pfVar7[2];
                                fVar80 = fVar69 - pfVar8[1];
                                fVar87 = fVar68 - *pfVar8;
                                fVar85 = fVar70 - pfVar8[2];
                                fVar71 = fVar94 * fVar94 + fVar95 * fVar95 + fVar96 * fVar96;
                                fVar97 = fVar100 * fVar100 + fVar98 * fVar98 + fVar92 * fVar92;
                                fVar93 = fVar88 * fVar88 + fVar89 * fVar89 + fVar99 * fVar99;
                                fVar81 = fVar87 * fVar87 + fVar80 * fVar80 + fVar85 * fVar85;
                                fVar78 = *(float *)(param_1 + 0x10);
                                bVar25 = false;
                                bVar27 = false;
                                if (fVar78 - fVar71 < 0.0) {
                                  bVar25 = false;
                                  bVar27 = true;
                                  if (!NAN(fVar78 - fVar97)) {
                                    bVar25 = fVar78 - fVar97 < 0.0;
                                    bVar27 = false;
                                  }
                                }
                                bVar26 = false;
                                bVar28 = false;
                                if (bVar25 != bVar27) {
                                  bVar26 = false;
                                  bVar28 = true;
                                  if (!NAN(fVar78 - fVar93)) {
                                    bVar26 = fVar78 - fVar93 < 0.0;
                                    bVar28 = false;
                                  }
                                }
                                bVar25 = false;
                                bVar27 = false;
                                if (bVar26 != bVar28) {
                                  bVar25 = false;
                                  bVar27 = true;
                                  if (!NAN(fVar78 - fVar81)) {
                                    bVar25 = fVar78 - fVar81 < 0.0;
                                    bVar27 = false;
                                  }
                                }
                                fVar78 = 1.0;
                                if (bVar25 != bVar27) {
                                  fVar78 = 0.0;
                                }
                                if (fVar78 != 0.0) {
                                  if ((uint)fVar71 < (uint)fVar15 && fVar71 != 0.0) {
                                    fVar71 = fVar71 * *(float *)(param_1 + 0x34);
                                    fVar84 = sqrtf(fVar71);
                                    fVar86 = *(float *)(param_1 + 0x30);
                                    fVar78 = *pfVar49 - *(float *)(param_1 + 0x2c);
                                    fVar91 = pfVar5[3] - *(float *)(param_1 + 0x2c);
                                    fVar71 = fVar71 * (1.0 / fVar84);
                                    if (fVar78 <= 0.0) {
                                      fVar78 = 0.0;
                                    }
                                    if (fVar91 <= 0.0) {
                                      fVar91 = 0.0;
                                    }
                                    fVar82 = *(float *)(param_1 + 0x18);
                                    fVar83 = (fVar82 - fVar71) * *(float *)(param_1 + 0x28);
                                    fVar90 = *pfVar9;
                                    fVar71 = (fVar78 + fVar91) *
                                             *(float *)(param_1 + 0x24) *
                                             (fVar71 + ((1.0 / fVar84) * *(float *)(param_1 + 0x1c)
                                                       - (fVar82 + fVar82)));
                                    fVar84 = pfVar5[5];
                                    fVar82 = pfVar5[6];
                                    fVar91 = *pfVar10;
                                    fVar78 = 1.0 / pfVar5[3];
                                    *pfVar63 = fVar78 * (fVar86 * fVar94 * fVar71 +
                                                        fVar83 * fVar86 * (pfVar5[4] - *pfVar3)) +
                                               *pfVar63;
                                    *pfVar1 = fVar78 * (fVar86 * fVar95 * fVar71 +
                                                       fVar83 * fVar86 * (fVar84 - fVar90)) +
                                              *pfVar1;
                                    *pfVar2 = fVar78 * (fVar86 * fVar96 * fVar71 +
                                                       fVar83 * fVar86 * (fVar82 - fVar91)) +
                                              *pfVar2;
                                    if (!((uint)fVar15 <= (uint)fVar97 || fVar97 == 0.0))
                                    goto LAB_001a364c;
LAB_001a3a0c:
                                    if (!((uint)fVar93 < (uint)fVar15 && fVar93 != 0.0))
                                    goto LAB_001a3a1c;
LAB_001a3798:
                                    fVar93 = fVar93 * *(float *)(param_1 + 0x34);
                                    fVar97 = sqrtf(fVar93);
                                    fVar92 = *(float *)(param_1 + 0x30);
                                    fVar71 = *pfVar49 - *(float *)(param_1 + 0x2c);
                                    fVar78 = pfVar7[3] - *(float *)(param_1 + 0x2c);
                                    fVar93 = fVar93 * (1.0 / fVar97);
                                    if (fVar71 <= 0.0) {
                                      fVar71 = 0.0;
                                    }
                                    if (fVar78 <= 0.0) {
                                      fVar78 = 0.0;
                                    }
                                    fVar94 = *(float *)(param_1 + 0x18);
                                    fVar95 = (fVar94 - fVar93) * *(float *)(param_1 + 0x28);
                                    fVar96 = *pfVar9;
                                    fVar71 = (fVar71 + fVar78) *
                                             *(float *)(param_1 + 0x24) *
                                             (fVar93 + ((1.0 / fVar97) * *(float *)(param_1 + 0x1c)
                                                       - (fVar94 + fVar94)));
                                    fVar93 = pfVar7[5];
                                    fVar94 = pfVar7[6];
                                    fVar78 = *pfVar10;
                                    fVar97 = 1.0 / pfVar7[3];
                                    *pfVar63 = fVar97 * (fVar92 * fVar88 * fVar71 +
                                                        fVar95 * fVar92 * (pfVar7[4] - *pfVar3)) +
                                               *pfVar63;
                                    *pfVar1 = fVar97 * (fVar92 * fVar89 * fVar71 +
                                                       fVar95 * fVar92 * (fVar93 - fVar96)) +
                                              *pfVar1;
                                    *pfVar2 = fVar97 * (fVar92 * fVar99 * fVar71 +
                                                       fVar95 * fVar92 * (fVar94 - fVar78)) +
                                              *pfVar2;
                                    if ((uint)fVar15 <= (uint)fVar81 || fVar81 == 0.0)
                                    goto LAB_001a3b50;
                                  }
                                  else {
                                    if (!((uint)fVar97 < (uint)fVar15 && fVar97 != 0.0))
                                    goto LAB_001a3a0c;
LAB_001a364c:
                                    fVar97 = fVar97 * *(float *)(param_1 + 0x34);
                                    fVar78 = sqrtf(fVar97);
                                    fVar95 = *(float *)(param_1 + 0x30);
                                    fVar71 = *pfVar49 - *(float *)(param_1 + 0x2c);
                                    fVar94 = pfVar6[3] - *(float *)(param_1 + 0x2c);
                                    fVar97 = fVar97 * (1.0 / fVar78);
                                    if (fVar71 <= 0.0) {
                                      fVar71 = 0.0;
                                    }
                                    if (fVar94 <= 0.0) {
                                      fVar94 = 0.0;
                                    }
                                    fVar96 = *(float *)(param_1 + 0x18);
                                    fVar84 = (fVar96 - fVar97) * *(float *)(param_1 + 0x28);
                                    fVar91 = *pfVar9;
                                    fVar71 = (fVar71 + fVar94) *
                                             *(float *)(param_1 + 0x24) *
                                             (fVar97 + ((1.0 / fVar78) * *(float *)(param_1 + 0x1c)
                                                       - (fVar96 + fVar96)));
                                    fVar78 = pfVar6[5];
                                    fVar96 = pfVar6[6];
                                    fVar94 = *pfVar10;
                                    fVar97 = 1.0 / pfVar6[3];
                                    *pfVar63 = fVar97 * (fVar95 * fVar100 * fVar71 +
                                                        fVar84 * fVar95 * (pfVar6[4] - *pfVar3)) +
                                               *pfVar63;
                                    *pfVar1 = fVar97 * (fVar95 * fVar98 * fVar71 +
                                                       fVar84 * fVar95 * (fVar78 - fVar91)) +
                                              *pfVar1;
                                    *pfVar2 = fVar97 * (fVar95 * fVar92 * fVar71 +
                                                       fVar84 * fVar95 * (fVar96 - fVar94)) +
                                              *pfVar2;
                                    if (!((uint)fVar15 <= (uint)fVar93 || fVar93 == 0.0))
                                    goto LAB_001a3798;
LAB_001a3a1c:
                                    if ((uint)fVar15 <= (uint)fVar81 || fVar81 == 0.0)
                                    goto LAB_001a3b50;
                                  }
                                  fVar81 = fVar81 * *(float *)(param_1 + 0x34);
                                  fVar97 = sqrtf(fVar81);
                                  fVar81 = fVar81 * (1.0 / fVar97);
                                  fVar78 = *(float *)(param_1 + 0x30);
                                  fVar71 = *pfVar49 - *(float *)(param_1 + 0x2c);
                                  fVar93 = pfVar8[3] - *(float *)(param_1 + 0x2c);
                                  if (fVar71 <= 0.0) {
                                    fVar71 = 0.0;
                                  }
                                  if (fVar93 <= 0.0) {
                                    fVar93 = 0.0;
                                  }
                                  fVar88 = *(float *)(param_1 + 0x18);
                                  fVar89 = (fVar88 - fVar81) * *(float *)(param_1 + 0x28);
                                  fVar71 = (fVar71 + fVar93) *
                                           *(float *)(param_1 + 0x24) *
                                           (fVar81 + ((1.0 / fVar97) * *(float *)(param_1 + 0x1c) -
                                                     (fVar88 + fVar88)));
                                  fVar93 = *pfVar9;
                                  fVar81 = pfVar8[5];
                                  fVar92 = pfVar8[6];
                                  fVar88 = *pfVar10;
                                  fVar97 = 1.0 / pfVar8[3];
                                  *pfVar63 = fVar97 * (fVar78 * fVar87 * fVar71 +
                                                      fVar89 * fVar78 * (pfVar8[4] - *pfVar3)) +
                                             *pfVar63;
                                  *pfVar1 = fVar97 * (fVar78 * fVar80 * fVar71 +
                                                     fVar89 * fVar78 * (fVar81 - fVar93)) + *pfVar1;
                                  *pfVar2 = fVar97 * (fVar78 * fVar85 * fVar71 +
                                                     fVar89 * fVar78 * (fVar92 - fVar88)) + *pfVar2;
                                }
LAB_001a3b50:
                                uVar62 = uVar62 + 4;
                              } while (uVar62 < uVar57);
                            }
                            if ((uVar36 & 0xfffffffc) < uVar36) {
                              lVar59 = lVar60 + uVar46 * 0xc;
                              fVar68 = *pfVar4;
                              fVar69 = pfVar4[1];
                              fVar70 = pfVar4[2];
                              pfVar49 = (float *)(lVar59 + 4);
                              pfVar3 = (float *)(lVar59 + 8);
                              lVar59 = (ulong)uVar36 - (ulong)uVar57;
                              puVar55 = puVar65 + uVar57;
                              do {
                                pfVar9 = (float *)(param_4 + (ulong)*puVar55 * 0x20);
                                fVar93 = fVar69 - pfVar9[1];
                                fVar97 = fVar68 - *pfVar9;
                                fVar78 = fVar70 - pfVar9[2];
                                fVar71 = fVar97 * fVar97 + fVar93 * fVar93 + fVar78 * fVar78;
                                if ((uint)fVar71 < (uint)fVar15 && fVar71 != 0.0) {
                                  fVar71 = fVar71 * *(float *)(param_1 + 0x34);
                                  fVar80 = sqrtf(fVar71);
                                  fVar87 = *(float *)(param_1 + 0x30);
                                  fVar81 = pfVar4[3] - *(float *)(param_1 + 0x2c);
                                  fVar85 = pfVar9[3] - *(float *)(param_1 + 0x2c);
                                  fVar71 = fVar71 * (1.0 / fVar80);
                                  if (fVar81 <= 0.0) {
                                    fVar81 = 0.0;
                                  }
                                  if (fVar85 <= 0.0) {
                                    fVar85 = 0.0;
                                  }
                                  fVar88 = *(float *)(param_1 + 0x18);
                                  fVar89 = (fVar88 - fVar71) * *(float *)(param_1 + 0x28);
                                  fVar92 = pfVar4[5];
                                  fVar71 = (fVar81 + fVar85) *
                                           *(float *)(param_1 + 0x24) *
                                           (fVar71 + ((1.0 / fVar80) * *(float *)(param_1 + 0x1c) -
                                                     (fVar88 + fVar88)));
                                  fVar80 = pfVar9[5];
                                  fVar88 = pfVar9[6];
                                  fVar85 = pfVar4[6];
                                  fVar81 = 1.0 / pfVar9[3];
                                  *pfVar63 = fVar81 * (fVar87 * fVar97 * fVar71 +
                                                      fVar89 * fVar87 * (pfVar9[4] - pfVar4[4])) +
                                             *pfVar63;
                                  *pfVar49 = fVar81 * (fVar87 * fVar93 * fVar71 +
                                                      fVar89 * fVar87 * (fVar80 - fVar92)) +
                                             *pfVar49;
                                  *pfVar3 = fVar81 * (fVar87 * fVar78 * fVar71 +
                                                     fVar89 * fVar87 * (fVar88 - fVar85)) + *pfVar3;
                                }
                                lVar59 = lVar59 + -1;
                                puVar55 = puVar55 + 1;
                              } while (lVar59 != 0);
                            }
                            uVar43 = uVar43 + 1;
                          } while (uVar43 != uVar37);
                        }
                      }
                      else {
                        pfVar4 = (float *)param_8[7];
                        puVar55 = (uint *)param_8[8];
                        uVar57 = uVar36 + 7 & 0xfffffffc;
                        local_b0[0] = 3.4028235e+38;
                        local_b0[1] = 3.4028235e+38;
                        local_b0[2] = 3.4028235e+38;
                        local_b0[3] = 3.4028235e+38;
                        if (uVar57 != 0) {
                          uVar50 = 0;
                          pfVar63 = pfVar4 + 8;
                          puVar44 = puVar65 + 2;
                          do {
                            if (uVar50 < uVar36) {
                              pfVar49 = (float *)(param_4 + (ulong)puVar44[-2] * 0x20);
                              if (uVar36 <= uVar50 + 1) goto LAB_001a3d7c;
LAB_001a3db4:
                              pauVar52 = (undefined1 (*) [16])(param_4 + (ulong)puVar44[-1] * 0x20);
                              if (uVar50 + 2 < uVar36) goto LAB_001a3dc8;
LAB_001a3d8c:
                              pauVar53 = (undefined1 (*) [12])local_b0;
                              if (uVar36 <= uVar50 + 3) goto LAB_001a3d9c;
LAB_001a3ddc:
                              pauVar54 = (undefined1 (*) [12])(param_4 + (ulong)puVar44[1] * 0x20);
                            }
                            else {
                              pfVar49 = local_b0;
                              if (uVar50 + 1 < uVar36) goto LAB_001a3db4;
LAB_001a3d7c:
                              pauVar52 = (undefined1 (*) [16])local_b0;
                              if (uVar36 <= uVar50 + 2) goto LAB_001a3d8c;
LAB_001a3dc8:
                              pauVar53 = (undefined1 (*) [12])(param_4 + (ulong)*puVar44 * 0x20);
                              if (uVar50 + 3 < uVar36) goto LAB_001a3ddc;
LAB_001a3d9c:
                              pauVar54 = (undefined1 (*) [12])local_b0;
                            }
                            fVar15 = *pfVar49;
                            fVar68 = pfVar49[2];
                            uVar18 = *(undefined8 *)(*pauVar53 + 8);
                            fVar70 = SUB124(*pauVar53,0);
                            uVar66 = SUB124(*pauVar53,4);
                            auVar19 = *pauVar52;
                            auVar24 = *pauVar54;
                            fVar69 = auVar19._0_4_;
                            fVar71 = SUB124(*pauVar54,0);
                            uVar67 = SUB124(*pauVar54,4);
                            auVar76._4_4_ = fVar70;
                            auVar76._0_4_ = fVar15;
                            auVar76._8_4_ = pfVar49[1];
                            auVar76._12_4_ = uVar66;
                            auVar77._4_4_ = fVar70;
                            auVar77._0_4_ = fVar15;
                            auVar77._8_4_ = pfVar49[1];
                            auVar77._12_4_ = uVar66;
                            auVar76 = NEON_ext(auVar76,auVar77,8,1);
                            auVar79._4_4_ = fVar71;
                            auVar79._0_4_ = fVar69;
                            auVar79._8_4_ = auVar19._4_4_;
                            auVar79._12_4_ = uVar67;
                            auVar23._4_4_ = fVar71;
                            auVar23._0_4_ = fVar69;
                            auVar23._8_4_ = auVar19._4_4_;
                            auVar23._12_4_ = uVar67;
                            auVar77 = NEON_ext(auVar79,auVar23,8,1);
                            uVar50 = uVar50 + 4;
                            pfVar63[-8] = fVar15;
                            pfVar63[-7] = fVar69;
                            pfVar63[-6] = fVar70;
                            pfVar63[-5] = fVar71;
                            puVar44 = puVar44 + 4;
                            pfVar63[-4] = auVar76._0_4_;
                            pfVar63[-3] = auVar77._0_4_;
                            pfVar63[-2] = auVar76._4_4_;
                            pfVar63[-1] = auVar77._4_4_;
                            *pfVar63 = fVar68;
                            pfVar63[1] = auVar19._8_4_;
                            pfVar63[2] = (float)uVar18;
                            pfVar63[3] = auVar24._8_4_;
                            pfVar63 = pfVar63 + 0xc;
                          } while (uVar50 < uVar57);
                        }
                        uStack_138 = *(undefined4 *)(param_1 + 0x30);
                        uStack_134 = uStack_138;
                        local_140 = uStack_138;
                        uStack_13c = uStack_138;
                        uStack_128 = *(undefined4 *)(param_1 + 0x34);
                        uStack_124 = uStack_128;
                        local_130 = uStack_128;
                        uStack_12c = uStack_128;
                        uStack_118 = *(undefined4 *)(param_1 + 0x18);
                        uStack_114 = uStack_118;
                        local_120 = uStack_118;
                        uStack_11c = uStack_118;
                        uStack_108 = *(undefined4 *)(param_1 + 0x1c);
                        uStack_104 = uStack_108;
                        local_110 = uStack_108;
                        uStack_10c = uStack_108;
                        uStack_f8 = *(undefined4 *)(param_1 + 0x20);
                        uStack_f4 = uStack_f8;
                        local_100 = uStack_f8;
                        uStack_fc = uStack_f8;
                        uStack_e8 = *(undefined4 *)(param_1 + 0x24);
                        uStack_e4 = uStack_e8;
                        local_f0 = uStack_e8;
                        uStack_ec = uStack_e8;
                        uStack_d8 = *(undefined4 *)(param_1 + 0x28);
                        uStack_d4 = uStack_d8;
                        local_e0 = uStack_d8;
                        uStack_dc = uStack_d8;
                        uStack_c8 = *(undefined4 *)(param_1 + 0x2c);
                        uStack_c4 = uStack_c8;
                        local_d0 = uStack_c8;
                        uStack_cc = uStack_c8;
                        fVar15 = *(float *)(param_1 + 0x10);
                        puVar44 = puVar65 + uVar36;
                        uVar43 = 0;
                        uVar57 = 0;
                        do {
                          uVar32 = *puVar30;
                          puVar55[uVar43] = uVar32;
                          pfVar63 = (float *)(lVar29 + (ulong)uVar32 * 0x20);
                          fVar69 = *pfVar63;
                          fVar70 = pfVar63[1];
                          fVar71 = pfVar63[2];
                          iVar31 = (int)uVar43;
                          uVar50 = iVar31 + 2;
                          uVar43 = (ulong)uVar50;
                          puVar39 = puVar55 + (iVar31 + 1);
                          fVar97 = fVar70 - (float)*(undefined8 *)(pfVar4 + 4);
                          fVar93 = fVar70 - (float)((ulong)*(undefined8 *)(pfVar4 + 4) >> 0x20);
                          fVar78 = fVar70 - (float)*(undefined8 *)(pfVar4 + 6);
                          fVar81 = fVar70 - (float)((ulong)*(undefined8 *)(pfVar4 + 6) >> 0x20);
                          fVar68 = fVar71 - (float)*(undefined8 *)(pfVar4 + 8);
                          fVar80 = fVar71 - (float)((ulong)*(undefined8 *)(pfVar4 + 8) >> 0x20);
                          fVar85 = fVar71 - (float)*(undefined8 *)(pfVar4 + 10);
                          fVar87 = fVar71 - (float)((ulong)*(undefined8 *)(pfVar4 + 10) >> 0x20);
                          fVar68 = fVar68 * fVar68 +
                                   (fVar69 - *pfVar4) * (fVar69 - *pfVar4) + fVar97 * fVar97;
                          fVar97 = fVar80 * fVar80 +
                                   (fVar69 - pfVar4[1]) * (fVar69 - pfVar4[1]) + fVar93 * fVar93;
                          fVar93 = fVar85 * fVar85 +
                                   (fVar69 - pfVar4[2]) * (fVar69 - pfVar4[2]) + fVar78 * fVar78;
                          fVar78 = fVar87 * fVar87 +
                                   (fVar69 - pfVar4[3]) * (fVar69 - pfVar4[3]) + fVar81 * fVar81;
                          uVar46 = CONCAT26(-(ushort)(0.0 < fVar78),
                                            CONCAT24(-(ushort)(0.0 < fVar93),
                                                     CONCAT22(-(ushort)(0.0 < fVar97),
                                                              -(ushort)(0.0 < fVar68)))) &
                                   CONCAT26(-(ushort)(fVar78 < fVar15),
                                            CONCAT24(-(ushort)(fVar93 < fVar15),
                                                     CONCAT22(-(ushort)(fVar97 < fVar15),
                                                              -(ushort)(fVar68 < fVar15))));
                          auVar72._0_8_ =
                               CONCAT35(0,CONCAT14((char)(uVar46 >> 0x10),(uint)((byte)uVar46 & 1))
                                          & 0x1ffffffff);
                          auVar72[8] = (byte)(uVar46 >> 0x20) & 1;
                          auVar72._9_3_ = 0;
                          auVar72[0xc] = (byte)(uVar46 >> 0x30) & 1;
                          local_160[1] = (ulong)auVar72._8_5_;
                          local_160[0] = auVar72._0_8_;
                          if (uVar36 != 0) {
                            uVar46 = uVar43;
                            pfVar63 = pfVar4;
                            puVar64 = puVar65;
                            uVar45 = 0;
                            do {
                              uVar17 = uVar45 + 4;
                              fVar97 = fVar69 - pfVar63[0xc];
                              lVar59 = (ulong)(uVar17 & 4) * 4;
                              fVar68 = fVar71 - (float)*(undefined8 *)(pfVar63 + 0x14);
                              fVar93 = fVar71 - (float)((ulong)*(undefined8 *)(pfVar63 + 0x14) >>
                                                       0x20);
                              fVar78 = fVar71 - (float)*(undefined8 *)(pfVar63 + 0x16);
                              fVar81 = fVar71 - (float)((ulong)*(undefined8 *)(pfVar63 + 0x16) >>
                                                       0x20);
                              uVar45 = uVar45 & 4;
                              fVar68 = fVar68 * fVar68 +
                                       fVar97 * fVar97 +
                                       (fVar70 - pfVar63[0x10]) * (fVar70 - pfVar63[0x10]);
                              fVar97 = fVar93 * fVar93 +
                                       (fVar69 - pfVar63[0xd]) * (fVar69 - pfVar63[0xd]) +
                                       (fVar70 - pfVar63[0x11]) * (fVar70 - pfVar63[0x11]);
                              fVar93 = fVar78 * fVar78 +
                                       (fVar69 - pfVar63[0xe]) * (fVar69 - pfVar63[0xe]) +
                                       (fVar70 - pfVar63[0x12]) * (fVar70 - pfVar63[0x12]);
                              fVar78 = fVar81 * fVar81 +
                                       (fVar69 - pfVar63[0xf]) * (fVar69 - pfVar63[0xf]) +
                                       (fVar70 - pfVar63[0x13]) * (fVar70 - pfVar63[0x13]);
                              uVar62 = CONCAT26(-(ushort)(0.0 < fVar78),
                                                CONCAT24(-(ushort)(0.0 < fVar93),
                                                         CONCAT22(-(ushort)(0.0 < fVar97),
                                                                  -(ushort)(0.0 < fVar68)))) &
                                       CONCAT26(-(ushort)(fVar78 < fVar15),
                                                CONCAT24(-(ushort)(fVar93 < fVar15),
                                                         CONCAT22(-(ushort)(fVar97 < fVar15),
                                                                  -(ushort)(fVar68 < fVar15))));
                              auVar73._0_8_ =
                                   CONCAT35(0,CONCAT14((char)(uVar62 >> 0x10),
                                                       (uint)((byte)uVar62 & 1)) & 0x1ffffffff);
                              auVar73[8] = (byte)(uVar62 >> 0x20) & 1;
                              auVar73._9_3_ = 0;
                              auVar73[0xc] = (byte)(uVar62 >> 0x30) & 1;
                              *(ulong *)((long)local_160 + lVar59 + 8) = (ulong)auVar73._8_5_;
                              *(ulong *)((long)local_160 + lVar59) = auVar73._0_8_;
                              iVar31 = *(int *)((long)local_160 + (ulong)(uVar45 | 1) * 4);
                              iVar51 = *(int *)((long)local_160 + (ulong)(uVar45 | 2) * 4);
                              iVar40 = *(int *)((long)local_160 + (ulong)(uVar45 | 3) * 4);
                              uVar50 = *(int *)((long)local_160 + (ulong)uVar45 * 4) + (int)uVar43;
                              puVar55[uVar43] = *puVar64;
                              if (puVar64 + 1 < puVar44) {
                                uVar45 = puVar64[1];
                              }
                              else {
                                uVar45 = 0;
                              }
                              puVar55[uVar50] = uVar45;
                              uVar50 = uVar50 + iVar31;
                              if (puVar64 + 2 < puVar44) {
                                uVar45 = puVar64[2];
                              }
                              else {
                                uVar45 = 0;
                              }
                              puVar55[uVar50] = uVar45;
                              uVar50 = uVar50 + iVar51;
                              if (puVar64 + 3 < puVar44) {
                                uVar45 = puVar64[3];
                              }
                              else {
                                uVar45 = 0;
                              }
                              uVar48 = uVar50 + iVar40;
                              uVar43 = (ulong)uVar48;
                              puVar55[uVar50] = uVar45;
                              if (0x80 - uVar48 < 6) {
                                *puVar39 = uVar48 - (int)uVar46;
                                if (param_2 == 0) {
                                  if (uVar48 != 0) {
                                    fVar97 = *(float *)(param_1 + 0x1c);
                                    fVar93 = *(float *)(param_1 + 0x20);
                                    fVar68 = *(float *)(param_1 + 0x34);
                                    uVar50 = 0;
                                    do {
                                      uVar16 = puVar55[uVar50 + 1];
                                      uVar45 = uVar50 + 2;
                                      if (uVar16 != 0) {
                                        pfVar49 = (float *)(lVar29 + (ulong)puVar55[uVar50] * 0x20);
                                        fVar78 = pfVar49[3];
                                        uVar47 = uVar16;
                                        uVar50 = uVar45;
                                        do {
                                          uVar43 = (ulong)uVar50;
                                          uVar50 = uVar50 + 1;
                                          pfVar3 = (float *)(param_4 + (ulong)puVar55[uVar43] * 0x20
                                                            );
                                          fVar81 = fVar97 - fVar68 * ((*pfVar49 - *pfVar3) *
                                                                      (*pfVar49 - *pfVar3) +
                                                                      (pfVar49[1] - pfVar3[1]) *
                                                                      (pfVar49[1] - pfVar3[1]) +
                                                                     (pfVar49[2] - pfVar3[2]) *
                                                                     (pfVar49[2] - pfVar3[2]));
                                          fVar78 = fVar78 + fVar81 * fVar81 * fVar93 * fVar81;
                                          uVar47 = uVar47 - 1;
                                        } while (uVar47 != 0);
                                        pfVar49[3] = fVar78;
                                        uVar45 = uVar45 + uVar16;
                                      }
                                      uVar50 = uVar45;
                                    } while (uVar50 < uVar48);
                                  }
                                }
                                else {
                                  FUN_001a5d00(lVar60,lVar29,param_4,puVar55,uVar43,param_1,
                                               &local_140);
                                }
                                uVar46 = 2;
                                uVar43 = 2;
                                *puVar55 = uVar32;
                                puVar39 = puVar55 + 1;
                              }
                              uVar50 = (uint)uVar46;
                              puVar64 = puVar64 + 4;
                              pfVar63 = pfVar63 + 0xc;
                              uVar45 = uVar17;
                            } while (uVar17 < uVar36);
                          }
                          uVar32 = (uint)uVar43;
                          *puVar39 = uVar32 - uVar50;
                          uVar57 = uVar57 + 1;
                          puVar30 = puVar30 + 1;
                        } while (uVar57 != uVar61);
                        if (uVar32 != 0) {
                          if (param_2 == 0) {
                            fVar68 = *(float *)(param_1 + 0x1c);
                            fVar69 = *(float *)(param_1 + 0x20);
                            fVar15 = *(float *)(param_1 + 0x34);
                            uVar36 = 0;
                            do {
                              uVar50 = puVar55[uVar36 + 1];
                              uVar57 = uVar36 + 2;
                              if (uVar50 != 0) {
                                pfVar4 = (float *)(lVar29 + (ulong)puVar55[uVar36] * 0x20);
                                fVar70 = pfVar4[3];
                                uVar45 = uVar50;
                                uVar36 = uVar57;
                                do {
                                  uVar43 = (ulong)uVar36;
                                  uVar36 = uVar36 + 1;
                                  pfVar63 = (float *)(param_4 + (ulong)puVar55[uVar43] * 0x20);
                                  fVar71 = fVar68 - fVar15 * ((*pfVar4 - *pfVar63) *
                                                              (*pfVar4 - *pfVar63) +
                                                              (pfVar4[1] - pfVar63[1]) *
                                                              (pfVar4[1] - pfVar63[1]) +
                                                             (pfVar4[2] - pfVar63[2]) *
                                                             (pfVar4[2] - pfVar63[2]));
                                  fVar70 = fVar70 + fVar71 * fVar71 * fVar69 * fVar71;
                                  uVar45 = uVar45 - 1;
                                } while (uVar45 != 0);
                                pfVar4[3] = fVar70;
                                uVar57 = uVar57 + uVar50;
                              }
                              uVar36 = uVar57;
                            } while (uVar36 < uVar32);
                          }
                          else {
                            FUN_001a5d00(lVar60,lVar29,param_4,puVar55,uVar43,param_1,&local_140);
                          }
                        }
                      }
                      uVar36 = 0;
                      if (uVar33 == 0) goto LAB_001a45c0;
                    }
                    iVar31 = *(int *)(param_7 + (ulong)uVar58 * 4 + 0x188);
                    lVar59 = param_8[2];
                    uVar57 = uVar33 & 3;
                    uVar58 = uVar36;
                    if (2 < uVar33 - 1) {
                      iVar51 = uVar57 - uVar33;
                      iVar40 = iVar31;
                      do {
                        *(int *)(lVar59 + (ulong)uVar58 * 4) = iVar40;
                        iVar51 = iVar51 + 4;
                        *(int *)(lVar59 + (ulong)(uVar58 + 1) * 4) = iVar40 + 1;
                        uVar50 = uVar58 + 3;
                        *(int *)(lVar59 + (ulong)(uVar58 + 2) * 4) = iVar40 + 2;
                        iVar31 = iVar40 + 4;
                        uVar58 = uVar58 + 4;
                        *(int *)(lVar59 + (ulong)uVar50 * 4) = iVar40 + 3;
                        iVar40 = iVar31;
                      } while (iVar51 != 0);
                    }
                    if (uVar57 != 0) {
                      iVar51 = -uVar57;
                      do {
                        *(int *)(lVar59 + (ulong)uVar58 * 4) = iVar31;
                        iVar31 = iVar31 + 1;
                        uVar58 = uVar58 + 1;
                        iVar51 = iVar51 + 1;
                      } while (iVar51 != 0);
                    }
                    uVar36 = uVar36 + uVar33;
                  }
                }
LAB_001a45c0:
                uVar42 = uVar42 + 1;
              } while (uVar42 != uVar38);
              if (uVar36 != 0) {
                puVar30 = (uint *)param_8[9];
                puVar65 = (uint *)param_8[2];
                if (uVar36 < 8) {
                  uVar58 = uVar36 & 0xfffffffc;
                  if (param_2 == 0) {
                    fVar68 = *(float *)(param_1 + 0x10);
                    fVar69 = *(float *)(param_1 + 0x34);
                    fVar15 = *(float *)(param_1 + 0x1c);
                    fVar70 = *(float *)(param_1 + 0x20);
                    uVar42 = 0;
                    do {
                      pfVar4 = (float *)(lVar29 + (ulong)puVar30[uVar42] * 0x20);
                      if (uVar58 != 0) {
                        fVar71 = *pfVar4;
                        fVar97 = pfVar4[1];
                        fVar93 = pfVar4[2];
                        uVar43 = 0;
                        pfVar63 = pfVar4 + 3;
                        do {
                          puVar55 = puVar65 + uVar43;
                          pfVar49 = (float *)(param_4 + (ulong)*puVar55 * 0x20);
                          pfVar3 = (float *)(param_4 + (ulong)puVar55[1] * 0x20);
                          pfVar9 = (float *)(param_4 + (ulong)puVar55[2] * 0x20);
                          pfVar10 = (float *)(param_4 + (ulong)puVar55[3] * 0x20);
                          fVar85 = (fVar71 - *pfVar49) * (fVar71 - *pfVar49) +
                                   (fVar97 - pfVar49[1]) * (fVar97 - pfVar49[1]) +
                                   (fVar93 - pfVar49[2]) * (fVar93 - pfVar49[2]);
                          fVar80 = (fVar71 - *pfVar3) * (fVar71 - *pfVar3) +
                                   (fVar97 - pfVar3[1]) * (fVar97 - pfVar3[1]) +
                                   (fVar93 - pfVar3[2]) * (fVar93 - pfVar3[2]);
                          fVar81 = (fVar71 - *pfVar9) * (fVar71 - *pfVar9) +
                                   (fVar97 - pfVar9[1]) * (fVar97 - pfVar9[1]) +
                                   (fVar93 - pfVar9[2]) * (fVar93 - pfVar9[2]);
                          fVar78 = (fVar71 - *pfVar10) * (fVar71 - *pfVar10) +
                                   (fVar97 - pfVar10[1]) * (fVar97 - pfVar10[1]) +
                                   (fVar93 - pfVar10[2]) * (fVar93 - pfVar10[2]);
                          bVar25 = false;
                          bVar27 = false;
                          if (fVar68 - fVar78 < 0.0) {
                            bVar25 = false;
                            bVar27 = true;
                            if (!NAN(fVar68 - fVar81)) {
                              bVar25 = fVar68 - fVar81 < 0.0;
                              bVar27 = false;
                            }
                          }
                          bVar26 = false;
                          bVar28 = false;
                          if (bVar25 != bVar27) {
                            bVar26 = false;
                            bVar28 = true;
                            if (!NAN(fVar68 - fVar80)) {
                              bVar26 = fVar68 - fVar80 < 0.0;
                              bVar28 = false;
                            }
                          }
                          bVar25 = false;
                          bVar27 = false;
                          if (bVar26 != bVar28) {
                            bVar25 = false;
                            bVar27 = true;
                            if (!NAN(fVar68 - fVar85)) {
                              bVar25 = fVar68 - fVar85 < 0.0;
                              bVar27 = false;
                            }
                          }
                          fVar87 = 1.0;
                          if (bVar25 != bVar27) {
                            fVar87 = 0.0;
                          }
                          if (fVar87 != 0.0) {
                            if ((uint)fVar85 < (uint)fVar68 && fVar85 != 0.0) {
                              fVar85 = fVar15 - fVar69 * fVar85;
                              *pfVar63 = fVar85 * fVar85 * fVar70 * fVar85 + *pfVar63;
                              if (!((uint)fVar68 <= (uint)fVar80 || fVar80 == 0.0))
                              goto LAB_001a53bc;
LAB_001a552c:
                              if (!((uint)fVar81 < (uint)fVar68 && fVar81 != 0.0))
                              goto LAB_001a553c;
LAB_001a53ec:
                              fVar81 = fVar15 - fVar69 * fVar81;
                              *pfVar63 = fVar81 * fVar81 * fVar70 * fVar81 + *pfVar63;
                              if ((uint)fVar68 <= (uint)fVar78 || fVar78 == 0.0) goto LAB_001a5568;
                            }
                            else {
                              if (!((uint)fVar80 < (uint)fVar68 && fVar80 != 0.0))
                              goto LAB_001a552c;
LAB_001a53bc:
                              fVar80 = fVar15 - fVar69 * fVar80;
                              *pfVar63 = fVar80 * fVar80 * fVar70 * fVar80 + *pfVar63;
                              if (!((uint)fVar68 <= (uint)fVar81 || fVar81 == 0.0))
                              goto LAB_001a53ec;
LAB_001a553c:
                              if ((uint)fVar68 <= (uint)fVar78 || fVar78 == 0.0) goto LAB_001a5568;
                            }
                            fVar78 = fVar15 - fVar69 * fVar78;
                            *pfVar63 = fVar78 * fVar78 * fVar70 * fVar78 + *pfVar63;
                          }
LAB_001a5568:
                          uVar43 = uVar43 + 4;
                        } while (uVar43 < uVar58);
                      }
                      if (uVar58 < uVar36) {
                        puVar55 = puVar65 + uVar58;
                        lVar59 = (ulong)uVar36 - (ulong)uVar58;
                        do {
                          pfVar63 = (float *)(param_4 + (ulong)*puVar55 * 0x20);
                          fVar71 = (*pfVar4 - *pfVar63) * (*pfVar4 - *pfVar63) +
                                   (pfVar4[1] - pfVar63[1]) * (pfVar4[1] - pfVar63[1]) +
                                   (pfVar4[2] - pfVar63[2]) * (pfVar4[2] - pfVar63[2]);
                          if ((uint)fVar71 < (uint)fVar68 && fVar71 != 0.0) {
                            fVar71 = fVar15 - fVar69 * fVar71;
                            pfVar4[3] = fVar71 * fVar71 * fVar70 * fVar71 + pfVar4[3];
                          }
                          lVar59 = lVar59 + -1;
                          puVar55 = puVar55 + 1;
                        } while (lVar59 != 0);
                      }
                      uVar42 = uVar42 + 1;
                    } while (uVar42 != uVar37);
                  }
                  else {
                    fVar15 = *(float *)(param_1 + 0x10);
                    uVar42 = 0;
                    do {
                      uVar43 = (ulong)puVar30[uVar42];
                      pfVar4 = (float *)(lVar29 + uVar43 * 0x20);
                      pfVar63 = (float *)(lVar60 + uVar43 * 0xc);
                      if ((uVar36 & 0xfffffffc) != 0) {
                        pfVar49 = pfVar4 + 3;
                        pfVar3 = pfVar4 + 4;
                        pfVar9 = pfVar4 + 5;
                        pfVar10 = pfVar4 + 6;
                        lVar59 = lVar60 + uVar43 * 0xc;
                        pfVar1 = (float *)(lVar59 + 4);
                        pfVar2 = (float *)(lVar59 + 8);
                        fVar68 = *pfVar4;
                        fVar69 = pfVar4[1];
                        fVar70 = pfVar4[2];
                        uVar46 = 0;
                        do {
                          puVar55 = puVar65 + uVar46;
                          pfVar5 = (float *)(param_4 + (ulong)*puVar55 * 0x20);
                          fVar94 = fVar68 - *pfVar5;
                          pfVar6 = (float *)(param_4 + (ulong)puVar55[1] * 0x20);
                          fVar95 = fVar69 - pfVar5[1];
                          pfVar7 = (float *)(param_4 + (ulong)puVar55[2] * 0x20);
                          pfVar8 = (float *)(param_4 + (ulong)puVar55[3] * 0x20);
                          fVar96 = fVar70 - pfVar5[2];
                          fVar98 = fVar69 - pfVar6[1];
                          fVar100 = fVar68 - *pfVar6;
                          fVar92 = fVar70 - pfVar6[2];
                          fVar89 = fVar69 - pfVar7[1];
                          fVar88 = fVar68 - *pfVar7;
                          fVar99 = fVar70 - pfVar7[2];
                          fVar80 = fVar69 - pfVar8[1];
                          fVar87 = fVar68 - *pfVar8;
                          fVar85 = fVar70 - pfVar8[2];
                          fVar71 = fVar94 * fVar94 + fVar95 * fVar95 + fVar96 * fVar96;
                          fVar97 = fVar100 * fVar100 + fVar98 * fVar98 + fVar92 * fVar92;
                          fVar93 = fVar88 * fVar88 + fVar89 * fVar89 + fVar99 * fVar99;
                          fVar81 = fVar87 * fVar87 + fVar80 * fVar80 + fVar85 * fVar85;
                          fVar78 = *(float *)(param_1 + 0x10);
                          bVar25 = false;
                          bVar27 = false;
                          if (fVar78 - fVar71 < 0.0) {
                            bVar25 = false;
                            bVar27 = true;
                            if (!NAN(fVar78 - fVar97)) {
                              bVar25 = fVar78 - fVar97 < 0.0;
                              bVar27 = false;
                            }
                          }
                          bVar26 = false;
                          bVar28 = false;
                          if (bVar25 != bVar27) {
                            bVar26 = false;
                            bVar28 = true;
                            if (!NAN(fVar78 - fVar93)) {
                              bVar26 = fVar78 - fVar93 < 0.0;
                              bVar28 = false;
                            }
                          }
                          bVar25 = false;
                          bVar27 = false;
                          if (bVar26 != bVar28) {
                            bVar25 = false;
                            bVar27 = true;
                            if (!NAN(fVar78 - fVar81)) {
                              bVar25 = fVar78 - fVar81 < 0.0;
                              bVar27 = false;
                            }
                          }
                          fVar78 = 1.0;
                          if (bVar25 != bVar27) {
                            fVar78 = 0.0;
                          }
                          if (fVar78 != 0.0) {
                            if ((uint)fVar71 < (uint)fVar15 && fVar71 != 0.0) {
                              fVar71 = fVar71 * *(float *)(param_1 + 0x34);
                              fVar84 = sqrtf(fVar71);
                              fVar86 = *(float *)(param_1 + 0x30);
                              fVar78 = *pfVar49 - *(float *)(param_1 + 0x2c);
                              fVar91 = pfVar5[3] - *(float *)(param_1 + 0x2c);
                              fVar71 = fVar71 * (1.0 / fVar84);
                              if (fVar78 <= 0.0) {
                                fVar78 = 0.0;
                              }
                              if (fVar91 <= 0.0) {
                                fVar91 = 0.0;
                              }
                              fVar82 = *(float *)(param_1 + 0x18);
                              fVar83 = (fVar82 - fVar71) * *(float *)(param_1 + 0x28);
                              fVar90 = *pfVar9;
                              fVar71 = (fVar78 + fVar91) *
                                       *(float *)(param_1 + 0x24) *
                                       (fVar71 + ((1.0 / fVar84) * *(float *)(param_1 + 0x1c) -
                                                 (fVar82 + fVar82)));
                              fVar84 = pfVar5[5];
                              fVar82 = pfVar5[6];
                              fVar91 = *pfVar10;
                              fVar78 = 1.0 / pfVar5[3];
                              *pfVar63 = fVar78 * (fVar86 * fVar94 * fVar71 +
                                                  fVar83 * fVar86 * (pfVar5[4] - *pfVar3)) +
                                         *pfVar63;
                              *pfVar1 = fVar78 * (fVar86 * fVar95 * fVar71 +
                                                 fVar83 * fVar86 * (fVar84 - fVar90)) + *pfVar1;
                              *pfVar2 = fVar78 * (fVar86 * fVar96 * fVar71 +
                                                 fVar83 * fVar86 * (fVar82 - fVar91)) + *pfVar2;
                              if (!((uint)fVar15 <= (uint)fVar97 || fVar97 == 0.0))
                              goto LAB_001a47f8;
LAB_001a4bb8:
                              if (!((uint)fVar93 < (uint)fVar15 && fVar93 != 0.0))
                              goto LAB_001a4bc8;
LAB_001a4944:
                              fVar93 = fVar93 * *(float *)(param_1 + 0x34);
                              fVar97 = sqrtf(fVar93);
                              fVar92 = *(float *)(param_1 + 0x30);
                              fVar71 = *pfVar49 - *(float *)(param_1 + 0x2c);
                              fVar78 = pfVar7[3] - *(float *)(param_1 + 0x2c);
                              fVar93 = fVar93 * (1.0 / fVar97);
                              if (fVar71 <= 0.0) {
                                fVar71 = 0.0;
                              }
                              if (fVar78 <= 0.0) {
                                fVar78 = 0.0;
                              }
                              fVar94 = *(float *)(param_1 + 0x18);
                              fVar95 = (fVar94 - fVar93) * *(float *)(param_1 + 0x28);
                              fVar96 = *pfVar9;
                              fVar71 = (fVar71 + fVar78) *
                                       *(float *)(param_1 + 0x24) *
                                       (fVar93 + ((1.0 / fVar97) * *(float *)(param_1 + 0x1c) -
                                                 (fVar94 + fVar94)));
                              fVar93 = pfVar7[5];
                              fVar94 = pfVar7[6];
                              fVar78 = *pfVar10;
                              fVar97 = 1.0 / pfVar7[3];
                              *pfVar63 = fVar97 * (fVar92 * fVar88 * fVar71 +
                                                  fVar95 * fVar92 * (pfVar7[4] - *pfVar3)) +
                                         *pfVar63;
                              *pfVar1 = fVar97 * (fVar92 * fVar89 * fVar71 +
                                                 fVar95 * fVar92 * (fVar93 - fVar96)) + *pfVar1;
                              *pfVar2 = fVar97 * (fVar92 * fVar99 * fVar71 +
                                                 fVar95 * fVar92 * (fVar94 - fVar78)) + *pfVar2;
                              if ((uint)fVar15 <= (uint)fVar81 || fVar81 == 0.0) goto LAB_001a4cfc;
                            }
                            else {
                              if (!((uint)fVar97 < (uint)fVar15 && fVar97 != 0.0))
                              goto LAB_001a4bb8;
LAB_001a47f8:
                              fVar97 = fVar97 * *(float *)(param_1 + 0x34);
                              fVar78 = sqrtf(fVar97);
                              fVar95 = *(float *)(param_1 + 0x30);
                              fVar71 = *pfVar49 - *(float *)(param_1 + 0x2c);
                              fVar94 = pfVar6[3] - *(float *)(param_1 + 0x2c);
                              fVar97 = fVar97 * (1.0 / fVar78);
                              if (fVar71 <= 0.0) {
                                fVar71 = 0.0;
                              }
                              if (fVar94 <= 0.0) {
                                fVar94 = 0.0;
                              }
                              fVar96 = *(float *)(param_1 + 0x18);
                              fVar84 = (fVar96 - fVar97) * *(float *)(param_1 + 0x28);
                              fVar91 = *pfVar9;
                              fVar71 = (fVar71 + fVar94) *
                                       *(float *)(param_1 + 0x24) *
                                       (fVar97 + ((1.0 / fVar78) * *(float *)(param_1 + 0x1c) -
                                                 (fVar96 + fVar96)));
                              fVar78 = pfVar6[5];
                              fVar96 = pfVar6[6];
                              fVar94 = *pfVar10;
                              fVar97 = 1.0 / pfVar6[3];
                              *pfVar63 = fVar97 * (fVar95 * fVar100 * fVar71 +
                                                  fVar84 * fVar95 * (pfVar6[4] - *pfVar3)) +
                                         *pfVar63;
                              *pfVar1 = fVar97 * (fVar95 * fVar98 * fVar71 +
                                                 fVar84 * fVar95 * (fVar78 - fVar91)) + *pfVar1;
                              *pfVar2 = fVar97 * (fVar95 * fVar92 * fVar71 +
                                                 fVar84 * fVar95 * (fVar96 - fVar94)) + *pfVar2;
                              if (!((uint)fVar15 <= (uint)fVar93 || fVar93 == 0.0))
                              goto LAB_001a4944;
LAB_001a4bc8:
                              if ((uint)fVar15 <= (uint)fVar81 || fVar81 == 0.0) goto LAB_001a4cfc;
                            }
                            fVar81 = fVar81 * *(float *)(param_1 + 0x34);
                            fVar97 = sqrtf(fVar81);
                            fVar81 = fVar81 * (1.0 / fVar97);
                            fVar78 = *(float *)(param_1 + 0x30);
                            fVar71 = *pfVar49 - *(float *)(param_1 + 0x2c);
                            fVar93 = pfVar8[3] - *(float *)(param_1 + 0x2c);
                            if (fVar71 <= 0.0) {
                              fVar71 = 0.0;
                            }
                            if (fVar93 <= 0.0) {
                              fVar93 = 0.0;
                            }
                            fVar88 = *(float *)(param_1 + 0x18);
                            fVar89 = (fVar88 - fVar81) * *(float *)(param_1 + 0x28);
                            fVar71 = (fVar71 + fVar93) *
                                     *(float *)(param_1 + 0x24) *
                                     (fVar81 + ((1.0 / fVar97) * *(float *)(param_1 + 0x1c) -
                                               (fVar88 + fVar88)));
                            fVar93 = *pfVar9;
                            fVar81 = pfVar8[5];
                            fVar92 = pfVar8[6];
                            fVar88 = *pfVar10;
                            fVar97 = 1.0 / pfVar8[3];
                            *pfVar63 = fVar97 * (fVar78 * fVar87 * fVar71 +
                                                fVar89 * fVar78 * (pfVar8[4] - *pfVar3)) + *pfVar63;
                            *pfVar1 = fVar97 * (fVar78 * fVar80 * fVar71 +
                                               fVar89 * fVar78 * (fVar81 - fVar93)) + *pfVar1;
                            *pfVar2 = fVar97 * (fVar78 * fVar85 * fVar71 +
                                               fVar89 * fVar78 * (fVar92 - fVar88)) + *pfVar2;
                          }
LAB_001a4cfc:
                          uVar46 = uVar46 + 4;
                        } while (uVar46 < uVar58);
                      }
                      if ((uVar36 & 0xfffffffc) < uVar36) {
                        lVar59 = lVar60 + uVar43 * 0xc;
                        fVar68 = *pfVar4;
                        fVar69 = pfVar4[1];
                        fVar70 = pfVar4[2];
                        pfVar49 = (float *)(lVar59 + 4);
                        pfVar3 = (float *)(lVar59 + 8);
                        lVar59 = (ulong)uVar36 - (ulong)uVar58;
                        puVar55 = puVar65 + uVar58;
                        do {
                          pfVar9 = (float *)(param_4 + (ulong)*puVar55 * 0x20);
                          fVar93 = fVar69 - pfVar9[1];
                          fVar97 = fVar68 - *pfVar9;
                          fVar78 = fVar70 - pfVar9[2];
                          fVar71 = fVar97 * fVar97 + fVar93 * fVar93 + fVar78 * fVar78;
                          if ((uint)fVar71 < (uint)fVar15 && fVar71 != 0.0) {
                            fVar71 = fVar71 * *(float *)(param_1 + 0x34);
                            fVar80 = sqrtf(fVar71);
                            fVar87 = *(float *)(param_1 + 0x30);
                            fVar81 = pfVar4[3] - *(float *)(param_1 + 0x2c);
                            fVar85 = pfVar9[3] - *(float *)(param_1 + 0x2c);
                            fVar71 = fVar71 * (1.0 / fVar80);
                            if (fVar81 <= 0.0) {
                              fVar81 = 0.0;
                            }
                            if (fVar85 <= 0.0) {
                              fVar85 = 0.0;
                            }
                            fVar88 = *(float *)(param_1 + 0x18);
                            fVar89 = (fVar88 - fVar71) * *(float *)(param_1 + 0x28);
                            fVar92 = pfVar4[5];
                            fVar71 = (fVar81 + fVar85) *
                                     *(float *)(param_1 + 0x24) *
                                     (fVar71 + ((1.0 / fVar80) * *(float *)(param_1 + 0x1c) -
                                               (fVar88 + fVar88)));
                            fVar80 = pfVar9[5];
                            fVar88 = pfVar9[6];
                            fVar85 = pfVar4[6];
                            fVar81 = 1.0 / pfVar9[3];
                            *pfVar63 = fVar81 * (fVar87 * fVar97 * fVar71 +
                                                fVar89 * fVar87 * (pfVar9[4] - pfVar4[4])) +
                                       *pfVar63;
                            *pfVar49 = fVar81 * (fVar87 * fVar93 * fVar71 +
                                                fVar89 * fVar87 * (fVar80 - fVar92)) + *pfVar49;
                            *pfVar3 = fVar81 * (fVar87 * fVar78 * fVar71 +
                                               fVar89 * fVar87 * (fVar88 - fVar85)) + *pfVar3;
                          }
                          lVar59 = lVar59 + -1;
                          puVar55 = puVar55 + 1;
                        } while (lVar59 != 0);
                      }
                      uVar42 = uVar42 + 1;
                    } while (uVar42 != uVar37);
                  }
                }
                else {
                  pfVar4 = (float *)param_8[7];
                  puVar55 = (uint *)param_8[8];
                  uVar58 = uVar36 + 7 & 0xfffffffc;
                  local_b0[0] = 3.4028235e+38;
                  local_b0[1] = 3.4028235e+38;
                  local_b0[2] = 3.4028235e+38;
                  local_b0[3] = 3.4028235e+38;
                  if (uVar58 != 0) {
                    uVar33 = 0;
                    puVar44 = puVar65 + 2;
                    pfVar63 = pfVar4 + 8;
                    do {
                      if (uVar33 < uVar36) {
                        pfVar49 = (float *)(param_4 + (ulong)puVar44[-2] * 0x20);
                        if (uVar36 <= uVar33 + 1) goto LAB_001a4f34;
LAB_001a4f6c:
                        pauVar52 = (undefined1 (*) [16])(param_4 + (ulong)puVar44[-1] * 0x20);
                        if (uVar33 + 2 < uVar36) goto LAB_001a4f80;
LAB_001a4f44:
                        pauVar53 = (undefined1 (*) [12])local_b0;
                        if (uVar36 <= uVar33 + 3) goto LAB_001a4f54;
LAB_001a4f94:
                        pauVar54 = (undefined1 (*) [12])(param_4 + (ulong)puVar44[1] * 0x20);
                      }
                      else {
                        pfVar49 = local_b0;
                        if (uVar33 + 1 < uVar36) goto LAB_001a4f6c;
LAB_001a4f34:
                        pauVar52 = (undefined1 (*) [16])local_b0;
                        if (uVar36 <= uVar33 + 2) goto LAB_001a4f44;
LAB_001a4f80:
                        pauVar53 = (undefined1 (*) [12])(param_4 + (ulong)*puVar44 * 0x20);
                        if (uVar33 + 3 < uVar36) goto LAB_001a4f94;
LAB_001a4f54:
                        pauVar54 = (undefined1 (*) [12])local_b0;
                      }
                      fVar15 = *pfVar49;
                      fVar68 = pfVar49[2];
                      uVar18 = *(undefined8 *)(*pauVar53 + 8);
                      fVar70 = SUB124(*pauVar53,0);
                      uVar66 = SUB124(*pauVar53,4);
                      auVar76 = *pauVar52;
                      auVar24 = *pauVar54;
                      fVar69 = auVar76._0_4_;
                      fVar71 = SUB124(*pauVar54,0);
                      uVar67 = SUB124(*pauVar54,4);
                      auVar19._4_4_ = fVar70;
                      auVar19._0_4_ = fVar15;
                      auVar19._8_4_ = pfVar49[1];
                      auVar19._12_4_ = uVar66;
                      auVar20._4_4_ = fVar70;
                      auVar20._0_4_ = fVar15;
                      auVar20._8_4_ = pfVar49[1];
                      auVar20._12_4_ = uVar66;
                      auVar77 = NEON_ext(auVar19,auVar20,8,1);
                      auVar21._4_4_ = fVar71;
                      auVar21._0_4_ = fVar69;
                      auVar21._8_4_ = auVar76._4_4_;
                      auVar21._12_4_ = uVar67;
                      auVar22._4_4_ = fVar71;
                      auVar22._0_4_ = fVar69;
                      auVar22._8_4_ = auVar76._4_4_;
                      auVar22._12_4_ = uVar67;
                      auVar79 = NEON_ext(auVar21,auVar22,8,1);
                      uVar33 = uVar33 + 4;
                      pfVar63[-8] = fVar15;
                      pfVar63[-7] = fVar69;
                      pfVar63[-6] = fVar70;
                      pfVar63[-5] = fVar71;
                      puVar44 = puVar44 + 4;
                      pfVar63[-4] = auVar77._0_4_;
                      pfVar63[-3] = auVar79._0_4_;
                      pfVar63[-2] = auVar77._4_4_;
                      pfVar63[-1] = auVar79._4_4_;
                      *pfVar63 = fVar68;
                      pfVar63[1] = auVar76._8_4_;
                      pfVar63[2] = (float)uVar18;
                      pfVar63[3] = auVar24._8_4_;
                      pfVar63 = pfVar63 + 0xc;
                    } while (uVar33 < uVar58);
                  }
                  uStack_138 = *(undefined4 *)(param_1 + 0x30);
                  uStack_134 = uStack_138;
                  local_140 = uStack_138;
                  uStack_13c = uStack_138;
                  uStack_128 = *(undefined4 *)(param_1 + 0x34);
                  uStack_124 = uStack_128;
                  local_130 = uStack_128;
                  uStack_12c = uStack_128;
                  uStack_118 = *(undefined4 *)(param_1 + 0x18);
                  uStack_114 = uStack_118;
                  local_120 = uStack_118;
                  uStack_11c = uStack_118;
                  uStack_108 = *(undefined4 *)(param_1 + 0x1c);
                  uStack_104 = uStack_108;
                  local_110 = uStack_108;
                  uStack_10c = uStack_108;
                  uStack_f8 = *(undefined4 *)(param_1 + 0x20);
                  uStack_f4 = uStack_f8;
                  local_100 = uStack_f8;
                  uStack_fc = uStack_f8;
                  uStack_e8 = *(undefined4 *)(param_1 + 0x24);
                  uStack_e4 = uStack_e8;
                  local_f0 = uStack_e8;
                  uStack_ec = uStack_e8;
                  uStack_d8 = *(undefined4 *)(param_1 + 0x28);
                  uStack_d4 = uStack_d8;
                  local_e0 = uStack_d8;
                  uStack_dc = uStack_d8;
                  uStack_c8 = *(undefined4 *)(param_1 + 0x2c);
                  uStack_c4 = uStack_c8;
                  local_d0 = uStack_c8;
                  uStack_cc = uStack_c8;
                  fVar15 = *(float *)(param_1 + 0x10);
                  puVar44 = puVar65 + uVar36;
                  uVar42 = 0;
                  uVar58 = 0;
                  do {
                    uVar57 = *puVar30;
                    puVar55[uVar42] = uVar57;
                    pfVar63 = (float *)(lVar29 + (ulong)uVar57 * 0x20);
                    fVar69 = *pfVar63;
                    fVar70 = pfVar63[1];
                    fVar71 = pfVar63[2];
                    fVar68 = fVar70 - (float)*(undefined8 *)(pfVar4 + 4);
                    fVar80 = fVar70 - (float)((ulong)*(undefined8 *)(pfVar4 + 4) >> 0x20);
                    fVar85 = fVar70 - (float)*(undefined8 *)(pfVar4 + 6);
                    fVar87 = fVar70 - (float)((ulong)*(undefined8 *)(pfVar4 + 6) >> 0x20);
                    fVar97 = fVar71 - (float)*(undefined8 *)(pfVar4 + 8);
                    fVar93 = fVar71 - (float)((ulong)*(undefined8 *)(pfVar4 + 8) >> 0x20);
                    fVar78 = fVar71 - (float)*(undefined8 *)(pfVar4 + 10);
                    fVar81 = fVar71 - (float)((ulong)*(undefined8 *)(pfVar4 + 10) >> 0x20);
                    puVar39 = puVar55 + ((int)uVar42 + 1);
                    uVar42 = (ulong)((int)uVar42 + 2);
                    fVar68 = fVar97 * fVar97 +
                             (fVar69 - *pfVar4) * (fVar69 - *pfVar4) + fVar68 * fVar68;
                    fVar97 = fVar93 * fVar93 +
                             (fVar69 - pfVar4[1]) * (fVar69 - pfVar4[1]) + fVar80 * fVar80;
                    fVar93 = fVar78 * fVar78 +
                             (fVar69 - pfVar4[2]) * (fVar69 - pfVar4[2]) + fVar85 * fVar85;
                    fVar78 = fVar81 * fVar81 +
                             (fVar69 - pfVar4[3]) * (fVar69 - pfVar4[3]) + fVar87 * fVar87;
                    uVar43 = CONCAT26(-(ushort)(0.0 < fVar78),
                                      CONCAT24(-(ushort)(0.0 < fVar93),
                                               CONCAT22(-(ushort)(0.0 < fVar97),
                                                        -(ushort)(0.0 < fVar68)))) &
                             CONCAT26(-(ushort)(fVar78 < fVar15),
                                      CONCAT24(-(ushort)(fVar93 < fVar15),
                                               CONCAT22(-(ushort)(fVar97 < fVar15),
                                                        -(ushort)(fVar68 < fVar15))));
                    auVar74._0_8_ =
                         CONCAT35(0,CONCAT14((char)(uVar43 >> 0x10),(uint)((byte)uVar43 & 1)) &
                                    0x1ffffffff);
                    auVar74[8] = (byte)(uVar43 >> 0x20) & 1;
                    auVar74._9_3_ = 0;
                    auVar74[0xc] = (byte)(uVar43 >> 0x30) & 1;
                    local_160[1] = (ulong)auVar74._8_5_;
                    local_160[0] = auVar74._0_8_;
                    uVar43 = uVar42;
                    pfVar63 = pfVar4;
                    puVar64 = puVar65;
                    uVar33 = 0;
                    do {
                      uVar50 = uVar33 + 4;
                      fVar97 = fVar69 - pfVar63[0xc];
                      lVar59 = (ulong)(uVar50 & 4) * 4;
                      fVar68 = fVar71 - (float)*(undefined8 *)(pfVar63 + 0x14);
                      fVar93 = fVar71 - (float)((ulong)*(undefined8 *)(pfVar63 + 0x14) >> 0x20);
                      fVar78 = fVar71 - (float)*(undefined8 *)(pfVar63 + 0x16);
                      fVar81 = fVar71 - (float)((ulong)*(undefined8 *)(pfVar63 + 0x16) >> 0x20);
                      uVar33 = uVar33 & 4;
                      fVar68 = fVar68 * fVar68 +
                               fVar97 * fVar97 + (fVar70 - pfVar63[0x10]) * (fVar70 - pfVar63[0x10])
                      ;
                      fVar97 = fVar93 * fVar93 +
                               (fVar69 - pfVar63[0xd]) * (fVar69 - pfVar63[0xd]) +
                               (fVar70 - pfVar63[0x11]) * (fVar70 - pfVar63[0x11]);
                      fVar93 = fVar78 * fVar78 +
                               (fVar69 - pfVar63[0xe]) * (fVar69 - pfVar63[0xe]) +
                               (fVar70 - pfVar63[0x12]) * (fVar70 - pfVar63[0x12]);
                      fVar78 = fVar81 * fVar81 +
                               (fVar69 - pfVar63[0xf]) * (fVar69 - pfVar63[0xf]) +
                               (fVar70 - pfVar63[0x13]) * (fVar70 - pfVar63[0x13]);
                      uVar46 = CONCAT26(-(ushort)(0.0 < fVar78),
                                        CONCAT24(-(ushort)(0.0 < fVar93),
                                                 CONCAT22(-(ushort)(0.0 < fVar97),
                                                          -(ushort)(0.0 < fVar68)))) &
                               CONCAT26(-(ushort)(fVar78 < fVar15),
                                        CONCAT24(-(ushort)(fVar93 < fVar15),
                                                 CONCAT22(-(ushort)(fVar97 < fVar15),
                                                          -(ushort)(fVar68 < fVar15))));
                      auVar75._0_8_ =
                           CONCAT35(0,CONCAT14((char)(uVar46 >> 0x10),(uint)((byte)uVar46 & 1)) &
                                      0x1ffffffff);
                      auVar75[8] = (byte)(uVar46 >> 0x20) & 1;
                      auVar75._9_3_ = 0;
                      auVar75[0xc] = (byte)(uVar46 >> 0x30) & 1;
                      *(ulong *)((long)local_160 + lVar59 + 8) = (ulong)auVar75._8_5_;
                      *(ulong *)((long)local_160 + lVar59) = auVar75._0_8_;
                      iVar31 = *(int *)((long)local_160 + (ulong)(uVar33 | 1) * 4);
                      iVar51 = *(int *)((long)local_160 + (ulong)(uVar33 | 2) * 4);
                      iVar40 = *(int *)((long)local_160 + (ulong)(uVar33 | 3) * 4);
                      uVar33 = *(int *)((long)local_160 + (ulong)uVar33 * 4) + (int)uVar42;
                      puVar55[uVar42] = *puVar64;
                      if (puVar64 + 1 < puVar44) {
                        uVar32 = puVar64[1];
                      }
                      else {
                        uVar32 = 0;
                      }
                      puVar55[uVar33] = uVar32;
                      uVar33 = uVar33 + iVar31;
                      if (puVar64 + 2 < puVar44) {
                        uVar32 = puVar64[2];
                      }
                      else {
                        uVar32 = 0;
                      }
                      puVar55[uVar33] = uVar32;
                      uVar33 = uVar33 + iVar51;
                      if (puVar64 + 3 < puVar44) {
                        uVar32 = puVar64[3];
                      }
                      else {
                        uVar32 = 0;
                      }
                      uVar45 = uVar33 + iVar40;
                      uVar42 = (ulong)uVar45;
                      puVar55[uVar33] = uVar32;
                      if (0x80 - uVar45 < 6) {
                        *puVar39 = uVar45 - (int)uVar43;
                        if (param_2 == 0) {
                          if (uVar45 != 0) {
                            fVar97 = *(float *)(param_1 + 0x1c);
                            fVar93 = *(float *)(param_1 + 0x20);
                            fVar68 = *(float *)(param_1 + 0x34);
                            uVar33 = 0;
                            do {
                              uVar17 = puVar55[uVar33 + 1];
                              uVar32 = uVar33 + 2;
                              if (uVar17 != 0) {
                                pfVar49 = (float *)(lVar29 + (ulong)puVar55[uVar33] * 0x20);
                                fVar78 = pfVar49[3];
                                uVar48 = uVar17;
                                uVar33 = uVar32;
                                do {
                                  uVar42 = (ulong)uVar33;
                                  uVar33 = uVar33 + 1;
                                  pfVar3 = (float *)(param_4 + (ulong)puVar55[uVar42] * 0x20);
                                  fVar81 = fVar97 - fVar68 * ((*pfVar49 - *pfVar3) *
                                                              (*pfVar49 - *pfVar3) +
                                                              (pfVar49[1] - pfVar3[1]) *
                                                              (pfVar49[1] - pfVar3[1]) +
                                                             (pfVar49[2] - pfVar3[2]) *
                                                             (pfVar49[2] - pfVar3[2]));
                                  fVar78 = fVar78 + fVar81 * fVar81 * fVar93 * fVar81;
                                  uVar48 = uVar48 - 1;
                                } while (uVar48 != 0);
                                pfVar49[3] = fVar78;
                                uVar32 = uVar32 + uVar17;
                              }
                              uVar33 = uVar32;
                            } while (uVar33 < uVar45);
                          }
                        }
                        else {
                          FUN_001a5d00(lVar60,lVar29,param_4,puVar55,uVar42,param_1,&local_140);
                        }
                        uVar43 = 2;
                        uVar42 = 2;
                        *puVar55 = uVar57;
                        puVar39 = puVar55 + 1;
                      }
                      puVar64 = puVar64 + 4;
                      pfVar63 = pfVar63 + 0xc;
                      uVar33 = uVar50;
                    } while (uVar50 < uVar36);
                    uVar33 = (uint)uVar42;
                    *puVar39 = uVar33 - (int)uVar43;
                    uVar58 = uVar58 + 1;
                    puVar30 = puVar30 + 1;
                  } while (uVar58 != uVar61);
                  if (uVar33 != 0) {
                    if (param_2 == 0) {
                      fVar68 = *(float *)(param_1 + 0x1c);
                      fVar69 = *(float *)(param_1 + 0x20);
                      fVar15 = *(float *)(param_1 + 0x34);
                      uVar36 = 0;
                      do {
                        uVar57 = puVar55[uVar36 + 1];
                        uVar58 = uVar36 + 2;
                        if (uVar57 != 0) {
                          pfVar4 = (float *)(lVar29 + (ulong)puVar55[uVar36] * 0x20);
                          fVar70 = pfVar4[3];
                          uVar50 = uVar57;
                          uVar36 = uVar58;
                          do {
                            uVar42 = (ulong)uVar36;
                            uVar36 = uVar36 + 1;
                            pfVar63 = (float *)(param_4 + (ulong)puVar55[uVar42] * 0x20);
                            fVar71 = fVar68 - fVar15 * ((*pfVar4 - *pfVar63) * (*pfVar4 - *pfVar63)
                                                        + (pfVar4[1] - pfVar63[1]) *
                                                          (pfVar4[1] - pfVar63[1]) +
                                                       (pfVar4[2] - pfVar63[2]) *
                                                       (pfVar4[2] - pfVar63[2]));
                            fVar70 = fVar70 + fVar71 * fVar71 * fVar69 * fVar71;
                            uVar50 = uVar50 - 1;
                          } while (uVar50 != 0);
                          pfVar4[3] = fVar70;
                          uVar58 = uVar58 + uVar57;
                        }
                        uVar36 = uVar58;
                      } while (uVar36 < uVar33);
                    }
                    else {
                      FUN_001a5d00(lVar60,lVar29,param_4,puVar55,uVar42,param_1,&local_140);
                    }
                  }
                }
              }
            }
          }
          uVar42 = (ulong)(uVar35 - uVar56);
          lVar29 = lVar29 + (ulong)uVar56 * 0x20;
          lVar60 = lVar60 + (ulong)uVar56 * 0xc;
        } while (uVar35 - uVar56 != 0);
      }
      lVar41 = lVar41 + 1;
    } while (lVar41 != 0x1a);
  }
  return;
}


