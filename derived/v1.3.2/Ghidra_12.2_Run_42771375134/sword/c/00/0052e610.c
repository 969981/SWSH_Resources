/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0052e610; name: FUN_0052e610
 */


undefined8 FUN_0052e610(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  byte bVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  char cVar11;
  long lVar12;
  long *plVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  float *pfVar21;
  undefined8 uVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  char *pcVar26;
  long *plVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float local_f0;
  float local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  *(undefined1 *)(param_1 + 0x679) = 1;
  if (*(char *)(param_1 + 0x67b) != '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x104f) == '\0') {
    return 0;
  }
  lVar24 = (long)*(int *)(param_1 + 0x298);
  lVar25 = *(long *)(param_1 + 0x2a8);
  plVar27 = (long *)(lVar25 + lVar24 * 0x50 + 0x48);
  if (*plVar27 == 0) {
LAB_0052e6b8:
    iVar10 = 0;
  }
  else {
    FUN_005b7a50(*(undefined8 *)(*plVar27 + 0x40),2);
    lVar12 = *plVar27;
    if (lVar12 == 0) goto LAB_0052e6b8;
    lVar17 = lVar25 + lVar24 * 0x50;
    fVar28 = *(float *)(lVar17 + 8);
    iVar10 = *(int *)(lVar17 + 4);
    if ((iVar10 == 0) || (fVar28 < 0.0)) {
      fVar30 = 0.5;
      if (0.0 <= fVar28) {
        fVar30 = fVar28;
      }
      iVar16 = (int)(fVar30 / *(float *)(param_1 + 0x7f4));
    }
    else {
      iVar16 = (int)fVar28;
      if (iVar10 != 1) {
        iVar16 = 0;
      }
    }
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar15 = 0xffffffff;
    }
    else {
      uVar15 = *(uint *)(PTR_DAT_02713a88 + 0x10);
      if (uVar15 < 2) {
        uVar15 = 1;
      }
    }
    iVar10 = 0;
    if (uVar15 != 0) {
      iVar10 = (iVar16 / 6) / (int)uVar15;
    }
    if (iVar10 < 2) {
      iVar10 = 1;
    }
    if (6 < iVar10) {
      iVar10 = 7;
    }
    iVar1 = iVar10 + 1;
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = (iVar16 - iVar1) / iVar1;
    }
    uVar15 = (uint)((float)iVar3 + DAT_01d4bb5c);
    lVar17 = lVar25 + lVar24 * 0x50;
    *(int *)(lVar17 + 0x40) = iVar1;
    if (0xe < (int)uVar15) {
      uVar15 = 0xf;
    }
    *(uint *)(lVar12 + 0x4f8) = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
    fVar28 = powf(DAT_01d4bff8,
                  (*(float *)(param_1 + 0x7f4) * (float)*(int *)(lVar17 + 0x40)) / DAT_01d4bec4);
    uVar29 = NEON_fminnm(1.0 - fVar28,DAT_01d4bee0);
    *(undefined4 *)(*plVar27 + 0x4fc) = uVar29;
    FUN_005b8c00(*plVar27);
  }
  pcVar26 = (char *)(lVar25 + lVar24 * 0x50);
  if (*pcVar26 != pcVar26[0x3c]) {
    *(undefined4 *)(lVar25 + lVar24 * 0x50 + 0x30) = 0;
  }
  uVar15 = *(uint *)(PTR_DAT_02713a88 + 0x10);
  if (uVar15 < 2) {
    bVar8 = true;
  }
  else {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x18) + 0x28);
    uVar4 = 0;
    if (uVar15 != 0) {
      uVar4 = uVar2 / uVar15;
    }
    bVar8 = uVar2 == uVar4 * uVar15;
  }
  cVar11 = *(char *)(*(long *)(param_1 + 0x2a8) + (long)*(int *)(param_1 + 0x298) * 0x50);
  if ((cVar11 == '\0') || (!bVar8)) {
LAB_0052ebc0:
    if (cVar11 == '\0') goto LAB_0052ef2c;
  }
  else if (*(float *)(lVar25 + lVar24 * 0x50 + 0x1c) <= 0.0) {
    piVar20 = (int *)(lVar25 + lVar24 * 0x50 + 0x2c);
    if ((iVar10 <= *piVar20) && (iVar10 = FUN_005b8a60(*plVar27), -1 < iVar10)) {
      iVar10 = *(int *)(param_1 + 0x5d8);
      uVar22 = *(undefined8 *)(*plVar27 + 0x48);
      lVar12 = *(long *)(param_1 + 400);
      if (iVar10 == -1) {
        iVar10 = *(int *)(lVar12 + 0x90);
      }
      iVar16 = *(int *)(lVar12 + 0x30);
      if (iVar10 < iVar16) {
        lVar17 = *(long *)(*(long *)(lVar12 + 0x38) + (long)iVar10 * 8);
      }
      else {
        lVar17 = 0;
      }
      lVar19 = lVar17;
      do {
        lVar18 = lVar19;
        lVar19 = *(long *)(lVar18 + 0x120);
      } while (lVar19 != 0);
      if (*(long *)(lVar18 + 0xa8) == 0) {
        iVar10 = *(int *)(param_1 + 0x5e0);
        if (iVar10 == -1) {
          iVar10 = *(int *)(lVar12 + 0x90);
        }
        if (iVar16 <= iVar10) {
          lVar17 = 0;
          goto LAB_0052e904;
        }
        lVar17 = *(long *)(*(long *)(lVar12 + 0x38) + (long)iVar10 * 8);
        lVar19 = *(long *)(param_1 + 0x50);
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_0052e8dc;
LAB_0052e90c:
        lVar17 = lVar19;
        lVar12 = lVar17;
        do {
          lVar19 = lVar12;
          lVar12 = *(long *)(lVar19 + 0x120);
        } while (lVar12 != 0);
        plVar13 = (long *)(lVar19 + 0xa8);
        bVar6 = 1;
        bVar9 = false;
      }
      else {
LAB_0052e904:
        lVar19 = *(long *)(param_1 + 0x50);
        if (*(long *)(param_1 + 0x50) != 0) goto LAB_0052e90c;
LAB_0052e8dc:
        if (*(char *)(param_1 + 0x678) == '\0') {
          iVar10 = *(int *)(param_1 + 0x604);
          if (iVar10 == -1) {
            iVar10 = *(int *)(lVar12 + 0x90);
          }
          if (iVar10 < iVar16) {
            lVar17 = *(long *)(*(long *)(lVar12 + 0x38) + (long)iVar10 * 8);
          }
          else {
            lVar17 = 0;
          }
          lVar12 = lVar17;
          do {
            lVar19 = lVar12;
            lVar12 = *(long *)(lVar19 + 0x120);
          } while (lVar12 != 0);
          plVar13 = (long *)(lVar19 + 0xa8);
          bVar6 = 0;
          bVar9 = false;
        }
        else {
          bVar6 = 0;
          bVar9 = true;
          plVar13 = (long *)(lVar12 + (long)*(int *)(lVar12 + 0x94) * 8 + 0x60);
        }
      }
      plVar13 = (long *)*plVar13;
      lVar12 = lVar25 + lVar24 * 0x50;
      local_f0 = *(float *)(lVar12 + 0x14);
      local_ec = *(float *)(lVar12 + 0x18);
      if (*(char *)(param_1 + 0x10d5) != '\0') {
        uVar29 = *(undefined4 *)(param_1 + 0x6cc);
        if (*(int *)(param_1 + 0xc14) == 2) {
          uVar33 = *(undefined4 *)(param_1 + 0xc1c);
        }
        else {
          if (*(int *)(param_1 + 0xc14) == 0) {
            uVar29 = *(undefined4 *)(param_1 + 0xc18);
          }
          uVar33 = 0;
        }
        fVar28 = *(float *)(param_1 + 0x420);
        local_f0 = (float)FUN_00578780(uVar29,*(float *)(param_1 + 0x420),
                                       *(undefined4 *)(param_1 + 0xbe8),uVar33,
                                       *(undefined4 *)(param_1 + 0xc20),
                                       *(undefined4 *)(param_1 + 0xc24),
                                       *(undefined4 *)(param_1 + 0xc28),
                                       *(undefined4 *)(param_1 + 0xc08),1,&local_f0,
                                       *(undefined4 *)(param_1 + 0xc04));
        local_ec = fVar28;
      }
      if (*(char *)(*(long *)(param_1 + 0x18) + 0x58) != '\0') {
        local_ec = 1.0 - local_ec;
      }
      fVar42 = *(float *)(lVar17 + 0x90);
      fVar41 = *(float *)(lVar17 + 0x94);
      fVar28 = (float)NEON_ucvtf(*(undefined4 *)(lVar17 + 0x54));
      fVar28 = local_f0 * fVar28;
      fVar32 = *(float *)(lVar17 + 0x88);
      fVar37 = *(float *)(lVar17 + 0x8c);
      fVar30 = (float)NEON_ucvtf(*(undefined4 *)(lVar17 + 0x58));
      fVar30 = local_ec * fVar30;
      (**(code **)(*plVar13 + 0x88))(plVar13,1);
      local_e0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = uVar22;
      FUN_0059db20(0x3f800000,8,&local_e8,0,0,0,0,0,0,0);
      FUN_005aefe0(*(undefined8 *)(param_1 + 0x1a0));
      puVar7 = PTR_DAT_027139b0;
      iVar10 = *(int *)PTR_DAT_027139b0;
      if (iVar10 < 1) {
        plVar23 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                       "../src/GPU\\GPUClassUtil.h",0x49,0);
        FUN_0056dc10(plVar23,0);
        *(long **)PTR_DAT_027139b8 = plVar23;
        *(undefined4 *)puVar7 = 1;
LAB_0052eac4:
        if (plVar23 == (long *)0x0) {
          iVar10 = 0;
        }
        else {
          uVar22 = *(undefined8 *)PTR_PTR_02713988;
          (**(code **)(*plVar23 + 0x20))(plVar23);
          FUN_005b9b10(uVar22,plVar23);
          iVar10 = 0;
          *(undefined8 *)PTR_DAT_027139b8 = 0;
        }
      }
      else {
        plVar23 = *(long **)PTR_DAT_027139b8;
        *(int *)PTR_DAT_027139b0 = iVar10 + 1;
        if (iVar10 + 1 < 2) goto LAB_0052eac4;
      }
      fVar42 = fVar42 + fVar32 * fVar28;
      fVar41 = fVar41 + fVar37 * fVar30;
      *(int *)puVar7 = iVar10;
      if (bVar9) {
        FUN_0058b5f0(0,0,0x3f800000,0x3f800000,fVar42,fVar41,fVar42,fVar41,plVar23,plVar13,
                     *(undefined1 *)(param_1 + 0x1014),0);
        lVar12 = *(long *)(param_1 + 0x50);
      }
      else {
        if ((DAT_0275cc3e & 1) == 0) {
          DAT_0275cc3e = 1;
          DAT_0275cd48 = 0x100000000;
          DAT_0275cd50 = 0x300000002;
        }
        iVar10 = *(int *)(param_1 + 0x604);
        uVar29 = *(undefined4 *)((long)&DAT_0275cd48 + (long)*(int *)(param_1 + 0x58) * 4);
        lVar12 = *(long *)(param_1 + 400);
        if (iVar10 == -1) {
          iVar10 = *(int *)(lVar12 + 0x90);
        }
        if (iVar10 < *(int *)(lVar12 + 0x30)) {
          lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + (long)iVar10 * 8);
        }
        else {
          lVar12 = 0;
        }
        do {
          lVar17 = lVar12;
          lVar12 = *(long *)(lVar17 + 0x120);
        } while (lVar12 != 0);
        fVar28 = 1.0;
        fVar30 = 0.0;
        bVar9 = plVar13 != *(long **)(lVar17 + 0xa8);
        uVar33 = 2;
        if (bVar9) {
          uVar33 = 6;
        }
        FUN_00528d70(0x3f800000,0,param_1,&local_e8,uVar33,0);
        if ((bool)(bVar6 & bVar9)) {
          if (*(long *)(param_1 + 0x50) != 0) {
            fVar28 = *(float *)(param_1 + 0x68);
            fVar30 = *(float *)(param_1 + 0x6c);
          }
          local_e8 = CONCAT44(local_e8._4_4_ + (float)local_e8 * fVar30,(float)local_e8 * fVar28);
        }
        FUN_0058b790(0,0,0x3f800000,0x3f800000,fVar42,fVar41,fVar42,fVar41,plVar23,&local_e8,plVar13
                     ,uVar29,0);
        lVar12 = *(long *)(param_1 + 0x50);
      }
      if (lVar12 != 0) {
        (**(code **)(*plVar13 + 0x88))(plVar13,0);
      }
      *piVar20 = -1;
      FUN_005b8af0(0x3f800000,0x3f800000,*(undefined4 *)(param_1 + 0x6c4),
                   *(undefined4 *)(param_1 + 0x6c8),*plVar27,0);
    }
    uVar29 = FUN_005b92a0(*plVar27);
    *(undefined4 *)(lVar25 + lVar24 * 0x50 + 0x34) = uVar29;
    cVar11 = *(char *)(*(long *)(param_1 + 0x2a8) + (long)*(int *)(param_1 + 0x298) * 0x50);
    goto LAB_0052ebc0;
  }
  fVar28 = *(float *)(param_1 + 0x898);
  fVar30 = *(float *)(param_1 + 0x89c);
  if (*(char *)(param_1 + 0x895) != '\0') {
    FUN_005282d0(param_1);
  }
  fVar32 = DAT_01d4c158;
  lVar12 = *(long *)(param_1 + 0x1a0);
  if (*(char *)(param_1 + 0x1050) == '\0') {
    fVar37 = 0.0;
  }
  else {
    fVar37 = *(float *)(lVar12 + 0x1a8);
  }
  fVar42 = *(float *)(param_1 + 0x6c8);
  local_e8 = CONCAT44(local_e8._4_4_,fVar42);
  lVar17 = (long)*(int *)(param_1 + 0x298);
  lVar19 = *(long *)(param_1 + 0x2a8);
  fVar41 = *(float *)(lVar19 + lVar17 * 0x50 + 0x1c);
  if (fVar41 <= 0.0) {
    if (*(long *)(lVar19 + lVar17 * 0x50 + 0x48) == 0) {
      fVar41 = 0.0;
    }
    else {
      fVar41 = *(float *)(lVar19 + lVar17 * 0x50 + 0x34);
    }
  }
  lVar17 = lVar25 + lVar24 * 0x50;
  fVar38 = (fVar28 * fVar37) / (fVar28 - fVar37);
  fVar28 = *(float *)(lVar17 + 0xc);
  local_f0 = *(float *)(lVar17 + 0x10);
  if (fVar41 <= fVar37 * DAT_01d4be58) {
    fVar41 = fVar37 * DAT_01d4be58;
  }
  if (fVar28 <= DAT_01d4c104) {
    fVar28 = fVar37 + fVar37;
  }
  if (local_f0 == DAT_01d4c18c) {
    local_f0 = (fVar37 * *(float *)(lVar12 + 0x1ac)) /
               (fVar30 * *(float *)(&DAT_01cd5238 + (ulong)(*(int *)(lVar12 + 0x170) == 0) * 4));
    fVar30 = fVar42 * 10.0;
    if (fVar30 <= local_f0) {
      local_f0 = fVar30;
    }
    if (local_f0 <= fVar28) {
      local_f0 = fVar30;
    }
  }
  fVar5 = local_f0;
  fVar34 = fVar37 * local_f0;
  fVar30 = fVar28;
  if (fVar28 <= *(float *)(param_1 + 0x6c4)) {
    fVar30 = *(float *)(param_1 + 0x6c4);
  }
  pfVar21 = &local_f0;
  if (fVar42 <= local_f0) {
    pfVar21 = (float *)&local_e8;
  }
  fVar35 = local_f0 - fVar37;
  fVar30 = (fVar37 * fVar30) / (fVar30 - fVar37);
  lVar12 = lVar25 + lVar24 * 0x50;
  fVar42 = (fVar37 * fVar41) / (fVar41 - fVar37);
  if (fVar42 <= fVar30) {
    fVar30 = fVar42;
  }
  fVar41 = (fVar37 * *pfVar21) / (*pfVar21 - fVar37);
  if (fVar41 <= fVar42) {
    fVar41 = fVar30;
  }
  fVar42 = powf(1.0 - *(float *)(lVar12 + 0x20),*(float *)(param_1 + 0x7f4) / DAT_01d4c158);
  fVar42 = 1.0 - fVar42;
  fVar30 = fVar42;
  if (0.5 < fVar42) {
    fVar30 = 0.5;
  }
  fVar39 = 0.0;
  if (0.0 <= fVar42) {
    fVar39 = fVar30;
  }
  fVar32 = powf(1.0 - *(float *)(lVar12 + 0x20),*(float *)(param_1 + 0x7f4) / fVar32);
  fVar32 = 1.0 - fVar32;
  fVar30 = fVar32;
  if (0.5 < fVar32) {
    fVar30 = 0.5;
  }
  pfVar21 = (float *)(lVar12 + 0x30);
  fVar42 = 0.0;
  if (0.0 <= fVar32) {
    fVar42 = fVar30;
  }
  fVar36 = (fVar37 * *(float *)(lVar12 + 0x28)) / *(float *)(param_1 + 0xf68);
  fVar30 = fVar38 + (fVar41 - fVar38) * fVar39;
  fVar39 = fVar30 - fVar38;
  fVar32 = ABS(fVar30 - fVar38);
  fVar30 = fVar36 * *(float *)(param_1 + 0x7f4);
  fVar40 = -1.0;
  if (0.0 <= fVar39) {
    fVar40 = 0.0;
  }
  fVar31 = 1.0;
  if (fVar39 <= 0.0) {
    fVar31 = fVar40;
  }
  if (fVar30 <= fVar32) {
    fVar32 = fVar30;
  }
  fVar31 = fVar31 * fVar32;
  fVar42 = *pfVar21 + fVar42 * (fVar31 - *pfVar21);
  fVar32 = -(fVar36 * *(float *)(param_1 + 0x7f4));
  if (fVar42 <= fVar30) {
    fVar30 = fVar42;
  }
  if (fVar32 <= fVar42) {
    fVar32 = fVar30;
  }
  *pfVar21 = fVar32;
  fVar30 = fVar31;
  fVar42 = 0.0;
  if (0.0 < fVar31) {
LAB_0052ee44:
    if (fVar32 <= fVar30) {
      fVar30 = fVar32;
    }
    bVar9 = fVar42 <= fVar32;
    fVar32 = fVar42;
    if (bVar9) {
      fVar32 = fVar30;
    }
    *pfVar21 = fVar32;
  }
  else if (fVar31 < 0.0) {
    fVar30 = 0.0;
    fVar42 = fVar31;
    goto LAB_0052ee44;
  }
  fVar34 = fVar34 / fVar35;
  fVar38 = fVar38 + fVar32;
  bVar9 = false;
  if (*(char *)(lVar25 + lVar24 * 0x50 + 0x24) != '\0') {
    if ((0.0 <= fVar32) || (fVar41 < fVar38)) {
      bVar9 = 0.0 < fVar32 && fVar41 <= fVar38;
    }
    else {
      bVar9 = true;
    }
  }
  fVar30 = (fVar37 * fVar28) / (fVar28 - fVar37);
  if (fVar34 <= fVar37) {
    fVar34 = fVar37;
  }
  if (((fVar32 < 0.0) && (fVar38 <= fVar34)) || ((0.0 < fVar32 && (fVar30 <= fVar38)))) {
    *pfVar21 = 0.0;
  }
  if (bVar9) {
    *pfVar21 = 0.0;
    fVar38 = fVar41;
  }
  if (fVar38 <= fVar30) {
    fVar30 = fVar38;
  }
  if (fVar34 <= fVar38) {
    fVar34 = fVar30;
  }
  fVar30 = (fVar37 * fVar34) / (fVar34 - fVar37);
  if (fVar30 <= fVar5) {
    fVar5 = fVar30;
  }
  if (fVar28 <= fVar30) {
    fVar28 = fVar5;
  }
  *(float *)(lVar25 + lVar24 * 0x50 + 0x38) = fVar28;
LAB_0052ef2c:
  puVar14 = (uint *)(lVar25 + lVar24 * 0x50 + 0x2c);
  uVar15 = *puVar14;
  if (bVar8) {
    uVar15 = uVar15 + 1;
    *puVar14 = uVar15;
  }
  *puVar14 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
  pcVar26[0x3c] = *pcVar26;
  return 0;
}


