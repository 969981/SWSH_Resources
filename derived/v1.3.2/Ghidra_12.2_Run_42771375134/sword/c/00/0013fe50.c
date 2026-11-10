/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0013fe50; name: FUN_0013fe50
 */


void FUN_0013fe50(long *param_1,ulong param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  void *__dest;
  void *__dest_00;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if ((param_2 & 1) == 0) {
    if ((int)param_1[2] != 0) {
      lVar8 = *param_1;
      uVar5 = 0;
      do {
        *(undefined4 *)(lVar8 + uVar5 * 4) = 0x3fffffff;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 2));
    }
    if ((int)param_1[6] == 0) {
      return;
    }
    lVar8 = *param_1;
    lVar9 = param_1[1];
    uVar5 = 0;
    piVar6 = (int *)(param_1[4] + 4);
    do {
      puVar1 = (uint *)(piVar6 + -1);
      iVar2 = *piVar6;
      piVar6 = piVar6 + 2;
      uVar3 = *puVar1 | iVar2 << 0x10;
      uVar3 = uVar3 + (uVar3 << 0xf ^ 0xffffffff);
      uVar3 = (uVar3 ^ (int)uVar3 >> 10) * 9;
      uVar3 = uVar3 ^ (int)uVar3 >> 6;
      uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff);
      lVar7 = (ulong)((uVar3 ^ (int)uVar3 >> 0x10) & *(uint *)(param_1 + 7)) * 4;
      *(undefined4 *)(lVar9 + uVar5 * 4) = *(undefined4 *)(lVar8 + lVar7);
      *(int *)(lVar8 + lVar7) = (int)uVar5;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 6));
    return;
  }
  lVar8 = *param_1;
  if (lVar8 != 0) {
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar8);
  }
  uVar3 = *(uint *)(param_1 + 2);
  *(uint *)((long)param_1 + 0x14) = uVar3;
  *(uint *)((long)param_1 + 0x34) = uVar3;
  if (uVar3 == 0) {
    lVar8 = 0;
    __dest = (void *)0x0;
    *param_1 = 0;
    iVar2 = (int)param_1[6];
  }
  else {
    plVar4 = (long *)FUN_00400d30();
    lVar8 = (**(code **)(*plVar4 + 0x10))
                      (plVar4,(ulong)uVar3 << 2,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSapAux.cpp"
                       ,0x19d);
    *param_1 = lVar8;
    if ((int)param_1[2] != 0) {
      uVar5 = 0;
      do {
        *(undefined4 *)(lVar8 + uVar5 * 4) = 0x3fffffff;
        uVar3 = *(uint *)(param_1 + 2);
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
      if (uVar3 == 0) {
        __dest = (void *)0x0;
      }
      else {
        plVar4 = (long *)FUN_00400d30();
        __dest = (void *)(**(code **)(*plVar4 + 0x10))
                                   (plVar4,(ulong)uVar3 << 3,"NonTrackedAlloc",
                                    "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSapAux.cpp"
                                    ,0x1a5);
        uVar3 = *(uint *)(param_1 + 2);
        if (uVar3 != 0) {
          plVar4 = (long *)FUN_00400d30();
          lVar8 = (**(code **)(*plVar4 + 0x10))
                            (plVar4,(ulong)uVar3 << 2,"NonTrackedAlloc",
                             "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSapAux.cpp"
                             ,0x1a6);
          lVar9 = param_1[2];
          if ((int)lVar9 != 0) {
            plVar4 = (long *)FUN_00400d30();
            __dest_00 = (void *)(**(code **)(*plVar4 + 0x10))
                                          (plVar4,(int)lVar9,"NonTrackedAlloc",
                                           "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSapAux.cpp"
                                           ,0x1a7);
            iVar2 = (int)param_1[6];
            goto joined_r0x00140070;
          }
          iVar2 = (int)param_1[6];
          goto joined_r0x00140070;
        }
      }
      lVar8 = 0;
      __dest_00 = (void *)0x0;
      iVar2 = (int)param_1[6];
      goto joined_r0x00140070;
    }
    lVar8 = 0;
    __dest = (void *)0x0;
    iVar2 = (int)param_1[6];
  }
joined_r0x00140070:
  __dest_00 = (void *)0x0;
joined_r0x00140070:
  if (iVar2 != 0) {
    memcpy(__dest,(void *)param_1[4],(ulong)(uint)(iVar2 << 3));
    memcpy(__dest_00,(void *)param_1[5],(ulong)*(uint *)(param_1 + 6));
    if ((int)param_1[6] != 0) {
      lVar9 = *param_1;
      uVar5 = 0;
      piVar6 = (int *)(param_1[4] + 4);
      do {
        puVar1 = (uint *)(piVar6 + -1);
        iVar2 = *piVar6;
        piVar6 = piVar6 + 2;
        uVar3 = *puVar1 | iVar2 << 0x10;
        uVar3 = uVar3 + (uVar3 << 0xf ^ 0xffffffff);
        uVar3 = (uVar3 ^ (int)uVar3 >> 10) * 9;
        uVar3 = uVar3 ^ (int)uVar3 >> 6;
        uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff);
        lVar7 = (ulong)((uVar3 ^ (int)uVar3 >> 0x10) & *(uint *)(param_1 + 7)) * 4;
        *(undefined4 *)(lVar8 + uVar5 * 4) = *(undefined4 *)(lVar9 + lVar7);
        *(int *)(lVar9 + lVar7) = (int)uVar5;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 6));
    }
  }
  lVar9 = param_1[1];
  if (lVar9 != 0) {
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar9);
  }
  lVar9 = param_1[4];
  if (lVar9 != 0) {
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar9);
  }
  lVar9 = param_1[5];
  if (lVar9 != 0) {
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar9);
  }
  param_1[4] = (long)__dest;
  param_1[5] = (long)__dest_00;
  param_1[1] = lVar8;
  return;
}


