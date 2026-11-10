/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005282d0; name: FUN_005282d0
 */


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_005282d0(long param_1)

{
  float *pfVar1;
  char *pcVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 uVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  float *pfVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint local_c4;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [12];
  
  pcVar2 = (char *)(param_1 + 0x1050);
  *(undefined1 *)(param_1 + 0x895) = 0;
  *pcVar2 = '\0';
  FUN_0052b950();
  if ((*(char *)(param_1 + 0xce5) == '\0') || (1 < *(int *)(param_1 + 0xce8) - 1U)) {
    local_c4 = 0;
    if (*(char *)(param_1 + 0xf38) == '\0') goto LAB_00528354;
LAB_00528374:
    uVar12 = FUN_00562390(*(undefined4 *)(param_1 + 0x6c4),*(undefined4 *)(param_1 + 0x6c8),
                          *(undefined4 *)(param_1 + 0xf3c),*(undefined4 *)(param_1 + 0xf40));
    lVar15 = *(long *)(param_1 + 0x198);
    iVar19 = *(int *)(lVar15 + 0x10c);
  }
  else {
    local_c4 = FUN_00562390(*(undefined4 *)(param_1 + 0x6c4),*(undefined4 *)(param_1 + 0x6c8),
                            *(undefined4 *)(param_1 + 0xd10),*(undefined4 *)(param_1 + 0xd14));
    if (*(char *)(param_1 + 0xf38) != '\0') goto LAB_00528374;
LAB_00528354:
    uVar12 = 0;
    lVar15 = *(long *)(param_1 + 0x198);
    iVar19 = *(int *)(lVar15 + 0x10c);
  }
  if (-1 < iVar19) {
    *(undefined4 *)(lVar15 + 500) = 0;
  }
  uVar16 = (ulong)*(uint *)(param_1 + 0x478);
  if ((int)*(uint *)(param_1 + 0x478) < 1) {
    iVar19 = 0;
  }
  else {
    pfVar18 = *(float **)(param_1 + 0x858);
    iVar19 = 0;
    do {
      if ((*(byte *)(pfVar18 + 0x18) == 0) ||
         ((0.0 < *(float *)(param_1 + 0x848) &&
          (((0.0 < *pfVar18 || (0.0 < pfVar18[1])) || (0.0 < pfVar18[2])))))) {
        iVar19 = iVar19 + (uint)*(byte *)(pfVar18 + 0x18);
      }
      pfVar18 = pfVar18 + 0x1a;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  FUN_00529fd0(param_1,0,1);
  *(undefined4 *)(param_1 + 0x1078) = 0xffffffff;
  if ((*(char *)(param_1 + 0xce5) == '\0') || (*(char *)(param_1 + 0x8b6) != '\0')) {
    if (*(char *)(param_1 + 0xd80) != '\0') goto LAB_00528434;
LAB_0052851c:
    bVar9 = false;
    lVar15 = *(long *)(param_1 + 0x50);
joined_r0x00528528:
    uVar16 = 0;
    if (lVar15 != 0) goto LAB_0052852c;
LAB_005284a0:
    bVar10 = *(char *)(param_1 + 0x548) != '\0';
    if (0.0 < *(float *)(param_1 + 0xec0)) goto LAB_005284b8;
LAB_0052853c:
    bVar7 = bVar10 ^ 1;
    bVar10 = false;
  }
  else {
    *(undefined4 *)(param_1 + 0x1078) = *(undefined4 *)(param_1 + 0xce8);
    FUN_0052a640(param_1,&local_b4,&local_b8,&local_bc,auStack_ac,auStack_b0);
    if (*(char *)(param_1 + 0xd80) == '\0') goto LAB_0052851c;
LAB_00528434:
    if (((*(int *)(param_1 + 0xd84) == 0) || (*(long *)(param_1 + 0xd88) == 0)) ||
       ((*(float *)(param_1 + 0xd9c) == 0.0 &&
        (((*(float *)(param_1 + 0xda0) == 0.0 && (*(float *)(param_1 + 0xda4) == 0.0)) &&
         (*(float *)(param_1 + 0xda8) == 0.0)))))) goto LAB_0052851c;
    if (*(char *)(param_1 + 0xde8) == '\0') {
      bVar9 = true;
      lVar15 = *(long *)(param_1 + 0x50);
      goto joined_r0x00528528;
    }
    uVar16 = FUN_00562390(*(undefined4 *)(param_1 + 0x6c4),*(undefined4 *)(param_1 + 0x6c8),
                          *(undefined4 *)(param_1 + 0xde0),*(undefined4 *)(param_1 + 0xde4));
    uVar16 = uVar16 & 0xffffffff;
    bVar9 = true;
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_005284a0;
LAB_0052852c:
    bVar10 = true;
    if (*(float *)(param_1 + 0xec0) <= 0.0) goto LAB_0052853c;
LAB_005284b8:
    if ((*(float *)(param_1 + 0xecc) <= 0.0) || (*(float *)(param_1 + 0xed0) <= 0.0))
    goto LAB_0052853c;
    bVar7 = bVar10 ^ 1;
    bVar10 = (bool)(*(char *)(param_1 + 0xeb8) != '\0' & bVar7);
  }
  fVar28 = 1.0;
  bVar11 = *(char *)(param_1 + 0xf08) != '\0';
  if ((1.0 <= *(float *)(param_1 + 0xf14)) && (*(float *)(param_1 + 0xf18) == 1.0)) {
    bVar11 = false;
  }
  iVar17 = *(int *)(param_1 + 0xf0c);
  fVar27 = *(float *)(param_1 + 0x6c8);
  pfVar18 = (float *)(param_1 + 0x6c4);
  fVar24 = *(float *)(param_1 + 0x6c4);
  pfVar1 = (float *)(param_1 + 0x6c8);
  local_b8 = fVar24;
  local_b4 = fVar27;
  if ((local_c4 & 1) == 0) {
    bVar8 = false;
    if (*(char *)(param_1 + 0xce5) != '\0') {
      if (*(int *)(param_1 + 0xce8) == 2) {
        local_b8 = fVar27;
        local_b4 = fVar24;
        if (fVar27 <= fVar24) {
          local_b8 = fVar24;
          local_b4 = fVar27;
        }
        bVar8 = true;
      }
      else {
        bVar8 = false;
      }
    }
    if ((uVar16 & 1) == 0) goto LAB_00528624;
LAB_00528794:
    fVar23 = local_b4;
    fVar21 = local_b8;
    fVar24 = *(float *)(param_1 + 0x6c4);
    fVar22 = *(float *)(param_1 + 0x6c8);
    fVar27 = *(float *)(param_1 + 0xde4);
    fVar20 = *(float *)(param_1 + 0xde0);
    uVar16 = FUN_00562390(fVar24,fVar22,fVar20,fVar27);
    local_b8 = fVar22;
    if ((uVar16 & 1) != 0) {
      fVar25 = fVar27;
      if (fVar20 == fVar27 || fVar27 > fVar20) {
        fVar25 = fVar24;
      }
      if (fVar27 <= fVar20) {
        fVar27 = fVar22;
      }
      if (fVar25 <= fVar24) {
        fVar25 = fVar24;
      }
      fVar24 = fVar25;
      local_b8 = fVar27;
      if (fVar22 <= fVar27) {
        local_b8 = fVar22;
      }
    }
    if (fVar23 <= fVar24) {
      fVar24 = fVar23;
    }
    bVar8 = true;
    if (local_b8 <= fVar21) {
      local_b8 = fVar21;
    }
    local_b4 = fVar24;
    if ((uVar12 & 1) == 0) goto LAB_00528650;
LAB_005287f8:
    fVar21 = local_b4;
    fVar24 = local_b8;
    fVar22 = *(float *)(param_1 + 0x6c4);
    fVar23 = *(float *)(param_1 + 0x6c8);
    fVar27 = *(float *)(param_1 + 0xf40);
    fVar20 = *(float *)(param_1 + 0xf3c);
    uVar16 = FUN_00562390(fVar22,fVar23,fVar20,fVar27);
    local_b8 = fVar23;
    if ((uVar16 & 1) != 0) {
      fVar25 = fVar27;
      if (fVar20 == fVar27 || fVar27 > fVar20) {
        fVar25 = fVar22;
      }
      if (fVar27 <= fVar20) {
        fVar27 = fVar23;
      }
      if (fVar25 <= fVar22) {
        fVar25 = fVar22;
      }
      fVar22 = fVar25;
      local_b8 = fVar27;
      if (fVar23 <= fVar27) {
        local_b8 = fVar23;
      }
    }
    local_b4 = fVar22;
    if (fVar21 <= fVar22) {
      local_b4 = fVar21;
    }
    if (local_b8 <= fVar24) {
      local_b8 = fVar24;
    }
    bVar8 = true;
    if (bVar10) goto LAB_00528654;
LAB_00528858:
    if (((bool)(0 < iVar19 | bVar7 & bVar11 & iVar17 == 2)) && (!bVar8)) {
      local_b4 = *pfVar18;
      local_b8 = *pfVar1;
      goto LAB_005288b8;
    }
    if (bVar8) goto LAB_005288b8;
    fVar27 = *pfVar18;
    fVar24 = *pfVar1;
    lVar15 = *(long *)(param_1 + 0x1a0);
    fVar21 = fVar27;
    local_b8 = fVar24;
    if (lVar15 == 0) goto LAB_00528a84;
LAB_0052892c:
    fVar24 = local_b8;
    if ((DAT_0275cc3d & 1) == 0) {
      DAT_0275cc3d = 1;
      DAT_0275cd38 = 0x100000000;
      DAT_0275cd40 = 0x300000002;
    }
    local_b4 = fVar27;
    uVar13 = FUN_005afcf0(fVar21,*(undefined4 *)(param_1 + 0x6c8),*(undefined4 *)(param_1 + 0x6d0),
                          *(undefined4 *)(param_1 + 0x6d4),*(undefined4 *)(param_1 + 0x6d8),
                          *(undefined4 *)(param_1 + 0x898),*(undefined4 *)(param_1 + 0x89c),
                          *(undefined4 *)(param_1 + 0x8a4),lVar15,
                          *(undefined4 *)
                           ((long)&DAT_0275cd38 + (ulong)*(uint *)(param_1 + 0x8a0) * 4));
    if ((*(long *)(param_1 + 0x198) != 0) && (*(char *)(*(long *)(param_1 + 0x1a0) + 0x184) != '\0')
       ) {
      FUN_0052baa0(param_1);
    }
    iVar19 = *(int *)(param_1 + 0x918);
    if (iVar19 == 4) {
      if (0.0 <= *(float *)(param_1 + 0x960)) {
        fVar21 = DAT_01d4bc70 /
                 ((*(float *)(param_1 + 0x6d0) + DAT_01d4c30c) * *(float *)(param_1 + 0x920) +
                 DAT_01d4bc70);
        fVar28 = *(float *)(param_1 + 0x95c) * fVar21;
        fVar21 = *(float *)(param_1 + 0x960) * fVar21;
        fVar23 = 1.0;
        if (*(char *)(param_1 + 0x964) != '\0') {
          fVar23 = -1.0;
        }
        fVar22 = (fVar28 + fVar21) * 0.5;
        fVar28 = (fVar21 - fVar28) * fVar23 * 0.5;
      }
      else {
        fVar28 = -1.0;
        fVar22 = 0.0;
      }
      uVar13 = FUN_005affe0(fVar22,fVar28,*(undefined8 *)(param_1 + 0x1a0));
    }
    else if (iVar19 == 3) {
      fVar22 = *(float *)(param_1 + 0x6d0);
      fVar21 = *(float *)(param_1 + 0x950) *
               (DAT_01d4bc70 /
               ((fVar22 + DAT_01d4c30c) * *(float *)(param_1 + 0x920) + DAT_01d4bc70));
      fVar23 = *(float *)(param_1 + 0x954);
      fVar28 = powf(DAT_01d4bc70 / fVar22,*(float *)(param_1 + 0x958));
      fVar28 = atanf(fVar22 * fVar28);
      uVar13 = FUN_005afe30(fVar21,fVar23 * fVar21,fVar28 + fVar28,*(undefined8 *)(param_1 + 0x1a0))
      ;
    }
    else if (iVar19 == 2) {
      fVar21 = 1.0;
      if (*(char *)(param_1 + 0x94c) != '\0') {
        fVar21 = *(float *)(param_1 + 0x89c);
      }
      if (*(char *)(param_1 + 0x94c) != '\0') {
        fVar28 = *(float *)(param_1 + 0x89c);
      }
      uVar13 = FUN_005aa310(ABS(*(float *)(param_1 + 0x948)) * *(float *)(param_1 + 0x93c) * fVar28,
                            *(float *)(param_1 + 0x948) *
                            (*(float *)(param_1 + 0x944) * fVar21 +
                            *(float *)(*(long *)(param_1 + 0x1a0) + 0x1a8) *
                            *(float *)(param_1 + 0x940)));
    }
    *pcVar2 = *(char *)(*(long *)(param_1 + 0x1a0) + 0x184);
    fVar28 = (float)FUN_005afb50(*(undefined4 *)(param_1 + 0xc74),0x3f800000);
    *(float *)(param_1 + 0x1070) = fVar28 * 0.5;
    if (*(float *)(param_1 + 0x8a4) <= 0.0) goto LAB_00528c34;
LAB_00528a98:
    if (((*pfVar18 <= 0.0) || (*pfVar1 <= *pfVar18)) || (*pcVar2 == '\0')) goto LAB_00528c34;
    *(char *)(param_1 + 0x104f) = *(char *)(param_1 + 0xbcd);
    if (*(char *)(param_1 + 0xbcd) != '\0') {
      *(undefined4 *)(param_1 + 0x1064) = *(undefined4 *)(param_1 + 0x898);
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x1f0);
      *(undefined8 *)(param_1 + 0x1054) = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x1e8);
      *(undefined8 *)(param_1 + 0x105c) = uVar6;
      fVar21 = *(float *)(param_1 + 0x1054);
      fVar28 = *(float *)(param_1 + 0x1058);
      goto switchD_00528ca0_caseD_3;
    }
  }
  else {
    fVar21 = *(float *)(param_1 + 0xd14);
    fVar23 = *(float *)(param_1 + 0xd10);
    uVar14 = FUN_00562390(fVar24,fVar27,fVar23,fVar21);
    local_b4 = fVar24;
    local_b8 = fVar27;
    if ((uVar14 & 1) != 0) {
      local_b4 = fVar21;
      if (fVar23 == fVar21 || fVar21 > fVar23) {
        local_b4 = fVar24;
      }
      if (fVar21 <= fVar23) {
        fVar21 = fVar27;
      }
      if (local_b4 <= fVar24) {
        local_b4 = fVar24;
      }
      local_b8 = fVar21;
      if (fVar27 <= fVar21) {
        local_b8 = fVar27;
      }
    }
    if (fVar27 <= local_b4) {
      local_b4 = fVar27;
    }
    if (local_b8 <= fVar24) {
      local_b8 = fVar24;
    }
    bVar8 = true;
    if ((uVar16 & 1) != 0) goto LAB_00528794;
LAB_00528624:
    if (bVar9) {
      fVar27 = *pfVar18;
      if (local_b4 <= *pfVar18) {
        fVar27 = local_b4;
      }
      fVar24 = *pfVar1;
      if (*pfVar1 <= local_b8) {
        fVar24 = local_b8;
      }
      bVar8 = true;
      local_b8 = fVar24;
      local_b4 = fVar27;
    }
    if ((uVar12 & 1) != 0) goto LAB_005287f8;
LAB_00528650:
    if (!bVar10) goto LAB_00528858;
LAB_00528654:
    fVar24 = local_b4;
    fVar27 = local_b8;
    uVar16 = FUN_00527b80(param_1);
    if ((uVar16 & 1) == 0) {
      local_b4 = *pfVar18;
      if (fVar24 <= *pfVar18) {
        local_b4 = fVar24;
      }
      fVar21 = *pfVar1;
    }
    else {
      fVar21 = *(float *)(param_1 + 0x90c);
      fVar23 = *(float *)(param_1 + 0x8f4);
      if (0.0 < fVar21) {
        fVar22 = *(float *)(param_1 + 0x8f8);
        if (fVar21 <= *(float *)(param_1 + 0x8f8)) {
          fVar22 = fVar21;
        }
        fVar20 = *(float *)(param_1 + 0x910);
        if (fVar23 <= fVar21) {
          fVar23 = fVar22;
        }
        if ((0.0 < fVar20) && (fVar20 <= fVar23)) {
          fVar23 = fVar20;
        }
      }
      fVar20 = *(float *)(param_1 + 0x6c4);
      fVar21 = *(float *)(param_1 + 0xef0);
      fVar25 = *(float *)(param_1 + 0xeec);
      uVar16 = FUN_00562390(fVar20,*(undefined4 *)(param_1 + 0x6c8),fVar25,fVar21);
      fVar22 = fVar20;
      if ((uVar16 & 1) != 0) {
        if (fVar25 <= fVar21) {
          fVar21 = fVar20;
        }
        fVar22 = fVar21;
        if (fVar21 <= fVar20) {
          fVar22 = fVar20;
        }
      }
      fVar20 = *(float *)(param_1 + 0x910);
      fVar21 = *(float *)(param_1 + 0x8f8);
      if (fVar23 <= fVar22) {
        fVar23 = fVar22;
      }
      if (0.0 < fVar20) {
        if (fVar20 <= fVar21) {
          fVar21 = fVar20;
        }
        fVar25 = *(float *)(param_1 + 0x90c);
        fVar22 = *(float *)(param_1 + 0x8f4);
        if (*(float *)(param_1 + 0x8f4) <= fVar20) {
          fVar22 = fVar21;
        }
        fVar21 = fVar22;
        if ((0.0 < fVar25) && (fVar22 <= fVar25)) {
          fVar21 = fVar25;
        }
      }
      fVar20 = *(float *)(param_1 + 0x6c8);
      fVar25 = *(float *)(param_1 + 0xef0);
      fVar26 = *(float *)(param_1 + 0xeec);
      uVar16 = FUN_00562390(*(undefined4 *)(param_1 + 0x6c4),fVar20,fVar26,fVar25);
      fVar22 = fVar20;
      if ((uVar16 & 1) != 0) {
        fVar22 = fVar25;
        if (fVar25 <= fVar26) {
          fVar22 = fVar20;
        }
        bVar9 = false;
        if ((fVar22 < fVar20) && (bVar9 = false, !NAN(fVar26) && !NAN(fVar25))) {
          bVar9 = fVar26 < fVar25;
        }
        fVar22 = fVar25;
        if (!bVar9) {
          fVar22 = fVar20;
        }
      }
      if (fVar22 <= fVar21) {
        fVar21 = fVar22;
      }
      local_b4 = fVar23;
      if (fVar24 <= fVar23) {
        local_b4 = fVar24;
      }
    }
    local_b8 = fVar21;
    if (fVar21 <= fVar27) {
      local_b8 = fVar27;
    }
LAB_005288b8:
    local_bc = *(float *)(param_1 + 0x8f4);
    pfVar5 = &local_b4;
    if (local_b4 <= *(float *)(param_1 + 0x8f4)) {
      pfVar5 = &local_bc;
    }
    local_bc = *(float *)(param_1 + 0x8f8);
    pfVar3 = &local_b8;
    if (*(float *)(param_1 + 0x8f8) <= local_b8) {
      pfVar3 = &local_bc;
    }
    local_b8 = *pfVar3;
    local_b4 = *pfVar5;
    pfVar4 = &local_b4;
    if (*pfVar5 <= *(float *)(param_1 + 0x6c4)) {
      pfVar4 = pfVar18;
    }
    fVar27 = *pfVar4;
    local_b4 = fVar27;
    pfVar5 = &local_b8;
    if (*(float *)(param_1 + 0x6c8) <= *pfVar3) {
      pfVar5 = pfVar1;
    }
    fVar24 = *pfVar5;
    lVar15 = *(long *)(param_1 + 0x1a0);
    fVar21 = *(float *)(param_1 + 0x6c4);
    local_b8 = fVar24;
    if (lVar15 != 0) goto LAB_0052892c;
LAB_00528a84:
    uVar13 = 0;
    if (0.0 < *(float *)(param_1 + 0x8a4)) goto LAB_00528a98;
LAB_00528c34:
    *(undefined1 *)(param_1 + 0x104f) = 0;
  }
  *(float *)(param_1 + 0x1064) = fVar27;
  *(undefined8 *)(param_1 + 0x1054) = 0x3f800000;
  fVar23 = DAT_01d4bf44;
  iVar19 = *(int *)(param_1 + 0x5d8);
  lVar15 = *(long *)(param_1 + 400);
  if (iVar19 == -1) {
    iVar19 = *(int *)(lVar15 + 0x90);
  }
  iVar17 = *(int *)(param_1 + 0x5e0);
  if (iVar17 == -1) {
    iVar17 = *(int *)(lVar15 + 0x90);
  }
  fVar21 = 1.0;
  fVar28 = 0.0;
  switch(*(undefined4 *)(*(long *)(*(long *)(lVar15 + 0x38) + (long)iVar19 * 8) + 0x38)) {
  case 2:
  case 6:
  case 10:
  case 0x10:
  case 0x14:
  case 0x15:
  case 0x22:
  case 0x28:
  case 0x29:
  case 0x36:
  case 0x43:
    switch(*(undefined4 *)(*(long *)(*(long *)(lVar15 + 0x38) + (long)iVar17 * 8) + 0x38)) {
    case 2:
    case 6:
    case 10:
    case 0x10:
    case 0x14:
    case 0x15:
    case 0x22:
    case 0x28:
    case 0x29:
    case 0x36:
    case 0x43:
      if (*(char *)(param_1 + 0x914) == '\0') {
        fVar27 = *(float *)(param_1 + 0x6c4) * DAT_01d4bf44;
        if (fVar27 <= fVar24) {
          fVar24 = fVar27;
        }
        *(float *)(param_1 + 0x1064) = fVar24;
      }
      else {
        *(undefined4 *)(param_1 + 0x1058) = 0xc77a0000;
        fVar28 = DAT_01d4c79c;
        fVar21 = (fVar24 / (fVar24 - fVar27)) * fVar23;
        *(float *)(param_1 + 0x1054) = fVar21;
      }
    }
  }
switchD_00528ca0_caseD_3:
  *(float *)(param_1 + 0x1060) = -fVar28 / fVar21;
  *(float *)(param_1 + 0x105c) = 1.0 / fVar21;
  return uVar13;
}


