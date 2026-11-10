/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00532d50; name: FUN_00532d50
 */


undefined4
FUN_00532d50(undefined1 param_1 [16],long param_2,long param_3,long param_4,long param_5,
            undefined8 param_6,float *param_7,int param_8,ulong param_9,byte param_10)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint in_stack_fffffffffffffe90;
  ulong in_stack_fffffffffffffe98;
  uint in_stack_fffffffffffffea8;
  undefined4 local_124;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c [3];
  float local_64;
  
  puVar5 = PTR_DAT_027139b0;
  iVar3 = *(int *)PTR_DAT_027139b0;
  uVar14 = param_1._0_8_;
  if (iVar3 < 1) {
    plVar13 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar13,0);
    *(long **)PTR_DAT_027139b8 = plVar13;
    *(undefined4 *)puVar5 = 1;
  }
  else {
    plVar13 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar3 + 1;
    if (1 < iVar3 + 1) {
      *(int *)puVar5 = iVar3;
      goto joined_r0x00532f14;
    }
  }
  if (plVar13 == (long *)0x0) {
    *(undefined4 *)puVar5 = 0;
  }
  else {
    uVar15 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar13 + 0x20))(plVar13);
    FUN_005b9b10(uVar15,plVar13);
    *(undefined8 *)PTR_DAT_027139b8 = 0;
    *(undefined4 *)puVar5 = 0;
  }
joined_r0x00532f14:
  if (param_8 < 0) {
    if (*(uint *)(param_2 + 0xc94) < 4) {
      param_8 = *(int *)(&DAT_01d4d31c + (long)(int)*(uint *)(param_2 + 0xc94) * 4);
    }
    else {
      param_8 = 0x7fffffff;
    }
  }
  if (param_1._0_4_ < 0.0) {
    uVar14 = (ulong)*(uint *)(param_2 + 0xc8c);
  }
  FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
  FUN_005a60a0(*(undefined8 *)(param_2 + 400),1,0x7fffffff);
  lVar11 = param_3;
  do {
    lVar10 = lVar11;
    lVar11 = *(long *)(lVar10 + 0x120);
  } while (lVar11 != 0);
  uVar6 = (**(code **)(**(long **)(lVar10 + 0xa8) + 0xa0))();
  lVar11 = param_4;
  do {
    lVar10 = lVar11;
    lVar11 = *(long *)(lVar10 + 0x120);
  } while (lVar11 != 0);
  uVar7 = (**(code **)(**(long **)(lVar10 + 0xa8) + 0xa0))();
  if (param_5 == 0) {
    local_124 = 0x7fffffff;
  }
  else {
    lVar11 = param_5;
    do {
      lVar10 = lVar11;
      lVar11 = *(long *)(lVar10 + 0x120);
    } while (lVar11 != 0);
    local_124 = (**(code **)(**(long **)(lVar10 + 0xa8) + 0xa0))();
  }
  lVar11 = param_3;
  do {
    lVar10 = lVar11;
    lVar11 = *(long *)(lVar10 + 0x120);
  } while (lVar11 != 0);
  plVar9 = *(long **)(lVar10 + 0xa8);
  (**(code **)(*plVar9 + 0x90))(plVar9,param_8);
  lVar11 = param_4;
  do {
    lVar10 = lVar11;
    lVar11 = *(long *)(lVar10 + 0x120);
  } while (lVar11 != 0);
  plVar9 = *(long **)(lVar10 + 0xa8);
  (**(code **)(*plVar9 + 0x90))(plVar9,param_8);
  if (param_5 != 0) {
    lVar11 = param_5;
    do {
      lVar10 = lVar11;
      lVar11 = *(long *)(lVar10 + 0x120);
    } while (lVar11 != 0);
    plVar9 = *(long **)(lVar10 + 0xa8);
    (**(code **)(*plVar9 + 0x90))(plVar9,param_8);
  }
  local_88 = *param_7;
  fStack_84 = param_7[1];
  if (local_88 <= 0.0) {
    local_88 = -local_88;
  }
  if (fStack_84 <= 0.0) {
    fStack_84 = -fStack_84;
  }
  local_80 = param_7[2];
  local_7c[0] = param_7[3];
  local_64 = 1e-05;
  if (local_80 <= 0.0) {
    local_80 = -local_80;
  }
  if (local_7c[0] <= 0.0) {
    local_7c[0] = -local_7c[0];
  }
  pfVar1 = &local_88;
  if (local_88 <= DAT_01d4c050) {
    pfVar1 = &local_64;
  }
  pfVar2 = (float *)((ulong)&local_88 | 4);
  if (fStack_84 <= DAT_01d4c050) {
    pfVar2 = &local_64;
  }
  local_88 = *pfVar1;
  fStack_84 = *pfVar2;
  pfVar2 = &local_80;
  if (local_80 <= DAT_01d4c050) {
    pfVar2 = &local_64;
  }
  local_80 = *pfVar2;
  pfVar2 = local_7c;
  if (local_7c[0] <= DAT_01d4c050) {
    pfVar2 = &local_64;
  }
  local_7c[0] = *pfVar2;
  if ((param_10 & 1) != 0) {
    local_88 = -*pfVar1;
  }
  uVar4 = *(uint *)(param_2 + 0x568);
  if ((uVar4 == 0) || ((param_9 & 1) == 0)) {
    local_108 = 0x3f8000003f800000;
    uStack_100 = 0x3f8000003f800000;
    uVar8 = FUN_00597bd0(0x3f800000,uVar14,plVar13,param_3,param_4,param_6,&local_88,0,&local_108,0,
                         in_stack_fffffffffffffe90 & 0xffffff00,
                         in_stack_fffffffffffffe98 & 0xffffffffffffff00,0,0);
  }
  else {
    if (0 < (int)uVar4) {
      uVar12 = 0;
      do {
        lVar11 = *(long *)(*(long *)(param_2 + 0x560) + uVar12 * 0x10);
        do {
          lVar10 = lVar11;
          lVar11 = *(long *)(lVar10 + 0x120);
        } while (lVar11 != 0);
        uVar8 = (**(code **)(**(long **)(lVar10 + 0xa8) + 0xa0))();
        *(undefined4 *)(&local_108 + uVar12) = uVar8;
        lVar11 = *(long *)(*(long *)(param_2 + 0x560) + uVar12 * 0x10);
        do {
          lVar10 = lVar11;
          lVar11 = *(long *)(lVar10 + 0x120);
        } while (lVar11 != 0);
        plVar9 = *(long **)(lVar10 + 0xa8);
        (**(code **)(*plVar9 + 0x90))(plVar9,param_8);
        lVar11 = *(long *)(*(long *)(param_2 + 0x560) + uVar12 * 0x10 + 8);
        do {
          lVar10 = lVar11;
          lVar11 = *(long *)(lVar10 + 0x120);
        } while (lVar11 != 0);
        uVar8 = (**(code **)(**(long **)(lVar10 + 0xa8) + 0xa0))();
        *(undefined4 *)((long)&local_108 + uVar12 * 8 + 4) = uVar8;
        lVar11 = *(long *)(*(long *)(param_2 + 0x560) + uVar12 * 0x10 + 8);
        do {
          lVar10 = lVar11;
          lVar11 = *(long *)(lVar10 + 0x120);
        } while (lVar11 != 0);
        plVar9 = *(long **)(lVar10 + 0xa8);
        (**(code **)(*plVar9 + 0x90))(plVar9,param_8);
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar4);
    }
    local_118 = 0x3f8000003f800000;
    uStack_110 = 0x3f8000003f800000;
    uVar8 = FUN_00599300(0x3f800000,uVar14,0x40800000,plVar13,param_3,param_4,param_5,param_6,
                         &local_88,0,&local_118,uVar4,*(undefined8 *)(param_2 + 0x560),2,
                         in_stack_fffffffffffffea8 & 0xffffff00,0,0,0,0);
    if (0 < (int)uVar4) {
      uVar14 = 0;
      do {
        lVar11 = *(long *)(*(long *)(param_2 + 0x560) + uVar14 * 0x10);
        do {
          lVar10 = lVar11;
          lVar11 = *(long *)(lVar10 + 0x120);
        } while (lVar11 != 0);
        plVar13 = *(long **)(lVar10 + 0xa8);
        (**(code **)(*plVar13 + 0x90))(plVar13,*(undefined4 *)(&local_108 + uVar14));
        lVar11 = *(long *)(*(long *)(param_2 + 0x560) + uVar14 * 0x10 + 8);
        do {
          lVar10 = lVar11;
          lVar11 = *(long *)(lVar10 + 0x120);
        } while (lVar11 != 0);
        plVar13 = *(long **)(lVar10 + 0xa8);
        (**(code **)(*plVar13 + 0x90))(plVar13,*(undefined4 *)((long)&local_108 + uVar14 * 8 + 4));
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar4);
    }
  }
  do {
    lVar11 = param_3;
    param_3 = *(long *)(lVar11 + 0x120);
  } while (param_3 != 0);
  plVar13 = *(long **)(lVar11 + 0xa8);
  (**(code **)(*plVar13 + 0x90))(plVar13,uVar6);
  do {
    lVar11 = param_4;
    param_4 = *(long *)(lVar11 + 0x120);
  } while (param_4 != 0);
  plVar13 = *(long **)(lVar11 + 0xa8);
  (**(code **)(*plVar13 + 0x90))(plVar13,uVar7);
  if (param_5 != 0) {
    do {
      lVar11 = param_5;
      param_5 = *(long *)(lVar11 + 0x120);
    } while (param_5 != 0);
    plVar13 = *(long **)(lVar11 + 0xa8);
    (**(code **)(*plVar13 + 0x90))(plVar13,local_124);
  }
  return uVar8;
}


