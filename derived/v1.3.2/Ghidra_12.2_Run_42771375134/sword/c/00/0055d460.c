/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0055d460; name: FUN_0055d460
 */


undefined8 FUN_0055d460(long param_1)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  bool bVar20;
  long *plVar21;
  long lVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
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
  ulong in_d4;
  undefined4 uVar40;
  ulong in_d5;
  float fVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  long in_stack_fffffffffffffdc0;
  undefined8 *in_stack_fffffffffffffdc8;
  long in_stack_fffffffffffffdd0;
  undefined4 uVar44;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined8 local_e8;
  undefined8 local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c4;
  
  uVar9 = FUN_00557700();
  puVar2 = PTR_DAT_027139b0;
  if ((uVar9 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x420) = *(undefined8 *)(param_1 + 0x318);
    goto LAB_0055e8f4;
  }
  iVar8 = *(int *)PTR_DAT_027139b0;
  if (iVar8 < 1) {
    plVar21 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar21,0);
    *(long **)PTR_DAT_027139b8 = plVar21;
    *(undefined4 *)puVar2 = 1;
    if (plVar21 != (long *)0x0) goto LAB_0055d4dc;
LAB_0055d564:
    iVar8 = 0;
  }
  else {
    plVar21 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar8 + 1;
    if (iVar8 + 1 < 2) {
      if (plVar21 == (long *)0x0) goto LAB_0055d564;
LAB_0055d4dc:
      uVar17 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar21 + 0x20))(plVar21);
      FUN_005b9b10(uVar17,plVar21);
      iVar8 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *(int *)puVar2 = iVar8;
  uVar4 = FUN_00556ca0(param_1);
  uVar5 = FUN_00556fe0(param_1);
  uVar6 = FUN_00557160(param_1);
  uVar7 = FUN_00557420(param_1);
  if (*(int *)(param_1 + 0x200) < 1) {
    bVar20 = true;
    cVar1 = *(char *)(param_1 + 0x368);
joined_r0x0055d6f0:
    if (cVar1 == '\0') goto LAB_0055d6f4;
LAB_0055d5c0:
    lVar13 = *(long *)(param_1 + 0x318);
    if ((bool)(bVar20 & *(long *)(param_1 + 0x360) == 0)) goto LAB_0055d5dc;
LAB_0055d708:
    uVar23 = *(undefined4 *)(lVar13 + 0x54);
    uVar42 = *(undefined4 *)(lVar13 + 0x58);
    fVar32 = *(float *)(lVar13 + 0x88);
    fVar39 = *(float *)(lVar13 + 0x8c);
    fVar30 = *(float *)(lVar13 + 0x90);
    fVar31 = *(float *)(lVar13 + 0x94);
    lVar13 = *(long *)(param_1 + 0x398);
    uVar24 = *(undefined4 *)(lVar13 + 0x54);
    uVar25 = *(undefined4 *)(lVar13 + 0x58);
    FUN_0059d300(lVar13,0,0,1,0,0);
    FUN_0059d000(0,0);
    bVar20 = false;
    switch(*(undefined4 *)(param_1 + 0xd4)) {
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x57:
    case 0x58:
    case 0x5b:
    case 0x5d:
      if (*(char *)(param_1 + 0x411) != '\0') {
        FUN_00540e00(*(undefined8 *)(param_1 + 0x20),0);
      }
      bVar20 = true;
    }
    local_1a8 = 0x3f8000003f800000;
    local_1a0 = 0x3f8000003f800000;
    local_198 = 0x3f8000003f800000;
    local_190 = 0x3f8000003f800000;
    local_188 = 0x3f8000003f800000;
    local_180 = 0x3f8000003f800000;
    local_178 = 0x3f8000003f800000;
    local_170 = 0x3f8000003f800000;
    local_168 = 0x3f8000003f800000;
    uStack_160 = 0x3f8000003f800000;
    local_158 = 0x3f8000003f800000;
    uStack_150 = 0x3f8000003f800000;
    local_148 = 0x3f8000003f800000;
    uStack_140 = 0x3f8000003f800000;
    local_138 = 0x3f8000003f800000;
    uStack_130 = 0x3f8000003f800000;
    lVar18 = *(long *)(param_1 + 0x170);
    FUN_00511040(&local_128,0);
    FUN_00511040(&local_e8,0);
    if ((float)local_128 == (float)local_e8) {
      if (local_128._4_4_ != local_e8._4_4_) goto LAB_0055d8ac;
      if ((float)local_120 != (float)local_e0) goto LAB_0055d8ac;
      if ((((local_120._4_4_ != local_e0._4_4_) || (local_118 != local_d8)) ||
          (local_114 != local_d4)) || ((local_110 != local_d0 || (local_10c != local_cc))))
      goto LAB_0055d8ac;
      fVar26 = *(float *)(lVar18 + 8);
      fVar33 = *(float *)(lVar18 + 0xc);
      fVar37 = *(float *)(lVar18 + 0x10);
      fVar38 = fVar26 * DAT_01d4be14 + fVar33 * DAT_01d4be80 + fVar37 * DAT_01d4c3f8;
    }
    else {
LAB_0055d8ac:
      FUN_00511bb0(&local_e8,&local_128,&local_120,&local_118,&local_110);
      fVar26 = *(float *)(lVar18 + 8);
      fVar33 = *(float *)(lVar18 + 0xc);
      fVar38 = local_e8._4_4_ * *(float *)(lVar18 + 8) + local_d4 * *(float *)(lVar18 + 0xc) +
               local_c4 * *(float *)(lVar18 + 0x10);
      fVar37 = *(float *)(lVar18 + 0x10);
    }
    fVar38 = 1.0 / fVar38;
    local_128 = *(undefined8 *)(param_1 + 0x318);
    fVar33 = fVar38 * fVar33;
    fVar26 = fVar26 * fVar38;
    lVar19 = *(long *)(param_1 + 0x170);
    fVar41 = fVar38 * *(float *)(lVar18 + 0x14);
    fVar27 = *(float *)(lVar19 + 0x18);
    fVar34 = *(float *)(lVar19 + 0x1c);
    fVar38 = fVar38 * fVar37;
    fVar37 = *(float *)(lVar19 + 0x20);
    fVar35 = *(float *)(lVar19 + 0x24);
    FUN_00511040(&local_1c8,0);
    FUN_00511040(&local_e8,0);
    if (((local_1c8 == (float)local_e8) && (local_1c4 == local_e8._4_4_)) &&
       ((local_1c0 == (float)local_e0 &&
        ((((local_1bc == local_e0._4_4_ && (local_1b8 == local_d8)) && (local_1b4 == local_d4)) &&
         ((local_1b0 == local_d0 && (local_1ac == local_cc)))))))) {
      fVar28 = *(float *)(lVar19 + 0x18) * DAT_01d4be14 + *(float *)(lVar19 + 0x1c) * DAT_01d4be80;
      fVar36 = *(float *)(lVar19 + 0x20) * DAT_01d4c3f8;
    }
    else {
      FUN_00511bb0(&local_e8,&local_1c8,&local_1c0,&local_1b8,&local_1b0);
      fVar28 = local_e8._4_4_ * *(float *)(lVar19 + 0x18) + local_d4 * *(float *)(lVar19 + 0x1c);
      fVar36 = local_c4 * *(float *)(lVar19 + 0x20);
    }
    fVar28 = 1.0 / (fVar28 + fVar36);
    local_1a8 = CONCAT44(fVar33 * fVar34 * fVar28,fVar26 * fVar27 * fVar28);
    local_1a0 = CONCAT44(fVar41 * fVar35 * fVar28,fVar38 * fVar37 * fVar28);
    uVar9 = FUN_00556ca0(param_1);
    if (((uVar9 & 1) == 0) || (*(char *)(param_1 + 0x428) == '\0')) {
      uVar9 = 1;
      uVar10 = FUN_00556fe0(param_1);
    }
    else {
      local_120 = *(undefined8 *)(param_1 + 0x330);
      lVar18 = *(long *)(param_1 + 0x170);
      fVar37 = *(float *)(lVar18 + 0x4c);
      fVar34 = *(float *)(lVar18 + 0x50);
      fVar27 = *(float *)(lVar18 + 0x54);
      fVar35 = *(float *)(lVar18 + 0x58);
      FUN_00511040(&local_1c8,0);
      FUN_00511040(&local_e8,0);
      if ((((local_1c8 == (float)local_e8) && (local_1c4 == local_e8._4_4_)) &&
          (local_1c0 == (float)local_e0)) &&
         (((local_1bc == local_e0._4_4_ && (local_1b8 == local_d8)) &&
          ((local_1b4 == local_d4 && ((local_1b0 == local_d0 && (local_1ac == local_cc)))))))) {
        fVar28 = *(float *)(lVar18 + 0x4c) * DAT_01d4be14 + *(float *)(lVar18 + 0x50) * DAT_01d4be80
        ;
        fVar36 = *(float *)(lVar18 + 0x54) * DAT_01d4c3f8;
      }
      else {
        FUN_00511bb0(&local_e8,&local_1c8,&local_1c0,&local_1b8,&local_1b0);
        fVar28 = local_e8._4_4_ * *(float *)(lVar18 + 0x4c) + local_d4 * *(float *)(lVar18 + 0x50);
        fVar36 = local_c4 * *(float *)(lVar18 + 0x54);
      }
      fVar28 = 1.0 / (fVar28 + fVar36);
      uVar9 = 2;
      local_198 = CONCAT44(fVar33 * fVar34 * fVar28,fVar26 * fVar37 * fVar28);
      local_190 = CONCAT44(fVar41 * fVar35 * fVar28,fVar38 * fVar27 * fVar28);
      uVar10 = FUN_00556fe0(param_1);
    }
    if ((uVar10 & 1) != 0) {
      (&local_128)[uVar9] = *(undefined8 *)(param_1 + 0x338);
      fVar37 = fVar26 * *(float *)(param_1 + 0x1b8);
      fVar27 = fVar33 * *(float *)(param_1 + 0x1bc);
      fVar35 = fVar41 * *(float *)(param_1 + 0x1c4);
      fVar34 = fVar38 * *(float *)(param_1 + 0x1c0);
      *(float *)(&local_1a8 + uVar9 * 2) = fVar37 + fVar37;
      *(float *)((long)&local_1a8 + (uVar9 * 4 + 1) * 4) = fVar27 + fVar27;
      *(float *)(&local_1a0 + uVar9 * 2) = fVar34 + fVar34;
      *(float *)((long)&local_1a0 + uVar9 * 0x10 + 4) = fVar35 + fVar35;
      uVar9 = (ulong)((int)uVar9 + 1);
    }
    uVar10 = FUN_00557160(param_1);
    if ((uVar10 & 1) != 0) {
      lVar18 = *(long *)(param_1 + 0x340);
      uVar17 = 0;
      if (lVar18 != 0) {
        if (*(int *)(lVar18 + 0x30) < 1) {
          uVar17 = 0;
        }
        else {
          uVar17 = **(undefined8 **)(lVar18 + 0x38);
        }
      }
      (&local_128)[uVar9] = uVar17;
      lVar18 = *(long *)(param_1 + 0x170);
      fVar37 = *(float *)(lVar18 + 0x30);
      fVar34 = *(float *)(lVar18 + 0x34);
      fVar27 = *(float *)(lVar18 + 0x38);
      fVar35 = *(float *)(lVar18 + 0x3c);
      FUN_00511040(&local_1c8,0);
      FUN_00511040(&local_e8,0);
      if (((((local_1c8 == (float)local_e8) && (local_1c4 == local_e8._4_4_)) &&
           (local_1c0 == (float)local_e0)) &&
          ((local_1bc == local_e0._4_4_ && (local_1b8 == local_d8)))) &&
         ((local_1b4 == local_d4 && ((local_1b0 == local_d0 && (local_1ac == local_cc)))))) {
        fVar28 = *(float *)(lVar18 + 0x30) * DAT_01d4be14 + *(float *)(lVar18 + 0x34) * DAT_01d4be80
        ;
        fVar36 = *(float *)(lVar18 + 0x38) * DAT_01d4c3f8;
      }
      else {
        FUN_00511bb0(&local_e8,&local_1c8,&local_1c0,&local_1b8,&local_1b0);
        fVar28 = local_e8._4_4_ * *(float *)(lVar18 + 0x30) + local_d4 * *(float *)(lVar18 + 0x34);
        fVar36 = local_c4 * *(float *)(lVar18 + 0x38);
      }
      fVar28 = 1.0 / (fVar28 + fVar36);
      *(float *)(&local_1a8 + uVar9 * 2) = fVar26 * fVar37 * fVar28;
      *(float *)((long)&local_1a8 + (uVar9 * 4 + 1) * 4) = fVar33 * fVar34 * fVar28;
      *(float *)(&local_1a0 + uVar9 * 2) = fVar38 * fVar27 * fVar28;
      *(float *)((long)&local_1a0 + uVar9 * 0x10 + 4) = fVar41 * fVar35 * fVar28;
      uVar9 = (ulong)((int)uVar9 + 1);
    }
    fVar37 = (float)NEON_ucvtf(uVar23);
    fVar27 = (float)NEON_ucvtf(uVar42);
    uVar10 = FUN_00557420(param_1);
    if ((uVar10 & 1) != 0) {
      uVar17 = 0;
      if (*(long *)(param_1 + 0x350) != 0) {
        lVar18 = *(long *)(*(long *)(param_1 + 0x350) + (ulong)*(uint *)(param_1 + 0x2ec) * 8);
        if (*(int *)(lVar18 + 0x90) < *(int *)(lVar18 + 0x30)) {
          uVar17 = *(undefined8 *)(*(long *)(lVar18 + 0x38) + (long)*(int *)(lVar18 + 0x90) * 8);
        }
        else {
          uVar17 = 0;
        }
      }
      (&local_128)[uVar9] = uVar17;
      lVar18 = *(long *)(param_1 + 0x170);
      fVar34 = *(float *)(lVar18 + 0x6c);
      fVar28 = *(float *)(lVar18 + 0x70);
      fVar35 = *(float *)(lVar18 + 0x74);
      fVar36 = *(float *)(lVar18 + 0x78);
      FUN_00511040(&local_1c8,0);
      FUN_00511040(&local_e8,0);
      if ((((((local_1c8 == (float)local_e8) && (local_1c4 == local_e8._4_4_)) &&
            (local_1c0 == (float)local_e0)) &&
           ((local_1bc == local_e0._4_4_ && (local_1b8 == local_d8)))) && (local_1b4 == local_d4))
         && ((local_1b0 == local_d0 && (local_1ac == local_cc)))) {
        fVar29 = *(float *)(lVar18 + 0x6c) * DAT_01d4be14 + *(float *)(lVar18 + 0x70) * DAT_01d4be80
        ;
        local_c4 = *(float *)(lVar18 + 0x74) * DAT_01d4c3f8;
      }
      else {
        FUN_00511bb0(&local_e8,&local_1c8,&local_1c0,&local_1b8,&local_1b0);
        fVar29 = local_e8._4_4_ * *(float *)(lVar18 + 0x6c) + local_d4 * *(float *)(lVar18 + 0x70);
        local_c4 = local_c4 * *(float *)(lVar18 + 0x74);
      }
      fVar29 = 1.0 / (fVar29 + local_c4);
      *(float *)(&local_1a8 + uVar9 * 2) = fVar26 * fVar34 * fVar29;
      *(float *)((long)&local_1a8 + (uVar9 * 4 + 1) * 4) = fVar33 * fVar28 * fVar29;
      *(float *)(&local_1a0 + uVar9 * 2) = fVar38 * fVar35 * fVar29;
      *(float *)((long)&local_1a0 + uVar9 * 0x10 + 4) = fVar41 * fVar36 * fVar29;
      uVar9 = (ulong)((int)uVar9 + 1);
    }
    if (0 < *(int *)(param_1 + 500)) {
      (&local_128)[uVar9] = *(undefined8 *)(param_1 + 0x3d0);
      uVar9 = (ulong)((int)uVar9 + 1);
    }
    uVar23 = NEON_ucvtf(uVar24);
    fVar30 = fVar32 * fVar37 + fVar30;
    uVar42 = NEON_ucvtf(uVar25);
    fVar31 = fVar39 * fVar27 + fVar31;
    uVar10 = 0;
    do {
      lVar18 = (&local_128)[uVar10];
      do {
        lVar19 = lVar18;
        lVar18 = *(long *)(lVar19 + 0x120);
      } while (lVar18 != 0);
      plVar11 = *(long **)(lVar19 + 0xa8);
      (**(code **)(*plVar11 + 0x88))(plVar11,1);
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
    uVar10 = 0;
    do {
      lVar19 = (&local_128)[uVar10];
      lVar18 = lVar19;
      do {
        lVar22 = lVar18;
        lVar18 = *(long *)(lVar22 + 0x120);
      } while (lVar18 != 0);
      plVar11 = *(long **)(lVar22 + 0xa8);
      uVar24 = (**(code **)(*plVar11 + 0x80))(plVar11);
      *(undefined4 *)((long)&local_e8 + uVar10 * 4) = uVar24;
      if (*(int *)(lVar19 + 0x54) == *(int *)(lVar13 + 0x54)) {
        bVar3 = *(int *)(lVar19 + 0x58) == *(int *)(lVar13 + 0x58);
      }
      else {
        bVar3 = false;
      }
      (**(code **)(*plVar11 + 0x88))(plVar11,bVar3);
      (**(code **)(*plVar11 + 0x90))(plVar11,1);
      uVar24 = (undefined4)((ulong)in_stack_fffffffffffffdc0 >> 0x20);
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
    iVar8 = *(int *)(param_1 + 0x148);
    if (iVar8 != 0) {
      FUN_005706c0(*(undefined4 *)(param_1 + 0x14c),*(undefined4 *)(param_1 + 0x150),plVar21);
    }
    if ((*(char *)(param_1 + 0x368) == '\0') || (*(long *)(param_1 + 0x360) == 0)) {
      in_d5 = 0;
      in_d4 = 0;
      in_stack_fffffffffffffdc0 = CONCAT44(uVar24,0x3f800000);
      iVar8 = FUN_005773a0(0,0,uVar23,uVar42,0,0,fVar30,fVar31,plVar21,uVar9,&local_128,&local_1a8,
                           iVar8,0);
      if ((iVar8 < 0) && ((*(int *)PTR_DAT_02713970 != 0 && (*(int *)PTR_DAT_02713980 != 0)))) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp(%d) : PPFX ERROR: ",0x1842
                    );
        uVar17 = FUN_00546ea0(iVar8);
        pcVar12 = 
        "CRenderGlare::GenerateGlare_Composite(): pTexUtil->DrawRectGPU_MadLumGammaTn() failed (0x%x: %s).\n"
        ;
        goto LAB_0055e294;
      }
    }
    else {
      in_stack_fffffffffffffdc8 = *(undefined8 **)(param_1 + 0x36c);
      in_stack_fffffffffffffdd0 = *(long *)(param_1 + 0x374);
      in_d4 = 0;
      in_d5 = 0;
      in_stack_fffffffffffffdc0 = CONCAT44(uVar24,0x3f800000);
      iVar8 = FUN_00577400(0,0,uVar23,uVar42,0,0,fVar30,fVar31,plVar21,uVar9,&local_128,
                           *(long *)(param_1 + 0x360),&local_1a8,iVar8,0);
      if (((iVar8 < 0) && (*(int *)PTR_DAT_02713970 != 0)) && (*(int *)PTR_DAT_02713980 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp(%d) : PPFX ERROR: ",0x1832
                    );
        uVar17 = FUN_00546ea0(iVar8);
        pcVar12 = 
        "CRenderGlare::GenerateGlare_Composite(): pTexUtil->DrawRectGPU_MadLumGammaWithLensDirtTn() failed (0x%x: %s).\n"
        ;
LAB_0055e294:
        FUN_00517ae0(pcVar12,iVar8,uVar17);
      }
    }
    uVar10 = 0;
    do {
      lVar13 = (&local_128)[uVar10];
      do {
        lVar18 = lVar13;
        lVar13 = *(long *)(lVar18 + 0x120);
      } while (lVar13 != 0);
      plVar11 = *(long **)(lVar18 + 0xa8);
      (**(code **)(*plVar11 + 0x78))(plVar11,*(undefined4 *)((long)&local_e8 + uVar10 * 4));
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
    uVar10 = 0;
    do {
      lVar13 = (&local_128)[uVar10];
      do {
        lVar18 = lVar13;
        lVar13 = *(long *)(lVar18 + 0x120);
      } while (lVar13 != 0);
      plVar11 = *(long **)(lVar18 + 0xa8);
      (**(code **)(*plVar11 + 0x88))(plVar11,0);
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
    if ((bVar20) && (*(char *)(param_1 + 0x411) != '\0')) {
      FUN_00571510(plVar21,0x10,0);
    }
    lVar13 = *(long *)(param_1 + 0x398);
    if (*(char *)(param_1 + 0x29c) == '\0') goto LAB_0055e33c;
LAB_0055d5fc:
    in_stack_fffffffffffffdd0 = plVar21[0x5357];
    fVar32 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xc0));
    lVar18 = *(long *)(param_1 + 0x3a0);
    fVar39 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xbc));
    in_d4 = (ulong)*(uint *)(param_1 + 0x2d8);
    in_stack_fffffffffffffdc0 = param_1 + 0x2c0;
    in_stack_fffffffffffffdc8 =
         (undefined8 *)
         CONCAT71((int7)((ulong)in_stack_fffffffffffffdc8 >> 8),*(undefined1 *)(param_1 + 0x2dc));
    FUN_005820c0(*(undefined4 *)(param_1 + 0x154),fVar39 / fVar32,*(undefined4 *)(param_1 + 0x2d0),
                 *(undefined4 *)(param_1 + 0x2d4),in_d4,plVar21,lVar13,lVar18,
                 *(undefined4 *)(param_1 + 0x2a0),param_1 + 0x2a8,param_1 + 0x2b0,param_1 + 0x2b8,
                 param_1 + 0x2c8,in_stack_fffffffffffffdc0,in_stack_fffffffffffffdc8,
                 in_stack_fffffffffffffdd0,0);
    lVar13 = lVar18;
    if (*(char *)(param_1 + 0x2a4) == '\0') goto LAB_0055e33c;
    lVar19 = **(long **)(*(long *)(param_1 + 0x328) + 0x38);
    if (lVar19 == 0) {
      if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_027139c0 == 0)) goto LAB_0055e33c;
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp(%d) : PPFX WARNING: ",0x18c2
                  );
      FUN_00517ae0("GenerateGlare_Composite(): pGlareResultChromaticAberrationBlur is NULL.\n");
      uVar42 = (undefined4)((ulong)in_stack_fffffffffffffdc0 >> 0x20);
      uVar23 = (undefined4)((ulong)in_stack_fffffffffffffdd0 >> 0x20);
      cVar1 = *(char *)(param_1 + 0x26c);
    }
    else {
      in_stack_fffffffffffffdc8 = &local_e8;
      local_1a8 = 0x3f8000003f800000;
      local_1a0 = 0x3f8000003f800000;
      local_e8 = 0;
      local_e0 = 0;
      in_stack_fffffffffffffdd0 = 0;
      in_stack_fffffffffffffdc0 = CONCAT44((int)((ulong)in_stack_fffffffffffffdc0 >> 0x20),1);
      FUN_0057e050(0,0,0,0x3f800000,plVar21,lVar18,lVar19,0,&local_1a8,0,0,0,
                   in_stack_fffffffffffffdc0,in_stack_fffffffffffffdc8,0,0xffffffff);
      uVar42 = (undefined4)((ulong)in_stack_fffffffffffffdc0 >> 0x20);
      uVar23 = (undefined4)((ulong)in_stack_fffffffffffffdd0 >> 0x20);
      cVar1 = *(char *)(param_1 + 0x26c);
      lVar18 = lVar19;
    }
  }
  else {
    if (*(int *)(param_1 + 0x210) == -1) {
      bVar20 = *(int *)(param_1 + 0x220) < 1;
      cVar1 = *(char *)(param_1 + 0x368);
      goto joined_r0x0055d6f0;
    }
    bVar20 = false;
    if (*(char *)(param_1 + 0x368) != '\0') goto LAB_0055d5c0;
LAB_0055d6f4:
    lVar13 = *(long *)(param_1 + 0x318);
    if (!bVar20) goto LAB_0055d708;
LAB_0055d5dc:
    if ((((uVar4 | uVar5 | uVar6 | uVar7) & 1) != 0) || (0 < *(int *)(param_1 + 500)))
    goto LAB_0055d708;
    if (*(char *)(param_1 + 0x29c) != '\0') goto LAB_0055d5fc;
LAB_0055e33c:
    uVar42 = (undefined4)((ulong)in_stack_fffffffffffffdc0 >> 0x20);
    uVar23 = (undefined4)((ulong)in_stack_fffffffffffffdd0 >> 0x20);
    cVar1 = *(char *)(param_1 + 0x26c);
    lVar18 = lVar13;
  }
  if (cVar1 != '\0') {
    lVar13 = *(long *)(param_1 + 0x3a8);
    in_d4 = (ulong)*(uint *)(param_1 + 0x280);
    in_d5 = (ulong)*(uint *)(param_1 + 0x284);
    in_stack_fffffffffffffdd0 = CONCAT44(uVar23,*(undefined4 *)(param_1 + 0x298));
    in_stack_fffffffffffffdc8 =
         (undefined8 *)((ulong)in_stack_fffffffffffffdc8 & 0xffffffff00000000);
    in_stack_fffffffffffffdc0 = CONCAT44(uVar42,*(undefined4 *)(param_1 + 0x290));
    FUN_00581c70(*(undefined4 *)(param_1 + 0x270),*(undefined4 *)(param_1 + 0x274),
                 *(undefined4 *)(param_1 + 0x278),*(undefined4 *)(param_1 + 0x27c),in_d4,in_d5,
                 *(undefined4 *)(param_1 + 0x288),*(undefined4 *)(param_1 + 0x28c),plVar21,lVar18,
                 lVar13,*(undefined4 *)(param_1 + 0x294),1,0,1,0,in_stack_fffffffffffffdc0,
                 in_stack_fffffffffffffdc8,in_stack_fffffffffffffdd0,0);
    lVar18 = lVar13;
  }
  lVar13 = lVar18;
  if (*(char *)(param_1 + 0xc4) != '\0') {
    lVar13 = *(long *)(param_1 + 0x3b0);
    FUN_0058ee60(*(undefined4 *)(param_1 + 0x164),0x3e800000,plVar21,lVar13,lVar18,0,0);
  }
  lVar18 = lVar13;
  if (0.0 < *(float *)(param_1 + 0x418)) {
    lVar18 = *(long *)(param_1 + 0x3b8);
    local_1a8 = 0x3f8000003f800000;
    local_1a0 = 0x3f8000003f800000;
    in_stack_fffffffffffffdc8 = &local_e8;
    local_e8 = 0;
    local_e0 = 0;
    in_stack_fffffffffffffdc0 = CONCAT44((int)((ulong)in_stack_fffffffffffffdc0 >> 0x20),1);
    in_stack_fffffffffffffdd0 = 0;
    FUN_0057e050(0,0,*(float *)(param_1 + 0x418) * 0.5,0x3f800000,plVar21,lVar13,lVar18,0,&local_1a8
                 ,0,0,0,in_stack_fffffffffffffdc0,in_stack_fffffffffffffdc8,0,0xffffffff);
  }
  if ((0 < *(int *)(param_1 + 0x200)) &&
     ((*(int *)(param_1 + 0x210) != -1 || (0 < *(int *)(param_1 + 0x220))))) {
    FUN_0059d000(0,0);
    fVar32 = DAT_01d4bb38;
    uVar4 = *(uint *)(param_1 + 0x114);
    if (uVar4 != 0) {
      uVar9 = 0;
      do {
        uVar44 = (undefined4)((ulong)in_stack_fffffffffffffdd0 >> 0x20);
        uVar24 = (undefined4)((ulong)in_stack_fffffffffffffdc0 >> 0x20);
        uVar25 = (undefined4)((ulong)in_stack_fffffffffffffdc8 >> 0x20);
        uVar23 = (undefined4)(in_d4 >> 0x20);
        uVar42 = (undefined4)(in_d5 >> 0x20);
        lVar13 = *(long *)(param_1 + 0x208);
        if (*(char *)(lVar13 + uVar9 * 0x34) != '\0') {
          lVar19 = *(long *)(param_1 + 0x390);
          do {
            lVar22 = lVar19;
            lVar19 = *(long *)(lVar22 + 0x120);
          } while (lVar19 != 0);
          lVar19 = *(long *)(lVar22 + 0xa8);
          piVar16 = (int *)(lVar13 + uVar9 * 0x34 + 0x24);
          if (*piVar16 == 2) {
            lVar19 = plVar21[0x5352];
            uVar5 = *(uint *)(param_1 + 0x210);
            if (uVar5 == 0xffffffff) goto LAB_0055e514;
LAB_0055e680:
            lVar22 = *(long *)PTR_DAT_02713c58 + (ulong)uVar5 * 0x1b04;
            local_1cc = *(float *)(param_1 + 0x25c);
            uVar23 = *(undefined4 *)(lVar22 + 0x1b00);
            if (*(int *)(param_1 + 600) != 0) goto LAB_0055e6ac;
LAB_0055e52c:
            if (*(float *)(param_1 + 0x248) <= 0.0) goto LAB_0055e6ac;
            fVar30 = powf(10.0,-(local_1cc + local_1cc + -1.0));
            fVar31 = *(float *)(param_1 + 0x248);
            fVar39 = fVar31;
            if (1.0 < fVar31) {
              fVar39 = 1.0;
            }
            fVar26 = 0.0;
            if (0.0 <= fVar31) {
              fVar26 = fVar39;
            }
            local_1cc = powf(fVar26,fVar30);
            fVar39 = *(float *)(param_1 + 0x250);
            if (fVar39 <= 0.0) goto LAB_0055e57c;
LAB_0055e6bc:
            local_1d0 = (*(float *)(param_1 + 0x268) / fVar39) * 0.5;
            fVar39 = *(float *)(param_1 + 0x254);
          }
          else {
            if (*(int *)(*(long *)(param_1 + 0x2f0) + 0x30) < 3) {
              lVar22 = 0;
            }
            else {
              lVar22 = *(long *)(*(long *)(*(long *)(param_1 + 0x2f0) + 0x38) + 0x10);
            }
            FUN_0059d300(*(long *)(param_1 + 0x390),0,0,1,0,0);
            lVar15 = lVar22;
            do {
              lVar14 = lVar15;
              lVar15 = *(long *)(lVar14 + 0x120);
            } while (lVar15 != 0);
            uVar40 = NEON_ucvtf(*(undefined4 *)(lVar22 + 0x58));
            lVar15 = lVar13 + uVar9 * 0x34;
            uVar43 = NEON_ucvtf(*(undefined4 *)(lVar22 + 0x54));
            iVar8 = FUN_00589d00(0,0,0x3f800000,0x3f800000,CONCAT44(uVar23,uVar43),
                                 CONCAT44(uVar42,uVar40),*(undefined4 *)(lVar15 + 0x28),
                                 *(undefined4 *)(lVar15 + 0x2c),plVar21,
                                 *(undefined8 *)(lVar14 + 0xa8),lVar15 + 0x14,*piVar16,0,0);
            if (((iVar8 < 0) && (*(int *)PTR_DAT_02713970 != 0)) && (*(int *)PTR_DAT_02713980 != 0))
            {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp(%d) : PPFX ERROR: ",
                           0x1925);
              uVar17 = FUN_00546ea0(iVar8);
              FUN_00517ae0("CRenderGlare::GenerateGlare_Composite(): pTexUtil->DrawLightGhostLuminance() failed (0x%x: %s).\n"
                           ,iVar8,uVar17);
            }
            uVar5 = *(uint *)(param_1 + 0x210);
            if (uVar5 != 0xffffffff) goto LAB_0055e680;
LAB_0055e514:
            lVar22 = *(long *)(param_1 + 0x218);
            local_1cc = *(float *)(param_1 + 0x25c);
            uVar23 = *(undefined4 *)(param_1 + 0x220);
            if (*(int *)(param_1 + 600) == 0) goto LAB_0055e52c;
LAB_0055e6ac:
            fVar39 = *(float *)(param_1 + 0x250);
            if (0.0 < fVar39) goto LAB_0055e6bc;
LAB_0055e57c:
            fVar39 = *(float *)(param_1 + 0x254);
            if (fVar39 <= 0.0) {
              local_1d0 = *(float *)(param_1 + 0x158);
            }
            else {
              local_1d0 = fVar39;
            }
          }
          if (fVar39 <= 0.0) {
            fVar39 = *(float *)(param_1 + 0x158);
          }
          lVar15 = 0x134;
          if (*piVar16 != 0) {
            lVar15 = 0x168;
          }
          lVar13 = lVar13 + uVar9 * 0x34;
          fVar30 = fVar39 / *(float *)(param_1 + 0x158);
          fVar30 = (1.0 / (fVar30 * fVar30)) *
                   *(float *)(lVar13 + 0x28) * *(float *)(lVar13 + 0x28) * fVar32 *
                   *(float *)(param_1 + lVar15) * *(float *)(param_1 + 0x138);
          local_1a8 = CONCAT44(*(float *)(param_1 + 0x228) * *(float *)(lVar13 + 8) * fVar30,
                               *(float *)(param_1 + 0x224) * *(float *)(lVar13 + 4) * fVar30);
          local_1a0 = CONCAT44(*(float *)(param_1 + 0x230) * *(float *)(lVar13 + 0x10) * fVar30,
                               *(float *)(param_1 + 0x22c) * *(float *)(lVar13 + 0xc) * fVar30);
          local_e8 = *(undefined8 *)(lVar13 + 0x14);
          local_128 = *(undefined8 *)(lVar13 + 0x1c);
          if (*(char *)(*(long *)(param_1 + 0x20) + 0x58) != '\0') {
            local_e8 = CONCAT44(1.0 - (float)((ulong)local_e8 >> 0x20),(float)local_e8);
            local_128 = CONCAT44(1.0 - (float)((ulong)local_128 >> 0x20),(float)local_128);
          }
          fVar30 = 1.0;
          if (0.0 < *(float *)(param_1 + 0x268)) {
            fVar30 = *(float *)(param_1 + 0x24c) / *(float *)(param_1 + 0x268);
          }
          uVar42 = NEON_ucvtf(*(undefined4 *)(lVar18 + 0x54));
          uVar43 = NEON_ucvtf(*(undefined4 *)(lVar18 + 0x58));
          FUN_0059d300(lVar18,0,0,1,0,0);
          in_d4 = (ulong)*(uint *)(param_1 + 0x23c);
          in_d5 = (ulong)*(uint *)(param_1 + 0x240);
          in_stack_fffffffffffffdc8 =
               (undefined8 *)CONCAT44(uVar25,*(undefined4 *)(param_1 + 0x17c));
          in_stack_fffffffffffffdc0 = CONCAT44(uVar24,local_1d0);
          in_stack_fffffffffffffdd0 = CONCAT44(uVar44,local_1cc);
          iVar8 = FUN_00589e60(uVar42,uVar43,*(undefined4 *)(param_1 + 0x234),
                               *(undefined4 *)(param_1 + 0x238),in_d4,in_d5,
                               *(undefined4 *)(param_1 + 0x244),fVar39,plVar21,lVar19,uVar23,lVar22,
                               &local_e8,&local_1a8,&local_128,*(undefined4 *)(param_1 + 0x260),
                               in_stack_fffffffffffffdc0,in_stack_fffffffffffffdc8,
                               in_stack_fffffffffffffdd0,fVar30);
          if (((iVar8 < 0) && (*(int *)PTR_DAT_02713970 != 0)) && (*(int *)PTR_DAT_02713980 != 0)) {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp(%d) : PPFX ERROR: ",
                         0x1993);
            uVar17 = FUN_00546ea0(iVar8);
            FUN_00517ae0("CRenderGlare::GenerateGlare_Composite(): pTexUtil->DrawLightGhost() failed (0x%x: %s).\n"
                         ,iVar8,uVar17);
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar4);
    }
  }
  *(long *)(param_1 + 0x420) = lVar18;
LAB_0055e8f4:
  FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
  return 0;
}


