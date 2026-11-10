/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00531bf0; name: FUN_00531bf0
 */


undefined4 FUN_00531bf0(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined1 auStack_a0 [64];
  
  puVar4 = PTR_DAT_027139b0;
  iVar7 = *(int *)PTR_DAT_027139b0;
  if (iVar7 < 1) {
    plVar10 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar10,0);
    *(long **)PTR_DAT_027139b8 = plVar10;
    *(undefined4 *)puVar4 = 1;
  }
  else {
    plVar10 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar7 + 1;
    if (1 < iVar7 + 1) goto LAB_00531cd8;
  }
  if (plVar10 == (long *)0x0) {
    iVar7 = 0;
  }
  else {
    uVar11 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar10 + 0x20))(plVar10);
    FUN_005b9b10(uVar11,plVar10);
    iVar7 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
LAB_00531cd8:
  *(int *)puVar4 = iVar7;
  puVar4 = PTR_DAT_02713a80;
  if (*(int *)PTR_DAT_02713a80 == 0) {
    uVar13 = 1;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x5d8);
    lVar8 = *(long *)(param_1 + 400);
    iVar9 = iVar7;
    if (iVar7 == -1) {
      iVar9 = *(int *)(lVar8 + 0x90);
    }
    if (iVar7 == -1) {
      iVar7 = *(int *)(lVar8 + 0x90);
    }
    FUN_0056ed30(plVar10,*(undefined4 *)
                          (*(long *)(*(long *)(lVar8 + 0x38) + (long)iVar9 * 8) + 0x30),
                 *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0x38) + (long)iVar7 * 8) + 0x34));
    local_d4 = 0;
    uStack_d0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_ac = 0;
    local_b4 = 0;
    local_a4 = 0x3f800000;
    local_b8 = 0x3f800000;
    local_cc = 0x3f800000;
    local_e0 = 0x3f800000;
    FUN_00515cb0(&local_e0,&local_e0,param_1 + 0xb3c);
    FUN_00515cb0(&local_130,&local_e0,param_1 + 0x9f4);
    FUN_00515cb0(auStack_a0,&local_130,param_1 + 0x9b4);
    if ((*(int *)(param_1 + 0x97c) != 0) || (*(float *)(param_1 + 0x8c4) <= 0.0)) {
      fVar12 = 1.0;
    }
    else {
      fVar12 = DAT_01d4c570 / *(float *)(param_1 + 0x8c4);
    }
    uVar3 = *(uint *)puVar4;
    uVar13 = *(undefined4 *)(param_1 + 0x1138);
    uVar14 = *(undefined4 *)(param_1 + 0x113c);
    bVar6 = (uVar3 | 2) != 3;
    if ((uVar3 < 6) && ((1 << (ulong)(uVar3 & 0x1f) & 0x2aU) != 0)) {
      FUN_005807f0(fVar12,0x40800000,0xbf800000,0,plVar10,plVar10[0x5364],1,1,auStack_a0,0,0);
    }
    uVar11 = 0x40800000;
    if (uVar3 != 5 && bVar6) {
      uVar11 = 0x40900000;
    }
    uVar15 = 0xbf800000;
    if (uVar3 != 5 && bVar6) {
      uVar15 = 0xc0000000;
    }
    bVar6 = 2 < uVar3 - 1;
    plVar1 = plVar10 + 0x5362;
    if (bVar6) {
      plVar1 = plVar10 + 0x5360;
    }
    local_f4 = 0x3f800000;
    local_108 = 0x3f800000;
    local_11c = 0x3f800000;
    local_130 = 0x3f800000;
    local_124 = 0;
    uStack_120 = 0;
    uStack_12c = 0;
    uStack_128 = 0;
    local_118 = 0;
    local_110 = 0;
    local_fc = 0;
    uStack_f8 = 0;
    local_104 = 0;
    uStack_100 = 0;
    plVar2 = plVar10 + 0x5363;
    if (bVar6) {
      plVar2 = plVar10 + 0x5361;
    }
    FUN_005807f0(0x3f800000,uVar11,uVar15,uVar14,plVar10,*plVar1,0,1,&local_130,0,0);
    uVar13 = FUN_005807f0(fVar12,uVar11,uVar15,uVar13,plVar10,*plVar2,0,1,auStack_a0,0,0);
    local_118 = *(undefined8 *)(param_1 + 0xbbc);
    uStack_120 = (undefined4)*(undefined8 *)(param_1 + 0xbb4);
    local_11c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xbb4) >> 0x20);
    local_130 = (undefined4)*(undefined8 *)(param_1 + 0xba4);
    uStack_12c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xba4) >> 0x20);
    uStack_128 = (undefined4)*(undefined8 *)(param_1 + 0xbac);
    local_124 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xbac) >> 0x20);
    local_110 = *(undefined8 *)(param_1 + 0xb84);
    local_e0 = (undefined4)local_110;
    uStack_dc = (undefined4)((ulong)local_110 >> 0x20);
    uStack_d8 = (undefined4)*(undefined8 *)(param_1 + 0xb8c);
    local_d4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xb8c) >> 0x20);
    local_c8 = *(undefined8 *)(param_1 + 0xb9c);
    uStack_d0 = (undefined4)*(undefined8 *)(param_1 + 0xb94);
    local_cc = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xb94) >> 0x20);
    uStack_f8 = (undefined4)local_c8;
    local_f4 = (undefined4)((ulong)local_c8 >> 0x20);
    if (*(char *)(param_1 + 0x96c) == '\0') {
      local_f0 = 0;
      uVar14 = 0;
    }
    else {
      local_f0 = *(undefined4 *)(param_1 + 0xbc4);
      uVar14 = *(undefined4 *)(param_1 + 0xbc8);
    }
    uVar5 = local_f0;
    local_e8 = 0x3f800000;
    local_108 = uStack_d8;
    local_104 = local_d4;
    uStack_100 = uStack_d0;
    local_fc = local_cc;
    uStack_ec = uVar14;
    iVar7 = memcmp((undefined8 *)(param_1 + 0x10e4),&local_130,0x4c);
    if (iVar7 != 0) {
      local_e0 = 0x3f800000;
      uStack_dc = 0x3f800000;
      local_138 = 0;
      FUN_005810b0(0x3f800000,uVar5,uVar14,plVar10,plVar10[0x5367],0,&local_138,&local_e0,&local_130
                   ,1,1,&local_110,0,0);
      local_138 = 0;
      FUN_005810b0(local_e8,local_f0,uStack_ec,plVar10,plVar10[0x5368],0,&local_138,&local_e0,
                   &local_110,1,1,&local_110,0,0);
      local_e0 = 0x3f400000;
      uStack_dc = 0x3f400000;
      local_138 = 0;
      FUN_005810b0(local_e8,local_f0,uStack_ec,plVar10,plVar10[0x5365],1,&local_138,&local_e0,
                   &local_130,1,1,&local_110,0,0);
      local_138 = 0;
      uVar13 = FUN_005810b0(local_e8,local_f0,uStack_ec,plVar10,plVar10[0x5366],1,&local_138,
                            &local_e0,&local_110,1,1,&local_110,0,0);
      *(undefined8 *)(param_1 + 0x10e4) = CONCAT44(uStack_12c,local_130);
      *(ulong *)(param_1 + 0x10ec) = CONCAT44(local_124,uStack_128);
      *(undefined8 *)(param_1 + 0x1104) = local_110;
      *(ulong *)(param_1 + 0x110c) = CONCAT44(local_104,local_108);
      *(ulong *)(param_1 + 0x10f4) = CONCAT44(local_11c,uStack_120);
      *(undefined8 *)(param_1 + 0x10fc) = local_118;
      *(undefined4 *)(param_1 + 0x112c) = local_e8;
      *(ulong *)(param_1 + 0x111c) = CONCAT44(local_f4,uStack_f8);
      *(ulong *)(param_1 + 0x1124) = CONCAT44(uStack_ec,local_f0);
      *(ulong *)(param_1 + 0x1114) = CONCAT44(local_fc,uStack_100);
    }
  }
  return uVar13;
}


