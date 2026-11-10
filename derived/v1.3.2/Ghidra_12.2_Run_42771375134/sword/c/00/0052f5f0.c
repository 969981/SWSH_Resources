/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0052f5f0; name: FUN_0052f5f0
 */


undefined4
FUN_0052f5f0(undefined1 param_1 [16],float param_2,float param_3,float param_4,float param_5,
            float param_6,undefined4 param_7,undefined4 param_8,long param_9,uint param_10,
            byte param_11,uint param_12,undefined8 *param_13)

{
  undefined8 *puVar1;
  byte bVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  undefined4 uVar12;
  ulong uVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  undefined1 *puVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined8 *puVar39;
  undefined1 local_148 [4];
  undefined8 local_144;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined4 local_10c;
  undefined1 local_108 [4];
  undefined8 local_104;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  
  uVar22 = *(undefined4 *)(param_13 + 1);
  uVar23 = *(undefined4 *)((long)param_13 + 0xc);
  uVar24 = *(undefined4 *)(param_13 + 2);
  uVar15 = *param_13;
  uVar12 = *(undefined4 *)((long)param_13 + 0x14);
  cVar6 = *(char *)(param_13 + 0x19);
  uVar25 = *(undefined4 *)(param_13 + 0x16);
  uVar4 = *(uint *)(param_13 + 5);
  iVar5 = *(int *)((long)param_13 + 0x2c);
  uVar26 = *(undefined4 *)((long)param_13 + 0xb4);
  uVar27 = *(undefined4 *)(param_13 + 0x17);
  uVar38 = *(undefined4 *)((long)param_13 + 0xbc);
  uVar28 = *(undefined4 *)(param_13 + 0x18);
  uVar33 = *(undefined4 *)((long)param_13 + 0xc4);
  uVar36 = *(undefined4 *)(param_13 + 0x1a);
  uVar37 = *(undefined4 *)((long)param_13 + 0xd4);
  uVar35 = *(undefined4 *)(param_13 + 0x1b);
  uVar29 = *(undefined4 *)((long)param_13 + 0xdc);
  if ((undefined8 *)(param_9 + 0xba4) != &local_c8) {
    local_c8 = *(undefined8 *)(param_9 + 0xba4);
    local_c0 = *(undefined8 *)(param_9 + 0xbac);
    local_b8 = *(undefined8 *)(param_9 + 0xbb4);
    local_b0 = *(undefined8 *)(param_9 + 0xbbc);
  }
  if (*(char *)(param_9 + 0x59c) == '\0') {
    iVar17 = *(int *)(param_9 + 0x9ac);
    if (iVar17 == 1) {
      if ((*(char *)(param_9 + 0x96c) != '\0') && (iVar14 = *(int *)(param_9 + 0x978), iVar14 != 0))
      {
        iVar17 = 1;
        if ((iVar14 == 0x10) ||
           (((iVar14 - 6U < 9 || (iVar17 = 1, *(int *)PTR_DAT_02713970 == 0)) ||
            (*(int *)PTR_DAT_02713980 == 0)))) goto LAB_0052f774;
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x4604)
        ;
        FUN_00517ae0(
                    "CPostEffect::GetEffectiveTonemapBackendColorSpaceMode(): PFXTBCSM_SCRGB is available only with PFXEOTF_PQ(PFXEOTF_ST2084) or PFXEOTF_GAMMA*.\n"
                    );
      }
      iVar17 = 1;
    }
  }
  else {
    iVar17 = 0;
  }
LAB_0052f774:
  puVar9 = PTR_DAT_027139b0;
  uVar30 = *(undefined4 *)(param_9 + 0x9a8);
  bVar11 = 8 < uVar4 - 6;
  iVar14 = *(int *)PTR_DAT_027139b0;
  fVar7 = param_2 - param_4;
  fVar8 = -param_6;
  if (*(char *)(*(long *)(param_9 + 0x18) + 0x58) == '\0') {
    fVar7 = param_4;
    fVar8 = param_6;
  }
  if (iVar14 < 1) {
    plVar20 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar20,0);
    *(long **)PTR_DAT_027139b8 = plVar20;
    *(undefined4 *)puVar9 = 1;
    if (plVar20 != (long *)0x0) goto LAB_0052f7f0;
LAB_0052f9e0:
    *(undefined4 *)puVar9 = 0;
  }
  else {
    plVar20 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar14 + 1;
    if (iVar14 + 1 < 2) {
      if (plVar20 == (long *)0x0) goto LAB_0052f9e0;
LAB_0052f7f0:
      uVar21 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar20 + 0x20))(plVar20);
      FUN_005b9b10(uVar21,plVar20);
      iVar14 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
    *(int *)puVar9 = iVar14;
  }
  if (5 < param_10) {
    return 0xfffffffc;
  }
  puVar1 = param_13 + 3;
  puVar39 = param_13 + 6;
  param_13 = param_13 + 0xe;
  bVar2 = iVar5 == 1 | param_11 & 1;
  switch(param_10) {
  case 0:
    plVar3 = plVar20 + 0x5362;
    if ((param_12 & 1) == 0) {
      plVar3 = plVar20 + 0x5360;
    }
    lVar18 = *plVar3;
    do {
      lVar16 = lVar18;
      lVar18 = *(long *)(lVar16 + 0x120);
    } while (lVar18 != 0);
    uVar21 = *(undefined8 *)(lVar16 + 0xa8);
    if ((param_11 & 1) == 0) {
      local_13c = 0;
      local_144 = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_114 = 0;
      if (uVar4 != 0x10 && bVar11) {
        uVar26 = uVar27;
      }
      local_11c = 0;
      local_10c = 0x3f800000;
      local_120 = 0x3f800000;
      local_134 = 0x3f800000;
      local_148 = (undefined1  [4])0x3f800000;
      uVar35 = *(undefined4 *)(param_9 + 0x9a0);
      uVar27 = *(undefined4 *)(param_9 + 0x99c);
      uVar31 = *(undefined4 *)(param_9 + 0x9a4);
      uVar36 = 0x42c80000;
      puVar39 = (undefined8 *)local_108;
      param_13 = (undefined8 *)local_148;
    }
    else {
      uVar31 = *(undefined4 *)(param_9 + 0x9a4);
      uVar27 = *(undefined4 *)(param_9 + 0x99c);
      uVar35 = *(undefined4 *)(param_9 + 0x9a0);
      param_13 = (undefined8 *)local_108;
      uVar36 = 0x3f800000;
    }
    local_cc = 0x3f800000;
    local_d4 = 0;
    local_dc = 0;
    local_e0 = 0x3f800000;
    uStack_e8 = 0;
    local_f0 = 0;
    local_f4 = 0x3f800000;
    local_fc = 0;
    local_104 = 0;
    local_108 = (undefined1  [4])0x3f800000;
    uVar37 = 0x3e3851ec;
    uVar38 = 0;
    bVar11 = false;
    uVar33 = 0;
    uVar28 = 0;
    uVar24 = 0x3f800000;
    uVar25 = 0x3f800000;
    uVar12 = 0;
    break;
  default:
    plVar3 = plVar20 + 0x5363;
    if ((param_12 & 1) == 0) {
      plVar3 = plVar20 + 0x5361;
    }
    lVar18 = *plVar3;
    do {
      lVar16 = lVar18;
      lVar18 = *(long *)(lVar16 + 0x120);
    } while (lVar18 != 0);
    uVar35 = *(undefined4 *)(param_9 + 0x9a0);
    uVar21 = *(undefined8 *)(lVar16 + 0xa8);
    uVar27 = *(undefined4 *)(param_9 + 0x99c);
    uVar31 = *(undefined4 *)(param_9 + 0x9a4);
    bVar11 = cVar6 != '\0';
    break;
  case 3:
  case 4:
    (**(code **)(**(long **)(param_9 + 0x18) + 0x160))(*(long **)(param_9 + 0x18),1);
    if ((param_11 & 1) == 0) {
      plVar3 = plVar20 + 0x5365;
      if (param_10 != 4) {
        plVar3 = plVar20 + 0x5367;
      }
      lVar18 = *plVar3;
      do {
        lVar16 = lVar18;
        lVar18 = *(long *)(lVar16 + 0x120);
      } while (lVar18 != 0);
      uVar21 = *(undefined8 *)(lVar16 + 0xa8);
      local_13c = 0;
      local_144 = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_114 = 0;
      if (uVar4 != 0x10 && bVar11) {
        uVar26 = uVar27;
      }
      local_11c = 0;
      local_10c = 0x3f800000;
      local_120 = 0x3f800000;
      local_134 = 0x3f800000;
      local_148 = (undefined1  [4])0x3f800000;
      uVar27 = *(undefined4 *)(param_9 + 0x9a0);
      uVar12 = *(undefined4 *)(param_9 + 0x99c);
      uVar24 = *(undefined4 *)(param_9 + 0x9a4);
      uVar28 = 0x42c80000;
      puVar39 = (undefined8 *)local_108;
      puVar19 = local_148;
    }
    else {
      plVar3 = plVar20 + 0x5366;
      if (param_10 != 4) {
        plVar3 = plVar20 + 0x5368;
      }
      lVar18 = *plVar3;
      do {
        lVar16 = lVar18;
        lVar18 = *(long *)(lVar16 + 0x120);
      } while (lVar18 != 0);
      uVar21 = *(undefined8 *)(lVar16 + 0xa8);
      uVar24 = *(undefined4 *)(param_9 + 0x9a4);
      uVar12 = *(undefined4 *)(param_9 + 0x99c);
      uVar27 = *(undefined4 *)(param_9 + 0x9a0);
      uVar28 = 0x3f800000;
      puVar19 = local_108;
    }
    local_cc = 0x3f800000;
    local_d4 = 0;
    local_dc = 0;
    local_e0 = 0x3f800000;
    uStack_e8 = 0;
    local_f0 = 0;
    local_f4 = 0x3f800000;
    local_fc = 0;
    local_104 = 0;
    local_108 = (undefined1  [4])0x3f800000;
    uVar12 = FUN_0057e110(param_3,fVar7,param_5,fVar8,param_7,param_8,in_stack_00000000,
                          in_stack_00000008,plVar20,1,0,uVar21,uVar15,uVar4,iVar17,0,uVar30,uVar22,
                          uVar23,puVar39,puVar19,&local_c8,uVar25,uVar26,uVar29,0x3f800000,
                          0xff7fffff,0,0,0,uVar12,uVar27,uVar24,puVar1,bVar2,0,0x3e3851ec,uVar28,0,0
                          ,0,0,0,0,0);
    goto LAB_0052ff7c;
  case 5:
    (**(code **)(**(long **)(param_9 + 0x18) + 0x160))(*(long **)(param_9 + 0x18),1);
    lVar18 = plVar20[0x5364];
    do {
      lVar16 = lVar18;
      lVar18 = *(long *)(lVar16 + 0x120);
    } while (lVar18 != 0);
    uVar12 = FUN_0057e110(param_3,fVar7,param_5,fVar8,param_7,param_8,in_stack_00000000,
                          in_stack_00000008,plVar20,1,0,*(undefined8 *)(lVar16 + 0xa8),uVar15,uVar4,
                          iVar17,uVar12,uVar30,uVar22,uVar23,puVar39,param_13,&local_c8,uVar25,
                          uVar26,uVar29,uVar24,0xff7fffff,uVar28,uVar33,cVar6 != '\0',
                          *(undefined4 *)(param_9 + 0x99c),*(undefined4 *)(param_9 + 0x9a0),
                          *(undefined4 *)(param_9 + 0x9a4),puVar1,bVar2,uVar38,uVar37,uVar36,0,0,0,1
                          ,uVar35,0,0);
    puVar10 = PTR_DAT_02713a90;
    puVar9 = PTR_DAT_02713a80;
    if (((*(int *)PTR_DAT_02713a90 == 0) ||
        (*(uint *)PTR_DAT_02713a80 != 5 && (*(uint *)PTR_DAT_02713a80 | 2) != 3)) ||
       (uVar13 = FUN_00582430(plVar20), (uVar13 & 1) == 0)) goto LAB_0052ff7c;
    if (*(char *)(param_9 + 0x96c) == '\0') {
      fVar34 = 1.0;
      fVar32 = 0.0;
      bVar11 = false;
      if (5 < uVar4) goto LAB_00530124;
LAB_0053012c:
      local_108 = (undefined1  [4])0x40000000;
    }
    else {
      fVar34 = 1.0;
      if ((param_11 & 1) == 0) {
        fVar34 = 0.5;
      }
      bVar11 = 1 < *(int *)(param_9 + 0x974);
      if (*(int *)(param_9 + 0x974) < 2) {
        fVar34 = 1.0;
      }
      fVar32 = 0.5;
      if ((bVar11 & param_11) == 0) {
        fVar32 = 0.0;
      }
      if (uVar4 < 6) goto LAB_0053012c;
LAB_00530124:
      if (uVar4 == 0x11) goto LAB_0053012c;
      local_108 = (undefined1  [4])0x3f800000;
    }
    local_104 = CONCAT44(local_108,local_108);
    local_fc = CONCAT44(local_fc._4_4_,0x3f2aaaaa);
    if (bVar11) {
      if ((*(int *)puVar10 != 2) || (*(uint *)puVar9 != 5 && (*(uint *)puVar9 | 2) != 3))
      goto LAB_0053029c;
      param_5 = param_5 / 3.0;
      plVar3 = plVar20 + 0x5369;
      fVar34 = fVar32 / 3.0;
      lVar18 = *plVar3;
      do {
        lVar16 = lVar18;
        lVar18 = *(long *)(lVar16 + 0x120);
      } while (lVar18 != 0);
      FUN_00575a10(param_5 * 0.0 + param_3,fVar7,param_5,fVar8,fVar34 + 0.0,0,fVar34 + DAT_01d4be8c,
                   0x3f800000,plVar20,1,0,local_108,*(undefined8 *)(lVar16 + 0xa8),0,0x10000);
      lVar18 = *plVar3;
      do {
        lVar16 = lVar18;
        lVar18 = *(long *)(lVar16 + 0x120);
      } while (lVar18 != 0);
      FUN_00575a10(param_5 + param_3,fVar7,param_5,fVar8,fVar34 + DAT_01d4bd24,0,fVar34 + 0.5,
                   0x3f800000,plVar20,1,0,local_108,*(undefined8 *)(lVar16 + 0xa8),0,0x10000);
      lVar18 = *plVar3;
      do {
        lVar16 = lVar18;
        lVar18 = *(long *)(lVar16 + 0x120);
      } while (lVar18 != 0);
      fVar32 = fVar34 + DAT_01d4bbc0;
      uVar15 = *(undefined8 *)(lVar16 + 0xa8);
      param_3 = param_5 + param_5 + param_3;
      fVar34 = fVar34 + DAT_01d4bb60;
    }
    else {
LAB_0053029c:
      lVar18 = plVar20[0x5369];
      do {
        lVar16 = lVar18;
        lVar18 = *(long *)(lVar16 + 0x120);
      } while (lVar18 != 0);
      uVar15 = *(undefined8 *)(lVar16 + 0xa8);
    }
    uVar12 = FUN_00575a10(param_3,fVar7,param_5,fVar8,fVar32,0,fVar34,0x3f800000,plVar20,1,0,
                          local_108,uVar15,0,0x10000);
LAB_0052ff7c:
    (**(code **)(**(long **)(param_9 + 0x18) + 0x160))(*(long **)(param_9 + 0x18),0);
    return uVar12;
  }
  uVar12 = FUN_0057e110(param_3,fVar7,param_5,fVar8,param_7,param_8,in_stack_00000000,plVar20,1,0,
                        uVar21,uVar15,uVar4,iVar17,uVar12,uVar30,uVar22,uVar23,puVar39,param_13,
                        &local_c8,uVar25,uVar26,uVar29,uVar24,0xff7fffff,uVar28,uVar33,bVar11,uVar27
                        ,uVar35,uVar31,puVar1,bVar2,uVar38,uVar37,uVar36,0,0,0,0,0,0,0);
  return uVar12;
}


