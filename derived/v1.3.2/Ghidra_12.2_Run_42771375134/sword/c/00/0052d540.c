/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0052d540; name: FUN_0052d540
 */


/* WARNING: Removing unreachable block (ram,0x0052dd9c) */

undefined8 FUN_0052d540(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  char cVar14;
  int iVar15;
  int *piVar16;
  long lVar17;
  int *piVar18;
  float *pfVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  char *pcVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  ulong uVar38;
  undefined8 in_stack_fffffffffffffe18;
  uint in_stack_fffffffffffffe20;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  float local_f0;
  undefined4 local_ec;
  long local_e8 [9];
  
  if (*(char *)(param_1 + 0x67b) != '\0') {
    return 0;
  }
  uVar13 = CONCAT71((int7)((ulong)in_stack_fffffffffffffe18 >> 8),1);
  uVar38 = 0;
  FUN_0052e030(param_1,&local_ec,&local_f4,&local_f8,&local_f0,0,0,0,0,uVar13,
               in_stack_fffffffffffffe20 & 0xffffff00);
  uVar29 = (undefined4)((ulong)uVar13 >> 0x20);
  lVar21 = (long)*(int *)(param_1 + 0x298);
  lVar22 = *(long *)(param_1 + 0x2a0);
  plVar23 = (long *)(lVar22 + lVar21 * 0x78 + 0x70);
  if (*plVar23 == 0) {
    lVar7 = 0;
  }
  else {
    FUN_005b7a50(*(undefined8 *)(*plVar23 + 0x40),2);
    lVar7 = *plVar23;
  }
  uVar27 = local_ec;
  if (*(int *)(param_1 + 0xf74) == 0) {
    uVar27 = 0xffffffff;
  }
  FUN_005b8bf0(lVar7,uVar27);
  lVar7 = *plVar23;
  if (lVar7 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(lVar22 + lVar21 * 0x78 + 0x28);
    if (iVar6 == 1) {
      fVar26 = *(float *)(lVar22 + lVar21 * 0x78 + 0x2c);
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
LAB_0052d65c:
      iVar11 = (int)fVar26;
    }
    else {
      if (iVar6 == 0) {
        fVar25 = *(float *)(lVar22 + lVar21 * 0x78 + 0x2c);
        fVar26 = 0.5;
        if (0.0 <= fVar25) {
          fVar26 = fVar25;
        }
        fVar26 = fVar26 / *(float *)(param_1 + 0x7f4);
        goto LAB_0052d65c;
      }
      iVar11 = 0;
    }
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = *(uint *)(PTR_DAT_02713a88 + 0x10);
      if (uVar12 < 2) {
        uVar12 = 1;
      }
    }
    iVar6 = 0;
    if (uVar12 != 0) {
      iVar6 = (iVar11 / 10) / (int)uVar12;
    }
    if (iVar6 < 2) {
      iVar6 = 1;
    }
    if (4 < iVar6) {
      iVar6 = 5;
    }
    iVar15 = iVar6 + 1;
    iVar3 = 0;
    if (iVar15 != 0) {
      iVar3 = (iVar11 - iVar15) / iVar15;
    }
    uVar12 = (uint)((float)iVar3 + DAT_01d4bb5c);
    lVar17 = lVar22 + lVar21 * 0x78;
    *(int *)(lVar17 + 0x68) = iVar15;
    if (0xe < (int)uVar12) {
      uVar12 = 0xf;
    }
    *(uint *)(lVar7 + 0x4f8) = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
    fVar26 = powf(DAT_01d4bff8,
                  (*(float *)(param_1 + 0x7f4) * (float)*(int *)(lVar17 + 0x68)) / DAT_01d4bec4);
    uVar27 = NEON_fminnm(1.0 - fVar26,0x3f000000);
    *(undefined4 *)(*plVar23 + 0x4fc) = uVar27;
    FUN_005b8c00(*plVar23);
  }
  pcVar24 = (char *)(lVar22 + lVar21 * 0x78);
  if (*pcVar24 != pcVar24[100]) {
    *(undefined4 *)(lVar22 + lVar21 * 0x78 + 0x58) = 0;
  }
  fVar26 = DAT_01d4c6b8;
  uVar12 = *(uint *)(PTR_DAT_02713a88 + 0x10);
  if (uVar12 < 2) {
    bVar5 = true;
  }
  else {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x18) + 0x28);
    uVar4 = 0;
    if (uVar12 != 0) {
      uVar4 = uVar1 / uVar12;
    }
    bVar5 = uVar1 == uVar4 * uVar12;
  }
  lVar7 = (long)*(int *)(param_1 + 0x298);
  lVar17 = *(long *)(param_1 + 0x2a0);
  cVar14 = *(char *)(lVar17 + lVar7 * 0x78);
  if ((cVar14 == '\0') || (!bVar5)) {
LAB_0052dcf4:
    if (cVar14 == '\0') goto LAB_0052dfd4;
  }
  else if (*(float *)(lVar22 + lVar21 * 0x78 + 0x24) <= 0.0) {
    piVar18 = (int *)(lVar22 + lVar21 * 0x78 + 0x54);
    iVar15 = *piVar18;
    fVar33 = *(float *)(lVar17 + lVar7 * 0x78 + 4);
    iVar11 = *(int *)(param_1 + 0xf74);
    fVar25 = DAT_01d4c6b8;
    if (iVar11 != 0) {
      fVar25 = 1.0;
    }
    if (fVar33 <= fVar25) {
      fVar25 = fVar33;
    }
    fVar30 = DAT_01d4bd40;
    if (DAT_01d4bac8 <= fVar33) {
      fVar30 = DAT_01d4bd3c / fVar25;
    }
    if (iVar15 == iVar6) {
      lVar17 = *(long *)(*plVar23 + 0x48);
      lVar7 = lVar22 + lVar21 * 0x78;
      uVar13 = *(undefined8 *)(lVar7 + 0xc);
      uVar8 = *(ulong *)(lVar7 + 0x14);
      local_100._4_4_ = (float)(uVar8 >> 0x20);
      local_108._4_4_ = (float)((ulong)uVar13 >> 0x20);
      if (*(char *)(*(long *)(param_1 + 0x18) + 0x58) == '\0') {
        fVar25 = local_100._4_4_;
        local_100 = uVar8;
      }
      else {
        fVar25 = 1.0 - local_100._4_4_;
        local_100 = uVar8 & 0xffffffff;
        fVar25 = fVar25 - local_108._4_4_;
      }
      fVar31 = (float)NEON_ucvtf(*(undefined4 *)(lVar17 + 0x54));
      local_108._0_4_ = (float)uVar13;
      fVar33 = (float)NEON_ucvtf(*(undefined4 *)(lVar17 + 0x58));
      local_e8[1] = 0;
      local_e8[6] = 0;
      local_e8[7] = 0;
      uVar38 = uVar38 & 0xffffffff00000000;
      local_e8[4] = 0;
      local_e8[5] = 0;
      local_100 = CONCAT44(local_108._4_4_ * 0.0 + fVar25,(float)local_108 * 0.0 + (float)local_100)
      ;
      local_e8[2] = 0;
      local_e8[3] = 0;
      local_108 = uVar13;
      local_e8[0] = lVar17;
      FUN_0059db20(0x3f800000,8,local_e8,0,0,0,0,0,0,uVar38);
      uVar27 = (undefined4)(uVar38 >> 0x20);
      FUN_00529d00(local_e8,param_1,1);
      lVar7 = lVar22 + lVar21 * 0x78;
      fVar36 = *(float *)(lVar7 + 0x1c);
      fVar25 = *(float *)(lVar7 + 0x20);
      if (*(char *)(param_1 + 0x59a) == '\0') {
        fVar35 = *(float *)(param_1 + 0x7f8);
        if (iVar11 != 0) goto LAB_0052d940;
LAB_0052d9b4:
        uVar38 = FUN_00534620(param_1);
        piVar16 = (int *)PTR_DAT_027139b0;
        fVar32 = *(float *)(*(long *)(param_1 + 0x198) + 0x138);
        uVar13 = 0x3f800000;
        if ((uVar38 & 1) == 0) {
          uVar13 = 0;
        }
        fVar28 = (float)uVar13;
        fVar37 = *(float *)(lVar22 + lVar21 * 0x78 + 8);
        iVar15 = *(int *)PTR_DAT_027139b0;
        if (iVar15 < 1) {
          plVar20 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                         "../src/GPU\\GPUClassUtil.h",0x49,0);
          uVar13 = FUN_0056dc10(plVar20,0);
          piVar16 = (int *)PTR_DAT_027139b0;
          *(long **)PTR_DAT_027139b8 = plVar20;
          *piVar16 = 1;
LAB_0052db30:
          if (plVar20 == (long *)0x0) {
            iVar15 = 0;
          }
          else {
            uVar9 = *(undefined8 *)PTR_PTR_02713988;
            (**(code **)(*plVar20 + 0x20))(uVar13,local_f0,fVar31 * 0.0,plVar20);
            FUN_005b9b10(uVar9,plVar20);
            piVar16 = (int *)PTR_DAT_027139b0;
            iVar15 = 0;
            *(undefined8 *)PTR_DAT_027139b8 = 0;
          }
        }
        else {
          plVar20 = *(long **)PTR_DAT_027139b8;
          *(int *)PTR_DAT_027139b0 = iVar15 + 1;
          if (iVar15 + 1 < 2) goto LAB_0052db30;
        }
        *piVar16 = iVar15;
        if (*(char *)(param_1 + 0x59a) == '\0') {
          fVar34 = *(float *)(param_1 + 0x7f8);
        }
        else {
          fVar34 = *(float *)(param_1 + 0x8c0) * *(float *)(param_1 + 0x7fc);
        }
        if ((undefined8 *)(param_1 + 0xb84) != &local_128) {
          local_128 = *(undefined8 *)(param_1 + 0xb84);
          local_120 = *(undefined8 *)(param_1 + 0xb8c);
          local_118 = *(undefined8 *)(param_1 + 0xb94);
          local_110 = *(undefined8 *)(param_1 + 0xb9c);
        }
        FUN_0058df00(fVar31,fVar33,fVar31 * 0.0,fVar33 * 0.0,*(float *)(param_1 + 0x8c0) / fVar34,
                     fVar28 * fVar32 * local_f0 * fVar37,fVar36 * fVar35,fVar25 * fVar35,plVar20,
                     param_2,*(undefined8 *)(*(long *)(param_1 + 0x198) + 0x420),lVar17,&local_108,
                     &local_128,local_e8,0,CONCAT44(uVar27,fVar30 * fVar26),
                     CONCAT44(uVar29,0x3e000000),0);
      }
      else {
        fVar35 = *(float *)(param_1 + 0x8c0) * *(float *)(param_1 + 0x7fc);
        if (iVar11 == 0) goto LAB_0052d9b4;
LAB_0052d940:
        uVar2 = *(undefined1 *)(*(long *)(param_1 + 0x198) + 0x180);
        *(undefined1 *)(*(long *)(param_1 + 0x198) + 0x180) = 0;
        uVar29 = *(undefined4 *)(param_1 + 0x8e8);
        local_120 = CONCAT44(uVar29,uVar29);
        local_128 = CONCAT44(uVar29,uVar29);
        if (*(char *)(param_1 + 0x59a) == '\0') {
          fVar26 = *(float *)(param_1 + 0x7f8);
        }
        else {
          fVar26 = *(float *)(param_1 + 0x8c0) * *(float *)(param_1 + 0x7fc);
        }
        FUN_0055f270(fVar31,fVar33,fVar31 * 0.0,fVar33 * 0.0,
                     local_f0 * *(float *)(lVar22 + lVar21 * 0x78 + 8),0x3f800000,local_f4,local_f8,
                     *(undefined8 *)(param_1 + 0x198),
                     *(undefined8 *)(lVar17 + (long)*(int *)(lVar17 + 0xa0) * 8 + 0xb8),0,param_2,0,
                     local_ec,&local_128,0,CONCAT44(uVar27,0x7f7fffff),local_e8,
                     *(float *)(param_1 + 0x8c0) / fVar26,param_1 + 0x8d4,
                     *(undefined4 *)(param_1 + 0x8e4),0,0,0,0,0,0,0,&local_108,0xffffffff,0,
                     0xffffffff,0x3f19999a,0);
        *(undefined1 *)(*(long *)(param_1 + 0x198) + 0x180) = uVar2;
      }
      FUN_0059e450(0x3f800000,0x1f,0,0,0,0,0,0,0);
      iVar15 = *piVar18;
    }
    if ((iVar6 <= iVar15) && (iVar6 = FUN_005b8a60(*plVar23), -1 < iVar6)) {
      fVar26 = *(float *)(param_1 + 0xf70);
      *piVar18 = -1;
      if (iVar11 != 0) {
        fVar30 = fVar26;
      }
      FUN_005b8af0(*(undefined4 *)(param_1 + 0x8c0),fVar30,*(undefined4 *)(param_1 + 0x6c4),
                   *(undefined4 *)(param_1 + 0x6c8),*plVar23,0);
    }
    uVar29 = FUN_005b92a0(*plVar23);
    *(undefined4 *)(lVar22 + lVar21 * 0x78 + 0x5c) = uVar29;
    lVar7 = (long)*(int *)(param_1 + 0x298);
    lVar17 = *(long *)(param_1 + 0x2a0);
    cVar14 = *(char *)(lVar17 + lVar7 * 0x78);
    goto LAB_0052dcf4;
  }
  fVar26 = *(float *)(lVar17 + lVar7 * 0x78 + 0x24);
  if (fVar26 <= 0.0) {
    if (*(long *)(lVar17 + lVar7 * 0x78 + 0x70) == 0) {
      fVar26 = 0.0;
    }
    else {
      fVar26 = *(float *)(lVar17 + lVar7 * 0x78 + 0x5c);
    }
  }
  fVar26 = fVar26 + DAT_01d4c104;
  fVar25 = *(float *)(param_1 + 0x8c0) + DAT_01d4c104;
  if (*(int *)(param_1 + 0xf74) == 0) {
    fVar30 = *(float *)(lVar17 + lVar7 * 0x78 + 4);
    fVar33 = DAT_01d4bac8;
    if (DAT_01d4bac8 <= fVar30) {
      fVar33 = fVar30;
    }
  }
  else {
    fVar30 = *(float *)(lVar17 + lVar7 * 0x78 + 4);
    fVar33 = fVar30;
    if (1.0 < fVar30) {
      fVar33 = 1.0;
    }
    fVar31 = DAT_01d4bac8;
    if (DAT_01d4bac8 <= fVar30) {
      fVar31 = fVar33;
    }
    fVar33 = (float)FUN_005b8b90(fVar31,*(undefined4 *)(param_1 + 0xf70),*plVar23);
  }
  fVar33 = fVar33 / fVar26;
  lVar7 = lVar22 + lVar21 * 0x78;
  pfVar19 = (float *)(lVar7 + 0x40);
  if (*(float *)(lVar7 + 0x38) <= fVar33) {
    pfVar19 = (float *)(lVar7 + 0x4c);
  }
  fVar36 = *pfVar19;
  fVar30 = logf(fVar25);
  fVar25 = DAT_01d4c4dc;
  fVar30 = fVar30 / DAT_01d4c4dc;
  fVar33 = logf(fVar33);
  fVar31 = logf(*(float *)(lVar7 + 0x38));
  fVar26 = DAT_01d4bacc;
  fVar31 = fVar31 / fVar25;
  fVar31 = fVar31 + fVar36 * (fVar33 / fVar25 - fVar31);
  lVar7 = lVar22 + lVar21 * 0x78;
  if (fVar31 <= fVar30) {
    fVar33 = powf(1.0 - *(float *)(lVar7 + 0x3c),*(float *)(param_1 + 0x7f4) / DAT_01d4bacc);
    fVar33 = 1.0 - fVar33;
    fVar25 = fVar33;
    if (0.5 < fVar33) {
      fVar25 = 0.5;
    }
    fVar36 = 0.0;
    if (0.0 <= fVar33) {
      fVar36 = fVar25;
    }
    fVar25 = powf(1.0 - *(float *)(lVar7 + 0x3c),*(float *)(param_1 + 0x7f4) / fVar26);
    fVar25 = 1.0 - fVar25;
    fVar26 = fVar25;
    if (0.5 < fVar25) {
      fVar26 = 0.5;
    }
    fVar33 = 0.0;
    if (0.0 <= fVar25) {
      fVar33 = fVar26;
    }
    fVar26 = (fVar30 + (fVar31 - fVar30) * fVar36) - fVar30;
    fVar25 = -((*(float *)(lVar7 + 0x44) / *(float *)(param_1 + 0xf6c)) *
              *(float *)(param_1 + 0x7f4));
    if (fVar26 <= fVar25) {
      fVar26 = fVar25;
    }
    fVar33 = *(float *)(lVar7 + 0x58) + fVar33 * (fVar26 - *(float *)(lVar7 + 0x58));
    fVar25 = fVar33;
    if (0.0 < fVar33) {
      fVar25 = 0.0;
    }
    if (fVar26 <= fVar33) {
      fVar26 = fVar25;
    }
    fVar25 = fVar30 + fVar26;
    if (fVar30 + fVar26 <= fVar31) {
      fVar25 = fVar31;
      fVar26 = 0.0;
    }
    *(float *)(lVar7 + 0x58) = fVar26;
  }
  else {
    fVar33 = powf(1.0 - *(float *)(lVar7 + 0x48),*(float *)(param_1 + 0x7f4) / DAT_01d4bacc);
    fVar33 = 1.0 - fVar33;
    fVar25 = fVar33;
    if (0.5 < fVar33) {
      fVar25 = 0.5;
    }
    fVar36 = 0.0;
    if (0.0 <= fVar33) {
      fVar36 = fVar25;
    }
    fVar25 = powf(1.0 - *(float *)(lVar7 + 0x48),*(float *)(param_1 + 0x7f4) / fVar26);
    fVar25 = 1.0 - fVar25;
    fVar26 = fVar25;
    if (0.5 < fVar25) {
      fVar26 = 0.5;
    }
    fVar33 = 0.0;
    if (0.0 <= fVar25) {
      fVar33 = fVar26;
    }
    pfVar19 = (float *)(lVar7 + 0x58);
    fVar25 = (*(float *)(lVar7 + 0x50) / *(float *)(param_1 + 0xf6c)) * *(float *)(param_1 + 0x7f4);
    fVar26 = (fVar30 + (fVar31 - fVar30) * fVar36) - fVar30;
    if (fVar25 <= fVar26) {
      fVar26 = fVar25;
    }
    fVar25 = *pfVar19 + fVar33 * (fVar26 - *pfVar19);
    if (fVar25 <= fVar26) {
      fVar26 = fVar25;
    }
    fVar33 = 0.0;
    if (0.0 <= fVar25) {
      fVar33 = fVar26;
    }
    *pfVar19 = fVar33;
    fVar25 = fVar30 + fVar33;
    if (fVar31 <= fVar30 + fVar33) {
      *pfVar19 = 0.0;
      fVar25 = fVar31;
    }
  }
  fVar25 = exp2f(fVar25);
  fVar26 = *(float *)(lVar22 + lVar21 * 0x78 + 0x30);
  if ((fVar26 <= fVar25) && (fVar26 = *(float *)(lVar22 + lVar21 * 0x78 + 0x34), fVar25 <= fVar26))
  {
    fVar26 = fVar25;
  }
  *(float *)(lVar22 + lVar21 * 0x78 + 0x60) = fVar26;
  FUN_005b92b0(*plVar23);
LAB_0052dfd4:
  puVar10 = (uint *)(lVar22 + lVar21 * 0x78 + 0x54);
  uVar12 = *puVar10;
  if (bVar5) {
    uVar12 = uVar12 + 1;
    *puVar10 = uVar12;
  }
  *puVar10 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
  pcVar24[100] = *pcVar24;
  return 0;
}


