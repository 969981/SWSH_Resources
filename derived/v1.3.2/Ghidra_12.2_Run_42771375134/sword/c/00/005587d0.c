/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005587d0; name: FUN_005587d0
 */


ulong FUN_005587d0(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  uint in_stack_ffffffffffffff00;
  undefined8 *in_stack_ffffffffffffff08;
  ulong in_stack_ffffffffffffff10;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  float local_ac;
  
  puVar8 = PTR_DAT_027139b0;
  iVar10 = *(int *)PTR_DAT_027139b0;
  if (iVar10 < 1) {
    plVar12 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar12,0);
    *(long **)PTR_DAT_027139b8 = plVar12;
    *(undefined4 *)puVar8 = 1;
    if (plVar12 != (long *)0x0) goto LAB_00558838;
LAB_005588c0:
    iVar10 = 0;
  }
  else {
    plVar12 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar10 + 1;
    if (iVar10 + 1 < 2) {
      if (plVar12 == (long *)0x0) goto LAB_005588c0;
LAB_00558838:
      uVar13 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar12 + 0x20))(plVar12);
      FUN_005b9b10(uVar13,plVar12);
      iVar10 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *(int *)puVar8 = iVar10;
  iVar10 = *(int *)(param_1 + 0xd0);
  if (iVar10 - 2U < 0x28) {
    uVar9 = (uint)(0xc0000c4011 >> ((ulong)(iVar10 - 2U) & 0x3f)) & 1;
    if (iVar10 - 10U < 0x3a) goto LAB_00558910;
LAB_00558e50:
    if (((uint)(iVar10 != 0x1a) & (uVar9 ^ 0xffffffff)) != 0) {
      fVar20 = (float)FUN_00558300(param_1);
      fVar20 = powf(fVar20,1.0 / (float)*(int *)(param_1 + 0x3d8));
      uVar9 = *(uint *)(param_1 + 0xd0);
      switch(uVar9) {
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
switchD_00558e9c_caseD_1c:
        uVar21 = 0x40000000;
        break;
      default:
        uVar21 = NEON_fminnm(fVar20,0x40000000);
        if ((uVar9 != 0) && ((uVar9 | 1) == 0x19)) goto switchD_00558e9c_caseD_1c;
      }
      *(undefined4 *)(param_1 + 0x3fc) = uVar21;
      goto LAB_00558938;
    }
  }
  else {
    uVar9 = 0;
    if (0x39 < iVar10 - 10U) goto LAB_00558e50;
LAB_00558910:
    if ((1L << ((ulong)(iVar10 - 10) & 0x3f) & 0x200100001000001U) == 0) goto LAB_00558e50;
  }
  *(undefined4 *)(param_1 + 0x3fc) = 0x3f800000;
LAB_00558938:
  uVar2 = *(uint *)(param_1 + 0x3d8);
  fVar20 = 1.0;
  uVar21 = *(undefined4 *)(param_1 + 0x2e4);
  uVar9 = *(uint *)(param_1 + 0xe0);
  if ((int)uVar2 <= (int)*(uint *)(param_1 + 0xe0)) {
    uVar9 = uVar2;
  }
  if (*(float *)(param_1 + 0x1e4) != 1.0) {
    fVar20 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xc0));
    fVar20 = logf((*(float *)(param_1 + 0x404) *
                  *(float *)(&DAT_01cd5370 + (ulong)(*(char *)(param_1 + 0xfa) == '\0') * 4)) /
                  fVar20);
    fVar20 = powf(*(float *)(param_1 + 0x1e4),fVar20 / DAT_01d4c0dc + -4.0);
    fVar20 = 1.0 / fVar20;
  }
  fVar7 = DAT_01d4c1b8;
  fVar6 = DAT_01d4c19c;
  fVar5 = DAT_01d4c088;
  fVar4 = DAT_01d4bd58;
  local_ac = 1.0;
  if ((int)uVar2 < 1) {
    uVar14 = 0;
    uVar17 = FUN_00558ed0(param_1);
    iVar10 = (int)uVar17;
  }
  else {
    uVar17 = 0;
    uVar14 = 0;
    lVar18 = (long)(int)uVar9;
    lVar16 = 0x28;
    do {
      fVar22 = 1.0;
      lVar11 = *(long *)(param_1 + 800) + lVar16;
      uVar13 = *(undefined8 *)(lVar11 + -0x18);
      uVar1 = *(undefined8 *)(lVar11 + -0x10);
      uVar15 = *(undefined8 *)(lVar11 + -8);
      if ((lVar16 != 0x28) && (fVar22 = 1.0, *(char *)(param_1 + 0xfa) != '\0')) {
        fVar22 = 1.5;
      }
      if ((long)uVar17 < lVar18) {
        bVar3 = false;
        if (lVar16 != 0x28) goto LAB_00558c5c;
LAB_00558c8c:
        fVar19 = *(float *)(param_1 + 0x1e0) * *(float *)(*(long *)(param_1 + 800) + lVar16 + -0x20)
        ;
        if (bVar3) goto LAB_00558ca4;
      }
      else {
        local_c0 = 0x3f8000003f800000;
        uStack_b8 = 0x3f8000003f800000;
        bVar3 = true;
        in_stack_ffffffffffffff08 = &local_d0;
        local_d0 = 0;
        uStack_c8 = 0;
        in_stack_ffffffffffffff10 = 0;
        in_stack_ffffffffffffff00 = 0;
        FUN_0057e050(0,0,0,0x3f800000,plVar12,*(undefined8 *)(lVar11 + -0x48),uVar13,0,&local_c0,1,0
                     ,0,1,in_stack_ffffffffffffff08,0,0xffffffff);
        local_ac = local_ac + -1.0;
        if (lVar16 == 0x28) goto LAB_00558c8c;
LAB_00558c5c:
        if (lVar18 <= (long)uVar17) goto LAB_00558c8c;
        lVar11 = *(long *)(param_1 + 800) + lVar16;
        uVar13 = *(undefined8 *)(lVar11 + -0x48);
        fVar19 = *(float *)(param_1 + 0x1e0) * *(float *)(lVar11 + -0x20);
LAB_00558ca4:
        fVar19 = fVar19 * fVar6;
      }
      fVar22 = fVar20 * fVar22;
      if ((*(char *)(param_1 + 0x130) == '\0') &&
         (lVar16 != 0x28 || *(char *)(param_1 + 0xfa) == '\0')) {
        uStack_b8 = (ulong)(uint)((fVar19 * fVar7) / fVar4);
        local_c0 = CONCAT44((fVar19 * fVar5) / fVar4,-((fVar19 * fVar4) / fVar4));
        local_d0 = 0x3f8000003f800000;
        uStack_c8 = 0x3f8000003f800000;
        in_stack_ffffffffffffff10 = in_stack_ffffffffffffff10 & 0xffffffff00000000;
        in_stack_ffffffffffffff08 =
             (undefined8 *)((ulong)in_stack_ffffffffffffff08 & 0xffffffffffffff00);
        in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffff00;
        uVar9 = FUN_00597bd0(fVar22,*(undefined4 *)(param_1 + 0x400),plVar12,uVar13,uVar15,uVar1,
                             &local_c0,uVar21,&local_d0,0,in_stack_ffffffffffffff00,
                             in_stack_ffffffffffffff08,in_stack_ffffffffffffff10,0);
        if (-1 < (int)uVar9) {
          uVar9 = uVar14;
        }
        if (lVar16 == 0x28) goto LAB_00558a58;
joined_r0x00558a6c:
        if ((long)uVar17 < lVar18) goto LAB_00558d64;
LAB_00558b7c:
        local_ac = local_ac + 1.0;
        if (4.0 <= local_ac) {
          local_ac = 4.0;
        }
        lVar11 = *(long *)(*(long *)(param_1 + 800) + lVar16);
        uVar14 = uVar9;
      }
      else {
        if (lVar16 == 0x28) {
          in_stack_ffffffffffffff00 = 0;
          local_c0 = 0x3f8000003f800000;
          uStack_b8 = 0x3f8000003f800000;
          uVar9 = FUN_00593fe0(fVar22,local_ac,plVar12,uVar13,uVar1,uVar21,&local_c0,0,0,0,0);
          if (-1 < (int)uVar9) {
            uVar9 = uVar14;
          }
LAB_00558a58:
          fVar20 = fVar20 * *(float *)(param_1 + 0x1e4) * *(float *)(param_1 + 0x3fc);
          goto joined_r0x00558a6c;
        }
        fVar19 = SQRT(fVar22);
        if (NAN(fVar19)) {
          fVar19 = sqrtf(fVar22);
          if (lVar16 == 0x60) goto LAB_00558a8c;
LAB_00558abc:
          local_c0 = 0x3f8000003f800000;
          uStack_b8 = 0x3f8000003f800000;
          FUN_00593fe0(fVar19,0x3f800000,plVar12,uVar13,uVar1,uVar21,&local_c0,0,0,0,0);
          fVar19 = 1.0;
          uVar13 = uVar1;
        }
        else {
          if (lVar16 != 0x60) goto LAB_00558abc;
LAB_00558a8c:
        }
        uStack_b8 = 0x3f8000003f800000;
        local_c0 = 0x3f8000003f800000;
        FUN_00593fe0(fVar19,0x3f800000,plVar12,uVar13,uVar15,uVar21,&local_c0,0,0,0,0);
        fVar19 = SQRT(fVar22);
        if (NAN(fVar19)) {
          fVar19 = sqrtf(fVar22);
        }
        in_stack_ffffffffffffff00 = 0;
        local_c0 = 0x3f8000003f800000;
        uStack_b8 = 0x3f8000003f800000;
        uVar9 = FUN_00593fe0(fVar19,0x40000000,plVar12,uVar15,uVar1,uVar21,&local_c0,0,0,0,0);
        if (-1 < (int)uVar9) {
          uVar9 = uVar14;
        }
        if (lVar18 <= (long)uVar17) goto LAB_00558b7c;
LAB_00558d64:
        lVar11 = *(long *)(*(long *)(param_1 + 800) + lVar16);
        uVar14 = uVar9;
      }
      if (lVar11 != 0) {
        in_stack_ffffffffffffff08 = &local_d0;
        in_stack_ffffffffffffff10 = 0;
        in_stack_ffffffffffffff00 = 0;
        local_c0 = 0x3f8000003f800000;
        uStack_b8 = 0x3f8000003f800000;
        local_d0 = 0;
        uStack_c8 = 0;
        FUN_0057e050(0,0,0x3ec00000,0x3f800000,plVar12,uVar1,lVar11,0,&local_c0,0,0,0,1,
                     in_stack_ffffffffffffff08,0,0xffffffff);
      }
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 0x38;
    } while (uVar2 != uVar17);
    uVar17 = FUN_00558ed0(param_1);
    iVar10 = (int)uVar17;
  }
  if (-1 < iVar10) {
    FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
    uVar17 = (ulong)(uVar14 & (int)uVar14 >> 0x1f);
  }
  return uVar17;
}


