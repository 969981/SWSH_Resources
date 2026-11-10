/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00397a80; name: FUN_00397a80
 */


undefined8 FUN_00397a80(long *param_1,undefined4 *param_2)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  float *pfVar13;
  long lVar14;
  undefined8 *puVar15;
  int *piVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined8 local_38;
  
  local_38 = 0;
  uVar2 = param_2[1];
  uVar17 = (ulong)uVar2;
  if (uVar2 == 0) {
    uVar10 = 0;
  }
  else {
    FUN_00397700(param_1,1);
    local_38 = CONCAT44(local_38._4_4_,1);
    *(uint *)(param_1 + 1) = uVar2;
    plVar8 = (long *)FUN_00400d30();
    lVar9 = (**(code **)(*plVar8 + 0x10))
                      (plVar8,uVar17 << 2,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqAABBTree.cpp"
                       ,200);
    *param_1 = lVar9;
    if (uVar17 - 1 < 3) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      piVar16 = (int *)(lVar9 + 8);
      do {
        iVar11 = (int)lVar12;
        piVar16[-2] = iVar11;
        piVar16[-1] = iVar11 + 1;
        lVar12 = lVar12 + 4;
        *piVar16 = iVar11 + 2;
        piVar16[1] = iVar11 + 3;
        piVar16 = piVar16 + 4;
      } while (uVar17 - (uVar17 & 3) != lVar12);
    }
    if ((uVar2 & 3) != 0) {
      lVar14 = -(uVar17 & 3);
      do {
        *(int *)(lVar9 + lVar12 * 4) = (int)lVar12;
        lVar12 = lVar12 + 1;
        lVar14 = lVar14 + 1;
      } while (lVar14 != 0);
    }
    FUN_003995e0(param_1 + 3,uVar17,*param_2);
    if (uVar2 + 1 == 0) {
      lVar9 = 0;
    }
    else {
      plVar8 = (long *)FUN_00400d30();
      lVar9 = (**(code **)(*plVar8 + 0x10))
                        (plVar8,(ulong)(uVar2 + 1) * 0xc,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqAABBTree.cpp"
                         ,0xd1);
    }
    pfVar13 = *(float **)(param_2 + 2);
    *(long *)(param_2 + 4) = lVar9;
    puVar15 = (undefined8 *)(lVar9 + 8);
    do {
      fVar4 = *pfVar13;
      pfVar5 = pfVar13 + 1;
      pfVar6 = pfVar13 + 2;
      pfVar7 = pfVar13 + 3;
      pfVar1 = pfVar13 + 3;
      pfVar3 = pfVar13 + 5;
      uVar17 = uVar17 - 1;
      pfVar13 = pfVar13 + 6;
      auVar18._0_8_ =
           CONCAT44((*pfVar5 + (float)((ulong)*(undefined8 *)pfVar1 >> 0x20)) * 0.5,
                    (fVar4 + (float)*(undefined8 *)pfVar1) * 0.5);
      auVar18._8_4_ = (*pfVar6 + (float)*(undefined8 *)pfVar3) * 0.5;
      auVar18._12_4_ = (*pfVar7 + (float)((ulong)*(undefined8 *)pfVar3 >> 0x20)) * 0.5;
      puVar15[-1] = auVar18._0_8_;
      auVar18 = NEON_ext(auVar18,auVar18,8,1);
      *puVar15 = auVar18._0_8_;
      puVar15 = (undefined8 *)((long)puVar15 + 0xc);
    } while (uVar17 != 0);
    FUN_00399ae0(param_1[3],param_2,&local_38,param_1 + 3,*param_1);
    FUN_003979a0(param_1,param_2,&local_38);
    uVar10 = 1;
  }
  return uVar10;
}


