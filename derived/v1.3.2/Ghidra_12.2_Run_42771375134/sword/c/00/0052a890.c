/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0052a890; name: FUN_0052a890
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0052a890(long param_1)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  char cVar9;
  undefined1 uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined2 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  char *pcVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  undefined8 in_stack_fffffffffffffdf8;
  undefined1 auStack_1ac [4];
  undefined1 auStack_1a8 [56];
  float local_170;
  float local_16c;
  float local_138;
  float local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  char local_11c [4];
  char local_118 [4];
  char local_114 [4];
  undefined1 auStack_110 [4];
  char local_10c [4];
  undefined1 auStack_108 [64];
  undefined1 auStack_c8 [72];
  
  *(undefined1 *)(param_1 + 0x106d) = *(undefined1 *)(param_1 + 0xc98);
  bVar4 = false;
  if (*(char *)(param_1 + 0xc70) == '\0') {
LAB_0052a978:
    *(bool *)(param_1 + 0x106e) = bVar4;
    if (*(float *)(param_1 + 0xec0) <= 0.0) goto LAB_0052a8f4;
LAB_0052a988:
    bVar4 = false;
    if (((0.0 < *(float *)(param_1 + 0xecc)) && (0.0 < *(float *)(param_1 + 0xed0))) &&
       (*(char *)(param_1 + 0xeb8) != '\0')) {
      bVar4 = *(char *)(param_1 + 0xeb8) != '\0' && *(char *)(param_1 + 0x8b6) == '\0';
    }
  }
  else {
    if (*(char *)(param_1 + 0x8b6) == '\0') {
      bVar4 = false;
      if ((*(char *)(param_1 + 0x1050) != '\0') &&
         ((*(char *)(param_1 + 0xc79) != '\0' ||
          (bVar4 = false, *(char *)(param_1 + 0x104f) != '\0')))) {
        iVar12 = *(int *)(param_1 + 0x5e0);
        if (iVar12 == -1) {
          iVar12 = *(int *)(*(long *)(param_1 + 400) + 0x90);
        }
        fVar22 = (float)NEON_ucvtf(*(undefined4 *)
                                    (*(long *)(*(long *)(*(long *)(param_1 + 400) + 0x38) +
                                              (long)iVar12 * 8) + 0x58));
        fVar22 = *(float *)(param_1 + 0x1070) * fVar22;
        if (*(char *)(param_1 + 0xc78) != '\0') {
          fVar22 = (fVar22 * DAT_01d4c400) / DAT_01d4bef0;
        }
        bVar4 = DAT_01d4c084 < fVar22;
      }
      goto LAB_0052a978;
    }
    *(undefined1 *)(param_1 + 0x106e) = 0;
    if (0.0 < *(float *)(param_1 + 0xec0)) goto LAB_0052a988;
LAB_0052a8f4:
    bVar4 = false;
  }
  *(bool *)(param_1 + 0x10de) = bVar4;
  cVar9 = *(char *)(param_1 + 0xf08);
  bVar4 = cVar9 != '\0';
  if (1.0 <= *(float *)(param_1 + 0xf14)) {
    if ((*(float *)(param_1 + 0xf18) != 1.0) && (cVar9 != '\0')) goto LAB_0052aa08;
    bVar5 = false;
    *(undefined1 *)(param_1 + 0x10df) = 0;
    if (*(float *)(param_1 + 0xf18) != 1.0) goto LAB_0052aa40;
LAB_0052aa3c:
    bVar4 = false;
  }
  else if (cVar9 == '\0') {
    bVar4 = false;
    *(undefined1 *)(param_1 + 0x10df) = 0;
    bVar5 = false;
  }
  else {
LAB_0052aa08:
    bVar5 = cVar9 != '\0' && *(char *)(param_1 + 0x8b6) == '\0';
    *(bool *)(param_1 + 0x10df) = bVar5;
    if ((1.0 <= *(float *)(param_1 + 0xf14)) && (*(float *)(param_1 + 0xf18) == 1.0))
    goto LAB_0052aa3c;
  }
LAB_0052aa40:
  pcVar21 = (char *)(param_1 + 0x10df);
  *(char *)(param_1 + 0x10e0) = bVar5 & bVar4 & *(int *)(param_1 + 0xf0c) == 2;
  bVar4 = false;
  if ((((*(char *)(param_1 + 0xc7a) != '\0') &&
       (bVar4 = *(char *)(param_1 + 0x8b6) != '\x01', *(float *)(param_1 + 0xc7c) == 0.0)) &&
      (*(float *)(param_1 + 0xc80) == 0.0)) && (*(float *)(param_1 + 0xc84) == 0.0)) {
    bVar4 = false;
  }
  *(bool *)(param_1 + 0x1074) = bVar4;
  if (*(char *)(param_1 + 0xc2c) == '\0') {
    bVar4 = false;
    *(undefined1 *)(param_1 + 0xc2d) = 0;
    *(undefined1 *)(param_1 + 0xc35) = 0;
  }
  else {
    bVar4 = *(char *)(param_1 + 0x8b6) == '\0';
    if (((*(float *)(param_1 + 0xc38) == 0.0) && (*(float *)(param_1 + 0xc3c) == 0.0)) &&
       ((*(float *)(param_1 + 0xc40) == 0.0 && (*(float *)(param_1 + 0xc44) == 0.0)))) {
      bVar4 = false;
    }
    *(bool *)(param_1 + 0xc2d) = bVar4;
    *(undefined1 *)(param_1 + 0xc35) = *(undefined1 *)(param_1 + 0xc34);
    if (bVar4) {
      bVar4 = *(char *)(param_1 + 0xc36) != '\0';
    }
    else {
      bVar4 = false;
    }
  }
  uVar6 = CONCAT71((int7)((ulong)in_stack_fffffffffffffdf8 >> 8),*(undefined1 *)(param_1 + 0xc6c));
  FUN_0055e950(*(undefined4 *)(param_1 + 0xc60),*(undefined4 *)(param_1 + 0xc64),
               *(undefined4 *)(param_1 + 0xc68),*(undefined8 *)(param_1 + 0x198),bVar4,
               *(undefined4 *)(param_1 + 0xc30),0,param_1 + 0xc38,param_1 + 0xc40,param_1 + 0xc48,
               param_1 + 0xc50,param_1 + 0xc58,uVar6);
  *(bool *)(param_1 + 0xc37) = bVar4;
  FUN_00529270(param_1);
  FUN_00529510(param_1);
  *(bool *)(param_1 + 0xf39) =
       *(char *)(param_1 + 0xf38) != '\0' && *(char *)(param_1 + 0x8b6) == '\0';
  FUN_00529860(param_1);
  bVar4 = *(char *)(param_1 + 0xbe4) != '\0';
  cVar9 = *(char *)(param_1 + 0x8b6);
  *(bool *)(param_1 + 0x10d5) = bVar4 && cVar9 == '\0';
  if (bVar4 && cVar9 == '\0') {
    bVar4 = true;
  }
  else {
    bVar4 = *(char *)(param_1 + 0xbec) != '\0';
  }
  *(char *)(param_1 + 0x10d4) = cVar9 == '\0' & bVar4;
  bVar4 = false;
  if (*(char *)(param_1 + 0x180) != '\0') {
    bVar4 = *(long *)(param_1 + 0x178) != 0;
  }
  bVar8 = cVar9 == '\0' & bVar4;
  if (((*(char *)(param_1 + 0x96c) != '\0') || (*(int *)PTR_DAT_02713a80 != 0)) &&
     ((*(char *)(param_1 + 0x96c) != '\0' && (*(int *)(param_1 + 0x970) != 0)))) {
    bVar8 = 0;
  }
  *(byte *)(param_1 + 0x10d6) = bVar8;
  if (*(int *)(param_1 + 0x58) == 8) {
    bVar4 = true;
    if (*(char *)(param_1 + 0x88) != '\0') goto LAB_0052ac5c;
LAB_0052ac90:
    bVar8 = 0;
  }
  else {
    bVar4 = *(long *)(param_1 + 0x50) != 0;
    if (*(char *)(param_1 + 0x88) == '\0') goto LAB_0052ac90;
LAB_0052ac5c:
    if (*(char *)(param_1 + 0x104f) == '\0') goto LAB_0052ac90;
    bVar8 = bVar4 & *(long *)(param_1 + 0x80) != 0;
  }
  *(byte *)(param_1 + 0x10d7) = bVar8;
  *(undefined1 *)(param_1 + 0x1028) = 0;
  if ((*(char *)(param_1 + 0x1029) == '\0') ||
     (((bVar4 = *(long *)(param_1 + 200) != 0, *(float *)(param_1 + 0x102c) == 0.0 &&
       (*(float *)(param_1 + 0x1030) == 0.0)) && (*(float *)(param_1 + 0x1034) == 0.0)))) {
    bVar4 = false;
  }
  *(undefined1 *)(param_1 + 0x1028) = bVar4;
  FUN_0055e9e0(*(undefined8 *)(param_1 + 0x198),bVar4);
  if (bVar4 != false) {
    FUN_0055e9d0(*(undefined8 *)(param_1 + 0x198),*(undefined8 *)(param_1 + 200));
    FUN_0055e9f0(*(undefined8 *)(param_1 + 0x198),param_1 + 0x102c,param_1 + 0x103c,param_1 + 0x1044
                );
  }
  FUN_00529a50(param_1);
  FUN_00511240(param_1 + 0x1094,param_1 + 0xb84,param_1 + 0xba4,*(undefined1 *)(param_1 + 0xbcc));
  *(undefined1 *)(param_1 + 0x1075) = 0;
  iVar12 = *(int *)(param_1 + 0x1078);
  *(undefined4 *)(param_1 + 0x1078) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x107c) = 0;
  *(undefined4 *)(param_1 + 0x108c) = 0;
  puVar3 = PTR_DAT_027139b0;
  if (((*(float *)(param_1 + 0xcf0) <= 0.0) || (*(float *)(param_1 + 0xcf4) <= 0.0)) ||
     ((*(char *)(param_1 + 0xce5) == '\0' || (*(char *)(param_1 + 0x8b6) != '\0')))) {
    *(undefined2 *)(param_1 + 0x1080) = 0;
LAB_0052ad8c:
    cVar9 = *pcVar21;
  }
  else {
    iVar13 = *(int *)PTR_DAT_027139b0;
    if (iVar13 < 1) {
      plVar15 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                     "../src/GPU\\GPUClassUtil.h",0x49,0);
      FUN_0056dc10(plVar15,0);
      *(long **)PTR_DAT_027139b8 = plVar15;
      *(undefined4 *)puVar3 = 1;
      if (plVar15 != (long *)0x0) goto LAB_0052b1bc;
LAB_0052b280:
      iVar13 = 0;
    }
    else {
      plVar15 = *(long **)PTR_DAT_027139b8;
      *(int *)PTR_DAT_027139b0 = iVar13 + 1;
      if (iVar13 + 1 < 2) {
        if (plVar15 == (long *)0x0) goto LAB_0052b280;
LAB_0052b1bc:
        uVar17 = *(undefined8 *)PTR_PTR_02713988;
        (**(code **)(*plVar15 + 0x20))(plVar15);
        FUN_005b9b10(uVar17,plVar15);
        iVar13 = 0;
        *(undefined8 *)PTR_DAT_027139b8 = 0;
      }
    }
    *(int *)puVar3 = iVar13;
    FUN_00570910(plVar15,*(undefined4 *)(param_1 + 0xcf8));
    uVar27 = 1;
    if (*(char *)(param_1 + 0xcec) == '\0') {
      uVar27 = 2;
    }
    *(undefined4 *)(plVar15 + 0x534d) = uVar27;
    fVar24 = *(float *)(param_1 + 0x6c4);
    fVar22 = fVar24 * *(float *)(param_1 + 0x6d0);
    fVar25 = fVar24 * *(float *)(param_1 + 0x6d0) * *(float *)(param_1 + 0x420);
    fVar26 = *(float *)(param_1 + 0x6d4) * fVar25;
    fVar23 = fVar22 * *(float *)(param_1 + 0x6d8);
    FUN_0050f980(fVar26 - fVar25,fVar25 + fVar26,fVar23 - fVar22,fVar22 + fVar23,fVar24,
                 *(undefined4 *)(param_1 + 0x6c8),auStack_c8,0,1);
    fVar24 = *(float *)(param_1 + 0x6c4);
    fVar25 = fVar24 * *(float *)(param_1 + 0x6e8) * *(float *)(param_1 + 0x420);
    fVar22 = fVar24 * *(float *)(param_1 + 0x6e8);
    fVar26 = *(float *)(param_1 + 0x6ec) * fVar25;
    fVar23 = fVar22 * *(float *)(param_1 + 0x6f0);
    FUN_0050f980(fVar26 - fVar25,fVar25 + fVar26,fVar23 - fVar22,fVar22 + fVar23,fVar24,
                 *(undefined4 *)(param_1 + 0x6c8),auStack_108,0,1);
    FUN_0052a640(param_1,local_10c,auStack_110,local_114,local_118,local_11c);
    if (iVar12 != 2) {
      local_10c[0] = '\0';
    }
    uVar28 = *(undefined4 *)(param_1 + 0xcf0);
    uVar27 = *(undefined4 *)(param_1 + 0xcf4);
    uVar1 = *(uint *)(param_1 + 0xcfc);
    if ((*(int *)(param_1 + 0xce8) == 2) && (*(long *)(param_1 + 0xd38) == 0)) {
      if ((*(char *)(param_1 + 0x1bd) == '\0') &&
         ((*(int *)PTR_DAT_02713970 != 0 && (*(int *)PTR_DAT_02713980 != 0)))) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x392f)
        ;
        FUN_00517ae0(
                    "CPostEffect::GetMaxMotionBlurCameraRecurrences():\n\tFor using PFXMB_VELOCITYBASE at SetMotionBlurMode() and\n\tPFXVS_AUTOGEN or PFXVS_AUTOGEN_APPOVERWRITE at SetMotionBlurVelocitySource(),\n\tPFXINIT_MOTIONBLUR_INTERNALVELOCITYTEXTURE must be set at Initialize().\n"
                    );
      }
      iVar13 = *(int *)(param_1 + 0x444) - (uint)(*(long *)(param_1 + 0x1d8) == 0);
      if (iVar13 < 1) goto LAB_0052b440;
LAB_0052b3a4:
      uVar16 = uVar1;
      if (iVar13 == 1) {
        uVar16 = 2;
        goto LAB_0052b444;
      }
    }
    else {
      iVar13 = *(int *)(param_1 + 0x444);
      if (0 < iVar13) goto LAB_0052b3a4;
LAB_0052b440:
      uVar16 = 0;
LAB_0052b444:
      if (uVar1 <= uVar16) {
        uVar16 = uVar1;
      }
    }
    uVar29 = *(undefined4 *)(param_1 + 0xd00);
    iVar13 = *(int *)(param_1 + 0x5e0);
    lVar14 = *(long *)(param_1 + 400);
    if (iVar13 == -1) {
      iVar13 = *(int *)(lVar14 + 0x90);
      if (*(int *)(lVar14 + 0x30) <= iVar13) goto LAB_0052b488;
LAB_0052b46c:
      lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + (long)iVar13 * 8);
    }
    else {
      if (iVar13 < *(int *)(lVar14 + 0x30)) goto LAB_0052b46c;
LAB_0052b488:
      lVar14 = 0;
    }
    puVar19 = (undefined8 *)(param_1 + 0x1084);
    local_120 = 0;
    local_128 = 0;
    *puVar19 = 0;
    if (((*(char *)(param_1 + 0xce5) == '\0') || (1 < *(int *)(param_1 + 0xce8) - 1U)) ||
       (uVar7 = FUN_00562390(*(undefined4 *)(param_1 + 0x6c4),*(undefined4 *)(param_1 + 0x6c8),
                             *(undefined4 *)(param_1 + 0xd10),*(undefined4 *)(param_1 + 0xd14)),
       (uVar7 & 1) == 0)) {
      puVar19 = (undefined8 *)0x0;
      if (iVar12 == 2) goto LAB_0052b580;
LAB_0052b5b8:
      if (iVar12 == 1) {
        if (local_114[0] == '\0' && local_118[0] == '\0') goto LAB_0052b8cc;
        local_130 = 0x3f8000003f800000;
        FUN_00583080(uVar28,uVar27,uVar29,plVar15,lVar14,param_1 + 0x6f4,param_1 + 0x774,auStack_c8,
                     auStack_108,puVar19,uVar16,&local_130,uVar6 & 0xffffffff00000000,&local_120,
                     (long)&local_128 + 4,&local_128,&local_134,&local_138,&local_170,auStack_1a8);
        fVar22 = 0.0;
        if (local_128._4_4_ < 1) {
          local_134 = 0.0;
        }
        uVar27 = *(undefined4 *)(lVar14 + 0x58);
        bVar4 = true;
      }
      else if (iVar12 == 0) {
        if (local_118[0] == '\0') goto LAB_0052b8cc;
        local_130 = 0x3f8000003f800000;
        FUN_00582e20(uVar28,uVar27,uVar29,plVar15,lVar14,param_1 + 0x6f4,param_1 + 0x774,auStack_c8,
                     uVar16,&local_130,0,&local_120,(long)&local_128 + 4,&local_128,&local_170,
                     auStack_1a8);
        local_170 = *(float *)(param_1 + 0x420) * local_170;
        if (local_128._4_4_ < 1) {
          local_134 = 0.0;
        }
        else {
          fVar22 = local_170 * local_170 + local_16c * local_16c;
          local_134 = fVar22;
          if (((fVar22 != 0.0) && (fVar22 != 1.0)) && (local_134 = SQRT(fVar22), NAN(local_134))) {
            local_134 = sqrtf(fVar22);
          }
        }
        fVar22 = 0.0;
        uVar27 = *(undefined4 *)(lVar14 + 0x58);
        bVar4 = true;
      }
      else {
        fVar22 = 0.0;
        local_134 = 0.0;
        uVar27 = *(undefined4 *)(lVar14 + 0x58);
joined_r0x0052b740:
        bVar4 = true;
        if ((iVar12 == 2) && (bVar4 = true, *(char *)(param_1 + 0xd0c) == '\0')) {
          bVar4 = *(int *)(param_1 + 0xd2c) == 0;
        }
      }
      if ((local_128._4_4_ != 0) &&
         (((!bVar4 ||
           (fVar23 = (float)NEON_ucvtf(uVar27), *(float *)(param_1 + 0xd04) < local_134 / fVar23))
          || (local_10c[0] != '\0')))) {
        *(undefined1 *)(param_1 + 0x1075) = 1;
        *(int *)(param_1 + 0x1078) = iVar12;
        *(int *)(param_1 + 0x107c) = local_128._4_4_;
        *(float *)(param_1 + 0x108c) = fVar22;
      }
    }
    else {
      fVar23 = *(float *)(param_1 + 0x6c8);
      fVar24 = *(float *)(param_1 + 0x6c4);
      fVar25 = fVar23 - fVar24;
      fVar26 = (fVar25 * *(float *)(param_1 + 0x1064)) / (fVar23 * fVar24);
      fVar30 = 1.0 / fVar26;
      fVar22 = ((fVar23 * (*(float *)(param_1 + 0xd14) - fVar24)) / fVar25) /
               *(float *)(param_1 + 0xd14);
      fVar23 = 1.0 / (((fVar23 * (*(float *)(param_1 + 0xd10) - fVar24)) / fVar25) /
                      *(float *)(param_1 + 0xd10) - fVar22);
      *(float *)(param_1 + 0x1088) =
           ((*(float *)(param_1 + 0x105c) * 0.0 + *(float *)(param_1 + 0x1060)) * fVar30 -
           (1.0 - *(float *)(param_1 + 0x1064) / fVar24) / fVar26) * fVar23 +
           (0.0 - fVar22 * fVar23);
      *(float *)(param_1 + 0x1084) = *(float *)(param_1 + 0x105c) * fVar30 * fVar23;
      if (iVar12 != 2) goto LAB_0052b5b8;
LAB_0052b580:
      if ((local_11c[0] != '\0') || (*(uint *)(param_1 + 0xd2c) != 0)) {
        if (*(uint *)(param_1 + 0xd2c) < 2) {
          bVar4 = false;
          lVar11 = *(long *)(param_1 + 0x1e8);
        }
        else {
          bVar4 = *(char *)(param_1 + 0xd40) != '\0';
          lVar11 = *(long *)(param_1 + 0x1e8);
        }
        lVar20 = lVar14;
        if (lVar11 != 0) {
          if (*(int *)(lVar11 + 0x30) < 1) {
            lVar20 = 0;
          }
          else {
            lVar20 = **(long **)(lVar11 + 0x38);
          }
        }
        local_130 = 0x3f8000003f800000;
        FUN_00583f00(uVar28,uVar27,uVar29,plVar15,lVar20,param_1 + 0x6f4,param_1 + 0x774,auStack_c8,
                     auStack_108,bVar4,uVar16,&local_130,uVar6 & 0xffffffff00000000,&local_120,
                     (long)&local_128 + 4,&local_128,&local_134,&local_138,auStack_1ac,&local_170,
                     auStack_1a8);
        fVar22 = 0.0;
        if (local_128._4_4_ < 1) {
          local_138 = 0.0;
        }
        else {
          fVar22 = (float)NEON_ucvtf(*(undefined4 *)(lVar20 + 0x58));
          fVar22 = local_134 / fVar22;
        }
        uVar27 = *(undefined4 *)(lVar14 + 0x58);
        local_134 = local_138;
        goto joined_r0x0052b740;
      }
    }
LAB_0052b8cc:
    puVar18 = (undefined2 *)(param_1 + 0x1080);
    *puVar18 = 0;
    if (*(char *)(param_1 + 0x1075) == '\0') goto LAB_0052ad8c;
    if (1 < *(int *)(param_1 + 0x1078)) {
      *(undefined1 *)(param_1 + 0x1081) = 1;
      *(undefined1 *)puVar18 = 1;
    }
    if (((*(char *)(param_1 + 0xce5) == '\0') || (1 < *(int *)(param_1 + 0xce8) - 1U)) ||
       (uVar6 = FUN_00562390(*(undefined4 *)(param_1 + 0x6c4),*(undefined4 *)(param_1 + 0x6c8),
                             *(undefined4 *)(param_1 + 0xd10),*(undefined4 *)(param_1 + 0xd14)),
       (uVar6 & 1) == 0)) goto LAB_0052ad8c;
    *(undefined1 *)puVar18 = 1;
    cVar9 = *pcVar21;
  }
  if ((cVar9 != '\0') && (*(int *)(param_1 + 0xf0c) - 1U < 2)) {
    fVar22 = *(float *)(param_1 + 0x108c);
    if (*(float *)(param_1 + 0x108c) <= *(float *)(param_1 + 0xf1c)) {
      fVar22 = *(float *)(param_1 + 0xf1c);
    }
    *(float *)(param_1 + 0x108c) = fVar22;
  }
  if ((*(char *)(param_1 + 0x59d) != '\0') && ((*(uint *)(param_1 + 0x8c8) & 0xffff0000) == 0x70000)
     ) {
    *(undefined1 *)(param_1 + 0x104f) = 0;
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    bVar4 = *(char *)(param_1 + 0x548) != '\0';
    if (*(char *)(param_1 + 0x1080) == '\0') goto LAB_0052adf4;
LAB_0052ae90:
    bVar4 = true;
    *(undefined1 *)(param_1 + 0x10d8) = 1;
    cVar9 = *(char *)(param_1 + 0x10de);
  }
  else {
    bVar4 = true;
    if (*(char *)(param_1 + 0x1080) != '\0') goto LAB_0052ae90;
LAB_0052adf4:
    if ((((*(char *)(param_1 + 0x1090) != '\0') || (*(char *)(param_1 + 0xc6d) != '\0')) ||
        ((*(char *)(param_1 + 0xc6e) != '\0' && (*(char *)(param_1 + 0xc6f) != '\0')))) ||
       (((*(char *)(param_1 + 0xf38) != '\0' &&
         (uVar6 = FUN_00562390(*(undefined4 *)(param_1 + 0x6c4),*(undefined4 *)(param_1 + 0x6c8),
                               *(undefined4 *)(param_1 + 0xf3c),*(undefined4 *)(param_1 + 0xf40)),
         (uVar6 & 1) != 0)) || (cVar9 = *(char *)(param_1 + 0x10de), !(bool)(bVar4 | cVar9 == '\0'))
        ))) goto LAB_0052ae90;
    bVar4 = (bool)(*(char *)(param_1 + 0x10e0) != '\0' & (bVar4 ^ 1U));
    *(bool *)(param_1 + 0x10d8) = bVar4;
    if (bVar4) {
      bVar4 = true;
    }
    else {
      bVar4 = *(char *)(param_1 + 0x104f) != '\0';
    }
  }
  *(bool *)(param_1 + 0x10d9) = bVar4;
  *(char *)(param_1 + 0x10dc) = cVar9;
  if (*(char *)(param_1 + 0x1081) == '\0') {
    bVar5 = false;
    if (*pcVar21 != '\0') {
      bVar5 = *(int *)(param_1 + 0xf0c) - 1U < 2;
    }
  }
  else {
    bVar5 = true;
  }
  *(bool *)(param_1 + 0x10da) = bVar5;
  *(undefined1 *)(param_1 + 0x10db) = 0;
  *(undefined8 *)(param_1 + 0xd64) = *(undefined8 *)(param_1 + 0xd18);
  iVar12 = *(int *)(param_1 + 0xd2c);
  *(undefined4 *)(param_1 + 0xd6c) = 0xffffffff;
  if (iVar12 == 2) {
    if (*(long *)(param_1 + 0xd38) == 0) goto LAB_0052af70;
    *(undefined1 *)(param_1 + 0x10db) = 1;
    *(undefined4 *)(param_1 + 0xd6c) = *(undefined4 *)(param_1 + 0xd30);
    *(undefined8 *)(param_1 + 0xd78) = 0;
    *(undefined8 *)(param_1 + 0xd70) = 0;
    if (bVar5 != false) goto LAB_0052af24;
LAB_0052af7c:
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(bool *)(param_1 + 0x1051) = bVar4;
joined_r0x0052af84:
    if (bVar4) goto LAB_0052af88;
LAB_0052b054:
    bVar5 = false;
    cVar2 = *(char *)(param_1 + 9);
  }
  else {
    if ((iVar12 == 0) && (fVar22 = *(float *)(param_1 + 0x108c), 0.0 < fVar22)) {
      *(float *)(param_1 + 0xd64) = fVar22;
      *(float *)(param_1 + 0xd68) = fVar22;
    }
LAB_0052af70:
    *(undefined8 *)(param_1 + 0xd78) = 0;
    *(undefined8 *)(param_1 + 0xd70) = 0;
    if (bVar5 == false) goto LAB_0052af7c;
LAB_0052af24:
    lVar14 = *(long *)(param_1 + 0xd38);
    plVar15 = (long *)(param_1 + 0xd70);
    if (lVar14 == 0) {
      if (*(long *)(param_1 + 0x1d8) == 0) {
        iVar12 = *(int *)(param_1 + 0x624);
        lVar14 = *(long *)(param_1 + 400);
        if (iVar12 == -1) {
          iVar12 = *(int *)(lVar14 + 0x90);
        }
        if (iVar12 < *(int *)(lVar14 + 0x30)) {
          *plVar15 = *(long *)(*(long *)(lVar14 + 0x38) + (long)iVar12 * 8);
          *(undefined8 *)(param_1 + 0xd0) = 0;
          *(bool *)(param_1 + 0x1051) = bVar4;
        }
        else {
          *plVar15 = 0;
          *(undefined8 *)(param_1 + 0xd0) = 0;
          *(bool *)(param_1 + 0x1051) = bVar4;
        }
        goto joined_r0x0052b180;
      }
      *plVar15 = *(long *)(param_1 + 0x1d8);
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(bool *)(param_1 + 0x1051) = bVar4;
      goto joined_r0x0052af84;
    }
    if (iVar12 != 0) {
      if (iVar12 != 1) {
        *plVar15 = lVar14;
        *(undefined8 *)(param_1 + 0xd0) = 0;
        *(bool *)(param_1 + 0x1051) = bVar4;
        goto joined_r0x0052b180;
      }
      *(long *)(param_1 + 0xd78) = lVar14;
    }
    *(undefined8 *)(param_1 + 0xd70) = *(undefined8 *)(param_1 + 0x1d8);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(bool *)(param_1 + 0x1051) = bVar4;
joined_r0x0052b180:
    if (!bVar4) goto LAB_0052b054;
LAB_0052af88:
    bVar5 = *(int *)(param_1 + 0x58) != 8;
    if (bVar5) {
      *(undefined1 *)(param_1 + 0x1051) = 0;
      lVar14 = *(long *)(param_1 + 0x50);
    }
    else {
      lVar14 = *(long *)(param_1 + 0x50);
    }
    if (lVar14 != 0) {
      *(undefined1 *)(param_1 + 0x1051) = 0;
    }
    bVar5 = lVar14 == 0 && !bVar5;
    cVar2 = *(char *)(param_1 + 9);
  }
  if (((cVar2 == '\0') && (bVar5)) &&
     ((*(long *)(param_1 + 0x70) != 0 && (*(int *)(param_1 + 0x58) == 8)))) {
    if (*(int *)PTR_DAT_02713970 == 0) {
      return 0xffffffff;
    }
    if (*(int *)PTR_DAT_02713980 == 0) {
      return 0xffffffff;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x52de);
    FUN_00517ae0(
                "CPostEffect::UpdateParameters_Base(): If SetEffectSource() is called, depth texture cannot be used as dpeth factor source.\n"
                );
    return 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x10dd) = 0;
  *(undefined2 *)(param_1 + 0x1052) = 0;
  if (((!bVar4) || (bVar5)) || (*(long *)(param_1 + 0x50) != 0)) {
    if (*(char *)(param_1 + 0x104f) == '\0' && cVar9 == '\0') goto LAB_0052b08c;
  }
  else {
    *(undefined2 *)(param_1 + 0x1052) = 0x101;
    if (*(char *)(param_1 + 0x104f) == '\0' && cVar9 == '\0') {
LAB_0052b08c:
      if (((*(char *)(param_1 + 0xf39) == '\0') && (*pcVar21 == '\0')) &&
         ((((*(char *)(param_1 + 0xc2d) == '\0' &&
            ((*(char *)(param_1 + 0xc35) == '\0' && (*(char *)(param_1 + 0x10d5) == '\0')))) &&
           (*(char *)(param_1 + 0x106e) == '\0')) &&
          ((*(char *)(param_1 + 0x1074) == '\0' && (*(char *)(param_1 + 0x1075) == '\0')))))) {
        *(undefined1 *)(param_1 + 0x1068) = *(undefined1 *)(param_1 + 0x1090);
        goto joined_r0x0052b108;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x1068) = 1;
joined_r0x0052b108:
  if ((((bVar5) || (*(char *)(param_1 + 0x104c) != '\0')) ||
      ((cVar9 != '\0' && ((*(long *)(param_1 + 0x50) == 0 && (*(char *)(param_1 + 0x548) != '\0'))))
      )) || ((*(char *)(param_1 + 0x10e0) != '\0' &&
             ((*(long *)(param_1 + 0x50) == 0 && (*(char *)(param_1 + 0x548) != '\0')))))) {
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  *(undefined1 *)(param_1 + 0x1069) = uVar10;
  return 0;
}


