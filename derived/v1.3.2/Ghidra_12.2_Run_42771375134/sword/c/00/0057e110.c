/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0057e110; name: FUN_0057e110
 */


/* WARNING: Removing unreachable block (ram,0x0057efb0) */
/* WARNING: Removing unreachable block (ram,0x0057efe0) */
/* WARNING: Removing unreachable block (ram,0x0057f008) */
/* WARNING: Removing unreachable block (ram,0x0057f01c) */
/* WARNING: Removing unreachable block (ram,0x0057f020) */
/* WARNING: Removing unreachable block (ram,0x0057f024) */
/* WARNING: Removing unreachable block (ram,0x0057f038) */
/* WARNING: Removing unreachable block (ram,0x0057f03c) */
/* WARNING: Removing unreachable block (ram,0x0057ef34) */
/* WARNING: Removing unreachable block (ram,0x0057ef2c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0057e110(float param_1,undefined8 param_2,float param_3,ulong param_4,float param_5,
            float param_6,ulong param_7,undefined8 param_8,long param_9,int param_10,
            undefined8 param_11,long *param_12,long param_13,uint param_14,int param_15,int param_16
            ,float param_17,undefined4 param_18,undefined4 param_19,float *param_20,
            undefined8 param_21,undefined8 *param_22,float param_23,float param_24,float param_25,
            float param_26,float param_27,float param_28,float param_29,byte param_30,int param_31,
            float param_32,float param_33,float *param_34,int param_35,float param_36,float param_37
            ,undefined4 param_38,long *param_39,byte param_40,byte param_41,byte param_42,
            float param_43,uint param_44,byte param_45)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  undefined4 uVar40;
  long *plVar41;
  uint uVar42;
  float *pfVar43;
  bool bVar44;
  byte bVar45;
  int iVar46;
  uint uVar47;
  long lVar48;
  code *pcVar49;
  int iVar50;
  ulong uVar51;
  uint uVar52;
  long *plVar53;
  uint uVar54;
  uint uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  ulong uVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined4 uVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float local_358;
  float local_354;
  float local_320;
  float local_31c;
  float local_30c;
  float local_2d4;
  float local_2b4;
  float local_2a4;
  undefined1 auStack_260 [32];
  float local_240;
  undefined8 local_23c;
  undefined8 local_234;
  float local_22c;
  undefined8 local_228;
  undefined8 local_220;
  float local_218;
  undefined8 local_214;
  undefined8 local_20c;
  undefined4 local_204;
  float local_200;
  float fStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  float local_1c0;
  float fStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 auStack_150 [4];
  undefined4 local_14c;
  undefined4 local_13c;
  undefined4 local_12c;
  float local_110;
  float local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  
  fVar57 = param_24;
  if (&local_108 != param_22) {
    local_108 = *param_22;
    local_100 = param_22[1];
    local_f8 = param_22[2];
    local_f0 = param_22[3];
  }
  fVar67 = param_43;
  if (param_43 <= 0.0) {
    fVar67 = param_24;
  }
  bVar19 = false;
  iVar3 = 0;
  if (param_16 != 1) {
    iVar3 = param_16;
  }
  if (((((param_15 == 1) && (bVar19 = true, param_14 != 0)) && (param_14 != 0x10)) &&
      ((8 < param_14 - 6 && (bVar19 = false, *(int *)PTR_DAT_02713970 != 0)))) &&
     (*(int *)PTR_DAT_027139c0 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX WARNING: ",0x4e5a);
    FUN_00517ae0(
                "CTextureUtil::DrawRectGPU_OptoElectronicTransfer(): Backend color space PFXTBCSM_SCRGB can be used only with PFXEOTF_PQ or PFXEOTF_GAMMA* types.\n"
                );
    bVar19 = false;
  }
  if (param_13 == 0) {
LAB_0057e32c:
    bVar18 = false;
joined_r0x0057e318:
    bVar17 = false;
joined_r0x0057e7d4:
    if (param_14 != 1) goto LAB_0057e340;
LAB_0057e31c:
    bVar15 = true;
  }
  else {
    uVar42 = *(int *)(param_13 + 0x44) - 0x48;
    if (((0x1b < uVar42) || ((1 << (ulong)(uVar42 & 0x1f) & 0x8280049U) == 0)) &&
       (*(int *)(param_13 + 0x44) != 0x1d)) goto LAB_0057e32c;
    if ((param_14 == 0x10) || (param_14 - 6 < 9)) {
      if (bVar19) {
        if (*(int *)PTR_DAT_02713970 == 0) {
          bVar19 = true;
          bVar18 = true;
          goto joined_r0x0057e7b4;
        }
        if (*(int *)PTR_DAT_027139c0 != 0) {
          FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX WARNING: ",
                       0x4e78);
          FUN_00517ae0(
                      "CTextureUtil::DrawRectGPU_OptoElectronicTransfer(): Output format sRGB can not be supported with backend color space PFXTBCSM_SCRGB.\nThe gamma correction will not strictly be correct.\n"
                      );
        }
        bVar19 = true;
        bVar18 = true;
        goto joined_r0x0057e318;
      }
      bVar19 = true;
      bVar17 = true;
      bVar18 = false;
      goto joined_r0x0057e7d4;
    }
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_027139c0 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX WARNING: ",0x4e8a
                  );
      FUN_00517ae0(
                  "CTextureUtil::DrawRectGPU_OptoElectronicTransfer(): Output format sRGB can be used only with PFXEOTF_GAMMA*.\n"
                  );
      goto LAB_0057e32c;
    }
    bVar18 = false;
joined_r0x0057e7b4:
    bVar17 = false;
    if (param_14 == 1) goto LAB_0057e31c;
LAB_0057e340:
    bVar15 = param_14 == 5 || (param_14 == 0x10 || param_14 - 6 < 9);
  }
  bVar27 = param_45;
  uVar42 = param_44;
  bVar26 = param_42;
  bVar25 = param_41;
  bVar24 = param_40;
  plVar53 = param_39;
  uVar40 = param_38;
  fVar23 = param_37;
  fVar60 = param_36;
  pfVar43 = param_34;
  fVar66 = param_33;
  fVar70 = param_32;
  iVar21 = param_31;
  bVar45 = param_30;
  fVar72 = param_29;
  fVar71 = param_27;
  fVar20 = param_26;
  fVar58 = param_25;
  local_2a4 = param_28;
  if ((((((*param_20 == 1.0) && (param_20[1] == 0.0)) && (param_20[2] == 0.0)) &&
       (((param_20[3] == 0.0 && (param_20[4] == 0.0)) &&
        ((param_20[5] == 1.0 && ((param_20[6] == 0.0 && (param_20[7] == 0.0)))))))) &&
      (param_20[8] == 0.0)) &&
     ((((param_20[9] == 0.0 && (param_20[10] == 1.0)) && (param_20[0xb] == 0.0)) &&
      (((param_20[0xc] == 0.0 && (param_20[0xd] == 0.0)) &&
       ((param_20[0xe] == 0.0 && (param_20[0xf] == 1.0)))))))) {
    local_2a4 = 0.0;
  }
  fVar78 = (float)param_4;
  if (param_14 == 0xf) {
    local_354 = (float)(int)(DAT_01d4c4b0 / param_3);
    local_358 = local_354 / fVar78;
  }
  else {
    local_358 = DAT_01d4c5a8;
    local_354 = DAT_01d4c5a8;
  }
  fVar56 = (float)NEON_ucvtf(*(undefined4 *)(param_13 + 0x4c));
  if ((fVar56 == param_3) &&
     (fVar56 = (float)NEON_ucvtf(*(undefined4 *)(param_13 + 0x50)), fVar56 == fVar78)) {
    bVar14 = 1;
  }
  else {
    bVar14 = 0;
  }
  uVar51 = (ulong)param_30;
  local_31c = (float)param_2;
  bVar38 = param_14 == 0xf;
  bVar44 = (bool)((param_1 == 0.0 && local_31c == 0.0) & bVar14);
  bVar14 = param_41 ^ 1;
  if ((((bVar38) && (bVar44)) && ((bVar14 & 1) == 0)) && ((param_45 & 1) == 0)) {
    FUN_0057e110(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,0xf,param_15,iVar3,param_17,param_18,param_19,param_20,
                 param_21,&local_108,param_23,fVar57,param_25,param_26,param_27,local_2a4,param_29,
                 param_30 & 1,param_31,param_32,param_33,param_34,0,param_36,param_37,param_38,
                 param_39,param_40 & 1,param_41 & 1,param_42 & 1,fVar67,param_44,1);
  }
  uVar11 = uVar42 | 0x10000;
  if (!bVar44) {
    uVar42 = uVar11;
  }
  if (0.0 < fVar57) {
LAB_0057e710:
    local_e8 = 100.0;
    if (param_14 == 1) {
      if (!bVar15) goto LAB_0057e7f0;
      bVar44 = false;
      bVar36 = true;
    }
    else {
LAB_0057e760:
      local_e8 = 100.0;
      bVar36 = false;
      bVar44 = param_14 == 0x10 || param_14 - 6 < 9;
      fVar56 = DAT_01d4c6b8;
      if (param_14 == 0x10) goto LAB_0057e800;
    }
    local_e8 = 100.0;
    fVar56 = DAT_01d4c6b8;
    if (!bVar44) {
      if (param_14 == 5) {
        local_e8 = 64512.0;
        fVar56 = DAT_01d4baf8;
      }
      else {
        local_e8 = (float)FUN_005103b0(param_14);
        fVar56 = local_e8;
      }
    }
  }
  else {
    if (param_14 != 1) {
      if (param_14 != 5) goto LAB_0057e700;
      fVar57 = 100.0;
      if (iVar3 == 0 && param_16 != 1) {
        fVar57 = 64512.0;
      }
      local_e8 = 100.0;
      param_24 = fVar57;
      goto LAB_0057e760;
    }
    if (bVar15) {
LAB_0057e700:
      fVar57 = (float)FUN_00510430(param_14);
      param_24 = fVar57;
      goto LAB_0057e710;
    }
    fVar57 = 20.0;
    param_24 = 20.0;
LAB_0057e7f0:
    local_e8 = 12.0;
    bVar36 = true;
    fVar56 = 12.0;
  }
LAB_0057e800:
  if (!bVar15 && bVar36) {
    fVar56 = powf(fVar56,fVar58);
    local_e8 = fVar56;
  }
  fVar61 = DAT_01d4bf5c;
  pfVar5 = &param_24;
  if (fVar56 <= fVar57) {
    pfVar5 = &local_e8;
  }
  uVar12 = param_14 - 6;
  fVar57 = *pfVar5;
  if (*pfVar5 <= param_23) {
    fVar57 = param_23;
  }
  bVar37 = uVar12 < 9;
  bVar39 = param_14 == 0x10;
  bVar44 = bVar39 || bVar37;
  local_30c = (float)param_8;
  fVar56 = (float)param_7;
  param_24 = fVar57;
  if (fVar58 <= 0.0) {
    fVar79 = 1.0;
    bVar16 = (bool)(bVar36 | (bVar44 && NAN(fVar57)));
    fVar62 = 1.0;
    if (fVar58 < 0.0) {
      fVar62 = fVar58;
      if (fVar58 <= 0.0) {
        fVar62 = -fVar58;
      }
    }
    fVar58 = DAT_01d4bf5c;
    if (!bVar16) {
      fVar58 = 1.0;
    }
    if ((bool)(bVar15 & bVar16)) {
      fVar74 = (fVar57 * DAT_01d4c6b8) / DAT_01d4bec0;
      fVar58 = logf(fVar74);
      fVar63 = DAT_01d4c5fc;
      fVar79 = DAT_01d4c014;
      fVar59 = (fVar58 / DAT_01d4c014) * DAT_01d4c5fc + fVar61;
      fVar77 = fVar59;
      if (1.5 < fVar59) {
        fVar77 = 1.5;
      }
      fVar58 = 1.0;
      if (1.0 <= fVar59) {
        fVar58 = fVar77;
      }
      if (NAN(fVar57)) {
        fVar77 = logf(fVar74);
        fVar61 = (fVar77 / fVar79) * fVar63 + fVar61;
        fVar79 = 1.0;
        if ((1.0 <= fVar61) && (fVar79 = fVar61, 1.5 < fVar61)) {
          fVar79 = 1.5;
        }
      }
      else {
        fVar79 = 1.0;
      }
    }
    fVar58 = fVar62 * fVar58;
    if (NAN(fVar57)) {
      fVar58 = (1.0 / fVar79) * fVar58;
    }
  }
  if (((fVar58 != 1.0) && (!bVar39 && !bVar37)) && ((param_14 != 1 && (param_14 != 0x10)))) {
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_027139c0 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX WARNING: ",0x4f96
                  );
      FUN_00517ae0(
                  "CTextureUtil::DrawRectGPU_OptoElectronicTransfer(): fCorrectForSystemGamma can be modified only with PFXEOTF_GAMMA* and PFXEOTF_HLG.\n"
                  );
    }
    fVar58 = 1.0;
  }
  local_e8 = 0.0;
  fStack_e4 = 0.0;
  (**(code **)(**(long **)(param_9 + 0x20) + 0x50))(*(long **)(param_9 + 0x20),0,&local_e8);
  if (((long *)CONCAT44(fStack_e4,local_e8) == (long *)0x0) ||
     ((**(code **)(*(long *)CONCAT44(fStack_e4,local_e8) + 8))(),
     CONCAT44(fStack_e4,local_e8) != param_13)) {
    (**(code **)(**(long **)(param_9 + 0x20) + 0x38))(*(long **)(param_9 + 0x20),0,param_13,0);
    FUN_0059d000(0,0);
  }
  iVar22 = param_35;
  fVar60 = powf(DAT_01d4c4a0,fVar60);
  fVar60 = (fVar60 + -1.0) * DAT_01d4bfb8;
  iVar50 = iVar21;
  if ((bVar45 & 1) == 0) {
    iVar50 = -1;
  }
  uVar68 = FUN_0057c3a0(fVar57,uVar40,param_23,fVar20,fVar70,fVar66,fVar60,param_18,param_9,iVar50,
                        iVar3,pfVar43);
  local_320 = (float)FUN_0057c3a0(param_23,uVar40,param_23,fVar20,fVar70,fVar66,fVar60,param_18,
                                  param_9,iVar50,iVar3,pfVar43);
  FUN_0057bfc0(uVar40,uVar68,param_23,param_18,param_19,0x3f800000,param_9,iVar3,pfVar43);
  FUN_0057bfc0(uVar40,fVar57,param_23,param_18,param_19,0x3f800000,param_9,iVar3,pfVar43);
  if (bVar39 || bVar37) {
    uVar68 = (ulong)(uint)((float)uVar68 / fVar57);
    local_2d4 = param_23 / fVar57;
    if (DAT_01d4c578 <= param_23 / fVar57) {
      local_2d4 = 0.9995117;
    }
    param_24 = 0.9995117;
    local_320 = local_320 / fVar57;
    fVar60 = DAT_01d4c578;
  }
  else {
    local_2d4 = param_23;
    fVar60 = fVar57;
  }
  fVar61 = (float)FUN_0057bfc0(uVar40,uVar68,local_2d4,param_18,param_19,0x3f800000,param_9,iVar3,
                               pfVar43);
  bVar16 = iVar22 - 3U < 2;
  if ((bVar27 & 1) == 0) {
    bVar16 = iVar22 == 3;
  }
  fVar79 = (float)uVar68;
  param_7 = param_7 & 0xffffffff;
  param_4 = param_4 & 0xffffffff;
  fVar62 = fVar60;
  local_110 = local_2d4;
  if (!bVar15) {
    fVar62 = powf(fVar60,1.0 / fVar58);
    uVar68 = uVar68 & 0xffffffff;
    local_110 = powf(local_2d4,1.0 / fVar58);
  }
  uVar54 = *(int *)(param_13 + 0x44) - 0xb;
  if (uVar54 < 0x31) {
    uVar54 = (uint)(0x1f0000f00000f >> ((ulong)uVar54 & 0x3f)) & 1;
  }
  else {
    uVar54 = 0;
  }
  fVar63 = (float)uVar68;
  local_10c = fVar62;
  if (bVar15) {
    if (bVar36) {
      local_10c = fVar62 / fVar60;
      local_110 = local_110 / fVar60;
    }
    fVar77 = (1.0 - fVar58) / fVar58;
    fVar63 = powf(local_10c,fVar77);
    local_10c = fVar63 * local_10c;
    fVar63 = powf(local_110,fVar77);
    local_110 = fVar63 * local_110;
    fVar63 = fVar79;
    if (bVar36) {
      local_110 = local_110 * 12.0;
      local_10c = local_10c * 12.0;
    }
  }
  fVar77 = (float)FUN_005804c0(&local_10c,param_14,uVar54);
  fVar59 = (float)FUN_005804c0(&local_110,param_14,uVar54);
  fVar74 = 0.0;
  if (iVar3 == 10) {
    fVar74 = powf(*pfVar43,DAT_01d4bd24);
    if (0.0 <= fVar74) {
      if (1.0 < fVar74) {
        fVar74 = 1.0;
      }
      fVar74 = fVar74 / DAT_01d4c158;
    }
    else {
      fVar74 = 0.0;
    }
    iVar46 = (int)fVar74;
    iVar50 = 0x14;
    if (iVar46 + 1 < 0x14) {
      iVar50 = iVar46 + 1;
    }
    fVar74 = *(float *)(&DAT_01d6c9ec + (long)iVar46 * 4) +
             (*(float *)(&DAT_01d6c9ec + (long)iVar50 * 4) -
             *(float *)(&DAT_01d6c9ec + (long)iVar46 * 4)) * (fVar74 - (float)iVar46);
  }
  uVar54 = param_10 - 1;
  fVar75 = 0.0;
  if (iVar22 != 1) {
    fVar75 = local_2a4;
  }
  if (3 < uVar54) {
    return 0xfffffffc;
  }
  uVar13 = iVar22 - 2;
  if ((bVar26 & 1) == 0) {
    lVar2 = 1;
    if (iVar22 == 1 || uVar13 < 3) {
      lVar2 = 2;
    }
    if ((iVar22 != 1 && uVar13 >= 3) && fVar75 <= 0.0) {
      lVar2 = 0;
    }
    uVar51 = uVar51 & 1;
    uVar47 = 0x10;
    if ((param_14 | 1) != 0x11) {
      uVar47 = 0xd;
    }
    lVar48 = (long)iVar3;
    if (param_14 == 5) {
      lVar2 = param_9 + lVar2 * 0x900 + uVar51 * 0x480 + lVar48 * 4;
      piVar6 = (int *)(lVar2 + 0x24580);
      piVar7 = (int *)(lVar2 + 0x27b80);
      if ((bVar27 & 1) == 0) {
        piVar6 = (int *)(lVar2 + 0x22a80);
        piVar7 = (int *)(lVar2 + 0x26080);
      }
      do {
        piVar8 = piVar6;
        if (uVar54 != 0) {
          piVar8 = piVar7;
        }
        uVar55 = uVar54 + 1;
        iVar50 = *piVar8;
        if (2 < (int)uVar54) break;
        uVar54 = uVar55;
      } while (iVar50 == 0);
    }
    else if (param_14 == 1) {
      do {
        uVar55 = uVar54 + 1;
        lVar1 = param_9 + lVar2 * 0x900 + uVar51 * 0x480 + 0x40 + lVar48 * 4;
        piVar7 = (int *)(lVar1 + 0x24440);
        if ((bVar27 & 1) == 0) {
          piVar7 = (int *)(lVar1 + 0x22940);
        }
        lVar1 = param_9 + lVar2 * 0x900 + uVar51 * 0x480 + 0x40 + lVar48 * 4;
        piVar6 = (int *)(lVar1 + 0x27a40);
        if ((bVar27 & 1) == 0) {
          piVar6 = (int *)(lVar1 + 0x25f40);
        }
        if (uVar54 != 0) {
          piVar7 = piVar6;
        }
        iVar50 = *piVar7;
      } while (((int)uVar54 < 3) && (uVar54 = uVar55, iVar50 == 0));
    }
    else {
      if (!bVar39 && !bVar37) {
        uVar47 = param_14;
      }
      do {
        uVar55 = uVar54 + 1;
        if ((param_14 < 6) || (param_14 == 0x11)) {
          uVar68 = uVar51;
        }
        else {
          uVar68 = 0;
        }
        uVar52 = uVar47;
        if (uVar47 == 0) {
          uVar52 = 0x11;
        }
        uVar4 = 0x10;
        if (uVar47 != 0xd) {
          uVar4 = uVar52;
        }
        uVar52 = uVar47;
        if ((uVar47 | 1) != 0x11 && !(bool)(bVar19 ^ 1)) {
          uVar52 = uVar4;
        }
        uVar4 = 2;
        if (2 < uVar52 - 2) {
          uVar4 = uVar52;
        }
        lVar1 = param_9 + lVar2 * 0x900 + uVar68 * 0x480 + (long)(int)uVar4 * 0x40 + lVar48 * 4;
        piVar7 = (int *)(lVar1 + 0x27a40);
        if ((bVar27 & 1) == 0) {
          piVar7 = (int *)(lVar1 + 0x25f40);
        }
        lVar1 = param_9 + lVar2 * 0x900 + uVar68 * 0x480 + (long)(int)uVar4 * 0x40 + lVar48 * 4;
        piVar6 = (int *)(lVar1 + 0x24440);
        if ((bVar27 & 1) == 0) {
          piVar6 = (int *)(lVar1 + 0x22940);
        }
        if (uVar54 == 0) {
          piVar7 = piVar6;
        }
        iVar50 = *piVar7;
      } while (((int)uVar54 < 3) && (uVar54 = uVar55, iVar50 == 0));
    }
  }
  else {
    uVar47 = param_14;
    if ((bVar44) && (uVar47 = 0x10, (param_14 | 1) != 0x11)) {
      uVar47 = 0xd;
    }
    if (((uVar47 | 1) != 0x11) && (!(bool)(bVar19 ^ 1))) {
      if (uVar47 == 0xd) {
        uVar47 = 0x10;
      }
      else if (uVar47 == 0) {
        uVar47 = 0x11;
      }
    }
    uVar55 = 2;
    if (2 < uVar47 - 2) {
      uVar55 = uVar47;
    }
    iVar50 = *(int *)(param_9 + (long)(int)uVar55 * 0x40 + (long)iVar3 * 4 + 0x29540);
    uVar55 = uVar54;
  }
  if (iVar50 == 0) {
    if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
      return 0xfffffffc;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: ",0x5150);
    FUN_00517ae0("CTextureUtil::DrawRectGPU_OptoElectronicTransfer(): GetHandle_tech_OptoElectronicTransfer(%d, %d) failed.\n"
                 ,param_10,param_14);
    return 0xfffffffc;
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
  FUN_00573990(param_9,param_10,param_11,uVar55,8);
  DAT_02760c18 = local_2d4;
  DAT_02760c20 = fVar20;
  fVar63 = fVar63 / local_2d4;
  DAT_02760c1c = fVar74;
  if ((fVar66 <= 1.0) || ((bVar45 & 1) == 0)) goto switchD_0057f218_default;
  fVar63 = powf(fVar63,1.0 / fVar70);
  fVar73 = DAT_01d4c748;
  fVar65 = DAT_01d4c320;
  switch(iVar21) {
  case 6:
    fVar64 = powf((fVar63 + DAT_01d4c254) / DAT_01d4c120,DAT_01d4c5d0);
    fVar69 = DAT_01d4c38c;
    goto LAB_0057f37c;
  case 7:
  case 8:
    fVar64 = powf((fVar63 + DAT_01d4c0e8) / DAT_01d4bd68,DAT_01d4c6dc);
    fVar69 = DAT_01d4bc84;
    fVar65 = fVar73;
LAB_0057f37c:
    bVar36 = fVar69 <= fVar63;
    fVar63 = fVar63 * fVar65;
    if (bVar36) {
      fVar63 = fVar64;
    }
    if (fVar63 <= 0.0) {
      fVar63 = 0.0;
    }
    goto switchD_0057f218_default;
  case 9:
    fVar65 = DAT_01d4c314;
    break;
  case 10:
    fVar65 = DAT_01d4bf48;
    break;
  case 0xb:
    fVar73 = fVar63 * DAT_01d4be70;
    fVar65 = powf(fVar63 + 0.0,DAT_01d4bccc);
    bVar36 = DAT_01d4c660 <= fVar63;
    fVar63 = fVar73;
    if (bVar36) {
      fVar63 = fVar65;
    }
    if (fVar63 <= 0.0) {
      fVar63 = 0.0;
    }
    goto switchD_0057f218_default;
  case 0xc:
    fVar65 = DAT_01d4bccc;
    break;
  case 0xd:
    fVar65 = DAT_01d4c570;
    break;
  case 0xe:
    fVar65 = DAT_01d4c5d0;
    break;
  default:
    goto switchD_0057f218_default;
  }
  fVar63 = powf(fVar63,fVar65);
switchD_0057f218_default:
  DAT_02760c24 = powf(fVar63,1.0 / fVar20);
  if (bVar15) {
    DAT_02760c28._4_4_ = 1.0 / fVar60;
  }
  fVar60 = 1.0 - fVar58;
  DAT_02760c30._4_4_ = fVar66;
  DAT_02760c4c._4_4_ = local_2d4 * fVar23;
  if (!bVar15) {
    fVar60 = 1.0;
  }
  DAT_02760c30._0_4_ = fVar60 / fVar58;
  DAT_02760c54._0_4_ = 0;
  if (plVar53 == (long *)0x0) {
    DAT_02760c54._0_4_ = 0x3f800000;
  }
  DAT_02760c40 = local_2d4 * DAT_01d4bd3c;
  fVar58 = fVar72;
  if (DAT_01d4c5a4 < fVar72) {
    fVar58 = DAT_01d4c5a4;
  }
  DAT_02760c3c = 0x3851b717;
  DAT_02760c4c._0_4_ = 0x3851b717;
  fVar66 = 0.0;
  if (0.0 <= fVar72) {
    fVar66 = fVar58;
  }
  DAT_02760c44._0_4_ = 0;
  fVar58 = fVar61;
  DAT_02760c28._0_4_ = fVar77;
  DAT_02760c38 = fVar61;
  DAT_02760c44._4_4_ = fVar61;
  DAT_02760c54._4_4_ = fVar75;
  fVar60 = powf(fVar66,0.25);
  DAT_02760c5c._0_4_ = 1.0 / (1.0 - fVar60);
  if ((bVar45 & 1) == 0) {
    fVar70 = 1.0;
  }
  ram0x02760c60 = 0;
  DAT_02760c64._4_4_ = fVar70;
  if (((((float)local_108 == DAT_027607c0) && (local_108._4_4_ == DAT_027607c4)) &&
      ((float)local_100 == DAT_027607c8)) &&
     (((local_100._4_4_ == DAT_027607cc && ((float)local_f8 == DAT_027607d0)) &&
      ((local_f8._4_4_ == DAT_027607d4 &&
       (((float)local_f0 == DAT_027607d8 && (local_f0._4_4_ == DAT_027607dc)))))))) {
    uVar40 = FUN_005104b0(param_14);
    FUN_00511040(&local_e8,uVar40);
    local_f8 = CONCAT44(uStack_d4,local_d8);
    local_100 = CONCAT44(fStack_dc,local_e0);
    local_f0 = local_d0;
    local_108 = CONCAT44(fStack_e4,local_e8);
  }
  FUN_00511bb0(auStack_150,&local_108,&local_100,&local_f8,&local_f0);
  DAT_02760c6c._0_4_ = local_14c;
  DAT_02760c6c._4_4_ = local_13c;
  DAT_02760c74._0_4_ = local_12c;
  if ((bVar26 & 1) != 0) {
    DAT_02760c7c._0_4_ = 0x40800000;
    DAT_02760c84._4_4_ = 0x3f800000;
    DAT_02760c8c._0_4_ = 0x40000000;
    DAT_02760c8c._4_4_ = 0x3eb33333;
    DAT_02760c94._0_4_ = 0x3ea3d70a;
    DAT_02760c7c._4_4_ = local_2d4;
    if (iVar22 != 1) {
      DAT_02760c7c._4_4_ = fVar62;
    }
    DAT_02760c94._4_4_ = 0x3e23d70a;
    DAT_02760c9c._0_4_ = 0x3da3d70a;
    DAT_02760c9c._4_4_ = 0x3d23d70a;
    DAT_02760ca4._0_4_ = 0x3ca3d70a;
    DAT_02760c84._0_4_ = fVar67;
    if ((param_14 < 6) || (DAT_02760c74._4_4_ = fVar57, param_14 == 0x11)) {
      DAT_02760c8c._0_4_ = 0x40000000;
      DAT_02760c8c._4_4_ = 0x3eb33333;
      DAT_02760c94._0_4_ = 0x3ea3d70a;
      DAT_02760c94._4_4_ = 0x3e23d70a;
      DAT_02760c9c._0_4_ = 0x3da3d70a;
      DAT_02760c9c._4_4_ = 0x3d23d70a;
      DAT_02760ca4._0_4_ = 0x3ca3d70a;
      if ((param_14 < 6) || (DAT_02760c74._4_4_ = fVar57, param_14 == 0x11)) {
        DAT_02760c9c._0_4_ = 0x3e23d70a;
        DAT_02760c9c._4_4_ = 0x3da3d70a;
        DAT_02760c8c._0_4_ = 0x40800000;
        DAT_02760c8c._4_4_ = 0x3f333333;
        DAT_02760c94._0_4_ = 0x3f23d70a;
        DAT_02760c94._4_4_ = 0x3ea3d70a;
        DAT_02760ca4._0_4_ = 0x3d23d70a;
        DAT_02760c74._4_4_ = fVar57;
      }
    }
  }
  if (iVar22 == 1) {
    DAT_02760c18 = local_2d4;
    DAT_02760c20 = fVar20;
    DAT_02760c24 = local_320 / local_2d4;
    DAT_02760c1c = fVar74;
    DAT_02760c28._0_4_ = fVar59;
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760c18,9);
  uStack_1b4 = 0;
  fStack_1bc = 0.0;
  uStack_1b8 = 0;
  local_1c0 = *pfVar43;
  uVar40 = param_19;
  local_e8 = (float)FUN_0057bb40(param_18,param_9,iVar3,&local_1c0);
  fStack_e4 = (float)uVar40;
  local_e0 = fVar72;
  fStack_dc = fVar58;
  (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x134),&local_e8);
  local_e8 = 1.0;
  fStack_e4 = 1.0;
  local_e0 = 1.0;
  fStack_dc = 0.0;
  if ((bVar45 & 1) != 0) {
    fStack_dc = 0.0;
    fStack_e4 = 1.0;
    uVar54 = iVar21 - 6;
    if ((iVar21 == 0x10) || (uVar54 < 9)) {
      if (uVar54 < 9) {
        uVar51 = -(ulong)(uVar54 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar54 << 2;
        local_e8 = *(float *)(&DAT_01d98c20 + uVar51);
        fStack_e4 = *(float *)(&DAT_01d98c50 + uVar51);
        local_e0 = *(float *)(&DAT_01d98c80 + uVar51);
        fStack_dc = *(float *)(&DAT_01d98cb0 + uVar51);
        goto LAB_0057f8a4;
      }
      local_e8 = DAT_01d4c104;
    }
    else {
      local_e8 = 1.0;
    }
    local_e0 = 1.0;
  }
LAB_0057f8a4:
  (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x128),&local_e8);
  if (bVar19) {
    if (!bVar44) goto LAB_0057f94c;
    uVar54 = 6;
    if (!bVar17) {
      uVar54 = param_14;
    }
    uVar47 = uVar54 - 6;
    if ((uVar54 == 0x10) || (uVar47 < 9)) {
      if (8 < uVar47) {
        local_e8 = DAT_01d4c104;
        goto LAB_0057fa60;
      }
      uVar51 = -(ulong)(uVar47 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar47 << 2;
      local_e8 = *(float *)(&DAT_01d98b90 + uVar51);
      fStack_e4 = *(float *)(&DAT_01d98bc0 + uVar51);
      local_e0 = *(float *)(&DAT_01d98bf0 + uVar51);
      fStack_dc = *(float *)(&DAT_01d98cb0 + uVar51);
    }
    else {
      local_e8 = 1.0;
LAB_0057fa60:
      local_e0 = 1.0;
      fStack_e4 = 1.0;
      fStack_dc = 0.0;
    }
    if (bVar18) {
      local_e0 = local_e0 * DAT_01d4c570;
      fStack_e4 = powf((local_e8 + fStack_dc) / (local_e8 + 1.0),local_e0);
      fStack_e4 = fStack_e4 / local_e8;
    }
    (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x118),&local_e8);
    if (uVar12 < 9) goto LAB_0057f914;
LAB_0057fac8:
    local_e0 = 1.0;
    fStack_dc = 0.0;
    fStack_e4 = 1.0;
    local_e8 = DAT_01d4c104;
LAB_0057fadc:
    plVar41 = *(long **)(param_9 + 0x30);
    uVar40 = *(undefined4 *)(param_9 + 300);
    pcVar49 = *(code **)(*plVar41 + 0xa0);
    pfVar43 = &local_e8;
LAB_0057faf8:
    (*pcVar49)(plVar41,uVar40,pfVar43);
  }
  else {
    if (!(!bVar39 && !bVar37)) {
      if (8 < uVar12) goto LAB_0057fac8;
LAB_0057f914:
      uVar51 = -(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2;
      local_e8 = *(float *)(&DAT_01d98c20 + uVar51);
      fStack_e4 = *(float *)(&DAT_01d98c50 + uVar51);
      local_e0 = *(float *)(&DAT_01d98c80 + uVar51);
      fStack_dc = *(float *)(&DAT_01d98cb0 + uVar51);
      goto LAB_0057fadc;
    }
LAB_0057f94c:
    uVar12 = param_14 - 2;
    if (uVar12 < 3) {
      if (uVar12 < 3) {
        uVar51 = -(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2;
        uStack_1b4 = 0;
        local_e8 = *(float *)(&DAT_01d98cd4 + uVar51);
        fStack_e4 = *(float *)(&DAT_01d98ce0 + uVar51);
        local_e0 = *(float *)(&DAT_01d98cec + uVar51);
        fStack_dc = *(float *)(&DAT_01d98cf8 + uVar51);
        local_1c0 = *(float *)(&DAT_01d98d04 + uVar51);
        fStack_1bc = *(float *)(&DAT_01d98d10 + uVar51);
        uStack_1b8 = *(undefined4 *)(&DAT_01d98d1c + uVar51);
      }
      (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 300),&local_e8);
      plVar41 = *(long **)(param_9 + 0x30);
      uVar40 = *(undefined4 *)(param_9 + 0x114);
      pcVar49 = *(code **)(*plVar41 + 0xa0);
      pfVar43 = &local_1c0;
      goto LAB_0057faf8;
    }
  }
  local_158 = 0;
  local_160 = 0;
  local_168 = 0;
  local_170 = 0;
  local_178 = 0;
  local_180 = 0;
  uVar10 = *(undefined8 *)(param_20 + 6);
  uStack_1b0 = (undefined4)*(undefined8 *)(param_20 + 4);
  uVar28 = uStack_1b0;
  uStack_1ac = (undefined4)((ulong)*(undefined8 *)(param_20 + 4) >> 0x20);
  uVar29 = uStack_1ac;
  uStack_1b8 = (undefined4)*(undefined8 *)(param_20 + 2);
  uVar40 = uStack_1b8;
  uStack_1b4 = (undefined4)((ulong)*(undefined8 *)(param_20 + 2) >> 0x20);
  uVar76 = uStack_1b4;
  local_1c0 = (float)*(undefined8 *)param_20;
  fVar67 = local_1c0;
  fStack_1bc = (float)((ulong)*(undefined8 *)param_20 >> 0x20);
  fVar58 = fStack_1bc;
  uVar9 = *(undefined8 *)(param_20 + 8);
  local_198 = (undefined4)*(undefined8 *)(param_20 + 10);
  uVar30 = local_198;
  uStack_194 = (undefined4)((ulong)*(undefined8 *)(param_20 + 10) >> 0x20);
  uVar31 = uStack_194;
  local_188 = (undefined4)*(undefined8 *)(param_20 + 0xe);
  uVar34 = local_188;
  uStack_184 = (undefined4)((ulong)*(undefined8 *)(param_20 + 0xe) >> 0x20);
  uVar35 = uStack_184;
  local_190 = (undefined4)*(undefined8 *)(param_20 + 0xc);
  uVar32 = local_190;
  uStack_18c = (undefined4)((ulong)*(undefined8 *)(param_20 + 0xc) >> 0x20);
  uVar33 = uStack_18c;
  local_200 = 1.0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  fStack_1fc = 0.0;
  uStack_1f8 = 0;
  local_1ec = 0x3f800000;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1d8 = 0x3f800000;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  local_1c4 = 0x3f800000;
  local_1a8 = uVar10;
  local_1a0 = uVar9;
  if (iVar22 == 1) {
    local_1a8 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0x3f800000;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    local_1c0 = 1.0;
    fStack_1bc = 0.0;
    local_188 = 0;
    uStack_184 = 0x3f800000;
    local_190 = 0;
    uStack_18c = 0;
    local_198 = 0x3f800000;
    uStack_194 = 0;
    local_1a0 = 0;
    local_200 = fVar67;
    fStack_1fc = fVar58;
    uStack_1f8 = uVar40;
    uStack_1f4 = uVar76;
    uStack_1f0 = uVar28;
    local_1ec = uVar29;
    local_1e8 = uVar10;
    local_1e0 = uVar9;
    local_1d8 = uVar30;
    uStack_1d4 = uVar31;
    uStack_1d0 = uVar32;
    uStack_1cc = uVar33;
    uStack_1c8 = uVar34;
    local_1c4 = uVar35;
    local_e8 = fVar67;
    fStack_e4 = fVar58;
    local_e0 = (float)uVar40;
    fStack_dc = (float)uVar76;
    local_d8 = uVar28;
    uStack_d4 = uVar29;
    local_d0 = uVar10;
    local_c8 = uVar9;
    local_c0 = uVar30;
    uStack_bc = uVar31;
    local_b8 = uVar32;
    uStack_b4 = uVar33;
    local_b0 = uVar34;
    uStack_ac = uVar35;
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xc0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x13c),&local_1c0);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xc0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x138),&local_200);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xc0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x140),param_21);
  if (bVar19) {
    fStack_dc = 0.0;
    local_d8 = 0;
    fStack_e4 = 0.0;
    local_e0 = 0.0;
    local_d0 = 0;
    local_c8 = 0;
    uStack_b4 = 0;
    local_b0 = 0;
    uStack_bc = 0;
    local_b8 = 0;
    uStack_ac = 0x3f800000;
    local_c0 = 0x3f800000;
    uStack_d4 = 0x3f800000;
    local_e8 = 1.0;
    if (!bVar17) {
      if (param_14 == 0) {
        local_240 = DAT_01d4c6b8 / param_17;
        local_234 = 0;
        local_23c = 0;
        local_220 = 0;
        local_228 = 0;
        local_20c = 0;
        local_214 = 0;
        local_204 = 0x3f800000;
        local_22c = local_240;
        local_218 = local_240;
        FUN_00515cb0(&local_e8,&local_e8,&local_240);
      }
      FUN_00511040(auStack_260,0);
      FUN_00511240(&local_240,&local_108,auStack_260,0);
      FUN_00515cb0(&local_e8,&local_e8,&local_240);
    }
    (**(code **)(**(long **)(param_9 + 0x30) + 200))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x144),&local_e8,1);
    if (!(!bVar38 || (bVar14 & 1) != 0)) goto LAB_0057fd80;
LAB_0057fdd8:
    if (param_12 != (long *)0x0) goto LAB_0057fddc;
LAB_0057fdc0:
    uVar40 = 0xffffffff;
  }
  else {
    if (!(bVar38 && (bVar14 & 1) == 0)) goto LAB_0057fdd8;
LAB_0057fd80:
    local_e0 = 0.0;
    fStack_dc = 0.0;
    local_e8 = param_3;
    if (bVar16 != false) {
      local_e8 = param_3 * 0.5;
    }
    fStack_e4 = fVar78;
    (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xd4),&local_e8);
    if (param_12 == (long *)0x0) goto LAB_0057fdc0;
LAB_0057fddc:
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40),param_12);
    fVar67 = (float)NEON_ucvtf(*(undefined4 *)((long)param_12 + 0x4c));
    if (((fVar56 - param_5) * fVar67 == param_3) &&
       (fVar67 = (float)NEON_ucvtf((int)param_12[10]), (fVar56 - param_5) * fVar67 == fVar78)) {
      bVar45 = bVar16 ^ 1;
    }
    else {
      bVar45 = 0;
    }
    uVar40 = (**(code **)(*param_12 + 0x80))(param_12);
    (**(code **)(*param_12 + 0x88))(param_12,bVar45 | bVar24 & 1);
  }
  local_e8 = fVar71;
  if (fVar71 == DAT_01d4c5a8) {
    if ((param_14 | 1) == 0x11) {
      fVar67 = 0.003921569;
      if (param_14 != 0x10) {
        fVar67 = fVar71;
      }
      local_e8 = 0.0009775171;
      if (param_14 != 0x11) {
        local_e8 = fVar67;
      }
    }
    else {
      local_e8 = 0.00024420026;
      if (param_13 == 0) {
        local_e8 = fVar71;
      }
      if ((param_14 != 0xf) && (param_13 != 0)) {
        uVar12 = *(uint *)(param_13 + 0x44);
        if ((uVar12 < 0x3c) && ((1L << ((ulong)uVar12 & 0x3f) & 0xf80007800007800U) != 0)) {
          local_e8 = 1.5259022e-05;
        }
        else if ((uVar12 == 0) || ((uVar12 | 1) != 0x19)) {
          local_e8 = 0.003921569;
          switch(uVar12) {
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
            break;
          default:
            local_e8 = 0.032258064;
            if (1 < uVar12 - 0x55 || uVar12 == 0) {
              local_e8 = 0.0;
            }
          }
        }
        else {
          local_e8 = 0.0009775171;
        }
      }
    }
  }
  fStack_e4 = local_e8 / fVar77;
  plVar41 = *(long **)(param_9 + 0x29a70);
  local_e0 = -local_e8;
  fStack_dc = 0.0;
  if (local_e8 < 0.0) {
    local_e0 = local_e8 * -0.5;
    fStack_e4 = 0.0;
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x130),&local_e8);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x44),plVar41);
  (**(code **)(*plVar41 + 0x78))(plVar41,0xd);
  uVar76 = *(undefined4 *)((long)plVar41 + 0x4c);
  NEON_ucvtf((int)plVar41[10]);
  if ((bVar27 & 1) != 0) {
    if (plVar53 == (long *)0x0) {
      plVar53 = *(long **)(param_9 + 0x29a80);
    }
    (**(code **)(*plVar53 + 0x78))(plVar53,5);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x48),plVar53);
  }
  NEON_ucvtf(uVar76);
  local_2b4 = param_6;
  if (param_14 == 0xf) {
    if ((bVar27 & 1) == 0) {
      if ((bVar25 & 1) != 0) {
        param_4 = (ulong)(uint)(fVar78 - local_354);
        local_31c = local_354;
        local_2b4 = (local_30c - param_6) * local_358 + param_6;
      }
      uVar42 = uVar11;
    }
    else {
      param_4 = (ulong)(uint)local_354;
      local_30c = (local_30c - param_6) * local_358 + param_6;
      uVar42 = uVar11;
    }
  }
  if (uVar13 < 3) {
    bVar45 = iVar22 == 4 & (bVar27 ^ 1);
    fVar67 = param_5;
    if (bVar45 == 0 && bVar16 == false) {
      fVar58 = fVar56 * 0.5;
LAB_00580154:
      uVar51 = (ulong)(uint)fVar58;
    }
    else {
      if (bVar45 != 0) {
        fVar71 = (param_5 + fVar56) * 0.5;
        fVar67 = (fVar56 - param_5) * 0.5 * 0.5;
        fVar58 = fVar71 + fVar67;
        fVar67 = fVar71 - fVar67;
        goto LAB_00580154;
      }
      uVar51 = param_7;
    }
    FUN_00572010(param_1,local_31c,param_3 * 0.5,param_4,fVar67,local_2b4,uVar51,local_30c,param_9,
                 uVar11);
    DAT_02760c20 = fVar20;
    DAT_02760c24 = local_320 / local_2d4;
    DAT_02760c18 = local_2d4;
    DAT_02760c54._4_4_ = 0.0;
    DAT_02760c1c = fVar74;
    DAT_02760c28._0_4_ = fVar59;
    fVar67 = powf(fVar66,0.25);
    DAT_02760c5c._0_4_ = 1.0 / (1.0 - fVar67);
    DAT_02760c7c._0_4_ = 0x40800000;
    DAT_02760c7c._4_4_ = local_2d4;
    DAT_02760c84._0_4_ = 1.0;
    ram0x02760c60 = 0;
    DAT_02760c74._4_4_ = fVar57;
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760c18,7);
    local_1c0 = 1.0;
    uStack_1b4 = (undefined4)local_158;
    uStack_1b0 = (undefined4)((ulong)local_158 >> 0x20);
    fStack_1bc = (float)local_160;
    uStack_1b8 = (undefined4)((ulong)local_160 >> 0x20);
    local_1a0 = local_168;
    local_1a8 = local_170;
    uStack_1ac = 0x3f800000;
    local_198 = 0x3f800000;
    uStack_18c = (undefined4)local_178;
    local_188 = (undefined4)((ulong)local_178 >> 0x20);
    uStack_194 = (undefined4)local_180;
    local_190 = (undefined4)((ulong)local_180 >> 0x20);
    uStack_184 = 0x3f800000;
    local_1e8 = *(undefined8 *)(param_20 + 6);
    uStack_1f0 = (undefined4)*(undefined8 *)(param_20 + 4);
    local_1ec = (undefined4)((ulong)*(undefined8 *)(param_20 + 4) >> 0x20);
    uStack_1f8 = (undefined4)*(undefined8 *)(param_20 + 2);
    uStack_1f4 = (undefined4)((ulong)*(undefined8 *)(param_20 + 2) >> 0x20);
    local_200 = (float)*(undefined8 *)param_20;
    fStack_1fc = (float)((ulong)*(undefined8 *)param_20 >> 0x20);
    local_1e0 = *(undefined8 *)(param_20 + 8);
    uStack_1c8 = (undefined4)*(undefined8 *)(param_20 + 0xe);
    local_1c4 = (undefined4)((ulong)*(undefined8 *)(param_20 + 0xe) >> 0x20);
    uStack_1d0 = (undefined4)*(undefined8 *)(param_20 + 0xc);
    uStack_1cc = (undefined4)((ulong)*(undefined8 *)(param_20 + 0xc) >> 0x20);
    local_1d8 = (undefined4)*(undefined8 *)(param_20 + 10);
    uStack_1d4 = (undefined4)((ulong)*(undefined8 *)(param_20 + 10) >> 0x20);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xc0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x13c),&local_1c0);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xc0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x138),&local_200);
    if (bVar45 != 0 || bVar16 != false) {
      if (bVar45 != 0) {
        fVar58 = (param_5 + fVar56) * 0.5;
        fVar67 = (fVar56 - param_5) * 0.5 * 0.5;
        param_5 = fVar58 - fVar67;
        param_7 = (ulong)(uint)(fVar58 + fVar67);
      }
      uVar76 = FUN_00572010(param_3 * 0.5 + param_1,local_31c,param_3 * 0.5,param_4,param_5,
                            local_2b4,param_7,local_30c,param_9,uVar11);
      goto joined_r0x00580384;
    }
    param_5 = fVar56 * 0.5;
    param_3 = param_3 * 0.5;
    param_1 = param_3 + param_1;
    uVar42 = uVar11;
  }
  uVar76 = FUN_00572010(param_1,local_31c,param_3,param_4,param_5,local_2b4,param_7,local_30c,
                        param_9,uVar42);
joined_r0x00580384:
  if (param_12 != (long *)0x0) {
    (**(code **)(*param_12 + 0x78))(param_12,uVar40);
  }
  *(float *)(param_9 + 0x29b58) = fVar79;
  *(float *)(param_9 + 0x29b5c) = fVar61;
  *(float *)(param_9 + 0x29b60) = fVar62;
  *(float *)(param_9 + 0x29b64) = fVar77;
  if (bVar44) {
    *(float *)(param_9 + 0x29b5c) = fVar57 * fVar61;
    *(float *)(param_9 + 0x29b60) = fVar57 * fVar62;
  }
  return uVar76;
}


