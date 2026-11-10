/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00398780; name: FUN_00398780
 */


void FUN_00398780(long param_1,undefined4 *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong *puVar7;
  void *__dest;
  int iVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  ulong *__dest_00;
  ulong uVar14;
  code *pcVar15;
  
  uVar14 = (ulong)(*(int *)(param_1 + 0x40) + *param_3 + 1);
  plVar4 = (long *)FUN_00400d30();
  pcVar15 = *(code **)(*plVar4 + 0x10);
  plVar5 = (long *)FUN_00400d60();
  uVar6 = (**(code **)(*plVar5 + 0x28))();
  pcVar2 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBTreeRuntimeNode>::getName() [T = physx::Sq::AABBTreeRuntimeNode]"
  ;
  if ((uVar6 & 1) == 0) {
    pcVar2 = "<allocation names disabled>";
  }
  puVar7 = (ulong *)(*pcVar15)(plVar4,uVar14 * 0x1c + 8,pcVar2,
                               "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqAABBTree.cpp"
                               ,0x2a2);
  __dest_00 = puVar7 + 1;
  *puVar7 = uVar14;
  iVar8 = *(int *)(param_1 + 0x40);
  uVar1 = iVar8 + *param_3 + 1;
  if (uVar1 == 0) {
    __dest = (void *)0x0;
  }
  else {
    plVar4 = (long *)FUN_00400d30();
    __dest = (void *)(**(code **)(*plVar4 + 0x10))
                               (plVar4,(ulong)uVar1 << 2,"NonTrackedAlloc",
                                "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqAABBTree.cpp"
                                ,0x2a3);
    iVar8 = *(int *)(param_1 + 0x40);
  }
  memcpy(__dest_00,*(void **)(param_1 + 0x10),(ulong)(uint)(iVar8 * 0x1c));
  memcpy(__dest,*(void **)(param_1 + 0x38),(ulong)(uint)(*(int *)(param_1 + 0x40) << 2));
  uVar1 = *(uint *)(param_1 + 0x40);
  puVar9 = (undefined4 *)((long)__dest_00 + (ulong)uVar1 * 0x1c);
  *puVar9 = *param_2;
  puVar9[1] = param_2[1];
  puVar9[2] = param_2[2];
  puVar9[3] = param_2[3];
  puVar9[4] = param_2[4];
  puVar9[5] = param_2[5];
  puVar9[6] = param_2[6];
  *(uint *)((long)__dest + (ulong)uVar1 * 4) = param_4;
  lVar10 = *(long *)(param_1 + 0x50);
  if ((lVar10 != 0) &&
     ((*(uint *)(lVar10 + (ulong)(param_4 >> 5) * 4) & 1 << (ulong)(param_4 & 0x1f)) != 0)) {
    uVar3 = uVar1 >> 5;
    *(uint *)(lVar10 + (ulong)uVar3 * 4) =
         *(uint *)(lVar10 + (ulong)uVar3 * 4) | 1 << (ulong)(uVar1 & 0x1f);
    if (uVar3 <= *(uint *)(param_1 + 0x60)) {
      uVar3 = *(uint *)(param_1 + 0x60);
    }
    *(uint *)(param_1 + 0x60) = uVar3;
  }
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 != 0) {
                    /* try { // try from 00398934 to 00398947 has its CatchHandler @ 00398a7c */
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar10 + -8);
  }
  *(ulong **)(param_1 + 0x10) = __dest_00;
  lVar10 = *(long *)(param_1 + 0x38);
  if (lVar10 != 0) {
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar10);
  }
  *(void **)(param_1 + 0x38) = __dest;
  if (*param_3 == 0) {
    lVar10 = *(long *)(param_1 + 0x10);
  }
  else {
    lVar10 = *(long *)(param_1 + 0x10);
    uVar6 = 0;
    puVar9 = (undefined4 *)(*(long *)(param_3 + 2) + 0xc);
    do {
      uVar14 = (uVar1 + 1) + uVar6;
      uVar12 = uVar14 & 0xffffffff;
      puVar13 = (undefined4 *)(lVar10 + uVar12 * 0x1c);
      *puVar13 = puVar9[-3];
      puVar13[1] = puVar9[-2];
      puVar13[2] = puVar9[-1];
      puVar13[3] = *puVar9;
      puVar13[4] = puVar9[1];
      puVar13[5] = puVar9[2];
      uVar3 = puVar9[3];
      if ((uVar3 & 1) == 0) {
        uVar3 = uVar1 + 1 + (uVar3 >> 1);
        *(uint *)(lVar10 + uVar12 * 0x1c + 0x18) = uVar3 * 2;
        uVar11 = (undefined4)uVar14;
        *(undefined4 *)((long)__dest + (ulong)uVar3 * 4) = uVar11;
        *(undefined4 *)((long)__dest + (ulong)(uVar3 + 1) * 4) = uVar11;
      }
      else {
        *(uint *)(lVar10 + uVar12 * 0x1c + 0x18) =
             uVar3 & 0x1e | uVar3 + *(int *)(param_1 + 8) * 0x20 & 0xffffffe0 | 1;
      }
      uVar6 = uVar6 + 1;
      puVar9 = puVar9 + 7;
    } while (uVar6 < *param_3);
  }
  *(uint *)((long)__dest + (ulong)(*(int *)(param_1 + 0x40) + 1) * 4) = param_4;
  iVar8 = *(int *)(param_1 + 0x40);
  *(int *)(lVar10 + (ulong)param_4 * 0x1c + 0x18) = iVar8 << 1;
  *(uint *)(param_1 + 0x40) = iVar8 + *param_3 + 1;
  return;
}


