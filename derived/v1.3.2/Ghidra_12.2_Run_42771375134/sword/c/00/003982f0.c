/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003982f0; name: FUN_003982f0
 */


void FUN_003982f0(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  void *__s;
  size_t __n;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    uVar10 = *(uint *)(param_1 + 0x40) >> 5;
    if ((*(uint *)(param_1 + 0x40) & 0x1f) != 0) {
      uVar10 = uVar10 + 1;
    }
    *(uint *)(param_1 + 0x58) = uVar10;
    if (uVar10 == 0) {
      __n = 0;
      __s = (void *)0x0;
    }
    else {
      plVar3 = (long *)FUN_00400d30();
      __s = (void *)(**(code **)(*plVar3 + 0x10))
                              (plVar3,uVar10 << 2,"NonTrackedAlloc",
                               "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqAABBTree.cpp"
                               ,0x153);
      __n = (size_t)(uint)(*(int *)(param_1 + 0x58) << 2);
    }
    *(void **)(param_1 + 0x50) = __s;
                    /* WARNING: Subroutine does not return */
    memset(__s,0,__n);
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar10 = *(uint *)(param_1 + 0x40);
    if (uVar10 == 0) {
      uVar2 = 0;
      uVar4 = 0;
    }
    else {
      plVar3 = (long *)FUN_00400d30();
      uVar4 = (**(code **)(*plVar3 + 0x10))
                        (plVar3,(ulong)uVar10 << 2,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqAABBTree.cpp"
                         ,0x1df);
      uVar2 = *(undefined4 *)(param_1 + 0x40);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    FUN_00398460(uVar2,uVar4,uVar5,uVar5,uVar5);
  }
  lVar6 = *(long *)(param_1 + 0x50);
  uVar7 = (ulong)(param_2 >> 5);
  puVar9 = (uint *)(lVar6 + uVar7 * 4);
  uVar10 = *puVar9;
  uVar11 = 1 << (ulong)(param_2 & 0x1f);
  if ((uVar10 & uVar11) == 0) {
    lVar8 = *(long *)(param_1 + 0x38);
    do {
      *puVar9 = uVar10 | uVar11;
      uVar10 = (uint)uVar7;
      if ((uint)uVar7 <= *(uint *)(param_1 + 0x60)) {
        uVar10 = *(uint *)(param_1 + 0x60);
      }
      *(uint *)(param_1 + 0x60) = uVar10;
      uVar1 = *(uint *)(lVar8 + (ulong)param_2 * 4);
      if (param_2 == uVar1) {
        return;
      }
      uVar7 = (ulong)(uVar1 >> 5);
      puVar9 = (uint *)(lVar6 + uVar7 * 4);
      uVar10 = *puVar9;
      uVar11 = 1 << (ulong)(uVar1 & 0x1f);
      param_2 = uVar1;
    } while ((uVar10 & uVar11) == 0);
  }
  return;
}


