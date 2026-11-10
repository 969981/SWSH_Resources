/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00530ac0; name: FUN_00530ac0
 */


/* WARNING: Removing unreachable block (ram,0x00531324) */

int FUN_00530ac0(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  ulong uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  byte bVar16;
  undefined8 uVar17;
  undefined1 uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  long *plVar35;
  undefined4 uVar36;
  ulong in_stack_fffffffffffffc88;
  undefined8 *puVar37;
  undefined8 uVar38;
  undefined8 in_stack_fffffffffffffc90;
  undefined4 uVar40;
  undefined8 uVar39;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_25c;
  undefined4 local_258;
  float local_254;
  undefined8 local_250;
  undefined8 local_248;
  float local_240;
  float local_23c;
  undefined8 local_238;
  float local_230;
  float local_22c;
  undefined8 local_228;
  float local_220;
  float local_21c;
  undefined8 local_218;
  undefined1 auStack_20c [4];
  undefined1 auStack_208 [4];
  undefined4 local_204;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined8 local_15c;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined4 local_124;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  long local_110;
  long local_108;
  float local_100;
  char local_fc [4];
  undefined1 auStack_f8 [4];
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  
  puVar3 = PTR_DAT_027139b0;
  iVar10 = *(int *)PTR_DAT_027139b0;
  if (iVar10 < 1) {
    plVar19 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar19,0);
    *(long **)PTR_DAT_027139b8 = plVar19;
    *(undefined4 *)puVar3 = 1;
    if (plVar19 != (long *)0x0) goto LAB_00530b34;
LAB_00530bbc:
    iVar10 = 0;
  }
  else {
    plVar19 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar10 + 1;
    if (iVar10 + 1 < 2) {
      if (plVar19 == (long *)0x0) goto LAB_00530bbc;
LAB_00530b34:
      uVar17 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar19 + 0x20))(plVar19);
      FUN_005b9b10(uVar17,plVar19);
      iVar10 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *(int *)puVar3 = iVar10;
  fVar28 = 1.0;
  if (*(char *)(param_1 + 0x96c) == '\0') {
    iVar10 = 0xd;
    local_26c = 0x3f800000;
    local_254 = 1.0;
    local_270 = 0x3f800000;
  }
  else {
    local_254 = *(float *)(param_1 + 0x980);
    local_26c = *(undefined4 *)(param_1 + 0x984);
    local_270 = *(undefined4 *)(param_1 + 0x988);
    iVar10 = *(int *)(param_1 + 0x978);
  }
  bVar5 = *(int *)PTR_DAT_02713a80 != 0;
  bVar6 = iVar10 != 0xf;
  plVar35 = &local_110;
  puVar37 = (undefined8 *)(in_stack_fffffffffffffc88 & 0xffffffffffffff00);
  uVar17 = CONCAT71((int7)((ulong)in_stack_fffffffffffffc90 >> 8),1);
  FUN_0052e030(param_1,&local_ec,&uStack_f0,&local_f4,auStack_f8,local_fc,&local_100,&local_108,
               plVar35,puVar37,uVar17);
  if (local_fc[0] != '\0') {
    fVar28 = 1.0 / local_100;
  }
  local_114 = 0;
  local_11c = 0;
  local_120 = *(undefined4 *)(param_1 + 0x8e8);
  local_154 = 0;
  local_15c = 0;
  local_140 = 0;
  local_148 = 0;
  local_12c = 0;
  local_134 = 0;
  local_124 = 0x3f800000;
  local_138 = 0x3f800000;
  local_14c = 0x3f800000;
  local_160 = 0x3f800000;
  bVar4 = local_110 != 0;
  local_100 = fVar28;
  if (bVar4) {
    FUN_00515cb0(&local_160,&local_160);
  }
  if (local_108 != 0) {
    FUN_00515cb0(&local_160,&local_160);
  }
  local_194 = 0;
  uStack_190 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  local_188 = 0;
  local_180 = 0;
  local_16c = 0;
  uStack_168 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  local_164 = 0x3f800000;
  local_178 = 0x3f800000;
  local_18c = 0x3f800000;
  local_1a0 = 0x3f800000;
  if (local_108 != 0 || bVar4) {
    FUN_005156a0(&local_e8,&local_160);
    local_188 = local_d0;
    uStack_190 = (undefined4)local_d8;
    local_18c = (undefined4)((ulong)local_d8 >> 0x20);
    uStack_198 = (undefined4)local_e0;
    local_194 = (undefined4)((ulong)local_e0 >> 0x20);
    local_1a0 = (undefined4)local_e8;
    uStack_19c = (undefined4)((ulong)local_e8 >> 0x20);
    uStack_168 = (undefined4)local_b0;
    local_164 = (undefined4)((ulong)local_b0 >> 0x20);
    uStack_170 = (undefined4)local_b8;
    local_16c = (undefined4)((ulong)local_b8 >> 0x20);
    local_178 = (undefined4)local_c0;
    uStack_174 = (undefined4)((ulong)local_c0 >> 0x20);
    local_180 = local_c8;
  }
  fVar28 = DAT_01d4c6b8;
  uVar11 = (undefined4)((ulong)puVar37 >> 0x20);
  uVar40 = (undefined4)((ulong)uVar17 >> 0x20);
  local_1e0 = *(undefined8 *)(param_1 + 0x1094);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x109c);
  local_1d0 = *(undefined8 *)(param_1 + 0x10a4);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x10ac);
  local_1c0 = *(undefined8 *)(param_1 + 0x10b4);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x10bc);
  local_1b0 = *(undefined8 *)(param_1 + 0x10c4);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x10cc);
  if ((undefined8 *)(param_1 + 0xba4) != &local_200) {
    local_200 = *(undefined8 *)(param_1 + 0xba4);
    local_1f8 = *(undefined8 *)(param_1 + 0xbac);
    local_1f0 = *(undefined8 *)(param_1 + 0xbb4);
    local_1e8 = *(undefined8 *)(param_1 + 0xbbc);
  }
  if (*(char *)(param_1 + 0x96c) == '\0') {
    uVar29 = 0;
  }
  else {
    uVar29 = *(undefined4 *)(param_1 + 0x98c);
  }
  fVar23 = *(float *)(param_1 + 0x990);
  fVar30 = *(float *)(param_1 + 0x994);
  if (*(long *)(param_1 + 0x588) == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = *(long *)(*(long *)(param_1 + 0x588) + (long)*(int *)(param_1 + 0x298) * 8);
  }
  fVar24 = 0.0;
  bVar4 = false;
  if ((lVar20 == 0) && (bVar4 = false, !NAN(fVar23))) {
    bVar4 = fVar23 < 0.0;
  }
  if (bVar4) {
    fVar23 = DAT_01d4c6b8;
  }
  uVar22 = (ulong)(uint)fVar23;
  if (0.0 <= fVar23) {
    if (*(char *)(param_1 + 0x998) == '\0') {
      uVar22 = FUN_0052f3d0(uVar22,param_1,local_110,local_ec);
      if (fVar30 < 0.0) goto LAB_00530f04;
      goto LAB_00531390;
    }
    if (0.0 <= fVar30) goto LAB_00531390;
LAB_00530f04:
    lVar20 = (long)*(int *)(param_1 + 0x298);
    lVar21 = *(long *)(param_1 + 0x2a0);
    if (*(char *)(lVar21 + lVar20 * 0x78) == '\0') goto LAB_00531390;
    fVar30 = *(float *)(lVar21 + lVar20 * 0x78 + 0x24);
    if (0.0 < fVar30) {
LAB_00531bdc:
      fVar30 = fVar30 * *(float *)(param_1 + 0x8c0);
      if (!bVar5 || !bVar6) goto LAB_00531394;
      goto LAB_00530f58;
    }
    if (*(long *)(lVar21 + lVar20 * 0x78 + 0x70) == 0) {
      fVar30 = 0.0;
      goto LAB_00531bdc;
    }
    fVar30 = *(float *)(lVar21 + lVar20 * 0x78 + 0x5c) * *(float *)(param_1 + 0x8c0);
    if (bVar5 && bVar6) goto LAB_00530f58;
LAB_00531394:
    if (*(char *)(param_1 + 0x96c) != '\0') goto LAB_0053139c;
LAB_00530f94:
    local_258 = 0;
    local_25c = 0;
    if (*(char *)(param_1 + 0x999) != '\0') goto LAB_00530fa8;
LAB_005313b4:
    uVar18 = 0;
  }
  else {
    uVar12 = *(uint *)(PTR_DAT_02713a88 + 0x10);
    if (uVar12 < 2) {
LAB_00530eac:
      *(undefined4 *)(lVar20 + 0x4f8) = 0;
      FUN_005b8c00(lVar20);
      if (*(int *)(param_1 + 0x590) == 0) {
        if (*(long *)(param_1 + 0x570) == 0) {
          uVar17 = 0;
        }
        else {
          uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x570) + (long)*(int *)(param_1 + 0x298) * 8)
          ;
        }
        puVar37 = &local_250;
        local_e8 = 0x3f8000003f800000;
        local_e0 = 0x3f8000003f800000;
        local_250 = 0;
        local_248 = 0;
        uVar40 = 0;
        plVar35 = (long *)CONCAT44((int)((ulong)plVar35 >> 0x20),1);
        FUN_0057e050(0,0,0,0x3f800000,plVar19,param_2,uVar17,0,&local_e8,0,0,0,plVar35,puVar37,0,1);
        uVar11 = (undefined4)((ulong)puVar37 >> 0x20);
LAB_00531204:
        *(int *)(param_1 + 0x590) = *(int *)(param_1 + 0x590) + 1;
      }
      else {
        iVar7 = FUN_005b8a60(lVar20);
        uVar11 = (undefined4)((ulong)puVar37 >> 0x20);
        uVar40 = (undefined4)((ulong)uVar17 >> 0x20);
        if (iVar7 < 0) goto LAB_00531204;
        uVar12 = *(uint *)(param_1 + 0x580);
        if (*(long *)(param_1 + 0x570) == 0) {
          lVar21 = 0;
        }
        else {
          lVar21 = *(long *)(*(long *)(param_1 + 0x570) + (long)*(int *)(param_1 + 0x298) * 8);
        }
        if (0 < (int)uVar12) {
          uVar22 = 0;
          bVar16 = 0;
          do {
            uVar1 = *(uint *)(lVar21 + 0x54);
            if (*(long *)(param_1 + 0x578) == 0) {
              lVar15 = 0;
              if (uVar1 < 0x400) goto LAB_00531118;
LAB_005310b8:
              puVar37 = &local_250;
              plVar35 = (long *)CONCAT44((int)((ulong)plVar35 >> 0x20),1);
              local_e8 = 0x3f8000003f800000;
              local_e0 = 0x3f8000003f800000;
              local_250 = 0;
              local_248 = 0;
              uVar17 = 0;
              FUN_0057e050(0,0,0,0x3f800000,plVar19,lVar21,lVar15,0,&local_e8,0,0,0,plVar35,puVar37,
                           0,0xffffffff);
              lVar21 = lVar15;
            }
            else {
              lVar15 = *(long *)(*(long *)(param_1 + 0x578) + uVar22 * 8);
              if (0x3ff < uVar1) goto LAB_005310b8;
LAB_00531118:
              FUN_005815f0(plVar19,lVar21,lVar15,(bVar16 | 0x3ff < uVar1) ^ 1,0);
              lVar21 = lVar15;
            }
            uVar11 = (undefined4)((ulong)puVar37 >> 0x20);
            uVar40 = (undefined4)((ulong)uVar17 >> 0x20);
            bVar16 = bVar16 | uVar1 < 0x400;
            uVar22 = uVar22 + 1;
          } while (uVar12 != uVar22);
        }
        FUN_005815f0(plVar19,lVar21,*(undefined8 *)(lVar20 + 0x48),0,1);
        FUN_005b8af0(0x3f800000,0x3f800000,0,0,lVar20,0);
        *(undefined4 *)(param_1 + 0x590) = 0;
      }
      if (param_3 == 0) {
        FUN_0059e450(0x3f800000,0x1f,0,0,0,0,0,0,0);
      }
      pfVar8 = (float *)FUN_005b92c0(lVar20);
      fVar30 = DAT_01d4bef4;
      fVar24 = *pfVar8;
      fVar23 = fVar24;
      if (1.0 < fVar24) {
        fVar23 = 1.0;
      }
      fVar25 = 0.0;
      if (0.0 <= fVar24) {
        fVar25 = fVar23;
      }
      fVar23 = powf(fVar25,DAT_01d4bef4);
      fVar27 = DAT_01d4c168;
      fVar23 = fVar23 + DAT_01d4c168;
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      fVar24 = powf(fVar25,fVar30);
      fVar32 = DAT_01d4bf4c;
      fVar31 = DAT_01d4bd48;
      fVar25 = DAT_01d4bcd0;
      fVar23 = powf(fVar23 / (DAT_01d4bcd0 - fVar24 * DAT_01d4bd48),DAT_01d4bf4c);
      fVar23 = fVar23 * DAT_01d4c6d0;
      fVar26 = pfVar8[1];
      fVar24 = fVar26;
      if (1.0 < fVar26) {
        fVar24 = 1.0;
      }
      fVar33 = 0.0;
      if (0.0 <= fVar26) {
        fVar33 = fVar24;
      }
      fVar24 = powf(fVar33,fVar30);
      fVar24 = fVar24 + fVar27;
      if (fVar24 <= 0.0) {
        fVar24 = 0.0;
      }
      fVar26 = powf(fVar33,fVar30);
      fVar24 = powf(fVar24 / (fVar25 - fVar26 * fVar31),fVar32);
      fVar26 = 0.0;
      if (0.0 <= pfVar8[2]) {
        fVar26 = pfVar8[2];
      }
      fVar33 = powf(fVar26,fVar30);
      fVar30 = powf(fVar26,fVar30);
      fVar30 = powf((fVar33 + fVar27) / (fVar25 - fVar30 * fVar31),fVar32);
      fVar30 = fVar30 * DAT_01d4c6b8;
    }
    else {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x18) + 0x28);
      uVar14 = 0;
      if (uVar12 != 0) {
        uVar14 = uVar1 / uVar12;
      }
      if (uVar1 == uVar14 * uVar12) goto LAB_00530eac;
      fVar24 = 0.0;
      fVar30 = DAT_01d4bd3c;
      fVar23 = DAT_01d4c6b8;
    }
    uVar22 = (ulong)(uint)fVar23;
    fVar25 = (float)FUN_0052f3d0(uVar22,param_1,local_110,local_ec);
    fVar23 = fVar23 * (fVar23 / fVar25);
LAB_00531390:
    if (!bVar5 || !bVar6) goto LAB_00531394;
LAB_00530f58:
    FUN_00531bf0(param_1);
    if (param_3 != 0) goto LAB_00531394;
    FUN_0059e450(0x3f800000,0x1f,0,0,0,0,0,0,0);
    if (*(char *)(param_1 + 0x96c) == '\0') goto LAB_00530f94;
LAB_0053139c:
    local_258 = *(undefined4 *)(param_1 + 0xbc4);
    local_25c = *(undefined4 *)(param_1 + 0xbc8);
    if (*(char *)(param_1 + 0x999) == '\0') goto LAB_005313b4;
LAB_00530fa8:
    switch(*(undefined4 *)(param_1 + 0x99c)) {
    case 9:
      if (*(float *)(param_1 + 0x9a0) == DAT_01d4c314) goto LAB_005313b4;
      break;
    case 10:
      if (*(float *)(param_1 + 0x9a0) == DAT_01d4bf48) goto LAB_005313b4;
      break;
    case 0xb:
    case 0xc:
      if (*(float *)(param_1 + 0x9a0) == DAT_01d4bccc) goto LAB_005313b4;
      break;
    case 0xd:
      if (*(float *)(param_1 + 0x9a0) == DAT_01d4c570) goto LAB_005313b4;
      break;
    case 0xe:
      if (*(float *)(param_1 + 0x9a0) == DAT_01d4c5d0) goto LAB_005313b4;
    }
    uVar18 = 1;
  }
  puVar3 = PTR_DAT_02713a90;
  if ((*(int *)PTR_DAT_02713a90 != 0) &&
     (*(uint *)PTR_DAT_02713a80 == 5 || (*(uint *)PTR_DAT_02713a80 | 2) == 3)) {
    uVar9 = FUN_00582430(plVar19);
    uVar36 = (undefined4)((ulong)plVar35 >> 0x20);
    if ((uVar9 & 1) != 0) {
      lVar20 = plVar19[0x536a];
      lVar21 = *(long *)(lVar20 + (long)*(int *)(lVar20 + 0xa0) * 8 + 0xb8);
      iVar7 = FUN_0059d300(lVar20,0,0,1,0,0);
      if (iVar7 < 0) {
        return iVar7;
      }
      FUN_0059d000(0,0);
      uVar12 = *(uint *)(lVar21 + 0x4c);
      uVar1 = *(uint *)(lVar21 + 0x50);
      lVar15 = param_2;
      do {
        lVar13 = lVar15;
        lVar15 = *(long *)(lVar13 + 0x120);
      } while (lVar15 != 0);
      fVar27 = *(float *)(param_2 + 0x8c) * (float)*(uint *)(param_2 + 0x58) +
               *(float *)(param_2 + 0x94);
      fVar25 = *(float *)(param_2 + 0x88) * (float)*(uint *)(param_2 + 0x54) +
               *(float *)(param_2 + 0x90);
      uVar14 = (uint)*(byte *)(param_1 + 0x96c);
      if (*(byte *)(param_1 + 0x96c) != 0) {
        uVar14 = *(uint *)(param_1 + 0x974);
      }
      uVar39 = CONCAT44(uVar40,local_f4);
      uVar38 = CONCAT44(uVar11,uStack_f0);
      uVar17 = CONCAT44(uVar36,*(undefined4 *)(param_1 + 0x9a8));
      FUN_0057e110(0,0,0,0,0,0,fVar25,fVar27,plVar19,1,0,*(undefined8 *)(lVar13 + 0xa8),lVar21,
                   iVar10,0,local_ec,uVar17,uVar38,uVar39,&local_1e0,&local_1a0,&local_200,local_254
                   ,local_26c,local_270,local_100,*(undefined4 *)(param_1 + 0x968),local_258,
                   local_25c,uVar18,*(undefined4 *)(param_1 + 0x99c),
                   *(undefined4 *)(param_1 + 0x9a0),*(undefined4 *)(param_1 + 0x9a4),&local_120,
                   uVar14,uVar29,fVar30,(int)uVar22,0,0,1,0,0,0,0);
      uVar40 = (undefined4)((ulong)uVar38 >> 0x20);
      uVar36 = (undefined4)((ulong)uVar39 >> 0x20);
      uVar11 = (undefined4)((ulong)uVar17 >> 0x20);
      FUN_0057e0b0(plVar19,&local_250,&local_204,auStack_208,auStack_20c);
      lVar15 = param_2;
      do {
        lVar13 = lVar15;
        lVar15 = *(long *)(lVar13 + 0x120);
      } while (lVar15 != 0);
      uVar14 = (uint)*(byte *)(param_1 + 0x96c);
      if (*(byte *)(param_1 + 0x96c) != 0) {
        uVar14 = *(uint *)(param_1 + 0x974);
      }
      uVar17 = CONCAT44(uVar11,*(undefined4 *)(param_1 + 0x9a8));
      uVar39 = CONCAT44(uVar36,local_f4);
      uVar38 = CONCAT44(uVar40,uStack_f0);
      FUN_0057e110(0,0,(float)uVar12,(float)uVar1,0,0,fVar25,fVar27,plVar19,1,0,
                   *(undefined8 *)(lVar13 + 0xa8),lVar21,5,0,local_ec,uVar17,uVar38,uVar39,
                   &local_1e0,&local_1a0,&local_200,local_254,local_204,0x3f800000,local_100,
                   *(undefined4 *)(param_1 + 0x968),local_258,local_25c,uVar18,
                   *(undefined4 *)(param_1 + 0x99c),*(undefined4 *)(param_1 + 0x9a0),
                   *(undefined4 *)(param_1 + 0x9a4),&local_120,uVar14,uVar29,fVar30,(int)uVar22,0,0,
                   1,0,0,0,0);
      uVar11 = (undefined4)((ulong)uVar17 >> 0x20);
      uVar36 = (undefined4)((ulong)uVar39 >> 0x20);
      uVar40 = (undefined4)((ulong)uVar38 >> 0x20);
      lVar21 = plVar19[0x5369];
      lVar15 = *(long *)(lVar21 + (long)*(int *)(lVar21 + 0xa0) * 8 + 0xb8);
      iVar7 = FUN_0059d300(lVar21,0,0,1,0,0);
      if (iVar7 < 0) {
        return iVar7;
      }
      FUN_0059d000(0,0);
      local_e8 = 0;
      local_e0 = 0;
      (**(code **)(**(long **)(param_1 + 0x18) + 0x198))
                (0x3f800000,*(long **)(param_1 + 0x18),0xff0,&local_e8,0);
      lVar21 = lVar20;
      do {
        lVar13 = lVar21;
        lVar21 = *(long *)(lVar13 + 0x120);
      } while (lVar21 != 0);
      uVar17 = CONCAT44(uVar40,0xbf800000);
      uVar38 = CONCAT44(uVar36,0x3f4ccccd);
      plVar35 = (long *)CONCAT44(uVar11,0x40800000);
      FUN_00581230(0,0,(float)*(uint *)(lVar15 + 0x4c),(float)*(uint *)(lVar15 + 0x50),0,0,
                   *(float *)(lVar20 + 0x88) * (float)*(uint *)(lVar20 + 0x54) +
                   *(float *)(lVar20 + 0x90),
                   *(float *)(lVar20 + 0x8c) * (float)*(uint *)(lVar20 + 0x58) +
                   *(float *)(lVar20 + 0x94),plVar19,*(undefined8 *)(lVar13 + 0xa8),
                   *(int *)puVar3 == 2 &&
                   (*(uint *)PTR_DAT_02713a80 == 5 || (*(uint *)PTR_DAT_02713a80 | 2) == 3),0);
      uVar22 = uVar22 & 0xffffffff;
      if (param_3 == 0) {
        FUN_0059e450(0x3f800000,0x1f,0,0,0,0,0,0,0,plVar35,uVar17,uVar38);
      }
    }
  }
  fVar27 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0x54));
  iVar7 = *(int *)(param_1 + 0xf30);
  fVar25 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0x58));
  fVar32 = (float)NEON_ucvtf(*(undefined4 *)(param_4 + 0x50));
  fVar31 = (float)NEON_ucvtf(*(undefined4 *)(param_4 + 0x4c));
  if (iVar7 == -1) {
    iVar7 = *(int *)(param_1 + 0xf2c);
  }
  fVar34 = *(float *)(param_2 + 0x8c) * fVar25 + *(float *)(param_2 + 0x94);
  fVar26 = *(float *)(param_1 + 0xf34);
  fVar33 = *(float *)(param_2 + 0x88) * fVar27 + *(float *)(param_2 + 0x90);
  if (fVar26 <= 0.0) {
    fVar26 = -fVar26;
  }
  uVar11 = 4;
  if (fVar27 == fVar31 && fVar25 == fVar32 || iVar7 != 1) {
    uVar11 = 1;
    local_250 = 0;
  }
  else {
    fVar26 = (float)NEON_fminnm(fVar26,0x3f800000);
    local_240 = (fVar33 / fVar27) * fVar26 * 0.5;
    local_22c = (fVar34 / fVar25) * fVar26 * 0.5;
    local_23c = -local_22c;
    local_230 = -local_240;
    local_250 = CONCAT44(local_23c,local_230);
    local_238 = 0;
    local_228 = 0;
    local_218 = 0;
    local_220 = local_240;
    local_21c = local_22c;
  }
  local_248 = 0;
  if (param_3 != 0) {
    local_248 = 0;
    local_e0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_e8 = param_3;
    FUN_0059db20(0x3f800000,8,&local_e8,0,0,0,0,0,0,(ulong)plVar35 & 0xffffffff00000000);
  }
  if (*(char *)(param_1 + 0x59c) == '\0') {
    iVar7 = *(int *)(param_1 + 0x9ac);
    if (iVar7 == 1) {
      if ((*(char *)(param_1 + 0x96c) != '\0') && (iVar2 = *(int *)(param_1 + 0x978), iVar2 != 0)) {
        iVar7 = 1;
        if ((iVar2 == 0x10) || (iVar2 - 6U < 9)) goto LAB_005319c4;
        iVar7 = 1;
        if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_005319c4;
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x4604)
        ;
        FUN_00517ae0(
                    "CPostEffect::GetEffectiveTonemapBackendColorSpaceMode(): PFXTBCSM_SCRGB is available only with PFXEOTF_PQ(PFXEOTF_ST2084) or PFXEOTF_GAMMA*.\n"
                    );
      }
      iVar7 = 1;
    }
  }
  else {
    iVar7 = 0;
  }
LAB_005319c4:
  do {
    lVar20 = param_2;
    param_2 = *(long *)(lVar20 + 0x120);
  } while (param_2 != 0);
  uVar12 = (uint)*(byte *)(param_1 + 0x96c);
  if (*(byte *)(param_1 + 0x96c) != 0) {
    uVar12 = *(uint *)(param_1 + 0x974);
  }
  fVar25 = (float)uVar22;
  iVar7 = FUN_0057e110(0,0,fVar31,fVar32,0,0,fVar33,fVar34,plVar19,uVar11,&local_250,
                       *(undefined8 *)(lVar20 + 0xa8),param_4,iVar10,iVar7,local_ec,
                       *(undefined4 *)(param_1 + 0x9a8),uStack_f0,local_f4,&local_1e0,&local_1a0,
                       &local_200,local_254,local_26c,local_270,local_100,
                       *(undefined4 *)(param_1 + 0x968),local_258,local_25c,uVar18,
                       *(undefined4 *)(param_1 + 0x99c),*(undefined4 *)(param_1 + 0x9a0),
                       *(undefined4 *)(param_1 + 0x9a4),&local_120,uVar12,uVar29,fVar30,fVar25,0,0,1
                       ,0,0,0,0);
  FUN_0057e0b0(plVar19,param_1 + 0x1130,param_1 + 0x1134,param_1 + 0x1138,param_1 + 0x113c);
  *(float *)(param_1 + 0x1140) = *(float *)(param_1 + 0x1130) * fVar28;
  *(float *)(param_1 + 0x1144) = *(float *)(param_1 + 0x1134) * fVar28;
  *(float *)(param_1 + 0x1148) = *(float *)(param_1 + 0x1138) * fVar28;
  *(float *)(param_1 + 0x1158) = local_254 * fVar25 * fVar28;
  *(float *)(param_1 + 0x115c) = local_254 * fVar24 * fVar28;
  *(float *)(param_1 + 0x114c) = fVar25;
  *(float *)(param_1 + 0x1150) = fVar24;
  *(float *)(param_1 + 0x1154) = fVar30;
  *(float *)(param_1 + 0x1160) = local_254 * fVar30 * fVar28;
  if (bVar5 && bVar6) {
    FUN_00530760(uStack_f0,local_f4,local_100,fVar24,uVar22,fVar30,fVar23,param_1,param_4,local_ec,
                 &local_120,iVar10,&local_1a0);
    iVar7 = 0;
  }
  return iVar7;
}


