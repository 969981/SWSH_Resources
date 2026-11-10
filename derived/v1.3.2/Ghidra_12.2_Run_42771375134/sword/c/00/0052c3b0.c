/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0052c3b0; name: FUN_0052c3b0
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_0052c3b0(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  uint local_17c;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined8 local_150;
  undefined4 uStack_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined4 local_104;
  float local_100;
  float fStack_fc;
  undefined1 local_f8 [8];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  
  puVar1 = PTR_DAT_027139b0;
  uVar4 = *(uint *)(param_1 + 0xdf8);
  if (uVar4 < 4) {
    local_17c = (&DAT_01d4a570)[(int)uVar4];
LAB_0052c440:
    local_164 = 0;
    uVar28 = 0x3f800000;
  }
  else {
    if (*(int *)(param_1 + 0xdfc) != 1) {
      if (*(int *)(param_1 + 0xdfc) == 0) {
        local_17c = 4;
      }
      else {
        local_17c = 0xffffffff;
      }
      goto LAB_0052c440;
    }
    local_17c = 4;
    uVar28 = 0x40000000;
    local_164 = 0xbf800000;
  }
  lVar11 = *(long *)(param_1 + 0x50);
  iVar5 = *(int *)(param_1 + 0x58);
  bVar2 = lVar11 == 0;
  bVar3 = iVar5 != 8;
  if (bVar3) {
    if (bVar2) {
      iVar8 = *(int *)(param_1 + 0x5e0);
      lVar11 = *(long *)(param_1 + 400);
      if (iVar8 == -1) {
        iVar8 = *(int *)(lVar11 + 0x90);
        if (iVar8 < *(int *)(lVar11 + 0x30)) goto LAB_0052c4a4;
      }
      else if (iVar8 < *(int *)(lVar11 + 0x30)) {
LAB_0052c4a4:
        lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + (long)iVar8 * 8);
        goto joined_r0x0052c4d4;
      }
      lVar11 = 0;
    }
joined_r0x0052c4d4:
    if (uVar4 != 4) goto LAB_0052c4d8;
LAB_0052c4b4:
    lVar12 = *(long *)(param_1 + 0xdf0);
  }
  else {
    lVar11 = *(long *)(*(long *)(param_1 + 400) +
                       (long)*(int *)(*(long *)(param_1 + 400) + 0x94) * 8 + 0x80);
    if (uVar4 == 4) goto LAB_0052c4b4;
LAB_0052c4d8:
    lVar12 = 0;
  }
  lVar14 = *(long *)(param_1 + 0x1f0);
  iVar8 = *(int *)PTR_DAT_027139b0;
  if (iVar8 < 1) {
    plVar9 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar9,0);
    *(long **)PTR_DAT_027139b8 = plVar9;
    *(undefined4 *)puVar1 = 1;
joined_r0x0052c668:
    if (plVar9 == (long *)0x0) {
      *(undefined4 *)puVar1 = 0;
      uVar4 = *(uint *)(lVar11 + 0x38);
      goto joined_r0x0052c67c;
    }
    uVar10 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar9 + 0x20))(plVar9);
    FUN_005b9b10(uVar10,plVar9);
    iVar8 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
  else {
    plVar9 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar8 + 1;
    if (iVar8 + 1 < 2) goto joined_r0x0052c668;
  }
  *(int *)puVar1 = iVar8;
  uVar4 = *(uint *)(lVar11 + 0x38);
joined_r0x0052c67c:
  if ((iVar5 == 8) || ((uVar4 < 0x38 && ((1L << ((ulong)uVar4 & 0x3f) & 0x80210000100000U) != 0))))
  {
    uVar4 = FUN_00561e10();
    lVar7 = *(long *)(param_1 + 0x50);
  }
  else {
    lVar7 = (long)*(int *)(param_1 + 0x58);
    if ((DAT_0275cc3e & 1) == 0) {
      DAT_0275cc3e = 1;
      DAT_0275cd48 = 0x100000000;
      DAT_0275cd50 = 0x300000002;
    }
    if (bVar3 && bVar2) {
      lVar7 = 3;
    }
    uVar4 = *(uint *)((long)&DAT_0275cd48 + lVar7 * 4);
    if (3 < uVar4) {
      uVar4 = 0xffffffff;
    }
    lVar7 = *(long *)(param_1 + 0x50);
  }
  if (lVar7 == 0) {
    uVar29 = 0x3f800000;
  }
  else {
    uVar29 = *(undefined4 *)(param_1 + 0x60);
  }
  if (iVar5 == 8) {
    uVar17 = 0;
    if (*(char *)(param_1 + 0x1014) != '\0') {
      uVar29 = 0xbf800000;
    }
  }
  else {
    if (bVar3 && bVar2) {
      uVar29 = 0x3f800000;
    }
    uVar17 = 6;
    if (bVar3 && bVar2) {
      uVar17 = 2;
    }
  }
  FUN_00528d70(uVar29,param_1,&local_e8,uVar17,0);
  local_f0 = local_e0;
  uStack_ec = local_dc;
  fVar15 = *(float *)(param_1 + 0x6d0) * *(float *)(param_1 + 0x6c4);
  local_134 = 0;
  local_13c = 0;
  local_10c = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_114 = 0;
  fVar21 = *(float *)(param_1 + 0x6d0) * *(float *)(param_1 + 0x420) * *(float *)(param_1 + 0x6c4);
  fVar23 = fVar15 * *(float *)(param_1 + 0x6d8);
  fVar25 = *(float *)(param_1 + 0x6d4) * fVar21;
  fStack_fc = (fVar15 + fVar23) - (fVar23 - fVar15);
  local_100 = (fVar21 + fVar25) - (fVar25 - fVar21);
  local_104 = 0x3f800000;
  local_118 = 0x3f800000;
  local_12c = 0x3f800000;
  local_140 = 0x3f800000;
  if (2 < local_17c) {
    local_150 = CONCAT44(uVar28,uVar28);
    local_15c = local_164;
    uStack_158 = local_164;
    local_160 = local_164;
    uStack_148 = uVar28;
    FUN_0050f710(&local_e8,&local_150,&local_160);
    FUN_00515cb0(&local_140,&local_140,&local_e8);
    if ((((((*(float *)(param_1 + 0xe48) != 1.0) || (*(float *)(param_1 + 0xe4c) != 0.0)) ||
          (*(float *)(param_1 + 0xe50) != 0.0)) ||
         ((*(float *)(param_1 + 0xe54) != 0.0 || (*(float *)(param_1 + 0xe58) != 0.0)))) ||
        (((*(float *)(param_1 + 0xe5c) != 1.0 ||
          ((*(float *)(param_1 + 0xe60) != 0.0 || (*(float *)(param_1 + 0xe64) != 0.0)))) ||
         (*(float *)(param_1 + 0xe68) != 0.0)))) ||
       ((((*(float *)(param_1 + 0xe6c) != 0.0 || (*(float *)(param_1 + 0xe70) != 1.0)) ||
         (*(float *)(param_1 + 0xe74) != 0.0)) ||
        (((*(float *)(param_1 + 0xe78) != 0.0 || (*(float *)(param_1 + 0xe7c) != 0.0)) ||
         ((*(float *)(param_1 + 0xe80) != 0.0 || (*(float *)(param_1 + 0xe84) != 1.0)))))))) {
      FUN_00515cb0(&local_140,&local_140);
    }
    if (*(char *)(param_1 + 0xe00) != '\0') {
      local_dc = 0;
      uStack_d8 = 0;
      uStack_e4 = 0;
      local_e0 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_b4 = 0;
      uStack_b0 = 0;
      local_bc = 0;
      uStack_b8 = 0;
      local_e8 = 0x3f800000;
      local_d4 = 0x3f800000;
      local_c0 = 0xbf800000;
      local_ac = 0x3f800000;
      FUN_00515cb0(&local_140,&local_140,&local_e8);
    }
    if (*(int *)(param_1 + 0xe04) == 1) {
      FUN_00515cb0(&local_140,&local_140,param_1 + 0x734);
    }
  }
  fVar15 = *(float *)(lVar11 + 0x88);
  fVar23 = *(float *)(lVar11 + 0x8c);
  uVar28 = *(undefined4 *)(lVar11 + 0x54);
  uVar29 = *(undefined4 *)(lVar11 + 0x58);
  fVar21 = *(float *)(lVar11 + 0x90);
  fVar25 = *(float *)(lVar11 + 0x94);
  if (lVar12 == 0) {
    fVar16 = 0.0;
    fVar22 = 0.0;
  }
  else {
    fVar22 = (float)NEON_ucvtf(*(undefined4 *)(lVar12 + 0x58));
    fVar16 = (float)NEON_ucvtf(*(undefined4 *)(lVar12 + 0x54));
    fVar22 = *(float *)(lVar12 + 0x8c) * fVar22 + *(float *)(lVar12 + 0x94);
    fVar16 = *(float *)(lVar12 + 0x88) * fVar16 + *(float *)(lVar12 + 0x90);
  }
  uVar17 = *(undefined4 *)(lVar14 + 0x54);
  uVar18 = *(undefined4 *)(lVar14 + 0x58);
  local_150 = *(undefined8 *)(lVar11 + 0x88);
  local_e8 = (undefined4)lVar14;
  uStack_e4 = (undefined4)((ulong)lVar14 >> 0x20);
  local_e0 = 0;
  local_dc = 0;
  uStack_b8 = 0;
  local_b4 = 0;
  uStack_b0 = 0;
  local_ac = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0;
  uStack_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  FUN_0059db20(0x3f800000,8,&local_e8,0,0,0,0,0,0,0);
  fVar19 = *(float *)(param_1 + 0x90c);
  fVar31 = *(float *)(param_1 + 0x8f4);
  if (0.0 < fVar19) {
    fVar32 = *(float *)(param_1 + 0x8f8);
    if (fVar19 <= *(float *)(param_1 + 0x8f8)) {
      fVar32 = fVar19;
    }
    fVar20 = *(float *)(param_1 + 0x910);
    if (fVar31 <= fVar19) {
      fVar31 = fVar32;
    }
    if ((0.0 < fVar20) && (fVar20 <= fVar31)) {
      fVar31 = fVar20;
    }
  }
  fVar20 = *(float *)(param_1 + 0x6c4);
  fVar19 = *(float *)(param_1 + 0xef0);
  fVar27 = *(float *)(param_1 + 0xeec);
  uVar6 = FUN_00562390(fVar20,*(undefined4 *)(param_1 + 0x6c8),fVar27,fVar19);
  fVar32 = fVar20;
  if ((uVar6 & 1) != 0) {
    if (fVar27 <= fVar19) {
      fVar19 = fVar20;
    }
    fVar32 = fVar19;
    if (fVar19 <= fVar20) {
      fVar32 = fVar20;
    }
  }
  fVar19 = (float)NEON_ucvtf(uVar28);
  fVar20 = (float)NEON_ucvtf(uVar29);
  fVar27 = *(float *)(param_1 + 0x910);
  if (fVar31 <= fVar32) {
    fVar31 = fVar32;
  }
  fVar32 = *(float *)(param_1 + 0x8f8);
  if (0.0 < fVar27) {
    if (fVar27 <= fVar32) {
      fVar32 = fVar27;
    }
    fVar24 = *(float *)(param_1 + 0x90c);
    fVar26 = *(float *)(param_1 + 0x8f4);
    if (*(float *)(param_1 + 0x8f4) <= fVar27) {
      fVar26 = fVar32;
    }
    fVar32 = fVar26;
    if ((0.0 < fVar24) && (fVar26 <= fVar24)) {
      fVar32 = fVar24;
    }
  }
  fVar30 = *(float *)(param_1 + 0x6c8);
  fVar26 = *(float *)(param_1 + 0xef0);
  fVar24 = *(float *)(param_1 + 0xeec);
  uVar6 = FUN_00562390(*(undefined4 *)(param_1 + 0x6c4),fVar30,fVar24,fVar26);
  fVar27 = fVar30;
  if ((uVar6 & 1) != 0) {
    fVar27 = fVar26;
    if (fVar26 <= fVar24) {
      fVar27 = fVar30;
    }
    bVar2 = false;
    if ((fVar27 < fVar30) && (bVar2 = false, !NAN(fVar24) && !NAN(fVar26))) {
      bVar2 = fVar24 < fVar26;
    }
    fVar27 = fVar26;
    if (!bVar2) {
      fVar27 = fVar30;
    }
  }
  uVar28 = NEON_ucvtf(uVar17);
  fVar21 = fVar15 * fVar19 + fVar21;
  uVar29 = NEON_ucvtf(uVar18);
  fVar15 = *(float *)(param_1 + 0x6c4);
  uVar17 = *(undefined4 *)(param_1 + 0x6c8);
  do {
    lVar14 = lVar11;
    lVar11 = *(long *)(lVar14 + 0x120);
  } while (lVar11 != 0);
  uVar10 = *(undefined8 *)(lVar14 + 0xa8);
  if (fVar27 <= fVar32) {
    fVar32 = fVar27;
  }
  uVar13 = 0;
  if (lVar12 != 0) {
    do {
      lVar11 = lVar12;
      lVar12 = *(long *)(lVar11 + 0x120);
    } while (lVar12 != 0);
    uVar13 = *(undefined8 *)(lVar11 + 0xa8);
  }
  if (local_17c == 2) {
    fVar19 = fVar15 * *(float *)(param_1 + 0x6d0);
    fVar26 = fVar15 * *(float *)(param_1 + 0x6d0) * *(float *)(param_1 + 0x420);
    fVar24 = *(float *)(param_1 + 0x6d4) * fVar26;
    fVar27 = fVar19 * *(float *)(param_1 + 0x6d8);
    FUN_0050f980(fVar24 - fVar26,fVar26 + fVar24,fVar27 - fVar19,fVar19 + fVar27,fVar15,uVar17,
                 fVar21,&local_e8,0,1);
  }
  else {
    local_dc = 0;
    uStack_d8 = 0;
    uStack_e4 = 0;
    local_e0 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_b4 = 0;
    uStack_b0 = 0;
    local_bc = 0;
    uStack_b8 = 0;
    local_ac = 0x3f800000;
    local_c0 = 0x3f800000;
    local_d4 = 0x3f800000;
    local_e8 = 0x3f800000;
  }
  iVar5 = FUN_0058bc70(0,0,uVar28,uVar29,0,0,fVar21,fVar23 * fVar20 + fVar25,plVar9,uVar4,local_17c,
                       local_f8,&local_100,uVar10,&local_150,uVar13,0,0,fVar16,fVar22,fVar15,uVar17,
                       &local_e8,&local_140,fVar31,fVar32,0);
  if (iVar5 < 0) {
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x5be0);
      uVar10 = FUN_00546ea0(iVar5);
      FUN_00517ae0("CPostEffect::ApplyEffects_GenerateNormalAndLinearDepth(): pTexUtil->DrawRectGPU_GenerateNormalAndLinearDepth() failed (0x%x: %s).\n"
                   ,iVar5,uVar10);
    }
  }
  else {
    iVar5 = 0;
    *(undefined1 *)(param_1 + 0x10dd) = 1;
  }
  return iVar5;
}


