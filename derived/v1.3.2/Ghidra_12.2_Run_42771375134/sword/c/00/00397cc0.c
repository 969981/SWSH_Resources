/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00397cc0; name: FUN_00397cc0
 */


undefined8
FUN_00397cc0(long *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,uint param_5)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  float *pfVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  float *pfVar17;
  uint uVar18;
  long lVar19;
  int *piVar20;
  ulong uVar21;
  code *pcVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  long local_58;
  
  if (param_4 == 1) {
    plVar10 = (long *)param_1[9];
    iVar15 = (int)plVar10[1];
    if (iVar15 == 0) {
      FUN_003979a0(param_1,param_2,param_3);
      plVar10 = (long *)param_1[9];
      if (plVar10 != (long *)0x0) {
        if (((-1 < (int)*(uint *)((long)plVar10 + 0xc)) &&
            ((*(uint *)((long)plVar10 + 0xc) & 0x7fffffff) != 0)) &&
           (lVar11 = *plVar10, lVar11 != 0)) {
                    /* try { // try from 00397ea0 to 00397eb3 has its CatchHandler @ 0039802c */
          plVar13 = (long *)FUN_00400d30();
          (**(code **)(*plVar13 + 0x18))(plVar13,lVar11);
        }
                    /* try { // try from 00397eb4 to 00397ec7 has its CatchHandler @ 00398030 */
        plVar13 = (long *)FUN_00400d30();
        (**(code **)(*plVar13 + 0x18))(plVar13,plVar10);
      }
      uVar12 = 0;
      param_1[9] = 0;
    }
    else {
      if ((param_5 != 0) && (iVar15 != 0)) {
        uVar23 = 0;
        do {
          uVar18 = *(uint *)(plVar10 + 2);
          iVar2 = uVar18 + 1;
          *(int *)(plVar10 + 2) = iVar2;
          lVar11 = *(long *)(*plVar10 + (ulong)uVar18 * 8);
          if (iVar2 == iVar15) {
            *(undefined4 *)(plVar10 + 1) = 0;
            *(undefined4 *)(plVar10 + 2) = 0;
          }
          FUN_00399850(lVar11,param_2,param_3,param_1 + 3,*param_1);
          lVar16 = *(long *)(lVar11 + 0x18);
          if (lVar16 != 0) {
            local_58 = lVar16 + 0x28;
            uVar18 = *(uint *)(plVar10 + 1);
            uVar3 = *(uint *)((long)plVar10 + 0xc) & 0x7fffffff;
            if (uVar18 < uVar3) {
              *(long *)(*plVar10 + (ulong)uVar18 * 8) = local_58;
              uVar18 = uVar18 + 1;
              *(uint *)(plVar10 + 1) = uVar18;
              if (uVar18 < uVar3) {
LAB_00397e30:
                *(long *)(*plVar10 + (ulong)uVar18 * 8) = lVar16;
                *(uint *)(plVar10 + 1) = uVar18 + 1;
                local_58 = lVar16;
                goto LAB_00397e40;
              }
            }
            else {
              FUN_00399250(plVar10,&local_58);
              uVar18 = *(uint *)(plVar10 + 1);
              if (uVar18 < (*(uint *)((long)plVar10 + 0xc) & 0x7fffffff)) goto LAB_00397e30;
            }
            local_58 = lVar16;
            FUN_00399250(plVar10,&local_58);
          }
LAB_00397e40:
          uVar23 = *(int *)(lVar11 + 0x24) + uVar23;
          param_3[1] = param_3[1] + *(int *)(lVar11 + 0x24);
          if (param_5 <= uVar23) break;
          plVar10 = (long *)param_1[9];
          iVar15 = (int)plVar10[1];
        } while (iVar15 != 0);
      }
      uVar12 = 1;
    }
  }
  else {
    if (param_4 == 0) {
      uVar23 = param_2[1];
      uVar21 = (ulong)uVar23;
      if (uVar23 != 0) {
        FUN_00397700(param_1,1);
        *param_3 = 1;
        *(uint *)(param_1 + 1) = uVar23;
        plVar10 = (long *)FUN_00400d30();
        lVar11 = (**(code **)(*plVar10 + 0x10))
                           (plVar10,uVar21 << 2,"NonTrackedAlloc",
                            "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqAABBTree.cpp"
                            ,200);
        *param_1 = lVar11;
        if (uVar21 - 1 < 3) {
          lVar16 = 0;
        }
        else {
          lVar16 = 0;
          piVar20 = (int *)(lVar11 + 8);
          do {
            iVar15 = (int)lVar16;
            piVar20[-2] = iVar15;
            piVar20[-1] = iVar15 + 1;
            lVar16 = lVar16 + 4;
            *piVar20 = iVar15 + 2;
            piVar20[1] = iVar15 + 3;
            piVar20 = piVar20 + 4;
          } while (uVar21 - (uVar21 & 3) != lVar16);
        }
        if ((uVar23 & 3) != 0) {
          lVar19 = -(uVar21 & 3);
          do {
            *(int *)(lVar11 + lVar16 * 4) = (int)lVar16;
            lVar16 = lVar16 + 1;
            lVar19 = lVar19 + 1;
          } while (lVar19 != 0);
        }
        FUN_003995e0(param_1 + 3,uVar21,*param_2);
        if (uVar23 + 1 == 0) {
          lVar11 = 0;
        }
        else {
          plVar10 = (long *)FUN_00400d30();
          lVar11 = (**(code **)(*plVar10 + 0x10))
                             (plVar10,(ulong)(uVar23 + 1) * 0xc,"NonTrackedAlloc",
                              "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqAABBTree.cpp"
                              ,0xd1);
        }
        pfVar17 = *(float **)(param_2 + 2);
        *(long *)(param_2 + 4) = lVar11;
        puVar14 = (undefined8 *)(lVar11 + 8);
        do {
          fVar6 = *pfVar17;
          pfVar7 = pfVar17 + 1;
          pfVar8 = pfVar17 + 2;
          pfVar9 = pfVar17 + 3;
          pfVar1 = pfVar17 + 3;
          pfVar5 = pfVar17 + 5;
          uVar21 = uVar21 - 1;
          pfVar17 = pfVar17 + 6;
          auVar24._0_8_ =
               CONCAT44((*pfVar7 + (float)((ulong)*(undefined8 *)pfVar1 >> 0x20)) * 0.5,
                        (fVar6 + (float)*(undefined8 *)pfVar1) * 0.5);
          auVar24._8_4_ = (*pfVar8 + (float)*(undefined8 *)pfVar5) * 0.5;
          auVar24._12_4_ = (*pfVar9 + (float)((ulong)*(undefined8 *)pfVar5 >> 0x20)) * 0.5;
          puVar14[-1] = auVar24._0_8_;
          auVar24 = NEON_ext(auVar24,auVar24,8,1);
          *puVar14 = auVar24._0_8_;
          puVar14 = (undefined8 *)((long)puVar14 + 0xc);
        } while (uVar21 != 0);
        plVar10 = (long *)FUN_00400d30();
        pcVar22 = *(code **)(*plVar10 + 0x10);
        plVar13 = (long *)FUN_00400d60();
        uVar21 = (**(code **)(*plVar13 + 0x28))();
        pcVar4 = 
        "static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::FIFOStack>::getName() [T = physx::Sq::FIFOStack]"
        ;
        if ((uVar21 & 1) == 0) {
          pcVar4 = "<allocation names disabled>";
        }
        puVar14 = (undefined8 *)
                  (*pcVar22)(plVar10,0x18,pcVar4,
                             "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqAABBTree.cpp"
                             ,0x127);
        *puVar14 = 0;
        puVar14[1] = 0;
        *(undefined4 *)(puVar14 + 2) = 0;
        local_58 = param_1[3];
        param_1[9] = (long)puVar14;
        FUN_00399250(puVar14,&local_58);
        return 0;
      }
    }
    uVar12 = 0xffffffff;
  }
  return uVar12;
}


