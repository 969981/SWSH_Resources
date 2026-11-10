/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f405b0; name: FUN_00f405b0
 */


void FUN_00f405b0(long param_1,ulong param_2,float *param_3)

{
  int iVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [8];
  long local_70;
  undefined1 local_68;
  
  if (*(long *)(param_1 + 0xe8) != 0) {
    plVar14 = *(long **)(param_1 + 0xe0);
    bVar6 = false;
    bVar7 = false;
    iVar11 = 0;
    iVar12 = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    if ((param_2 & 1) == 0) {
      uStack_98 = 0;
      local_a0 = 0;
      iVar13 = iVar12;
      do {
        lVar9 = 0;
        if (*plVar14 != 0) {
          lVar9 = *(long *)(*plVar14 + 0x60);
          if (lVar9 == 0) {
            lVar9 = 0;
          }
          else {
            uVar8 = FUN_0156b540(lVar9);
            lVar9 = lVar9 + -0x50;
            if ((uVar8 & 1) == 0) {
              lVar9 = 0;
            }
          }
        }
        lVar9 = FUN_00f21fe0(lVar9 + 0x50);
        local_68 = 0;
        local_70 = lVar9;
        FUN_00f40f90(param_1 + 0x140,auStack_78);
        iVar1 = *(int *)(lVar9 + 0x930);
        iVar12 = iVar13;
        if (((iVar13 < iVar1) || (!bVar6)) && (*(char *)(lVar9 + 0x915) != '\0')) {
          uStack_98 = *(undefined8 *)(lVar9 + 0x928);
          local_a0 = *(undefined8 *)(lVar9 + 0x920);
          bVar7 = *(char *)(lVar9 + 0x914) != '\0';
          iVar12 = iVar1;
          if (iVar1 <= iVar13) {
            iVar12 = iVar13;
          }
          bVar6 = true;
        }
        if (iVar11 < *(int *)(lVar9 + 0x95c)) {
          uStack_88 = *(undefined8 *)(lVar9 + 0x978);
          local_90 = *(undefined8 *)(lVar9 + 0x970);
          iVar11 = *(int *)(lVar9 + 0x95c);
        }
        plVar10 = *(long **)(param_1 + 0xe0);
        lVar9 = *(long *)(param_1 + 0xe8);
        plVar14 = plVar14 + 1;
        iVar13 = iVar12;
      } while (plVar14 != plVar10 + lVar9);
    }
    else {
      uStack_98 = 0;
      local_a0 = 0;
      do {
        lVar9 = 0;
        if (*plVar14 != 0) {
          lVar9 = *(long *)(*plVar14 + 0x60);
          if (lVar9 == 0) {
            lVar9 = 0;
          }
          else {
            uVar8 = FUN_0156b540(lVar9);
            lVar9 = lVar9 + -0x50;
            if ((uVar8 & 1) == 0) {
              lVar9 = 0;
            }
          }
        }
        lVar9 = FUN_00f21fe0(lVar9 + 0x50);
        local_68 = 0;
        local_70 = lVar9;
        FUN_00f40f90(param_1 + 0x140,auStack_78);
        iVar13 = *(int *)(lVar9 + 0x930);
        if (((iVar12 < iVar13) || ((bool)(bVar6 ^ 1))) && (*(char *)(lVar9 + 0x915) != '\0')) {
          uStack_98 = *(undefined8 *)(lVar9 + 0x928);
          local_a0 = *(undefined8 *)(lVar9 + 0x920);
          bVar7 = *(char *)(lVar9 + 0x914) != '\0';
          if (iVar13 <= iVar12) {
            iVar13 = iVar12;
          }
          bVar6 = true;
          iVar12 = iVar13;
        }
        if (iVar11 < *(int *)(lVar9 + 0x95c)) {
          uStack_88 = *(undefined8 *)(lVar9 + 0x978);
          local_90 = *(undefined8 *)(lVar9 + 0x970);
          iVar11 = *(int *)(lVar9 + 0x95c);
        }
        plVar10 = *(long **)(param_1 + 0xe0);
        lVar9 = *(long *)(param_1 + 0xe8);
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar10 + lVar9);
    }
    plVar14 = plVar10;
    if ((bVar6) && (lVar9 != 0)) {
      if (iVar12 < 1) {
        do {
          lVar9 = 0;
          if (*plVar10 == 0) {
LAB_00f40844:
            lVar9 = FUN_00f21fe0(lVar9 + 0x50);
            cVar2 = *(char *)(lVar9 + 0x915);
          }
          else {
            lVar9 = *(long *)(*plVar10 + 0x60);
            if (lVar9 != 0) {
              uVar8 = FUN_0156b540(lVar9);
              lVar9 = lVar9 + -0x50;
              if ((uVar8 & 1) == 0) {
                lVar9 = 0;
              }
              goto LAB_00f40844;
            }
            lVar9 = FUN_00f21fe0(0x50);
            cVar2 = *(char *)(lVar9 + 0x915);
          }
          if (cVar2 == '\0') {
            *(undefined1 *)(lVar9 + 0x958) = 1;
            *(undefined8 *)(lVar9 + 0x928) = uStack_98;
            *(undefined8 *)(lVar9 + 0x920) = local_a0;
            fVar15 = (float)*(undefined8 *)(lVar9 + 0xb0) - *param_3;
            fVar16 = (float)((ulong)*(undefined8 *)(lVar9 + 0xb0) >> 0x20) - param_3[1];
            fVar17 = (float)*(undefined8 *)(lVar9 + 0xb8) - param_3[2];
            fVar18 = (float)((ulong)*(undefined8 *)(lVar9 + 0xb8) >> 0x20) - param_3[3];
            fVar15 = fVar15 * fVar15;
            fVar16 = fVar16 * fVar16;
            fVar17 = fVar17 * fVar17;
            fVar18 = fVar18 * fVar18;
            auVar19._4_4_ = fVar16;
            auVar19._0_4_ = fVar15;
            auVar19._8_4_ = fVar17;
            auVar19._12_4_ = fVar18;
            auVar5._4_4_ = fVar16;
            auVar5._0_4_ = fVar15;
            auVar5._8_4_ = fVar17;
            auVar5._12_4_ = fVar18;
            auVar19 = NEON_ext(auVar19,auVar5,8,1);
            if (!(bool)(SQRT(auVar19._0_4_ + fVar15 + auVar19._4_4_ + fVar16) <=
                        *(float *)(lVar9 + 0x8c8) | bVar7 ^ 1U)) {
              *(undefined1 *)(lVar9 + 0x915) = 1;
            }
          }
          plVar14 = *(long **)(param_1 + 0xe0);
          lVar9 = *(long *)(param_1 + 0xe8);
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar14 + lVar9);
      }
      else {
        do {
          lVar9 = 0;
          if (*plVar10 != 0) {
            lVar9 = *(long *)(*plVar10 + 0x60);
            if (lVar9 == 0) {
              lVar9 = 0;
            }
            else {
              uVar8 = FUN_0156b540(lVar9);
              lVar9 = lVar9 + -0x50;
              if ((uVar8 & 1) == 0) {
                lVar9 = 0;
              }
            }
          }
          lVar9 = FUN_00f21fe0(lVar9 + 0x50);
          *(undefined1 *)(lVar9 + 0x958) = 1;
          *(undefined8 *)(lVar9 + 0x928) = uStack_98;
          *(undefined8 *)(lVar9 + 0x920) = local_a0;
          fVar15 = (float)*(undefined8 *)(lVar9 + 0xb0) - *param_3;
          fVar16 = (float)((ulong)*(undefined8 *)(lVar9 + 0xb0) >> 0x20) - param_3[1];
          fVar17 = (float)*(undefined8 *)(lVar9 + 0xb8) - param_3[2];
          fVar18 = (float)((ulong)*(undefined8 *)(lVar9 + 0xb8) >> 0x20) - param_3[3];
          fVar15 = fVar15 * fVar15;
          fVar16 = fVar16 * fVar16;
          fVar17 = fVar17 * fVar17;
          fVar18 = fVar18 * fVar18;
          auVar3._4_4_ = fVar16;
          auVar3._0_4_ = fVar15;
          auVar3._8_4_ = fVar17;
          auVar3._12_4_ = fVar18;
          auVar4._4_4_ = fVar16;
          auVar4._0_4_ = fVar15;
          auVar4._8_4_ = fVar17;
          auVar4._12_4_ = fVar18;
          auVar19 = NEON_ext(auVar3,auVar4,8,1);
          if (*(float *)(lVar9 + 0x8c8) < SQRT(auVar19._0_4_ + fVar15 + auVar19._4_4_ + fVar16) &&
              bVar7) {
            *(undefined1 *)(lVar9 + 0x915) = 1;
          }
          plVar14 = *(long **)(param_1 + 0xe0);
          lVar9 = *(long *)(param_1 + 0xe8);
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar14 + lVar9);
      }
    }
    if (((0 < iVar11) && (iVar12 == 0)) && (lVar9 != 0)) {
      do {
        lVar9 = 0;
        if (*plVar14 == 0) {
LAB_00f4091c:
          lVar9 = FUN_00f21fe0(lVar9 + 0x50);
          iVar12 = *(int *)(lVar9 + 0x95c);
        }
        else {
          lVar9 = *(long *)(*plVar14 + 0x60);
          if (lVar9 != 0) {
            uVar8 = FUN_0156b540(lVar9);
            lVar9 = lVar9 + -0x50;
            if ((uVar8 & 1) == 0) {
              lVar9 = 0;
            }
            goto LAB_00f4091c;
          }
          lVar9 = FUN_00f21fe0(0x50);
          iVar12 = *(int *)(lVar9 + 0x95c);
        }
        if (iVar12 == 0) {
          *(int *)(lVar9 + 0x95c) = iVar11;
          *(undefined8 *)(lVar9 + 0x978) = uStack_88;
          *(undefined8 *)(lVar9 + 0x970) = local_90;
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != (long *)(*(long *)(param_1 + 0xe0) + *(long *)(param_1 + 0xe8) * 8));
    }
  }
  return;
}


