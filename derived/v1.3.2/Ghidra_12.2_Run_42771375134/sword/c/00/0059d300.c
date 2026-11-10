/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059d300; name: FUN_0059d300
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0059d300(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,undefined4 param_6)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_80;
  undefined8 local_78;
  float local_70;
  undefined4 local_6c;
  undefined1 local_64 [4];
  
  puVar6 = PTR_DAT_02713ca8;
  puVar7 = PTR_DAT_02713ca0;
  uVar16 = *(undefined8 *)
            (*(long *)(param_1 + (long)*(int *)(param_1 + 0xa0) * 8 + 0xd0) + (ulong)param_5 * 8);
  uVar15 = (ulong)param_5;
  if (((param_3 >> 1 & 1) == 0) || (*PTR_DAT_02713aa0 != '\0')) {
    if (*PTR_DAT_02713aa0 == '\0' || (param_3 & 0x100000) != 0) {
      local_64[0] = 0;
      if (*(long *)(PTR_DAT_02713ca0 + (ulong)param_2 * 8) == 0) goto LAB_0059d454;
      uVar17 = (ulong)param_2;
      uVar10 = FUN_0059d050(0x3f800000,0x3f800000,*(long *)(PTR_DAT_02713ca0 + (ulong)param_2 * 8),
                            param_2,*(undefined4 *)(PTR_DAT_02713ca8 + uVar17 * 4),param_3,param_3,1
                            ,0,0,0,0,0,local_64);
      iVar9 = (int)uVar10;
      if (((param_3 >> 0x14 & 1) != 0) || (iVar9 < 0)) goto joined_r0x0059d450;
      *(undefined8 *)(puVar7 + uVar17 * 8) = 0;
      *(undefined4 *)(puVar6 + uVar17 * 4) = 0;
      iVar9 = *(int *)(param_1 + 0x9c);
    }
    else {
      uVar10 = FUN_0059e130(0x3f800000,0,0,local_64,0);
      iVar9 = (int)uVar10;
joined_r0x0059d450:
      if (iVar9 < 0) {
        return uVar10;
      }
LAB_0059d454:
      iVar9 = *(int *)(param_1 + 0x9c);
    }
    if (iVar9 == 0) goto LAB_0059d36c;
LAB_0059d460:
    uVar12 = *(uint *)(param_1 + 0x54);
LAB_0059d464:
    bVar8 = true;
  }
  else {
    local_64[0] = 0;
    if (*(int *)(param_1 + 0x9c) != 0) goto LAB_0059d460;
LAB_0059d36c:
    uVar12 = *(uint *)(param_1 + 0x54);
    if (*(uint *)(*(long *)(param_1 + 0x80) + uVar15 * 0x18 + 8) !=
        uVar12 >> (ulong)(param_5 & 0x1f)) goto LAB_0059d464;
    bVar8 = *(uint *)(*(long *)(param_1 + 0x80) + uVar15 * 0x18 + 0xc) !=
            *(uint *)(param_1 + 0x58) >> (ulong)(param_5 & 0x1f);
  }
  puVar7 = PTR_DAT_02713a88;
  plVar11 = *(long **)(param_1 + 0x20);
  uVar3 = *(uint *)(PTR_DAT_02713a88 + 0x10);
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = *(uint *)(plVar11 + 5) / uVar3;
  }
  uVar3 = *(uint *)(plVar11 + 5) - uVar4 * uVar3;
  if ((uVar12 < *(uint *)(*(long *)(param_1 + 0x68) +
                         (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4))) ||
     (*(uint *)(param_1 + 0x58) < *(uint *)(*(long *)(param_1 + 0x68) + (long)(int)uVar3 * 0x10 + 4)
     )) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  uVar16 = (**(code **)(*plVar11 + 0x38))(plVar11,param_2,uVar16,param_6);
  puVar6 = PTR_DAT_02713ca8;
  if ((int)uVar16 < 0) {
    return uVar16;
  }
  *(long *)(PTR_DAT_02713ca0 + (ulong)param_2 * 8) = param_1;
  *(uint *)(puVar6 + (ulong)param_2 * 4) = param_5;
  if ((((param_3 >> 2 & 1) == 0) && (-1 < *(int *)(param_1 + 0x2c))) &&
     (*(long *)(*(long *)(param_1 + (long)*(int *)(param_1 + 0xa0) * 8 + 0xe0) + uVar15 * 8) != 0))
  {
    FUN_0059d880(0x3f800000,8,0,0);
  }
  puVar6 = PTR_DAT_027139b0;
  if (!bVar5 || (param_3 & 0x10) != 0) goto LAB_0059d7b4;
  iVar9 = *(int *)PTR_DAT_027139b0;
  if (iVar9 < 1) {
    plVar11 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar11,0);
    *(long **)PTR_DAT_027139b8 = plVar11;
    *(undefined4 *)puVar6 = 1;
    if (plVar11 != (long *)0x0) goto LAB_0059d570;
LAB_0059d5f8:
    iVar9 = 0;
  }
  else {
    plVar11 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar9 + 1;
    if (iVar9 + 1 < 2) {
      if (plVar11 == (long *)0x0) goto LAB_0059d5f8;
LAB_0059d570:
      uVar16 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar11 + 0x20))(plVar11);
      FUN_005b9b10(uVar16,plVar11);
      iVar9 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *(int *)puVar6 = iVar9;
  fVar20 = (float)(*(uint *)(param_1 + 0x54) >> (ulong)(param_5 & 0x1f));
  uVar12 = *(uint *)(puVar7 + 0x10);
  if (uVar12 < 2) {
    uVar12 = 1;
  }
  fVar21 = (float)(*(uint *)(param_1 + 0x58) >> (ulong)(param_5 & 0x1f));
  uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + 0x28);
  uVar4 = 0;
  if (uVar12 != 0) {
    uVar4 = uVar3 / uVar12;
  }
  puVar1 = (uint *)(*(long *)(param_1 + 0x68) + (long)(int)(uVar3 - uVar4 * uVar12) * 0x10);
  fVar18 = (float)(int)((float)(*puVar1 >> (ulong)(param_5 & 0x1f)) + DAT_01d4c2dc);
  if (fVar18 <= fVar20) {
    fVar18 = fVar20;
  }
  local_80 = 0;
  local_78 = 0;
  fVar19 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x9c));
  fVar22 = (float)(int)((float)(puVar1[1] >> (ulong)(param_5 & 0x1f)) + DAT_01d4c2dc);
  if (fVar22 <= fVar21) {
    fVar22 = fVar21;
  }
  FUN_00578450(fVar19,fVar19,(fVar19 + fVar19 + fVar18) - fVar19,(fVar22 + fVar19 + fVar19) - fVar19
               ,fVar19,fVar19,(fVar20 + fVar19) - fVar19,(fVar21 + fVar19) - fVar19,plVar11,
               &local_80,0);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar12 = *(uint *)(puVar7 + 0x10);
    if (uVar12 < 2) {
      uVar12 = 1;
    }
    if (0 < (int)uVar12) {
      uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + 0x28);
      uVar4 = 0;
      if (uVar12 != 0) {
        uVar4 = uVar3 / uVar12;
      }
      uVar3 = uVar3 - uVar4 * uVar12;
      if (uVar3 == 0x7fffffff) {
        lVar13 = 0;
        lVar14 = 0;
        do {
          lVar14 = lVar14 + 1;
          *(undefined4 *)(*(long *)(param_1 + 0x68) + lVar13) = *(undefined4 *)(param_1 + 0x54);
          *(undefined4 *)(*(long *)(param_1 + 0x68) + lVar13 + 4) = *(undefined4 *)(param_1 + 0x58);
          *(undefined4 *)(*(long *)(param_1 + 0x68) + lVar13 + 8) = *(undefined4 *)(param_1 + 0x5c);
          lVar2 = *(long *)(param_1 + 0x68) + lVar13;
          lVar13 = lVar13 + 0x10;
          *(undefined4 *)(lVar2 + 0xc) = *(undefined4 *)(param_1 + 0x60);
        } while (lVar14 < (int)uVar12);
      }
      else {
        uVar15 = 0;
        lVar14 = (ulong)uVar3 * 0x10;
        do {
          if (uVar15 == uVar3) {
            *(undefined4 *)(*(long *)(param_1 + 0x68) + lVar14) = *(undefined4 *)(param_1 + 0x54);
            *(undefined4 *)(*(long *)(param_1 + 0x68) + lVar14 + 4) =
                 *(undefined4 *)(param_1 + 0x58);
            *(undefined4 *)(*(long *)(param_1 + 0x68) + lVar14 + 8) =
                 *(undefined4 *)(param_1 + 0x5c);
            *(undefined4 *)(*(long *)(param_1 + 0x68) + lVar14 + 0xc) =
                 *(undefined4 *)(param_1 + 0x60);
          }
          uVar15 = uVar15 + 1;
        } while ((long)uVar15 < (long)(int)uVar12);
      }
    }
  }
LAB_0059d7b4:
  local_70 = *(float *)(param_1 + 0x70);
  if (((local_70 != 0.0) || ((bool)(bVar8 | *(float *)(param_1 + 0x74) != 1.0))) &&
     ((param_4 & 1) != 0)) {
    local_6c = *(undefined4 *)(param_1 + 0x74);
    local_78 = CONCAT44(*(uint *)(param_1 + 0x58) >> (ulong)(param_5 & 0x1f),
                        *(uint *)(param_1 + 0x54) >> (ulong)(param_5 & 0x1f));
    local_80 = CONCAT44((*(uint *)(param_1 + 0x60) >> (ulong)(param_5 & 0x1f)) +
                        *(int *)(param_1 + 0x9c),
                        (*(uint *)(param_1 + 0x5c) >> (ulong)(param_5 & 0x1f)) +
                        *(int *)(param_1 + 0x9c));
    uVar16 = (**(code **)(**(long **)(param_1 + 0x20) + 0x80))(*(long **)(param_1 + 0x20),&local_80)
    ;
    if ((int)uVar16 < 0) {
      return uVar16;
    }
  }
  if (*(long *)(param_1 + 0x120) != 0) {
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  return 0;
}


