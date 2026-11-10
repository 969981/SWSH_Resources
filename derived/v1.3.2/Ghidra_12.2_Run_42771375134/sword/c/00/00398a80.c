/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00398a80; name: FUN_00398a80
 */


void FUN_00398a80(long param_1,undefined4 *param_2,uint *param_3,uint param_4)

{
  ulong uVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong *puVar9;
  void *__dest;
  undefined4 *puVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  undefined4 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  ulong *__dest_00;
  code *pcVar18;
  ulong uVar19;
  
  uVar3 = param_2[6];
  uVar19 = (ulong)(*(int *)(param_1 + 0x40) + *param_3 + 1);
  uVar4 = uVar3 >> 1;
  plVar6 = (long *)FUN_00400d30();
  pcVar18 = *(code **)(*plVar6 + 0x10);
  plVar7 = (long *)FUN_00400d60();
  uVar8 = (**(code **)(*plVar7 + 0x28))();
  pcVar2 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBTreeRuntimeNode>::getName() [T = physx::Sq::AABBTreeRuntimeNode]"
  ;
  if ((uVar8 & 1) == 0) {
    pcVar2 = "<allocation names disabled>";
  }
  puVar9 = (ulong *)(*pcVar18)(plVar6,uVar19 * 0x1c + 8,pcVar2,
                               "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqAABBTree.cpp"
                               ,0x2e4);
  __dest_00 = puVar9 + 1;
  *puVar9 = uVar19;
  uVar15 = *(int *)(param_1 + 0x40) + *param_3 + 1;
  if (uVar15 == 0) {
    __dest = (void *)0x0;
  }
  else {
    plVar6 = (long *)FUN_00400d30();
    __dest = (void *)(**(code **)(*plVar6 + 0x10))
                               (plVar6,(ulong)uVar15 << 2,"NonTrackedAlloc",
                                "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqAABBTree.cpp"
                                ,0x2e5);
  }
  memcpy(__dest_00,*(void **)(param_1 + 0x10),(ulong)(uVar4 * 0x1c));
  memcpy(__dest,*(void **)(param_1 + 0x38),(ulong)(uVar4 << 2));
  puVar10 = (undefined4 *)((long)__dest_00 + (ulong)uVar4 * 0x1c);
  puVar12 = (uint *)((long)__dest + (ulong)uVar4 * 4);
  *puVar10 = *param_2;
  puVar10[1] = param_2[1];
  puVar10[2] = param_2[2];
  puVar10[3] = param_2[3];
  puVar10[4] = param_2[4];
  puVar10[5] = param_2[5];
  puVar10[6] = (*param_3 + ((uint)param_2[6] >> 1)) * 2 + 2;
  *puVar12 = param_4;
  lVar11 = *(long *)(param_1 + 0x50);
  if ((lVar11 != 0) &&
     ((*(uint *)(lVar11 + (ulong)(param_4 >> 5) * 4) & 1 << (ulong)(param_4 & 0x1f)) != 0)) {
    uVar15 = uVar3 >> 6;
    *(uint *)(lVar11 + (ulong)uVar15 * 4) =
         *(uint *)(lVar11 + (ulong)uVar15 * 4) | 1 << (ulong)(uVar3 >> 1 & 0x1f);
    if (uVar15 <= *(uint *)(param_1 + 0x60)) {
      uVar15 = *(uint *)(param_1 + 0x60);
    }
    *(uint *)(param_1 + 0x60) = uVar15;
  }
  uVar8 = (ulong)uVar4;
  iVar5 = *(int *)(param_1 + 0x40) - uVar4;
  if (iVar5 != 0) {
    memcpy(puVar10 + (ulong)*param_3 * 7 + 7,(void *)(*(long *)(param_1 + 0x10) + uVar8 * 0x1c),
           (ulong)(uint)(iVar5 * 0x1c));
    memcpy(puVar12 + (ulong)*param_3 + 1,(void *)(*(long *)(param_1 + 0x38) + uVar8 * 4),
           (ulong)((*(int *)(param_1 + 0x40) - uVar4) * 4));
  }
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 != 0) {
                    /* try { // try from 00398c9c to 00398caf has its CatchHandler @ 00398e80 */
    plVar6 = (long *)FUN_00400d30();
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar11 + -8);
  }
  *(ulong **)(param_1 + 0x10) = __dest_00;
  lVar11 = *(long *)(param_1 + 0x38);
  if (lVar11 != 0) {
    plVar6 = (long *)FUN_00400d30();
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar11);
  }
  *(void **)(param_1 + 0x38) = __dest;
  uVar3 = uVar4 + 1;
  if (*param_3 == 0) {
    uVar15 = 0;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x10);
    uVar19 = 0;
    puVar10 = (undefined4 *)(*(long *)(param_3 + 2) + 0xc);
    do {
      uVar1 = uVar8 + 1 + uVar19;
      uVar16 = uVar1 & 0xffffffff;
      puVar17 = (undefined4 *)(lVar11 + uVar16 * 0x1c);
      *puVar17 = puVar10[-3];
      puVar17[1] = puVar10[-2];
      puVar17[2] = puVar10[-1];
      puVar17[3] = *puVar10;
      puVar17[4] = puVar10[1];
      puVar17[5] = puVar10[2];
      uVar15 = puVar10[3];
      if ((uVar15 & 1) == 0) {
        uVar15 = uVar3 + (uVar15 >> 1);
        *(uint *)(lVar11 + uVar16 * 0x1c + 0x18) = uVar15 * 2;
        uVar14 = (undefined4)uVar1;
        *(undefined4 *)((long)__dest + (ulong)uVar15 * 4) = uVar14;
        *(undefined4 *)((long)__dest + (ulong)(uVar15 + 1) * 4) = uVar14;
      }
      else {
        *(uint *)(lVar11 + uVar16 * 0x1c + 0x18) =
             uVar15 & 0x1e | uVar15 + *(int *)(param_1 + 8) * 0x20 & 0xffffffe0 | 1;
      }
      uVar15 = *param_3;
      uVar19 = uVar19 + 1;
      puVar10 = puVar10 + 7;
    } while (uVar19 < uVar15);
  }
  *(uint *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + uVar15 + 1;
  *(uint *)((long)__dest + (ulong)uVar3 * 4) = param_4;
  uVar3 = *param_3 + uVar3;
  if (uVar3 < *(uint *)(param_1 + 0x40)) {
    lVar11 = *(long *)(param_1 + 0x10);
    uVar8 = (ulong)uVar3;
    puVar12 = (uint *)(lVar11 + (ulong)uVar3 * 0x1c + 0x18);
    do {
      uVar3 = *(uint *)((long)__dest + uVar8 * 4);
      if (uVar3 == param_4) {
        *(uint *)((long)__dest + uVar8 * 4) = uVar4;
        uVar3 = *puVar12;
      }
      else {
        if (uVar3 < uVar4) {
          if ((uVar8 & 1) != 0) {
            lVar13 = lVar11 + (ulong)uVar3 * 0x1c;
            *(uint *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + *param_3 * 2 + 2 & 0xfffffffe;
            uVar3 = *puVar12;
            goto joined_r0x00398e38;
          }
        }
        else {
          *(uint *)((long)__dest + uVar8 * 4) = uVar3 + *param_3 + 1;
        }
        uVar3 = *puVar12;
      }
joined_r0x00398e38:
      if ((uVar3 & 1) == 0) {
        *puVar12 = uVar3 + *param_3 * 2 + 2 & 0xfffffffe;
      }
      uVar8 = uVar8 + 1;
      puVar12 = puVar12 + 7;
    } while ((uint)uVar8 < *(uint *)(param_1 + 0x40));
  }
  return;
}


