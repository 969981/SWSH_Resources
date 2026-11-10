/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00140ba0; name: FUN_00140ba0
 */


/* WARNING: Removing unreachable block (ram,0x00140cc8) */

void FUN_00140ba0(long *param_1,uint param_2,long *param_3,uint *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined4 *puVar6;
  uint *puVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long local_68;
  
  uVar12 = (ulong)param_2;
  if (param_2 + 1 == 0) {
    local_68 = 0;
    uVar12 = 0xffffffff;
  }
  else {
    plVar4 = (long *)FUN_00400d30();
    local_68 = (**(code **)(*plVar4 + 0x10))
                         (plVar4,(ulong)(param_2 + 1) << 3,"NonTrackedAlloc",
                          "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSapAux.cpp"
                          ,0x2e6);
    if (param_2 == 0) {
      uVar12 = 0;
      *param_1 = local_68;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 4) = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      goto LAB_00140d64;
    }
  }
  plVar4 = (long *)FUN_00400d30();
  lVar5 = (**(code **)(*plVar4 + 0x10))
                    (plVar4,uVar12 << 4,"NonTrackedAlloc",
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSapAux.cpp"
                     ,0x2e7);
  plVar4 = (long *)FUN_00400d30();
  puVar6 = (undefined4 *)
           (**(code **)(*plVar4 + 0x10))
                     (plVar4,uVar12 << 2,"NonTrackedAlloc",
                      "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSapAux.cpp"
                      ,0x2e8);
  plVar4 = (long *)FUN_00400d30();
  puVar7 = (uint *)(**(code **)(*plVar4 + 0x10))
                             (plVar4,uVar12 << 2,"NonTrackedAlloc",
                              "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSapAux.cpp"
                              ,0x2e9);
  *param_1 = local_68;
  param_1[1] = lVar5;
  *(uint *)(param_1 + 4) = param_2;
  param_1[2] = (long)puVar6;
  param_1[3] = (long)puVar7;
  lVar8 = param_3[2];
  lVar1 = *param_3;
  lVar2 = param_3[1];
  puVar10 = (undefined4 *)(lVar5 + 8);
  puVar9 = (undefined4 *)(local_68 + 4);
  uVar11 = uVar12;
  do {
    uVar3 = *param_4;
    lVar5 = (ulong)uVar3 * 8;
    uVar11 = uVar11 - 1;
    *puVar6 = *(undefined4 *)(param_5 + (ulong)uVar3 * 4);
    *puVar7 = uVar3;
    puVar9[-1] = *(undefined4 *)(lVar1 + lVar5);
    *puVar9 = ((undefined4 *)(lVar1 + lVar5))[1];
    puVar10[-2] = *(undefined4 *)(lVar8 + lVar5);
    *puVar10 = ((undefined4 *)(lVar8 + lVar5))[1];
    puVar10[-1] = *(undefined4 *)(lVar2 + lVar5);
    puVar10[1] = ((undefined4 *)(lVar2 + lVar5))[1];
    puVar10 = puVar10 + 4;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 2;
    param_4 = param_4 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar11 != 0);
LAB_00140d64:
  *(undefined4 *)(local_68 + uVar12 * 8) = 0xffffffff;
  return;
}


