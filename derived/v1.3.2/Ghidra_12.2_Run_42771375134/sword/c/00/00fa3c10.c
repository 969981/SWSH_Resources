/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa3c10; name: FUN_00fa3c10
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_00fa3c10(long *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  float fVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined1 auVar22 [16];
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined1 auStack_68 [8];
  
  lVar13 = *(long *)PTR_DAT_027194d8;
  plVar11 = (long *)FUN_00df1bc0(lVar13,auStack_68);
  if (plVar11 != (long *)0x0) {
    uVar20 = param_2[1];
    uVar18 = *param_2;
    lVar21 = plVar11[0x17];
    lVar19 = plVar11[0x16];
    fVar17 = (float)(**(code **)(*plVar11 + 0x130))(plVar11);
    if (0.0 < fVar17) {
      local_90 = (float)lVar19;
      fStack_8c = (float)((ulong)lVar19 >> 0x20);
      fStack_88 = (float)lVar21;
      fStack_84 = (float)((ulong)lVar21 >> 0x20);
      local_90 = (float)uVar18 - local_90;
      fStack_8c = (float)((ulong)uVar18 >> 0x20) - fStack_8c;
      fStack_88 = (float)uVar20 - fStack_88;
      fStack_84 = (float)((ulong)uVar20 >> 0x20) - fStack_84;
      local_90 = local_90 * local_90;
      fStack_8c = fStack_8c * fStack_8c;
      fStack_88 = fStack_88 * fStack_88;
      fStack_84 = fStack_84 * fStack_84;
      auVar22._4_4_ = fStack_8c;
      auVar22._0_4_ = local_90;
      auVar22._8_4_ = fStack_88;
      auVar22._12_4_ = fStack_84;
      auVar2._4_4_ = fStack_8c;
      auVar2._0_4_ = local_90;
      auVar2._8_4_ = fStack_88;
      auVar2._12_4_ = fStack_84;
      auVar22 = NEON_ext(auVar22,auVar2,8,1);
      if (auVar22._0_4_ + local_90 + auVar22._4_4_ + fStack_8c <= fVar17 * 5.0 * fVar17 * 5.0) {
        return false;
      }
    }
  }
  plVar16 = *(long **)(lVar13 + 0xb0);
  plVar14 = *(long **)(lVar13 + 0xb8);
  bVar1 = true;
  if (plVar16 == plVar14) {
    return true;
  }
  if (plVar11 == (long *)0x0) {
    do {
      if (((*(byte *)(*plVar16 + 0x38c) >> 3 & 1) != 0) &&
         (uVar12 = (**(code **)(*(long *)*plVar16 + 0x88))(), (uVar12 & 1) == 0)) {
        plVar11 = (long *)*plVar16;
        uVar12 = FUN_01593610(plVar11 + 10);
        if ((uVar12 & 1) != 0) {
          if (bVar1) {
            if (*param_1 != plVar11[0x34]) {
              uVar20 = param_2[1];
              uVar18 = *param_2;
              lVar21 = plVar11[0x17];
              lVar19 = plVar11[0x16];
              fVar17 = (float)(**(code **)(*plVar11 + 0x130))(plVar11);
              if (0.0 < fVar17) {
                local_90 = (float)lVar19;
                fStack_8c = (float)((ulong)lVar19 >> 0x20);
                fStack_88 = (float)lVar21;
                fStack_84 = (float)((ulong)lVar21 >> 0x20);
                local_90 = (float)uVar18 - local_90;
                fStack_8c = (float)((ulong)uVar18 >> 0x20) - fStack_8c;
                fStack_88 = (float)uVar20 - fStack_88;
                fStack_84 = (float)((ulong)uVar20 >> 0x20) - fStack_84;
                local_90 = local_90 * local_90;
                fStack_8c = fStack_8c * fStack_8c;
                fStack_88 = fStack_88 * fStack_88;
                fStack_84 = fStack_84 * fStack_84;
                auVar9._4_4_ = fStack_8c;
                auVar9._0_4_ = local_90;
                auVar9._8_4_ = fStack_88;
                auVar9._12_4_ = fStack_84;
                auVar10._4_4_ = fStack_8c;
                auVar10._0_4_ = local_90;
                auVar10._8_4_ = fStack_88;
                auVar10._12_4_ = fStack_84;
                auVar22 = NEON_ext(auVar9,auVar10,8,1);
                bVar1 = fVar17 * 1.5 * fVar17 * 1.5 <
                        auVar22._0_4_ + local_90 + auVar22._4_4_ + fStack_8c;
              }
              else {
                bVar1 = true;
              }
            }
          }
          else {
            bVar1 = false;
          }
        }
      }
      plVar16 = plVar16 + 1;
    } while (plVar14 != plVar16);
  }
  else {
    do {
      if (((*(byte *)(*plVar16 + 0x38c) >> 3 & 1) != 0) &&
         (uVar12 = (**(code **)(*(long *)*plVar16 + 0x88))(), (uVar12 & 1) == 0)) {
        plVar15 = (long *)*plVar16;
        uVar12 = FUN_01593610(plVar15 + 10);
        if ((uVar12 & 1) != 0) {
          if (bVar1) {
            if ((plVar11[0x34] != plVar15[0x34]) && (*param_1 != plVar15[0x34])) {
              uVar20 = param_2[1];
              uVar18 = *param_2;
              lVar21 = plVar15[0x17];
              lVar19 = plVar15[0x16];
              fVar17 = (float)(**(code **)(*plVar15 + 0x130))(plVar15);
              if (0.0 < fVar17) {
                local_90 = (float)lVar19;
                fStack_8c = (float)((ulong)lVar19 >> 0x20);
                fStack_88 = (float)lVar21;
                fStack_84 = (float)((ulong)lVar21 >> 0x20);
                local_90 = (float)uVar18 - local_90;
                fStack_8c = (float)((ulong)uVar18 >> 0x20) - fStack_8c;
                fStack_88 = (float)uVar20 - fStack_88;
                fStack_84 = (float)((ulong)uVar20 >> 0x20) - fStack_84;
                local_90 = local_90 * local_90;
                fStack_8c = fStack_8c * fStack_8c;
                fStack_88 = fStack_88 * fStack_88;
                fStack_84 = fStack_84 * fStack_84;
                auVar3._4_4_ = fStack_8c;
                auVar3._0_4_ = local_90;
                auVar3._8_4_ = fStack_88;
                auVar3._12_4_ = fStack_84;
                auVar4._4_4_ = fStack_8c;
                auVar4._0_4_ = local_90;
                auVar4._8_4_ = fStack_88;
                auVar4._12_4_ = fStack_84;
                auVar22 = NEON_ext(auVar3,auVar4,8,1);
                bVar1 = fVar17 * 1.5 * fVar17 * 1.5 <
                        auVar22._0_4_ + local_90 + auVar22._4_4_ + fStack_8c;
              }
              else {
                bVar1 = true;
              }
            }
          }
          else {
            bVar1 = false;
          }
        }
      }
      plVar16 = plVar16 + 1;
    } while (plVar14 != plVar16);
  }
  if (bVar1) {
    plVar11 = *(long **)(lVar13 + 0xb0);
    plVar16 = *(long **)(lVar13 + 0xb8);
    bVar1 = true;
    if (plVar11 == plVar16) {
      return true;
    }
LAB_00fa3e88:
    do {
      if ((*(char *)(*plVar11 + 0x38c) < '\0') &&
         (uVar12 = (**(code **)(*(long *)*plVar11 + 0x88))(), (uVar12 & 1) == 0)) {
        plVar14 = (long *)*plVar11;
        uVar12 = FUN_00ec9e10(plVar14 + 10);
        if ((uVar12 & 1) != 0) {
          if (!bVar1) {
            bVar1 = false;
            plVar11 = plVar11 + 1;
            if (plVar16 == plVar11) break;
            goto LAB_00fa3e88;
          }
          uVar20 = param_2[1];
          uVar18 = *param_2;
          lVar21 = plVar14[0x17];
          lVar19 = plVar14[0x16];
          fVar17 = (float)(**(code **)(*plVar14 + 0x130))(plVar14);
          if (0.0 < fVar17) {
            local_90 = (float)lVar19;
            fStack_8c = (float)((ulong)lVar19 >> 0x20);
            fStack_88 = (float)lVar21;
            fStack_84 = (float)((ulong)lVar21 >> 0x20);
            local_90 = (float)uVar18 - local_90;
            fStack_8c = (float)((ulong)uVar18 >> 0x20) - fStack_8c;
            fStack_88 = (float)uVar20 - fStack_88;
            fStack_84 = (float)((ulong)uVar20 >> 0x20) - fStack_84;
            local_90 = local_90 * local_90;
            fStack_8c = fStack_8c * fStack_8c;
            fStack_88 = fStack_88 * fStack_88;
            fStack_84 = fStack_84 * fStack_84;
            auVar5._4_4_ = fStack_8c;
            auVar5._0_4_ = local_90;
            auVar5._8_4_ = fStack_88;
            auVar5._12_4_ = fStack_84;
            auVar6._4_4_ = fStack_8c;
            auVar6._0_4_ = local_90;
            auVar6._8_4_ = fStack_88;
            auVar6._12_4_ = fStack_84;
            auVar22 = NEON_ext(auVar5,auVar6,8,1);
            bVar1 = fVar17 * 1.5 * fVar17 * 1.5 <
                    auVar22._0_4_ + local_90 + auVar22._4_4_ + fStack_8c;
          }
          else {
            bVar1 = true;
          }
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar16 != plVar11);
    if (bVar1) {
      plVar11 = *(long **)(lVar13 + 0xb0);
      plVar16 = *(long **)(lVar13 + 0xb8);
      bVar1 = true;
joined_r0x00fa3f54:
      if (plVar11 == plVar16) {
        return bVar1;
      }
      do {
        if (((*(byte *)(*plVar11 + 0x38c) >> 5 & 1) != 0) &&
           (uVar12 = (**(code **)(*(long *)*plVar11 + 0x88))(), (uVar12 & 1) == 0)) {
          plVar14 = (long *)*plVar11;
          uVar12 = FUN_00e87e30(plVar14 + 10);
          if ((uVar12 & 1) != 0) {
            if (!bVar1) goto LAB_00fa3ff0;
            uVar20 = param_2[1];
            uVar18 = *param_2;
            lVar19 = plVar14[0x17];
            lVar13 = plVar14[0x16];
            fVar17 = (float)(**(code **)(*plVar14 + 0x130))(plVar14);
            if (0.0 < fVar17) {
              local_90 = (float)lVar13;
              fStack_8c = (float)((ulong)lVar13 >> 0x20);
              fStack_88 = (float)lVar19;
              fStack_84 = (float)((ulong)lVar19 >> 0x20);
              local_90 = (float)uVar18 - local_90;
              fStack_8c = (float)((ulong)uVar18 >> 0x20) - fStack_8c;
              fStack_88 = (float)uVar20 - fStack_88;
              fStack_84 = (float)((ulong)uVar20 >> 0x20) - fStack_84;
              local_90 = local_90 * local_90;
              fStack_8c = fStack_8c * fStack_8c;
              fStack_88 = fStack_88 * fStack_88;
              fStack_84 = fStack_84 * fStack_84;
              auVar7._4_4_ = fStack_8c;
              auVar7._0_4_ = local_90;
              auVar7._8_4_ = fStack_88;
              auVar7._12_4_ = fStack_84;
              auVar8._4_4_ = fStack_8c;
              auVar8._0_4_ = local_90;
              auVar8._8_4_ = fStack_88;
              auVar8._12_4_ = fStack_84;
              auVar22 = NEON_ext(auVar7,auVar8,8,1);
              bVar1 = fVar17 * 1.5 * fVar17 * 1.5 <
                      auVar22._0_4_ + local_90 + auVar22._4_4_ + fStack_8c;
            }
            else {
              bVar1 = true;
            }
          }
        }
        plVar11 = plVar11 + 1;
        if (plVar16 == plVar11) {
          return bVar1;
        }
      } while( true );
    }
  }
  return false;
LAB_00fa3ff0:
  bVar1 = false;
  plVar11 = plVar11 + 1;
  goto joined_r0x00fa3f54;
}


