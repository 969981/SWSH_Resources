/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005594a0; name: FUN_005594a0
 */


undefined8 FUN_005594a0(long param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  ulong uVar7;
  void *__src;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  int *piVar16;
  float fVar17;
  float local_128 [4];
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [48];
  
  if ((param_2 & 1) == 0) {
    uVar7 = FUN_00556ca0(param_1);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    FUN_005a05e0(auStack_90);
    puVar12 = (undefined1 *)(*(long *)(param_1 + 0x170) + 0x80);
  }
  else {
    puVar12 = auStack_90;
    FUN_005a05e0(auStack_90);
    FUN_005a05f0(auStack_90,*(long *)PTR_DAT_02713c48 + 0xf0);
  }
  piVar16 = (int *)PTR_DAT_027139b0;
  lVar10 = *(long *)(param_1 + 0x2f0);
  uVar3 = *(uint *)(puVar12 + 8);
  uVar4 = *(uint *)(param_1 + 0xf0);
  iVar8 = *(int *)(lVar10 + 0x30);
  uVar2 = uVar3;
  if ((int)uVar4 <= (int)uVar3) {
    uVar2 = uVar4;
  }
  if (iVar8 < 3) {
    uVar13 = 0;
    fVar17 = *(float *)(param_1 + 0xf4);
  }
  else {
    uVar13 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10);
    fVar17 = *(float *)(param_1 + 0xf4);
  }
  uVar9 = uVar4;
  if ((fVar17 <= 0.0) || (fVar17 = *(float *)(param_1 + 0x40c), fVar17 <= 0.0)) goto LAB_0055957c;
  iVar5 = *(int *)(param_1 + 0x3d8);
  if (iVar8 < 3) {
    local_a8 = 0;
  }
  else {
    local_a8 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10);
  }
  uVar11 = 2;
  if (1 < iVar5) {
    uVar11 = 3;
  }
  local_a0 = *(undefined8 *)(*(long *)(param_1 + 800) + 0x18);
  if (iVar5 < 2) {
    local_98 = 0;
    if (iVar8 < 4) goto LAB_00559670;
LAB_00559694:
    uVar13 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x18);
    cVar6 = *(char *)(param_1 + 0x41c);
  }
  else {
    local_98 = *(undefined8 *)(*(long *)(param_1 + 800) + 0x50);
    if (3 < iVar8) goto LAB_00559694;
LAB_00559670:
    uVar13 = 0;
    cVar6 = *(char *)(param_1 + 0x41c);
  }
  if (cVar6 != '\0') goto LAB_0055957c;
  local_128[0] = 1.0 - fVar17;
  iVar8 = *(int *)PTR_DAT_027139b0;
  local_118 = local_128[0];
  if (iVar5 < 2) {
    local_118 = 1.0;
  }
  local_108 = fVar17 * fVar17;
  local_118 = fVar17 * local_118;
  local_128[1] = local_128[0];
  local_128[2] = local_128[0];
  local_128[3] = local_128[0];
  fStack_114 = local_118;
  local_110 = local_118;
  fStack_10c = local_118;
  fStack_104 = local_108;
  local_100 = local_108;
  fStack_fc = local_108;
  if (iVar8 < 1) {
    plVar14 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar14,0);
    *(long **)PTR_DAT_027139b8 = plVar14;
    *piVar16 = 1;
LAB_00559754:
    if (plVar14 == (long *)0x0) {
      iVar8 = 0;
    }
    else {
      uVar15 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar14 + 0x20))(plVar14);
      piVar16 = (int *)PTR_DAT_027139b0;
      FUN_005b9b10(uVar15,plVar14);
      iVar8 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  else {
    plVar14 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar8 + 1;
    if (iVar8 + 1 < 2) goto LAB_00559754;
  }
  *piVar16 = iVar8;
  FUN_0058d2d0(0x3f800000,0x3f800000,plVar14,uVar13,uVar11,&local_a8,local_128,0,0);
  *(undefined1 *)(param_1 + 0x41c) = 1;
  uVar9 = *(uint *)(param_1 + 0xf0);
LAB_0055957c:
  __src = *(void **)(*(long *)(param_1 + 0x328) + 0x38);
  puVar1 = (undefined8 *)((long)__src + (long)(int)uVar9 * 8);
  if (((int)uVar2 < 1) || (memcpy(local_128,__src,(ulong)uVar2 << 3), (int)uVar2 < 0x10)) {
    if ((int)uVar4 <= (int)uVar3) {
      uVar3 = uVar4;
    }
                    /* WARNING: Subroutine does not return */
    memset(local_128 + (long)(int)uVar2 * 2,0,(ulong)(0xf - uVar3) * 8 + 8);
  }
  local_a8 = *puVar1;
  local_a0 = puVar1[1];
  lVar10 = 0x338;
  if ((param_2 & 1) == 0) {
    lVar10 = 0x330;
  }
  FUN_005597e0(param_1,puVar12,uVar13,*(undefined8 *)(param_1 + lVar10),local_128,&local_a8,2,
               param_2 & 1);
  FUN_005a0730(auStack_90);
  return 0;
}


