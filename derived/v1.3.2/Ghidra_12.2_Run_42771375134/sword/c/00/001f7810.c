/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f7810; name: FUN_001f7810
 */


void FUN_001f7810(long param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  int iVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 local_198;
  long local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined1 auStack_178 [192];
  undefined1 local_b8;
  undefined1 *local_b0;
  ulong local_a8;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if (*(int *)(param_1 + 0x1efc) == 0) {
    lVar1 = param_1 + 0x20;
                    /* try { // try from 001f788c to 001f78ab has its CatchHandler @ 001f7e68 */
    FUN_003e8610(lVar1,auStack_a0);
    local_88 = 0x80;
    uStack_80 = 0x28;
    local_78 = 0x80;
    uStack_70 = 0x28;
    local_68 = FUN_00206d30();
    puVar6 = PTR_DAT_02711080;
    local_a8 = 0x800000000;
    local_b0 = auStack_178;
    local_b8 = 1;
    if (param_3 == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = 0;
      do {
        uVar17 = uVar18 + 1;
        if (uVar17 < param_3) {
          uVar12 = *(ulong *)(param_2 + uVar17 * 8);
          uVar15 = uVar12 + 0x17f >> 6;
          uVar14 = uVar12 >> 6;
          uVar3 = ((int)uVar15 + 1) - (int)uVar14;
          lVar13 = (1 - uVar14) + uVar15;
          if ((uVar3 & 7) != 0) {
            lVar16 = -((ulong)uVar3 & 7);
            do {
              Hint_Prefetch(uVar12,0,0,0);
              uVar12 = uVar12 + 0x40;
              lVar13 = lVar13 + -1;
              lVar16 = lVar16 + 1;
            } while (lVar16 != 0);
          }
          if (6 < uVar15 - uVar14) {
            do {
              Hint_Prefetch(uVar12,0,0,0);
              Hint_Prefetch(uVar12 + 0x40,0,0,0);
              lVar13 = lVar13 + -8;
              Hint_Prefetch(uVar12 + 0x80,0,0,0);
              Hint_Prefetch(uVar12 + 0xc0,0,0,0);
              Hint_Prefetch(uVar12 + 0x100,0,0,0);
              Hint_Prefetch(uVar12 + 0x140,0,0,0);
              Hint_Prefetch(uVar12 + 0x180,0,0,0);
              Hint_Prefetch(uVar12 + 0x1c0,0,0,0);
              uVar12 = uVar12 + 0x200;
            } while (lVar13 != 0);
          }
        }
        lVar13 = *(long *)(param_2 + uVar18 * 8);
        uVar12 = (ulong)*(ushort *)(lVar13 + 8);
        uVar3 = *(uint *)(lVar13 + *(long *)(puVar6 + uVar12 * 8 + 0x98) + 8) >> 0x1e;
        if (uVar3 != 0) {
                    /* try { // try from 001f799c to 001f79a3 has its CatchHandler @ 001f7e90 */
          if ((uVar3 == 3) && (lVar16 = FUN_001e1e40(lVar13), lVar16 == param_1)) {
            uVar12 = (ulong)*(ushort *)(lVar13 + 8);
            goto LAB_001f79b0;
          }
                    /* try { // try from 001f7cc0 to 001f7cdf has its CatchHandler @ 001f7e48 */
          uVar8 = FUN_00400880();
          FUN_00400890(uVar8,8,
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpScene.cpp"
                       ,0x222,
                       "PxScene::addActors(): Actor already assigned to a scene. Call will be ignored!"
                      );
LAB_001f7d04:
          bVar5 = 1;
          bVar4 = 1;
          lVar13 = local_190;
          goto joined_r0x001f7d08;
        }
LAB_001f79b0:
        iVar10 = (int)uVar12;
        if (iVar10 - 0xbU < 3) {
                    /* try { // try from 001f79bc to 001f79c7 has its CatchHandler @ 001f7ea0 */
          FUN_001f72b0(param_1,lVar13);
        }
        else if (iVar10 == 6) {
          if ((param_4 == 0) && (*(long *)(lVar13 + 0x48) != 0)) {
                    /* try { // try from 001f7d20 to 001f7d3f has its CatchHandler @ 001f7e04 */
            uVar8 = FUN_00400880();
            FUN_00400890(uVar8,8,
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpScene.cpp"
                         ,0x24b,
                         "PxScene::addActors(): actor is in a pruning structure and cannot be added to a scene directly, use addActors(const PxPruningStructure& )"
                        );
LAB_001f7d64:
            bVar4 = 1;
            goto LAB_001f7d68;
          }
          pbVar2 = (byte *)(*(long *)(PTR_DAT_02711068 +
                                     (ulong)(*(uint *)(lVar13 + 0x68) >> 0x18 & 0xf) * 8 + 0x30) +
                            lVar13 + 0x60 + 0xc);
          if ((*(uint *)(lVar13 + 0x68) & 1) != 0) {
            pbVar2 = *(byte **)(lVar13 + 0x70);
          }
          if ((*pbVar2 >> 3 & 1) == 0) {
                    /* try { // try from 001f7af4 to 001f7b0f has its CatchHandler @ 001f7e70 */
            FUN_001f7f60(auStack_178,*(ushort *)(lVar13 + 0x30) + 1);
            FUN_003e8d60(lVar1,lVar13,auStack_a0,local_b0);
            if (((((*(float *)(lVar13 + 0x174) == 0.0) && (*(float *)(lVar13 + 0x15c) == 0.0)) &&
                 (*(float *)(lVar13 + 0x160) == 0.0)) &&
                ((*(float *)(lVar13 + 0x164) == 0.0 && (*(float *)(lVar13 + 0x168) == 0.0)))) &&
               ((*(float *)(lVar13 + 0x16c) == 0.0 && (*(float *)(lVar13 + 0x170) == 0.0)))) {
              uVar11 = 1;
            }
            else {
              uVar11 = 0;
            }
            *(undefined4 *)(lVar13 + 0x178) = uVar11;
            FUN_001f7650(param_1,lVar13,lVar13 + 0x60,lVar13 + 0x28,1,local_b0,param_4 != 0);
            uVar3 = *(uint *)(param_1 + 0x25f0);
            *(uint *)(lVar13 + 0x50) = uVar3;
            if (uVar3 < (*(uint *)(param_1 + 0x25f4) & 0x7fffffff)) {
              *(long *)(*(long *)(param_1 + 0x25e8) + (ulong)uVar3 * 8) = lVar13;
              *(uint *)(param_1 + 0x25f0) = uVar3 + 1;
              lVar16 = *(long *)(lVar13 + 0x20);
              local_198 = lVar13;
            }
            else {
                    /* try { // try from 001f7c20 to 001f7c3b has its CatchHandler @ 001f7e70 */
              local_198 = lVar13;
              FUN_00200180(param_1 + 0x25e8,&local_198);
              lVar16 = *(long *)(lVar13 + 0x20);
            }
            if (lVar16 != 0) {
              FUN_001e17d0(lVar13 + 0x18);
            }
          }
          else {
                    /* try { // try from 001f7b94 to 001f7bc7 has its CatchHandler @ 001f7e70 */
            FUN_001f7510(param_1,lVar13,param_4 != 0);
          }
        }
        else {
          if (iVar10 != 7) {
                    /* try { // try from 001f7ce4 to 001f7d03 has its CatchHandler @ 001f7e14 */
            uVar8 = FUN_00400880();
            FUN_00400890(uVar8,2,
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpScene.cpp"
                         ,0x260,"PxScene::addRigidActors(): articulation link not permitted");
            goto LAB_001f7d04;
          }
          if ((param_4 == 0) && (*(long *)(lVar13 + 0x48) != 0)) {
                    /* try { // try from 001f7d44 to 001f7d63 has its CatchHandler @ 001f7df4 */
            uVar8 = FUN_00400880();
            FUN_00400890(uVar8,8,
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpScene.cpp"
                         ,0x234,
                         "PxScene::addActors(): actor is in a pruning structure and cannot be added to a scene directly, use addActors(const PxPruningStructure& )"
                        );
            goto LAB_001f7d64;
          }
          pbVar2 = (byte *)(*(long *)(PTR_DAT_02711068 +
                                     (ulong)(*(uint *)(lVar13 + 0x68) >> 0x18 & 0xf) * 8 + 0x30) +
                            lVar13 + 0x60 + 0xc);
          if ((*(uint *)(lVar13 + 0x68) & 1) != 0) {
            pbVar2 = *(byte **)(lVar13 + 0x70);
          }
          if ((*pbVar2 >> 3 & 1) == 0) {
                    /* try { // try from 001f7a30 to 001f7a6f has its CatchHandler @ 001f7e80 */
            FUN_001f7f60(auStack_178,*(ushort *)(lVar13 + 0x30) + 1);
            FUN_003e8b70(lVar1,lVar13,auStack_a0,local_b0);
            FUN_001f7650(param_1,lVar13,lVar13 + 0x60,lVar13 + 0x28,0,local_b0,param_4 != 0);
            uVar3 = *(uint *)(param_1 + 0x25f0);
            *(uint *)(lVar13 + 0x50) = uVar3;
            if (uVar3 < (*(uint *)(param_1 + 0x25f4) & 0x7fffffff)) {
              *(long *)(*(long *)(param_1 + 0x25e8) + (ulong)uVar3 * 8) = lVar13;
              *(uint *)(param_1 + 0x25f0) = uVar3 + 1;
              lVar16 = *(long *)(lVar13 + 0x20);
              local_198 = lVar13;
            }
            else {
                    /* try { // try from 001f7c00 to 001f7c1b has its CatchHandler @ 001f7e80 */
              local_198 = lVar13;
              FUN_00200180(param_1 + 0x25e8,&local_198);
              lVar16 = *(long *)(lVar13 + 0x20);
            }
            if (lVar16 != 0) {
              FUN_001e17d0(lVar13 + 0x18);
            }
          }
          else {
                    /* try { // try from 001f7b7c to 001f7b87 has its CatchHandler @ 001f7e80 */
            FUN_001f73d0(param_1,lVar13,param_4 != 0);
          }
        }
        uVar18 = uVar17;
      } while (uVar17 < param_3);
      uVar18 = uVar17 & 0xffffffff;
    }
    bVar4 = 0;
    bVar5 = 0;
    lVar13 = local_190;
joined_r0x001f7d08:
    local_190 = lVar13;
    if (param_4 != 0) {
      local_190 = *(long *)(param_4 + 0x18);
      if (local_190 != 0) {
        local_188 = *(undefined4 *)(param_4 + 0x28);
        local_180 = *(undefined8 *)(param_4 + 0x30);
        local_198._4_4_ = (undefined4)((ulong)local_198 >> 0x20);
        local_198 = CONCAT44(local_198._4_4_,*(undefined4 *)(param_4 + 0xc));
                    /* try { // try from 001f7c7c to 001f7c83 has its CatchHandler @ 001f7e38 */
        (**(code **)(**(long **)(param_1 + 0x2430) + 0x28))(*(long **)(param_1 + 0x2430),&local_198)
        ;
        lVar13 = local_190;
      }
      local_190 = lVar13;
      bVar4 = bVar5;
      if (*(long *)(param_4 + 0x20) != 0) {
        local_188 = *(undefined4 *)(param_4 + 0x2c);
        local_180 = *(undefined8 *)(param_4 + 0x38);
        local_198 = CONCAT44(local_198._4_4_,*(undefined4 *)(param_4 + 0x10));
                    /* try { // try from 001f7cb4 to 001f7cbb has its CatchHandler @ 001f7e28 */
        local_190 = *(long *)(param_4 + 0x20);
        (**(code **)(**(long **)(param_1 + 0x2460) + 0x28))(*(long **)(param_1 + 0x2460),&local_198)
        ;
      }
    }
LAB_001f7d68:
                    /* try { // try from 001f7d68 to 001f7d73 has its CatchHandler @ 001f7e58 */
    FUN_003e9000(lVar1,auStack_a0);
    if ((bool)(bVar4 & (int)uVar18 != 0)) {
      uVar17 = 0;
      do {
                    /* try { // try from 001f7d94 to 001f7da3 has its CatchHandler @ 001f7eb0 */
        FUN_001f7fa0(param_1,*(undefined8 *)(param_2 + uVar17 * 8),0,1);
        uVar17 = uVar17 + 1;
      } while (uVar17 < (uVar18 & 0xffffffff));
    }
    puVar7 = local_b0;
    if (((-1 < (long)local_a8) && ((local_a8 & 0x7fffffff00000000) != 0)) &&
       ((auStack_178 != local_b0 && (local_b0 != (undefined1 *)0x0)))) {
                    /* try { // try from 001f7dd4 to 001f7de7 has its CatchHandler @ 001f7e24 */
      plVar9 = (long *)FUN_00400d30();
      (**(code **)(*plVar9 + 0x18))(plVar9,puVar7);
    }
  }
  else {
                    /* try { // try from 001f7848 to 001f7867 has its CatchHandler @ 001f7e6c */
    uVar8 = FUN_00400880();
    FUN_00400890(uVar8,2,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpScene.cpp"
                 ,0x207,"PxScene::addActors() not allowed while simulation is running.");
  }
  return;
}


