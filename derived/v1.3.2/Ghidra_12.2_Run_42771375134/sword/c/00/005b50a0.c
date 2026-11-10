/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b50a0; name: FUN_005b50a0
 */


undefined8 FUN_005b50a0(long param_1,long param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  float *pfVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint in_stack_ffffffffffffff00;
  ulong in_stack_ffffffffffffff10;
  float local_c8;
  float local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  puVar6 = PTR_DAT_027139b0;
  iVar7 = *(int *)PTR_DAT_027139b0;
  if (iVar7 < 1) {
    plVar21 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar21,0);
    *(long **)PTR_DAT_027139b8 = plVar21;
    *(undefined4 *)puVar6 = 1;
    if (plVar21 != (long *)0x0) goto LAB_005b5108;
LAB_005b5190:
    iVar7 = 0;
  }
  else {
    plVar21 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar7 + 1;
    if (iVar7 + 1 < 2) {
      if (plVar21 == (long *)0x0) goto LAB_005b5190;
LAB_005b5108:
      uVar22 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar21 + 0x20))(plVar21);
      FUN_005b9b10(uVar22,plVar21);
      iVar7 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  puVar1 = (uint *)(param_1 + 0x20c);
  *(int *)puVar6 = iVar7;
  puVar1[0] = 0;
  puVar1[1] = 0;
  uVar8 = *(uint *)(param_1 + 0xd0);
  lVar14 = (long)(int)uVar8;
  puVar2 = (uint *)(param_1 + 0x210);
  if ((int)uVar8 < 1) {
    uVar8 = 0;
    uVar11 = 0;
    iVar7 = *(int *)(param_1 + 0x1f8);
  }
  else {
    fVar28 = *(float *)(param_1 + 0x194);
    fVar29 = *(float *)(param_1 + 400);
    if (0.0 < fVar28) {
      fVar26 = *(float *)(param_1 + 0x1b0);
      uVar9 = 0;
      uVar12 = 0;
      uVar16 = 0;
      do {
        while( true ) {
          uVar11 = (uint)uVar12;
          if ((fVar26 <= 0.0) ||
             (lVar19 = *(long *)(param_1 + 0x4a8) + uVar16 * 0x108,
             0.0 <= ((fVar28 - fVar26) / fVar28) * *(float *)(lVar19 + 0xd0) +
                    *(float *)(lVar19 + 0xd4))) {
            uVar8 = (int)uVar16 + 1;
            uVar9 = (ulong)uVar8;
            *puVar2 = uVar8;
          }
          if ((0.0 < fVar26 && 0.0 < fVar29) &&
             (lVar19 = *(long *)(param_1 + 0x4a8) + uVar16 * 0x108,
             *(float *)(lVar19 + 0xdc) - ((fVar29 - fVar26) / fVar29) * *(float *)(lVar19 + 0xd8) <
             0.0)) break;
          uVar16 = uVar16 + 1;
          uVar12 = uVar16 & 0xffffffff;
          uVar11 = (uint)uVar16;
          *puVar1 = uVar11;
          if (lVar14 <= (long)uVar16) goto LAB_005b52d8;
        }
        uVar16 = uVar16 + 1;
      } while ((long)uVar16 < lVar14);
    }
    else {
      if (fVar29 <= 0.0) {
        uVar15 = uVar8 & 7;
        if (uVar8 - 1 < 7) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          do {
            uVar11 = uVar11 + 8;
          } while (uVar8 - uVar15 != uVar11);
        }
        if (uVar15 != 0) {
          iVar7 = -uVar15;
          do {
            uVar11 = uVar11 + 1;
            iVar7 = iVar7 + 1;
          } while (iVar7 != 0);
        }
        *puVar2 = uVar11;
        *puVar1 = uVar11;
        iVar7 = *(int *)(param_1 + 0x1f8);
        uVar8 = uVar11;
        goto joined_r0x005b5b80;
      }
      uVar16 = 0;
      uVar9 = 0;
      pfVar17 = (float *)(*(long *)(param_1 + 0x4a8) + 0xdc);
      do {
        uVar9 = uVar9 + 1;
        *puVar2 = (uint)uVar9;
        if ((*(float *)(param_1 + 0x1b0) <= 0.0) ||
           (0.0 <= *pfVar17 - ((fVar29 - *(float *)(param_1 + 0x1b0)) / fVar29) * pfVar17[-1])) {
          uVar16 = uVar9 & 0xffffffff;
          *puVar1 = (uint)uVar9;
        }
        uVar11 = (uint)uVar16;
        pfVar17 = pfVar17 + 0x42;
      } while ((long)uVar9 < lVar14);
    }
LAB_005b52d8:
    uVar8 = (uint)uVar9;
    iVar7 = *(int *)(param_1 + 0x1f8);
  }
joined_r0x005b5b80:
  if (-1 < iVar7) {
    puVar3 = puVar1;
    if (iVar7 <= (int)uVar11) {
      puVar3 = (uint *)(param_1 + 0x1f8);
    }
    uVar11 = *puVar3;
    *puVar1 = uVar11;
  }
  if (-1 < *(int *)(param_1 + 0x1fc)) {
    puVar1 = puVar2;
    if (*(int *)(param_1 + 0x1fc) <= (int)uVar8) {
      puVar1 = (uint *)(param_1 + 0x1fc);
    }
    uVar8 = *puVar1;
    *puVar2 = uVar8;
  }
  puVar1 = (uint *)(param_1 + 0x214);
  puVar3 = (uint *)(param_1 + 0x218);
  *(uint *)(param_1 + 0x214) = uVar11;
  *(uint *)(param_1 + 0x218) = uVar8;
  if ((*(uint *)(param_1 + 0x154) >> 4 & 1) == 0) {
    uVar15 = uVar11;
    uVar13 = uVar8;
    if ((*(uint *)(param_1 + 0x154) >> 5 & 1) == 0) goto LAB_005b534c;
    uVar15 = 0;
  }
  else {
    uVar15 = 1;
  }
  *puVar1 = uVar15;
  *puVar3 = uVar15;
  uVar13 = uVar15;
LAB_005b534c:
  if (-1 < *(int *)(param_1 + 0x200)) {
    puVar4 = puVar1;
    if (*(int *)(param_1 + 0x200) <= (int)uVar15) {
      puVar4 = (uint *)(param_1 + 0x200);
    }
    *puVar1 = *puVar4;
  }
  if (-1 < *(int *)(param_1 + 0x204)) {
    puVar1 = puVar3;
    if (*(int *)(param_1 + 0x204) <= (int)uVar13) {
      puVar1 = (uint *)(param_1 + 0x204);
    }
    *puVar3 = *puVar1;
  }
  lVar14 = 0x20c;
  if ((int)uVar11 <= (int)uVar8) {
    lVar14 = 0x210;
  }
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_1 + lVar14);
  if (param_2 == 0) {
    param_2 = *(long *)(param_1 + 0x228);
  }
  iVar7 = *(int *)(param_1 + 0x498);
  lVar14 = param_2;
  if (0 < iVar7) {
    lVar19 = 0;
    bVar25 = false;
    lVar20 = param_2;
    do {
      lVar14 = *(long *)(*(long *)(param_1 + 0x490) + lVar19 * 8);
      if (*(uint *)(lVar14 + 0x54) < *(uint *)(lVar20 + 0x54)) {
        bVar25 = true;
        local_a8 = 0x3f8000003f800000;
        uStack_a0 = 0x3f8000003f800000;
        local_b8 = 0;
        uStack_b0 = 0;
        in_stack_ffffffffffffff00 = 0;
        in_stack_ffffffffffffff10 = 0;
        FUN_0057e050(0,0,0,0x3f800000,plVar21,lVar20,lVar14,0,&local_a8,0,0,0,1,&local_b8,0,
                     0xffffffff);
        iVar7 = *(int *)(param_1 + 0x498);
        lVar20 = lVar14;
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < iVar7);
    if (!bVar25) {
      lVar14 = param_2;
    }
  }
  if ((*(char *)(param_1 + 0x12d) != '\0') && (iVar7 = *(int *)(param_1 + 0x3f8), -1 < iVar7)) {
    lVar19 = lVar14;
    lVar20 = 0;
    do {
      lVar23 = *(long *)(*(long *)(param_1 + 0x430) + lVar20 * 8);
      if (lVar23 != lVar19) {
        local_a8 = 0x3f8000003f800000;
        uStack_a0 = 0x3f8000003f800000;
        in_stack_ffffffffffffff00 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        in_stack_ffffffffffffff10 = 0;
        FUN_0057e050(0,0,0,0x3f800000,plVar21,lVar19,lVar23,0,&local_a8,0,0,0,1,&local_b8,0,
                     0xffffffff);
        iVar7 = *(int *)(param_1 + 0x3f8);
      }
      fVar28 = DAT_01d4bf10;
      bVar25 = lVar20 < iVar7;
      lVar19 = lVar23;
      lVar20 = lVar20 + 1;
    } while (bVar25);
    if (0 < iVar7) {
      uVar16 = 0;
      lVar19 = 0x78;
      do {
        fVar29 = *(float *)(param_1 + 0x3e0);
        lVar20 = *(long *)(param_1 + 0x420);
        lVar23 = *(long *)(param_1 + 0x428);
        fVar26 = powf(0.5,(float)(int)uVar16);
        fVar30 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xc4));
        fVar26 = (fVar29 + -1.5) * fVar26 + 1.5;
        fVar31 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 200));
        fVar29 = fVar26;
        if (fVar28 < fVar26) {
          fVar29 = fVar28;
        }
        fVar27 = 2.0;
        if (2.0 <= fVar26) {
          fVar27 = fVar29;
        }
        fVar29 = *(float *)(param_1 + 0x3dc) * 0.5;
        if (uVar16 != *(int *)(param_1 + 0x3f8) - 1) {
          fVar29 = *(float *)(param_1 + 0x3dc);
        }
        fVar26 = *(float *)(lVar23 + lVar19);
        if (fVar31 <= fVar30) {
          fVar30 = *(float *)(lVar20 + lVar19);
        }
        else {
          fVar26 = fVar26 * (fVar30 / fVar31);
          fVar30 = (fVar30 / fVar31) * *(float *)(lVar20 + lVar19);
        }
        local_a8 = 0x3f8000003f800000;
        uStack_a0 = 0x3f8000003f800000;
        local_b8 = 0;
        uStack_b0 = 0;
        FUN_00581750(fVar27,*(float *)(param_1 + 0x3d8) / *(float *)(param_1 + 0x3ac),
                     fVar29 / *(float *)(param_1 + 0x3ac),
                     ((fVar26 * 0.5) / *(float *)(param_1 + 0x1e4)) * *(float *)(param_1 + 0x1e8) +
                     *(float *)(param_1 + 0x1ec),
                     ((fVar30 * 0.5) / *(float *)(param_1 + 0x1e4)) * *(float *)(param_1 + 0x1e8) +
                     *(float *)(param_1 + 0x1ec),plVar21,
                     *(undefined8 *)(*(long *)(param_1 + 0x430) + uVar16 * 8),
                     *(undefined8 *)(*(long *)(param_1 + 0x488) + uVar16 * 8),&local_a8,&local_b8);
        uVar16 = uVar16 + 1;
        lVar19 = lVar19 + 0x80;
      } while ((long)uVar16 < (long)*(int *)(param_1 + 0x3f8));
    }
  }
  lVar19 = 0x208;
  if ((*(uint *)(param_1 + 0x154) & 4) != 0) {
    lVar19 = 0x20c;
  }
  uVar16 = (ulong)*(uint *)(param_1 + lVar19);
  if (0 < (int)*(uint *)(param_1 + lVar19)) {
    if ((*(uint *)(param_1 + 0x154) >> 3 & 1) == 0) {
      lVar19 = 0x38;
      lVar20 = lVar14;
      do {
        lVar23 = *(long *)(*(long *)(param_1 + 0x4a8) + lVar19);
        if (lVar20 != lVar23) {
          lVar24 = 0x21c;
          if (lVar20 != lVar14) {
            lVar24 = 0x220;
          }
          local_a8 = 0x3f8000003f800000;
          uStack_a0 = 0x3f8000003f800000;
          local_b8 = 0;
          uStack_b0 = 0;
          in_stack_ffffffffffffff10 = 0;
          in_stack_ffffffffffffff00 = 0;
          FUN_0057e050(0,0,0,0x3f800000,plVar21,lVar20,lVar23,*(undefined4 *)(param_1 + lVar24),
                       &local_a8,0,0,0,1,&local_b8,0,0xffffffff);
        }
        lVar19 = lVar19 + 0x108;
        uVar16 = uVar16 - 1;
        lVar20 = lVar23;
      } while (uVar16 != 0);
    }
    else {
      lVar19 = 0;
      lVar20 = lVar14;
      do {
        lVar23 = *(long *)(param_1 + 0x4a8) + lVar19;
        lVar24 = *(long *)(lVar23 + 0x38);
        if (lVar20 != lVar24) {
          lVar18 = 0x21c;
          if (lVar20 != lVar14) {
            lVar18 = 0x220;
          }
          local_a8 = *(ulong *)(lVar23 + 0xd8) ^ 0x80000000;
          iVar7 = *(int *)(param_1 + 0x130);
          if (iVar7 < 2) {
            fVar26 = *(float *)(param_1 + 0x178);
            fVar28 = 1.0;
            if ((lVar19 != 0x108 || iVar7 != 1) || 1.0 <= fVar26) {
              fVar28 = fVar26;
            }
            fVar29 = 1.0;
            if ((lVar19 != 0x108 || iVar7 != 1) || 1.0 <= fVar26) {
              fVar29 = fVar26;
            }
          }
          else {
            fVar28 = *(float *)(param_1 + 0x178);
            if (fVar28 <= 1.0) {
              fVar28 = 1.0;
            }
            fVar29 = fVar28;
          }
          local_b8 = CONCAT44(fVar28,fVar29);
          in_stack_ffffffffffffff10 = CONCAT44((int)(in_stack_ffffffffffffff10 >> 0x20),1);
          in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffff00;
          FUN_0058b8c0(0,0,plVar21,lVar20,lVar24,&local_a8,&local_b8,
                       *(undefined4 *)(param_1 + 0x16c),*(undefined4 *)(param_1 + lVar18),0,
                       in_stack_ffffffffffffff00,1,in_stack_ffffffffffffff10);
        }
        lVar19 = lVar19 + 0x108;
        uVar16 = uVar16 - 1;
        lVar20 = lVar24;
      } while (uVar16 != 0);
    }
  }
  if (((*(byte *)(param_1 + 0x154) >> 2 & 1) != 0) && (0 < (int)*puVar2)) {
    lVar20 = 0;
    lVar19 = 0;
    lVar23 = lVar14;
    do {
      lVar24 = *(long *)(param_1 + 0x4a8) + lVar20;
      lVar18 = *(long *)(lVar24 + 0x48);
      if (lVar23 == lVar14) {
        iVar7 = *(int *)(param_1 + 0x21c);
      }
      else {
        iVar7 = 0;
      }
      lVar10 = (long)(int)*puVar3;
      if (*(int *)(lVar23 + 0x54) == *(int *)(lVar18 + 0x54)) {
        bVar25 = iVar7 == 0 && *(int *)(lVar23 + 0x58) == *(int *)(lVar18 + 0x58);
      }
      else {
        bVar25 = false;
      }
      local_c0 = *(undefined8 *)(lVar24 + 0xd0);
      iVar5 = *(int *)(param_1 + 0x130);
      lVar24 = lVar23;
      if (!(bool)(bVar25 & lVar10 <= lVar19)) {
        lVar24 = lVar18;
      }
      if (iVar5 < 2) {
        fVar28 = *(float *)(param_1 + 0x178);
        local_c4 = 1.0;
        if ((lVar19 != 1 || iVar5 != 1) || 1.0 <= fVar28) {
          local_c4 = fVar28;
        }
        local_c8 = 1.0;
        if ((lVar19 != 1 || iVar5 != 1) || 1.0 <= fVar28) {
          local_c8 = fVar28;
        }
        if (lVar19 < lVar10) goto LAB_005b591c;
LAB_005b58a8:
        if (!(bool)(bVar25 & lVar10 <= lVar19)) {
          in_stack_ffffffffffffff00 = 0;
          local_a8 = 0x3f8000003f800000;
          uStack_a0 = 0x3f8000003f800000;
          local_b8 = 0;
          uStack_b0 = 0;
          in_stack_ffffffffffffff10 = 0;
          FUN_0057e050(0,0,0,0x3f800000,plVar21,lVar23,lVar24,iVar7,&local_a8,0,0,0,1,&local_b8,0,
                       0xffffffff);
        }
      }
      else {
        local_c8 = *(float *)(param_1 + 0x178);
        if (local_c8 <= 1.0) {
          local_c8 = 1.0;
        }
        local_c4 = local_c8;
        if (lVar10 <= lVar19) goto LAB_005b58a8;
LAB_005b591c:
        in_stack_ffffffffffffff10 = CONCAT44((int)(in_stack_ffffffffffffff10 >> 0x20),1);
        in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffff00;
        FUN_0058b8c0(0,0,plVar21,lVar23,lVar24,&local_c0,&local_c8,*(undefined4 *)(param_1 + 0x16c),
                     iVar7,1,in_stack_ffffffffffffff00,1,in_stack_ffffffffffffff10);
      }
      lVar19 = lVar19 + 1;
      lVar20 = lVar20 + 0x108;
      lVar23 = lVar24;
    } while (lVar19 < (int)*puVar2);
    if (0 < (int)*puVar2) {
      uVar16 = 0;
      lVar19 = 0xd4;
      do {
        pfVar17 = (float *)(*(long *)(param_1 + 0x4a8) + lVar19);
        lVar20 = *(long *)(pfVar17 + -0x23);
        if (lVar24 == lVar14) {
          iVar7 = *(int *)(param_1 + 0x21c);
        }
        else {
          iVar7 = 0;
        }
        if (*(int *)(lVar24 + 0x54) == *(int *)(lVar20 + 0x54)) {
          bVar25 = iVar7 == 0 && *(int *)(lVar24 + 0x58) == *(int *)(lVar20 + 0x58);
        }
        else {
          bVar25 = false;
        }
        if (!(bool)(bVar25 & (long)(int)*puVar3 <= (long)uVar16)) {
          lVar24 = lVar20;
        }
        if ((long)uVar16 < (long)(int)*puVar3) {
          fVar28 = pfVar17[-0x2e];
          if (*(char *)(param_1 + 0x12d) == '\0') {
LAB_005b5a3c:
            uVar22 = 0;
          }
          else {
            if (*(int *)(param_1 + 0x130) < 2) {
              if ((lVar19 == 0x1dc) && (*(int *)(param_1 + 0x130) == 1)) goto LAB_005b5a3c;
              if ((uint)pfVar17[-0x2f] < 4) {
                fVar28 = *(float *)(&DAT_01d4b4e0 + (long)(int)pfVar17[-0x2f] * 4);
              }
            }
            if (uVar16 < 2) goto LAB_005b5a3c;
            uVar8 = (int)uVar16 + 0x7ffffffe;
            lVar20 = -1;
            if ((uVar8 & 0x7fffffff) < 5) {
              lVar20 = *(long *)(&DAT_020f1d90 + ((long)((ulong)uVar8 << 0x21) >> 0x21) * 8);
            }
            uVar22 = *(undefined8 *)(*(long *)(param_1 + 0x488) + lVar20 * 8);
          }
          in_stack_ffffffffffffff10 = in_stack_ffffffffffffff10 & 0xffffffffffffff00;
          FUN_0058d0d0(plVar21,lVar24,*(undefined8 *)(pfVar17 + -0x21),uVar22,fVar28,pfVar17 + -1,
                       *(undefined4 *)(param_1 + 0x16c),*(undefined4 *)(param_1 + 0x170),1,
                       *(undefined4 *)(param_1 + 0x17c),in_stack_ffffffffffffff10);
        }
        else {
          fVar28 = 0.5;
          if (*(int *)(param_1 + 0x16c) != 1) {
            fVar28 = 1.0;
          }
          local_a8 = CONCAT44((*pfVar17 + pfVar17[-1] * *(float *)(param_1 + 500)) * fVar28 + 0.0,
                              pfVar17[-1] * *(float *)(param_1 + 0x1f0) * fVar28);
          FUN_0058bac0(plVar21,lVar24,*(undefined8 *)(pfVar17 + -0x21),&local_a8,0,0);
        }
        uVar16 = uVar16 + 1;
        lVar19 = lVar19 + 0x108;
      } while ((long)uVar16 < (long)(int)*puVar2);
    }
  }
  return 0;
}


