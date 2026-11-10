/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001321b0; name: FUN_001321b0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_001321b0(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,byte param_5,
                 long *param_6,undefined8 param_7)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  undefined8 *puVar13;
  float *pfVar14;
  long lVar15;
  uint uVar16;
  uint *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined8 uVar29;
  ulong local_80;
  uint local_70 [2];
  ulong local_68;
  
  *(undefined8 *)(param_1 + 0x1c8) = param_4;
  *(undefined8 *)(param_1 + 0x1d0) = param_7;
  *(byte *)(param_1 + 0x1dd) = *(char *)(param_1 + 0x1dd) != '\0' | param_5 & 1;
  if (1 < param_2) {
    *(long *)(param_1 + 0x30) = param_1;
    *(uint *)(param_1 + 0x38) = param_2;
    *(undefined8 *)(param_1 + 0x40) = param_4;
    *(undefined8 *)(param_1 + 0x48) = param_7;
    *(undefined4 *)(param_1 + 0x28) = 1;
    *(long **)(param_1 + 0x20) = param_6;
    if (param_6 != (long *)0x0) {
      (**(code **)(*param_6 + 0x20))(param_6);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    }
  }
  lVar1 = param_1 + 0xd0;
  if (*(uint *)(param_1 + 0xe0) < (*(uint *)(param_1 + 0xe4) >> 1 & 0x3fffffff)) {
    local_68 = local_68 & 0xffffffff00000000;
    FUN_00135330(lVar1,0,&local_68);
    FUN_00135410(lVar1,*(undefined4 *)(param_1 + 0xe0));
    lVar18 = *(long *)(param_1 + 0x50);
    puVar6 = PTR_DAT_02710c28;
  }
  else {
    *(undefined4 *)(param_1 + 0xe0) = 0;
    lVar18 = *(long *)(param_1 + 0x50);
    puVar6 = PTR_DAT_02710c28;
  }
  PTR_DAT_02710c28 = puVar6;
  if (lVar18 != 0) {
    uVar10 = *(uint *)(param_1 + 0x58) & 0x7fffffff;
    if (uVar10 != 0) {
      iVar9 = uVar10 * -0x20;
      uVar10 = uVar10 - 1;
      do {
        iVar9 = iVar9 + 0x20;
        uVar16 = *(uint *)(lVar18 + (ulong)uVar10 * 4);
        if (uVar16 != 0) {
          uVar16 = uVar16 | uVar16 >> 1;
          uVar16 = uVar16 | uVar16 >> 2;
          uVar16 = uVar16 | uVar16 >> 4;
          uVar16 = uVar16 | uVar16 >> 8;
          uVar10 = *(int *)(PTR_DAT_02710cb8 +
                           (ulong)((uVar16 | uVar16 >> 0x10) * 0x7c4acdd >> 0x1b) * 4) - iVar9;
          goto LAB_00132314;
        }
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0xffffffff);
    }
    uVar10 = 0;
LAB_00132314:
    uVar19 = 0;
    do {
      uVar16 = *(uint *)(lVar18 + uVar19 * 4);
      if (uVar16 != 0) {
        do {
          while( true ) {
            uVar3 = *(uint *)(puVar6 + (ulong)((uVar16 & -uVar16) * 0x77cb531 >> 0x1b) * 4) |
                    (int)uVar19 << 5;
            local_68 = CONCAT44(local_68._4_4_,uVar3);
            if ((*(uint *)(param_1 + 0xe4) & 0x7fffffff) <= *(uint *)(param_1 + 0xe0)) break;
            *(uint *)(*(long *)(param_1 + 0xd8) + (ulong)*(uint *)(param_1 + 0xe0) * 4) = uVar3;
            *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
            uVar16 = uVar16 - 1 & uVar16;
            if (uVar16 == 0) goto LAB_0013239c;
          }
          FUN_001351d0(lVar1,&local_68);
          uVar16 = uVar16 - 1 & uVar16;
        } while (uVar16 != 0);
      }
LAB_0013239c:
      uVar19 = uVar19 + 1;
    } while (uVar19 != (uVar10 >> 5) + 1);
  }
  lVar1 = param_1 + 0xe8;
  if (*(uint *)(param_1 + 0xf8) < (*(uint *)(param_1 + 0xfc) >> 1 & 0x3fffffff)) {
    local_68 = local_68 & 0xffffffff00000000;
    FUN_00135330(lVar1,0,&local_68);
    FUN_00135410(lVar1,*(undefined4 *)(param_1 + 0xf8));
    cVar2 = *(char *)(param_1 + 0x1dc);
    puVar6 = PTR_DAT_02710c28;
  }
  else {
    *(undefined4 *)(param_1 + 0xf8) = 0;
    cVar2 = *(char *)(param_1 + 0x1dc);
    puVar6 = PTR_DAT_02710c28;
  }
  PTR_DAT_02710c28 = puVar6;
  if (cVar2 == '\0') {
    lVar18 = *(long *)(param_1 + 0x70);
    if (lVar18 == 0) {
      uVar10 = *(uint *)(param_1 + 0x200);
    }
    else {
      uVar10 = *(uint *)(param_1 + 0x78) & 0x7fffffff;
      if (uVar10 == 0) {
        local_80 = 1;
      }
      else {
        iVar9 = uVar10 * -0x20;
        uVar10 = uVar10 - 1;
        local_80 = 1;
        do {
          iVar9 = iVar9 + 0x20;
          uVar16 = *(uint *)(lVar18 + (ulong)uVar10 * 4);
          if (uVar16 != 0) {
            uVar16 = uVar16 | uVar16 >> 1;
            uVar16 = uVar16 | uVar16 >> 2;
            uVar16 = uVar16 | uVar16 >> 4;
            uVar16 = uVar16 | uVar16 >> 8;
            local_80 = (ulong)(((uint)(*(int *)(PTR_DAT_02710cb8 +
                                               (ulong)((uVar16 | uVar16 >> 0x10) * 0x7c4acdd >> 0x1b
                                                      ) * 4) - iVar9) >> 5) + 1);
            break;
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0xffffffff);
      }
      uVar19 = 0;
      do {
        uVar10 = *(uint *)(lVar18 + uVar19 * 4);
        if (uVar10 != 0) {
          do {
            while( true ) {
              local_70[0] = *(uint *)(puVar6 + (ulong)((uVar10 & -uVar10) * 0x77cb531 >> 0x1b) * 4)
                            | (int)uVar19 << 5;
              if ((*(uint *)(*(long *)(param_1 + 0x50) + (ulong)(local_70[0] >> 5) * 4) &
                  1 << (ulong)(*(uint *)(puVar6 + (ulong)((uVar10 & -uVar10) * 0x77cb531 >> 0x1b) *
                                                  4) & 0x1f)) == 0) break;
joined_r0x001325a4:
              uVar10 = uVar10 - 1 & uVar10;
              if (uVar10 == 0) goto LAB_001325e0;
            }
            uVar16 = *(uint *)(*(long *)(param_1 + 0xb0) + (ulong)local_70[0] * 0x10 + 8);
            if (uVar16 == 0xffffffff) {
              if (*(uint *)(param_1 + 0xf8) < (*(uint *)(param_1 + 0xfc) & 0x7fffffff)) {
                *(uint *)(*(long *)(param_1 + 0xf0) + (ulong)*(uint *)(param_1 + 0xf8) * 4) =
                     local_70[0];
                *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
              }
              else {
                FUN_001351d0(lVar1,local_70);
              }
              goto joined_r0x001325a4;
            }
            uVar20 = *(ulong *)(*(long *)(param_1 + 0x1e8) + (ulong)(uVar16 >> 1) * 8);
            if (*(int *)(uVar20 + 0x20) != -1) goto joined_r0x001325a4;
            uVar16 = *(uint *)(param_1 + 0x200);
            *(uint *)(uVar20 + 0x20) = uVar16;
            local_68 = uVar20;
            if (uVar16 < (*(uint *)(param_1 + 0x204) & 0x7fffffff)) {
              *(ulong *)(*(long *)(param_1 + 0x1f8) + (ulong)uVar16 * 8) = uVar20;
              *(uint *)(param_1 + 0x200) = uVar16 + 1;
              goto joined_r0x001325a4;
            }
            FUN_00134780((long *)(param_1 + 0x1f8),&local_68);
            uVar10 = uVar10 - 1 & uVar10;
          } while (uVar10 != 0);
        }
LAB_001325e0:
        uVar19 = uVar19 + 1;
      } while (uVar19 != local_80);
      uVar10 = *(uint *)(param_1 + 0x200);
    }
    if (uVar10 != 0) {
      uVar19 = 0;
LAB_00132610:
      do {
        puVar17 = *(uint **)(*(long *)(param_1 + 0x1f8) + uVar19 * 8);
        if (uVar19 == uVar10 - 1) {
          uVar16 = puVar17[4];
          if (uVar16 != puVar17[0xc]) goto LAB_0013280c;
joined_r0x0013286c:
          if (param_2 < 2) goto LAB_00132638;
LAB_00132870:
          uVar20 = (ulong)*puVar17;
        }
        else {
          Hint_Prefetch(puVar17,0,0,0);
          uVar16 = puVar17[4];
          if (uVar16 == puVar17[0xc]) goto joined_r0x0013286c;
LAB_0013280c:
          lVar18 = *(long *)(puVar17 + 10);
          puVar17[0xc] = uVar16;
          if (lVar18 != 0) {
            plVar7 = (long *)FUN_00400d30();
            (**(code **)(*plVar7 + 0x18))(plVar7,lVar18);
          }
          if (uVar16 + 1 != 0) {
            plVar7 = (long *)FUN_00400d30();
            uVar8 = (**(code **)(*plVar7 + 0x10))
                              (plVar7,(ulong)(uVar16 + 1) * 0x18,"NonTrackedAlloc",
                               "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpSimpleAABBManager.cpp"
                               ,0x5d0);
            *(undefined8 *)(puVar17 + 10) = uVar8;
            goto joined_r0x0013286c;
          }
          puVar17[10] = 0;
          puVar17[0xb] = 0;
          if (1 < param_2) goto LAB_00132870;
LAB_00132638:
          puVar12 = *(uint **)(puVar17 + 2);
          lVar11 = *(long *)(*(long *)(param_1 + 0xa8) + 8);
          uVar3 = puVar17[4];
          lVar18 = *(long *)(*(long *)(param_1 + 0x120) + 8);
          uVar16 = uVar3 - 1;
          if (3 < uVar16) {
            uVar16 = 4;
          }
          if (uVar16 != 0) {
            Hint_Prefetch(lVar18 + (ulong)puVar12[1] * 0x18,0,0,0);
            Hint_Prefetch(lVar11 + (ulong)puVar12[1] * 4,0,0,0);
            if (1 < uVar16) {
              Hint_Prefetch(lVar18 + (ulong)puVar12[2] * 0x18,0,0,0);
              Hint_Prefetch(lVar11 + (ulong)puVar12[2] * 4,0,0,0);
              if (uVar16 != 2) {
                Hint_Prefetch(lVar18 + (ulong)puVar12[3] * 0x18,0,0,0);
                Hint_Prefetch(lVar11 + (ulong)puVar12[3] * 4,0,0,0);
                if (3 < uVar16) {
                  Hint_Prefetch(lVar18 + (ulong)puVar12[4] * 0x18,0,0,0);
                  Hint_Prefetch(lVar11 + (ulong)puVar12[4] * 4,0,0,0);
                }
              }
            }
          }
          fVar4 = *(float *)(lVar11 + (ulong)*puVar12 * 4);
          pfVar14 = (float *)(lVar18 + (ulong)*puVar12 * 0x18);
          puVar13 = *(undefined8 **)(puVar17 + 10);
          auVar21._0_8_ = CONCAT44(pfVar14[1] - fVar4,*pfVar14 - fVar4);
          auVar21._8_4_ = pfVar14[2] - fVar4;
          auVar22._12_4_ = pfVar14[3] - fVar4;
          auVar22._0_12_ = auVar21;
          auVar23._0_4_ = (float)*(undefined8 *)(pfVar14 + 3) + fVar4;
          auVar23._4_4_ = (float)((ulong)*(undefined8 *)(pfVar14 + 3) >> 0x20) + fVar4;
          auVar23._8_4_ = (float)*(undefined8 *)(pfVar14 + 5) + fVar4;
          auVar24._12_4_ = (float)((ulong)*(undefined8 *)(pfVar14 + 5) >> 0x20) + fVar4;
          auVar24._0_12_ = auVar23;
          uVar8 = CONCAT44(auVar23._0_4_,auVar21._8_4_);
          puVar13[1] = uVar8;
          *puVar13 = auVar21._0_8_;
          puVar13[2] = auVar23._4_8_;
          if (1 < uVar3) {
            lVar15 = (long)puVar13 + 0x2c;
            uVar20 = 1;
            do {
              if ((uint)(uVar20 + 4) < uVar3) {
                Hint_Prefetch(lVar18 + (ulong)puVar12[uVar20 + 4 & 0xffffffff] * 0x18,0,0,0);
                Hint_Prefetch(lVar11 + (ulong)puVar12[uVar20 + 4 & 0xffffffff] * 4,0,0,0);
              }
              pfVar14 = (float *)(lVar18 + (ulong)puVar12[uVar20] * 0x18);
              fVar4 = *(float *)(lVar11 + (ulong)puVar12[uVar20] * 4);
              uVar29 = *(undefined8 *)(pfVar14 + 5);
              uVar8 = *(undefined8 *)(pfVar14 + 3);
              auVar28._0_8_ = CONCAT44(pfVar14[1] - fVar4,*pfVar14 - fVar4);
              auVar28._8_4_ = pfVar14[2] - fVar4;
              auVar28._12_4_ = pfVar14[3] - fVar4;
              *(undefined8 *)(lVar15 + -0x14) = auVar28._0_8_;
              fVar25 = (float)uVar8 + fVar4;
              fVar26 = (float)((ulong)uVar8 >> 0x20) + fVar4;
              fVar27 = (float)uVar29 + fVar4;
              auVar22 = NEON_fmin(auVar22,auVar28,4);
              auVar21 = auVar22._0_12_;
              auVar28 = NEON_ext(auVar28,auVar28,8,1);
              auVar5._4_4_ = fVar26;
              auVar5._0_4_ = fVar25;
              auVar5._8_4_ = fVar27;
              auVar5._12_4_ = (float)((ulong)uVar29 >> 0x20) + fVar4;
              auVar24 = NEON_fmax(auVar24,auVar5,4);
              auVar23 = auVar24._0_12_;
              uVar20 = uVar20 + 1;
              *(long *)(lVar15 + -0xc) = auVar28._0_8_;
              *(float *)(lVar15 + -8) = fVar25;
              *(ulong *)(lVar15 + -4) = CONCAT44(fVar27,fVar26);
              lVar15 = lVar15 + 0x18;
            } while (uVar3 != uVar20);
          }
          puVar17[0x10] = auVar23._0_4_;
          puVar17[0x11] = auVar23._4_4_;
          puVar17[0x12] = auVar23._8_4_;
          puVar17[0xd] = auVar21._0_4_;
          puVar17[0xe] = auVar21._4_4_;
          puVar17[0xf] = auVar21._8_4_;
          *(undefined4 *)(puVar13 + (ulong)uVar3 * 3) = 0x7f7fffff;
          uVar20 = (ulong)*puVar17;
          puVar12 = (uint *)(lVar18 + uVar20 * 0x18);
          *(undefined1 *)(puVar17 + 0x13) = 1;
          *puVar12 = puVar17[0xd];
          puVar12[1] = auVar21._4_4_;
          puVar12[2] = auVar21._8_4_;
          puVar12[3] = puVar17[0x10];
          puVar12[4] = puVar17[0x11];
          puVar12[5] = puVar17[0x12];
        }
        if ((*(uint *)(*(long *)(param_1 + 0x50) + (uVar20 >> 5) * 4) &
            1 << (ulong)((uint)uVar20 & 0x1f)) != 0) {
          uVar19 = uVar19 + 1;
          if (uVar19 == uVar10) break;
          goto LAB_00132610;
        }
        if (*(uint *)(param_1 + 0xf8) < (*(uint *)(param_1 + 0xfc) & 0x7fffffff)) {
          *(uint *)(*(long *)(param_1 + 0xf0) + (ulong)*(uint *)(param_1 + 0xf8) * 4) = (uint)uVar20
          ;
          *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
        }
        else {
          FUN_001351d0(lVar1,puVar17);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar10);
      if (1 < param_2) {
        FUN_00132090(param_1,uVar10,param_2,param_3);
      }
      *(undefined1 *)(param_1 + 0x1dd) = 1;
      FUN_00135530(*(undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8),&local_68,
                   local_70,0x20);
    }
  }
  else {
    FUN_00131970(param_1);
  }
  lVar1 = param_1 + 0x100;
  if (*(uint *)(param_1 + 0x110) < (*(uint *)(param_1 + 0x114) >> 1 & 0x3fffffff)) {
    local_68 = local_68 & 0xffffffff00000000;
    FUN_00135330(lVar1,0,&local_68);
    FUN_00135410(lVar1,*(undefined4 *)(param_1 + 0x110));
    lVar18 = *(long *)(param_1 + 0x60);
    puVar6 = PTR_DAT_02710c28;
  }
  else {
    *(undefined4 *)(param_1 + 0x110) = 0;
    lVar18 = *(long *)(param_1 + 0x60);
    puVar6 = PTR_DAT_02710c28;
  }
  PTR_DAT_02710c28 = puVar6;
  if (lVar18 != 0) {
    uVar10 = *(uint *)(param_1 + 0x68) & 0x7fffffff;
    if (uVar10 == 0) {
      uVar19 = 1;
    }
    else {
      iVar9 = uVar10 * -0x20;
      uVar10 = uVar10 - 1;
      uVar19 = 1;
      do {
        iVar9 = iVar9 + 0x20;
        uVar16 = *(uint *)(lVar18 + (ulong)uVar10 * 4);
        if (uVar16 != 0) {
          uVar16 = uVar16 | uVar16 >> 1;
          uVar16 = uVar16 | uVar16 >> 2;
          uVar16 = uVar16 | uVar16 >> 4;
          uVar16 = uVar16 | uVar16 >> 8;
          uVar19 = (ulong)(((uint)(*(int *)(PTR_DAT_02710cb8 +
                                           (ulong)((uVar16 | uVar16 >> 0x10) * 0x7c4acdd >> 0x1b) *
                                           4) - iVar9) >> 5) + 1);
          break;
        }
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0xffffffff);
    }
    uVar20 = 0;
    do {
      uVar10 = *(uint *)(lVar18 + uVar20 * 4);
      if (uVar10 != 0) {
        do {
          while( true ) {
            uVar16 = *(uint *)(puVar6 + (ulong)((uVar10 & -uVar10) * 0x77cb531 >> 0x1b) * 4) |
                     (int)uVar20 << 5;
            local_68 = CONCAT44(local_68._4_4_,uVar16);
            if ((*(uint *)(param_1 + 0x114) & 0x7fffffff) <= *(uint *)(param_1 + 0x110)) break;
            *(uint *)(*(long *)(param_1 + 0x108) + (ulong)*(uint *)(param_1 + 0x110) * 4) = uVar16;
            *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
            uVar10 = uVar10 - 1 & uVar10;
            if (uVar10 == 0) goto LAB_00132a94;
          }
          FUN_001351d0(lVar1,&local_68);
          uVar10 = uVar10 - 1 & uVar10;
        } while (uVar10 != 0);
      }
LAB_00132a94:
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar19);
  }
  if (param_2 < 2) {
    FUN_00131f50(param_1,param_2,param_4,param_6,param_7);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x18) + 0xa0))(*(long **)(param_1 + 0x18),param_1 + 8);
  }
  return;
}


