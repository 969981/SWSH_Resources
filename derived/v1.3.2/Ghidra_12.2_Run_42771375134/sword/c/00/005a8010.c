/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a8010; name: FUN_005a8010
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_005a8010(long param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  undefined4 uVar15;
  long lVar16;
  long lVar17;
  float *pfVar18;
  float *pfVar19;
  uint uVar20;
  long lVar21;
  uint uVar22;
  float *pfVar23;
  int *piVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  long *plVar27;
  long lVar28;
  float fVar29;
  int *piVar30;
  ulong uVar31;
  long lVar32;
  uint uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [8];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  uint local_d0;
  float fStack_cc;
  float local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined5 uStack_bc;
  undefined3 local_b7;
  undefined5 uStack_b4;
  
  if (*(char *)(param_1 + 0x12d) == '\0') {
    uVar20 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x130) = 0xffffffff;
    if (*(int *)(param_1 + 0xd0) == 0) {
      *(int *)(param_1 + 0xd0) = 2;
      uVar20 = 0xffffffff;
      iVar8 = *(int *)(param_1 + 0x11c);
      goto joined_r0x005aa08c;
    }
    if (*(int *)(param_1 + 0x11c) != 0) goto LAB_005a80a4;
LAB_005aa090:
    *(undefined4 *)(param_1 + 0x11c) = 0xa0;
    if (0.0 < *(float *)(param_1 + 0x120)) goto LAB_005a80b0;
LAB_005aa0a4:
    *(undefined4 *)(param_1 + 0x120) = 0x3e000000;
    if (0.0 < *(float *)(param_1 + 0x134)) goto LAB_005a80bc;
LAB_005aa0b8:
    fVar37 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 200));
    fVar35 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xc4));
    *(float *)(param_1 + 0x134) = fVar35 / fVar37;
    fVar35 = *(float *)(param_1 + 0x138);
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = 5;
    *(undefined8 *)(param_1 + 0xcc) = 0x700000006;
    uVar20 = *(uint *)(param_1 + 0x130);
    if (1 < (int)uVar20) {
      uVar20 = 2;
    }
    uVar20 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
    *(uint *)(param_1 + 0x130) = uVar20;
    iVar8 = *(int *)(param_1 + 0x11c);
joined_r0x005aa08c:
    if (iVar8 == 0) goto LAB_005aa090;
LAB_005a80a4:
    if (*(float *)(param_1 + 0x120) <= 0.0) goto LAB_005aa0a4;
LAB_005a80b0:
    if (*(float *)(param_1 + 0x134) <= 0.0) goto LAB_005aa0b8;
LAB_005a80bc:
    fVar35 = *(float *)(param_1 + 0x138);
  }
  if (fVar35 <= 0.0) {
    *(undefined4 *)(param_1 + 0x138) = 0x3f800000;
  }
  piVar30 = (int *)(param_1 + 0xd0);
  iVar8 = *(int *)(param_1 + 0xd4);
  *(undefined8 *)(param_1 + 0x178) = 0x3dcccccd;
  uVar15 = 2;
  if (1 < (int)uVar20 && *(char *)(param_1 + 0x12d) != '\0') {
    uVar15 = 3;
  }
  *(undefined4 *)(param_1 + 0x180) = uVar15;
  if (iVar8 == 0) {
    local_d0 = 10;
    iVar8 = FUN_00542c70(*(undefined8 *)PTR_DAT_02713c38,0x20001,3,&local_d0,1);
    *(int *)(param_1 + 0xd4) = iVar8;
  }
  lVar16 = *(long *)(param_1 + 0x228);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(lVar16 + 0x54);
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(lVar16 + 0x58);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(lVar16 + 0x38);
  *(int *)(param_1 + 0x164) = iVar8;
  *(undefined8 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  FUN_005aa0e0(param_1,*(undefined4 *)(param_1 + 0x118));
  uVar20 = *(uint *)(param_1 + 0xc0) & 1;
  if (*(char *)(param_1 + 0x125) != '\0') {
    fVar37 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x228) + 0x58));
    fVar35 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x228) + 0x54));
    fVar35 = (float)(*(int *)(param_1 + 0xc4) + 1) / fVar35;
    fVar37 = (float)(*(int *)(param_1 + 200) + 1) / fVar37;
    fVar38 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x128));
    if (fVar35 <= fVar37) {
      fVar35 = fVar37;
    }
    fVar35 = logf(fVar35);
    fVar37 = logf(1.0 / fVar38);
    uVar22 = (int)(fVar35 / fVar37) - 1;
    *(uint *)(param_1 + 0x498) = uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU);
  }
  lVar16 = param_1 + 0x10;
  FUN_005528d0(&local_d0,lVar16,"::m_pApertureFilterSharedLevelSourcePool");
  puVar25 = (undefined8 *)PTR_PTR_02713988;
  uVar26 = CONCAT44(uStack_c4,local_c8);
  uVar9 = FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x48,
                       "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x7a1,0);
  FUN_0059f700(uVar9,uVar26);
  *(undefined8 *)(param_1 + 0x4a0) = uVar9;
  FUN_00551380(&local_d0);
  *(undefined1 *)(param_1 + 0x250) = 0;
  if (*(char *)(param_1 + 0x12d) != '\0') {
    *(undefined4 *)(param_1 + 0x3f8) = 3;
    fVar35 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 200));
    fVar35 = DAT_01d4bef8 / fVar35;
    local_f0 = CONCAT44(fVar35 * DAT_01d4c4f8,fVar35 * DAT_01d4bd54);
    local_e8 = CONCAT44((int)((ulong)DAT_01d4dc08 >> 0x20),fVar35 * DAT_01d4c66c);
    local_e0 = CONCAT44(fVar35 * DAT_01d4c4f8,fVar35 * DAT_01d4bd54);
    local_d8 = CONCAT44((int)((ulong)DAT_01d4dc18 >> 0x20),fVar35 * DAT_01d4c66c);
    puVar10 = (undefined8 *)
              FUN_005b9a50(*puVar25,0x28,"C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",
                           0x7d5,0);
    puVar11 = puVar10;
    if (puVar10 != (undefined8 *)0x0) {
      puVar11 = puVar10 + 1;
      *puVar10 = 4;
    }
    iVar8 = *(int *)(param_1 + 0x3f8);
    *(undefined8 **)(param_1 + 0x430) = puVar11;
    plVar12 = (long *)FUN_005b9a50(*puVar25,(long)iVar8 * 8 + 8,
                                   "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x7d6,0);
    plVar27 = plVar12;
    if (plVar12 != (long *)0x0) {
      plVar27 = plVar12 + 1;
      *plVar12 = (long)iVar8;
    }
    iVar8 = *(int *)(param_1 + 0x3f8);
    *(long **)(param_1 + 0x438) = plVar27;
    plVar12 = (long *)FUN_005b9a50(*puVar25,(long)iVar8 * 8 + 8,
                                   "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x7d7,0);
    plVar27 = plVar12;
    if (plVar12 != (long *)0x0) {
      plVar27 = plVar12 + 1;
      *plVar12 = (long)iVar8;
    }
    iVar8 = *(int *)(param_1 + 0x3f8);
    *(long **)(param_1 + 0x440) = plVar27;
    plVar12 = (long *)FUN_005b9a50(*puVar25,(long)iVar8 * 8 + 8,
                                   "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x7d9,0);
    plVar27 = plVar12;
    if (plVar12 != (long *)0x0) {
      plVar27 = plVar12 + 1;
      *plVar12 = (long)iVar8;
    }
    iVar8 = *(int *)(param_1 + 0x3f8);
    *(long **)(param_1 + 0x488) = plVar27;
    plVar12 = (long *)FUN_005b9a50(*puVar25,(long)iVar8 * 8 + 8,
                                   "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x7db,0);
    plVar27 = plVar12;
    if (plVar12 != (long *)0x0) {
      plVar27 = plVar12 + 1;
      *plVar12 = (long)iVar8;
    }
    iVar8 = *(int *)(param_1 + 0x3f8);
    *(long **)(param_1 + 0x448) = plVar27;
    plVar12 = (long *)FUN_005b9a50(*puVar25,(long)iVar8 * 8 + 8,
                                   "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x7dc,0);
    plVar27 = plVar12;
    if (plVar12 != (long *)0x0) {
      plVar27 = plVar12 + 1;
      *plVar12 = (long)iVar8;
    }
    iVar8 = *(int *)(param_1 + 0x3f8);
    *(long **)(param_1 + 0x450) = plVar27;
    plVar12 = (long *)FUN_005b9a50(*puVar25,(long)iVar8 * 8 + 8,
                                   "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x7dd,0);
    plVar27 = plVar12;
    if (plVar12 != (long *)0x0) {
      plVar27 = plVar12 + 1;
      *plVar12 = (long)iVar8;
    }
    iVar8 = *(int *)(param_1 + 0x3f8);
    *(long **)(param_1 + 0x468) = plVar27;
    plVar12 = (long *)FUN_005b9a50(*puVar25,(long)iVar8 * 8 + 8,
                                   "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x7de,0);
    plVar27 = plVar12;
    if (plVar12 != (long *)0x0) {
      plVar27 = plVar12 + 1;
      *plVar12 = (long)iVar8;
    }
    iVar8 = *(int *)(param_1 + 0x3f8);
    *(long **)(param_1 + 0x470) = plVar27;
    *(undefined8 *)(param_1 + 0x460) = 0;
    *(undefined8 *)(param_1 + 0x458) = 0;
    *(undefined8 *)(param_1 + 0x480) = 0;
    *(undefined8 *)(param_1 + 0x478) = 0;
    plVar12 = (long *)FUN_005b9a50(*puVar25,(long)iVar8 * 4 + 8,
                                   "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x7ec,0);
    plVar27 = plVar12;
    if (plVar12 != (long *)0x0) {
      plVar27 = plVar12 + 1;
      *plVar12 = (long)iVar8;
    }
    iVar8 = *(int *)(param_1 + 0x3f8);
    *(long **)(param_1 + 0x400) = plVar27;
    plVar12 = (long *)FUN_005b9a50(*puVar25,(long)iVar8 * 4 + 8,
                                   "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x7ed,0);
    plVar27 = plVar12;
    if (plVar12 != (long *)0x0) {
      plVar27 = plVar12 + 1;
      *plVar12 = (long)iVar8;
    }
    iVar8 = *(int *)(param_1 + 0x3f8);
    *(long **)(param_1 + 0x408) = plVar27;
    plVar12 = (long *)FUN_005b9a50(*puVar25,(long)iVar8 * 8 + 8,
                                   "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x7ee,0);
    plVar27 = plVar12;
    if (plVar12 != (long *)0x0) {
      plVar27 = plVar12 + 1;
      *plVar12 = (long)iVar8;
    }
    iVar8 = *(int *)(param_1 + 0x3f8);
    *(long **)(param_1 + 0x410) = plVar27;
    plVar12 = (long *)FUN_005b9a50(*puVar25,(long)iVar8 * 8 + 8,
                                   "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x7ef,0);
    plVar27 = plVar12;
    if (plVar12 != (long *)0x0) {
      plVar27 = plVar12 + 1;
      *plVar12 = (long)iVar8;
    }
    iVar8 = *(int *)(param_1 + 0x3f8);
    *(long **)(param_1 + 0x418) = plVar27;
    plVar12 = (long *)FUN_005b9a50(*puVar25,(long)iVar8 << 7 | 8,
                                   "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x7f1,0);
    plVar27 = plVar12;
    if (plVar12 != (long *)0x0) {
      plVar27 = plVar12 + 1;
      *plVar12 = (long)iVar8;
    }
    iVar8 = *(int *)(param_1 + 0x3f8);
    *(long **)(param_1 + 0x420) = plVar27;
    plVar12 = (long *)FUN_005b9a50(*puVar25,(long)iVar8 << 7 | 8,
                                   "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x7f2,0);
    plVar27 = plVar12;
    if (plVar12 != (long *)0x0) {
      plVar27 = plVar12 + 1;
      *plVar12 = (long)iVar8;
    }
    *(long **)(param_1 + 0x428) = plVar27;
    fVar37 = DAT_01d4c5a4;
    fVar35 = DAT_01d4bdf0;
    if (0 < *(int *)(param_1 + 0x3f8)) {
      fVar38 = *(float *)(param_1 + 0xc4);
      fVar29 = *(float *)(param_1 + 200);
      lVar21 = 0;
      lVar28 = 0x7c;
      uVar13 = 0;
      do {
        lVar32 = uVar13 * 8;
        *(undefined8 *)(*(long *)(param_1 + 0x430) + lVar32) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x438) + lVar32) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x440) + lVar32) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x448) + lVar32) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x450) + lVar32) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x468) + lVar32) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x470) + lVar32) = 0;
        if (*(long *)(param_1 + 0x488) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x488) + uVar13 * 8) = 0;
        }
        if (lVar28 != 0x7c) {
          fVar38 = (float)(int)((float)(uint)fVar38 * 0.5 + fVar35);
          fVar29 = (float)(int)((float)(uint)fVar29 * 0.5 + fVar35);
        }
        puVar1 = (undefined4 *)(*(long *)(param_1 + 0x420) + lVar28);
        pfVar18 = (float *)(*(long *)(param_1 + 0x428) + lVar28);
        puVar1[-0x1f] = fVar38;
        puVar1[-0x1e] = fVar29;
        pfVar18[-0x1f] = fVar38;
        pfVar18[-0x1e] = fVar29;
        lVar17 = *(long *)(param_1 + 0x228);
        if ((fVar38 == *(float *)(lVar17 + 0x54)) && (fVar29 == *(float *)(lVar17 + 0x58))) {
          *(long *)(*(long *)(param_1 + 0x430) + lVar32) = lVar17;
          lVar17 = *(long *)(*(long *)(param_1 + 0x430) + lVar32);
          *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
        }
        else {
          FUN_005528d0(auStack_110,lVar16,"::m_apScatterSourceTexture[");
          FUN_00552650(auStack_120,uVar13 & 0xffffffff);
          FUN_005516e0(auStack_100,auStack_110,auStack_120);
          FUN_005528d0(&local_d0,auStack_100,&DAT_01cffc78);
          uVar26 = CONCAT44(uStack_c4,local_c8);
          uVar9 = FUN_005b9a50(*puVar25,0x128,"C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp"
                               ,0x81d,0);
          FUN_0059aa70(uVar9,uVar26);
          *(undefined8 *)(*(long *)(param_1 + 0x430) + lVar32) = uVar9;
          FUN_00551380(&local_d0);
          FUN_00551380(auStack_100);
          FUN_00551380(auStack_120);
          FUN_00551380(auStack_110);
          uStack_c4 = *(undefined4 *)(param_1 + 0xd4);
          local_c0 = 1;
          local_d0 = uVar20;
          fStack_cc = fVar38;
          local_c8 = fVar29;
          FUN_0059abd0(*(undefined8 *)(*(long *)(param_1 + 0x430) + lVar32),&local_d0);
          if (uVar13 == *(int *)(param_1 + 0x3f8) - 1) {
            FUN_005528d0(auStack_110,lVar16,"::m_apScatterSourceTexture[");
            FUN_00552650(auStack_120,(int)uVar13 + 1);
            FUN_005516e0(auStack_100,auStack_110,auStack_120);
            FUN_005528d0(&local_d0,auStack_100,&DAT_01cffc78);
            uVar26 = CONCAT44(uStack_c4,local_c8);
            uVar9 = FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x128,
                                 "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x82e,0);
            FUN_0059aa70(uVar9,uVar26);
            *(undefined8 *)(*(long *)(param_1 + 0x430) + lVar32 + 8) = uVar9;
            FUN_00551380(&local_d0);
            FUN_00551380(auStack_100);
            FUN_00551380(auStack_120);
            FUN_00551380(auStack_110);
            puVar25 = (undefined8 *)PTR_PTR_02713988;
            uStack_c4 = *(undefined4 *)(param_1 + 0xd4);
            local_c0 = 1;
            local_d0 = uVar20;
            fStack_cc = (float)(int)((float)(uint)fVar38 * 0.5 + fVar35);
            local_c8 = (float)(int)((float)(uint)fVar29 * 0.5 + fVar35);
            FUN_0059abd0(*(undefined8 *)(*(long *)(param_1 + 0x430) + lVar32 + 8),&local_d0);
          }
          else {
            puVar25 = (undefined8 *)PTR_PTR_02713988;
          }
        }
        FUN_005528d0(auStack_110,lVar16,"::m_apScatterMultiViewportsTexture[");
        FUN_00552650(auStack_120,uVar13 & 0xffffffff);
        FUN_005516e0(auStack_100,auStack_110,auStack_120);
        FUN_005528d0(&local_d0,auStack_100,&DAT_01cffc78);
        uVar26 = CONCAT44(uStack_c4,local_c8);
        uVar9 = FUN_005b9a50(*puVar25,0x128,"C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",
                             0x842,0);
        FUN_0059aa70(uVar9,uVar26);
        *(undefined8 *)(*(long *)(param_1 + 0x438) + lVar32) = uVar9;
        FUN_00551380(&local_d0);
        FUN_00551380(auStack_100);
        FUN_00551380(auStack_120);
        FUN_00551380(auStack_110);
        FUN_005528d0(auStack_110,lVar16,"::m_apScatterDilationBackTexture[");
        FUN_00552650(auStack_120,uVar13 & 0xffffffff);
        FUN_005516e0(auStack_100,auStack_110,auStack_120);
        FUN_005528d0(&local_d0,auStack_100,&DAT_01cffc78);
        uVar26 = CONCAT44(uStack_c4,local_c8);
        uVar9 = FUN_005b9a50(*puVar25,0x128,"C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",
                             0x845,0);
        FUN_0059aa70(uVar9,uVar26);
        *(undefined8 *)(*(long *)(param_1 + 0x448) + lVar32) = uVar9;
        FUN_00551380(&local_d0);
        FUN_00551380(auStack_100);
        FUN_00551380(auStack_120);
        FUN_00551380(auStack_110);
        FUN_005528d0(auStack_110,lVar16,"::m_apScatterDilationFrontTexture[");
        FUN_00552650(auStack_120,uVar13 & 0xffffffff);
        FUN_005516e0(auStack_100,auStack_110,auStack_120);
        FUN_005528d0(&local_d0,auStack_100,&DAT_01cffc78);
        uVar26 = CONCAT44(uStack_c4,local_c8);
        uVar9 = FUN_005b9a50(*puVar25,0x128,"C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",
                             0x847,0);
        FUN_0059aa70(uVar9,uVar26);
        *(undefined8 *)(*(long *)(param_1 + 0x450) + lVar32) = uVar9;
        FUN_00551380(&local_d0);
        FUN_00551380(auStack_100);
        FUN_00551380(auStack_120);
        FUN_00551380(auStack_110);
        FUN_005528d0(auStack_110,lVar16,"::m_apScatterGradiantMaskTexture[");
        FUN_00552650(auStack_120,uVar13 & 0xffffffff);
        FUN_005516e0(auStack_100,auStack_110,auStack_120);
        FUN_005528d0(&local_d0,auStack_100,&DAT_01cffc78);
        uVar26 = CONCAT44(uStack_c4,local_c8);
        uVar9 = FUN_005b9a50(*puVar25,0x128,"C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",
                             0x877,0);
        FUN_0059aa70(uVar9,uVar26);
        *(undefined8 *)(*(long *)(param_1 + 0x488) + lVar32) = uVar9;
        FUN_00551380(&local_d0);
        FUN_00551380(auStack_100);
        FUN_00551380(auStack_120);
        FUN_00551380(auStack_110);
        *(undefined1 *)(param_1 + 0x250) = 0;
        uStack_c4 = *(undefined4 *)(param_1 + 0xd4);
        fVar34 = *(float *)((long)&local_f0 + lVar21 + 4);
        fVar41 = *(float *)((long)&local_e0 + lVar21 + 4);
        if (fVar34 <= fVar41) {
          fVar34 = fVar41;
        }
        fVar34 = fVar34 + 2.0;
        uVar22 = (uint)(float)(uint)fVar38;
        uVar33 = (uint)(fVar34 * (float)(uint)fVar29);
        local_c0 = 1;
        local_d0 = uVar20;
        fStack_cc = (float)uVar22;
        local_c8 = (float)uVar33;
        FUN_0059abd0(*(undefined8 *)(*(long *)(param_1 + 0x438) + lVar32),&local_d0);
        lVar17 = *(long *)(*(long *)(param_1 + 0x440) + lVar32);
        if (lVar17 != 0) {
          uStack_c4 = *(undefined4 *)(param_1 + 0xd4);
          fStack_cc = (float)(uVar22 << 1);
          local_c8 = (float)(uVar33 << 1);
          local_c0 = 1;
          local_d0 = uVar20;
          FUN_0059abd0(lVar17,&local_d0);
        }
        uStack_c4 = *(undefined4 *)(param_1 + 0xd4);
        local_c0 = 1;
        local_d0 = uVar20;
        fStack_cc = fVar38;
        local_c8 = fVar29;
        FUN_0059abd0(*(undefined8 *)(*(long *)(param_1 + 0x448) + lVar32),&local_d0);
        uStack_c4 = *(undefined4 *)(param_1 + 0xd4);
        local_c0 = 1;
        local_d0 = uVar20;
        fStack_cc = fVar38;
        local_c8 = fVar29;
        FUN_0059abd0(*(undefined8 *)(*(long *)(param_1 + 0x450) + lVar32),&local_d0);
        lVar32 = *(long *)(*(long *)(param_1 + 0x468) + lVar32);
        if (lVar32 != 0) {
          fStack_cc = (float)((int)fVar38 << 1);
          if (*(uint *)(param_1 + 0x158) <= (uint)((int)fVar38 << 1)) {
            fStack_cc = (float)*(uint *)(param_1 + 0x158);
          }
          uStack_c4 = *(undefined4 *)(param_1 + 0xd4);
          local_c8 = (float)((int)fVar29 << 1);
          if (*(uint *)(param_1 + 0x15c) <= (uint)((int)fVar29 << 1)) {
            local_c8 = (float)*(uint *)(param_1 + 0x15c);
          }
          local_c0 = 1;
          local_d0 = uVar20;
          FUN_0059abd0(lVar32,&local_d0);
        }
        lVar32 = *(long *)(*(long *)(param_1 + 0x470) + uVar13 * 8);
        uVar31 = uVar13 + 1;
        if (lVar32 != 0) {
          fStack_cc = (float)((int)fVar38 << 1);
          if (*(uint *)(param_1 + 0x158) <= (uint)((int)fVar38 << 1)) {
            fStack_cc = (float)*(uint *)(param_1 + 0x158);
          }
          uStack_c4 = *(undefined4 *)(param_1 + 0xd4);
          local_c8 = (float)((int)fVar29 << 1);
          if (*(uint *)(param_1 + 0x15c) <= (uint)((int)fVar29 << 1)) {
            local_c8 = (float)*(uint *)(param_1 + 0x15c);
          }
          local_c0 = 1;
          local_d0 = uVar20;
          FUN_0059abd0(lVar32,&local_d0);
        }
        fStack_cc = (float)(int)((float)(uint)fVar38 * 0.5 + fVar35);
        local_c8 = (float)(int)((float)(uint)fVar29 * 0.5 + fVar35);
        uStack_c4 = 0x1c;
        local_c0 = 1;
        uStack_bc = 0;
        local_b7 = 0;
        uStack_b4 = 0;
        local_d0 = uVar20;
        FUN_0059abd0(*(undefined8 *)(*(long *)(param_1 + 0x488) + uVar13 * 8),&local_d0);
        uVar2 = (ulong)(uint)(1.0 / fVar34) << 0x20 | 0x3f800000;
        *(ulong *)(puVar1 + -0x1d) = uVar2;
        lVar32 = (ulong)(uint)((fVar34 + -1.0) / fVar34) << 0x20;
        *(undefined8 *)(puVar1 + -0x1b) = 0;
        *(ulong *)(puVar1 + -0x19) = uVar2;
        *(undefined8 *)(puVar1 + -0x17) = 0;
        *(ulong *)(pfVar18 + -0x1d) = uVar2;
        *(long *)(pfVar18 + -0x1b) = lVar32;
        *(long *)(pfVar18 + -0x17) = lVar32;
        *(ulong *)(pfVar18 + -0x19) = uVar2;
        fVar34 = (float)uVar22;
        fVar36 = (float)uVar33;
        puVar1[-0x13] = (int)((float)puVar1[-0x1d] * fVar34 + fVar37);
        puVar1[-0x12] = (int)((float)puVar1[-0x1c] * fVar36 + fVar37);
        *(undefined8 *)(puVar1 + -0x11) = 0x3f80000000000000;
        puVar1[-0x15] = (int)((float)puVar1[-0x1b] * fVar34);
        puVar1[-0x14] = (int)((float)puVar1[-0x1a] * fVar36);
        pfVar18[-0x11] = 0.0;
        pfVar18[-0x10] = 1.0;
        pfVar18[-0x13] = (float)(int)(pfVar18[-0x1d] * fVar34 + fVar37);
        pfVar18[-0x12] = (float)(int)(pfVar18[-0x1c] * fVar36 + fVar37);
        pfVar18[-0x15] = (float)(int)(pfVar18[-0x1b] * fVar34);
        pfVar18[-0x14] = (float)(int)(pfVar18[-0x1a] * fVar36);
        *(undefined8 *)(puVar1 + -0xb) = 0x3f80000000000000;
        puVar1[-0xd] = (int)((float)puVar1[-0x19] * fVar34 + fVar37);
        puVar1[-0xc] = (int)((float)puVar1[-0x18] * fVar36 + fVar37);
        puVar1[-0xf] = (int)((float)puVar1[-0x17] * fVar34);
        puVar1[-0xe] = (int)((float)puVar1[-0x16] * fVar36);
        pfVar18[-0xb] = 0.0;
        pfVar18[-10] = 1.0;
        pfVar18[-0xd] = (float)(int)(pfVar18[-0x19] * fVar34 + fVar37);
        pfVar18[-0xc] = (float)(int)(pfVar18[-0x18] * fVar36 + fVar37);
        pfVar18[-0xf] = (float)(int)(pfVar18[-0x17] * fVar34);
        pfVar18[-0xe] = (float)(int)(pfVar18[-0x16] * fVar36);
        fVar40 = (float)NEON_ucvtf(puVar1[-0x12]);
        fVar39 = (float)NEON_ucvtf(puVar1[-0x13]);
        puVar1[-9] = fVar39 / fVar34;
        puVar1[-8] = fVar40 / fVar36;
        fVar40 = (float)NEON_ucvtf(puVar1[-0x15]);
        fVar39 = (float)NEON_ucvtf(puVar1[-0x14]);
        *(undefined8 *)(puVar1 + -5) = *(undefined8 *)(puVar1 + -9);
        puVar1[-7] = fVar40 / fVar34;
        puVar1[-6] = fVar39 / fVar36;
        *(undefined8 *)(puVar1 + -3) = *(undefined8 *)(puVar1 + -7);
        fVar40 = (float)NEON_ucvtf(pfVar18[-0x12]);
        fVar39 = (float)NEON_ucvtf(pfVar18[-0x13]);
        pfVar18[-9] = fVar39 / fVar34;
        pfVar18[-8] = fVar40 / fVar36;
        *(undefined8 *)(pfVar18 + -5) = *(undefined8 *)(pfVar18 + -9);
        fVar39 = (float)NEON_ucvtf(pfVar18[-0x15]);
        fVar40 = (float)NEON_ucvtf(pfVar18[-0x14]);
        pfVar18[-7] = fVar39 / fVar34;
        pfVar18[-6] = fVar40 / fVar36;
        *(undefined8 *)(pfVar18 + -3) = *(undefined8 *)(pfVar18 + -7);
        puVar1[-1] = *(undefined4 *)((long)&local_f0 + uVar13 * 4);
        pfVar18[-1] = -*(float *)((long)&local_e0 + lVar21);
        *puVar1 = *(undefined4 *)((long)&local_f0 + lVar21 + 4);
        *pfVar18 = -fVar41;
        lVar28 = lVar28 + 0x80;
        lVar21 = lVar21 + 4;
        uVar13 = uVar31;
        puVar25 = (undefined8 *)PTR_PTR_02713988;
      } while ((long)uVar31 < (long)*(int *)(param_1 + 0x3f8));
    }
  }
  FUN_005a7a90(param_1);
  uVar22 = *(uint *)(param_1 + 0xcc);
  *(undefined1 *)(param_1 + 0x230) = 0;
  if (((uVar22 >> 3 & 1) == 0) &&
     (uVar13 = FUN_0059f860(*(undefined8 *)(param_1 + 0x228),*(undefined4 *)(param_1 + 0xc4),
                            *(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd4),uVar20,0)
     , (uVar13 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x230) = 1;
    FUN_0059fea0(*(undefined8 *)(param_1 + 0x4a0),*(undefined8 *)(param_1 + 0x228),1);
  }
  puVar5 = PTR_DAT_027139b0;
  iVar8 = *(int *)PTR_DAT_027139b0;
  if (iVar8 < 1) {
    plVar27 = (long *)FUN_005b9a50(*puVar25,0x29c08,"../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar27,0);
    *(long **)PTR_DAT_027139b8 = plVar27;
    *(undefined4 *)puVar5 = 1;
    if (plVar27 != (long *)0x0) goto LAB_005a9030;
LAB_005a9ea0:
    *(undefined4 *)puVar5 = 0;
    iVar8 = *piVar30;
  }
  else {
    plVar27 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar8 + 1;
    if (iVar8 + 1 < 2) {
      if (plVar27 == (long *)0x0) goto LAB_005a9ea0;
LAB_005a9030:
      uVar26 = *puVar25;
      (**(code **)(*plVar27 + 0x20))(plVar27);
      FUN_005b9b10(uVar26,plVar27);
      iVar8 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
    *(int *)puVar5 = iVar8;
    iVar8 = *piVar30;
  }
  if (0 < iVar8) {
    uVar13 = 0;
    do {
      lVar28 = *(long *)(param_1 + 0x4a8);
      pfVar23 = (float *)(lVar28 + uVar13 * 0x108);
      fVar35 = *pfVar23;
      pfVar18 = pfVar23 + 2;
      fVar37 = *pfVar18;
      *(undefined1 *)(pfVar23 + 0x10) = 0;
      pfVar19 = pfVar23 + 1;
      FUN_0059fcc0(*(undefined8 *)(param_1 + 0x4a0),pfVar23 + 0xe,fVar35,*pfVar19,
                   *(undefined4 *)(param_1 + 0xd4),(uVar22 & 8) == 0,uVar20,0);
      fVar38 = pfVar23[0x18];
      if (fVar38 != 0.0) {
        plVar14 = (long *)FUN_005b9a50(*puVar25,(long)(int)fVar38 * 8 + 8,
                                       "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x9e3,
                                       0);
        plVar12 = plVar14;
        if (plVar14 != (long *)0x0) {
          plVar12 = plVar14 + 1;
          *plVar14 = (long)(int)fVar38;
        }
        *(long **)(lVar28 + uVar13 * 0x108 + 0x68) = plVar12;
        FUN_0059f8a0(plVar27[0x534b],pfVar23[0x18],plVar12,*pfVar23,*pfVar19,
                     *(undefined4 *)(param_1 + 0xd4),1,uVar20,1);
      }
      piVar24 = (int *)(lVar28 + uVar13 * 0x108 + 0x70);
      iVar8 = *piVar24;
      if (iVar8 != 0) {
        plVar14 = (long *)FUN_005b9a50(*puVar25,(long)iVar8 * 8 + 8,
                                       "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x9f1,
                                       0);
        plVar12 = plVar14;
        if (plVar14 != (long *)0x0) {
          plVar12 = plVar14 + 1;
          *plVar14 = (long)iVar8;
        }
        lVar21 = lVar28 + uVar13 * 0x108;
        *(long **)(lVar21 + 0x78) = plVar12;
        FUN_0059f8a0(plVar27[0x534b],*piVar24,plVar12,*pfVar18,*(undefined4 *)(lVar21 + 0xc),
                     *(undefined4 *)(param_1 + 0x164),1,uVar20,1);
      }
      if (*(char *)(param_1 + 0x124) == '\0') {
        FUN_005528d0(auStack_100,lVar16,"::m_pDOFLevelParam[");
        FUN_00552650(auStack_110,uVar13 & 0xffffffff);
        FUN_005516e0(&local_d0,auStack_100,auStack_110);
        FUN_005528d0(&local_f0,&local_d0,"].m_pResult");
        FUN_00551380(&local_d0);
        FUN_00551380(auStack_110);
        FUN_00551380(auStack_100);
        uVar26 = local_e8;
        uVar9 = FUN_005b9a50(*puVar25,0x128,"C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",
                             0xa03,0);
        FUN_0059aa70(uVar9,uVar26);
        lVar21 = lVar28 + uVar13 * 0x108;
        *(undefined8 *)(lVar21 + 0xa0) = uVar9;
        local_c8 = *(float *)(lVar21 + 0xc);
        uStack_c4 = *(undefined4 *)(param_1 + 0x164);
        fStack_cc = *pfVar18;
        local_c0 = 1;
        uStack_b4 = 0;
        uStack_bc = 0;
        local_b7 = 0;
        local_d0 = uVar20;
        FUN_0059abd0(uVar9,&local_d0);
        FUN_00551380(&local_f0);
        bVar3 = *(byte *)(param_1 + 0xcc);
      }
      else {
        FUN_005528d0(auStack_100,lVar16,"::m_pDOFLevelParam[");
        FUN_00552650(auStack_110,uVar13 & 0xffffffff);
        FUN_005516e0(&local_d0,auStack_100,auStack_110);
        FUN_005528d0(&local_f0,&local_d0,"].m_pResultSmall");
        FUN_00551380(&local_d0);
        FUN_00551380(auStack_110);
        FUN_00551380(auStack_100);
        uVar26 = local_e8;
        uVar9 = FUN_005b9a50(*puVar25,0x128,"C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",
                             0xa12,0);
        FUN_0059aa70(uVar9,uVar26);
        puVar25 = (undefined8 *)(lVar28 + uVar13 * 0x108 + 0x80);
        *puVar25 = uVar9;
        fStack_cc = *pfVar23;
        local_c8 = *pfVar19;
        uStack_c4 = *(undefined4 *)(param_1 + 0x164);
        local_c0 = 1;
        uStack_b4 = 0;
        uStack_bc = 0;
        local_b7 = 0;
        local_d0 = uVar20;
        FUN_0059abd0(uVar9,&local_d0);
        if (fVar35 != fVar37) {
          FUN_005528d0(auStack_110,lVar16,"::m_pDOFLevelParam[");
          FUN_00552650(auStack_120,uVar13 & 0xffffffff);
          FUN_005516e0(auStack_100,auStack_110,auStack_120);
          FUN_005528d0(&local_d0,auStack_100,"].m_pResultLarge");
          FUN_00551670(&local_f0,&local_d0);
          FUN_00551380(&local_d0);
          FUN_00551380(auStack_100);
          FUN_00551380(auStack_120);
          FUN_00551380(auStack_110);
          uVar26 = local_e8;
          uVar9 = FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x128,
                               "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0xa1d,0);
          FUN_0059aa70(uVar9,uVar26);
          lVar21 = lVar28 + uVar13 * 0x108;
          puVar25 = (undefined8 *)(lVar21 + 0x88);
          *puVar25 = uVar9;
          fStack_cc = *pfVar18;
          local_c8 = *(float *)(lVar21 + 0xc);
          uStack_c4 = *(undefined4 *)(param_1 + 0x164);
          local_c0 = 1;
          uStack_b4 = 0;
          uStack_bc = 0;
          local_b7 = 0;
          local_d0 = uVar20;
          FUN_0059abd0(uVar9,&local_d0);
        }
        *(undefined8 *)(lVar28 + uVar13 * 0x108 + 0xa0) = *puVar25;
        FUN_00551380(&local_f0);
        bVar3 = *(byte *)(param_1 + 0xcc);
      }
      if ((bVar3 >> 2 & 1) != 0) {
        if (0 < *(int *)(param_1 + 0x180)) {
          uVar31 = 0;
          do {
            FUN_005528d0(auStack_120,lVar16,"::m_pDOFLevelParam[");
            FUN_00552650(auStack_130,uVar13);
            FUN_005516e0(auStack_110,auStack_120,auStack_130);
            FUN_005528d0(auStack_100,auStack_110,"].m_apSourceMaskedBackground[");
            FUN_00552650(auStack_140,uVar31 & 0xffffffff);
            FUN_005516e0(&local_d0,auStack_100,auStack_140);
            FUN_005528d0(&local_f0,&local_d0,&DAT_01cffc78);
            FUN_00551380(&local_d0);
            FUN_00551380(auStack_140);
            FUN_00551380(auStack_100);
            FUN_00551380(auStack_110);
            FUN_00551380(auStack_130);
            FUN_00551380(auStack_120);
            uVar26 = local_e8;
            uVar9 = FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x128,
                                 "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0xa36,0);
            FUN_0059aa70(uVar9,uVar26);
            *(undefined8 *)(lVar28 + uVar13 * 0x108 + 0x48 + uVar31 * 8) = uVar9;
            fStack_cc = *pfVar23;
            local_c8 = *pfVar19;
            uStack_c4 = *(undefined4 *)(param_1 + 0xd4);
            local_c0 = 1;
            uStack_b4 = 0;
            uStack_bc = 0;
            local_b7 = 0;
            local_d0 = uVar20;
            FUN_0059abd0(uVar9,&local_d0);
            FUN_00551380(&local_f0);
            uVar31 = uVar31 + 1;
          } while ((long)uVar31 < (long)*(int *)(param_1 + 0x180));
          if (*(int *)(param_1 + 0x180) == 2) {
            lVar21 = lVar28 + uVar13 * 0x108;
            *(undefined8 *)(lVar21 + 0x58) = *(undefined8 *)(lVar21 + 0x50);
          }
        }
        puVar5 = PTR_PTR_02713988;
        if (*pfVar18 == *pfVar23) {
          bVar7 = *(float *)(lVar28 + uVar13 * 0x108 + 0xc) == *pfVar19;
        }
        else {
          bVar7 = false;
        }
        bVar7 = (bool)(bVar7 & *(int *)(param_1 + 0x164) == *(int *)(param_1 + 0xd4));
        if (*(char *)(param_1 + 0x12d) != '\0') {
          bVar7 = (bool)(bVar7 & *(int *)(param_1 + 0x130) < 2);
        }
        if (*(char *)(param_1 + 0x124) == '\0') {
          if (bVar7) {
            lVar21 = lVar28 + uVar13 * 0x108;
            lVar32 = *(long *)(lVar21 + 0x48);
            *(long *)(lVar21 + 0xa8) = lVar32;
            *(int *)(lVar32 + 8) = *(int *)(lVar32 + 8) + 1;
            cVar4 = *(char *)(param_1 + 0x12d);
          }
          else {
            FUN_005528d0(auStack_100,lVar16,"::m_pDOFLevelParam[");
            FUN_00552650(auStack_110,uVar13 & 0xffffffff);
            FUN_005516e0(&local_d0,auStack_100,auStack_110);
            FUN_005528d0(&local_f0,&local_d0,"].m_pResultMaskedBackground");
            FUN_00551380(&local_d0);
            FUN_00551380(auStack_110);
            FUN_00551380(auStack_100);
            uVar26 = local_e8;
            uVar9 = FUN_005b9a50(*(undefined8 *)puVar5,0x128,
                                 "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0xa6c,0);
            FUN_0059aa70(uVar9,uVar26);
            lVar21 = lVar28 + uVar13 * 0x108;
            *(undefined8 *)(lVar21 + 0xa8) = uVar9;
            local_c8 = *(float *)(lVar21 + 0xc);
            uStack_c4 = *(undefined4 *)(param_1 + 0x164);
            fStack_cc = *pfVar18;
            local_c0 = 1;
            uStack_b4 = 0;
            uStack_bc = 0;
            local_b7 = 0;
            local_d0 = uVar20;
            FUN_0059abd0(uVar9,&local_d0);
            FUN_00551380(&local_f0);
            cVar4 = *(char *)(param_1 + 0x12d);
          }
        }
        else if (bVar7) {
          lVar21 = lVar28 + uVar13 * 0x108;
          lVar32 = *(long *)(lVar21 + 0x48);
          *(long *)(lVar21 + 0x90) = lVar32;
          *(int *)(lVar32 + 8) = *(int *)(lVar32 + 8) + 1;
          *(undefined8 *)(lVar21 + 0xa8) = *(undefined8 *)(lVar21 + 0x90);
          cVar4 = *(char *)(param_1 + 0x12d);
        }
        else {
          FUN_005528d0(auStack_100,lVar16,"::m_pDOFLevelParam[");
          FUN_00552650(auStack_110,uVar13 & 0xffffffff);
          FUN_005516e0(&local_d0,auStack_100,auStack_110);
          FUN_005528d0(&local_f0,&local_d0,"].m_pResultMaskedBackgroundSmall");
          FUN_00551380(&local_d0);
          FUN_00551380(auStack_110);
          FUN_00551380(auStack_100);
          uVar26 = local_e8;
          uVar9 = FUN_005b9a50(*(undefined8 *)puVar5,0x128,
                               "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0xa8a,0);
          FUN_0059aa70(uVar9,uVar26);
          puVar25 = (undefined8 *)(lVar28 + uVar13 * 0x108 + 0x90);
          *puVar25 = uVar9;
          fStack_cc = *pfVar23;
          local_c8 = *pfVar19;
          uStack_c4 = *(undefined4 *)(param_1 + 0x164);
          local_c0 = 1;
          uStack_b4 = 0;
          uStack_bc = 0;
          local_b7 = 0;
          local_d0 = uVar20;
          FUN_0059abd0(uVar9,&local_d0);
          FUN_00551380(&local_f0);
          if (fVar35 == fVar37) {
            *(undefined8 *)(lVar28 + uVar13 * 0x108 + 0xa8) = *puVar25;
            cVar4 = *(char *)(param_1 + 0x12d);
          }
          else {
            FUN_005528d0(auStack_100,lVar16,"::m_pDOFLevelParam[");
            FUN_00552650(auStack_110,uVar13 & 0xffffffff);
            FUN_005516e0(&local_d0,auStack_100,auStack_110);
            FUN_005528d0(&local_f0,&local_d0,"].m_pResultMaskedBackgroundLarge");
            FUN_00551380(&local_d0);
            FUN_00551380(auStack_110);
            FUN_00551380(auStack_100);
            uVar26 = local_e8;
            uVar9 = FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x128,
                                 "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0xa97,0);
            FUN_0059aa70(uVar9,uVar26);
            lVar21 = lVar28 + uVar13 * 0x108;
            local_c8 = *(float *)(lVar21 + 0xc);
            *(undefined8 *)(lVar21 + 0x98) = uVar9;
            uStack_c4 = *(undefined4 *)(param_1 + 0x164);
            fStack_cc = *pfVar18;
            local_c0 = 1;
            uStack_b4 = 0;
            uStack_bc = 0;
            local_b7 = 0;
            local_d0 = uVar20;
            FUN_0059abd0(uVar9,&local_d0);
            *(undefined8 *)(lVar21 + 0xa8) = *(undefined8 *)(lVar21 + 0x98);
            FUN_00551380(&local_f0);
            cVar4 = *(char *)(param_1 + 0x12d);
          }
        }
        if (((cVar4 != '\0') && (1 < uVar13)) &&
           (uVar33 = (int)uVar13 + 0x7ffffffe, (uVar33 & 0x7fffffff) < 5)) {
          fVar37 = *(float *)(param_1 + 0x158);
          pfVar19 = (float *)(*(long *)(param_1 + 0x420) +
                             *(long *)(&DAT_020f1d90 + ((long)((ulong)uVar33 << 0x21) >> 0x21) * 8)
                             * 0x80);
          fVar38 = *pfVar19;
          fVar35 = (float)((int)fVar38 << 1);
          if ((uint)fVar37 <= (uint)((int)fVar38 << 1)) {
            fVar35 = fVar37;
          }
          fVar34 = pfVar19[1];
          fVar29 = (float)((int)fVar34 << 1);
          if ((uint)*(float *)(param_1 + 0x15c) <= (uint)fVar29) {
            fVar29 = *(float *)(param_1 + 0x15c);
          }
          if ((uint)*pfVar18 < (uint)fVar38) {
            bVar7 = true;
            if ((uint)*(float *)(param_1 + 0x11c) < (uint)fVar38) goto LAB_005a9ae4;
LAB_005a97a0:
            bVar6 = true;
          }
          else {
            bVar7 = (uint)*(float *)(lVar28 + uVar13 * 0x108 + 0xc) < (uint)fVar34;
            if ((uint)fVar38 <= (uint)*(float *)(param_1 + 0x11c)) goto LAB_005a97a0;
LAB_005a9ae4:
            bVar6 = (float)(uint)fVar38 <= *(float *)(param_1 + 0x120) * (float)(uint)fVar37;
            if (!(bool)(bVar7 | bVar6)) goto LAB_005a9cf0;
          }
          FUN_005528d0(auStack_100,lVar16,"::m_pDOFLevelParam[");
          FUN_00552650(auStack_110,uVar13 & 0xffffffff);
          FUN_005516e0(&local_d0,auStack_100,auStack_110);
          FUN_005528d0(&local_f0,&local_d0,"].m_pResultMergedScatter");
          FUN_00551380(&local_d0);
          FUN_00551380(auStack_110);
          FUN_00551380(auStack_100);
          FUN_005528d0(auStack_110,lVar16,"::m_pDOFLevelParam[");
          FUN_00552650(auStack_120,uVar13 & 0xffffffff);
          FUN_005516e0(&local_d0,auStack_110,auStack_120);
          FUN_005528d0(auStack_100,&local_d0,"].m_pResultMergedScatterBackground");
          FUN_00551380(&local_d0);
          FUN_00551380(auStack_120);
          FUN_00551380(auStack_110);
          uVar26 = local_e8;
          puVar5 = PTR_PTR_02713988;
          uVar9 = FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x128,
                               "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0xad9,0);
          FUN_0059aa70(uVar9,uVar26);
          uVar26 = local_f8;
          lVar28 = lVar28 + uVar13 * 0x108;
          *(undefined8 *)(lVar28 + 0xb0) = uVar9;
          uVar9 = FUN_005b9a50(*(undefined8 *)puVar5,0x128,
                               "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0xada,0);
          FUN_0059aa70(uVar9,uVar26);
          *(undefined8 *)(lVar28 + 0xb8) = uVar9;
          if ((!bVar6) && (!(bool)(bVar7 ^ 1))) {
            fVar35 = *pfVar19;
            fVar29 = pfVar19[1];
          }
          uStack_c4 = *(undefined4 *)(param_1 + 0x164);
          local_c0 = 1;
          local_d0 = uVar20;
          fStack_cc = fVar35;
          local_c8 = fVar29;
          FUN_0059abd0(*(undefined8 *)(lVar28 + 0xb0),&local_d0);
          uStack_c4 = *(undefined4 *)(param_1 + 0x164);
          local_c0 = 1;
          uStack_b4 = 0;
          uStack_bc = 0;
          local_b7 = 0;
          local_d0 = uVar20;
          fStack_cc = fVar35;
          local_c8 = fVar29;
          FUN_0059abd0(*(undefined8 *)(lVar28 + 0xb8),&local_d0);
          FUN_00551380(auStack_100);
          FUN_00551380(&local_f0);
        }
      }
LAB_005a9cf0:
      uVar13 = uVar13 + 1;
      puVar25 = (undefined8 *)PTR_PTR_02713988;
    } while ((long)uVar13 < (long)*piVar30);
  }
  *(undefined1 *)(param_1 + 0x174) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  if (((*(byte *)(param_1 + 0xcc) >> 2 & 1) == 0) || (*(int *)(param_1 + 0x21c) == 0)) {
LAB_005a9dcc:
    lVar16 = *(long *)(param_1 + 0x228);
    *(long *)(param_1 + 0x248) = lVar16;
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
  }
  else {
    FUN_005528d0(&local_d0,lVar16,"::m_pApertureFrameBuffer");
    uVar26 = CONCAT44(uStack_c4,local_c8);
    uVar9 = FUN_005b9a50(*puVar25,0x128,"C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0xb06
                         ,0);
    FUN_0059aa70(uVar9,uVar26);
    *(undefined8 *)(param_1 + 0x248) = uVar9;
    FUN_00551380(&local_d0);
    uStack_c4 = *(undefined4 *)(param_1 + 0xd4);
    fStack_cc = (float)*(undefined8 *)(param_1 + 0xc4);
    local_c8 = (float)((ulong)*(undefined8 *)(param_1 + 0xc4) >> 0x20);
    local_c0 = 1;
    uStack_b4 = 0;
    uStack_bc = 0;
    local_b7 = 0;
    local_d0 = uVar20;
    FUN_0059abd0(*(undefined8 *)(param_1 + 0x248),&local_d0);
    if (*(long *)(param_1 + 0x248) == 0) goto LAB_005a9dcc;
  }
  *(undefined8 *)(param_1 + 0x490) = 0;
  puVar5 = PTR_DAT_027139b0;
  if (*(int *)(param_1 + 0x498) == 0) {
    *(undefined4 *)(param_1 + 0x1bc) = 0xff7fffff;
    *(undefined4 *)(param_1 + 0x1dc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0xcc);
    if ((*(char *)(param_1 + 0x124) != '\0') && (0 < *piVar30)) {
      lVar28 = 0;
      lVar16 = 0;
      do {
        lVar21 = *(long *)(param_1 + 0x4a8) + lVar28;
        if (*(long *)(lVar21 + 0x88) != 0) {
          *(long *)(lVar21 + 0xa0) = *(long *)(lVar21 + 0x88);
        }
        if (*(long *)(lVar21 + 0x98) != 0) {
          *(long *)(lVar21 + 0xa8) = *(long *)(lVar21 + 0x98);
        }
        lVar16 = lVar16 + 1;
        lVar28 = lVar28 + 0x108;
      } while (lVar16 < *piVar30);
    }
    return 0;
  }
  iVar8 = *(int *)PTR_DAT_027139b0;
  if (iVar8 < 1) {
    plVar27 = (long *)FUN_005b9a50(*puVar25,0x29c08,"../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar27,0);
    *(long **)PTR_DAT_027139b8 = plVar27;
    *(undefined4 *)puVar5 = 1;
  }
  else {
    plVar27 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar8 + 1;
    if (1 < iVar8 + 1) goto LAB_005a9f00;
  }
  if (plVar27 == (long *)0x0) {
    iVar8 = 0;
  }
  else {
    uVar26 = *puVar25;
    (**(code **)(*plVar27 + 0x20))(plVar27);
    FUN_005b9b10(uVar26,plVar27);
    iVar8 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
LAB_005a9f00:
  *(int *)puVar5 = iVar8;
  iVar8 = *(int *)(param_1 + 0x498);
  plVar12 = (long *)FUN_005b9a50(*puVar25,(long)iVar8 * 8 + 8,
                                 "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0xb1e,0);
  plVar27 = plVar12;
  if (plVar12 != (long *)0x0) {
    plVar27 = plVar12 + 1;
    *plVar12 = (long)iVar8;
  }
  *(long **)(param_1 + 0x490) = plVar27;
                    /* WARNING: Subroutine does not return */
  memset(plVar27,0,(long)*(int *)(param_1 + 0x498) << 3);
}


