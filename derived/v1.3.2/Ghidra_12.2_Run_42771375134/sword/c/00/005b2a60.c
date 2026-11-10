/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b2a60; name: FUN_005b2a60
 */


undefined4 FUN_005b2a60(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  float *pfVar19;
  long lVar20;
  long lVar21;
  float *pfVar22;
  long lVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint in_stack_fffffffffffffe80;
  undefined8 in_stack_fffffffffffffe88;
  undefined4 uVar36;
  undefined8 *puVar35;
  ulong in_stack_fffffffffffffe90;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  float fStack_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0 [8];
  
  puVar3 = PTR_DAT_027139b0;
  uVar36 = (undefined4)((ulong)in_stack_fffffffffffffe88 >> 0x20);
  lVar23 = *(long *)(param_1 + 0x4a8);
  iVar12 = *(int *)PTR_DAT_027139b0;
  lVar24 = (long)param_2;
  if (iVar12 < 1) {
    plVar18 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar18,0);
    *(long **)PTR_DAT_027139b8 = plVar18;
    *(undefined4 *)puVar3 = 1;
  }
  else {
    plVar18 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar12 + 1;
    if (1 < iVar12 + 1) goto LAB_005b2b60;
  }
  if (plVar18 == (long *)0x0) {
    iVar12 = 0;
  }
  else {
    uVar14 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar18 + 0x20))(plVar18);
    FUN_005b9b10(uVar14,plVar18);
    iVar12 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
LAB_005b2b60:
  *(int *)puVar3 = iVar12;
  iVar1 = *(int *)(lVar23 + lVar24 * 0x108);
  plVar16 = (long *)(lVar23 + lVar24 * 0x108 + 0xa0);
  iVar12 = *(int *)(*plVar16 + 0x54);
  bVar4 = iVar1 == iVar12;
  uVar7 = FUN_00542d00(*(undefined8 *)(param_1 + 0x20));
  if ((uVar7 & 1) == 0) {
    bVar4 = iVar1 == iVar12 && *(int *)(param_1 + 0x224) == 0;
  }
  lVar11 = 0x224;
  if (!bVar4) {
    lVar11 = 0x220;
  }
  uVar2 = *(undefined4 *)(param_1 + lVar11);
  local_e0[0] = 0;
  local_e0[5] = 0;
  local_e0[6] = 0;
  local_e0[3] = 0;
  local_e0[4] = 0;
  local_e0[1] = 0;
  local_e0[2] = 0;
  piVar15 = (int *)(lVar23 + lVar24 * 0x108 + 0x60);
  if (0 < *piVar15) {
    lVar11 = 0;
    do {
      lVar17 = lVar11 + 1;
      local_e0[lVar11] = *(undefined8 *)(*(long *)(lVar23 + lVar24 * 0x108 + 0x68) + lVar11 * 8);
      lVar11 = lVar17;
    } while (lVar17 < *piVar15);
  }
  if (((*(uint *)(param_1 + 0x154) >> 2 & 1) == 0) || (*(int *)(param_1 + 0x210) <= param_2)) {
    uVar5 = 0;
    uVar10 = *(uint *)(param_1 + 0x154);
  }
  else {
    uVar14 = *(undefined8 *)(lVar23 + lVar24 * 0x108 + 0x48);
    if (((*(uint *)(param_1 + 0x154) >> 3 & 1) == 0) && (param_2 < *(int *)(param_1 + 0x20c))) {
      uVar14 = *(undefined8 *)(lVar23 + lVar24 * 0x108 + 0x38);
    }
    lVar11 = lVar23 + lVar24 * 0x108;
    uVar9 = *(undefined8 *)(lVar11 + 0x50);
    puVar35 = (undefined8 *)(lVar11 + 0xa8);
    if (bVar4) {
      uVar5 = FUN_005b1a50(param_1,param_2,1,uVar9,*puVar35,local_e0,uVar14);
      uVar10 = *(uint *)(param_1 + 0x154);
    }
    else {
      lVar17 = lVar23 + lVar24 * 0x108;
      lVar11 = *(long *)(lVar17 + (ulong)(*(int *)(param_1 + 0x180) == 3) * 0x10 + 0x48);
      FUN_005b1a50(param_1,param_2,1,uVar9,lVar11,local_e0,uVar14);
      uVar14 = *puVar35;
      if ((*(float *)(param_1 + 0x1dc) == 0.0) || (*(int *)(lVar17 + 0x28) != 1)) {
        uVar36 = *(undefined4 *)(param_1 + 0x224);
        fVar26 = 0.0;
      }
      else {
        lVar17 = lVar11;
        do {
          lVar21 = lVar17;
          lVar17 = *(long *)(lVar21 + 0x120);
        } while (lVar17 != 0);
        plVar13 = *(long **)(lVar21 + 0xa8);
        (**(code **)(*plVar13 + 0x90))(plVar13,2);
        uVar36 = *(undefined4 *)(param_1 + 0x224);
        fVar27 = *(float *)(param_1 + 0x1dc) *
                 (*(float *)(lVar23 + lVar24 * 0x108 + 0x2c) * 0.25 + 0.25);
        fVar25 = fVar27;
        if (1.0 < fVar27) {
          fVar25 = 1.0;
        }
        fVar26 = 0.0;
        if (0.0 <= fVar27) {
          fVar26 = fVar25;
        }
      }
      uStack_e8 = 0;
      local_f0 = 0;
      local_128 = 0x3f8000003f800000;
      local_130 = 0x3f8000003f800000;
      in_stack_fffffffffffffe90 = 0;
      puVar35 = &local_f0;
      in_stack_fffffffffffffe80 = 0;
      uVar5 = FUN_0057e050(0,0,fVar26,0x3f800000,plVar18,lVar11,uVar14,uVar36,&local_130,0,0,0,1,
                           puVar35,0,0xffffffff);
      uVar36 = (undefined4)((ulong)puVar35 >> 0x20);
      uVar10 = *(uint *)(param_1 + 0x154);
    }
  }
  if ((uVar10 >> 1 & 1) == 0) {
    lVar11 = *(long *)(lVar23 + lVar24 * 0x108 + 0x38);
    lVar17 = lVar11;
  }
  else {
    plVar13 = (long *)(lVar23 + lVar24 * 0x108 + 0x38);
    lVar11 = *plVar13;
    if (param_2 < *(int *)(param_1 + 0x20c)) {
      if ((*(byte *)(param_1 + 0xcc) >> 2 & 1) == 0) {
        iVar12 = -2;
        if (bVar4) {
          iVar12 = -1;
        }
        plVar8 = (long *)(*(long *)(lVar23 + lVar24 * 0x108 + 0x68) + (long)(*piVar15 + iVar12) * 8)
        ;
      }
      else {
        plVar8 = (long *)(lVar23 + lVar24 * 0x108 + 0x58);
      }
      lVar17 = *plVar8;
      fVar27 = (float)NEON_ucvtf(*(undefined4 *)(lVar11 + 0x58));
      fVar29 = *(float *)(lVar11 + 0x88);
      fVar30 = *(float *)(lVar11 + 0x8c);
      fVar25 = (float)NEON_ucvtf(*(undefined4 *)(lVar11 + 0x54));
      fVar34 = *(float *)(lVar11 + 0x90);
      fVar33 = *(float *)(lVar11 + 0x94);
      uVar5 = *(undefined4 *)(lVar17 + 0x54);
      uVar31 = *(undefined4 *)(lVar17 + 0x58);
      FUN_0059d300(lVar17,0,0,1,0,0);
      lVar21 = lVar23 + lVar24 * 0x108;
      pfVar22 = (float *)(lVar21 + 0xdc);
      fVar26 = *pfVar22;
      pfVar19 = (float *)(lVar21 + 0xd8);
      fVar32 = -*pfVar19;
      if (*(int *)(param_1 + 0x16c) == 1) {
        fVar28 = *(float *)(param_1 + 500) * fVar32;
        fVar32 = *(float *)(param_1 + 0x1f0) * fVar32;
        fVar26 = fVar28 + fVar26;
      }
      uVar5 = NEON_ucvtf(uVar5);
      uVar31 = NEON_ucvtf(uVar31);
      local_130 = 0x3f8000003f800000;
      local_100 = 0x477fdc00477fdc00;
      local_128 = CONCAT44(fVar32,0x3f800000);
      local_120 = 0;
      local_118 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_f8 = 0x3f800000477fdc00;
      lVar21 = lVar11;
      do {
        lVar20 = lVar21;
        lVar21 = *(long *)(lVar20 + 0x120);
      } while (lVar21 != 0);
      fStack_114 = fVar26;
      uVar6 = (**(code **)(**(long **)(lVar20 + 0xa8) + 0x80))();
      lVar21 = lVar11;
      do {
        lVar20 = lVar21;
        lVar21 = *(long *)(lVar20 + 0x120);
      } while (lVar21 != 0);
      plVar8 = *(long **)(lVar20 + 0xa8);
      (**(code **)(*plVar8 + 0x78))(plVar8,9);
      if ((*(byte *)(param_1 + 0x154) >> 3 & 1) == 0) {
        uVar14 = 0;
        if ((1 < param_2) && (*(char *)(param_1 + 0x12d) != '\0')) {
          if (param_2 - 2U < 5) {
            lVar21 = *(long *)(*(long *)(param_1 + 0x488) +
                              *(long *)(&DAT_020f1d90 + (long)(int)(param_2 - 2U) * 8) * 8);
          }
          else {
            lVar21 = *(long *)(*(long *)(param_1 + 0x488) + -8);
          }
          if (lVar21 == 0) {
            uVar14 = 0;
          }
          else {
            do {
              lVar20 = lVar21;
              lVar21 = *(long *)(lVar20 + 0x120);
            } while (lVar21 != 0);
            uVar14 = *(undefined8 *)(lVar20 + 0xa8);
          }
        }
        lVar21 = lVar11;
        do {
          lVar20 = lVar21;
          lVar21 = *(long *)(lVar20 + 0x120);
        } while (lVar21 != 0);
        uVar5 = FUN_0057b990(0,0,uVar5,uVar31,0,0,fVar29 * fVar25 + fVar34,fVar30 * fVar27 + fVar33,
                             plVar18,&local_130,&local_120,0,*(undefined8 *)(lVar20 + 0xa8),uVar14,0
                            );
      }
      else {
        local_f0 = CONCAT44(fVar26,fVar32);
        if (*(int *)(param_1 + 0x16c) == 1) {
          local_f0 = CONCAT44(*pfVar22,-*pfVar19);
        }
        uVar14 = 0;
        if ((1 < param_2) && (*(char *)(param_1 + 0x12d) != '\0')) {
          if (param_2 - 2U < 5) {
            lVar21 = *(long *)(&DAT_020f1d90 + (long)(int)(param_2 - 2U) * 8);
          }
          else {
            lVar21 = -1;
          }
          uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x488) + lVar21 * 8);
        }
        uVar5 = FUN_0058d0d0(plVar18,lVar11,lVar17,uVar14,
                             *(undefined4 *)(lVar23 + lVar24 * 0x108 + 0x1c),&local_f0,
                             *(int *)(param_1 + 0x16c),*(undefined4 *)(param_1 + 0x170),
                             in_stack_fffffffffffffe80 & 0xffffff00,
                             CONCAT44(uVar36,*(undefined4 *)(param_1 + 0x17c)),
                             in_stack_fffffffffffffe90 & 0xffffffffffffff00);
      }
      do {
        lVar21 = lVar11;
        lVar11 = *(long *)(lVar21 + 0x120);
      } while (lVar11 != 0);
      plVar8 = *(long **)(lVar21 + 0xa8);
      (**(code **)(*plVar8 + 0x78))(plVar8,uVar6);
      lVar11 = *plVar13;
      uVar10 = *(uint *)(param_1 + 0x154);
    }
    else {
      lVar17 = lVar11;
    }
  }
  lVar21 = 0x208;
  if ((uVar10 & 4) != 0) {
    lVar21 = 0x20c;
  }
  if (param_2 < *(int *)(param_1 + lVar21)) {
    if (bVar4) {
      uVar5 = FUN_005b1a50(param_1,param_2,0,lVar17,*plVar16,local_e0,lVar11,uVar2);
    }
    else {
      lVar21 = lVar23 + lVar24 * 0x108;
      lVar20 = *(long *)(*(long *)(lVar21 + 0x68) + (long)*piVar15 * 8 + -8);
      FUN_005b1a50(param_1,param_2,0,lVar17,lVar20,local_e0,lVar11,uVar2);
      if ((*(float *)(param_1 + 0x1dc) == 0.0) || (*(int *)(lVar21 + 0x28) != 1)) {
        lVar11 = *plVar16;
        uVar36 = *(undefined4 *)(param_1 + 0x224);
        fVar26 = 0.0;
      }
      else {
        lVar11 = lVar20;
        do {
          lVar17 = lVar11;
          lVar11 = *(long *)(lVar17 + 0x120);
        } while (lVar11 != 0);
        plVar13 = *(long **)(lVar17 + 0xa8);
        (**(code **)(*plVar13 + 0x90))(plVar13,2);
        lVar11 = *plVar16;
        uVar36 = *(undefined4 *)(param_1 + 0x224);
        fVar27 = *(float *)(param_1 + 0x1dc) *
                 (*(float *)(lVar23 + lVar24 * 0x108 + 0x2c) * 0.25 + 0.25);
        fVar25 = fVar27;
        if (1.0 < fVar27) {
          fVar25 = 1.0;
        }
        fVar26 = 0.0;
        if (0.0 <= fVar27) {
          fVar26 = fVar25;
        }
      }
      uStack_e8 = 0;
      local_f0 = 0;
      local_128 = 0x3f8000003f800000;
      local_130 = 0x3f8000003f800000;
      uVar5 = FUN_0057e050(0,0,fVar26,0x3f800000,plVar18,lVar20,lVar11,uVar36,&local_130,0,0,0,1,
                           &local_f0,0,0xffffffff);
    }
  }
  return uVar5;
}


