/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005535f0; name: FUN_005535f0
 */


int FUN_005535f0(long param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  bool bVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  long *plVar19;
  ulong *puVar20;
  ulong *puVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  undefined8 *puVar25;
  uint uVar26;
  uint *puVar27;
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  ulong uVar31;
  long *plVar32;
  ulong uVar33;
  long lVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  uint local_340;
  uint uStack_33c;
  uint local_338;
  uint auStack_334 [3];
  undefined3 local_327;
  undefined5 uStack_324;
  uint local_31c;
  uint uStack_318;
  undefined8 local_314;
  undefined4 local_30c;
  undefined5 uStack_308;
  undefined3 local_303;
  undefined5 uStack_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined5 uStack_2e4;
  undefined3 local_2df;
  undefined5 uStack_2dc;
  undefined8 local_2d4;
  uint local_2cc;
  uint uStack_2c8;
  undefined4 local_2c4;
  undefined5 uStack_2c0;
  undefined3 local_2bb;
  undefined5 uStack_2b8;
  ulong local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined5 uStack_29c;
  undefined3 local_297;
  undefined5 uStack_294;
  ulong local_28c;
  undefined8 local_284;
  undefined4 local_27c;
  undefined5 uStack_278;
  undefined3 local_273;
  undefined5 uStack_270;
  ulong local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined5 uStack_254;
  undefined3 local_24f;
  undefined5 uStack_24c;
  undefined8 local_244;
  undefined8 local_23c;
  undefined4 local_234;
  undefined5 uStack_230;
  undefined3 local_22b;
  undefined5 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined5 uStack_20c;
  undefined3 local_207;
  undefined5 uStack_204;
  undefined8 local_1fc;
  undefined8 local_1f4;
  undefined4 local_1ec;
  undefined5 uStack_1e8;
  undefined3 local_1e3;
  undefined5 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined5 uStack_1c4;
  undefined3 local_1bf;
  undefined5 uStack_1bc;
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined5 uStack_1a0;
  undefined3 local_19b;
  undefined5 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined5 uStack_17c;
  undefined3 local_177;
  undefined5 uStack_174;
  undefined8 local_16c;
  undefined8 local_164;
  undefined4 local_15c;
  undefined5 uStack_158;
  undefined3 local_153;
  undefined5 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined5 uStack_134;
  undefined3 local_12f;
  undefined5 uStack_12c;
  undefined8 local_124;
  undefined8 local_11c;
  undefined4 local_114;
  undefined5 uStack_110;
  undefined3 local_10b;
  undefined5 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined5 uStack_ec;
  undefined3 local_e7;
  undefined5 uStack_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined5 uStack_c8;
  undefined3 local_c3;
  undefined5 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [24];
  
  FUN_00552fb0();
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_1 + 0xf4);
  FUN_005a2c30();
  FUN_005a1740(*(undefined8 *)(param_1 + 0x118));
  if (*(int *)(param_1 + 0xd0) == 0) {
    local_340 = 0x1a;
    uVar14 = FUN_00542c70(*(undefined8 *)PTR_DAT_02713c38,0x20001,3,&local_340,1);
    *(undefined4 *)(param_1 + 0xd0) = uVar14;
  }
  *(undefined1 *)(param_1 + 0x130) = 0;
  if (*(char *)(param_1 + 0x100) != '\0') {
    fVar36 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xb8));
    fVar35 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xb4));
    fVar35 = (float)(*(int *)(param_1 + 0xbc) + 1) / fVar35;
    fVar36 = (float)(*(int *)(param_1 + 0xc0) + 1) / fVar36;
    fVar37 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x104));
    if (fVar35 <= fVar36) {
      fVar35 = fVar36;
    }
    fVar35 = logf(fVar35);
    fVar36 = logf(1.0 / fVar37);
    uVar9 = (int)(fVar35 / fVar36) - 1;
    *(uint *)(param_1 + 0x308) = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
  }
  lVar30 = param_1 + 0x10;
  FUN_005528d0(&local_340,lVar30,"::m_pGlareSource");
  puVar10 = PTR_PTR_02713988;
  uVar29 = CONCAT44(auStack_334[0],local_338);
  uVar18 = FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x98,
                        "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x294,0);
  FUN_005a4710(uVar18,uVar29);
  *(undefined8 *)(param_1 + 0x2f0) = uVar18;
  FUN_00551380(&local_340);
  FUN_005528d0(&local_340,lVar30,"::m_pGlareResult");
  uVar29 = CONCAT44(auStack_334[0],local_338);
  uVar18 = FUN_005b9a50(*(undefined8 *)puVar10,0x128,
                        "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x295,0);
  FUN_0059aa70(uVar18,uVar29);
  *(undefined8 *)(param_1 + 0x398) = uVar18;
  FUN_00551380(&local_340);
  if (*(char *)(param_1 + 300) != '\0') {
    FUN_005528d0(&local_340,lVar30,"::m_pGlareResultChromaticAberration");
    uVar29 = CONCAT44(auStack_334[0],local_338);
    uVar18 = FUN_005b9a50(*(undefined8 *)puVar10,0x128,
                          "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x299,0);
    FUN_0059aa70(uVar18,uVar29);
    *(undefined8 *)(param_1 + 0x3a0) = uVar18;
    FUN_00551380(&local_340);
  }
  if (*(char *)(param_1 + 0xc4) != '\0') {
    FUN_005528d0(&local_340,lVar30,"::m_pGlareResultAntialias");
    uVar29 = CONCAT44(auStack_334[0],local_338);
    uVar18 = FUN_005b9a50(*(undefined8 *)puVar10,0x128,
                          "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x29d,0);
    FUN_0059aa70(uVar18,uVar29);
    *(undefined8 *)(param_1 + 0x3b0) = uVar18;
    FUN_00551380(&local_340);
  }
  if (*(char *)(param_1 + 0x120) != '\0') {
    FUN_005528d0(&local_340,lVar30,"::m_pGlareResultLensDistortionFalloff");
    uVar29 = CONCAT44(auStack_334[0],local_338);
    uVar18 = FUN_005b9a50(*(undefined8 *)puVar10,0x128,
                          "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x2a0,0);
    FUN_0059aa70(uVar18,uVar29);
    *(undefined8 *)(param_1 + 0x3a8) = uVar18;
    FUN_00551380(&local_340);
  }
  if (0.0 < *(float *)(param_1 + 200)) {
    FUN_005528d0(&local_340,lVar30,"::m_pGlareResultUpsample");
    uVar29 = CONCAT44(auStack_334[0],local_338);
    uVar18 = FUN_005b9a50(*(undefined8 *)puVar10,0x128,
                          "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x2a3,0);
    FUN_0059aa70(uVar18,uVar29);
    *(undefined8 *)(param_1 + 0x3b8) = uVar18;
    FUN_00551380(&local_340);
  }
  uVar9 = *(uint *)(param_1 + 0xdc);
  lVar28 = (long)(int)uVar9;
  plVar19 = (long *)FUN_005b9a50(*(undefined8 *)puVar10,lVar28 * 8 + 8,
                                 "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x2a7,0);
  plVar32 = plVar19;
  if (plVar19 != (long *)0x0) {
    plVar32 = plVar19 + 1;
    *plVar19 = lVar28;
  }
  *(long **)(param_1 + 0x310) = plVar32;
  puVar10 = PTR_PTR_02713988;
  if (0 < (int)uVar9) {
    uVar31 = 0;
    do {
      FUN_005528d0(auStack_a8,lVar30,"::m_ppBloomGeneration[");
      FUN_00552650(auStack_b8,uVar31 & 0xffffffff);
      FUN_005516e0(auStack_98,auStack_a8,auStack_b8);
      FUN_005528d0(&local_340,auStack_98,&DAT_01cffc78);
      FUN_00551380(auStack_98);
      FUN_00551380(auStack_b8);
      FUN_00551380(auStack_a8);
      uVar29 = CONCAT44(auStack_334[0],local_338);
      uVar18 = FUN_005b9a50(*(undefined8 *)puVar10,0x98,
                            "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x2ab,0);
      FUN_005a4710(uVar18,uVar29);
      *(undefined8 *)(*(long *)(param_1 + 0x310) + uVar31 * 8) = uVar18;
      FUN_00551380(&local_340);
      uVar31 = uVar31 + 1;
    } while (uVar9 != uVar31);
  }
  FUN_005528d0(&local_340,lVar30,"::m_pBloomResult");
  uVar29 = CONCAT44(auStack_334[0],local_338);
  uVar18 = FUN_005b9a50(*(undefined8 *)puVar10,0x128,
                        "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x2b2,0);
  FUN_0059aa70(uVar18,uVar29);
  *(undefined8 *)(param_1 + 0x318) = uVar18;
  FUN_00551380(&local_340);
  *(undefined8 *)(param_1 + 0x300) = 0;
  puVar11 = PTR_DAT_027139b0;
  puVar10 = PTR_PTR_02713988;
  if (*(int *)(param_1 + 0x308) == 0) {
    if (0 < *(int *)(param_1 + 0xf0)) {
      FUN_005528d0(&local_340,lVar30,"::m_pStarGeneration");
      uVar29 = CONCAT44(auStack_334[0],local_338);
      uVar18 = FUN_005b9a50(*(undefined8 *)puVar10,0x98,
                            "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x2e8,0);
      FUN_005a4710(uVar18,uVar29);
      *(undefined8 *)(param_1 + 0x328) = uVar18;
      FUN_00551380(&local_340);
      FUN_005528d0(&local_340,lVar30,"::m_pStarResult");
      uVar29 = CONCAT44(auStack_334[0],local_338);
      uVar18 = FUN_005b9a50(*(undefined8 *)puVar10,0x128,
                            "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x2e9,0);
      FUN_0059aa70(uVar18,uVar29);
      *(undefined8 *)(param_1 + 0x330) = uVar18;
      FUN_00551380(&local_340);
      FUN_005528d0(&local_340,lVar30,"::m_pAnamorphicFlareResult");
      uVar29 = CONCAT44(auStack_334[0],local_338);
      uVar18 = FUN_005b9a50(*(undefined8 *)puVar10,0x128,
                            "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x2eb,0);
      FUN_0059aa70(uVar18,uVar29);
      *(undefined8 *)(param_1 + 0x338) = uVar18;
      FUN_00551380(&local_340);
    }
    if (*(char *)(param_1 + 0xf8) != '\0') {
      FUN_005528d0(&local_340,lVar30,"::m_pGhostGeneration");
      uVar29 = CONCAT44(auStack_334[0],local_338);
      uVar18 = FUN_005b9a50(*(undefined8 *)puVar10,0x98,
                            "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x2ef,0);
      FUN_005a4710(uVar18,uVar29);
      *(undefined8 *)(param_1 + 0x340) = uVar18;
      FUN_00551380(&local_340);
    }
    iVar15 = *(int *)(param_1 + 0x10c);
    if (iVar15 < 2) {
      iVar15 = 1;
    }
    *(int *)(param_1 + 0x10c) = iVar15;
    if (*(char *)(param_1 + 0x108) == '\0') {
      *(undefined4 *)(param_1 + 0x10c) = 0;
    }
    else {
      FUN_005528d0(&local_340,lVar30,"::m_pLightShaftBlurSource");
      uVar29 = CONCAT44(auStack_334[0],local_338);
      uVar18 = FUN_005b9a50(*(undefined8 *)puVar10,0x128,
                            "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x2f6,0);
      FUN_0059aa70(uVar18,uVar29);
      *(undefined8 *)(param_1 + 0x3c0) = uVar18;
      FUN_00551380(&local_340);
      FUN_005528d0(&local_340,lVar30,"::m_pLightShaftResult");
      uVar29 = CONCAT44(auStack_334[0],local_338);
      uVar18 = FUN_005b9a50(*(undefined8 *)puVar10,0x128,
                            "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x2f7,0);
      FUN_0059aa70(uVar18,uVar29);
      *(undefined8 *)(param_1 + 0x3d0) = uVar18;
      FUN_00551380(&local_340);
      iVar15 = *(int *)(param_1 + 0x10c);
      plVar19 = (long *)FUN_005b9a50(*(undefined8 *)puVar10,(long)iVar15 * 0x60 | 8,
                                     "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x2fa,0);
      plVar32 = plVar19;
      if (plVar19 != (long *)0x0) {
        plVar32 = plVar19 + 1;
        *plVar19 = (long)iVar15;
      }
      *(long **)(param_1 + 0x1f8) = plVar32;
      if (1 < *(int *)(param_1 + 0x10c)) {
        FUN_005528d0(&local_340,lVar30,"::m_pLightShaftGeneration");
        uVar29 = CONCAT44(auStack_334[0],local_338);
        uVar18 = FUN_005b9a50(*(undefined8 *)puVar10,0x98,
                              "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x2ff,0);
        FUN_005a4710(uVar18,uVar29);
        *(undefined8 *)(param_1 + 0x3c8) = uVar18;
        FUN_00551380(&local_340);
      }
    }
    uVar7 = *(uint *)(param_1 + 0x114);
    if ((int)uVar7 < 2) {
      uVar7 = 1;
    }
    *(uint *)(param_1 + 0x114) = uVar7;
    if ((*(char *)(param_1 + 0x110) != '\0') && (0 < (int)uVar7)) {
      puVar20 = (ulong *)FUN_005b9a50(*(undefined8 *)puVar10,(ulong)uVar7 * 0x34 + 8,
                                      "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x30b,0)
      ;
      puVar21 = puVar20;
      if (puVar20 != (ulong *)0x0) {
        puVar21 = puVar20 + 1;
        *puVar20 = (ulong)uVar7;
      }
      *(ulong **)(param_1 + 0x208) = puVar21;
      FUN_005528d0(&local_340,lVar30,"::m_pLightGhostLuminance");
      uVar29 = CONCAT44(auStack_334[0],local_338);
      uVar18 = FUN_005b9a50(*(undefined8 *)puVar10,0x128,
                            "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x30c,0);
      FUN_0059aa70(uVar18,uVar29);
      *(undefined8 *)(param_1 + 0x390) = uVar18;
      FUN_00551380(&local_340);
    }
    uVar31 = (ulong)*(uint *)(param_1 + 0xfc);
    if (*(char *)(param_1 + 0xf9) != '\0') {
      puVar20 = (ulong *)FUN_005b9a50(*(undefined8 *)puVar10,uVar31 * 8 + 8,
                                      "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x312,0)
      ;
      puVar21 = puVar20;
      if (puVar20 != (ulong *)0x0) {
        puVar21 = puVar20 + 1;
        *puVar20 = uVar31;
      }
      *(ulong **)(param_1 + 0x350) = puVar21;
      if (*(int *)(param_1 + 0xfc) == 0) {
        uVar31 = 0;
      }
      else {
        uVar33 = 0;
        do {
          FUN_005528d0(auStack_a8,lVar30,"::m_pAfterimageGeneration[");
          FUN_00552650(auStack_b8,uVar33 & 0xffffffff);
          FUN_005516e0(auStack_98,auStack_a8,auStack_b8);
          FUN_005528d0(&local_340,auStack_98,&DAT_01cffc78);
          FUN_00551380(auStack_98);
          FUN_00551380(auStack_b8);
          FUN_00551380(auStack_a8);
          uVar29 = CONCAT44(auStack_334[0],local_338);
          uVar18 = FUN_005b9a50(*(undefined8 *)puVar10,0x98,
                                "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x316,0);
          FUN_005a4710(uVar18,uVar29);
          *(undefined8 *)(*(long *)(param_1 + 0x350) + uVar33 * 8) = uVar18;
          FUN_00551380(&local_340);
          uVar31 = (ulong)*(uint *)(param_1 + 0xfc);
          uVar33 = uVar33 + 1;
        } while (uVar33 < uVar31);
      }
    }
    puVar20 = (ulong *)FUN_005b9a50(*(undefined8 *)puVar10,uVar31 * 4 + 8,
                                    "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x319,0);
    puVar21 = puVar20;
    if (puVar20 != (ulong *)0x0) {
      puVar21 = puVar20 + 1;
      *puVar20 = uVar31;
    }
    *(ulong **)(param_1 + 0x358) = puVar21;
    if ((*(int *)(param_1 + 0xfc) != 0) &&
       (*(undefined4 *)puVar21 = 0x3f800000, 1 < *(uint *)(param_1 + 0xfc))) {
      uVar31 = 1;
      do {
        *(undefined4 *)(*(long *)(param_1 + 0x358) + uVar31 * 4) = 0x3f800000;
        uVar31 = uVar31 + 1;
      } while (uVar31 < *(uint *)(param_1 + 0xfc));
    }
    uVar8 = *(uint *)(param_1 + 0xb0);
    uVar3 = *(uint *)(param_1 + 0xd0);
    uVar4 = *(uint *)(param_1 + 0xd4);
    uVar2 = uVar8 & 1 | 8;
    uVar7 = uVar8 & 1;
    auStack_334[0] = uVar3;
    if (*(char *)(param_1 + 0x108) != '\0') {
      auStack_334[0] = *(uint *)(param_1 + 0xd8);
    }
    uStack_33c = *(uint *)(param_1 + 0xbc);
    local_338 = *(uint *)(param_1 + 0xc0);
    local_314 = 0;
    local_2cc = 0;
    uStack_2c8 = 0;
    local_2d4 = 0;
    auStack_334[1] = 1;
    uStack_324 = 0;
    stack0xfffffffffffffcd4 = 0;
    local_327 = 0;
    if (*(char *)(param_1 + 0x121) == '\0') {
      local_31c = 0x80000000;
      uStack_318 = 0;
    }
    else {
      local_314 = CONCAT44(auStack_334[0],local_338);
      local_31c = uVar2;
      uStack_318 = uStack_33c;
    }
    uStack_300 = 0;
    local_303 = 0;
    uStack_308 = 0;
    local_30c = 1;
    uVar31 = CONCAT44(uStack_33c,uVar8) & 0xffffffff00000001;
    local_2f8 = uVar31 | 8;
    local_2f0 = CONCAT44(auStack_334[0],local_338);
    local_2e8 = 1;
    uStack_2dc = 0;
    uStack_2e4 = 0;
    local_2df = 0;
    if (*(float *)(param_1 + 0xf4) <= 0.0) {
      iVar15 = 3;
    }
    else {
      iVar15 = 4;
      local_2d4 = CONCAT44(uStack_33c,uVar8) & 0xffffffff00000001 | 8;
      local_2cc = local_338;
      uStack_2c8 = uVar3;
    }
    local_340 = uVar7;
    if ((uVar8 >> 0x1c & 1) != 0) {
      local_31c = local_31c | 0x1000000;
      local_2f8._4_4_ = (undefined4)(uVar31 >> 0x20);
      local_2f8 = CONCAT44(local_2f8._4_4_,(undefined4)local_2f8) | 0x2000000;
      local_340 = uVar7 | 0x2000000;
      if (iVar15 != 3) {
        local_2d4 = local_2d4 | 0x1000000;
      }
    }
    uStack_2b8 = 0;
    local_2bb = 0;
    uStack_2c0 = 0;
    local_2c4 = 1;
    iVar15 = FUN_005a56c0(*(undefined8 *)(param_1 + 0x2f0),iVar15,&local_340,0,0,0);
    if (iVar15 < 0) {
      return iVar15;
    }
    uVar14 = *(undefined4 *)(param_1 + 0xbc);
    uVar5 = *(undefined4 *)(param_1 + 0xc0);
    uVar23 = *(uint *)(param_1 + 0xb0) & 0x10000000;
    local_340 = uVar7 | uVar23 >> 4;
    bVar12 = (*(uint *)(param_1 + 0xb0) & 0x10000000) == 0;
    uStack_324 = 0;
    stack0xfffffffffffffcd4 = 0;
    local_327 = 0;
    auStack_334[1] = 1;
    uStack_33c = uVar14;
    local_338 = uVar5;
    auStack_334[0] = uVar4;
    iVar16 = FUN_0059abd0(*(undefined8 *)(param_1 + 0x398),&local_340);
    if (-1 < iVar16) {
      iVar16 = iVar15;
      if (*(char *)(param_1 + 300) != '\0') {
        local_340 = uVar7;
        if ((*(byte *)(param_1 + 0xb3) >> 4 & 1) != 0) {
          bVar12 = uVar23 != 0;
          local_340 = 0x1000000;
          if (bVar12) {
            local_340 = 0x2000000;
          }
          local_340 = local_340 | uVar7;
        }
        auStack_334[1] = 1;
        uStack_324 = 0;
        stack0xfffffffffffffcd4 = 0;
        local_327 = 0;
        uStack_33c = uVar14;
        local_338 = uVar5;
        auStack_334[0] = uVar4;
        iVar17 = FUN_0059abd0(*(undefined8 *)(param_1 + 0x3a0),&local_340);
        iVar16 = iVar17;
        if (-1 < iVar17) {
          iVar16 = iVar15;
        }
        if (iVar17 < 0) {
          return iVar16;
        }
      }
      iVar15 = iVar16;
      if (*(char *)(param_1 + 0x120) != '\0') {
        if ((*(byte *)(param_1 + 0xb3) >> 4 & 1) == 0) {
          local_340 = uVar7;
        }
        else {
          local_340 = 0x1000000;
          if (!bVar12) {
            local_340 = 0x2000000;
          }
          local_340 = local_340 | uVar7;
          bVar12 = (bool)(bVar12 ^ 1);
        }
        auStack_334[1] = 1;
        uStack_324 = 0;
        stack0xfffffffffffffcd4 = 0;
        local_327 = 0;
        uStack_33c = uVar14;
        local_338 = uVar5;
        auStack_334[0] = uVar4;
        iVar17 = FUN_0059abd0(*(undefined8 *)(param_1 + 0x3a8),&local_340);
        iVar15 = iVar17;
        if (-1 < iVar17) {
          iVar15 = iVar16;
        }
        if (iVar17 < 0) {
          return iVar15;
        }
      }
      iVar16 = iVar15;
      if (*(char *)(param_1 + 0xc4) != '\0') {
        if ((*(byte *)(param_1 + 0xb3) >> 4 & 1) == 0) {
          local_340 = uVar7;
        }
        else {
          local_340 = 0x1000000;
          if (!bVar12) {
            local_340 = 0x2000000;
          }
          local_340 = local_340 | uVar7;
          bVar12 = (bool)(bVar12 ^ 1);
        }
        auStack_334[1] = 1;
        uStack_324 = 0;
        stack0xfffffffffffffcd4 = 0;
        local_327 = 0;
        uStack_33c = uVar14;
        local_338 = uVar5;
        auStack_334[0] = uVar4;
        iVar17 = FUN_0059abd0(*(undefined8 *)(param_1 + 0x3b0),&local_340);
        iVar16 = iVar17;
        if (-1 < iVar17) {
          iVar16 = iVar15;
        }
        if (iVar17 < 0) {
          return iVar16;
        }
      }
      if (0.0 < *(float *)(param_1 + 200)) {
        fVar35 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xc0));
        uStack_33c = *(uint *)(param_1 + 0xbc) << 1;
        if (*(uint *)(param_1 + 0xcc) <= uStack_33c) {
          uStack_33c = *(uint *)(param_1 + 0xcc);
        }
        uVar23 = 0x1000000;
        if (!bVar12) {
          uVar23 = 0x2000000;
        }
        local_340 = uVar23 & (*(int *)(param_1 + 0xb0) << 3) >> 0x1f | uVar7;
        uStack_324 = 0;
        stack0xfffffffffffffcd4 = 0;
        local_327 = 0;
        local_338 = (uint)((float)uStack_33c / ((float)*(uint *)(param_1 + 0xbc) / fVar35));
        auStack_334[1] = 1;
        auStack_334[0] = uVar4;
        iVar17 = FUN_0059abd0(*(undefined8 *)(param_1 + 0x3b8),&local_340);
        iVar15 = iVar17;
        if (-1 < iVar17) {
          iVar15 = iVar16;
        }
        if (iVar17 < 0) {
          return iVar15;
        }
      }
      uStack_33c = *(uint *)(param_1 + 0xbc);
      local_338 = *(uint *)(param_1 + 0xc0);
      local_340 = *(uint *)(param_1 + 0xb0) >> 4 & 0x1000000 | uVar7;
      uStack_324 = 0;
      stack0xfffffffffffffcd4 = 0;
      local_327 = 0;
      auStack_334[1] = 1;
      auStack_334[0] = uVar4;
      iVar16 = FUN_0059abd0(*(undefined8 *)(param_1 + 0x318),&local_340);
      if (-1 < iVar16) {
        if (*(long *)(param_1 + 0x330) != 0) {
          uVar23 = *(uint *)(param_1 + 0xbc);
          uVar6 = *(uint *)(param_1 + 0xc0);
          uVar24 = *(uint *)(param_1 + 0xb0) >> 4 & 0x1000000 | uVar7;
          auStack_334[1] = 1;
          uStack_324 = 0;
          stack0xfffffffffffffcd4 = 0;
          local_327 = 0;
          local_340 = uVar24;
          uStack_33c = uVar23;
          local_338 = uVar6;
          auStack_334[0] = uVar4;
          iVar15 = FUN_0059abd0(*(long *)(param_1 + 0x330),&local_340);
          if (iVar15 < 0) {
            return iVar15;
          }
          if (*(long *)(param_1 + 0x338) != 0) {
            auStack_334[1] = 1;
            uStack_324 = 0;
            stack0xfffffffffffffcd4 = 0;
            local_327 = 0;
            local_340 = uVar24;
            uStack_33c = uVar23;
            local_338 = uVar6;
            auStack_334[0] = uVar4;
            iVar15 = FUN_0059abd0(*(long *)(param_1 + 0x338),&local_340);
            if (iVar15 < 0) {
              return iVar15;
            }
          }
        }
        plVar19 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,lVar28 * 0x38 + 8,
                                       "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",0x3ed,0
                                      );
        plVar32 = plVar19;
        if (plVar19 != (long *)0x0) {
          plVar32 = plVar19 + 1;
          *plVar19 = lVar28;
        }
        *(long **)(param_1 + 800) = plVar32;
        fVar35 = DAT_01d4bdf0;
        if (0 < (int)uVar9) {
          puVar25 = (undefined8 *)((ulong)&local_340 | 4);
          uVar23 = uVar7 | 0x2000008;
          uVar6 = uVar7 | 0x1000008;
          iVar15 = -1;
          lVar34 = 0;
          lVar30 = 0;
          do {
            iVar16 = (int)lVar30 - *(int *)(param_1 + 0xe0);
            if (iVar16 < 0) {
              uVar24 = 2;
              fVar36 = 1.0;
            }
            else {
              fVar36 = ldexpf(1.0,iVar15 + *(int *)(param_1 + 0xe0));
              uVar24 = 3;
            }
            fVar37 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xbc));
            uStack_33c = (uint)(fVar36 * fVar37 + fVar35);
            fVar37 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xc0));
            local_338 = (uint)(fVar36 * fVar37 + fVar35);
            if (uStack_33c < 4) {
              uStack_33c = 3;
            }
            if (local_338 < 4) {
              local_338 = 3;
            }
            if (iVar16 < 0) {
              bVar12 = false;
              uVar26 = uVar24;
            }
            else {
              bVar1 = uStack_33c <= *(uint *)(param_1 + 0xb4) >> 4;
              bVar13 = (ulong)(uVar9 - 1) * 0x38 == lVar34;
              bVar12 = bVar13 || bVar1;
              uVar26 = 4;
              if (!bVar13 && !bVar1) {
                uVar26 = uVar24;
              }
            }
            if (iVar16 < 0) {
              uVar26 = uVar24;
            }
            local_31c = 0;
            uStack_318 = 0;
            local_314 = 0;
            local_2f8 = 0;
            local_2f0 = 0;
            uVar31 = 0;
            local_2cc = 0;
            uStack_2c8 = 0;
            if ((*(byte *)(param_1 + 0xb3) >> 4 & 1) == 0) {
              *(undefined4 *)(puVar25 + 1) = 0;
              *puVar25 = 0;
              local_340 = uVar2;
              if ((1 < uVar26) &&
                 (local_314 = CONCAT44(uVar3,local_338), local_31c = uVar2, uStack_318 = uStack_33c,
                 uVar26 != 2)) {
                local_2f8 = CONCAT44(uStack_33c,uVar8) & 0xffffffff00000001 | 8;
                local_2f0 = CONCAT44(uVar3,local_338);
                if ((3 < uVar26) &&
                   (uVar31 = CONCAT44(uStack_33c,uVar8) & 0xffffffff00000001 | 8,
                   local_2cc = local_338, uStack_2c8 = uVar3, uVar26 != 4)) {
                  local_2a0 = 1;
                  uStack_294 = 0;
                  uStack_29c = 0;
                  local_297 = 0;
                  local_2b0 = CONCAT44(uStack_33c,uVar8) & 0xffffffff00000001 | 8;
                  local_2a8 = CONCAT44(uVar3,local_338);
                  if (5 < uVar26) {
                    local_27c = 1;
                    uStack_270 = 0;
                    uStack_278 = 0;
                    local_273 = 0;
                    local_28c = CONCAT44(uStack_33c,uVar8) & 0xffffffff00000001 | 8;
                    local_284 = CONCAT44(uVar3,local_338);
                    local_258 = 1;
                    uStack_24c = 0;
                    uStack_254 = 0;
                    local_24f = 0;
                    local_268 = CONCAT44(uStack_33c,uVar8) & 0xffffffff00000001 | 8;
                    local_260 = CONCAT44(uVar3,local_338);
                  }
                }
              }
            }
            else {
              *(undefined4 *)(puVar25 + 1) = 0;
              *puVar25 = 0;
              local_340 = uVar23;
              if ((1 < uVar26) &&
                 (local_314 = CONCAT44(uVar3,local_338), local_31c = uVar6, uStack_318 = uStack_33c,
                 uVar26 != 2)) {
                local_2f0 = CONCAT44(uVar3,local_338);
                local_2f8 = CONCAT44(uStack_33c,uVar8) & 0xffffffff00000001 | 0x2000008;
                if ((3 < uVar26) &&
                   (uVar31 = CONCAT44(uStack_33c,uVar8) & 0xffffffff00000001 | 0x1000008,
                   local_2cc = local_338, uStack_2c8 = uVar3, uVar26 != 4)) {
                  local_2a0 = 1;
                  uStack_294 = 0;
                  uStack_29c = 0;
                  local_297 = 0;
                  local_2a8 = CONCAT44(uVar3,local_338);
                  local_2b0 = CONCAT44(uStack_33c,uVar8) & 0xffffffff00000001 | 0x2000008;
                  if (5 < uVar26) {
                    local_27c = 1;
                    uStack_270 = 0;
                    uStack_278 = 0;
                    local_273 = 0;
                    local_28c = CONCAT44(uStack_33c,uVar8) & 0xffffffff00000001 | 0x1000008;
                    local_284 = CONCAT44(uVar3,local_338);
                    local_258 = 1;
                    uStack_24c = 0;
                    uStack_254 = 0;
                    local_24f = 0;
                    local_260 = CONCAT44(uVar3,local_338);
                    local_268 = CONCAT44(uStack_33c,uVar8) & 0xffffffff00000001 | 0x2000008;
                  }
                }
              }
            }
            local_2d4 = uVar31;
            if (bVar12) {
              local_2d4._4_4_ = (int)(uVar31 >> 0x20);
              local_2d4._0_4_ = (undefined4)uVar31;
              local_2cc = local_2cc << 1;
              local_2d4 = CONCAT44(local_2d4._4_4_ << 1,(undefined4)local_2d4);
            }
            uStack_2b8 = 0;
            local_2bb = 0;
            uStack_2c0 = 0;
            local_2c4 = 1;
            uStack_2dc = 0;
            local_2df = 0;
            uStack_2e4 = 0;
            local_2e8 = 1;
            uStack_300 = 0;
            local_303 = 0;
            uStack_308 = 0;
            local_30c = 1;
            uStack_324 = 0;
            local_327 = 0;
            stack0xfffffffffffffcd4 = 0;
            auStack_334[1] = 1;
            auStack_334[0] = uVar3;
            iVar17 = FUN_005a56c0(*(undefined8 *)(*(long *)(param_1 + 0x310) + lVar30 * 8),uVar26,
                                  &local_340,0,0,0);
            if (iVar17 < 0) {
              return iVar17;
            }
            *(int *)(*(long *)(param_1 + 800) + lVar34) = iVar16 + 1;
            *(float *)(*(long *)(param_1 + 800) + lVar34 + 4) = fVar36;
            lVar22 = *(long *)(*(long *)(param_1 + 0x310) + lVar30 * 8);
            if (*(int *)(lVar22 + 0x30) < 1) {
              uVar29 = 0;
            }
            else {
              uVar29 = **(undefined8 **)(lVar22 + 0x38);
            }
            *(undefined8 *)(*(long *)(param_1 + 800) + lVar34 + 0x18) = uVar29;
            lVar22 = *(long *)(*(long *)(param_1 + 0x310) + lVar30 * 8);
            if (*(int *)(lVar22 + 0x30) < 2) {
              uVar29 = 0;
            }
            else {
              uVar29 = *(undefined8 *)(*(long *)(lVar22 + 0x38) + 8);
            }
            *(undefined8 *)(*(long *)(param_1 + 800) + lVar34 + 0x20) = uVar29;
            *(undefined8 *)(*(long *)(param_1 + 800) + lVar34 + 0x30) = 0;
            *(undefined8 *)(*(long *)(param_1 + 800) + lVar34 + 0x28) = 0;
            if (bVar12) {
              lVar22 = *(long *)(*(long *)(param_1 + 0x310) + lVar30 * 8);
              if (*(int *)(lVar22 + 0x30) < 4) {
                uVar29 = 0;
              }
              else {
                uVar29 = *(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x18);
              }
              *(undefined8 *)(*(long *)(param_1 + 800) + lVar34 + 0x28) = uVar29;
            }
            fVar37 = ldexpf(1.0,(int)lVar30);
            *(float *)(*(long *)(param_1 + 800) + lVar34 + 8) = fVar36 * fVar37;
            if (iVar16 < 0) {
              lVar22 = *(long *)(param_1 + 0x2f0);
              if (*(int *)(lVar22 + 0x30) < 3) goto LAB_00554b10;
LAB_00554af0:
              uVar29 = *(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x10);
            }
            else {
              lVar22 = *(long *)(*(long *)(param_1 + 0x310) + lVar30 * 8);
              if (2 < *(int *)(lVar22 + 0x30)) goto LAB_00554af0;
LAB_00554b10:
              uVar29 = 0;
            }
            lVar30 = lVar30 + 1;
            lVar22 = *(long *)(param_1 + 800) + lVar34;
            lVar34 = lVar34 + 0x38;
            iVar15 = iVar15 + -1;
            *(undefined8 *)(lVar22 + 0x10) = uVar29;
          } while (lVar30 < lVar28);
        }
        if (*(long *)(param_1 + 0x328) != 0) {
          uVar9 = *(uint *)(param_1 + 0xbc);
          uVar3 = *(uint *)(param_1 + 0xc0);
          auStack_334[1] = 1;
          local_340 = 0;
          uStack_33c = 0;
          local_338 = 0;
          auStack_334[0] = 0;
          uStack_324 = 0;
          stack0xfffffffffffffcd4 = 0;
          local_327 = 0;
          lVar30 = (long)*(int *)(param_1 + 0xf0) + 2;
          local_314 = 0;
          local_31c = 0;
          uStack_318 = 0;
          local_30c = 1;
          uStack_300 = 0;
          uStack_308 = 0;
          local_303 = 0;
          local_2e8 = 1;
          local_2f8 = 0;
          local_2f0 = 0;
          uStack_2dc = 0;
          uStack_2e4 = 0;
          local_2df = 0;
          local_2cc = 0;
          uStack_2c8 = 0;
          local_2d4 = 0;
          local_2c4 = 1;
          uStack_2b8 = 0;
          uStack_2c0 = 0;
          local_2bb = 0;
          local_2a0 = 1;
          local_2b0 = 0;
          local_2a8 = 0;
          uStack_294 = 0;
          uStack_29c = 0;
          local_297 = 0;
          local_284 = 0;
          local_28c = 0;
          local_27c = 1;
          uStack_270 = 0;
          uStack_278 = 0;
          local_273 = 0;
          local_258 = 1;
          local_268 = 0;
          local_260 = 0;
          uStack_24c = 0;
          uStack_254 = 0;
          local_24f = 0;
          local_23c = 0;
          local_244 = 0;
          local_234 = 1;
          uStack_228 = 0;
          uStack_230 = 0;
          local_22b = 0;
          local_210 = 1;
          local_220 = 0;
          uStack_218 = 0;
          uStack_204 = 0;
          uStack_20c = 0;
          local_207 = 0;
          local_1fc = 0;
          local_1f4 = 0;
          local_1ec = 1;
          uStack_1e0 = 0;
          uStack_1e8 = 0;
          local_1e3 = 0;
          local_1d0 = 0;
          local_1d8 = 0;
          local_1c8 = 1;
          uStack_1bc = 0;
          uStack_1c4 = 0;
          local_1bf = 0;
          local_1b4 = 0;
          local_1ac = 0;
          local_1a4 = 1;
          uStack_198 = 0;
          uStack_1a0 = 0;
          local_19b = 0;
          local_188 = 0;
          local_190 = 0;
          local_180 = 1;
          uStack_174 = 0;
          uStack_17c = 0;
          local_177 = 0;
          local_16c = 0;
          local_164 = 0;
          local_15c = 1;
          uStack_150 = 0;
          uStack_158 = 0;
          local_153 = 0;
          local_140 = 0;
          local_148 = 0;
          local_138 = 1;
          uStack_12c = 0;
          uStack_134 = 0;
          local_12f = 0;
          local_124 = 0;
          local_11c = 0;
          local_114 = 1;
          uStack_108 = 0;
          uStack_110 = 0;
          local_10b = 0;
          local_f8 = 0;
          local_100 = 0;
          local_f0 = 1;
          uStack_e4 = 0;
          uStack_ec = 0;
          local_e7 = 0;
          local_d4 = 0;
          local_dc = 0;
          local_cc = 1;
          uStack_c0 = 0;
          uStack_c8 = 0;
          local_c3 = 0;
          if (-2 < *(int *)(param_1 + 0xf0)) {
            if ((*(byte *)(param_1 + 0xb3) >> 4 & 1) == 0) {
              lVar28 = 0;
              puVar27 = auStack_334;
              do {
                lVar28 = lVar28 + 1;
                puVar27[-3] = uVar2;
                puVar27[-2] = uVar9;
                puVar27[-1] = uVar3;
                *puVar27 = uVar4;
                puVar27[1] = 1;
                *(undefined8 *)((long)puVar27 + 0xd) = 0;
                puVar27[2] = 0;
                puVar27[3] = 0;
                puVar27 = puVar27 + 9;
              } while (lVar28 < lVar30);
            }
            else {
              uVar31 = 0;
              puVar27 = &local_340;
              do {
                uVar33 = uVar31 & 1;
                uVar31 = uVar31 + 1;
                uVar8 = 0x2000008;
                if (uVar33 != 0) {
                  uVar8 = 0x1000008;
                }
                puVar27[2] = uVar3;
                puVar27[3] = uVar4;
                puVar27[4] = 1;
                *(undefined8 *)((long)puVar27 + 0x19) = 0;
                puVar27[5] = 0;
                puVar27[6] = 0;
                *puVar27 = uVar7 | uVar8;
                puVar27[1] = uVar9;
                puVar27 = puVar27 + 9;
              } while ((long)uVar31 < lVar30);
            }
          }
          iVar15 = FUN_005a56c0(*(undefined8 *)(param_1 + 0x328),lVar30,&local_340,0,0,0);
          if (((iVar15 < 0) && (*(int *)PTR_DAT_02713970 != 0)) && (*(int *)PTR_DAT_02713980 != 0))
          {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp(%d) : PPFX ERROR: ",
                         0x4c6);
            uVar29 = FUN_00546ea0(iVar15);
            FUN_00517ae0("CRenderGlare::CreateSystemObjects(): m_pStarGeneration->Initialize() failed (0x%x: %s).\n"
                         ,iVar15,uVar29);
          }
        }
        if (*(long *)(param_1 + 0x340) != 0) {
          uStack_33c = *(undefined4 *)(param_1 + 0xbc);
          local_338 = *(undefined4 *)(param_1 + 0xc0);
          auStack_334[1] = 1;
          uStack_324 = 0;
          stack0xfffffffffffffcd4 = 0;
          local_327 = 0;
          local_340 = uVar2;
          auStack_334[0] = uVar4;
          iVar15 = FUN_005a56c0(*(long *)(param_1 + 0x340),2,&local_340,0,1,0);
          if (((iVar15 < 0) && (*(int *)PTR_DAT_02713970 != 0)) && (*(int *)PTR_DAT_02713980 != 0))
          {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp(%d) : PPFX ERROR: ",
                         0x4df);
            uVar29 = FUN_00546ea0(iVar15);
            FUN_00517ae0("CRenderGlare::CreateSystemObjects(): m_pGhostGeneration->Initialize() failed (0x%x: %s).\n"
                         ,iVar15,uVar29);
          }
        }
        if (*(long *)(param_1 + 0x390) != 0) {
          uStack_33c = 1;
          local_338 = 1;
          auStack_334[0] = 10;
          auStack_334[1] = 1;
          uStack_324 = 0;
          stack0xfffffffffffffcd4 = 0;
          local_327 = 0;
          local_340 = uVar2;
          iVar15 = FUN_0059abd0(*(long *)(param_1 + 0x390),&local_340);
          if (iVar15 < 0) {
            return iVar15;
          }
        }
        lVar30 = *(long *)(param_1 + 0x350);
        if ((lVar30 != 0) && (*(int *)(param_1 + 0xfc) != 0)) {
          uVar14 = *(undefined4 *)(param_1 + 0xbc);
          uVar5 = *(undefined4 *)(param_1 + 0xc0);
          uVar31 = 0;
          while( true ) {
            auStack_334[1] = 1;
            uStack_324 = 0;
            stack0xfffffffffffffcd4 = 0;
            local_327 = 0;
            local_340 = uVar7 | 0x408;
            uStack_33c = uVar14;
            local_338 = uVar5;
            auStack_334[0] = uVar4;
            iVar15 = FUN_005a56c0(*(undefined8 *)(lVar30 + uVar31 * 8),2,&local_340,0,1,0);
            if ((iVar15 < 0) && (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713980 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp(%d) : PPFX ERROR: ",
                           0x504);
              uVar29 = FUN_00546ea0(iVar15);
              FUN_00517ae0("CRenderGlare::CreateSystemObjects(): m_ppAfterimageGeneration[%d]->Initialize() failed (0x%x: %s).\n"
                           ,uVar31 & 0xffffffff,iVar15,uVar29);
            }
            uVar31 = uVar31 + 1;
            if (*(uint *)(param_1 + 0xfc) <= uVar31) break;
            lVar30 = *(long *)(param_1 + 0x350);
          }
        }
        if ((*(long *)(param_1 + 0x3c0) == 0) && (*(long *)(param_1 + 0x3d0) == 0)) {
LAB_005550d4:
          *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0xe4);
          *(undefined8 *)(param_1 + 0x148) = 0x4180000000000000;
          *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_1 + 0xec);
          *(undefined4 *)(param_1 + 0x150) = 0x3f800000;
          *(undefined8 *)(param_1 + 0x1ec) = 0x3f8000003f800000;
          *(undefined8 *)(param_1 + 0x404) = 0x3a83126f3f800000;
          *(undefined2 *)(param_1 + 0x410) = 1;
          *(undefined8 *)(param_1 + 0x1e4) = 0x3f0000003f800000;
          *(undefined8 *)(param_1 + 0x3fc) = 0x3c23d70a3f800000;
          if (*(long *)(param_1 + 0x3b8) == 0) {
            *(undefined4 *)(param_1 + 0x418) = 0;
            iVar15 = *(int *)(param_1 + 0x10c);
          }
          else {
            *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(param_1 + 200);
            iVar15 = *(int *)(param_1 + 0x10c);
          }
          if ((-1 < iVar15) && (*(undefined4 *)(param_1 + 500) = 0, iVar15 != 0)) {
            lVar30 = 0;
            lVar28 = 0x30;
            do {
              lVar34 = *(long *)(param_1 + 0x1f8) + lVar28;
              lVar30 = lVar30 + 1;
              *(undefined8 *)(lVar34 + -0x30) = 0x3f8000003f800000;
              *(undefined8 *)(lVar34 + -0x28) = 0x3f8000003f800000;
              *(undefined4 *)(*(long *)(param_1 + 0x1f8) + lVar28 + -0x14) = 0x3f800000;
              *(undefined4 *)(*(long *)(param_1 + 0x1f8) + lVar28 + -0x20) = 0x3e800000;
              *(undefined4 *)(*(long *)(param_1 + 0x1f8) + lVar28 + 0x2c) = 0x3f7fbe77;
              *(undefined4 *)(*(long *)(param_1 + 0x1f8) + lVar28 + -0x10) = 0x3f800000;
              *(undefined4 *)(*(long *)(param_1 + 0x1f8) + lVar28 + -0x1c) = 0x3f800000;
              *(undefined4 *)(*(long *)(param_1 + 0x1f8) + lVar28 + -0x18) = 0x3f800000;
              *(undefined4 *)(*(long *)(param_1 + 0x1f8) + lVar28 + -0xc) = 0x3ecccccd;
              *(undefined4 *)(*(long *)(param_1 + 0x1f8) + lVar28) = 0x3e860a92;
              *(undefined4 *)(*(long *)(param_1 + 0x1f8) + lVar28 + -8) = 0x3ecccccd;
              *(undefined4 *)(*(long *)(param_1 + 0x1f8) + lVar28 + -4) = 0x3f800000;
              lVar34 = *(long *)(param_1 + 0x1f8) + lVar28;
              *(undefined8 *)(lVar34 + 4) = 0x3f8000003f800000;
              *(undefined8 *)(lVar34 + 0xc) = 0x3f8000003f800000;
              lVar34 = *(long *)(param_1 + 0x1f8) + lVar28;
              lVar28 = lVar28 + 0x60;
              *(undefined8 *)(lVar34 + 0x14) = 0x3f0000003f000000;
            } while (lVar30 < *(int *)(param_1 + 0x10c));
          }
          *(undefined8 *)(param_1 + 0x3dc) = 0x4500000042800000;
          *(undefined8 *)(param_1 + 0x3e4) = 0x4280000043000000;
          *(undefined8 *)(param_1 + 0x3ec) = 0x3f8000003f800000;
          *(undefined8 *)(param_1 + 0x3f4) = 0x3f8000003f800000;
          *(undefined1 *)(param_1 + 0x180) = 1;
          *(undefined8 *)(param_1 + 0x184) = 0x3d4ccccd3f800000;
          *(undefined8 *)(param_1 + 0x19c) = 0;
          *(undefined8 *)(param_1 + 0x1a4) = 0;
          *(undefined8 *)(param_1 + 400) = 0x3f800000;
          *(undefined4 *)(param_1 + 0x198) = 0;
          *(undefined8 *)(param_1 + 0x1c0) = 0x3f800000;
          *(undefined8 *)(param_1 + 0x1c8) = 0x3e4ccccd3f800000;
          *(undefined8 *)(param_1 + 0x1b0) = 0x3f8000003f800000;
          *(undefined8 *)(param_1 + 0x1b8) = 0x3e4ccccd3e4ccccd;
          *(undefined4 *)(param_1 + 0x1d0) = 0x3f000000;
          *(undefined1 *)(param_1 + 0x18c) = 0;
          *(undefined1 *)(param_1 + 0x1ac) = 0;
          *(undefined8 *)(param_1 + 0x1d4) = 0x3f800000;
          *(undefined4 *)(param_1 + 0x270) = 0x3f490fdb;
          *(undefined8 *)(param_1 + 0x280) = 0x40490fdb00000000;
          *(undefined8 *)(param_1 + 0x288) = 0x3dcccccd3f860a92;
          *(undefined1 *)(param_1 + 0x26c) = 0;
          *(undefined8 *)(param_1 + 0x278) = 0x3f800000;
          *(undefined8 *)(param_1 + 0x290) = 0x13e800000;
          *(undefined4 *)(param_1 + 0x298) = 0x3f800000;
          *(undefined4 *)(param_1 + 0x1dc) = 0x3f800000;
          *(undefined4 *)(param_1 + 0x2ec) = 0;
          *(float *)(param_1 + 0x274) = *(float *)(param_1 + 0x124) / *(float *)(param_1 + 0x128);
          return 0;
        }
        uVar14 = *(undefined4 *)(param_1 + 0xbc);
        uVar5 = *(undefined4 *)(param_1 + 0xc0);
        auStack_334[1] = 1;
        uStack_324 = 0;
        stack0xfffffffffffffcd4 = 0;
        local_327 = 0;
        local_340 = uVar2;
        if ((*(uint *)(param_1 + 0xb0) & 0x10000000) != 0) {
          local_340 = uVar7 | 0x1000008;
        }
        uStack_33c = uVar14;
        local_338 = uVar5;
        auStack_334[0] = uVar4;
        iVar16 = FUN_0059abd0(*(long *)(param_1 + 0x3c0),&local_340);
        if (-1 < iVar16) {
          auStack_334[1] = 1;
          uStack_324 = 0;
          stack0xfffffffffffffcd4 = 0;
          local_327 = 0;
          local_340 = uVar7;
          uStack_33c = uVar14;
          local_338 = uVar5;
          auStack_334[0] = uVar4;
          iVar16 = FUN_0059abd0(*(undefined8 *)(param_1 + 0x3d0),&local_340);
          if (-1 < iVar16) {
            if (*(long *)(param_1 + 0x3c8) != 0) {
              auStack_334[1] = 1;
              uStack_324 = 0;
              stack0xfffffffffffffcd4 = 0;
              local_327 = 0;
              local_340 = uVar7;
              uStack_33c = uVar14;
              local_338 = uVar5;
              auStack_334[0] = uVar4;
              iVar15 = FUN_005a56c0(*(long *)(param_1 + 0x3c8),*(undefined4 *)(param_1 + 0x10c),
                                    &local_340,0,1,0);
              if (((iVar15 < 0) && (*(int *)PTR_DAT_02713970 != 0)) &&
                 (*(int *)PTR_DAT_02713980 != 0)) {
                FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp(%d) : PPFX ERROR: "
                             ,0x532);
                uVar29 = FUN_00546ea0(iVar15);
                FUN_00517ae0("CRenderGlare::CreateSystemObjects(): m_pLightShaftGeneration->Initialize() failed (0x%x: %s).\n"
                             ,iVar15,uVar29);
              }
            }
            goto LAB_005550d4;
          }
        }
      }
    }
    return iVar16;
  }
  iVar15 = *(int *)PTR_DAT_027139b0;
  if (iVar15 < 1) {
    plVar32 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar32,0);
    *(long **)PTR_DAT_027139b8 = plVar32;
    *(undefined4 *)puVar11 = 1;
  }
  else {
    plVar32 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar15 + 1;
    if (1 < iVar15 + 1) goto LAB_00553b10;
  }
  if (plVar32 == (long *)0x0) {
    iVar15 = 0;
  }
  else {
    uVar29 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar32 + 0x20))(plVar32);
    FUN_005b9b10(uVar29,plVar32);
    iVar15 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
LAB_00553b10:
  *(int *)puVar11 = iVar15;
  iVar15 = *(int *)(param_1 + 0x308);
  plVar19 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,(long)iVar15 * 8 + 8,
                                 "C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp",700,0);
  plVar32 = plVar19;
  if (plVar19 != (long *)0x0) {
    plVar32 = plVar19 + 1;
    *plVar19 = (long)iVar15;
  }
  *(long **)(param_1 + 0x300) = plVar32;
                    /* WARNING: Subroutine does not return */
  memset(plVar32,0,(long)*(int *)(param_1 + 0x308) << 3);
}


