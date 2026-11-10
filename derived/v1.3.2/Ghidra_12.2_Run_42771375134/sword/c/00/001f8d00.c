/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f8d00; name: FUN_001f8d00
 */


void FUN_001f8d00(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  float fVar14;
  ulong auStack_c0 [2];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  float local_98;
  undefined8 *local_90;
  undefined4 local_88;
  float local_80;
  float local_7c;
  float local_78;
  
  iVar4 = (**(code **)(*param_2 + 0xd8))(param_2);
  plVar11 = *(long **)param_2[0x11];
  fVar14 = (float)(**(code **)(*plVar11 + 0x108))(plVar11);
  if (fVar14 == 0.0) {
    uVar5 = FUN_00400880();
    FUN_00400890(uVar5,2,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpScene.cpp"
                 ,0x3af,
                 "PxScene::addArticulation(): Articulation link with zero mass added to scene; defaulting mass to 1"
                );
    (**(code **)(*plVar11 + 0x100))(0x3f800000,plVar11);
  }
  (**(code **)(*plVar11 + 0x120))(&local_80,plVar11);
  if (((local_80 == 0.0) || (local_7c == 0.0)) || (local_78 == 0.0)) {
    uVar5 = FUN_00400880();
    FUN_00400890(uVar5,2,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpScene.cpp"
                 ,0x3b6,
                 "PxScene::addArticulation(): Articulation link with zero moment of inertia added to scene; defaulting inertia to (1,1,1)"
                );
    local_90 = (undefined8 *)0x3f8000003f800000;
    local_88 = 0x3f800000;
    (**(code **)(*plVar11 + 0x118))(plVar11,&local_90);
  }
  if (((*(float *)((long)plVar11 + 0x15c) == 0.0) && (*(float *)(plVar11 + 0x2c) == 0.0)) &&
     ((*(float *)((long)plVar11 + 0x164) == 0.0 &&
      ((*(float *)(plVar11 + 0x2d) == 0.0 && (*(float *)((long)plVar11 + 0x16c) == 0.0)))))) {
    bVar3 = *(float *)(plVar11 + 0x2e) != 0.0;
  }
  else {
    bVar3 = true;
  }
  lVar1 = param_1 + 0x10;
  FUN_001ccd40(lVar1,plVar11 + 0xc,0,0);
  FUN_00207d60(plVar11 + 5,param_1,plVar11,0,0);
  FUN_001ce560(lVar1,param_2 + 3);
  lVar6 = (**(code **)(*plVar11 + 0x1c0))(plVar11);
  if (lVar6 != 0) {
    FUN_001ce760(lVar1,lVar6 + 0x10);
  }
  if (plVar11[4] != 0) {
    FUN_001e17d0(plVar11 + 3);
  }
  uVar2 = iVar4 * 8;
  local_88 = CONCAT31(local_88._1_3_,0x400 < uVar2);
  if (uVar2 < 0x401) {
    local_90 = (undefined8 *)((long)auStack_c0 - ((ulong)uVar2 + 0xf & 0x1fffffff0));
    *local_90 = plVar11;
  }
  else {
                    /* try { // try from 001f8ee8 to 001f8efb has its CatchHandler @ 001f91f4 */
    local_90 = (undefined8 *)
               FUN_00401b30(&local_a0,uVar2,
                            "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpScene.cpp"
                            ,0x3c5);
    *local_90 = plVar11;
  }
  if (iVar4 != 1) {
    auStack_c0[1] = (ulong)(iVar4 - 1);
    uVar12 = 0;
    uVar9 = 1;
    do {
      plVar11 = (long *)local_90[uVar12];
      if ((int)plVar11[0x39] == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = plVar11[0x38];
      }
                    /* try { // try from 001f8f90 to 001f8f97 has its CatchHandler @ 001f9214 */
      for (uVar10 = 0; uVar7 = (**(code **)(*plVar11 + 0x1c8))(plVar11),
          uVar10 < (uVar7 & 0xffffffff); uVar10 = uVar10 + 1) {
        plVar13 = *(long **)(lVar6 + uVar10 * 8);
                    /* try { // try from 001f8fac to 001f8fef has its CatchHandler @ 001f9224 */
        fVar14 = (float)(**(code **)(*plVar13 + 0x108))(plVar13);
        if (fVar14 == 0.0) {
          uVar5 = FUN_00400880();
          FUN_00400890(uVar5,2,
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpScene.cpp"
                       ,0x3d8,
                       "PxScene::addArticulation(): Articulation link with zero mass added to scene; defaulting mass to 1"
                      );
          (**(code **)(*plVar13 + 0x100))(0x3f800000,plVar13);
        }
                    /* try { // try from 001f8ff8 to 001f9047 has its CatchHandler @ 001f9234 */
        (**(code **)(*plVar13 + 0x120))(&local_a0,plVar13);
        if ((((float)local_a0 == 0.0) || (local_a0._4_4_ == 0.0)) || (local_98 == 0.0)) {
          uVar5 = FUN_00400880();
          FUN_00400890(uVar5,2,
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpScene.cpp"
                       ,0x3df,
                       "PxScene::addArticulation(): Articulation link with zero moment of inertia added to scene; defaulting inertia to (1,1,1)"
                      );
          local_b0 = 0x3f8000003f800000;
          local_a8 = 0x3f800000;
                    /* try { // try from 001f9060 to 001f906b has its CatchHandler @ 001f9204 */
          (**(code **)(*plVar13 + 0x118))(plVar13,&local_b0);
        }
        if (bVar3) {
          bVar3 = true;
        }
        else {
          if (((*(float *)((long)plVar13 + 0x15c) == 0.0) && (*(float *)(plVar13 + 0x2c) == 0.0)) &&
             ((*(float *)((long)plVar13 + 0x164) == 0.0 &&
              ((*(float *)(plVar13 + 0x2d) == 0.0 && (*(float *)((long)plVar13 + 0x16c) == 0.0))))))
          {
            bVar3 = *(float *)(plVar13 + 0x2e) == 0.0;
          }
          else {
            bVar3 = false;
          }
          bVar3 = (bool)(bVar3 ^ 1);
        }
                    /* try { // try from 001f90d0 to 001f9127 has its CatchHandler @ 001f9234 */
        FUN_001ccd40(lVar1,plVar13 + 0xc,0,0);
        FUN_00207d60(plVar13 + 5,param_1,plVar13,0,0);
        lVar8 = (**(code **)(*plVar13 + 0x1c0))(plVar13);
        if (lVar8 != 0) {
          FUN_001ce760(lVar1,lVar8 + 0x10);
        }
        if (plVar13[4] != 0) {
          FUN_001e17d0(plVar13 + 3);
        }
        local_90[uVar9 + uVar10 & 0xffffffff] = plVar13;
      }
      uVar12 = uVar12 + 1;
      uVar9 = (ulong)(uint)((int)uVar9 + (int)uVar10);
    } while (uVar12 < auStack_c0[1]);
  }
  if ((*(float *)(param_2 + 0xb) == 0.0) && (bVar3)) {
                    /* try { // try from 001f9154 to 001f9163 has its CatchHandler @ 001f91d0 */
    FUN_001d9290(param_2,1,0);
  }
                    /* try { // try from 001f9170 to 001f917b has its CatchHandler @ 001f91e4 */
  local_a0 = param_2;
  plVar11 = (long *)FUN_00200310(param_1 + 0x25f8,&local_a0,&local_b0);
  if ((char)local_b0 == '\0') {
    *plVar11 = (long)local_a0;
  }
  if ((char)local_88 != '\0') {
                    /* try { // try from 001f91a4 to 001f91ab has its CatchHandler @ 001f91e0 */
    FUN_00401ce0(&local_90,local_90);
  }
  return;
}


