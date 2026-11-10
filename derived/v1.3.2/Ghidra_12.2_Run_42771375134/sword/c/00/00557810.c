/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00557810; name: FUN_00557810
 */


undefined8 FUN_00557810(long param_1,long param_2,long param_3)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  char cVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  char cVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  float local_9c;
  float fStack_98;
  undefined4 local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  
  puVar5 = PTR_DAT_027139b0;
  iVar11 = *(int *)PTR_DAT_027139b0;
  if (iVar11 < 1) {
    plVar15 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar15,0);
    *(long **)PTR_DAT_027139b8 = plVar15;
    *(undefined4 *)puVar5 = 1;
    if (plVar15 != (long *)0x0) goto LAB_00557878;
LAB_00557924:
    *(undefined4 *)puVar5 = 0;
    iVar11 = *(int *)(param_1 + 0x140);
    if (iVar11 == 3) goto LAB_005578c0;
LAB_00557938:
    if (iVar11 - 1U < 2) {
LAB_00557944:
      if (*(float *)(param_1 + 0x13c) == 0.0) {
        iVar11 = 0;
      }
    }
  }
  else {
    plVar15 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar11 + 1;
    if (iVar11 + 1 < 2) {
      if (plVar15 == (long *)0x0) goto LAB_00557924;
LAB_00557878:
      uVar16 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar15 + 0x20))(plVar15);
      FUN_005b9b10(uVar16,plVar15);
      iVar11 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
    *(int *)puVar5 = iVar11;
    iVar11 = *(int *)(param_1 + 0x140);
    if (iVar11 != 3) goto LAB_00557938;
LAB_005578c0:
    if (*(float *)(param_1 + 0x144) == 1.0) {
      iVar11 = 2;
      goto LAB_00557944;
    }
    iVar11 = 3;
  }
  lVar12 = param_2;
  do {
    lVar14 = lVar12;
    lVar12 = *(long *)(lVar14 + 0x120);
  } while (lVar12 != 0);
  uVar3 = *(int *)(param_1 + 0x2e0) - 2;
  lVar12 = **(long **)(*(long *)(param_1 + 0x2f0) + 0x38);
  uVar2 = *(uint *)(*(long *)(lVar14 + 0xa8) + 0x5c);
  bVar8 = true;
  if (*(uint *)(param_2 + 0x54) <= (*(uint *)(lVar12 + 0x54) << 1 | 1)) {
    bVar8 = (*(int *)(lVar12 + 0x58) << 1 | 1U) < *(uint *)(param_2 + 0x58);
  }
  uVar3 = (uint)(uVar3 < 0xd) & 0x1249U >> (ulong)(uVar3 & 0x1f);
  bVar8 = (bool)(bVar8 & *(int *)(param_1 + 0x308) == 0);
  if (*(uint *)(param_2 + 0x54) == *(uint *)(lVar12 + 0x54)) {
    cVar17 = *(char *)(param_1 + 0x180);
    bVar4 = *(int *)(param_2 + 0x58) != *(int *)(lVar12 + 0x58);
    if ((uVar2 & 0x20000) != 0) {
      bVar4 = bVar8;
    }
    if (uVar3 != 0) goto LAB_00557a1c;
LAB_00557a00:
    bVar8 = true;
  }
  else {
    cVar17 = *(char *)(param_1 + 0x180);
    bVar4 = true;
    if ((uVar2 & 0x20000) != 0) {
      bVar4 = bVar8;
    }
    if (uVar3 == 0) goto LAB_00557a00;
LAB_00557a1c:
    bVar8 = *(float *)(param_1 + 0x164) / *(float *)(param_1 + 0x134) == 1.0;
  }
  cVar10 = *(char *)(param_1 + 0x18c);
  if (cVar17 != '\0') {
    if (cVar10 == '\0') {
      bVar7 = false;
    }
    else {
      bVar7 = 0.0 <= *(float *)(param_1 + 0x198);
    }
    fVar19 = (float)FUN_00578930(*(undefined4 *)(param_1 + 0x124),*(undefined4 *)(param_1 + 0x128),
                                 bVar7);
    cVar10 = *(char *)(param_1 + 0x18c);
    if (cVar10 == '\0') {
      if (*(char *)(param_1 + 0x180) == '\0') {
        fStack_84 = 0.0;
        fVar20 = 0.0;
      }
      else {
        fStack_84 = *(float *)(param_1 + 0x184);
        fVar20 = *(float *)(param_1 + 0x188);
      }
      fStack_84 = fStack_84 * (fVar20 * (*(float *)(param_1 + 0x158) + DAT_01d4c30c) + DAT_01d4bc70)
      ;
    }
    else {
      fStack_84 = 1.0;
    }
    local_88 = fVar19 * fStack_84;
    fVar21 = (fStack_84 + fStack_84) * *(float *)(param_1 + 0x160) * 0.5;
    fVar20 = *(float *)(param_1 + 0x15c) * (local_88 + local_88) * 0.5;
    fStack_8c = -fStack_84 - fVar21;
    local_90 = -(fVar19 * fStack_84) - fVar20;
    local_88 = local_88 - fVar20;
    fStack_84 = fStack_84 - fVar21;
  }
  pfVar1 = &local_90;
  if (cVar17 == '\0') {
    pfVar1 = (float *)0x0;
  }
  if (cVar10 == '\0') {
    uVar22 = 0;
  }
  else {
    uVar22 = *(undefined4 *)(param_1 + 0x158);
  }
  FUN_00540da0(*(undefined8 *)(param_1 + 0x20),0);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x170))(*(long **)(param_1 + 0x20),0);
  bVar7 = false;
  switch(*(undefined4 *)(param_1 + 0xd4)) {
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
    bVar7 = true;
  }
  uVar18 = *(undefined4 *)(param_1 + 0x2e0);
  if (!(bool)(iVar11 == 0 & bVar8 & cVar17 == '\0')) {
    if (bVar4) {
      FUN_00540da0(*(undefined8 *)(param_1 + 0x20),0);
      (**(code **)(**(long **)(param_1 + 0x20) + 0x170))(*(long **)(param_1 + 0x20),0);
      if (uVar3 == 0) {
        fVar19 = 1.0 / (*(float *)(param_1 + 0x134) + *(float *)(param_1 + 0x13c));
        local_a0 = *(float *)(param_1 + 0x164) * fVar19;
        uVar18 = *(undefined4 *)(param_1 + 0x2e0);
        lVar12 = *(long *)(param_1 + 0x2f0);
        if (*(int *)(lVar12 + 0x30) < 1) goto LAB_00557c70;
LAB_00557d24:
        lVar12 = **(long **)(lVar12 + 0x38);
      }
      else {
        uVar18 = 0;
        fVar19 = 0.0;
        local_a0 = 1.0;
        lVar12 = *(long *)(param_1 + 0x2f0);
        if (0 < *(int *)(lVar12 + 0x30)) goto LAB_00557d24;
LAB_00557c70:
        lVar12 = 0;
      }
      local_94 = 0x3f800000;
      local_b0 = 0;
      uStack_a8 = 0;
      local_9c = local_a0;
      fStack_98 = local_a0;
      FUN_0057e050(0,0,0,0x3f800000,plVar15,param_2,lVar12,uVar18,&local_a0,0,0,0,1,&local_b0,0,
                   0xffffffff);
      *(long *)(param_1 + 0x2f8) = lVar12;
      if (uVar3 == 0) {
        fVar19 = 1.0 / fVar19;
        uVar18 = 0;
      }
      else {
        uVar18 = 7;
        switch(*(undefined4 *)(param_1 + 0x2e0)) {
        case 2:
          fVar19 = *(float *)(param_1 + 0x164);
          uVar18 = 1;
          break;
        default:
          uVar18 = *(undefined4 *)(param_1 + 0x2e0);
        case 8:
          fVar19 = *(float *)(param_1 + 0x164);
          break;
        case 5:
          fVar19 = *(float *)(param_1 + 0x164);
          uVar18 = 4;
          break;
        case 0xb:
          fVar19 = *(float *)(param_1 + 0x164);
          uVar18 = 10;
          break;
        case 0xe:
          fVar19 = *(float *)(param_1 + 0x164);
          uVar18 = 0xd;
        }
      }
      fVar20 = *(float *)(param_1 + 0x134);
      lVar14 = lVar12;
      do {
        lVar13 = lVar14;
        lVar14 = *(long *)(lVar13 + 0x120);
      } while (lVar14 != 0);
      plVar9 = *(long **)(lVar13 + 0xa8);
      (**(code **)(*plVar9 + 0x88))(plVar9,1);
      if ((bVar7) && (*(char *)(param_1 + 0x411) != '\0')) {
        FUN_00540e00(*(undefined8 *)(param_1 + 0x20),1);
      }
      FUN_0058e310(fVar19,1.0 / fVar20,*(undefined4 *)(param_1 + 0x13c),
                   *(undefined4 *)(param_1 + 0x144),uVar22,*(undefined4 *)(param_1 + 400),
                   *(undefined4 *)(param_1 + 0x194),*(undefined4 *)(param_1 + 0x198),plVar15,lVar12,
                   param_3,iVar11,pfVar1,uVar18,1,0);
      do {
        lVar14 = lVar12;
        lVar12 = *(long *)(lVar14 + 0x120);
      } while (*(long *)(lVar14 + 0x120) != 0);
    }
    else {
      uVar6 = 7;
      switch(uVar18) {
      case 2:
        uVar6 = 1;
      case 8:
        uVar18 = uVar6;
        if (*(int *)(param_2 + 0x54) == *(int *)(param_3 + 0x54)) {
LAB_00557cb4:
          if (*(int *)(param_2 + 0x58) == *(int *)(param_3 + 0x58)) {
            lVar12 = param_2;
            do {
              lVar14 = lVar12;
              lVar12 = *(long *)(lVar14 + 0x120);
            } while (lVar12 != 0);
            plVar9 = *(long **)(lVar14 + 0xa8);
            (**(code **)(*plVar9 + 0x88))(plVar9,1);
          }
        }
        break;
      default:
        if (*(int *)(param_2 + 0x54) != *(int *)(param_3 + 0x54)) break;
        goto LAB_00557cb4;
      case 5:
        uVar18 = 4;
        if (*(int *)(param_2 + 0x54) == *(int *)(param_3 + 0x54)) goto LAB_00557cb4;
        break;
      case 0xb:
        uVar18 = 10;
        if (*(int *)(param_2 + 0x54) == *(int *)(param_3 + 0x54)) goto LAB_00557cb4;
        break;
      case 0xe:
        uVar18 = 0xd;
        if (*(int *)(param_2 + 0x54) == *(int *)(param_3 + 0x54)) goto LAB_00557cb4;
      }
      if ((bVar7) && (*(char *)(param_1 + 0x411) != '\0')) {
        FUN_00540e00(*(undefined8 *)(param_1 + 0x20),1);
      }
      FUN_0058e310(*(undefined4 *)(param_1 + 0x164),1.0 / *(float *)(param_1 + 0x134),
                   *(undefined4 *)(param_1 + 0x13c),*(undefined4 *)(param_1 + 0x144),uVar22,
                   *(undefined4 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x194),
                   *(undefined4 *)(param_1 + 0x198),plVar15,param_2,param_3,iVar11,pfVar1,uVar18,1,0
                  );
      *(long *)(param_1 + 0x2f8) = param_3;
      do {
        lVar14 = param_2;
        param_2 = *(long *)(lVar14 + 0x120);
      } while (*(long *)(lVar14 + 0x120) != 0);
    }
    (**(code **)(**(long **)(lVar14 + 0xa8) + 0x88))(*(long **)(lVar14 + 0xa8),0);
    if (bVar7) {
LAB_00557c10:
      if (*(char *)(param_1 + 0x411) != '\0') {
        FUN_00571510(plVar15,0x10,1);
      }
    }
    return 0;
  }
  if ((bVar7) && (*(char *)(param_1 + 0x411) != '\0')) {
    FUN_00540e00(*(undefined8 *)(param_1 + 0x20),1);
  }
  local_a0 = *(float *)(param_1 + 0x164) / *(float *)(param_1 + 0x134);
  local_b0 = 0;
  uStack_a8 = 0;
  local_94 = 0x3f800000;
  local_9c = local_a0;
  fStack_98 = local_a0;
  FUN_0057e050(0,0,0,0x3f800000,plVar15,param_2,param_3,uVar18,&local_a0,1,0,0,1,&local_b0,0,
               0xffffffff);
  *(long *)(param_1 + 0x2f8) = param_3;
  if (!bVar7) {
    return 0;
  }
  goto LAB_00557c10;
}


