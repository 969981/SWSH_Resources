/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b5bf0; name: FUN_005b5bf0
 */


undefined8 FUN_005b5bf0(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  puVar3 = PTR_DAT_027139b0;
  iVar8 = *(int *)PTR_DAT_027139b0;
  if (iVar8 < 1) {
    plVar18 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar18,0);
    *(long **)PTR_DAT_027139b8 = plVar18;
    *(undefined4 *)puVar3 = 1;
joined_r0x005b5ce8:
    if (plVar18 == (long *)0x0) {
      *(undefined4 *)puVar3 = 0;
      iVar8 = *(int *)(param_1 + 0x208);
      goto joined_r0x005b5cfc;
    }
    uVar13 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar18 + 0x20))(plVar18);
    FUN_005b9b10(uVar13,plVar18);
    iVar8 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
  else {
    plVar18 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar8 + 1;
    if (iVar8 + 1 < 2) goto joined_r0x005b5ce8;
  }
  *(int *)puVar3 = iVar8;
  iVar8 = *(int *)(param_1 + 0x208);
joined_r0x005b5cfc:
  if (0 < iVar8) {
    uVar20 = 0;
    do {
      if (((1 < uVar20) && (*(char *)(param_1 + 0x12d) != '\0')) &&
         (uVar1 = (int)uVar20 + 0x7ffffffe, (uVar1 & 0x7fffffff) < 5)) {
        lVar9 = *(long *)(&DAT_020f1d90 + ((long)((ulong)uVar1 << 0x21) >> 0x21) * 8);
        lVar12 = *(long *)(param_1 + 0x4a8);
        if (*(float *)(param_1 + 0x1dc) == 0.0) {
          lVar14 = *(long *)(*(long *)(param_1 + 0x450) + lVar9 * 8);
LAB_005b5d84:
          lVar21 = *(long *)(*(long *)(param_1 + 0x448) + lVar9 * 8);
        }
        else {
          lVar14 = *(long *)(*(long *)(param_1 + 0x470) + lVar9 * 8);
          if (lVar14 == 0) {
            lVar14 = *(long *)(*(long *)(param_1 + 0x450) + lVar9 * 8);
            lVar21 = *(long *)(*(long *)(param_1 + 0x468) + lVar9 * 8);
          }
          else {
            lVar21 = *(long *)(*(long *)(param_1 + 0x468) + lVar9 * 8);
          }
          if (lVar21 == 0) goto LAB_005b5d84;
        }
        fVar22 = *(float *)(param_1 + 0x168) + -1.0;
        lVar9 = lVar12 + uVar20 * 0x108;
        lVar15 = *(long *)(lVar9 + 0xa8);
        bVar4 = 1.0 <= fVar22;
        if (2.0 < fVar22) {
          fVar22 = 2.0;
        }
        fVar23 = 1.0;
        if (bVar4) {
          fVar23 = fVar22;
        }
        if ((long)uVar20 < (long)*(int *)(param_1 + 0x20c)) {
          lVar16 = *(long *)(lVar9 + 0xa0);
          FUN_0059d300(lVar16,0,0,1,0,0);
          plVar7 = (long *)(lVar12 + uVar20 * 0x108 + 0xb0);
          lVar9 = lVar16;
          uVar19 = uVar20;
LAB_005b5e14:
          uVar1 = *(uint *)(lVar9 + 0x54);
          uVar2 = uVar1 * 2 - 2;
          fVar22 = (float)uVar1 - (float)*(uint *)(lVar14 + 0x54);
          if (fVar22 <= 0.0) {
            fVar22 = -fVar22;
          }
          lVar10 = uVar19 * 0x108 + -0xa0;
          lVar17 = lVar9;
LAB_005b5e48:
          if (((uVar1 < *(uint *)(lVar14 + 0x54)) ||
              (*(uint *)(lVar9 + 0x58) < *(uint *)(lVar14 + 0x58))) && (2.0 < fVar22))
          goto code_r0x005b5e68;
          (**(code **)(**(long **)(param_1 + 0x20) + 0x160))(*(long **)(param_1 + 0x20),2);
          (**(code **)(**(long **)(param_1 + 0x20) + 0x168))(*(long **)(param_1 + 0x20),1);
          fVar24 = (float)NEON_ucvtf(*(undefined4 *)(lVar14 + 0x58));
          fVar22 = (float)NEON_ucvtf(*(undefined4 *)(lVar14 + 0x54));
          if (*(char *)(param_1 + 0x174) == '\0') {
            local_a8 = 0x3f8000003f800000;
            uStack_a0 = 0x3f8000003f800000;
          }
          else {
            local_a8 = (&DAT_027636b8)[uVar20 * 2];
            uStack_a0 = (&DAT_027636c0)[uVar20 * 2];
          }
          uVar5 = NEON_ucvtf(*(undefined4 *)(lVar17 + 0x54));
          uVar26 = NEON_ucvtf(*(undefined4 *)(lVar17 + 0x58));
          lVar10 = lVar14;
          do {
            lVar11 = lVar10;
            lVar10 = *(long *)(lVar11 + 0x120);
          } while (lVar10 != 0);
          FUN_00575a10(0,0,uVar5,uVar26,0,0,
                       *(float *)(lVar14 + 0x88) * fVar22 + *(float *)(lVar14 + 0x90),
                       *(float *)(lVar14 + 0x8c) * fVar24 + *(float *)(lVar14 + 0x94),plVar18,1,0,
                       &local_a8,*(undefined8 *)(lVar11 + 0xa8),0,0);
          (**(code **)(**(long **)(param_1 + 0x20) + 0x160))(*(long **)(param_1 + 0x20),0);
          (**(code **)(**(long **)(param_1 + 0x20) + 0x168))(*(long **)(param_1 + 0x20),0);
          lVar14 = *plVar7;
          if (lVar14 == 0) {
            if (lVar17 != lVar16) {
              local_b8 = 0x3f8000003f800000;
              uStack_b0 = 0x3f8000003f800000;
              local_c8 = 0;
              uStack_c0 = 0;
              FUN_0057e050(0,0,0,0x3f800000,plVar18,lVar17,lVar16,0,&local_b8,0,0,0,1,&local_c8,0,
                           0xffffffff);
            }
          }
          else if (lVar17 != lVar14) {
            lVar16 = lVar9;
            do {
              lVar17 = lVar16;
              lVar16 = *(long *)(lVar17 + 0x120);
            } while (lVar16 != 0);
            uVar5 = (**(code **)(**(long **)(lVar17 + 0xa8) + 0x80))();
            lVar16 = lVar9;
            do {
              lVar17 = lVar16;
              lVar16 = *(long *)(lVar17 + 0x120);
            } while (lVar16 != 0);
            plVar7 = *(long **)(lVar17 + 0xa8);
            (**(code **)(*plVar7 + 0x78))(plVar7,8);
            local_b8 = 0x3f8000003f800000;
            uStack_b0 = 0x3f8000003f800000;
            local_c8 = 0;
            uStack_c0 = 0;
            fVar24 = fVar23 * (*(float *)(lVar12 + uVar20 * 0x108 + 0x2c) * 0.25 + 0.25);
            fVar22 = fVar24;
            if (1.0 < fVar24) {
              fVar22 = 1.0;
            }
            fVar25 = 0.0;
            if (0.0 <= fVar24) {
              fVar25 = fVar22;
            }
            FUN_0057e050(0,0,fVar25,0x3f800000,plVar18,lVar9,lVar14,0,&local_b8,0,0,0,1,&local_c8,0,
                         0xffffffff);
            do {
              lVar14 = lVar9;
              lVar9 = *(long *)(lVar14 + 0x120);
            } while (lVar9 != 0);
            plVar7 = *(long **)(lVar14 + 0xa8);
            (**(code **)(*plVar7 + 0x78))(plVar7,uVar5);
          }
        }
        if ((long)uVar20 < (long)*(int *)(param_1 + 0x210)) {
          FUN_0059d300(lVar15,0,0,1,0,0);
          plVar7 = (long *)(lVar12 + uVar20 * 0x108 + 0xb8);
          uVar19 = uVar20;
          lVar9 = lVar15;
LAB_005b6218:
          uVar1 = *(uint *)(lVar9 + 0x54);
          uVar2 = uVar1 * 2 - 2;
          fVar22 = (float)uVar1 - (float)*(uint *)(lVar21 + 0x54);
          if (fVar22 <= 0.0) {
            fVar22 = -fVar22;
          }
          lVar16 = uVar19 * 0x108 + -0xa0;
          lVar14 = lVar9;
LAB_005b624c:
          if (((uVar1 < *(uint *)(lVar21 + 0x54)) ||
              (*(uint *)(lVar9 + 0x58) < *(uint *)(lVar21 + 0x58))) && (2.0 < fVar22))
          goto code_r0x005b626c;
          (**(code **)(**(long **)(param_1 + 0x20) + 0x160))(*(long **)(param_1 + 0x20),2);
          (**(code **)(**(long **)(param_1 + 0x20) + 0x168))(*(long **)(param_1 + 0x20),1);
          fVar24 = (float)NEON_ucvtf(*(undefined4 *)(lVar21 + 0x58));
          fVar22 = (float)NEON_ucvtf(*(undefined4 *)(lVar21 + 0x54));
          if (*(char *)(param_1 + 0x174) == '\0') {
            local_a8 = 0x3f8000003f800000;
            uStack_a0 = 0x3f8000003f800000;
          }
          else {
            local_a8 = (&DAT_027636b8)[uVar20 * 2];
            uStack_a0 = (&DAT_027636c0)[uVar20 * 2];
          }
          uVar5 = NEON_ucvtf(*(undefined4 *)(lVar14 + 0x54));
          uVar26 = NEON_ucvtf(*(undefined4 *)(lVar14 + 0x58));
          lVar16 = lVar21;
          do {
            lVar17 = lVar16;
            lVar16 = *(long *)(lVar17 + 0x120);
          } while (lVar16 != 0);
          FUN_00575a10(0,0,uVar5,uVar26,0,0,
                       *(float *)(lVar21 + 0x88) * fVar22 + *(float *)(lVar21 + 0x90),
                       *(float *)(lVar21 + 0x8c) * fVar24 + *(float *)(lVar21 + 0x94),plVar18,1,0,
                       &local_a8,*(undefined8 *)(lVar17 + 0xa8),0,0);
          (**(code **)(**(long **)(param_1 + 0x20) + 0x160))(*(long **)(param_1 + 0x20),0);
          (**(code **)(**(long **)(param_1 + 0x20) + 0x168))(*(long **)(param_1 + 0x20),0);
          lVar21 = *plVar7;
          if (lVar21 == 0) {
            if (lVar14 != lVar15) {
              local_b8 = 0x3f8000003f800000;
              uStack_b0 = 0x3f8000003f800000;
              local_c8 = 0;
              uStack_c0 = 0;
              FUN_0057e050(0,0,0,0x3f800000,plVar18,lVar14,lVar15,0,&local_b8,0,0,0,1,&local_c8,0,
                           0xffffffff);
            }
          }
          else if (lVar14 != lVar21) {
            lVar14 = lVar9;
            do {
              lVar15 = lVar14;
              lVar14 = *(long *)(lVar15 + 0x120);
            } while (lVar14 != 0);
            uVar5 = (**(code **)(**(long **)(lVar15 + 0xa8) + 0x80))();
            lVar14 = lVar9;
            do {
              lVar15 = lVar14;
              lVar14 = *(long *)(lVar15 + 0x120);
            } while (lVar14 != 0);
            plVar7 = *(long **)(lVar15 + 0xa8);
            (**(code **)(*plVar7 + 0x78))(plVar7,8);
            local_b8 = 0x3f8000003f800000;
            uStack_b0 = 0x3f8000003f800000;
            local_c8 = 0;
            uStack_c0 = 0;
            fVar23 = fVar23 * (*(float *)(lVar12 + uVar20 * 0x108 + 0x2c) * 0.25 + 0.25);
            fVar22 = fVar23;
            if (1.0 < fVar23) {
              fVar22 = 1.0;
            }
            fVar24 = 0.0;
            if (0.0 <= fVar23) {
              fVar24 = fVar22;
            }
            FUN_0057e050(0,0,fVar24,0x3f800000,plVar18,lVar9,lVar21,0,&local_b8,0,0,0,1,&local_c8,0,
                         0xffffffff);
            do {
              lVar12 = lVar9;
              lVar9 = *(long *)(lVar12 + 0x120);
            } while (lVar9 != 0);
            plVar7 = *(long **)(lVar12 + 0xa8);
            (**(code **)(*plVar7 + 0x78))(plVar7,uVar5);
          }
        }
      }
      uVar20 = uVar20 + 1;
    } while ((long)uVar20 < (long)*(int *)(param_1 + 0x208));
  }
  return 0;
code_r0x005b5e68:
  lVar17 = **(long **)(*(long *)(param_1 + 0x4a8) + lVar10);
  lVar11 = *plVar7;
  uVar19 = uVar19 - 1;
  if ((lVar11 != 0) &&
     (*(uint *)(lVar11 + 0x54) <= uVar1 * 2 + 2 && uVar2 <= *(uint *)(lVar11 + 0x54))) {
    lVar17 = lVar11;
  }
  lVar10 = lVar10 + -0x108;
  if (uVar2 <= *(uint *)(lVar17 + 0x54)) goto code_r0x005b5ea0;
  goto LAB_005b5e48;
code_r0x005b5ea0:
  lVar10 = lVar9;
  do {
    lVar11 = lVar10;
    lVar10 = *(long *)(lVar11 + 0x120);
  } while (lVar10 != 0);
  uVar5 = (**(code **)(**(long **)(lVar11 + 0xa8) + 0x80))();
  lVar10 = lVar9;
  do {
    lVar11 = lVar10;
    lVar10 = *(long *)(lVar11 + 0x120);
  } while (lVar10 != 0);
  plVar6 = *(long **)(lVar11 + 0xa8);
  (**(code **)(*plVar6 + 0x78))(plVar6,8);
  local_a8 = 0x3f8000003f800000;
  uStack_a0 = 0x3f8000003f800000;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_0057e050(0,0,0x3f800000,0x3f800000,plVar18,lVar9,lVar17,0,&local_a8,0,0,0,1,&local_b8,0,
               0xffffffff);
  do {
    lVar10 = lVar9;
    lVar9 = *(long *)(lVar10 + 0x120);
  } while (lVar9 != 0);
  plVar6 = *(long **)(lVar10 + 0xa8);
  (**(code **)(*plVar6 + 0x78))(plVar6,uVar5);
  lVar9 = lVar17;
  goto LAB_005b5e14;
code_r0x005b626c:
  lVar14 = **(long **)(*(long *)(param_1 + 0x4a8) + lVar16);
  lVar17 = *plVar7;
  uVar19 = uVar19 - 1;
  if ((lVar17 != 0) &&
     (*(uint *)(lVar17 + 0x54) <= uVar1 * 2 + 2 && uVar2 <= *(uint *)(lVar17 + 0x54))) {
    lVar14 = lVar17;
  }
  lVar16 = lVar16 + -0x108;
  if (uVar2 <= *(uint *)(lVar14 + 0x54)) goto code_r0x005b62a4;
  goto LAB_005b624c;
code_r0x005b62a4:
  lVar16 = lVar9;
  do {
    lVar17 = lVar16;
    lVar16 = *(long *)(lVar17 + 0x120);
  } while (lVar16 != 0);
  uVar5 = (**(code **)(**(long **)(lVar17 + 0xa8) + 0x80))();
  lVar16 = lVar9;
  do {
    lVar17 = lVar16;
    lVar16 = *(long *)(lVar17 + 0x120);
  } while (lVar16 != 0);
  plVar6 = *(long **)(lVar17 + 0xa8);
  (**(code **)(*plVar6 + 0x78))(plVar6,8);
  local_a8 = 0x3f8000003f800000;
  uStack_a0 = 0x3f8000003f800000;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_0057e050(0,0,0x3f800000,0x3f800000,plVar18,lVar9,lVar14,0,&local_a8,0,0,0,1,&local_b8,0,
               0xffffffff);
  do {
    lVar16 = lVar9;
    lVar9 = *(long *)(lVar16 + 0x120);
  } while (lVar9 != 0);
  plVar6 = *(long **)(lVar16 + 0xa8);
  (**(code **)(*plVar6 + 0x78))(plVar6,uVar5);
  lVar9 = lVar14;
  goto LAB_005b6218;
}


