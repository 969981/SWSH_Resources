/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005340b0; name: FUN_005340b0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_005340b0(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  ulong *puVar26;
  ulong in_stack_fffffffffffffe58;
  ulong uVar27;
  uint in_stack_fffffffffffffe60;
  ulong local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  char local_fc [4];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  *(undefined1 *)(param_1 + 0x10e1) = 0;
  lVar10 = *(long *)(param_1 + 0x268);
  lVar5 = *(long *)(param_1 + 0x260);
  if (lVar10 == 0) {
    if (lVar5 == 0) {
      lVar10 = 0;
      goto LAB_0053413c;
    }
    lVar10 = *(long *)(lVar5 + (long)*(int *)(param_1 + 0x298) * 8);
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0x290) + (long)*(int *)(param_1 + 0x298) * 4) & 1;
    if ((int)uVar9 < *(int *)(lVar10 + 0x30)) {
      lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + uVar9 * 8);
    }
    else {
      lVar10 = 0;
    }
LAB_0053414c:
    lVar5 = *(long *)(lVar5 + (long)*(int *)(param_1 + 0x298) * 8);
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0x290) + (long)*(int *)(param_1 + 0x298) * 4) & 1;
    uVar6 = (uint)uVar9;
    if ((int)uVar6 < *(int *)(lVar5 + 0x30)) {
      uVar11 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar9 * 8);
    }
    else {
      uVar11 = 0;
    }
    if ((int)(uVar6 ^ 1) < *(int *)(lVar5 + 0x30)) {
      uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + (ulong)(uVar6 ^ 1) * 8);
    }
    else {
      uVar12 = 0;
    }
  }
  else {
    if (lVar5 != 0) goto LAB_0053414c;
LAB_0053413c:
    uVar11 = 0;
    uVar12 = 0;
  }
  puVar26 = &local_110;
  FUN_0052e030(param_1,&local_ec,&local_f0,&uStack_f4,&local_f8,local_fc,&local_100,&uStack_108,
               puVar26,in_stack_fffffffffffffe58 & 0xffffffffffffff00,
               in_stack_fffffffffffffe60 & 0xffffff00);
  puVar3 = PTR_DAT_02713a80;
  lVar5 = lVar10;
  if (((*(char *)(param_1 + 0x96c) != '\0') || (*(int *)PTR_DAT_02713a80 != 0)) &&
     ((*(char *)(param_1 + 0x96c) == '\0' || (*(int *)(param_1 + 0x970) == 0)))) {
    iVar7 = *(int *)(param_1 + 0x670);
    lVar5 = *(long *)(param_1 + 400);
    if (iVar7 == -1) {
      iVar7 = *(int *)(lVar5 + 0x90);
      if (iVar7 < *(int *)(lVar5 + 0x30)) goto LAB_00534220;
LAB_0053423c:
      lVar5 = 0;
    }
    else {
      if (*(int *)(lVar5 + 0x30) <= iVar7) goto LAB_0053423c;
LAB_00534220:
      lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + (long)iVar7 * 8);
    }
    FUN_0059ade0(lVar5,0,0,0,0);
  }
  uVar18 = *(undefined4 *)(lVar5 + 0x54);
  uVar15 = *(undefined4 *)(lVar5 + 0x58);
  uVar19 = *(undefined4 *)(param_1 + 0xbfc);
  uVar22 = *(undefined4 *)(param_1 + 0xc00);
  bVar4 = *(char *)(param_1 + 0xbec) != '\0';
  uVar20 = 0;
  if (bVar4) {
    uVar20 = *(undefined4 *)(param_1 + 0xbf8);
  }
  uVar23 = *(undefined4 *)(param_1 + 0xbf0);
  uVar21 = 0;
  if (bVar4) {
    uVar21 = *(undefined4 *)(param_1 + 0xbf4);
  }
  fVar24 = *(float *)(param_1 + 0x420);
  fVar17 = *(float *)(param_1 + 0x424);
  cVar2 = *(char *)(param_1 + 0x67b);
  local_e0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uVar9 = (ulong)puVar26 & 0xffffffff00000000;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = lVar5;
  FUN_0059db20(0x3f800000,8,&local_e8,0,0,0,0,0,0,uVar9);
  if (*(char *)(param_1 + 0x96c) == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(param_1 + 0x974);
  }
  uVar18 = NEON_ucvtf(uVar18);
  uVar16 = NEON_ucvtf(uVar15);
  uVar15 = *(undefined4 *)(param_1 + 0x8e8);
  local_e0 = CONCAT44(uVar15,uVar15);
  local_e8 = CONCAT44(uVar15,uVar15);
  if (*(char *)(param_1 + 0x59a) == '\0') {
    fVar25 = *(float *)(param_1 + 0x7f8);
  }
  else {
    fVar25 = *(float *)(param_1 + 0x8c0) * *(float *)(param_1 + 0x7fc);
  }
  uVar9 = CONCAT44((int)(uVar9 >> 0x20),*(undefined4 *)(param_1 + 0x968));
  FUN_0055f270(uVar18,uVar16,0,0,local_f8,local_100,local_f0,uStack_f4,
               *(undefined8 *)(param_1 + 0x198),
               *(undefined8 *)(lVar5 + (long)*(int *)(lVar5 + 0xa0) * 8 + 0xb8),0,param_2,
               local_fc[0] != '\0',local_ec,&local_e8,uStack_108,uVar9,local_110,
               *(float *)(param_1 + 0x8c0) / fVar25,param_1 + 0x8d4,*(undefined4 *)(param_1 + 0x8e4)
               ,uVar21,uVar20,uVar19,uVar22,uVar23,fVar24 / fVar17,cVar2 == '\0',0,uVar8,0,
               0xffffffff,0x3f19999a,0);
  uVar27 = local_110;
  if (((*(char *)(param_1 + 0x96c) != '\0') || (*(int *)puVar3 != 0)) &&
     ((*(char *)(param_1 + 0x96c) == '\0' || (*(int *)(param_1 + 0x970) == 0)))) {
    FUN_00530ac0(param_1,lVar5,lVar10,
                 *(undefined8 *)(lVar10 + (long)*(int *)(lVar10 + 0xa0) * 8 + 0xb8),0);
    FUN_00526b00(param_1);
    uVar27 = local_110;
  }
  puVar3 = PTR_DAT_027139b0;
  iVar7 = *(int *)PTR_DAT_027139b0;
  if (iVar7 < 1) {
    plVar13 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar13,0);
    *(long **)PTR_DAT_027139b8 = plVar13;
    *(undefined4 *)puVar3 = 1;
joined_r0x00534604:
    if (plVar13 == (long *)0x0) {
      *(undefined4 *)puVar3 = 0;
      cVar2 = *(char *)(param_1 + 0x270);
      goto joined_r0x00534614;
    }
    uVar14 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar13 + 0x20))(plVar13);
    FUN_005b9b10(uVar14,plVar13);
    iVar7 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
  else {
    plVar13 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar7 + 1;
    if (iVar7 + 1 < 2) goto joined_r0x00534604;
  }
  *(int *)puVar3 = iVar7;
  cVar2 = *(char *)(param_1 + 0x270);
joined_r0x00534614:
  if (cVar2 == '\0') {
    local_e0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    uVar9 = uVar9 & 0xffffffff00000000;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = uVar11;
    FUN_0059db20(0x3f800000,8,&local_e8,0,0,0,0,0,0,uVar9);
  }
  fVar17 = *(float *)(param_1 + 0xbd0);
  fVar24 = 1.0 - fVar17;
  if (0.0 <= *(float *)(param_1 + 0xbd4)) {
    fVar24 = *(float *)(param_1 + 0xbd4);
  }
  if (0.0 < *(float *)(param_1 + 0xbd8)) {
    fVar17 = powf(fVar17,*(float *)(param_1 + 0x7f4) / *(float *)(param_1 + 0xbd8));
    fVar24 = powf(1.0 - fVar24,*(float *)(param_1 + 0x7f4) / *(float *)(param_1 + 0xbd8));
    fVar24 = 1.0 - fVar24;
  }
  fVar25 = *(float *)(param_1 + 0xbdc);
  lVar5 = 0;
  if (*(char *)(param_1 + 0xb36) != '\0') {
    lVar5 = param_1 + 0xa34;
  }
  lVar1 = 0;
  if (*(char *)(param_1 + 0xb37) != '\0') {
    lVar1 = param_1 + 0xa74;
  }
  if (fVar25 <= 0.0) {
    fVar25 = *(float *)(param_1 + 0x420);
  }
  FUN_00582250(fVar17,fVar24,fVar25,plVar13,uVar12,lVar10,uVar11,*(undefined1 *)(param_1 + 0x270),0,
               lVar5,lVar1,uVar9 & 0xffffffff00000000,uVar27 & 0xffffffff00000000);
  *(undefined1 *)(param_1 + 0x10e1) = 1;
  return 0;
}


