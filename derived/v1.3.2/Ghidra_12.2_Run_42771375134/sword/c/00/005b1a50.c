/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b1a50; name: FUN_005b1a50
 */


undefined4
FUN_005b1a50(long param_1,int param_2,byte param_3,long param_4,long param_5,long *param_6,
            undefined8 param_7,undefined4 param_8)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  float *pfVar10;
  long lVar11;
  bool bVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulong in_stack_ffffffffffffff00;
  uint uVar25;
  undefined4 uVar26;
  ulong in_stack_ffffffffffffff08;
  uint uVar28;
  ulong uVar27;
  ulong in_stack_ffffffffffffff10;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar3 = PTR_DAT_027139b0;
  lVar13 = *(long *)(param_1 + 0x4a8);
  uVar25 = *(uint *)(param_1 + 0x154) >> 2;
  if ((param_3 & 1) == 0) {
    uVar25 = *(uint *)(param_1 + 0x154) >> 3;
  }
  iVar9 = *(int *)PTR_DAT_027139b0;
  if (iVar9 < 1) {
    plVar15 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar15,0);
    *(long **)PTR_DAT_027139b8 = plVar15;
    *(undefined4 *)puVar3 = 1;
    if (plVar15 != (long *)0x0) goto LAB_005b1ae0;
LAB_005b1b68:
    iVar9 = 0;
  }
  else {
    plVar15 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar9 + 1;
    if (iVar9 + 1 < 2) {
      if (plVar15 == (long *)0x0) goto LAB_005b1b68;
LAB_005b1ae0:
      uVar19 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar15 + 0x20))(plVar15);
      FUN_005b9b10(uVar19,plVar15);
      iVar9 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *(int *)puVar3 = iVar9;
  lVar16 = (long)param_2;
  if (*(char *)(param_1 + 0x174) == '\0') {
    local_80 = 0x3f8000003f800000;
    uStack_78 = 0x3f8000003f800000;
  }
  else {
    local_80 = (&DAT_027636b8)[lVar16 * 2];
    uStack_78 = (&DAT_027636c0)[lVar16 * 2];
  }
  local_90 = *(undefined8 *)(lVar13 + lVar16 * 0x108 + 0xf0);
  local_88 = 0x4000000000000000;
  if ((param_3 & 1) == 0) {
    local_88 = 0xc000000080000000;
  }
  iVar9 = *(int *)(lVar13 + lVar16 * 0x108 + 0x10);
  uVar19 = param_7;
  if (iVar9 != 5) {
    uVar19 = 0;
  }
  switch(iVar9) {
  case 0:
    piVar14 = (int *)(lVar13 + lVar16 * 0x108 + 0x18);
    if (*piVar14 < 10) {
      lVar13 = param_4;
      do {
        lVar16 = lVar13;
        lVar13 = *(long *)(lVar16 + 0x120);
      } while (lVar13 != 0);
      plVar8 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar8 + 0x90))(plVar8,2);
      uVar25 = (uint)(in_stack_ffffffffffffff00 >> 0x20);
      uVar28 = (uint)(in_stack_ffffffffffffff08 >> 0x20);
      lVar13 = param_5;
      do {
        lVar16 = lVar13;
        lVar13 = *(long *)(lVar16 + 0x120);
      } while (lVar13 != 0);
      plVar8 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar8 + 0x90))(plVar8,2);
      lVar13 = (ulong)uVar25 << 0x20;
      uVar6 = FUN_00593ed0(0x3f800000,plVar15,param_4,param_5,*piVar14,param_8,&local_80,0,0,lVar13,
                           (ulong)uVar28 << 0x20);
      uVar26 = (undefined4)((ulong)lVar13 >> 0x20);
      if (*piVar14 != 9) {
        return uVar6;
      }
      goto LAB_005b1cbc;
    }
    lVar13 = *param_6;
    if ((*(char *)(param_1 + 300) == '\0') && (lVar13 = param_6[1], lVar13 == param_5)) {
      lVar13 = *param_6;
      if (param_6[2] != param_5) {
        lVar13 = param_6[2];
      }
    }
    if (param_4 != 0) {
      lVar16 = param_4;
      do {
        lVar18 = lVar16;
        lVar16 = *(long *)(lVar18 + 0x120);
      } while (lVar16 != 0);
      plVar8 = *(long **)(lVar18 + 0xa8);
      (**(code **)(*plVar8 + 0x90))(plVar8,2);
    }
    uVar25 = (uint)(in_stack_ffffffffffffff10 >> 0x20);
    if (param_5 != 0) {
      lVar16 = param_5;
      do {
        lVar18 = lVar16;
        lVar16 = *(long *)(lVar18 + 0x120);
      } while (lVar16 != 0);
      plVar8 = *(long **)(lVar18 + 0xa8);
      (**(code **)(*plVar8 + 0x90))(plVar8,2);
    }
    if (lVar13 != 0) {
      lVar16 = lVar13;
      do {
        lVar18 = lVar16;
        lVar16 = *(long *)(lVar18 + 0x120);
      } while (lVar16 != 0);
      plVar8 = *(long **)(lVar18 + 0xa8);
      (**(code **)(*plVar8 + 0x90))(plVar8,2);
    }
    lVar16 = *param_6;
    if (*param_6 == 0) {
      lVar16 = 0;
    }
    else {
      do {
        lVar18 = lVar16;
        lVar16 = *(long *)(lVar18 + 0x120);
      } while (lVar16 != 0);
      plVar8 = *(long **)(lVar18 + 0xa8);
      (**(code **)(*plVar8 + 0x90))(plVar8,2);
      lVar16 = *param_6;
    }
    local_a0 = 0x3f8000003f800000;
    local_98 = 0x3f8000003f800000;
    uVar7 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
    FUN_00593c90(0x3f800000,plVar15,param_4,lVar13,param_5,lVar16,1,0,&local_a0,uVar7,
                 in_stack_ffffffffffffff08 & 0xffffffffffffff00,(ulong)uVar25 << 0x20,0);
    param_4 = *param_6;
    uVar7 = uVar7 >> 0x20;
    uVar19 = 0x3f400000;
    goto LAB_005b2808;
  case 1:
    lVar18 = param_4;
    if (((uVar25 & 1) != 0) || (*(int *)(lVar13 + lVar16 * 0x108 + 0x1c) != 3)) {
      do {
        lVar17 = lVar18;
        lVar18 = *(long *)(lVar17 + 0x120);
      } while (lVar18 != 0);
      plVar8 = *(long **)(lVar17 + 0xa8);
      (**(code **)(*plVar8 + 0x90))(plVar8,2);
      uVar25 = (uint)(in_stack_ffffffffffffff10 >> 0x20);
      lVar18 = param_5;
      do {
        lVar17 = lVar18;
        lVar18 = *(long *)(lVar17 + 0x120);
      } while (lVar18 != 0);
      plVar8 = *(long **)(lVar17 + 0xa8);
      (**(code **)(*plVar8 + 0x90))(plVar8,2);
      lVar18 = *param_6;
      if (*param_6 == 0) {
        lVar18 = 0;
      }
      else {
        do {
          lVar17 = lVar18;
          lVar18 = *(long *)(lVar17 + 0x120);
        } while (lVar18 != 0);
        plVar8 = *(long **)(lVar17 + 0xa8);
        (**(code **)(*plVar8 + 0x90))(plVar8,2);
        lVar18 = *param_6;
      }
      lVar13 = lVar13 + lVar16 * 0x108;
      fVar20 = (float)*(int *)(lVar13 + 0x1c) * 0.5 * DAT_01d4c4a8;
      local_98 = CONCAT44(fVar20,fVar20);
      local_a0 = CONCAT44(fVar20,fVar20);
      uVar4 = FUN_00596bf0(0x3f800000,-(float)*(int *)(lVar13 + 0x18),plVar15,param_4,lVar18,param_5
                           ,&local_a0,param_8,&local_80,0,
                           in_stack_ffffffffffffff00 & 0xffffffffffffff00,
                           in_stack_ffffffffffffff08 & 0xffffffffffffff00,(ulong)uVar25 << 0x20,0);
      return uVar4;
    }
    lVar13 = param_4;
    do {
      lVar16 = lVar13;
      lVar13 = *(long *)(lVar16 + 0x120);
    } while (lVar13 != 0);
    plVar8 = *(long **)(lVar16 + 0xa8);
    (**(code **)(*plVar8 + 0x90))(plVar8,2);
    uVar25 = (uint)(in_stack_ffffffffffffff00 >> 0x20);
    lVar13 = param_5;
    do {
      lVar16 = lVar13;
      lVar13 = *(long *)(lVar16 + 0x120);
    } while (lVar13 != 0);
    plVar8 = *(long **)(lVar16 + 0xa8);
    (**(code **)(*plVar8 + 0x90))(plVar8,2);
    uVar19 = 0x3f800000;
    uVar7 = (ulong)uVar25;
LAB_005b2808:
    uVar4 = FUN_00593fe0(0x3f800000,uVar19,plVar15,param_4,param_5,param_8,&local_80,0,0,0,
                         uVar7 << 0x20);
    break;
  case 2:
    fVar20 = DAT_01d4bba8;
    if (*(float *)(param_1 + 0x1bc) != DAT_01d4c5a8) {
      fVar20 = *(float *)(param_1 + 0x1bc);
    }
    lVar18 = param_4;
    do {
      lVar17 = lVar18;
      lVar18 = *(long *)(lVar17 + 0x120);
    } while (lVar18 != 0);
    plVar8 = *(long **)(lVar17 + 0xa8);
    if (*(char *)(*(long *)(param_1 + 0x20) + 0x58) != '\0') {
      fVar20 = -fVar20;
    }
    (**(code **)(*plVar8 + 0x90))(plVar8,2);
    lVar18 = param_5;
    do {
      lVar17 = lVar18;
      lVar18 = *(long *)(lVar17 + 0x120);
    } while (lVar18 != 0);
    plVar8 = *(long **)(lVar17 + 0xa8);
    (**(code **)(*plVar8 + 0x90))(plVar8,2);
    lVar18 = *param_6;
    if (*param_6 != 0) {
      do {
        lVar17 = lVar18;
        lVar18 = *(long *)(lVar17 + 0x120);
      } while (lVar18 != 0);
      plVar8 = *(long **)(lVar17 + 0xa8);
      (**(code **)(*plVar8 + 0x90))(plVar8,2);
    }
    uVar25 = (uint)(in_stack_ffffffffffffff10 >> 0x20);
    iVar9 = *(int *)(lVar13 + lVar16 * 0x108 + 0x18);
    if (iVar9 == 0xf || iVar9 == 5) {
      uVar4 = FUN_00591690(fVar20,0,0x3f800000,plVar15,param_4,*param_6,param_5,iVar9,param_8,
                           &local_80,uVar19,&local_90,in_stack_ffffffffffffff08 & 0xffffffffffffff00
                           ,in_stack_ffffffffffffff10 & 0xffffffff00000000,0);
    }
    else {
      lVar13 = *param_6;
      fVar21 = logf((float)iVar9);
      uVar4 = FUN_005916f0(fVar20,0x3f800000,plVar15,param_4,lVar13,param_5,
                           (int)(fVar21 / DAT_01d4bfc4),param_8,&local_80,uVar19,&local_90,
                           in_stack_ffffffffffffff08 & 0xffffffffffffff00,(ulong)uVar25 << 0x20,0);
    }
    break;
  case 3:
    lVar18 = param_4;
    do {
      lVar17 = lVar18;
      lVar18 = *(long *)(lVar17 + 0x120);
    } while (lVar18 != 0);
    plVar8 = *(long **)(lVar17 + 0xa8);
    (**(code **)(*plVar8 + 0x90))(plVar8,2);
    lVar18 = param_5;
    do {
      lVar17 = lVar18;
      lVar18 = *(long *)(lVar17 + 0x120);
    } while (lVar18 != 0);
    plVar8 = *(long **)(lVar17 + 0xa8);
    (**(code **)(*plVar8 + 0x90))(plVar8,2);
    lVar18 = *param_6;
    if (*param_6 != 0) {
      do {
        lVar17 = lVar18;
        lVar18 = *(long *)(lVar17 + 0x120);
      } while (lVar18 != 0);
      plVar8 = *(long **)(lVar17 + 0xa8);
      (**(code **)(*plVar8 + 0x90))(plVar8,2);
    }
    lVar18 = param_6[1];
    if (param_6[1] == 0) {
      lVar18 = 0;
    }
    else {
      do {
        lVar17 = lVar18;
        lVar18 = *(long *)(lVar17 + 0x120);
      } while (lVar18 != 0);
      plVar8 = *(long **)(lVar17 + 0xa8);
      (**(code **)(*plVar8 + 0x90))(plVar8,2);
      lVar18 = param_6[1];
    }
    fVar20 = DAT_01d4c60c;
    if (*(float *)(param_1 + 0x1bc) != DAT_01d4c5a8) {
      fVar20 = *(float *)(param_1 + 0x1bc) + DAT_01d4c608;
    }
    if (*(char *)(*(long *)(param_1 + 0x20) + 0x58) != '\0') {
      fVar20 = -fVar20;
    }
    uVar4 = FUN_00592160(fVar20,0x3f800000,0x3f800000,DAT_01d4bb74,plVar15,param_4,param_5,*param_6,
                         lVar18,*(undefined4 *)(lVar13 + lVar16 * 0x108 + 0x18),param_8,&local_80,
                         uVar19,&local_90,in_stack_ffffffffffffff10 & 0xffffffffffffff00,0,0);
    break;
  case 4:
    lVar18 = param_4;
    do {
      lVar17 = lVar18;
      lVar18 = *(long *)(lVar17 + 0x120);
    } while (lVar18 != 0);
    plVar8 = *(long **)(lVar17 + 0xa8);
    fVar20 = DAT_01d4c60c;
    if (*(float *)(param_1 + 0x1bc) != DAT_01d4c5a8) {
      fVar20 = *(float *)(param_1 + 0x1bc) + DAT_01d4c608;
    }
    (**(code **)(*plVar8 + 0x90))(plVar8,2);
    uVar25 = (uint)(in_stack_ffffffffffffff10 >> 0x20);
    lVar18 = param_5;
    do {
      lVar17 = lVar18;
      lVar18 = *(long *)(lVar17 + 0x120);
    } while (lVar18 != 0);
    plVar8 = *(long **)(lVar17 + 0xa8);
    (**(code **)(*plVar8 + 0x90))(plVar8,2);
    lVar18 = *param_6;
    if (*param_6 != 0) {
      do {
        lVar17 = lVar18;
        lVar18 = *(long *)(lVar17 + 0x120);
      } while (lVar18 != 0);
      plVar8 = *(long **)(lVar17 + 0xa8);
      (**(code **)(*plVar8 + 0x90))(plVar8,2);
    }
    lVar18 = param_6[1];
    if (param_6[1] != 0) {
      do {
        lVar17 = lVar18;
        lVar18 = *(long *)(lVar17 + 0x120);
      } while (lVar18 != 0);
      plVar8 = *(long **)(lVar17 + 0xa8);
      (**(code **)(*plVar8 + 0x90))(plVar8,2);
    }
    if (*(char *)(*(long *)(param_1 + 0x20) + 0x58) != '\0') {
      fVar20 = -fVar20;
    }
    uVar4 = FUN_00592350(fVar20,0x3f800000,0x3f800000,plVar15,param_4,param_5,param_6,
                         *(undefined4 *)(lVar13 + lVar16 * 0x108 + 0x18),param_8,&local_80,uVar19,
                         &local_90,in_stack_ffffffffffffff08 & 0xffffffffffffff00,
                         (ulong)uVar25 << 0x20,0);
    break;
  case 5:
    iVar9 = *(int *)(param_1 + 0x130);
    if ((1 < iVar9) || ((bVar1 = param_2 == 1 & param_3, bVar1 == 1 && (iVar9 == 1)))) {
      iVar2 = *(int *)(lVar13 + lVar16 * 0x108 + 0x18);
      if (iVar2 < 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(&DAT_01d4a3c0 + (long)iVar2 * 4);
      }
      fVar22 = 0.5;
      pfVar10 = (float *)(lVar13 + lVar16 * 0x108 + 0x30);
      fVar20 = *pfVar10 * 0.5;
      fVar21 = fVar20 * 0.5;
      fVar20 = fVar20 + fVar20;
      if (5 < param_2) {
        fVar20 = DAT_01d4c18c;
      }
      if (((1 < param_2) && (((param_3 ^ 1) & 1) != 0)) &&
         ((*PTR_DAT_027139e0 == '\0' ||
          ((*(char *)(param_1 + 0x3f0) == '\0' ||
           (*(float *)(param_1 + 0x3f4) + *(float *)(param_1 + 0x3f4) == 0.0)))))) {
        fVar21 = fVar21 + fVar21;
      }
      fVar24 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 200));
      fVar23 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xc4));
      if (fVar23 < fVar24) {
        fVar22 = (fVar23 / fVar24) * 0.5;
      }
      if (fVar22 <= fVar20) {
        fVar20 = fVar22;
      }
      lVar17 = *param_6;
      lVar18 = lVar17;
      if (param_2 != 1) {
        lVar18 = param_5;
      }
      uVar27 = CONCAT44((int)(in_stack_ffffffffffffff08 >> 0x20),param_8);
      uVar7 = CONCAT71((int7)(in_stack_ffffffffffffff00 >> 8),iVar9 < 2);
      uVar4 = FUN_005b0700(fVar21,fVar20,param_1,uVar4,(param_3 ^ 1) & 1,param_4,lVar18,param_7,
                           &local_80,param_3 & 1,uVar7,uVar27);
      if (*(int *)(param_1 + 0xd0) + -2 <= param_2) {
        fVar20 = (float)NEON_ucvtf(*(undefined4 *)(lVar18 + 0x58));
        fVar20 = (fVar20 / 9.0) * DAT_01d4c774;
        lVar11 = param_5;
        if (param_2 != 1) {
          lVar11 = lVar17;
        }
        fVar21 = fVar20 * 0.25;
        if (*(int *)(param_1 + 0xd0) + -1 <= param_2) {
          fVar21 = fVar20;
        }
        local_b0 = 0x3f8000003f800000;
        uStack_a8 = 0x3f8000003f800000;
        local_a0 = CONCAT44(fVar21,fVar21);
        local_98 = CONCAT44(fVar21,fVar21);
        in_stack_ffffffffffffff10 = in_stack_ffffffffffffff10 & 0xffffffff00000000;
        uVar27 = uVar27 & 0xffffffffffffff00;
        uVar7 = uVar7 & 0xffffffffffffff00;
        uVar4 = FUN_00596bf0(0x3f800000,DAT_01d4bd94,plVar15,lVar18,lVar11,lVar18,&local_a0,0,
                             &local_b0,0,uVar7,uVar27,in_stack_ffffffffffffff10,0);
      }
      if (param_2 == 1) {
        uVar4 = FUN_00575200(plVar15,lVar18,param_5,0);
      }
      if ((param_3 & 1) != 0) {
        return uVar4;
      }
      lVar18 = *param_6;
      (**(code **)(**(long **)(param_1 + 0x20) + 0x168))(*(long **)(param_1 + 0x20),2);
      do {
        lVar17 = param_4;
        param_4 = *(long *)(lVar17 + 0x120);
      } while (param_4 != 0);
      plVar8 = *(long **)(lVar17 + 0xa8);
      (**(code **)(*plVar8 + 0x90))(plVar8,2);
      lVar17 = lVar18;
      do {
        lVar11 = lVar17;
        lVar17 = *(long *)(lVar11 + 0x120);
      } while (lVar17 != 0);
      plVar8 = *(long **)(lVar11 + 0xa8);
      (**(code **)(*plVar8 + 0x90))(plVar8,2);
      fVar20 = (float)NEON_ucvtf(*(undefined4 *)(lVar13 + lVar16 * 0x108 + 4));
      local_b0 = 0x3f8000003f800000;
      uStack_a8 = 0x3f8000003f800000;
      fVar20 = *pfVar10 * fVar20 * 0.5 * 0.25;
      local_a0 = CONCAT44(fVar20,fVar20);
      local_98 = CONCAT44(fVar20,fVar20);
      FUN_00596bf0(0x3f800000,DAT_01d4bd94,plVar15,param_5,lVar18,param_5,&local_a0,0,&local_b0,0,
                   uVar7 & 0xffffffffffffff00,uVar27 & 0xffffffffffffff00,
                   in_stack_ffffffffffffff10 & 0xffffffff00000000,0);
      (**(code **)(**(long **)(param_1 + 0x20) + 0x168))(*(long **)(param_1 + 0x20),0);
      return uVar4;
    }
    lVar17 = *param_6;
    lVar18 = param_4;
    do {
      lVar11 = lVar18;
      lVar18 = *(long *)(lVar11 + 0x120);
    } while (lVar18 != 0);
    uVar4 = (**(code **)(**(long **)(lVar11 + 0xa8) + 0x80))();
    lVar18 = lVar17;
    do {
      lVar11 = lVar18;
      lVar18 = *(long *)(lVar11 + 0x120);
    } while (lVar18 != 0);
    uVar5 = (**(code **)(**(long **)(lVar11 + 0xa8) + 0x80))();
    lVar18 = param_4;
    do {
      lVar11 = lVar18;
      lVar18 = *(long *)(lVar11 + 0x120);
    } while (lVar18 != 0);
    plVar8 = *(long **)(lVar11 + 0xa8);
    (**(code **)(*plVar8 + 0x78))(plVar8,8);
    lVar18 = lVar17;
    do {
      lVar11 = lVar18;
      lVar18 = *(long *)(lVar11 + 0x120);
    } while (lVar18 != 0);
    plVar8 = *(long **)(lVar11 + 0xa8);
    (**(code **)(*plVar8 + 0x78))(plVar8,8);
    iVar9 = *(int *)(lVar13 + lVar16 * 0x108 + 0x18);
    if (iVar9 < 3) {
      lVar13 = param_4;
      do {
        lVar18 = lVar13;
        lVar13 = *(long *)(lVar18 + 0x120);
      } while (lVar13 != 0);
      plVar8 = *(long **)(lVar18 + 0xa8);
      (**(code **)(*plVar8 + 0x90))(plVar8,2);
      uVar25 = (uint)(in_stack_ffffffffffffff00 >> 0x20);
      uVar28 = (uint)(in_stack_ffffffffffffff08 >> 0x20);
      lVar13 = param_5;
      do {
        lVar18 = lVar13;
        lVar13 = *(long *)(lVar18 + 0x120);
      } while (lVar13 != 0);
      plVar8 = *(long **)(lVar18 + 0xa8);
      (**(code **)(*plVar8 + 0x90))(plVar8,2);
      iVar9 = *(int *)(*(long *)(param_1 + 0x4a8) + lVar16 * 0x108 + 0x1c);
      if (((*(char *)(param_1 + 0x12d) != '\0') && (*(int *)(param_1 + 0x130) < 2)) &&
         ((bVar1 & *(int *)(param_1 + 0x130) == 1) == 0)) {
        uVar19 = 3;
        switch(*(undefined4 *)(*(long *)(param_1 + 0x4a8) + lVar16 * 0x108 + 0x18)) {
        case 0:
          break;
        case 1:
          uVar19 = 5;
          break;
        case 2:
          uVar7 = (ulong)uVar25 << 0x20;
          uVar6 = FUN_00593ed0(0x3f800000,plVar15,param_4,param_5,9,param_8,&local_80,0,0,uVar7,
                               (ulong)uVar28 << 0x20);
          goto LAB_005b2910;
        case 3:
          uVar19 = 0x11;
          break;
        default:
          goto switchD_005b2798_default;
        }
        uVar7 = (ulong)uVar25 << 0x20;
        uVar6 = FUN_00593ed0(0x3f800000,plVar15,param_4,param_5,uVar19,param_8,&local_80,0,0,uVar7,
                             (ulong)uVar28 << 0x20);
        goto LAB_005b2918;
      }
switchD_005b2798_default:
      uVar7 = (ulong)uVar25 << 0x20;
      uVar6 = FUN_00593ed0(0x3f800000,plVar15,param_4,param_5,iVar9,param_8,&local_80,0,0,uVar7,
                           (ulong)uVar28 << 0x20);
      if (iVar9 != 9) goto LAB_005b2918;
LAB_005b2910:
      bVar12 = false;
    }
    else {
      fVar20 = (*(float *)(&DAT_01d4b7a0 + (long)iVar9 * 4) / DAT_01d4bf88) * 0.5 * DAT_01d4c4a8;
      if (6.0 <= fVar20) {
        fVar20 = 6.0;
      }
      local_98 = CONCAT44(fVar20,fVar20);
      local_a0 = CONCAT44(fVar20,fVar20);
      uVar7 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
      uVar6 = FUN_00596bf0(0x3f800000,DAT_01d4bac8,plVar15,param_4,lVar17,param_5,&local_a0,0,
                           &local_80,0,uVar7,in_stack_ffffffffffffff08 & 0xffffffffffffff00,
                           in_stack_ffffffffffffff10 & 0xffffffff00000000,0);
LAB_005b2918:
      bVar12 = true;
    }
    do {
      lVar13 = param_4;
      uVar26 = (undefined4)(uVar7 >> 0x20);
      param_4 = *(long *)(lVar13 + 0x120);
    } while (param_4 != 0);
    plVar8 = *(long **)(lVar13 + 0xa8);
    (**(code **)(*plVar8 + 0x78))(plVar8,uVar4);
    do {
      lVar13 = lVar17;
      lVar17 = *(long *)(lVar13 + 0x120);
    } while (lVar17 != 0);
    plVar8 = *(long **)(lVar13 + 0xa8);
    (**(code **)(*plVar8 + 0x78))(plVar8,uVar5);
    if (bVar12) {
      return uVar6;
    }
LAB_005b1cbc:
    if (*(char *)(param_1 + 0x174) == '\0') {
      return uVar6;
    }
    uVar7 = FUN_00542d00(*(undefined8 *)(param_1 + 0x20));
    if ((uVar7 & 1) != 0) {
      return uVar6;
    }
    if (*(char *)(*(long *)(param_1 + 0x20) + 0x14ef0) == '\0') {
      DAT_02763508 = DAT_02763508 + 1;
      if ((DAT_02763508 != 0) && (DAT_02763508 % 200 != 100)) {
        return uVar6;
      }
      if (*(int *)PTR_DAT_02713970 == 0) {
        return uVar6;
      }
      if (*(int *)PTR_DAT_027139c0 == 0) {
        return uVar6;
      }
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp(%d) : PPFX WARNING: ",
                   0x23d5);
      FUN_00517ae0("SetApertureFilterLevelVisualize() does not work properly.\n");
      return uVar6;
    }
    local_a0 = 0;
    local_98 = 0;
    uVar4 = FUN_0057e050(0,0,0,0x3f800000,plVar15,param_5,param_5,0,&local_80,0,0,0,
                         CONCAT44(uVar26,1),&local_a0,0,0xffffffff);
    break;
  default:
    return 0xffffffff;
  }
  return uVar4;
}


