/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a6650; name: FUN_005a6650
 */


undefined4
FUN_005a6650(float param_1,long param_2,int param_3,int param_4,uint param_5,int param_6,
            ulong param_7)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float local_268 [64];
  undefined8 local_168 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  puVar1 = PTR_DAT_027139b0;
  iVar3 = *(int *)PTR_DAT_027139b0;
  if (iVar3 < 1) {
    plVar11 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar11,0);
    *(long **)PTR_DAT_027139b8 = plVar11;
    *(undefined4 *)puVar1 = 1;
    if (plVar11 != (long *)0x0) goto LAB_005a66d0;
LAB_005a67cc:
    *(undefined4 *)puVar1 = 0;
  }
  else {
    plVar11 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar3 + 1;
    if (iVar3 + 1 < 2) {
      if (plVar11 == (long *)0x0) goto LAB_005a67cc;
LAB_005a66d0:
      uVar14 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar11 + 0x20))(plVar11);
      FUN_005b9b10(uVar14,plVar11);
      iVar3 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
    *(int *)puVar1 = iVar3;
  }
  if ((param_7 & 1) != 0) {
    FUN_005714c0(plVar11,param_5,0,4);
  }
  FUN_00540d60(*(undefined8 *)(param_2 + 0x20),1);
  FUN_00540e00(*(undefined8 *)(param_2 + 0x20),0);
  (**(code **)(**(long **)(param_2 + 0x20) + 0x150))(*(long **)(param_2 + 0x20),0);
  if (param_3 == -1) {
    iVar5 = *(int *)(param_2 + 0x90);
    iVar3 = *(int *)(param_2 + 0x30);
    if (iVar5 < iVar3) goto LAB_005a6768;
LAB_005a67ec:
    lVar6 = 0;
    if (param_4 == -1) goto LAB_005a681c;
LAB_005a67fc:
    iVar5 = param_4;
    if (iVar3 <= param_4) goto LAB_005a6828;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x30);
    iVar5 = param_3;
    if (iVar3 <= param_3) goto LAB_005a67ec;
LAB_005a6768:
    lVar6 = *(long *)(*(long *)(param_2 + 0x38) + (long)iVar5 * 8);
    if (param_4 != -1) goto LAB_005a67fc;
LAB_005a681c:
    iVar5 = *(int *)(param_2 + 0x90);
    if (iVar3 <= *(int *)(param_2 + 0x90)) {
LAB_005a6828:
      lVar8 = 0;
      goto joined_r0x005a6814;
    }
  }
  lVar8 = *(long *)(*(long *)(param_2 + 0x38) + (long)iVar5 * 8);
joined_r0x005a6814:
  if (param_5 != 0) {
    param_1 = param_1 / (float)param_5;
    uVar13 = 0;
    do {
      iVar5 = (int)uVar13 + param_4;
      if (iVar5 == -1) {
        iVar5 = *(int *)(param_2 + 0x90);
        if (iVar5 < iVar3) goto LAB_005a685c;
LAB_005a6874:
        lVar10 = 0;
      }
      else {
        if (iVar3 <= iVar5) goto LAB_005a6874;
LAB_005a685c:
        lVar10 = *(long *)(*(long *)(param_2 + 0x38) + (long)iVar5 * 8);
      }
      do {
        lVar9 = lVar10;
        lVar10 = *(long *)(lVar9 + 0x120);
      } while (lVar10 != 0);
      local_168[uVar13] = *(undefined8 *)(lVar9 + 0xa8);
      uVar2 = uVar13 + 1;
      local_268[uVar13 * 4] = param_1;
      local_268[uVar13 * 4 + 1] = param_1;
      local_268[uVar13 * 4 + 2] = param_1;
      local_268[uVar13 * 4 + 3] = param_1;
      uVar13 = uVar2;
    } while (uVar2 != param_5);
  }
  uVar13 = (ulong)param_5;
  uVar21 = *(undefined4 *)(lVar8 + 0x54);
  uVar23 = *(undefined4 *)(lVar8 + 0x58);
  fVar22 = *(float *)(lVar8 + 0x88);
  fVar24 = *(float *)(lVar8 + 0x8c);
  fVar17 = *(float *)(lVar8 + 0x90);
  fVar18 = *(float *)(lVar8 + 0x94);
  uVar19 = *(undefined4 *)(lVar6 + 0x54);
  uVar20 = *(undefined4 *)(lVar6 + 0x58);
  if (param_5 != 0) {
    puVar12 = local_168;
    uVar2 = uVar13;
    do {
      (**(code **)(*(long *)*puVar12 + 0x88))((long *)*puVar12,1);
      uVar2 = uVar2 - 1;
      puVar12 = puVar12 + 1;
    } while (uVar2 != 0);
  }
  fVar15 = (float)NEON_ucvtf(uVar21);
  fVar16 = (float)NEON_ucvtf(uVar23);
  if (param_3 == -1) {
    param_3 = *(int *)(param_2 + 0x90);
  }
  *(int *)(param_2 + 0x90) = param_3;
  if (*(long *)(param_2 + 0x20) == 0) {
    uVar14 = 0;
  }
  else {
    if (param_3 < *(int *)(param_2 + 0x30)) {
      local_e8 = *(undefined8 *)(*(long *)(param_2 + 0x38) + (long)param_3 * 8);
    }
    else {
      local_e8 = 0;
    }
    uStack_e0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    FUN_0059db20(0x3f800000,8,&local_e8,0,0,0,0,0,0,0);
    uVar14 = *(undefined8 *)(param_2 + 0x20);
  }
  fVar17 = fVar22 * fVar15 + fVar17;
  uVar19 = NEON_ucvtf(uVar19);
  fVar18 = fVar24 * fVar16 + fVar18;
  uVar20 = NEON_ucvtf(uVar20);
  uVar2 = FUN_00542d00(uVar14);
  if ((uVar2 & 1) == 0) {
    lVar6 = 0;
    iVar3 = -1;
    do {
      iVar5 = param_5 + iVar3;
      iVar3 = iVar3 + -1;
      iVar4 = (int)lVar6;
      lVar6 = lVar6 + -1;
    } while (*(int *)((long)plVar11 + (long)param_6 * 4 + (long)iVar5 * 0x58 + 0x48d8) == 0 &&
             param_5 + iVar4 != 0);
    uVar2 = uVar13 + lVar6 + 1;
    if ((uint)uVar2 < param_5) {
      if ((int)(uVar13 + lVar6) == -1) {
        uVar19 = FUN_00576960(0,0,uVar19,uVar20,0,0,fVar17,fVar18,plVar11,0,local_168,local_268,
                              param_6,0x10000);
        return uVar19;
      }
      fVar22 = (float)param_5 / (float)(uVar2 & 0xffffffff);
      pfVar7 = local_268 + 2;
      uVar13 = uVar2;
      do {
        pfVar7[-2] = fVar22 * pfVar7[-2];
        pfVar7[-1] = fVar22 * pfVar7[-1];
        *pfVar7 = fVar22 * *pfVar7;
        pfVar7[1] = fVar22 * pfVar7[1];
        uVar13 = uVar13 - 1;
        pfVar7 = pfVar7 + 4;
      } while (uVar13 != 0);
      uVar13 = uVar2 & 0xffffffff;
    }
  }
  uVar19 = FUN_00576960(0,0,uVar19,uVar20,0,0,fVar17,fVar18,plVar11,uVar13,local_168,local_268,
                        param_6,0x10000);
  if ((int)uVar13 != 0) {
    puVar12 = local_168;
    do {
      (**(code **)(*(long *)*puVar12 + 0x88))((long *)*puVar12,0);
      uVar13 = uVar13 - 1;
      puVar12 = puVar12 + 1;
    } while (uVar13 != 0);
  }
  return uVar19;
}


