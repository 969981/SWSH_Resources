/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ea4d0; name: FUN_003ea4d0
 */


void FUN_003ea4d0(long param_1,float *param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  code *pcVar15;
  undefined8 uVar16;
  
  FUN_0011dc90(*(undefined8 *)(param_1 + 0x720));
  lVar8 = *(long *)(param_1 + 0x808);
  uVar9 = (ulong)*(uint *)(lVar8 + 0x10);
  if (*(uint *)(lVar8 + 0x10) != 0) {
    pfVar4 = (float *)(*(long *)(lVar8 + 8) + 0xc);
    do {
      pfVar4[-3] = pfVar4[-3] - *param_2;
      pfVar4[-2] = pfVar4[-2] - param_2[1];
      pfVar4[-1] = pfVar4[-1] - param_2[2];
      *pfVar4 = *pfVar4 - *param_2;
      pfVar4[1] = pfVar4[1] - param_2[1];
      pfVar4[2] = pfVar4[2] - param_2[2];
      uVar9 = uVar9 - 1;
      pfVar4 = pfVar4 + 6;
    } while (uVar9 != 0);
  }
  *(undefined1 *)(lVar8 + 0x18) = 1;
  FUN_00133b90(*(undefined8 *)(param_1 + 0x728),param_2);
  uVar2 = *(uint *)(param_1 + 0x10f8);
  if (uVar2 != 0) {
    lVar8 = *(long *)(param_1 + 0x10f0);
    uVar9 = 0;
    do {
      plVar10 = *(long **)(lVar8 + uVar9 * 8);
      lVar12 = *plVar10;
      uVar3 = *(uint *)(plVar10 + 1);
      if (uVar3 < 6) {
        uVar13 = 0;
        if (uVar3 != 0) goto LAB_003ea710;
      }
      else {
        uVar13 = 0;
        uVar14 = 0;
        pfVar4 = (float *)(lVar12 + 0xb0);
        lVar11 = lVar12;
        do {
          Hint_Prefetch(lVar11 + 0x100,0,0,0);
          Hint_Prefetch(lVar11 + 0x180,0,0,0);
          uVar14 = uVar14 + 1;
          uVar13 = uVar13 + 6;
          pfVar4[-0x24] = pfVar4[-0x24] - *param_2;
          pfVar4[-0x23] = pfVar4[-0x23] - param_2[1];
          pfVar4[-0x22] = pfVar4[-0x22] - param_2[2];
          pfVar4[-0x18] = pfVar4[-0x18] - *param_2;
          pfVar4[-0x17] = pfVar4[-0x17] - param_2[1];
          pfVar4[-0x16] = pfVar4[-0x16] - param_2[2];
          pfVar4[-0xc] = pfVar4[-0xc] - *param_2;
          pfVar4[-0xb] = pfVar4[-0xb] - param_2[1];
          pfVar4[-10] = pfVar4[-10] - param_2[2];
          *pfVar4 = *pfVar4 - *param_2;
          pfVar4[1] = pfVar4[1] - param_2[1];
          pfVar4[2] = pfVar4[2] - param_2[2];
          pfVar4[0xc] = pfVar4[0xc] - *param_2;
          pfVar4[0xd] = pfVar4[0xd] - param_2[1];
          pfVar4[0xe] = pfVar4[0xe] - param_2[2];
          pfVar4[0x18] = pfVar4[0x18] - *param_2;
          pfVar4[0x19] = pfVar4[0x19] - param_2[1];
          pfVar4[0x1a] = pfVar4[0x1a] - param_2[2];
          pfVar4 = pfVar4 + 0x48;
          lVar11 = lVar11 + 0x100;
        } while (uVar14 < uVar3 / 6);
        if (uVar13 < uVar3) {
LAB_003ea710:
          lVar11 = (ulong)uVar3 - (ulong)uVar13;
          pfVar4 = (float *)(lVar12 + (ulong)uVar13 * 0x30 + 0x28);
          do {
            pfVar4[-2] = pfVar4[-2] - *param_2;
            pfVar4[-1] = pfVar4[-1] - param_2[1];
            lVar11 = lVar11 + -1;
            *pfVar4 = *pfVar4 - param_2[2];
            pfVar4 = pfVar4 + 0xc;
          } while (lVar11 != 0);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar2);
  }
  uVar9 = (ulong)*(uint *)(param_1 + 0x7fc);
  if (*(uint *)(param_1 + 0x7fc) != 0) {
    plVar10 = *(long **)(param_1 + 2000);
    do {
      (**(code **)(**(long **)(*plVar10 + 0x20) + 0x20))(*(long **)(*plVar10 + 0x20),param_2);
      uVar9 = uVar9 - 1;
      plVar10 = plVar10 + 1;
    } while (uVar9 != 0);
  }
  if (*(int *)(param_1 + 0x924) != 0) {
    lVar8 = *(long *)(param_1 + 0x8f8);
    uVar9 = 0;
    do {
      FUN_003b1b00(*(undefined8 *)(lVar8 + uVar9 * 8),param_2);
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0x924));
  }
  uVar2 = *(uint *)(param_1 + 0x8dc);
  if (uVar2 != 0) {
    lVar8 = *(long *)(param_1 + 0x8b0);
    uVar9 = 0;
    do {
      while( true ) {
        uVar16 = *(undefined8 *)(lVar8 + uVar9 * 8);
        uVar5 = FUN_003a9980(uVar16);
        FUN_003aa5c0(uVar5,0);
        FUN_003a99b0(uVar16,param_2);
        plVar10 = (long *)FUN_00400d30();
        pcVar15 = *(code **)(*plVar10 + 0x10);
        plVar6 = (long *)FUN_00400d60();
        uVar7 = (**(code **)(*plVar6 + 0x28))();
        pcVar1 = 
        "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::ParticleSystemSim>::getName() [T = physx::Sc::ParticleSystemSim]"
        ;
        if ((uVar7 & 1) == 0) {
          pcVar1 = "<allocation names disabled>";
        }
        lVar12 = (*pcVar15)(plVar10,0x2e8,pcVar1,
                            "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScScene.cpp"
                            ,0x180e);
                    /* try { // try from 003ea840 to 003ea84b has its CatchHandler @ 003ea8a4 */
        FUN_003aa2a0(lVar12,param_1,uVar16);
        if (lVar12 == 0) break;
        uVar9 = uVar9 + 1;
        if (uVar2 <= uVar9) {
          return;
        }
      }
      uVar5 = FUN_00400880();
      FUN_00400890(uVar5,0x20,
                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScScene.cpp"
                   ,0x1811,"PxScene::shiftOrigin() failed for particle system.");
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar2);
  }
  return;
}


