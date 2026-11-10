/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00131970; name: FUN_00131970
 */


void FUN_00131970(long param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  float *pfVar8;
  undefined8 *puVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined8 uVar23;
  uint local_6c;
  uint *local_68;
  
  *(undefined2 *)(param_1 + 0x1dc) = 0x100;
  local_6c = 0;
  if (*(int *)(param_1 + 0x1d8) != 0) {
    uVar5 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 0x98) + uVar5 * 4) == -1) goto LAB_00131d24;
      uVar12 = *(uint *)(*(long *)(param_1 + 0xb0) + uVar5 * 0x10 + 8);
      if (uVar12 == 0xffffffff) {
        if ((*(uint *)(*(long *)(param_1 + 0x50) + (uVar5 >> 5) * 4) &
            1 << (ulong)((uint)uVar5 & 0x1f)) != 0) goto LAB_00131d24;
        if (*(uint *)(param_1 + 0xf8) < (*(uint *)(param_1 + 0xfc) & 0x7fffffff)) {
          *(uint *)(*(long *)(param_1 + 0xf0) + (ulong)*(uint *)(param_1 + 0xf8) * 4) = (uint)uVar5;
LAB_00131d08:
          *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
        }
        else {
LAB_00131d18:
          FUN_001351d0(param_1 + 0xe8,&local_6c);
        }
      }
      else if ((uVar12 & 1) != 0) {
        puVar11 = *(uint **)(*(long *)(param_1 + 0x1e8) + (ulong)(uVar12 >> 1) * 8);
        uVar12 = puVar11[4];
        if (uVar12 != 0) {
          if (puVar11[8] == 0xffffffff) {
            uVar14 = *(uint *)(param_1 + 0x200);
            puVar11[8] = uVar14;
            local_68 = puVar11;
            if (uVar14 < (*(uint *)(param_1 + 0x204) & 0x7fffffff)) {
              *(uint **)(*(long *)(param_1 + 0x1f8) + (ulong)uVar14 * 8) = puVar11;
              *(uint *)(param_1 + 0x200) = uVar14 + 1;
              uVar14 = puVar11[0xc];
              goto joined_r0x00131b04;
            }
            FUN_00134780(param_1 + 0x1f8,&local_68);
            uVar12 = puVar11[4];
            if (uVar12 != puVar11[0xc]) goto LAB_00131a40;
          }
          else {
            uVar14 = puVar11[0xc];
joined_r0x00131b04:
            if (uVar12 != uVar14) {
LAB_00131a40:
              lVar13 = *(long *)(puVar11 + 10);
              puVar11[0xc] = uVar12;
              if (lVar13 != 0) {
                plVar3 = (long *)FUN_00400d30();
                (**(code **)(*plVar3 + 0x18))(plVar3,lVar13);
              }
              if (uVar12 + 1 == 0) {
                uVar4 = 0;
              }
              else {
                plVar3 = (long *)FUN_00400d30();
                uVar4 = (**(code **)(*plVar3 + 0x10))
                                  (plVar3,(ulong)(uVar12 + 1) * 0x18,"NonTrackedAlloc",
                                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpSimpleAABBManager.cpp"
                                   ,0x5d0);
              }
              uVar12 = puVar11[4];
              *(undefined8 *)(puVar11 + 10) = uVar4;
            }
          }
          uVar14 = uVar12 - 1;
          puVar7 = *(uint **)(puVar11 + 2);
          if (3 < uVar14) {
            uVar14 = 4;
          }
          lVar6 = *(long *)(*(long *)(param_1 + 0xa8) + 8);
          lVar13 = *(long *)(*(long *)(param_1 + 0x120) + 8);
          if (uVar14 != 0) {
            Hint_Prefetch(lVar13 + (ulong)puVar7[1] * 0x18,0,0,0);
            Hint_Prefetch(lVar6 + (ulong)puVar7[1] * 4,0,0,0);
            if (1 < uVar14) {
              Hint_Prefetch(lVar13 + (ulong)puVar7[2] * 0x18,0,0,0);
              Hint_Prefetch(lVar6 + (ulong)puVar7[2] * 4,0,0,0);
              if (uVar14 != 2) {
                Hint_Prefetch(lVar13 + (ulong)puVar7[3] * 0x18,0,0,0);
                Hint_Prefetch(lVar6 + (ulong)puVar7[3] * 4,0,0,0);
                if (3 < uVar14) {
                  Hint_Prefetch(lVar13 + (ulong)puVar7[4] * 0x18,0,0,0);
                  Hint_Prefetch(lVar6 + (ulong)puVar7[4] * 4,0,0,0);
                }
              }
            }
          }
          pfVar8 = (float *)(lVar13 + (ulong)*puVar7 * 0x18);
          fVar1 = *(float *)(lVar6 + (ulong)*puVar7 * 4);
          auVar15._0_8_ = CONCAT44(pfVar8[1] - fVar1,*pfVar8 - fVar1);
          auVar15._8_4_ = pfVar8[2] - fVar1;
          auVar16._12_4_ = pfVar8[3] - fVar1;
          auVar16._0_12_ = auVar15;
          puVar9 = *(undefined8 **)(puVar11 + 10);
          auVar17._0_4_ = (float)*(undefined8 *)(pfVar8 + 3) + fVar1;
          auVar17._4_4_ = (float)((ulong)*(undefined8 *)(pfVar8 + 3) >> 0x20) + fVar1;
          auVar17._8_4_ = (float)*(undefined8 *)(pfVar8 + 5) + fVar1;
          auVar18._12_4_ = (float)((ulong)*(undefined8 *)(pfVar8 + 5) >> 0x20) + fVar1;
          auVar18._0_12_ = auVar17;
          *puVar9 = auVar15._0_8_;
          uVar4 = CONCAT44(auVar17._0_4_,auVar15._8_4_);
          puVar9[1] = uVar4;
          puVar9[2] = auVar17._4_8_;
          if (1 < uVar12) {
            lVar10 = (long)puVar9 + 0x2c;
            uVar5 = 1;
            do {
              if ((uint)(uVar5 + 4) < uVar12) {
                Hint_Prefetch(lVar13 + (ulong)puVar7[uVar5 + 4 & 0xffffffff] * 0x18,0,0,0);
                Hint_Prefetch(lVar6 + (ulong)puVar7[uVar5 + 4 & 0xffffffff] * 4,0,0,0);
              }
              pfVar8 = (float *)(lVar13 + (ulong)puVar7[uVar5] * 0x18);
              fVar1 = *(float *)(lVar6 + (ulong)puVar7[uVar5] * 4);
              uVar23 = *(undefined8 *)(pfVar8 + 5);
              uVar4 = *(undefined8 *)(pfVar8 + 3);
              auVar22._0_8_ = CONCAT44(pfVar8[1] - fVar1,*pfVar8 - fVar1);
              auVar22._8_4_ = pfVar8[2] - fVar1;
              auVar22._12_4_ = pfVar8[3] - fVar1;
              *(undefined8 *)(lVar10 + -0x14) = auVar22._0_8_;
              fVar19 = (float)uVar4 + fVar1;
              fVar20 = (float)((ulong)uVar4 >> 0x20) + fVar1;
              fVar21 = (float)uVar23 + fVar1;
              auVar16 = NEON_fmin(auVar16,auVar22,4);
              auVar15 = auVar16._0_12_;
              auVar22 = NEON_ext(auVar22,auVar22,8,1);
              auVar2._4_4_ = fVar20;
              auVar2._0_4_ = fVar19;
              auVar2._8_4_ = fVar21;
              auVar2._12_4_ = (float)((ulong)uVar23 >> 0x20) + fVar1;
              auVar18 = NEON_fmax(auVar18,auVar2,4);
              auVar17 = auVar18._0_12_;
              uVar5 = uVar5 + 1;
              *(long *)(lVar10 + -0xc) = auVar22._0_8_;
              *(float *)(lVar10 + -8) = fVar19;
              *(ulong *)(lVar10 + -4) = CONCAT44(fVar21,fVar20);
              lVar10 = lVar10 + 0x18;
            } while (uVar12 != uVar5);
          }
          puVar11[0x10] = auVar17._0_4_;
          puVar11[0x11] = auVar17._4_4_;
          puVar11[0xd] = auVar15._0_4_;
          puVar11[0xe] = auVar15._4_4_;
          puVar11[0xf] = auVar15._8_4_;
          puVar11[0x12] = auVar17._8_4_;
          *(undefined4 *)(puVar9 + (ulong)uVar12 * 3) = 0x7f7fffff;
          puVar7 = (uint *)(lVar13 + (ulong)*puVar11 * 0x18);
          *(undefined1 *)(puVar11 + 0x13) = 1;
          *puVar7 = puVar11[0xd];
          puVar7[1] = auVar15._4_4_;
          puVar7[2] = auVar15._8_4_;
          puVar7[3] = puVar11[0x10];
          puVar7[4] = puVar11[0x11];
          puVar7[5] = puVar11[0x12];
          if ((*(uint *)(*(long *)(param_1 + 0x50) + (ulong)(local_6c >> 5) * 4) &
              1 << ((ulong)local_6c & 0x1f)) == 0) {
            if ((*(uint *)(param_1 + 0xfc) & 0x7fffffff) <= *(uint *)(param_1 + 0xf8))
            goto LAB_00131d18;
            *(uint *)(*(long *)(param_1 + 0xf0) + (ulong)*(uint *)(param_1 + 0xf8) * 4) = local_6c;
            goto LAB_00131d08;
          }
        }
      }
LAB_00131d24:
      local_6c = local_6c + 1;
      uVar5 = (ulong)local_6c;
    } while (local_6c < *(uint *)(param_1 + 0x1d8));
  }
  return;
}


