/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00533500; name: FUN_00533500
 */


undefined8 FUN_00533500(long param_1)

{
  float *pfVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  undefined8 uVar16;
  bool bVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float *pfVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined8 in_stack_fffffffffffffde0;
  undefined4 uVar32;
  undefined8 in_stack_fffffffffffffde8;
  float *in_stack_fffffffffffffdf0;
  ulong in_stack_fffffffffffffdf8;
  undefined4 uVar33;
  ulong in_stack_fffffffffffffe08;
  long local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  float local_138 [3];
  undefined4 uStack_12c;
  undefined1 auStack_128 [64];
  undefined1 auStack_e8 [64];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  
  puVar2 = PTR_DAT_027139b0;
  uVar32 = (undefined4)((ulong)in_stack_fffffffffffffde0 >> 0x20);
  uVar7 = (uint)((ulong)in_stack_fffffffffffffde8 >> 0x20);
  if (*(char *)(param_1 + 0x1075) == '\0') {
    return 0;
  }
  iVar11 = *(int *)PTR_DAT_027139b0;
  if (iVar11 < 1) {
    plVar14 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar14,0);
    *(long **)PTR_DAT_027139b8 = plVar14;
    *(undefined4 *)puVar2 = 1;
    if (plVar14 != (long *)0x0) goto LAB_00533570;
LAB_005335f8:
    iVar11 = 0;
  }
  else {
    plVar14 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar11 + 1;
    if (iVar11 + 1 < 2) {
      if (plVar14 == (long *)0x0) goto LAB_005335f8;
LAB_00533570:
      uVar16 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar14 + 0x20))(plVar14);
      FUN_005b9b10(uVar16,plVar14);
      iVar11 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *(int *)puVar2 = iVar11;
  FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
  FUN_005a60a0(*(undefined8 *)(param_1 + 400),1,0x7fffffff);
  fVar26 = *(float *)(param_1 + 0x6c4);
  fVar27 = fVar26 * *(float *)(param_1 + 0x6d0) * *(float *)(param_1 + 0x420);
  fVar22 = fVar26 * *(float *)(param_1 + 0x6d0);
  fVar28 = *(float *)(param_1 + 0x6d4) * fVar27;
  fVar25 = fVar22 * *(float *)(param_1 + 0x6d8);
  FUN_0050f980(fVar28 - fVar27,fVar27 + fVar28,fVar25 - fVar22,fVar22 + fVar25,fVar26,
               *(undefined4 *)(param_1 + 0x6c8),auStack_e8,0,1);
  fVar26 = *(float *)(param_1 + 0x6c4);
  fVar27 = fVar26 * *(float *)(param_1 + 0x6e8) * *(float *)(param_1 + 0x420);
  fVar22 = fVar26 * *(float *)(param_1 + 0x6e8);
  fVar28 = *(float *)(param_1 + 0x6ec) * fVar27;
  fVar25 = fVar22 * *(float *)(param_1 + 0x6f0);
  FUN_0050f980(fVar28 - fVar27,fVar27 + fVar28,fVar25 - fVar22,fVar22 + fVar25,fVar26,
               *(undefined4 *)(param_1 + 0x6c8),auStack_128,0,1);
  uVar30 = *(undefined4 *)(param_1 + 0xcf0);
  uVar29 = *(undefined4 *)(param_1 + 0xcf4);
  uVar6 = *(uint *)(param_1 + 0xcfc);
  if ((*(int *)(param_1 + 0xce8) == 2) && (*(long *)(param_1 + 0xd38) == 0)) {
    if ((*(char *)(param_1 + 0x1bd) == '\0') &&
       ((*(int *)PTR_DAT_02713970 != 0 && (*(int *)PTR_DAT_02713980 != 0)))) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x392f);
      FUN_00517ae0(
                  "CPostEffect::GetMaxMotionBlurCameraRecurrences():\n\tFor using PFXMB_VELOCITYBASE at SetMotionBlurMode() and\n\tPFXVS_AUTOGEN or PFXVS_AUTOGEN_APPOVERWRITE at SetMotionBlurVelocitySource(),\n\tPFXINIT_MOTIONBLUR_INTERNALVELOCITYTEXTURE must be set at Initialize().\n"
                  );
    }
    iVar11 = *(int *)(param_1 + 0x444) - (uint)(*(long *)(param_1 + 0x1d8) == 0);
    if (iVar11 < 1) goto LAB_00533778;
LAB_0053370c:
    uVar15 = uVar6;
    if (iVar11 == 1) {
      uVar15 = 2;
      goto LAB_0053377c;
    }
  }
  else {
    iVar11 = *(int *)(param_1 + 0x444);
    if (0 < iVar11) goto LAB_0053370c;
LAB_00533778:
    uVar15 = 0;
LAB_0053377c:
    if (uVar6 <= uVar15) {
      uVar15 = uVar6;
    }
  }
  uVar31 = *(undefined4 *)(param_1 + 0xd00);
  iVar11 = *(int *)(param_1 + 0x618);
  lVar9 = *(long *)(param_1 + 400);
  if (iVar11 == -1) {
    iVar11 = *(int *)(lVar9 + 0x90);
    iVar10 = *(int *)(lVar9 + 0x30);
    if (iVar11 < iVar10) goto LAB_005337a4;
LAB_005338ec:
    lVar18 = 0;
    iVar11 = *(int *)(param_1 + 0x620);
    if (iVar11 != -1) goto LAB_005337b8;
LAB_005338fc:
    iVar11 = *(int *)(lVar9 + 0x90);
    if (iVar11 < iVar10) goto LAB_005337c0;
LAB_00533908:
    uVar16 = 0;
    iVar11 = *(int *)(param_1 + 0x61c);
    if (iVar11 != -1) goto LAB_005337d4;
LAB_00533918:
    iVar11 = *(int *)(lVar9 + 0x90);
    if (iVar11 < iVar10) goto LAB_005337dc;
LAB_00533924:
    uVar19 = 0;
    if (*(char *)(param_1 + 0xce5) == '\0') goto LAB_00533930;
LAB_005337ec:
    if (1 < *(int *)(param_1 + 0xce8) - 1U) goto LAB_00533930;
    uVar6 = FUN_00562390(*(undefined4 *)(param_1 + 0x6c4),*(undefined4 *)(param_1 + 0x6c8),
                         *(undefined4 *)(param_1 + 0xd10),*(undefined4 *)(param_1 + 0xd14));
    pfVar21 = (float *)(param_1 + 0x1084);
    if ((uVar6 & 1) == 0) {
      pfVar21 = (float *)0x0;
    }
    iVar11 = *(int *)(param_1 + 0x1078);
  }
  else {
    iVar10 = *(int *)(lVar9 + 0x30);
    if (iVar10 <= iVar11) goto LAB_005338ec;
LAB_005337a4:
    lVar18 = *(long *)(*(long *)(lVar9 + 0x38) + (long)iVar11 * 8);
    iVar11 = *(int *)(param_1 + 0x620);
    if (iVar11 == -1) goto LAB_005338fc;
LAB_005337b8:
    if (iVar10 <= iVar11) goto LAB_00533908;
LAB_005337c0:
    uVar16 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + (long)iVar11 * 8);
    iVar11 = *(int *)(param_1 + 0x61c);
    if (iVar11 == -1) goto LAB_00533918;
LAB_005337d4:
    if (iVar10 <= iVar11) goto LAB_00533924;
LAB_005337dc:
    uVar19 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + (long)iVar11 * 8);
    if (*(char *)(param_1 + 0xce5) != '\0') goto LAB_005337ec;
LAB_00533930:
    uVar6 = 0;
    pfVar21 = (float *)0x0;
    iVar11 = *(int *)(param_1 + 0x1078);
  }
  if (iVar11 != 2) {
    if (iVar11 == 1) {
      local_88 = 0x3f8000003f800000;
      local_a8 = 0x3f8000003f800000;
      uStack_a0 = 0x3f8000003f800000;
      FUN_00584670(uVar30,uVar29,uVar31,plVar14,lVar18,uVar16,uVar19,param_1 + 0x6f4,param_1 + 0x774
                   ,auStack_e8,auStack_128,pfVar21,CONCAT44(uVar7,uVar15),&local_88,
                   in_stack_fffffffffffffdf8 & 0xffffffff00000000,&local_a8,
                   in_stack_fffffffffffffe08 & 0xffffffffffffff00);
      return 0;
    }
    if (iVar11 == 0) {
      local_88 = 0x3f8000003f800000;
      local_a8 = 0x3f8000003f800000;
      uStack_a0 = 0x3f8000003f800000;
      FUN_00582fc0(uVar30,uVar29,uVar31,plVar14,lVar18,uVar16,uVar19,param_1 + 0x6f4,param_1 + 0x774
                   ,auStack_e8,uVar15,&local_88,(ulong)uVar7 << 0x20,&local_a8,
                   in_stack_fffffffffffffdf8 & 0xffffffffffffff00);
      return 0;
    }
    return 0;
  }
  uVar33 = (undefined4)(in_stack_fffffffffffffdf8 >> 0x20);
  FUN_0052bec0(param_1);
  lVar9 = *(long *)(param_1 + 0x50);
  bVar3 = *(int *)(param_1 + 0x58) == 8;
  bVar5 = !bVar3 && lVar9 == 0;
  if (bVar3) {
    local_158 = *(long *)(*(long *)(param_1 + 400) +
                          (long)*(int *)(*(long *)(param_1 + 400) + 0x94) * 8 + 0x80);
    lVar13 = local_158;
    do {
      lVar12 = lVar13;
      lVar13 = *(long *)(lVar12 + 0x120);
    } while (lVar13 != 0);
    bVar3 = *(int *)(*(long *)(lVar12 + 0xa8) + 0x54) == 0;
    bVar5 = bVar5 || !bVar3;
    if (!bVar3) {
      local_158 = lVar18;
    }
joined_r0x00533a1c:
    if (lVar9 == 0) {
      uVar23 = 0x3f800000;
      uVar24 = 0;
    }
    else {
      uVar23 = *(undefined4 *)(param_1 + 0x60);
      uVar24 = *(undefined4 *)(param_1 + 100);
    }
    if (bVar3) {
      bVar4 = *(char *)(param_1 + 0x1014) != '\0';
      if (bVar4) {
        uVar24 = 0x3f800000;
      }
      uVar8 = 0;
      bVar17 = true;
      bVar3 = bVar5;
      if (bVar4) {
        uVar23 = 0xbf800000;
      }
    }
    else {
      if (bVar5) {
        bVar5 = true;
        goto LAB_00533a80;
      }
      bVar17 = false;
      uVar8 = 6;
      bVar5 = false;
      bVar3 = false;
    }
  }
  else {
    if (bVar3 || lVar9 != 0) {
      bVar3 = false;
      local_158 = lVar9;
      goto joined_r0x00533a1c;
    }
    iVar11 = *(int *)(param_1 + 0x5e0);
    lVar9 = *(long *)(param_1 + 400);
    if (iVar11 == -1) {
      iVar11 = *(int *)(lVar9 + 0x90);
    }
    if (iVar11 < *(int *)(lVar9 + 0x30)) {
      local_158 = *(long *)(*(long *)(lVar9 + 0x38) + (long)iVar11 * 8);
    }
    else {
      local_158 = 0;
    }
LAB_00533a80:
    uVar24 = 0;
    bVar17 = false;
    uVar8 = 2;
    uVar23 = 0x3f800000;
    bVar3 = true;
  }
  FUN_00528d70(uVar23,uVar24,param_1,&local_a8,uVar8,0);
  fVar22 = (float)local_a8;
  fVar25 = local_a8._4_4_;
  FUN_00528d70(0x3f800000,0,param_1,&local_a8,0,2);
  local_138[2] = (float)local_a8;
  uStack_12c = local_a8._4_4_;
  if ((bVar17) ||
     ((*(uint *)(local_158 + 0x38) < 0x38 &&
      ((1L << ((ulong)*(uint *)(local_158 + 0x38) & 0x3f) & 0x80210000100000U) != 0)))) {
    uVar7 = FUN_00561e10();
    iVar11 = *(int *)(param_1 + 0xd2c);
    if (iVar11 == 0) goto LAB_00533b9c;
LAB_00533b18:
    bVar3 = iVar11 == 1;
    uVar23 = *(undefined4 *)(param_1 + 0xd30);
  }
  else {
    if ((DAT_0275cc3e & 1) == 0) {
      DAT_0275cc3e = 1;
      DAT_0275cd48 = 0x100000000;
      DAT_0275cd50 = 0x300000002;
    }
    lVar9 = 3;
    if (!bVar3) {
      lVar9 = (long)*(int *)(param_1 + 0x58);
    }
    uVar7 = *(uint *)((long)&DAT_0275cd48 + lVar9 * 4);
    if (3 < uVar7) {
      uVar7 = 0xffffffff;
    }
    iVar11 = *(int *)(param_1 + 0xd2c);
    if (iVar11 != 0) goto LAB_00533b18;
LAB_00533b9c:
    bVar3 = true;
    uVar23 = 0xfffffffe;
  }
  local_138[0] = 1.0;
  local_138[1] = 0.0;
  if (!bVar5 && ((uVar6 ^ 0xffffffff) & 1) == 0) {
    FUN_00528d70(0x3f800000,0,param_1,&local_a8,0,2);
    fVar26 = *pfVar21;
    pfVar1 = pfVar21 + 1;
    pfVar21 = local_138;
    local_138[1] = (fVar25 * (float)local_a8 + local_a8._4_4_) * fVar26 + *pfVar1;
    local_138[0] = fVar22 * (float)local_a8 * fVar26;
  }
  local_140 = *(undefined4 *)(param_1 + 0xd24);
  local_13c = *(undefined4 *)(param_1 + 0xd28);
  local_148 = *(undefined8 *)(param_1 + 0xd64);
  uVar20 = *(undefined8 *)(param_1 + 0xd70);
  uVar8 = *(undefined8 *)(param_1 + 0xd78);
  if (*(char *)(param_1 + 0x10db) == '\0') {
    bVar5 = *(char *)(param_1 + 0xd40) != '\0';
    if (!bVar3) goto LAB_00533cac;
    in_stack_fffffffffffffdf0 = pfVar21;
    FUN_00585000(*(undefined4 *)(param_1 + 0x108c),plVar14,local_158,uVar20,uVar8,param_1 + 0x6f4,
                 param_1 + 0x774,auStack_e8,auStack_128,CONCAT44(uVar32,uVar7),&local_88,pfVar21,
                 CONCAT44(uVar33,uVar23),&local_148,in_stack_fffffffffffffe08 & 0xffffffffffffff00,
                 param_1 + 0xd6c);
    *(undefined1 *)(param_1 + 0x10db) = 1;
    local_148 = *(undefined8 *)(param_1 + 0xd64);
  }
  bVar5 = false;
  uVar8 = 0;
LAB_00533cac:
  local_150 = 0x3f8000003f800000;
  local_a8 = 0x3f8000003f800000;
  uStack_a0 = 0x3f8000003f800000;
  FUN_005856c0(uVar30,uVar29,*(undefined4 *)(param_1 + 0xd20),*(undefined4 *)(param_1 + 0xd04),
               uVar31,plVar14,lVar18,uVar16,uVar19,*(undefined8 *)(param_1 + 0x1e8),uVar20,uVar8,
               *(undefined8 *)(param_1 + 0x1e0),param_1 + 0xd48,param_1 + 0xd50,
               (ulong)in_stack_fffffffffffffdf0 & 0xffffffffffffff00,param_1 + 0x6f4,param_1 + 0x774
               ,auStack_e8,auStack_128,local_158,uVar7,&local_88,local_138 + 2,pfVar21,uVar23,
               &local_148,*(int *)(param_1 + 0xd60) != 1,bVar5,&local_140,uVar15,&local_150,0,
               &local_a8,0);
  *(undefined1 *)(param_1 + 0x10db) = 1;
  return 0;
}


