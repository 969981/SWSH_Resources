/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003961a0; name: FUN_003961a0
 */


undefined8 FUN_003961a0(long param_1,void *param_2,uint param_3)

{
  code *pcVar1;
  code *pcVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  undefined8 uVar8;
  size_t sVar9;
  undefined8 uVar10;
  char *pcVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  int iVar23;
  int iVar24;
  long local_188;
  long local_170;
  undefined8 local_150;
  long local_148;
  long local_140;
  byte local_138;
  undefined7 uStack_137;
  void *local_128;
  uint local_f8;
  void *local_d0 [2];
  void *local_c0;
  uint local_90;
  byte local_68 [8];
  
  if (param_3 == 0) {
    local_188 = 0;
    iVar23 = 0;
    iVar24 = 0;
    local_170 = 0;
    goto LAB_00396418;
  }
  iVar24 = 0;
  iVar23 = 0;
  uVar22 = (ulong)param_3;
  uVar18 = 0;
  do {
    uVar20 = uVar18 + 1;
    if (uVar20 < uVar22) {
      uVar12 = *(ulong *)((long)param_2 + uVar20 * 8);
      uVar16 = uVar12 + 0x17f >> 6;
      uVar15 = uVar12 >> 6;
      uVar6 = ((int)uVar16 + 1) - (int)uVar15;
      lVar14 = (1 - uVar15) + uVar16;
      if ((uVar6 & 7) != 0) {
        lVar17 = -((ulong)uVar6 & 7);
        do {
          Hint_Prefetch(uVar12,0,0,0);
          uVar12 = uVar12 + 0x40;
          lVar14 = lVar14 + -1;
          lVar17 = lVar17 + 1;
        } while (lVar17 != 0);
      }
      if (6 < uVar16 - uVar15) {
        do {
          Hint_Prefetch(uVar12,0,0,0);
          Hint_Prefetch(uVar12 + 0x40,0,0,0);
          lVar14 = lVar14 + -8;
          Hint_Prefetch(uVar12 + 0x80,0,0,0);
          Hint_Prefetch(uVar12 + 0xc0,0,0,0);
          Hint_Prefetch(uVar12 + 0x100,0,0,0);
          Hint_Prefetch(uVar12 + 0x140,0,0,0);
          Hint_Prefetch(uVar12 + 0x180,0,0,0);
          Hint_Prefetch(uVar12 + 0x1c0,0,0,0);
          uVar12 = uVar12 + 0x200;
        } while (lVar14 != 0);
      }
    }
    plVar19 = *(long **)((long)param_2 + uVar18 * 8);
    uVar3 = *(ushort *)(plVar19 + 1);
    uVar6 = *(uint *)((long)plVar19 + *(long *)(PTR_DAT_02711080 + (ulong)uVar3 * 8 + 0x98) + 8) >>
            0x1e;
    if (uVar6 != 0 && uVar6 != 3) {
      uVar8 = FUN_00400880();
      pcVar11 = "PrunerStructure::build: Actor already assigned to a scene!";
      uVar10 = 0xa6;
      goto LAB_0039691c;
    }
    iVar5 = (**(code **)(*plVar19 + 0xd0))(plVar19);
    if (iVar5 == 0) {
LAB_00396494:
      uVar8 = FUN_00400880();
      pcVar11 = "PrunerStructure::build: Provided actor has no scene query shape!";
      uVar10 = 0xbd;
LAB_0039691c:
      FUN_00400890(uVar8,4,
                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqPruningStructure.cpp"
                   ,uVar10,pcVar11);
      return 0;
    }
    if (uVar3 == 7) {
      iVar21 = 0;
      uVar6 = 0;
      do {
        (**(code **)(*plVar19 + 0xd8))(plVar19,&local_138,1,iVar21);
        (**(code **)(*(long *)CONCAT71(uStack_137,local_138) + 0x110))(local_68);
        uVar4 = local_68[0] >> 1 & 1;
        iVar21 = iVar21 + 1;
        iVar24 = iVar24 + uVar4;
        uVar6 = uVar6 | uVar4;
      } while (iVar5 != iVar21);
    }
    else {
      iVar21 = 0;
      uVar6 = 0;
      do {
        (**(code **)(*plVar19 + 0xd8))(plVar19,&local_138,1,iVar21);
        (**(code **)(*(long *)CONCAT71(uStack_137,local_138) + 0x110))(local_68);
        uVar4 = local_68[0] >> 1 & 1;
        iVar21 = iVar21 + 1;
        iVar23 = iVar23 + uVar4;
        uVar6 = uVar6 | uVar4;
      } while (iVar5 != iVar21);
    }
    if (uVar6 == 0) goto LAB_00396494;
    if (uVar3 == 6) {
      plVar19 = (long *)(*(long *)((long)param_2 + uVar18 * 8) + 0x48);
      if (*plVar19 != 0) {
        uVar8 = FUN_00400880();
        pcVar11 = "PrunerStructure::build: Provided actor has already a pruning structure!";
        uVar10 = 0xd0;
        goto LAB_0039691c;
      }
    }
    else {
      if (uVar3 != 7) {
        uVar8 = FUN_00400880();
        pcVar11 = "PrunerStructure::build: Provided actor is not a rigid actor!";
        uVar10 = 0xd7;
        goto LAB_0039691c;
      }
      plVar19 = (long *)(*(long *)((long)param_2 + uVar18 * 8) + 0x48);
      if (*plVar19 != 0) {
        uVar8 = FUN_00400880();
        pcVar11 = "PrunerStructure::build: Provided actor has already a pruning structure!";
        uVar10 = 0xc6;
        goto LAB_0039691c;
      }
    }
    *plVar19 = param_1;
    uVar18 = uVar20;
  } while (uVar20 < uVar22);
  if ((iVar24 == 0) || (iVar24 + 1U == 0)) {
    local_188 = 0;
    if (iVar23 != 0) goto LAB_00396714;
LAB_00396768:
    local_170 = 0;
  }
  else {
    plVar19 = (long *)FUN_00400d30();
    local_188 = (**(code **)(*plVar19 + 0x10))
                          (plVar19,(ulong)(iVar24 + 1U) * 0x18,"NonTrackedAlloc",
                           "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqPruningStructure.cpp"
                           ,0xe2);
    if (iVar23 == 0) goto LAB_00396768;
LAB_00396714:
    if (iVar23 + 1U == 0) goto LAB_00396768;
    plVar19 = (long *)FUN_00400d30();
    local_170 = (**(code **)(*plVar19 + 0x10))
                          (plVar19,(ulong)(iVar23 + 1U) * 0x18,"NonTrackedAlloc",
                           "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqPruningStructure.cpp"
                           ,0xe2);
  }
  if (param_3 == 0) {
    iVar23 = 0;
    iVar24 = 0;
  }
  else {
    uVar18 = 0;
    pcVar1 = *(code **)PTR_PTR_027126e0;
    pcVar2 = *(code **)((long)PTR_PTR_027126e0 + 8);
    uVar20 = 0;
    uVar12 = 0;
    do {
      plVar19 = *(long **)((long)param_2 + uVar18 * 8);
      if ((short)plVar19[1] == 6) {
        uVar6 = (**(code **)(*plVar19 + 0xd0))(plVar19);
        if (uVar6 != 0) {
          lVar14 = local_170 + uVar12 * 0x18;
          uVar15 = 0;
          do {
            plVar13 = plVar19 + 5;
            if ((short)plVar19[6] != 1) {
              plVar13 = (long *)plVar19[5];
            }
            plVar13 = (long *)plVar13[uVar15];
            (**(code **)(*plVar13 + 0x110))(&local_138,plVar13);
            if ((local_138 >> 1 & 1) != 0) {
              (*pcVar2)(lVar14,plVar13 + 6,plVar19 + 0xc);
              lVar14 = lVar14 + 0x18;
              uVar12 = (ulong)((int)uVar12 + 1);
            }
            uVar15 = uVar15 + 1;
          } while (uVar6 != uVar15);
        }
      }
      else if (((short)plVar19[1] == 7) &&
              (uVar6 = (**(code **)(*plVar19 + 0xd0))(plVar19), uVar6 != 0)) {
        lVar14 = local_188 + uVar20 * 0x18;
        uVar15 = 0;
        do {
          plVar13 = plVar19 + 5;
          if ((short)plVar19[6] != 1) {
            plVar13 = (long *)plVar19[5];
          }
          plVar13 = (long *)plVar13[uVar15];
          (**(code **)(*plVar13 + 0x110))(&local_138,plVar13);
          if ((local_138 >> 1 & 1) != 0) {
            (*pcVar1)(lVar14,plVar13 + 6,plVar19 + 0xc);
            lVar14 = lVar14 + 0x18;
            uVar20 = (ulong)((int)uVar20 + 1);
          }
          uVar15 = uVar15 + 1;
        } while (uVar6 != uVar15);
      }
      iVar23 = (int)uVar12;
      iVar24 = (int)uVar20;
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar22);
  }
LAB_00396418:
                    /* try { // try from 00396418 to 00396423 has its CatchHandler @ 00396960 */
  FUN_00397650(&local_138);
                    /* try { // try from 00396428 to 0039642f has its CatchHandler @ 0039694c */
  FUN_00397650(local_d0);
  *(int *)(param_1 + 0x28) = iVar24;
  if (iVar24 != 0) {
    local_140 = 0;
    local_150 = CONCAT44(iVar24,4);
                    /* try { // try from 00396444 to 0039644f has its CatchHandler @ 003969ac */
    local_148 = local_188;
    FUN_00397a80(&local_138,&local_150);
    *(uint *)(param_1 + 0xc) = local_f8;
    if (local_f8 == 0) {
      iVar24 = 0;
      pvVar7 = (void *)0x0;
    }
    else {
                    /* try { // try from 00396464 to 0039648b has its CatchHandler @ 00396998 */
      plVar19 = (long *)FUN_00400d30();
      pvVar7 = (void *)(**(code **)(*plVar19 + 0x10))
                                 (plVar19,(ulong)local_f8 * 0x1c,"NonTrackedAlloc",
                                  "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqPruningStructure.cpp"
                                  ,0x10a);
      iVar24 = *(int *)(param_1 + 0xc);
    }
    *(void **)(param_1 + 0x18) = pvVar7;
                    /* try { // try from 003964e0 to 003964e3 has its CatchHandler @ 003969ac */
    memcpy(pvVar7,local_128,(ulong)(uint)(iVar24 * 0x1c));
    uVar6 = *(uint *)(param_1 + 0x28);
    if (uVar6 == 0) {
      iVar24 = 0;
      pvVar7 = (void *)0x0;
    }
    else {
                    /* try { // try from 003964f0 to 00396517 has its CatchHandler @ 00396984 */
      plVar19 = (long *)FUN_00400d30();
      pvVar7 = (void *)(**(code **)(*plVar19 + 0x10))
                                 (plVar19,(ulong)uVar6 << 2,"NonTrackedAlloc",
                                  "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqPruningStructure.cpp"
                                  ,0x10c);
      iVar24 = *(int *)(param_1 + 0x28);
    }
    *(void **)(param_1 + 0x30) = pvVar7;
                    /* try { // try from 00396534 to 00396537 has its CatchHandler @ 003969ac */
    memcpy(pvVar7,(void *)CONCAT71(uStack_137,local_138),(ulong)(uint)(iVar24 << 2));
    if (local_188 != 0) {
                    /* try { // try from 0039653c to 0039654f has its CatchHandler @ 00396970 */
      plVar19 = (long *)FUN_00400d30();
      (**(code **)(*plVar19 + 0x18))(plVar19,local_188);
    }
    lVar14 = local_140;
    local_150 = 0;
    local_148 = 0;
    if (local_140 != 0) {
                    /* try { // try from 0039655c to 0039656f has its CatchHandler @ 0039696c */
      plVar19 = (long *)FUN_00400d30();
      (**(code **)(*plVar19 + 0x18))(plVar19,lVar14);
    }
  }
  *(int *)(param_1 + 0x2c) = iVar23;
  if (iVar23 != 0) {
    local_148 = local_170;
    local_140 = 0;
    local_150 = CONCAT44(iVar23,4);
                    /* try { // try from 00396588 to 00396593 has its CatchHandler @ 003969ac */
    FUN_00397a80(local_d0,&local_150);
    *(uint *)(param_1 + 0x10) = local_90;
    if (local_90 == 0) {
      iVar24 = 0;
      pvVar7 = (void *)0x0;
    }
    else {
                    /* try { // try from 003965a4 to 003965cb has its CatchHandler @ 00396998 */
      plVar19 = (long *)FUN_00400d30();
      pvVar7 = (void *)(**(code **)(*plVar19 + 0x10))
                                 (plVar19,(ulong)local_90 * 0x1c,"NonTrackedAlloc",
                                  "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqPruningStructure.cpp"
                                  ,0x10a);
      iVar24 = *(int *)(param_1 + 0x10);
    }
    *(void **)(param_1 + 0x20) = pvVar7;
                    /* try { // try from 003965e8 to 003965eb has its CatchHandler @ 003969ac */
    memcpy(pvVar7,local_c0,(ulong)(uint)(iVar24 * 0x1c));
    uVar6 = *(uint *)(param_1 + 0x2c);
    if (uVar6 == 0) {
      sVar9 = 0;
      pvVar7 = (void *)0x0;
    }
    else {
                    /* try { // try from 003965f4 to 0039661b has its CatchHandler @ 00396984 */
      plVar19 = (long *)FUN_00400d30();
      pvVar7 = (void *)(**(code **)(*plVar19 + 0x10))
                                 (plVar19,(ulong)uVar6 << 2,"NonTrackedAlloc",
                                  "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqPruningStructure.cpp"
                                  ,0x10c);
      sVar9 = (size_t)(uint)(*(int *)(param_1 + 0x2c) << 2);
    }
    *(void **)(param_1 + 0x38) = pvVar7;
                    /* try { // try from 00396638 to 0039663b has its CatchHandler @ 003969ac */
    memcpy(pvVar7,local_d0[0],sVar9);
    if (local_170 != 0) {
                    /* try { // try from 00396644 to 00396657 has its CatchHandler @ 00396970 */
      plVar19 = (long *)FUN_00400d30();
      (**(code **)(*plVar19 + 0x18))(plVar19,local_170);
    }
    lVar14 = local_140;
    local_150 = 0;
    local_148 = 0;
    if (local_140 != 0) {
                    /* try { // try from 00396664 to 00396677 has its CatchHandler @ 0039696c */
      plVar19 = (long *)FUN_00400d30();
      (**(code **)(*plVar19 + 0x18))(plVar19,lVar14);
    }
  }
  *(uint *)(param_1 + 0x40) = param_3;
  if (param_3 == 0) {
    sVar9 = 0;
    pvVar7 = (void *)0x0;
  }
  else {
                    /* try { // try from 00396680 to 003966ab has its CatchHandler @ 00396964 */
    plVar19 = (long *)FUN_00400d30();
    pvVar7 = (void *)(**(code **)(*plVar19 + 0x10))
                               (plVar19,(ulong)param_3 << 3,"NonTrackedAlloc",
                                "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqPruningStructure.cpp"
                                ,0x116);
    sVar9 = (size_t)(uint)(*(int *)(param_1 + 0x40) << 3);
  }
  *(void **)(param_1 + 0x48) = pvVar7;
                    /* try { // try from 003966c4 to 003966cb has its CatchHandler @ 00396948 */
  memcpy(pvVar7,param_2,sVar9);
  FUN_00397690(local_d0);
  FUN_00397690(&local_138);
  return 1;
}


