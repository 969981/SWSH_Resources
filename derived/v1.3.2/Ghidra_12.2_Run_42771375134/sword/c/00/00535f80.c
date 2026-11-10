/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00535f80; name: FUN_00535f80
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_00535f80(long param_1)

{
  char *pcVar1;
  long *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  undefined4 *puVar17;
  int iVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  undefined8 uVar23;
  undefined *puVar24;
  char cVar25;
  int *piVar26;
  long lVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  ulong uVar31;
  undefined8 uVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  ulong uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  float fVar48;
  undefined4 uVar49;
  float fVar50;
  undefined4 uVar51;
  long in_stack_fffffffffffffe20;
  undefined4 uVar55;
  undefined8 uVar52;
  ulong uVar53;
  float *pfVar54;
  undefined8 *in_stack_fffffffffffffe28;
  undefined8 *in_stack_fffffffffffffe30;
  ulong in_stack_fffffffffffffe38;
  ulong in_stack_fffffffffffffe40;
  undefined8 in_stack_fffffffffffffe58;
  undefined4 uVar56;
  undefined8 local_138;
  undefined4 local_12c;
  char local_128 [4];
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  puVar24 = PTR_DAT_027139b0;
  uVar56 = (undefined4)((ulong)in_stack_fffffffffffffe58 >> 0x20);
  pcVar1 = (char *)(param_1 + 0x106c);
  iVar15 = *(int *)PTR_DAT_027139b0;
  if (iVar15 < 1) {
    plVar22 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar22,0);
    *(long **)PTR_DAT_027139b8 = plVar22;
    *(undefined4 *)puVar24 = 1;
    if (plVar22 != (long *)0x0) goto LAB_00535ff0;
LAB_00536078:
    iVar15 = 0;
  }
  else {
    plVar22 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar15 + 1;
    if (iVar15 + 1 < 2) {
      if (plVar22 == (long *)0x0) goto LAB_00536078;
LAB_00535ff0:
      uVar23 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar22 + 0x20))(plVar22);
      FUN_005b9b10(uVar23,plVar22);
      iVar15 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *(int *)puVar24 = iVar15;
  uVar9 = *(uint *)(param_1 + 0x8c8);
  if ((*(char *)(param_1 + 0x596) == '\0') && (*(long *)(param_1 + 0x70) == 0)) {
    bVar4 = *(char *)(param_1 + 0x104e) != '\0';
    if (*pcVar1 == '\0') goto LAB_005360a4;
LAB_005361bc:
    iVar15 = *(int *)(param_1 + 0xc0);
joined_r0x005361c8:
    uVar7 = 0;
joined_r0x005361c8:
    if (iVar15 == 0) goto LAB_005361d4;
LAB_005361cc:
    uVar40 = (undefined4)((ulong)in_stack_fffffffffffffe20 >> 0x20);
    if (*(long *)(param_1 + 0xd0) != 0) goto LAB_005361d4;
    lVar16 = *(long *)(param_1 + 0xb8);
    if ((lVar16 == 0) ||
       ((uint)(*(int *)(*(long *)(param_1 + 0x198) + 0xbc) * 2) < *(uint *)(lVar16 + 0x54))) {
      FUN_0059e450(0x3f800000,0x1f,0,0,0,0,0,0,0);
      uVar55 = (undefined4)(in_stack_fffffffffffffe38 >> 0x20);
      FUN_005a60a0(*(undefined8 *)(param_1 + 400),1,0x7fffffff);
      lVar21 = *(long *)(param_1 + 0x1b0);
      lVar16 = 0;
      if (*(int *)(lVar21 + 0x90) < *(int *)(lVar21 + 0x30)) {
        lVar16 = *(long *)(*(long *)(lVar21 + 0x38) + (long)*(int *)(lVar21 + 0x90) * 8);
      }
      lVar21 = *(long *)(param_1 + 0xb8);
      if (lVar21 == 0) {
        iVar15 = *(int *)(param_1 + 0x5d8);
        lVar21 = *(long *)(param_1 + 400);
        if (iVar15 == -1) {
          iVar15 = *(int *)(lVar21 + 0x90);
        }
        if (iVar15 < *(int *)(lVar21 + 0x30)) {
          lVar21 = *(long *)(*(long *)(lVar21 + 0x38) + (long)iVar15 * 8);
        }
        else {
          lVar21 = 0;
        }
        if (*(long *)(param_1 + 0x70) != 0) {
          lVar21 = *(long *)(param_1 + 0x70);
        }
      }
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0x3f8000003f800000;
      local_e0 = 0x3f8000003f800000;
      in_stack_fffffffffffffe28 = &local_f8;
      in_stack_fffffffffffffe38 = CONCAT44(uVar55,0xffffffff);
      in_stack_fffffffffffffe20 = CONCAT44(uVar40,1);
      in_stack_fffffffffffffe30 = (undefined8 *)0x0;
      FUN_0057e050(0,0,0,0x3f800000,plVar22,lVar21,lVar16,0,&local_e8,0,0,0,
                   in_stack_fffffffffffffe20,in_stack_fffffffffffffe28,0,in_stack_fffffffffffffe38);
    }
    *(long *)(param_1 + 0xd0) = lVar16;
    cVar25 = *(char *)(param_1 + 0x10d9);
  }
  else {
    bVar4 = true;
    if (*pcVar1 != '\0') goto LAB_005361bc;
LAB_005360a4:
    if (!bVar4) goto LAB_005361bc;
    iVar15 = *(int *)(param_1 + 0x5d8);
    lVar16 = *(long *)(param_1 + 400);
    if (iVar15 == -1) {
      iVar15 = *(int *)(lVar16 + 0x90);
      iVar8 = *(int *)(lVar16 + 0x30);
      if (iVar8 <= iVar15) goto LAB_005360e0;
LAB_005360c4:
      lVar21 = *(long *)(*(long *)(lVar16 + 0x38) + (long)iVar15 * 8);
    }
    else {
      iVar8 = *(int *)(lVar16 + 0x30);
      if (iVar15 < iVar8) goto LAB_005360c4;
LAB_005360e0:
      lVar21 = 0;
    }
    lVar19 = *(long *)(param_1 + 0x70);
    if (lVar19 != 0) {
      lVar21 = lVar19;
    }
    iVar15 = *(int *)(param_1 + 0x5e0);
    if (iVar15 != -1) {
      if (iVar15 < iVar8) goto LAB_00536104;
LAB_0053616c:
      lVar16 = 0;
      if (lVar19 == 0) goto LAB_00536174;
LAB_00536110:
      uVar7 = 0;
      if (*(int *)(param_1 + 0xc0) != 0) goto LAB_00536120;
LAB_005365ac:
      bVar4 = false;
      if (uVar7 != 0) goto LAB_00536130;
LAB_005365b4:
      piVar26 = (int *)(param_1 + 0xc0);
      fVar34 = 1.0;
      FUN_0059e450(0x3f800000,0x1f,0,0,0,0,0,0,0);
      bVar5 = true;
      FUN_005a60a0(*(undefined8 *)(param_1 + 400),1,0x7fffffff);
      uVar55 = *(undefined4 *)(param_1 + 0x680);
      FUN_005706c0(*(undefined4 *)(param_1 + 0x8cc),*(undefined4 *)(param_1 + 0x8d0),plVar22);
      uVar40 = 0x15;
      if (*(int *)(param_1 + 0x78) != 1) {
        uVar40 = uVar55;
      }
      if (*(char *)(param_1 + 0x10d9) != '\0') {
        bVar5 = *(char *)(param_1 + 0x1053) != '\0';
      }
      if ((*(char *)(param_1 + 0x1051) == '\0') && (*(long *)(param_1 + 0x50) == 0)) {
        if (*(char *)(param_1 + 0x59a) == '\0') {
          fVar34 = *(float *)(param_1 + 0x7f8) / *(float *)(param_1 + 0x7f8);
          bVar6 = false;
        }
        else {
          fVar34 = (*(float *)(param_1 + 0x8c0) * *(float *)(param_1 + 0x7fc)) /
                   *(float *)(param_1 + 0x7f8);
          bVar6 = false;
        }
      }
      else {
        bVar6 = true;
      }
      bVar3 = false;
      if (bVar5) {
        if (*(long *)(param_1 + 0x70) == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = (bool)(fVar34 == 1.0 & (bVar4 ^ 1U));
        }
      }
      uVar23 = FUN_0052bc90(param_1,lVar21);
      uVar43 = (undefined4)(in_stack_fffffffffffffe38 >> 0x20);
      uVar55 = (undefined4)((ulong)in_stack_fffffffffffffe20 >> 0x20);
      if (!bVar6) {
        if (bVar4) {
          lVar21 = *(long *)(param_1 + 0x1b0);
          if (*(int *)(lVar21 + 0x90) < *(int *)(lVar21 + 0x30)) {
            uVar13 = *(undefined8 *)(*(long *)(lVar21 + 0x38) + (long)*(int *)(lVar21 + 0x90) * 8);
          }
          else {
            uVar13 = 0;
          }
          local_f8 = 0;
          local_f0 = 0;
          local_e8 = 0x3f8000003f800000;
          local_e0 = 0x3f8000003f800000;
          in_stack_fffffffffffffe28 = &local_f8;
          in_stack_fffffffffffffe38 = CONCAT44(uVar43,0xffffffff);
          in_stack_fffffffffffffe20 = CONCAT44(uVar55,1);
          in_stack_fffffffffffffe30 = (undefined8 *)0x0;
          FUN_0057e050(0,0,0,0x3f800000,plVar22,uVar23,uVar13,0,&local_e8,0,0,0,
                       in_stack_fffffffffffffe20,in_stack_fffffffffffffe28,0,
                       in_stack_fffffffffffffe38);
          lVar21 = *(long *)(param_1 + 0x1b0);
          uVar13 = 0;
          if (*(int *)(lVar21 + 0x90) < *(int *)(lVar21 + 0x30)) {
            uVar13 = *(undefined8 *)(*(long *)(lVar21 + 0x38) + (long)*(int *)(lVar21 + 0x90) * 8);
          }
          *(undefined8 *)(param_1 + 0xd0) = uVar13;
        }
        local_e8 = CONCAT44(fVar34,fVar34);
        local_e0 = CONCAT44(0x3f800000,fVar34);
        if (bVar3) goto LAB_00536874;
        local_f8 = 0;
        local_f0 = 0;
        in_stack_fffffffffffffe28 = &local_f8;
        in_stack_fffffffffffffe38 = CONCAT44((int)(in_stack_fffffffffffffe38 >> 0x20),0xffffffff);
        in_stack_fffffffffffffe30 = (undefined8 *)0x0;
        in_stack_fffffffffffffe20 = CONCAT44((int)((ulong)in_stack_fffffffffffffe20 >> 0x20),1);
        uVar7 = FUN_0057e050(0,0,0,0x3f800000,plVar22,uVar23,lVar16,uVar40,&local_e8,0,1,0,
                             in_stack_fffffffffffffe20,in_stack_fffffffffffffe28,0,
                             in_stack_fffffffffffffe38);
        iVar15 = *piVar26;
        goto joined_r0x005368f4;
      }
      if (bVar4) {
        lVar21 = *(long *)(param_1 + 0x1b0);
        if (*(int *)(lVar21 + 0x90) < *(int *)(lVar21 + 0x30)) {
          uVar13 = *(undefined8 *)(*(long *)(lVar21 + 0x38) + (long)*(int *)(lVar21 + 0x90) * 8);
        }
        else {
          uVar13 = 0;
        }
        local_f8 = 0;
        local_f0 = 0;
        local_e8 = 0x3f8000003f800000;
        local_e0 = 0x3f8000003f800000;
        in_stack_fffffffffffffe28 = &local_f8;
        in_stack_fffffffffffffe38 = CONCAT44(uVar43,0xffffffff);
        in_stack_fffffffffffffe20 = CONCAT44(uVar55,1);
        in_stack_fffffffffffffe30 = (undefined8 *)0x0;
        FUN_0057e050(0,0,0,0x3f800000,plVar22,uVar23,uVar13,0,&local_e8,0,0,0,
                     in_stack_fffffffffffffe20,in_stack_fffffffffffffe28,0,in_stack_fffffffffffffe38
                    );
        lVar21 = *(long *)(param_1 + 0x1b0);
        uVar13 = 0;
        if (*(int *)(lVar21 + 0x90) < *(int *)(lVar21 + 0x30)) {
          uVar13 = *(undefined8 *)(*(long *)(lVar21 + 0x38) + (long)*(int *)(lVar21 + 0x90) * 8);
        }
        *(undefined8 *)(param_1 + 0xd0) = uVar13;
      }
      if (*(char *)(param_1 + 0x10d7) == '\0') {
        uVar51 = 0;
        uVar55 = 0;
        uVar13 = 0;
        uVar49 = 0;
        uVar43 = 2;
      }
      else {
        uVar49 = *(undefined4 *)(param_1 + 0x98);
        uVar13 = *(undefined8 *)(param_1 + 0x80);
        uVar51 = *(undefined4 *)(param_1 + 0x94);
        uVar55 = *(undefined4 *)(param_1 + 0x8c);
        uVar43 = *(undefined4 *)(param_1 + 0x90);
      }
      if (bVar3) {
LAB_00536874:
        FUN_005714c0(plVar22,0,3,0xffffffff);
        *(undefined8 *)(lVar16 + 0x120) = uVar23;
        iVar15 = *piVar26;
        goto joined_r0x005361c8;
      }
      in_stack_fffffffffffffe28 =
           (undefined8 *)CONCAT44((int)((ulong)in_stack_fffffffffffffe28 >> 0x20),uVar51);
      in_stack_fffffffffffffe20 = CONCAT44((int)((ulong)in_stack_fffffffffffffe20 >> 0x20),uVar43);
      uVar7 = FUN_0052cd40(uVar49,param_1,uVar40,1,uVar23,0,0,uVar13,uVar55,
                           in_stack_fffffffffffffe20,in_stack_fffffffffffffe28);
      iVar15 = *piVar26;
      goto joined_r0x005361c8;
    }
    iVar15 = *(int *)(lVar16 + 0x90);
    if (iVar8 <= iVar15) goto LAB_0053616c;
LAB_00536104:
    lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + (long)iVar15 * 8);
    if (lVar19 != 0) goto LAB_00536110;
LAB_00536174:
    if (*(long **)(lVar16 + 0x108) == *(long **)(lVar16 + 0x110)) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = 0xffffffff;
      plVar2 = *(long **)(lVar16 + 0x108);
      do {
        plVar20 = plVar2 + 1;
        lVar19 = *plVar2;
        uVar7 = uVar7 + 1;
        plVar2 = plVar20;
      } while (lVar19 != lVar21 && *(long **)(lVar16 + 0x110) != plVar20);
    }
    uVar7 = uVar7 >> 0x1f ^ 1;
    if (*(int *)(param_1 + 0xc0) == 0) goto LAB_005365ac;
LAB_00536120:
    bVar4 = *(long *)(param_1 + 0xb8) == 0;
    if (uVar7 == 0) goto LAB_005365b4;
LAB_00536130:
    if ((*(char *)(param_1 + 0x1051) != '\0') ||
       (!(bool)(*(long *)(param_1 + 0x50) == 0 & (bVar4 ^ 1U)))) goto LAB_005365b4;
    uVar7 = 0;
    iVar15 = *(int *)(param_1 + 0xc0);
joined_r0x005368f4:
    if (iVar15 != 0) goto LAB_005361cc;
LAB_005361d4:
    cVar25 = *(char *)(param_1 + 0x10d9);
  }
  if (cVar25 != '\0') {
    FUN_0052cc50(param_1,*(undefined1 *)(param_1 + 0x10d7));
    FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
    FUN_005a60a0(*(undefined8 *)(param_1 + 400),1,0x7fffffff);
    uVar7 = 0;
  }
  uVar31 = FUN_00528190(param_1);
  if (*(long *)(param_1 + 0x1a0) != 0) {
    *(int *)(*(long *)(param_1 + 0x1a0) + 0x1bc) = (int)uVar31;
  }
  if (*(char *)(param_1 + 0x106d) != '\0') {
    iVar15 = *(int *)(param_1 + 0x5ec);
    lVar16 = *(long *)(param_1 + 400);
    if (iVar15 == -1) {
      iVar15 = *(int *)(lVar16 + 0x90);
      iVar8 = *(int *)(lVar16 + 0x30);
      if (iVar8 <= iVar15) goto LAB_0053634c;
LAB_0053626c:
      uVar23 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + (long)iVar15 * 8);
      iVar15 = *(int *)(param_1 + 0x5f0);
      if (iVar15 != -1) goto LAB_00536280;
LAB_0053635c:
      iVar15 = *(int *)(lVar16 + 0x90);
      if (iVar8 <= iVar15) goto LAB_00536368;
LAB_00536288:
      uVar13 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + (long)iVar15 * 8);
    }
    else {
      iVar8 = *(int *)(lVar16 + 0x30);
      if (iVar15 < iVar8) goto LAB_0053626c;
LAB_0053634c:
      uVar23 = 0;
      iVar15 = *(int *)(param_1 + 0x5f0);
      if (iVar15 == -1) goto LAB_0053635c;
LAB_00536280:
      if (iVar15 < iVar8) goto LAB_00536288;
LAB_00536368:
      uVar13 = 0;
    }
    if (*(char *)(param_1 + 0x59a) == '\0') {
      fVar34 = *(float *)(param_1 + 0x7f8);
    }
    else {
      fVar34 = *(float *)(param_1 + 0x8c0) * *(float *)(param_1 + 0x7fc);
    }
    fStack_10c = 1.0 / (*(float *)(param_1 + 0x8c0) / fVar34);
    local_e8 = CONCAT44(fStack_10c * *(float *)(param_1 + 0xca8),
                        *(float *)(param_1 + 0xca4) * fStack_10c);
    local_e0 = CONCAT44(fStack_10c * *(float *)(param_1 + 0xcb0),
                        fStack_10c * *(float *)(param_1 + 0xcac));
    local_f8 = CONCAT44(fStack_10c * *(float *)(param_1 + 0xcb8),
                        fStack_10c * *(float *)(param_1 + 0xcb4));
    local_f0 = CONCAT44(fStack_10c * *(float *)(param_1 + 0xcc0),
                        fStack_10c * *(float *)(param_1 + 0xcbc));
    local_108 = fStack_10c * *(float *)(param_1 + 0xcc4);
    fStack_104 = fStack_10c * *(float *)(param_1 + 0xcc8);
    local_100 = fStack_10c * *(float *)(param_1 + 0xccc);
    fStack_fc = fStack_10c * *(float *)(param_1 + 0xcd0);
    local_118 = fStack_10c * *(float *)(param_1 + 0xcd4);
    fStack_114 = fStack_10c * *(float *)(param_1 + 0xcd8);
    local_110 = fStack_10c * *(float *)(param_1 + 0xcdc);
    fStack_10c = fStack_10c * *(float *)(param_1 + 0xce0);
    uVar7 = FUN_005753d0(*(undefined4 *)(param_1 + 0xc9c),*(undefined4 *)(param_1 + 0xca0),plVar22,
                         uVar23,uVar13,&local_e8,&local_f8,&local_108,&local_118,0);
  }
  if (*(char *)(param_1 + 0x10dc) != '\0') {
    FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
    FUN_005a60a0(*(undefined8 *)(param_1 + 400),1,0x7fffffff);
    uVar7 = FUN_0052c3b0(param_1);
  }
  if (*(char *)(param_1 + 0x10de) != '\0') {
    iVar15 = *(int *)(param_1 + 0x5f4);
    lVar16 = *(long *)(param_1 + 400);
    if (iVar15 == -1) {
      iVar15 = *(int *)(lVar16 + 0x90);
      if (*(int *)(lVar16 + 0x30) <= iVar15) goto LAB_005364f0;
LAB_005364d4:
      uVar23 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + (long)iVar15 * 8);
    }
    else {
      if (iVar15 < *(int *)(lVar16 + 0x30)) goto LAB_005364d4;
LAB_005364f0:
      uVar23 = 0;
    }
    FUN_00532160(param_1,uVar23,0,0,0);
    uVar7 = 0;
  }
  if (*(char *)(param_1 + 0x10df) != '\0') {
    FUN_0052bec0(param_1);
    FUN_00532620(param_1);
    uVar7 = 0;
  }
  if (*(char *)(param_1 + 0x67c) != '\0') {
    if (*(char *)(param_1 + 0x104f) != '\0') {
      uVar7 = FUN_0052f120(param_1);
    }
    if (*(char *)(param_1 + 0x8b6) != '\0') goto LAB_00536b28;
    if ((*(char *)(param_1 + 0x10d7) == '\0') || (*(char *)(param_1 + 0x10d8) == '\0'))
    goto LAB_00536950;
    iVar15 = *(int *)(param_1 + 0x60c);
    lVar16 = *(long *)(param_1 + 400);
    if (iVar15 == -1) {
      iVar15 = *(int *)(lVar16 + 0x90);
      if (*(int *)(lVar16 + 0x30) <= iVar15) goto LAB_0053690c;
LAB_00536588:
      uVar23 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + (long)iVar15 * 8);
    }
    else {
      if (iVar15 < *(int *)(lVar16 + 0x30)) goto LAB_00536588;
LAB_0053690c:
      uVar23 = 0;
    }
    in_stack_fffffffffffffe28 =
         (undefined8 *)((ulong)in_stack_fffffffffffffe28 & 0xffffffff00000000);
    in_stack_fffffffffffffe20 = CONCAT44((int)((ulong)in_stack_fffffffffffffe20 >> 0x20),2);
    uVar7 = FUN_0052cd40(0,param_1,0xffffffff,0,0,uVar23,
                         *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x14efa),0,0,
                         in_stack_fffffffffffffe20,in_stack_fffffffffffffe28);
  }
LAB_00536950:
  if (*(char *)(param_1 + 0x1080) != '\0') {
    FUN_00533500(param_1);
    uVar7 = 0;
  }
  if (*(char *)(param_1 + 0x1090) == '\0') {
LAB_00536b80:
    cVar25 = *(char *)(param_1 + 0x67c);
  }
  else {
    FUN_00528d70(0x3f800000,0,param_1,&local_e8,2,0);
    uVar10 = local_e8;
    iVar15 = *(int *)(param_1 + 0x628);
    lVar16 = *(long *)(param_1 + 400);
    if (iVar15 == -1) {
      iVar15 = *(int *)(lVar16 + 0x90);
      iVar8 = *(int *)(lVar16 + 0x30);
      if (iVar8 <= iVar15) goto LAB_005369e8;
LAB_005369a8:
      local_138 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + (long)iVar15 * 8);
      iVar15 = *(int *)(param_1 + 0x62c);
      if (iVar15 != -1) goto LAB_005369c0;
LAB_005369f8:
      iVar15 = *(int *)(lVar16 + 0x90);
      if (iVar8 <= iVar15) goto LAB_00536a08;
LAB_005369cc:
      uVar23 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + (long)iVar15 * 8);
    }
    else {
      iVar8 = *(int *)(lVar16 + 0x30);
      if (iVar15 < iVar8) goto LAB_005369a8;
LAB_005369e8:
      local_138 = 0;
      iVar15 = *(int *)(param_1 + 0x62c);
      if (iVar15 == -1) goto LAB_005369f8;
LAB_005369c0:
      if (iVar15 < iVar8) goto LAB_005369cc;
LAB_00536a08:
      uVar23 = 0;
    }
    fVar36 = *(float *)(param_1 + 0x6c4);
    fVar37 = fVar36 * *(float *)(param_1 + 0x6d0) * *(float *)(param_1 + 0x420);
    fVar34 = fVar36 * *(float *)(param_1 + 0x6d0);
    fVar38 = *(float *)(param_1 + 0x6d4) * fVar37;
    fVar35 = fVar34 * *(float *)(param_1 + 0x6d8);
    cVar25 = *(char *)(param_1 + 0x1091);
    uVar56 = *(undefined4 *)(param_1 + 0xd84);
    uVar13 = *(undefined8 *)(param_1 + 0xd88);
    in_stack_fffffffffffffe20 = param_1 + 0x734;
    FUN_0050f980(fVar38 - fVar37,fVar37 + fVar38,fVar35 - fVar34,fVar34 + fVar35,fVar36,
                 *(undefined4 *)(param_1 + 0x6c8),&local_e8,0,1);
    local_f8 = uVar10;
    in_stack_fffffffffffffe40 = param_1 + 0xdd0;
    lVar16 = param_1 + 0xdb4;
    in_stack_fffffffffffffe30 = &local_f8;
    in_stack_fffffffffffffe38 =
         CONCAT71((int7)(in_stack_fffffffffffffe38 >> 8),*(undefined1 *)(param_1 + 0xd90));
    in_stack_fffffffffffffe28 = &local_e8;
    uVar7 = FUN_00588910(*(undefined4 *)(param_1 + 0xde4),*(undefined4 *)(param_1 + 0xde0),
                         *(undefined4 *)(param_1 + 0xd94),*(undefined4 *)(param_1 + 0xd98),
                         *(undefined4 *)(param_1 + 0xdc4),*(undefined4 *)(param_1 + 0xdc8),plVar22,
                         cVar25 == '\0',uVar56,uVar13,local_138,uVar23,0,0,in_stack_fffffffffffffe20
                         ,in_stack_fffffffffffffe28,in_stack_fffffffffffffe30,
                         in_stack_fffffffffffffe38,in_stack_fffffffffffffe40,(int)(param_1 + 0xd9c),
                         (int)(param_1 + 0xdac),lVar16,*(undefined4 *)(param_1 + 0xdc0),
                         *(undefined1 *)(param_1 + 0xdcc));
    uVar56 = (undefined4)((ulong)lVar16 >> 0x20);
    if ((int)uVar7 < 0) {
      if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x7ccf)
        ;
        uVar23 = FUN_00546ea0(uVar7);
        FUN_00517ae0("CPostEffect::EndPostEffectScene_InternalProcess(): pTexUtil->HeatShimmerParticles() failed (0x%x: %s).\n"
                     ,uVar7,uVar23);
      }
      goto LAB_00536b80;
    }
    cVar25 = *(char *)(param_1 + 0x67c);
  }
  if (cVar25 == '\0') {
    if (*(char *)(param_1 + 0x104f) != '\0') {
      uVar7 = FUN_0052f120(param_1);
    }
    if (*(char *)(param_1 + 0x8b6) != '\0') {
LAB_00536b28:
      return uVar7 & (int)uVar7 >> 0x1f;
    }
  }
  if (*(char *)(param_1 + 0x5a2) != '\0') {
    FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
    FUN_005a60a0(*(undefined8 *)(param_1 + 400),1,0x7fffffff);
    iVar15 = *(int *)(param_1 + 0x610);
    lVar16 = *(long *)(param_1 + 400);
    if (iVar15 == -1) {
      iVar15 = *(int *)(lVar16 + 0x90);
      iVar8 = *(int *)(lVar16 + 0x30);
      if (iVar8 <= iVar15) goto LAB_00536c1c;
LAB_00536be4:
      uVar23 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + (long)iVar15 * 8);
      iVar15 = *(int *)(param_1 + 0x614);
      if (iVar15 != -1) goto LAB_00536bf8;
LAB_00536c2c:
      iVar15 = *(int *)(lVar16 + 0x90);
      if (iVar8 <= iVar15) goto LAB_00536c38;
LAB_00536c00:
      uVar13 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + (long)iVar15 * 8);
    }
    else {
      iVar8 = *(int *)(lVar16 + 0x30);
      if (iVar15 < iVar8) goto LAB_00536be4;
LAB_00536c1c:
      uVar23 = 0;
      iVar15 = *(int *)(param_1 + 0x614);
      if (iVar15 == -1) goto LAB_00536c2c;
LAB_00536bf8:
      if (iVar15 < iVar8) goto LAB_00536c00;
LAB_00536c38:
      uVar13 = 0;
    }
    FUN_005afb90(*(undefined8 *)(param_1 + 0x1a0),&local_f8,&local_108);
    uVar32 = FUN_00578930(*(undefined4 *)(*(long *)(param_1 + 0x198) + 0x124),
                          *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x128),1);
    local_e8 = 0x3f8000003f800000;
    local_e0 = 0x3f8000003f800000;
    FUN_00581e60(0,local_f8 & 0xffffffff,local_108,*(undefined4 *)(param_1 + 0x6cc),uVar32,plVar22,
                 uVar23,uVar13,&local_e8,0,0);
  }
  if ((*(char *)(param_1 + 0x1075) != '\0') && (*(char *)(param_1 + 0x1080) == '\0')) {
    FUN_00533500(param_1);
  }
  FUN_00533320(param_1);
  uVar40 = (undefined4)((ulong)in_stack_fffffffffffffe20 >> 0x20);
  if (*(char *)(param_1 + 0x1074) != '\0') {
    iVar15 = *(int *)(param_1 + 0x63c);
    lVar16 = *(long *)(param_1 + 400);
    if (iVar15 == -1) {
      iVar15 = *(int *)(lVar16 + 0x90);
      iVar8 = *(int *)(lVar16 + 0x30);
      if (iVar8 <= iVar15) goto LAB_00536d38;
LAB_00536ce4:
      uVar23 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + (long)iVar15 * 8);
      iVar15 = *(int *)(param_1 + 0x640);
      if (iVar15 != -1) goto LAB_00536cf8;
LAB_00536d48:
      iVar15 = *(int *)(lVar16 + 0x90);
      if (iVar8 <= iVar15) goto LAB_00536d54;
LAB_00536d00:
      uVar13 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + (long)iVar15 * 8);
      iVar15 = *(int *)(param_1 + 0x644);
      if (iVar15 != -1) goto LAB_00536d14;
LAB_00536d64:
      iVar15 = *(int *)(lVar16 + 0x90);
      if (iVar8 <= iVar15) goto LAB_00536d70;
LAB_00536d1c:
      uVar32 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + (long)iVar15 * 8);
    }
    else {
      iVar8 = *(int *)(lVar16 + 0x30);
      if (iVar15 < iVar8) goto LAB_00536ce4;
LAB_00536d38:
      uVar23 = 0;
      iVar15 = *(int *)(param_1 + 0x640);
      if (iVar15 == -1) goto LAB_00536d48;
LAB_00536cf8:
      if (iVar15 < iVar8) goto LAB_00536d00;
LAB_00536d54:
      uVar13 = 0;
      iVar15 = *(int *)(param_1 + 0x644);
      if (iVar15 == -1) goto LAB_00536d64;
LAB_00536d14:
      if (iVar15 < iVar8) goto LAB_00536d1c;
LAB_00536d70:
      uVar32 = 0;
    }
    uVar52 = CONCAT71((int7)((ulong)in_stack_fffffffffffffe20 >> 8),*(undefined1 *)(param_1 + 0xc91)
                     );
    FUN_00532d50(0xbf800000,param_1,uVar23,uVar13,0,uVar32,param_1 + 0xc7c,0xffffffff,
                 *(undefined1 *)(param_1 + 0xc90),uVar52);
    uVar40 = (undefined4)((ulong)uVar52 >> 0x20);
  }
  if (*(char *)(param_1 + 0xf39) == '\0') {
LAB_00536fe4:
    uVar55 = (undefined4)(in_stack_fffffffffffffe40 >> 0x20);
    cVar25 = *(char *)(param_1 + 0xc2d);
  }
  else {
    FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
    FUN_005a60a0(*(undefined8 *)(param_1 + 400),1,0x7fffffff);
    iVar15 = *(int *)(param_1 + 0x660);
    lVar16 = *(long *)(param_1 + 400);
    if (iVar15 == -1) {
      iVar15 = *(int *)(lVar16 + 0x90);
      iVar8 = *(int *)(lVar16 + 0x30);
      if (iVar8 <= iVar15) goto LAB_00536e50;
LAB_00536df8:
      uVar23 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + (long)iVar15 * 8);
      iVar15 = *(int *)(param_1 + 0x664);
      if (iVar15 != -1) goto LAB_00536e0c;
LAB_00536e60:
      iVar15 = *(int *)(lVar16 + 0x90);
      if (iVar8 <= iVar15) goto LAB_00536e6c;
LAB_00536e14:
      uVar13 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + (long)iVar15 * 8);
      fVar34 = *(float *)(param_1 + 0x8c0);
      if (*(char *)(param_1 + 0x59a) != '\0') goto LAB_00536e28;
LAB_00536e7c:
      fVar35 = *(float *)(param_1 + 0x7f8);
      local_e8 = 0;
      if (*(char *)(param_1 + 0xf38) != '\0') goto LAB_00536e8c;
LAB_00536fac:
      puVar14 = (undefined8 *)0x0;
      fVar34 = fVar34 / fVar35;
      iVar15 = *(int *)(param_1 + 0xf44);
    }
    else {
      iVar8 = *(int *)(lVar16 + 0x30);
      if (iVar15 < iVar8) goto LAB_00536df8;
LAB_00536e50:
      uVar23 = 0;
      iVar15 = *(int *)(param_1 + 0x664);
      if (iVar15 == -1) goto LAB_00536e60;
LAB_00536e0c:
      if (iVar15 < iVar8) goto LAB_00536e14;
LAB_00536e6c:
      uVar13 = 0;
      fVar34 = *(float *)(param_1 + 0x8c0);
      if (*(char *)(param_1 + 0x59a) == '\0') goto LAB_00536e7c;
LAB_00536e28:
      fVar35 = fVar34 * *(float *)(param_1 + 0x7fc);
      local_e8 = 0;
      if (*(char *)(param_1 + 0xf38) == '\0') goto LAB_00536fac;
LAB_00536e8c:
      local_e8 = 0;
      uVar10 = FUN_00562390(*(undefined4 *)(param_1 + 0x6c4),*(undefined4 *)(param_1 + 0x6c8),
                            *(undefined4 *)(param_1 + 0xf3c),*(undefined4 *)(param_1 + 0xf40));
      if ((uVar10 & 1) == 0) goto LAB_00536fac;
      fVar37 = *(float *)(param_1 + 0x6c8);
      fVar38 = *(float *)(param_1 + 0x6c4);
      fVar39 = fVar37 - fVar38;
      fVar48 = (fVar39 * *(float *)(param_1 + 0x1064)) / (fVar37 * fVar38);
      fVar50 = 1.0 / fVar48;
      puVar14 = &local_e8;
      fVar36 = ((fVar37 * (*(float *)(param_1 + 0xf40) - fVar38)) / fVar39) /
               *(float *)(param_1 + 0xf40);
      fVar37 = 1.0 / (((fVar37 * (*(float *)(param_1 + 0xf3c) - fVar38)) / fVar39) /
                      *(float *)(param_1 + 0xf3c) - fVar36);
      local_e8 = CONCAT44(((*(float *)(param_1 + 0x105c) * 0.0 + *(float *)(param_1 + 0x1060)) *
                           fVar50 - (1.0 - *(float *)(param_1 + 0x1064) / fVar38) / fVar48) * fVar37
                          + (0.0 - fVar36 * fVar37),*(float *)(param_1 + 0x105c) * fVar50 * fVar37);
      fVar34 = fVar34 / fVar35;
      iVar15 = *(int *)(param_1 + 0xf44);
    }
    if (iVar15 != 2) {
      if (iVar15 == 1) {
        FUN_0058ee60(fVar34,0x3e800000,plVar22,uVar13,uVar23,puVar14,0);
      }
      goto LAB_00536fe4;
    }
    in_stack_fffffffffffffe30 = (undefined8 *)(param_1 + 0x1054);
    in_stack_fffffffffffffe38 = in_stack_fffffffffffffe38 & 0xffffffffffffff00;
    in_stack_fffffffffffffe28 =
         (undefined8 *)
         CONCAT71((int7)((ulong)in_stack_fffffffffffffe28 >> 8),*(undefined1 *)(param_1 + 0xf58));
    uVar32 = CONCAT44(uVar40,*(undefined4 *)(param_1 + 0xf54));
    FUN_0058f2e0(fVar34,*(undefined4 *)(param_1 + 0xf48),*(undefined4 *)(param_1 + 0xf5c),
                 *(undefined4 *)(param_1 + 0xf60),*(undefined4 *)(param_1 + 0xf64),
                 *(undefined4 *)(param_1 + 0x1064),plVar22,uVar13,uVar23,
                 *(undefined8 *)(param_1 + 0x228),*(undefined8 *)(param_1 + 0x230),puVar14,
                 *(undefined4 *)(param_1 + 0xf4c),*(undefined4 *)(param_1 + 0xf50),uVar32,
                 in_stack_fffffffffffffe28,in_stack_fffffffffffffe30,in_stack_fffffffffffffe38);
    uVar55 = (undefined4)(in_stack_fffffffffffffe40 >> 0x20);
    uVar40 = (undefined4)((ulong)uVar32 >> 0x20);
    cVar25 = *(char *)(param_1 + 0xc2d);
  }
  uVar43 = (undefined4)((ulong)in_stack_fffffffffffffe28 >> 0x20);
  if (cVar25 != '\0') {
    FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
    FUN_005a60a0(*(undefined8 *)(param_1 + 400),1,0x7fffffff);
    iVar15 = *(int *)(param_1 + 0x650);
    lVar16 = *(long *)(param_1 + 400);
    if (iVar15 == -1) {
      iVar15 = *(int *)(lVar16 + 0x90);
      iVar8 = *(int *)(lVar16 + 0x30);
      if (iVar8 <= iVar15) goto LAB_00537078;
LAB_00537040:
      uVar23 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + (long)iVar15 * 8);
      iVar15 = *(int *)(param_1 + 0x654);
      if (iVar15 != -1) goto LAB_00537054;
LAB_00537088:
      iVar15 = *(int *)(lVar16 + 0x90);
      if (iVar8 <= iVar15) goto LAB_00537094;
LAB_0053705c:
      uVar13 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + (long)iVar15 * 8);
    }
    else {
      iVar8 = *(int *)(lVar16 + 0x30);
      if (iVar15 < iVar8) goto LAB_00537040;
LAB_00537078:
      uVar23 = 0;
      iVar15 = *(int *)(param_1 + 0x654);
      if (iVar15 == -1) goto LAB_00537088;
LAB_00537054:
      if (iVar15 < iVar8) goto LAB_0053705c;
LAB_00537094:
      uVar13 = 0;
    }
    lVar16 = param_1 + 0xc50;
    in_stack_fffffffffffffe30 = (undefined8 *)plVar22[0x5357];
    in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffff00000000;
    in_stack_fffffffffffffe38 = in_stack_fffffffffffffe38 & 0xffffffff00000000;
    uVar32 = CONCAT71((int7)((ulong)in_stack_fffffffffffffe28 >> 8),*(undefined1 *)(param_1 + 0xc6c)
                     );
    FUN_005820c0(*(undefined4 *)(param_1 + 0x6cc),*(undefined4 *)(param_1 + 0x420),
                 *(undefined4 *)(param_1 + 0xc60),*(undefined4 *)(param_1 + 0xc64),
                 *(undefined4 *)(param_1 + 0xc68),plVar22,uVar23,uVar13,
                 *(undefined4 *)(param_1 + 0xc30),param_1 + 0xc38,param_1 + 0xc40,param_1 + 0xc48,
                 param_1 + 0xc58,lVar16,uVar32,in_stack_fffffffffffffe30,in_stack_fffffffffffffe38,
                 in_stack_fffffffffffffe40);
    uVar43 = (undefined4)((ulong)uVar32 >> 0x20);
    uVar55 = (undefined4)(in_stack_fffffffffffffe40 >> 0x20);
    uVar40 = (undefined4)((ulong)lVar16 >> 0x20);
  }
  uVar51 = (undefined4)(in_stack_fffffffffffffe38 >> 0x20);
  if (*(char *)(param_1 + 0xc35) != '\0') {
    FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
    FUN_005a60a0(*(undefined8 *)(param_1 + 400),1,0x7fffffff);
    iVar15 = *(int *)(param_1 + 0x658);
    lVar16 = *(long *)(param_1 + 400);
    if (iVar15 == -1) {
      iVar15 = *(int *)(lVar16 + 0x90);
      iVar8 = *(int *)(lVar16 + 0x30);
      if (iVar8 <= iVar15) goto LAB_00537184;
LAB_0053714c:
      uVar23 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + (long)iVar15 * 8);
      iVar15 = *(int *)(param_1 + 0x65c);
      if (iVar15 != -1) goto LAB_00537160;
LAB_00537194:
      iVar15 = *(int *)(lVar16 + 0x90);
      if (iVar8 <= iVar15) goto LAB_005371a0;
LAB_00537168:
      uVar13 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + (long)iVar15 * 8);
    }
    else {
      iVar8 = *(int *)(lVar16 + 0x30);
      if (iVar15 < iVar8) goto LAB_0053714c;
LAB_00537184:
      uVar23 = 0;
      iVar15 = *(int *)(param_1 + 0x65c);
      if (iVar15 == -1) goto LAB_00537194;
LAB_00537160:
      if (iVar15 < iVar8) goto LAB_00537168;
LAB_005371a0:
      uVar13 = 0;
    }
    local_f8 = 0;
    local_f0 = 0;
    puVar14 = &local_f8;
    local_e8 = 0x3f8000003f800000;
    local_e0 = 0x3f8000003f800000;
    in_stack_fffffffffffffe38 = CONCAT44(uVar51,0xffffffff);
    in_stack_fffffffffffffe30 = (undefined8 *)0x0;
    uVar32 = CONCAT44(uVar40,1);
    FUN_0057e050(0,0,0,0x3f800000,plVar22,uVar23,uVar13,0,&local_e8,0,0,0,uVar32,puVar14,0,
                 in_stack_fffffffffffffe38);
    uVar40 = (undefined4)((ulong)uVar32 >> 0x20);
    uVar43 = (undefined4)((ulong)puVar14 >> 0x20);
  }
  fVar34 = *(float *)(param_1 + 0x420);
  fVar36 = *(float *)(param_1 + 0x424);
  fVar35 = fVar34 * fVar36;
  if (*(char *)(param_1 + 0x10d5) == '\0') {
    *(undefined1 *)(*(long *)(param_1 + 0x198) + 0x26c) = 0;
    uVar10 = CONCAT44(uVar43,0x3f800000);
    uVar53 = CONCAT44(uVar40,0x3e800000);
    FUN_00555610(DAT_01d4c058,fVar35,0x3f800000,0,0,DAT_01d4bb38,DAT_01d4bffc,DAT_01d4bec4,
                 *(undefined8 *)(param_1 + 0x198),1);
  }
  else {
    FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
    uVar51 = (undefined4)((ulong)in_stack_fffffffffffffe30 >> 0x20);
    FUN_005a60a0(*(undefined8 *)(param_1 + 400),1,0x7fffffff);
    iVar15 = *(int *)(param_1 + 0x648);
    lVar16 = *(long *)(param_1 + 400);
    if (iVar15 == -1) {
      iVar15 = *(int *)(lVar16 + 0x90);
      iVar8 = *(int *)(lVar16 + 0x30);
      if (iVar8 <= iVar15) goto LAB_005372f0;
LAB_0053725c:
      uVar23 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + (long)iVar15 * 8);
      iVar15 = *(int *)(param_1 + 0x64c);
      if (iVar15 != -1) goto LAB_00537270;
LAB_00537300:
      iVar15 = *(int *)(lVar16 + 0x90);
      if (iVar8 <= iVar15) goto LAB_00537310;
LAB_0053727c:
      uVar13 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + (long)iVar15 * 8);
    }
    else {
      iVar8 = *(int *)(lVar16 + 0x30);
      if (iVar15 < iVar8) goto LAB_0053725c;
LAB_005372f0:
      uVar23 = 0;
      iVar15 = *(int *)(param_1 + 0x64c);
      if (iVar15 == -1) goto LAB_00537300;
LAB_00537270:
      if (iVar15 < iVar8) goto LAB_0053727c;
LAB_00537310:
      uVar13 = 0;
    }
    uVar28 = *(undefined4 *)(param_1 + 0xc20);
    uVar29 = *(undefined4 *)(param_1 + 0xc24);
    uVar45 = *(undefined4 *)(param_1 + 0xbe8);
    uVar41 = *(undefined4 *)(param_1 + 0xc08);
    uVar42 = *(undefined4 *)(param_1 + 0xc0c);
    uVar7 = *(uint *)(param_1 + 0xc10);
    uVar46 = *(undefined4 *)(param_1 + 0x6cc);
    uVar49 = *(undefined4 *)(param_1 + 0xc04);
    uVar30 = *(undefined4 *)(param_1 + 0xc28);
    if (*(int *)(param_1 + 0xc14) == 2) {
      uVar47 = *(undefined4 *)(param_1 + 0xc1c);
    }
    else {
      if (*(int *)(param_1 + 0xc14) == 0) {
        uVar46 = *(undefined4 *)(param_1 + 0xc18);
      }
      uVar47 = 0;
    }
    FUN_00528d70(0x3f800000,0,param_1,&local_e8,0,2);
    uVar33 = 0;
    if (*(char *)(param_1 + 0xbe4) != '\0') {
      uVar33 = uVar45;
    }
    in_stack_fffffffffffffe30 = (undefined8 *)CONCAT44(uVar51,uVar41);
    uVar32 = CONCAT44(uVar43,(float)local_e8 * 0.0 + local_e8._4_4_);
    uVar52 = CONCAT44(uVar55,*(undefined4 *)(param_1 + 0xbf0));
    FUN_00581c70(uVar46,fVar35,uVar33,uVar47,uVar28,uVar29,uVar30,uVar42,plVar22,uVar23,uVar13,
                 uVar49,0,*(float *)(param_1 + 0xbf8) != 0.0,*(char *)(param_1 + 0x67b) == '\0',0,
                 CONCAT44(uVar40,uVar7),uVar32,in_stack_fffffffffffffe30,
                 in_stack_fffffffffffffe38 & 0xffffffff00000000,uVar52,fVar34 / fVar36,0);
    uVar55 = (undefined4)((ulong)uVar52 >> 0x20);
    *(undefined1 *)(*(long *)(param_1 + 0x198) + 0x26c) = *(undefined1 *)(param_1 + 0x10d5);
    uVar10 = CONCAT44((int)((ulong)uVar32 >> 0x20),uVar41);
    uVar53 = (ulong)uVar7;
    FUN_00555610(uVar46,fVar35,uVar33,uVar47,uVar28,uVar29,uVar30,uVar42,
                 *(undefined8 *)(param_1 + 0x198),uVar49);
    uVar31 = uVar31 & 0xffffffff;
  }
  iVar15 = *(int *)(param_1 + 0x668);
  lVar16 = *(long *)(param_1 + 400);
  if (iVar15 == -1) {
    iVar18 = *(int *)(lVar16 + 0x90);
    iVar8 = *(int *)(lVar16 + 0x30);
    if (iVar8 <= iVar18) goto LAB_005374a4;
LAB_00537488:
    lVar21 = *(long *)(*(long *)(lVar16 + 0x38) + (long)iVar18 * 8);
  }
  else {
    iVar8 = *(int *)(lVar16 + 0x30);
    iVar18 = iVar15;
    if (iVar15 < iVar8) goto LAB_00537488;
LAB_005374a4:
    lVar21 = 0;
  }
  fVar34 = *(float *)(param_1 + 0x848);
  uVar9 = uVar9 & 0xffff0000;
  fVar35 = *(float *)(param_1 + 0x8d0);
  if (*pcVar1 == '\0') {
    if (*(char *)(param_1 + 0x59d) == '\0') {
      uVar11 = FUN_00534620(param_1);
      if ((uVar11 & 1) != 0) {
        FUN_005534f0(*(undefined8 *)(param_1 + 0x198),0xffffffff,0xffffffff,0xffffffff);
      }
    }
    else {
      if (uVar9 != 0x70000) goto LAB_00537544;
      iVar15 = *(int *)(param_1 + 0x5d8);
      iVar18 = iVar15;
      if (iVar15 == -1) {
        iVar18 = *(int *)(lVar16 + 0x90);
      }
      if (iVar8 <= iVar18) {
        lVar21 = 0;
        uVar11 = FUN_00534620(param_1);
        goto joined_r0x0053782c;
      }
      lVar21 = *(long *)(*(long *)(lVar16 + 0x38) + (long)iVar18 * 8);
      uVar11 = FUN_00534620(param_1);
      if ((uVar11 & 1) == 0) goto LAB_00537574;
LAB_00537550:
      FUN_005534f0(*(undefined8 *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0x694),0xffffffff,
                   0xffffffff);
      FUN_005706c0(*(undefined4 *)(param_1 + 0x8cc),*(undefined4 *)(param_1 + 0x8d0),plVar22);
    }
  }
  else {
    iVar18 = iVar15;
    if (iVar15 == -1) {
      iVar18 = *(int *)(lVar16 + 0x90);
    }
    if (iVar18 < iVar8) {
      lVar21 = *(long *)(*(long *)(lVar16 + 0x38) + (long)iVar18 * 8);
      cVar25 = *(char *)(param_1 + 0x59c);
    }
    else {
      lVar21 = 0;
      cVar25 = *(char *)(param_1 + 0x59c);
    }
    if (cVar25 != '\0') {
LAB_00537544:
      uVar11 = FUN_00534620(param_1);
joined_r0x0053782c:
      if ((uVar11 & 1) != 0) goto LAB_00537550;
    }
  }
LAB_00537574:
  lVar16 = *(long *)(param_1 + 0x198);
  *(undefined4 *)(lVar16 + 0x148) = 0;
  *(undefined8 *)(lVar16 + 0x14c) = 0x3f80000040000000;
  uVar11 = FUN_00534620(param_1);
  if ((uVar11 & 1) != 0) {
    *(int *)(*(long *)(param_1 + 400) + 0x90) = iVar15;
    if ((*(int *)(param_1 + 0xf78) != 1) || (fVar36 = *(float *)(param_1 + 0xf7c), fVar36 <= 1.0)) {
      fVar37 = 1.0;
      fVar36 = 1.0;
      uVar11 = (ulong)*(uint *)(param_1 + 0x844);
      if (*(char *)(param_1 + 0x59c) == '\0') goto LAB_005375fc;
LAB_005375cc:
      if (*(char *)(param_1 + 0x84c) == '\0') {
        if ((DAT_0275cc3f & 1) == 0) {
          DAT_0275cc3f = 1;
          DAT_0275cdcc = 0x100000000;
          DAT_0275cdd4 = 0x20000000a;
          DAT_0275cddc = 0x600000004;
          DAT_0275cde4 = 0xe00000008;
          DAT_0275cdec = 1;
        }
        uVar11 = FUN_00562ce0(uVar11,*(undefined4 *)(param_1 + 0x8cc),
                              *(undefined4 *)(param_1 + 0x8d0),
                              *(undefined4 *)
                               ((long)&DAT_0275cdcc + (ulong)*(ushort *)(param_1 + 0x8ca) * 4));
        fVar38 = *(float *)(param_1 + 0x1018);
        goto joined_r0x00537604;
      }
      uVar11 = (ulong)(uint)((float)uVar11 * *(float *)(param_1 + 0x8d0));
      fVar38 = *(float *)(param_1 + 0x1018);
      if (fVar38 <= 0.0) goto LAB_005376f8;
LAB_00537608:
      uVar23 = *(undefined8 *)(param_1 + 0x198);
      FUN_00555470(fVar38,uVar23);
      FUN_00555490(fVar38,uVar23);
      FUN_005554b0(fVar38,uVar23);
      FUN_005554d0(fVar38,uVar23);
    }
    else {
      uVar11 = (ulong)*(uint *)(param_1 + 0x844);
      fVar37 = fVar36;
      if (*(char *)(param_1 + 0x59c) != '\0') goto LAB_005375cc;
LAB_005375fc:
      fVar38 = *(float *)(param_1 + 0x1018);
      fVar36 = fVar37;
joined_r0x00537604:
      if (0.0 < fVar38) goto LAB_00537608;
LAB_005376f8:
      if (*(char *)(param_1 + 0x59c) == '\0') {
        uVar12 = FUN_0055eed0(*(undefined8 *)(param_1 + 0x198));
        uVar44 = uVar12;
      }
      else {
        uVar7 = *(uint *)(param_1 + 0x8cc);
        fVar37 = (float)FUN_0055eed0(*(undefined8 *)(param_1 + 0x198));
        local_e8 = local_e8 & 0xffffffff00000000;
        uVar12 = (ulong)(uint)(fVar37 * *(float *)(param_1 + 0x8d0));
        uVar44 = (ulong)uVar7;
      }
      fVar37 = fVar36 * (float)uVar12;
      local_e8 = CONCAT44(local_e8._4_4_,fVar37);
      FUN_00538690(*(undefined4 *)(*(long *)(param_1 + 0x198) + 0xd4));
      if (*(char *)(param_1 + 0x59c) == '\0') {
        iVar8 = *(int *)(param_1 + 0x5e0);
        if (iVar8 == -1) {
          iVar8 = *(int *)(*(long *)(param_1 + 400) + 0x90);
        }
        uVar12 = FUN_00538690(*(undefined4 *)
                               (*(long *)(*(long *)(*(long *)(param_1 + 400) + 0x38) +
                                         (long)iVar8 * 8) + 0x38));
        if ((uVar12 & 1) != 0) {
          if (*(char *)(param_1 + 0x59a) == '\0') {
            fVar38 = *(float *)(param_1 + 0x7f8);
          }
          else {
            fVar38 = *(float *)(param_1 + 0x8c0) * *(float *)(param_1 + 0x7fc);
          }
          fVar36 = fVar36 * fVar36 * ((*(float *)(param_1 + 0x8c0) / fVar38) /
                                     *(float *)(param_1 + 0x101c));
          fVar38 = (float)uVar44;
          uVar44 = uVar44 & 0xffffffff;
          if (fVar36 <= fVar38) {
            uVar44 = (ulong)(uint)fVar36;
          }
        }
      }
      else {
        fVar36 = fVar36 * fVar36 * (*(float *)(param_1 + 0x8cc) / *(float *)(param_1 + 0x101c));
        if (fVar36 <= fVar37) {
          fVar37 = fVar36;
        }
        local_e8 = CONCAT44(local_e8._4_4_,fVar37);
      }
      fVar37 = fVar37 - (float)uVar11;
      FUN_00555470(uVar44,*(undefined8 *)(param_1 + 0x198));
      FUN_00555490(uVar44,*(undefined8 *)(param_1 + 0x198));
      FUN_005554b0(fVar37,*(undefined8 *)(param_1 + 0x198));
      FUN_005554d0(fVar37,*(undefined8 *)(param_1 + 0x198));
      FUN_005554f0(0x3f800000,*(undefined8 *)(param_1 + 0x198));
      FUN_00555510(0x3f800000,*(undefined8 *)(param_1 + 0x198));
      FUN_00555530(0x3f800000,*(undefined8 *)(param_1 + 0x198));
      FUN_00555550(0x3f800000,*(undefined8 *)(param_1 + 0x198));
    }
    uVar40 = *(undefined4 *)(param_1 + 0x101c);
    uVar23 = *(undefined8 *)(param_1 + 0x198);
    FUN_005554f0(uVar40,uVar23);
    FUN_00555510(uVar40,uVar23);
    FUN_00555530(uVar40,uVar23);
    FUN_00555550(uVar40,uVar23);
    FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
    FUN_005a60a0(*(undefined8 *)(param_1 + 400),1,0x7fffffff);
    *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x1ec) = *(undefined4 *)(param_1 + 0x1020);
    *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x1e4) = *(undefined4 *)(param_1 + 0x1024);
    *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x1f0) = 0x3f800000;
    if ((DAT_0275cc3a & 1) == 0) {
      DAT_0275cc3a = 1;
      DAT_0275cdf0 = 0x100000000;
      DAT_0275cdf8 = 0x300000002;
      DAT_0275ce00 = 0x500000004;
      DAT_0275ce08 = 0x700000006;
      DAT_0275ce10 = 0x900000008;
      DAT_0275ce18 = 0xb0000000a;
      DAT_0275ce20 = 0xd0000000c;
    }
    if ((*(int *)(param_1 + 0xf80) == -1) ||
       (iVar8 = *(int *)((long)&DAT_0275cdf0 + (long)*(int *)(param_1 + 0xf80) * 4), iVar8 == -1)) {
      if (((DAT_0275cd18 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0275cd18), iVar8 != 0)) {
        FUN_005a0bb0(&DAT_0275cff0);
        FUN_001001c0(PTR_LAB_02713aa8,&DAT_0275cff0,&PTR_LOOP_025db000);
        __cxa_guard_release(&DAT_0275cd18);
      }
      puVar24 = &DAT_0275cff0;
      uVar10 = *(ulong *)(param_1 + 0xfac);
      in_stack_fffffffffffffe30 = *(undefined8 **)(param_1 + 0xfb4);
      uVar53 = (ulong)*(uint *)(param_1 + 0xfa4);
      FUN_005a0fc0(*(undefined4 *)(param_1 + 0xf84),*(undefined4 *)(param_1 + 0xf88),
                   *(undefined4 *)(param_1 + 0xf8c),*(undefined4 *)(param_1 + 0xf90),
                   *(undefined4 *)(param_1 + 0xf94),*(undefined4 *)(param_1 + 0xf98),
                   *(undefined4 *)(param_1 + 0xf9c),*(undefined4 *)(param_1 + 4000),&DAT_0275cff0,0,
                   *(undefined4 *)(param_1 + 0xfa8),*(undefined1 *)(param_1 + 0xfc4),
                   *(undefined4 *)(param_1 + 0xfd8),*(undefined1 *)(param_1 + 0xfe4),
                   *(undefined1 *)(param_1 + 0xff0));
      iVar8 = -1;
      uVar7 = *(uint *)(param_1 + 0xf78);
    }
    else {
      puVar24 = (undefined *)0x0;
      uVar7 = *(uint *)(param_1 + 0xf78);
    }
    if ((DAT_0275cc40 & 1) == 0) {
      DAT_0275cc40 = 1;
      DAT_0275cd20 = 0x300000001;
    }
    uVar40 = *(undefined4 *)((long)&DAT_0275cd20 + (ulong)uVar7 * 4);
    uVar43 = *(undefined4 *)(param_1 + 0xf7c);
    if ((*(char *)(param_1 + 0x104f) == '\0') ||
       ((*(int *)(param_1 + 0x850) != 2 &&
        ((((*(int *)(param_1 + 0x850) != 1 || (*(char *)(param_1 + 0xc2d) != '\0')) ||
          (*(char *)(param_1 + 0xc35) != '\0')) ||
         ((*(char *)(param_1 + 0x1090) != '\0' || (*(char *)(param_1 + 0x10d5) != '\0')))))))) {
      lVar16 = 0;
    }
    else {
      lVar16 = FUN_005aeec0(*(undefined8 *)(param_1 + 0x1a0),
                            *(undefined4 *)(*(long *)(param_1 + 0x198) + 0xbc));
    }
    *(byte *)(*(long *)(param_1 + 0x198) + 0x410) = *PTR_DAT_027139f0 ^ 1;
    lVar19 = lVar21;
    if (lVar16 != 0) {
      lVar19 = lVar16;
    }
    if (*(char *)(param_1 + 0x59a) == '\0') {
      fVar36 = *(float *)(param_1 + 0x7f8);
    }
    else {
      fVar36 = *(float *)(param_1 + 0x8c0) * *(float *)(param_1 + 0x7fc);
    }
    iVar8 = FUN_0055ef30(*(float *)(param_1 + 0x8c0),fVar36,fVar34 / fVar35,uVar11,uVar43,
                         *(undefined4 *)(param_1 + 0x7f4),uVar31,*(undefined8 *)(param_1 + 0x198),
                         lVar19,uVar40,iVar8,puVar24,*(undefined1 *)(param_1 + 0x67b),
                         *(undefined4 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0xd0),uVar53);
    if (((iVar8 < 0) && (*(int *)PTR_DAT_02713970 != 0)) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x8225);
      uVar23 = FUN_00546ea0(iVar8);
      FUN_00517ae0("CPostEffect::EndPostEffectScene_InternalProcess(): m_pRenderGlare->GenerateGlare() failed (0x%x: %s).\n"
                   ,iVar8,uVar23);
    }
  }
  *(int *)(*(long *)(param_1 + 400) + 0x90) = iVar15;
  pfVar54 = &local_108;
  uVar31 = (ulong)in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  FUN_0052e030(param_1,&local_118,&local_11c,&uStack_120,&local_124,local_128,&local_12c,&local_f8,
               pfVar54,uVar10 & 0xffffffffffffff00,uVar31);
  fVar34 = local_118;
  uVar40 = (undefined4)(uVar31 >> 0x20);
  if (uVar9 == 0x70000) {
    iVar15 = *(int *)(param_1 + 0x66c);
    lVar16 = *(long *)(param_1 + 400);
    if (iVar15 == -1) {
      iVar15 = *(int *)(lVar16 + 0x90);
      if (*(int *)(lVar16 + 0x30) <= iVar15) goto LAB_00537cf8;
    }
    else if (*(int *)(lVar16 + 0x30) <= iVar15) {
LAB_00537cf8:
      lVar21 = 0;
      goto LAB_00537cfc;
    }
    lVar21 = *(long *)(*(long *)(lVar16 + 0x38) + (long)iVar15 * 8);
  }
LAB_00537cfc:
  FUN_0052d540(param_1,lVar21);
  if (*(char *)(param_1 + 0x679) == '\0') {
    FUN_0052e610(param_1);
    cVar25 = *(char *)(param_1 + 0xbce);
    if (*(char *)(param_1 + 0x96c) != '\0') goto LAB_00537d1c;
LAB_00537da8:
    if (cVar25 == '\0') goto LAB_00537e3c;
LAB_00537dac:
    FUN_005340b0(param_1,lVar21);
    lVar16 = *(long *)(param_1 + 0x1168);
    if (*(char *)(param_1 + 0x10e1) == '\0') goto LAB_00537dc4;
LAB_00537f08:
    FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
  }
  else {
    cVar25 = *(char *)(param_1 + 0xbce);
    if (*(char *)(param_1 + 0x96c) == '\0') goto LAB_00537da8;
LAB_00537d1c:
    if ((*(int *)(param_1 + 0x970) == 0) || (cVar25 == '\0')) goto LAB_00537da8;
    iVar15 = *(int *)(param_1 + 0x518);
    if (iVar15 - 2U < 0x28) {
      uVar9 = (uint)(0xc0000c4011 >> ((ulong)(iVar15 - 2U) & 0x3f)) & 1;
    }
    else {
      uVar9 = 0;
    }
    if ((((iVar15 - 10U < 0x3a) && ((1L << ((ulong)(iVar15 - 10) & 0x3f) & 0x200100001000001U) != 0)
         ) || (iVar15 == 0x1a || uVar9 != 0)) ||
       ((*(int *)PTR_DAT_02713970 == 0 || (*(int *)PTR_DAT_027139c0 == 0)))) goto LAB_00537da8;
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: ",0x41ce);
    FUN_00517ae0(
                "CPostEffect::GetEffectiveFeedbackEnable(): The feedback result will be clamped because the feedback buffer format is not floating point. Use PFXOETA_IMMEDIATE_IMPLICIT oetf or set floating point format to PFX_INITPARAM::m_eFeedbackFormat.\n"
                );
    if (cVar25 != '\0') goto LAB_00537dac;
LAB_00537e3c:
    iVar15 = *(int *)(param_1 + 0xf30);
    if (iVar15 == -1) {
      iVar15 = *(int *)(param_1 + 0xf2c);
    }
    iVar8 = *(int *)(param_1 + 0x66c);
    if (iVar8 == -1) {
      iVar8 = *(int *)(*(long *)(param_1 + 400) + 0x90);
    }
    lVar16 = *(long *)(*(long *)(*(long *)(param_1 + 400) + 0x38) + (long)iVar8 * 8);
    fVar35 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x1168) + 0x4c));
    if (*(int *)(lVar16 + 0x54) == (int)(*(float *)(param_1 + 0x5a4) * fVar35)) {
      if ((0 < iVar15) &&
         (fVar35 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x1168) + 0x50)),
         *(int *)(lVar16 + 0x58) != (int)(*(float *)(param_1 + 0x5a8) * fVar35))) goto LAB_00537eb4;
LAB_00537ee4:
      if (*(char *)(param_1 + 0x10d6) != '\0') goto LAB_00537ef0;
    }
    else {
      if (iVar15 < 1) goto LAB_00537ee4;
LAB_00537eb4:
      if (((*(char *)(param_1 + 0x96c) != '\0') || (*(int *)PTR_DAT_02713a80 != 0)) &&
         ((*(char *)(param_1 + 0x96c) == '\0' || (*(int *)(param_1 + 0x970) == 0))))
      goto LAB_00537ee4;
LAB_00537ef0:
      FUN_00533db0(param_1,lVar21);
    }
    lVar16 = *(long *)(param_1 + 0x1168);
    if (*(char *)(param_1 + 0x10e1) != '\0') goto LAB_00537f08;
LAB_00537dc4:
    if (((*(char *)(param_1 + 0x96c) == '\0') && (*(int *)PTR_DAT_02713a80 == 0)) ||
       ((*(char *)(param_1 + 0x96c) != '\0' && (*(int *)(param_1 + 0x970) != 0))))
    goto LAB_00537f08;
  }
  uVar43 = (undefined4)((ulong)pfVar54 >> 0x20);
  iVar15 = *(int *)(param_1 + 0xbe0);
  bVar4 = lVar16 != 0;
  lVar19 = lVar16;
  if (iVar15 < 0x501) {
    if (iVar15 == 0) {
      cVar25 = *(char *)(param_1 + 0x10e1);
    }
    else {
      if (iVar15 != 1) {
        if (iVar15 != 0x301) goto LAB_00537f90;
        cVar25 = *(char *)(param_1 + 0x10e1);
        goto joined_r0x00537f94;
      }
      cVar25 = *(char *)(param_1 + 0x10e1);
    }
joined_r0x00537fd8:
    if (cVar25 != '\0') goto LAB_00537f98;
LAB_0053800c:
    if (((*(char *)(param_1 + 0x96c) == '\0') && (*(int *)PTR_DAT_02713a80 == 0)) ||
       ((*(char *)(param_1 + 0x96c) != '\0' && (*(int *)(param_1 + 0x970) != 0)))) {
      bVar5 = false;
      lVar27 = 0;
    }
    else {
      iVar15 = *(int *)(param_1 + 0x670);
      lVar19 = *(long *)(param_1 + 400);
      if (iVar15 == -1) {
        iVar15 = *(int *)(lVar19 + 0x90);
      }
      if (iVar15 < *(int *)(lVar19 + 0x30)) {
        lVar27 = *(long *)(*(long *)(lVar19 + 0x38) + (long)iVar15 * 8);
      }
      else {
        lVar27 = 0;
      }
      lVar19 = *(long *)(lVar27 + (long)*(int *)(lVar27 + 0xa0) * 8 + 0xb8);
      local_e0 = 0;
      uVar31 = (ulong)pfVar54 & 0xffffffff00000000;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = lVar27;
      FUN_0059db20(0x3f800000,8,&local_e8,0,0,0,0,0,0,uVar31);
      uVar43 = (undefined4)(uVar31 >> 0x20);
      bVar4 = false;
      bVar5 = true;
    }
  }
  else {
    if (iVar15 == 0x501) {
      cVar25 = *(char *)(param_1 + 0x10e1);
    }
    else {
      if (iVar15 == 0x801) {
        cVar25 = *(char *)(param_1 + 0x10e1);
        goto joined_r0x00537fd8;
      }
LAB_00537f90:
      cVar25 = *(char *)(param_1 + 0x10e1);
    }
joined_r0x00537f94:
    if (cVar25 == '\0') goto LAB_0053800c;
LAB_00537f98:
    lVar21 = FUN_00528fb0(param_1);
    local_128[0] = '\0';
    bVar5 = false;
    lVar27 = 0;
    fVar34 = -NAN;
  }
  puVar24 = PTR_DAT_02713a80;
  uVar49 = 0;
  bVar6 = *(char *)(param_1 + 0xbec) != '\0';
  uVar51 = 0;
  if (bVar6) {
    uVar51 = *(undefined4 *)(param_1 + 0xbf4);
  }
  uVar28 = 0;
  if (bVar6) {
    uVar28 = *(undefined4 *)(param_1 + 0xbf8);
  }
  if (*(char *)(param_1 + 0x10d6) == '\0') {
    cVar25 = *(char *)(param_1 + 0x96c);
  }
  else {
    cVar25 = *(char *)(param_1 + 0x96c);
  }
  if ((cVar25 == '\0') && (*(int *)PTR_DAT_02713a80 == 0)) {
    uVar49 = *(undefined4 *)(param_1 + 0x968);
  }
  if (bVar5) {
    puVar17 = (undefined4 *)(lVar27 + 0x54);
    uVar9 = *(uint *)(lVar27 + 0x58);
  }
  else {
    puVar17 = (undefined4 *)(lVar19 + 0x4c);
    uVar9 = *(uint *)(lVar19 + 0x50);
  }
  fVar35 = *(float *)(param_1 + 0x5a8) * (float)uVar9;
  fVar36 = *(float *)(param_1 + 0x5b0) * (float)uVar9;
  if (*(char *)(*(long *)(param_1 + 0x18) + 0x58) != '\0') {
    fVar36 = ((float)*(uint *)(lVar19 + 0x50) - fVar36) - fVar35;
  }
  fVar37 = (float)NEON_ucvtf(*puVar17);
  uVar29 = 0;
  if (cVar25 != '\0') {
    uVar29 = *(undefined4 *)(param_1 + 0x974);
  }
  uVar30 = *(undefined4 *)(param_1 + 0x8e8);
  local_e0 = CONCAT44(uVar30,uVar30);
  local_e8 = CONCAT44(uVar30,uVar30);
  if (*(char *)(param_1 + 0x59a) == '\0') {
    fVar38 = *(float *)(param_1 + 0x7f8);
  }
  else {
    fVar38 = *(float *)(param_1 + 0x8c0) * *(float *)(param_1 + 0x7fc);
  }
  uVar9 = FUN_0055f270(*(float *)(param_1 + 0x5a4) * fVar37,fVar35,
                       *(float *)(param_1 + 0x5ac) * fVar37,fVar36,local_124,local_12c,local_11c,
                       uStack_120,*(undefined8 *)(param_1 + 0x198),lVar19,bVar4,lVar21,
                       local_128[0] != '\0',fVar34,&local_e8,local_f8,CONCAT44(uVar43,uVar49),
                       CONCAT44(fStack_104,local_108),
                       CONCAT44(uVar40,*(float *)(param_1 + 0x8c0) / fVar38),param_1 + 0x8d4,
                       CONCAT44(uVar55,*(undefined4 *)(param_1 + 0x8e4)),uVar51,uVar28,
                       CONCAT44(uVar56,*(undefined4 *)(param_1 + 0xbfc)),
                       *(undefined4 *)(param_1 + 0xc00),*(undefined4 *)(param_1 + 0xbf0),
                       *(float *)(param_1 + 0x420) / *(float *)(param_1 + 0x424),
                       *(char *)(param_1 + 0x67b) == '\0',0,uVar29);
  if (((*(char *)(param_1 + 0x10e1) == '\0') &&
      ((*(char *)(param_1 + 0x96c) != '\0' || (*(int *)puVar24 != 0)))) &&
     ((*(char *)(param_1 + 0x96c) == '\0' || (*(int *)(param_1 + 0x970) == 0)))) {
    FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
    iVar15 = *(int *)(param_1 + 0xbe0);
    uVar23 = 0xffffffff;
    if (iVar15 < 0x501) {
      if (iVar15 == 0) {
        uVar23 = 0;
      }
      else if (iVar15 == 1) {
        uVar23 = 2;
      }
      else if (iVar15 == 0x301) {
        uVar23 = 1;
      }
    }
    else if (iVar15 == 0x501) {
      uVar23 = 3;
    }
    else if (iVar15 == 0x801) {
      uVar23 = 5;
    }
    else if (iVar15 == 0x60101) {
      uVar23 = 4;
    }
    (**(code **)(**(long **)(param_1 + 0x18) + 0x160))(*(long **)(param_1 + 0x18),uVar23);
    uVar9 = FUN_00530ac0(param_1,lVar27,0,lVar16,0);
    (**(code **)(**(long **)(param_1 + 0x18) + 0x160))(*(long **)(param_1 + 0x18),0);
    FUN_00526b00(param_1);
  }
  if (*(int *)(param_1 + 0x5d0) != 1) goto LAB_005384ac;
  (**(code **)(**(long **)(param_1 + 0x18) + 0x168))(*(long **)(param_1 + 0x18),2);
  iVar15 = *(int *)(param_1 + 0x5d8);
  lVar21 = *(long *)(param_1 + 400);
  if (iVar15 == -1) {
    iVar15 = *(int *)(lVar21 + 0x90);
    if (*(int *)(lVar21 + 0x30) <= iVar15) goto LAB_005383e8;
LAB_005383cc:
    lVar21 = *(long *)(*(long *)(lVar21 + 0x38) + (long)iVar15 * 8);
  }
  else {
    if (iVar15 < *(int *)(lVar21 + 0x30)) goto LAB_005383cc;
LAB_005383e8:
    lVar21 = 0;
  }
  local_e8 = 0x3f8000003f800000;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar21 = *(long *)(param_1 + 0x70);
  }
  local_e0 = CONCAT44(*(undefined4 *)(param_1 + 0x8e0),0x3f800000);
  lVar19 = lVar21;
  do {
    lVar27 = lVar19;
    lVar19 = *(long *)(lVar27 + 0x120);
  } while (lVar19 != 0);
  uVar9 = FUN_00575a10(*(float *)(param_1 + 0x5ac) * (float)*(uint *)(lVar16 + 0x4c),
                       *(float *)(param_1 + 0x5b0) * (float)*(uint *)(lVar16 + 0x50),
                       *(float *)(param_1 + 0x5a4) * (float)*(uint *)(lVar16 + 0x4c),
                       *(float *)(param_1 + 0x5a8) * (float)*(uint *)(lVar16 + 0x50),0,0,
                       *(float *)(lVar21 + 0x90) +
                       *(float *)(lVar21 + 0x88) * (float)*(uint *)(lVar21 + 0x54),
                       *(float *)(lVar21 + 0x94) +
                       *(float *)(lVar21 + 0x8c) * (float)*(uint *)(lVar21 + 0x58),plVar22,1,0,
                       &local_e8,*(undefined8 *)(lVar27 + 0xa8),0x15,0);
  (**(code **)(**(long **)(param_1 + 0x18) + 0x168))(*(long **)(param_1 + 0x18),0);
LAB_005384ac:
  (**(code **)(**(long **)(param_1 + 0x18) + 0x148))(*(long **)(param_1 + 0x18),0xffffffff,1);
  FUN_005534f0(*(undefined8 *)(param_1 + 0x198),0xffffffff,0xffffffff,0xffffffff);
  FUN_005a60a0(*(undefined8 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x6b4),0x7fffffff);
  if ((((int)uVar9 < 0) && (*(int *)PTR_DAT_02713970 != 0)) && (*(int *)PTR_DAT_02713980 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x84a9);
    uVar23 = FUN_00546ea0(uVar9);
    FUN_00517ae0("CPostEffect::EndPostEffectScene_InternalProcess(): m_pRenderGlare->TonemapToSurface() failed (0x%x: %s).\n"
                 ,uVar9,uVar23);
  }
  FUN_00538780(param_1);
  return uVar9 & (int)uVar9 >> 0x1f;
}


