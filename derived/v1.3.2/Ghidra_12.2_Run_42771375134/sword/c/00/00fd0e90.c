/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd0e90; name: FUN_00fd0e90
 */


void FUN_00fd0e90(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *local_c0;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  local_c0 = param_2;
LAB_00fd0ef4:
  puVar13 = local_c0 + -2;
LAB_00fd0f1c:
  puVar20 = param_1;
  lVar14 = (long)local_c0 - (long)puVar20;
  uVar11 = lVar14 >> 4;
  switch(uVar11) {
  case 0:
  case 1:
    return;
  case 2:
    lVar14 = *param_3;
    FUN_012b4190(auStack_80,lVar14 + 0x68,(long)*(int *)((long)local_c0 - 4));
    local_98 = 0xc0f8c07cd4198abc;
    pcStack_90 = "showNum";
    local_88 = 7;
    FUN_012b4250(auStack_70,auStack_80,&local_98);
    iVar6 = FUN_012b4420(auStack_70,0);
    FUN_012b4190(auStack_80,lVar14 + 0x68,(long)*(int *)((long)puVar20 + 0xc));
    local_98 = 0xc0f8c07cd4198abc;
    pcStack_90 = "showNum";
    local_88 = 7;
    FUN_012b4250(auStack_70,auStack_80,&local_98);
    iVar7 = FUN_012b4420(auStack_70,0);
    if (iVar6 < iVar7) {
      uVar15 = *puVar20;
      uVar2 = puVar20[1];
      uVar3 = local_c0[-1];
      *puVar20 = local_c0[-2];
      puVar20[1] = uVar3;
      local_c0[-2] = uVar15;
      local_c0[-1] = uVar2;
      return;
    }
    return;
  case 3:
    FUN_00fd1910(puVar20,puVar20 + 2,puVar13,param_3);
    return;
  case 4:
    FUN_00fd1c30(puVar20,puVar20 + 2,puVar20 + 4,puVar13,param_3);
    return;
  case 5:
    FUN_00fd1ea0(puVar20,puVar20 + 2,puVar20 + 4,puVar20 + 6,puVar13,param_3);
    return;
  }
  if (0x1ef < lVar14) {
    uVar9 = uVar11;
    if ((long)uVar11 < 0) {
      uVar9 = uVar11 + 1;
    }
    puVar19 = puVar20 + ((long)uVar9 >> 1) * 2;
    if (lVar14 < 0x3e71) {
      iVar6 = FUN_00fd1910(puVar20,puVar19,puVar13,param_3);
    }
    else {
      uVar9 = uVar11 + 3;
      if (-1 < (long)uVar11) {
        uVar9 = uVar11;
      }
      lVar14 = (uVar9 & 0x3ffffffffffffffc) * 4;
      iVar6 = FUN_00fd1ea0(puVar20,(long)puVar20 + lVar14,puVar19,(long)puVar19 + lVar14,puVar13,
                           param_3);
    }
    lVar14 = *param_3;
    FUN_012b4190(auStack_80,lVar14 + 0x68,(long)*(int *)((long)puVar20 + 0xc));
    local_98 = 0xc0f8c07cd4198abc;
    pcStack_90 = "showNum";
    local_88 = 7;
    FUN_012b4250(auStack_70,auStack_80,&local_98);
    iVar7 = FUN_012b4420(auStack_70,0);
    FUN_012b4190(auStack_80,lVar14 + 0x68,(long)*(int *)((long)puVar19 + 0xcU));
    local_98 = 0xc0f8c07cd4198abc;
    pcStack_90 = "showNum";
    local_88 = 7;
    FUN_012b4250(auStack_70,auStack_80,&local_98);
    iVar8 = FUN_012b4420(auStack_70,0);
    if (iVar8 <= iVar7) {
      puVar23 = local_c0 + -4;
LAB_00fd1050:
      puVar17 = puVar23;
      if (puVar20 != puVar17) goto code_r0x00fd105c;
      lVar14 = *param_3;
      puVar19 = puVar20 + 2;
      FUN_012b4190(auStack_80,lVar14 + 0x68,(long)*(int *)((long)puVar20 + 0xc));
      local_98 = 0xc0f8c07cd4198abc;
      pcStack_90 = "showNum";
      local_88 = 7;
      FUN_012b4250(auStack_70,auStack_80,&local_98);
      iVar6 = FUN_012b4420(auStack_70,0);
      FUN_012b4190(auStack_80,lVar14 + 0x68,(long)*(int *)((long)local_c0 - 4));
      local_98 = 0xc0f8c07cd4198abc;
      pcStack_90 = "showNum";
      local_88 = 7;
      FUN_012b4250(auStack_70,auStack_80,&local_98);
      iVar7 = FUN_012b4420(auStack_70,0);
      if (iVar7 <= iVar6) {
        if (puVar19 == puVar13) {
          return;
        }
        puVar19 = puVar20 + 4;
        while( true ) {
          lVar14 = *param_3;
          FUN_012b4190(auStack_80,lVar14 + 0x68,(long)*(int *)((long)puVar20 + 0xc));
          local_98 = 0xc0f8c07cd4198abc;
          pcStack_90 = "showNum";
          local_88 = 7;
          FUN_012b4250(auStack_70,auStack_80,&local_98);
          iVar6 = FUN_012b4420(auStack_70,0);
          FUN_012b4190(auStack_80,lVar14 + 0x68,(long)*(int *)((long)puVar19 - 4));
          local_98 = 0xc0f8c07cd4198abc;
          pcStack_90 = "showNum";
          local_88 = 7;
          FUN_012b4250(auStack_70,auStack_80,&local_98);
          iVar7 = FUN_012b4420(auStack_70,0);
          if (iVar6 < iVar7) break;
          puVar19 = puVar19 + 2;
          if (local_c0 == puVar19) {
            return;
          }
        }
        local_98 = puVar19[-2];
        pcStack_90 = (char *)puVar19[-1];
        uVar15 = local_c0[-1];
        puVar19[-2] = *puVar13;
        puVar19[-1] = uVar15;
        *puVar13 = local_98;
        local_c0[-1] = pcStack_90;
      }
      if (puVar19 == puVar13) {
        return;
      }
      while( true ) {
        param_1 = puVar19 + -2;
        do {
          puVar23 = param_1;
          lVar14 = *param_3;
          FUN_012b4190(auStack_80,lVar14 + 0x68,(long)*(int *)((long)puVar20 + 0xc));
          local_98 = 0xc0f8c07cd4198abc;
          pcStack_90 = "showNum";
          local_88 = 7;
          FUN_012b4250(auStack_70,auStack_80,&local_98);
          iVar6 = FUN_012b4420(auStack_70,0);
          FUN_012b4190(auStack_80,lVar14 + 0x68,(long)*(int *)((long)puVar23 + 0x1c));
          local_98 = 0xc0f8c07cd4198abc;
          pcStack_90 = "showNum";
          local_88 = 7;
          FUN_012b4250(auStack_70,auStack_80,&local_98);
          iVar7 = FUN_012b4420(auStack_70,0);
          param_1 = puVar23 + 2;
        } while (iVar7 <= iVar6);
        puVar19 = puVar23 + 4;
        do {
          puVar17 = puVar13;
          lVar14 = *param_3;
          puVar13 = puVar17 + -2;
          FUN_012b4190(auStack_80,lVar14 + 0x68,(long)*(int *)((long)puVar20 + 0xc));
          local_98 = 0xc0f8c07cd4198abc;
          pcStack_90 = "showNum";
          local_88 = 7;
          FUN_012b4250(auStack_70,auStack_80,&local_98);
          iVar6 = FUN_012b4420(auStack_70,0);
          FUN_012b4190(auStack_80,lVar14 + 0x68,(long)*(int *)((long)puVar17 + -4));
          local_98 = 0xc0f8c07cd4198abc;
          pcStack_90 = "showNum";
          local_88 = 7;
          FUN_012b4250(auStack_70,auStack_80,&local_98);
          iVar7 = FUN_012b4420(auStack_70,0);
        } while (iVar6 < iVar7);
        if (puVar13 <= param_1) break;
        local_98 = *param_1;
        pcStack_90 = (char *)puVar23[3];
        uVar15 = puVar17[-1];
        *param_1 = *puVar13;
        puVar23[3] = uVar15;
        *puVar13 = local_98;
        puVar17[-1] = pcStack_90;
      }
      uVar10 = 4;
      goto LAB_00fd15e8;
    }
    puVar17 = puVar13;
    if (puVar13 <= puVar20 + 2) goto LAB_00fd103c;
    goto LAB_00fd110c;
  }
  FUN_00fd1910(puVar20,puVar20 + 2,puVar20 + 4,param_3);
  if (puVar20 + 6 == local_c0) {
    return;
  }
  lVar14 = 0;
  puVar13 = puVar20 + 6;
  puVar19 = puVar20 + 4;
  goto LAB_00fd171c;
code_r0x00fd105c:
  lVar14 = *param_3;
  FUN_012b4190(auStack_80,lVar14 + 0x68,(long)*(int *)((long)puVar17 + 0xc));
  local_98 = 0xc0f8c07cd4198abc;
  pcStack_90 = "showNum";
  local_88 = 7;
  FUN_012b4250(auStack_70,auStack_80,&local_98);
  iVar7 = FUN_012b4420(auStack_70,0);
  FUN_012b4190(auStack_80,lVar14 + 0x68,(long)*(int *)((long)puVar19 + 0xcU));
  local_98 = 0xc0f8c07cd4198abc;
  pcStack_90 = "showNum";
  local_88 = 7;
  FUN_012b4250(auStack_70,auStack_80,&local_98);
  iVar8 = FUN_012b4420(auStack_70,0);
  puVar23 = puVar17 + -2;
  if (iVar7 < iVar8) goto code_r0x00fd10dc;
  goto LAB_00fd1050;
code_r0x00fd10dc:
  local_98 = *puVar20;
  pcStack_90 = (char *)puVar20[1];
  iVar6 = iVar6 + 1;
  uVar15 = puVar17[1];
  *puVar20 = *puVar17;
  puVar20[1] = uVar15;
  *puVar17 = local_98;
  puVar17[1] = pcStack_90;
  if (puVar20 + 2 < puVar17) {
LAB_00fd110c:
    puVar22 = puVar20 + 2;
    while( true ) {
      puVar23 = puVar22 + -2;
      do {
        puVar21 = puVar23;
        lVar14 = *param_3;
        FUN_012b4190(auStack_80,lVar14 + 0x68,(long)*(int *)((long)puVar21 + 0x1c));
        local_98 = 0xc0f8c07cd4198abc;
        pcStack_90 = "showNum";
        local_88 = 7;
        FUN_012b4250(auStack_70,auStack_80,&local_98);
        iVar7 = FUN_012b4420(auStack_70,0);
        FUN_012b4190(auStack_80,lVar14 + 0x68,(long)*(int *)((long)puVar19 + 0xc));
        local_98 = 0xc0f8c07cd4198abc;
        pcStack_90 = "showNum";
        local_88 = 7;
        FUN_012b4250(auStack_70,auStack_80,&local_98);
        iVar8 = FUN_012b4420(auStack_70,0);
        puVar23 = puVar21 + 2;
      } while (iVar7 < iVar8);
      puVar22 = puVar21 + 4;
      do {
        puVar18 = puVar17;
        lVar14 = *param_3;
        puVar17 = puVar18 + -2;
        FUN_012b4190(auStack_80,lVar14 + 0x68,(long)*(int *)((long)puVar18 + -4));
        local_98 = 0xc0f8c07cd4198abc;
        pcStack_90 = "showNum";
        local_88 = 7;
        FUN_012b4250(auStack_70,auStack_80,&local_98);
        iVar7 = FUN_012b4420(auStack_70,0);
        FUN_012b4190(auStack_80,lVar14 + 0x68,(long)*(int *)((long)puVar19 + 0xc));
        local_98 = 0xc0f8c07cd4198abc;
        pcStack_90 = "showNum";
        local_88 = 7;
        FUN_012b4250(auStack_70,auStack_80,&local_98);
        iVar8 = FUN_012b4420(auStack_70,0);
      } while (iVar8 <= iVar7);
      if (puVar17 < puVar23) break;
      local_98 = *puVar23;
      pcStack_90 = (char *)puVar21[3];
      puVar1 = puVar17;
      if (puVar19 != puVar23) {
        puVar1 = puVar19;
      }
      uVar15 = puVar18[-1];
      *puVar23 = *puVar17;
      puVar21[3] = uVar15;
      *puVar17 = local_98;
      puVar18[-1] = pcStack_90;
      iVar6 = iVar6 + 1;
      puVar19 = puVar1;
    }
    if (puVar23 == puVar19) goto joined_r0x00fd1300;
  }
  else {
LAB_00fd103c:
    puVar23 = puVar20 + 2;
    if (puVar23 == puVar19) goto joined_r0x00fd1300;
  }
  lVar14 = *param_3;
  FUN_012b4190(auStack_80,lVar14 + 0x68,(long)*(int *)((long)puVar19 + 0xc));
  local_98 = 0xc0f8c07cd4198abc;
  pcStack_90 = "showNum";
  local_88 = 7;
  FUN_012b4250(auStack_70,auStack_80,&local_98);
  iVar7 = FUN_012b4420(auStack_70,0);
  FUN_012b4190(auStack_80,lVar14 + 0x68,(long)*(int *)((long)puVar23 + 0xc));
  local_98 = 0xc0f8c07cd4198abc;
  pcStack_90 = "showNum";
  local_88 = 7;
  FUN_012b4250(auStack_70,auStack_80,&local_98);
  iVar8 = FUN_012b4420(auStack_70,0);
  if (iVar7 < iVar8) {
    local_98 = *puVar23;
    pcStack_90 = (char *)puVar23[1];
    iVar6 = iVar6 + 1;
    uVar15 = puVar19[1];
    *puVar23 = *puVar19;
    puVar23[1] = uVar15;
    *puVar19 = local_98;
    puVar19[1] = pcStack_90;
  }
joined_r0x00fd1300:
  if (iVar6 == 0) {
    uVar11 = FUN_00fd21d0(puVar20,puVar23,param_3);
    uVar9 = FUN_00fd21d0(puVar23 + 2,local_c0,param_3);
    if ((uVar9 & 1) != 0) goto LAB_00fd1600;
    param_1 = puVar23 + 2;
    if ((uVar11 & 1) != 0) goto LAB_00fd0f1c;
  }
  if ((long)local_c0 - (long)puVar23 <= (long)puVar23 - (long)puVar20) {
    FUN_00fd0e90(puVar23 + 2,local_c0,param_3);
    param_1 = puVar20;
    local_c0 = puVar23;
    goto LAB_00fd0ef4;
  }
  FUN_00fd0e90(puVar20,puVar23,param_3);
  param_1 = puVar23 + 2;
  goto LAB_00fd0f1c;
LAB_00fd1600:
  bVar5 = (uVar11 & 1) == 0;
  if (bVar5) {
    local_c0 = puVar23;
  }
  uVar10 = 1;
  if (bVar5) {
    uVar10 = 2;
  }
  param_1 = puVar20;
  if (4 < uVar10) {
    return;
  }
LAB_00fd15e8:
  if ((1 << (ulong)uVar10 & 0x15U) == 0) {
    return;
  }
  goto LAB_00fd0ef4;
LAB_00fd171c:
  puVar23 = puVar13;
  lVar12 = *param_3;
  FUN_012b4190(auStack_80,lVar12 + 0x68,(long)*(int *)((long)puVar23 + 0xc));
  local_98 = 0xc0f8c07cd4198abc;
  pcStack_90 = "showNum";
  local_88 = 7;
  FUN_012b4250(auStack_70,auStack_80,&local_98);
  iVar6 = FUN_012b4420(auStack_70,0);
  FUN_012b4190(auStack_80,lVar12 + 0x68,(long)*(int *)((long)puVar19 + 0xc));
  local_98 = 0xc0f8c07cd4198abc;
  pcStack_90 = "showNum";
  local_88 = 7;
  FUN_012b4250(auStack_70,auStack_80,&local_98);
  iVar7 = FUN_012b4420(auStack_70,0);
  if (iVar6 < iVar7) {
    uVar15 = *puVar23;
    uVar4 = *(undefined4 *)(puVar23 + 1);
    iVar6 = *(int *)((long)puVar23 + 0xc);
    lVar12 = lVar14;
    do {
      lVar16 = lVar12;
      *(undefined8 *)((long)puVar20 + lVar16 + 0x30) =
           *(undefined8 *)((long)puVar20 + lVar16 + 0x20);
      *(undefined8 *)((long)puVar20 + lVar16 + 0x38) =
           *(undefined8 *)((long)puVar20 + lVar16 + 0x28);
      if (lVar16 == -0x20) {
        puVar13 = puVar20;
        goto LAB_00fd186c;
      }
      lVar12 = *param_3;
      FUN_012b4190(auStack_80,lVar12 + 0x68,(long)iVar6);
      local_98 = 0xc0f8c07cd4198abc;
      pcStack_90 = "showNum";
      local_88 = 7;
      FUN_012b4250(auStack_70,auStack_80,&local_98);
      iVar7 = FUN_012b4420(auStack_70,0);
      FUN_012b4190(auStack_80,lVar12 + 0x68,(long)*(int *)((long)puVar20 + lVar16 + 0x1c));
      local_98 = 0xc0f8c07cd4198abc;
      pcStack_90 = "showNum";
      local_88 = 7;
      FUN_012b4250(auStack_70,auStack_80,&local_98);
      iVar8 = FUN_012b4420(auStack_70,0);
      lVar12 = lVar16 + -0x10;
    } while (iVar7 < iVar8);
    puVar13 = (undefined8 *)((long)puVar20 + lVar16 + 0x20);
LAB_00fd186c:
    *puVar13 = uVar15;
    *(undefined4 *)(puVar13 + 1) = uVar4;
    *(int *)((long)puVar13 + 0xc) = iVar6;
  }
  lVar14 = lVar14 + 0x10;
  puVar13 = puVar23 + 2;
  puVar19 = puVar23;
  if (puVar23 + 2 == local_c0) {
    return;
  }
  goto LAB_00fd171c;
}


