/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0055cb20; name: FUN_0055cb20
 */


uint FUN_0055cb20(long param_1,long param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  float *pfVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  long local_1f0;
  int local_19c;
  float local_168 [4];
  float local_158 [4];
  float local_148 [4];
  float local_138 [4];
  undefined1 local_128 [8];
  float local_120 [14];
  float local_e8 [4];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8 [3];
  
  puVar3 = PTR_DAT_027139b0;
  local_1f0 = param_2;
  if (param_2 == 0) {
    local_1f0 = *(long *)(param_1 + 0x3d0);
  }
  iVar13 = *(int *)PTR_DAT_027139b0;
  if (iVar13 < 1) {
    plVar25 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar25,0);
    *(long **)PTR_DAT_027139b8 = plVar25;
    *(undefined4 *)puVar3 = 1;
  }
  else {
    plVar25 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar13 + 1;
    if (1 < iVar13 + 1) goto LAB_0055cc2c;
  }
  if (plVar25 == (long *)0x0) {
    iVar13 = 0;
  }
  else {
    uVar22 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar25 + 0x20))(plVar25);
    FUN_005b9b10(uVar22,plVar25);
    iVar13 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
LAB_0055cc2c:
  *(int *)puVar3 = iVar13;
  if (*(int *)(*(long *)(param_1 + 0x2f0) + 0x30) < 3) {
    uVar22 = 0;
  }
  else {
    uVar22 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x2f0) + 0x38) + 0x10);
  }
  lVar17 = (long)param_3;
  lVar20 = (lVar17 + (long)param_3 * 2) * 0x20;
  lVar24 = *(long *)(param_1 + 0x1f8) + lVar20;
  lVar23 = *(long *)(param_1 + 0x3c0);
  uVar9 = FUN_0058e590(*(undefined4 *)(lVar24 + 0x5c),
                       *(float *)(param_1 + 0x168) / *(float *)(param_1 + 0x134),
                       *(undefined4 *)(lVar24 + 0x10),*(undefined4 *)(lVar24 + 0x14),
                       *(undefined4 *)(lVar24 + 0x18),*(undefined4 *)(param_1 + 0x154),
                       *(undefined4 *)(lVar24 + 0x20),plVar25,lVar23,uVar22,lVar24 + 0x44,
                       lVar24 + 0x4c,0);
  uVar10 = *(uint *)(lVar23 + 0x38);
  fVar36 = *(float *)(*(long *)(param_1 + 0x1f8) + lVar20 + 0x1c);
  uVar11 = FUN_00538690(uVar10);
  fVar26 = DAT_01d4c6ac;
  if ((((uVar11 & 1) != 0) &&
      ((0x3b < uVar10 || ((1L << ((ulong)uVar10 & 0x3f) & 0xf80007800007800U) == 0)))) &&
     ((uVar10 == 0 || ((uVar10 | 1) != 0x19)))) {
    switch(uVar10) {
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
      fVar26 = DAT_01d4bb68;
    }
  }
  fVar33 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xbc));
  uVar9 = uVar9 & (int)uVar9 >> 0x1f;
  fVar36 = ((1.0 / (fVar33 * DAT_01d4c5dc *
                   (1.0 / (*(float *)(param_1 + 0x158) + *(float *)(param_1 + 0x158))))) *
           DAT_01d4bb64) / fVar36;
  fVar26 = logf(fVar26);
  fVar33 = (fVar26 / DAT_01d4c0dc) / fVar36;
  fVar26 = logf(fVar33);
  iVar19 = (int)(fVar26 / DAT_01d4c494);
  iVar13 = iVar19;
  if (7 < iVar19) {
    iVar13 = 8;
  }
  fVar26 = powf(4.0,(float)iVar13);
  uVar15 = (uint)((fVar33 * 4.0) / fVar26);
  uVar10 = 4;
  if (uVar15 != 0) {
    uVar10 = uVar15;
  }
  fVar33 = powf(*(float *)(param_1 + 0x158) * 0.25,1.0 / (float)iVar13);
  fVar26 = DAT_01d4bcd8;
  plVar12 = (long *)(*(long *)(*(long *)(param_1 + 0x328) + 0x38) +
                    (long)*(int *)(param_1 + 0xf0) * 8);
  local_b8[0] = *plVar12;
  local_b8[1] = plVar12[1];
  puVar14 = (undefined8 *)(*(long *)(param_1 + 0x1f8) + lVar17 * 0x60);
  uVar22 = *(undefined8 *)((long)puVar14 + 0x34);
  fVar38 = *(float *)((long)puVar14 + 0x24);
  uVar27 = *(undefined4 *)(puVar14 + 5);
  uVar28 = *(undefined4 *)((long)puVar14 + 0x2c);
  uVar29 = *(undefined4 *)(puVar14 + 6);
  local_c0 = *(undefined8 *)((long)puVar14 + 0x3c);
  local_d8 = *puVar14;
  local_d0 = puVar14[1];
  if (fVar38 == 0.0) {
    local_c8._0_4_ = (float)uVar22;
    local_c8._4_4_ = (float)((ulong)uVar22 >> 0x20);
    if ((((float)local_c8 != 1.0) || (local_c8._4_4_ != 1.0)) ||
       (local_c8._4_4_ = 1.0, (float)local_c0 != 1.0)) {
      local_d8._4_4_ = (float)((ulong)local_d8 >> 0x20);
      local_d8 = CONCAT44(local_c8._4_4_ * local_d8._4_4_,(float)local_c8 * (float)local_d8);
      local_d0._4_4_ = (float)((ulong)local_d0 >> 0x20);
      local_d0 = CONCAT44(local_d0._4_4_,(float)local_c0 * (float)local_d0);
    }
  }
  local_c8 = uVar22;
  if (0 < iVar19) {
    fVar4 = (float)local_d8;
    fVar5 = local_d8._4_4_;
    fVar6 = (float)local_d0;
    fVar7 = local_d0._4_4_;
    iVar19 = 0;
    local_19c = 0;
    lVar24 = lVar23;
    uVar15 = uVar9;
    do {
      fVar32 = fVar33 * 0.25;
      if (iVar19 != 0) {
        fVar32 = fVar33;
      }
      local_e8[0] = powf(0.5,fVar36 * 0.0);
      local_e8[0] = fVar32 * local_e8[0];
      local_e8[1] = powf(0.5,fVar36);
      local_e8[1] = fVar32 * local_e8[1];
      local_e8[2] = powf(0.5,fVar36 + fVar36);
      local_e8[2] = fVar32 * local_e8[2];
      fVar30 = powf(0.5,fVar36 * 3.0);
      bVar8 = iVar19 != iVar13 + -1;
      local_e8[3] = fVar32 * fVar30;
      uVar16 = uVar10;
      if (3 < (int)uVar10 || bVar8) {
        uVar16 = 4;
      }
      if ((fVar38 != 0.0) || (lVar23 = local_1f0, bVar8 && 3 < (int)uVar16)) {
        lVar23 = local_b8[local_19c];
      }
      uVar31 = *(undefined4 *)(lVar23 + 0x54);
      uVar39 = *(undefined4 *)(lVar23 + 0x58);
      fVar40 = *(float *)(lVar24 + 0x88);
      fVar37 = *(float *)(lVar24 + 0x8c);
      fVar42 = *(float *)(lVar24 + 0x90);
      fVar30 = *(float *)(lVar24 + 0x94);
      uVar9 = *(uint *)(lVar24 + 0x54);
      uVar2 = *(uint *)(lVar24 + 0x58);
      FUN_0059d300(lVar23,0,0,1,0,0);
      lVar20 = *(long *)(param_1 + 0x1f8) + lVar17 * 0x60;
      fVar32 = *(float *)(lVar20 + 0x48);
      fVar41 = (float)NEON_ucvtf(uVar39);
      if (*(char *)(*(long *)(param_1 + 0x20) + 0x58) != '\0') {
        fVar32 = 1.0 - fVar32;
      }
      if (0 < (int)uVar16) {
        fVar35 = (float)NEON_ucvtf(*(undefined4 *)(lVar24 + 0x58));
        fVar34 = (float)NEON_ucvtf(*(undefined4 *)(lVar24 + 0x54));
        fVar35 = *(float *)(lVar24 + 0x94) + *(float *)(lVar24 + 0x8c) * fVar32 * fVar35;
        fVar34 = *(float *)(lVar24 + 0x90) +
                 *(float *)(lVar24 + 0x88) * *(float *)(lVar20 + 0x44) * fVar34;
        fVar40 = (fVar40 * (float)uVar9 + fVar42) - fVar34;
        fVar32 = (fVar37 * (float)uVar2 + fVar30) - fVar35;
        if (bVar8 && 3 < (int)uVar16) {
          uVar11 = 0;
          pfVar21 = local_120;
          do {
            fVar30 = local_e8[uVar11];
            pfVar21[-2] = fVar30;
            pfVar21[-1] = fVar30;
            *pfVar21 = fVar30;
            pfVar21[1] = fVar30;
            fVar30 = powf(4.0,(float)iVar19);
            fVar30 = 1.0 / (((float)(int)uVar11 * (float)(int)fVar30 + fVar41) / fVar41);
            uVar1 = uVar11 + 1;
            local_138[uVar11] = fVar34 + (0.0 - fVar34) * fVar30;
            local_148[uVar11] = fVar35 + (0.0 - fVar35) * fVar30;
            local_158[uVar11] = fVar34 + fVar40 * fVar30;
            local_168[uVar11] = fVar35 + fVar32 * fVar30;
            uVar11 = uVar1;
            pfVar21 = pfVar21 + 4;
          } while (uVar16 != uVar1);
        }
        else {
          pfVar21 = local_120;
          uVar11 = 0;
          do {
            fVar30 = local_e8[uVar11];
            pfVar21[-2] = fVar4 * fVar30;
            pfVar21[-1] = fVar5 * fVar30;
            *pfVar21 = fVar6 * fVar30;
            pfVar21[1] = fVar7 * fVar30;
            fVar30 = (float)FUN_005584d0(param_1);
            fVar37 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xbc));
            fVar30 = fVar30 * 0.25 * (fVar26 / fVar37) * 4.0;
            pfVar21[-2] = pfVar21[-2] * fVar30;
            pfVar21[-1] = pfVar21[-1] * fVar30;
            *pfVar21 = fVar30 * *pfVar21;
            pfVar21[1] = fVar30 * pfVar21[1];
            fVar30 = powf(4.0,(float)iVar19);
            fVar30 = 1.0 / (((float)(int)uVar11 * (float)(int)fVar30 + fVar41) / fVar41);
            uVar1 = uVar11 + 1;
            local_138[uVar11] = fVar34 + (0.0 - fVar34) * fVar30;
            local_148[uVar11] = fVar35 + (0.0 - fVar35) * fVar30;
            local_158[uVar11] = fVar34 + fVar40 * fVar30;
            local_168[uVar11] = fVar35 + fVar32 * fVar30;
            pfVar21 = pfVar21 + 4;
            uVar11 = uVar1;
          } while (uVar16 != uVar1);
        }
      }
      uVar31 = NEON_ucvtf(uVar31);
      lVar20 = lVar24;
      do {
        lVar18 = lVar20;
        lVar20 = *(long *)(lVar18 + 0x120);
      } while (lVar20 != 0);
      plVar12 = *(long **)(lVar18 + 0xa8);
      (**(code **)(*plVar12 + 0x78))(plVar12,0);
      do {
        lVar20 = lVar24;
        lVar24 = *(long *)(lVar20 + 0x120);
      } while (lVar24 != 0);
      uVar9 = FUN_00573c00(0,0,uVar31,fVar41,plVar25,local_138,local_148,local_158,local_168,uVar16,
                           local_128,*(undefined8 *)(lVar20 + 0xa8),*(undefined4 *)(param_1 + 0x2e4)
                           ,0);
      if (-1 < (int)uVar9) {
        uVar9 = uVar15;
      }
      if ((int)uVar16 < 4) break;
      uVar15 = local_19c + 2;
      fVar36 = fVar36 * 4.0;
      if (-1 < local_19c + 1) {
        uVar15 = local_19c + 1;
      }
      local_19c = (local_19c + 1) - (uVar15 & 0xfffffffe);
      iVar19 = iVar19 + 1;
      lVar24 = lVar23;
      uVar15 = uVar9;
    } while (iVar19 < iVar13);
  }
  uVar10 = uVar9;
  if (fVar38 != 0.0) {
    uVar10 = FUN_0058ea50(fVar38,uVar27,uVar28,uVar29,*(undefined4 *)(param_1 + 0x154),plVar25,
                          local_1f0,lVar23,&local_c8,
                          *(long *)(param_1 + 0x1f8) + lVar17 * 0x60 + 0x44,0);
    if (-1 < (int)uVar10) {
      uVar10 = uVar9;
    }
  }
  return uVar10;
}


