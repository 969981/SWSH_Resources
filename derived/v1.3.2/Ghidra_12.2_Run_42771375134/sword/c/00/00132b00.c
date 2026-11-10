/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00132b00; name: FUN_00132b00
 */


void FUN_00132b00(long param_1,uint *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  code *pcVar18;
  char local_6c [4];
  ulong local_68;
  ulong local_60;
  undefined8 local_58;
  
  lVar13 = *(long *)(param_1 + 0xb0);
  uVar4 = *param_2;
  local_68 = (ulong)uVar4;
  uVar5 = param_2[1];
  local_60 = (ulong)uVar5;
  uVar6 = *(uint *)(lVar13 + local_68 * 0x10 + 8);
  uVar7 = *(uint *)(lVar13 + local_60 * 0x10 + 8);
  if ((uVar7 & uVar6) == 0xffffffff) {
    uVar14 = *(ulong *)(lVar13 + local_68 * 0x10) & 0xf;
    uVar11 = *(ulong *)(lVar13 + local_60 * 0x10) & 0xf;
    if ((uint)uVar11 <= (uint)uVar14) {
      uVar11 = uVar14;
    }
    param_1 = param_1 + uVar11 * 0x10;
    local_58 = 0;
    if (*(uint *)(param_1 + 0x150) < (*(uint *)(param_1 + 0x154) & 0x7fffffff)) {
      puVar12 = (ulong *)(*(long *)(param_1 + 0x148) + (ulong)*(uint *)(param_1 + 0x150) * 0x18);
      puVar12[2] = 0;
      puVar12[1] = local_60;
      *puVar12 = local_68;
      *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
    }
    else {
      FUN_00134310((long *)(param_1 + 0x148),&local_68);
    }
  }
  else {
    uVar2 = uVar5;
    if (uVar4 <= uVar5) {
      uVar2 = uVar4;
      uVar4 = uVar5;
    }
    if (uVar6 == 0xffffffff || uVar7 == 0xffffffff) {
      uVar5 = *(uint *)(lVar13 + (ulong)uVar2 * 0x10 + 8);
      bVar8 = (uVar5 != 0xffffffff & uVar5) == 0;
      uVar5 = uVar2;
      if (bVar8) {
        uVar5 = uVar4;
      }
      uVar6 = uVar4;
      if (bVar8) {
        uVar6 = uVar2;
      }
      puVar16 = *(undefined4 **)
                 (*(long *)(param_1 + 0x1e8) +
                 (ulong)(*(uint *)(lVar13 + (ulong)uVar5 * 0x10 + 8) >> 1) * 8);
      lVar15 = param_1 + 0x210;
      plVar9 = (long *)FUN_00400d30();
      pcVar18 = *(code **)(*plVar9 + 0x10);
      plVar10 = (long *)FUN_00400d60();
      uVar11 = (**(code **)(*plVar10 + 0x28))();
      pcVar3 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::Bp::PersistentActorAggregatePair>::getName() [T = physx::Bp::PersistentActorAggregatePair]"
      ;
      if ((uVar11 & 1) == 0) {
        pcVar3 = "<allocation names disabled>";
      }
      plVar9 = (long *)(*pcVar18)(plVar9,0x58,pcVar3,
                                  "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpSimpleAABBManager.cpp"
                                  ,0x95f);
      *(undefined4 *)(plVar9 + 1) = 0xffffffff;
      plVar9[2] = 0;
      puVar1 = PTR_DAT_02710cc0;
      *(undefined4 *)(plVar9 + 3) = 0;
      plVar9[4] = 0;
      plVar9[5] = 0;
      plVar9[6] = 0;
      *(undefined4 *)(plVar9 + 7) = 0;
      *(undefined1 *)(plVar9 + 8) = 0;
      *plVar9 = (long)(puVar1 + 0x10);
      *(undefined4 *)((long)plVar9 + 0x44) = *puVar16;
      *(uint *)(plVar9 + 9) = uVar6;
      plVar9[10] = (long)puVar16;
    }
    else {
      puVar16 = *(undefined4 **)
                 (*(long *)(param_1 + 0x1e8) +
                 (ulong)(*(uint *)(lVar13 + (ulong)uVar2 * 0x10 + 8) >> 1) * 8);
      lVar15 = param_1 + 0x248;
      puVar17 = *(undefined4 **)
                 (*(long *)(param_1 + 0x1e8) +
                 (ulong)(*(uint *)(lVar13 + (ulong)uVar4 * 0x10 + 8) >> 1) * 8);
      plVar9 = (long *)FUN_00400d30();
      pcVar18 = *(code **)(*plVar9 + 0x10);
      plVar10 = (long *)FUN_00400d60();
      uVar11 = (**(code **)(*plVar10 + 0x28))();
      pcVar3 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::Bp::PersistentAggregateAggregatePair>::getName() [T = physx::Bp::PersistentAggregateAggregatePair]"
      ;
      if ((uVar11 & 1) == 0) {
        pcVar3 = "<allocation names disabled>";
      }
      plVar9 = (long *)(*pcVar18)(plVar9,0x60,pcVar3,
                                  "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpSimpleAABBManager.cpp"
                                  ,0x96c);
      *(undefined4 *)(plVar9 + 1) = 0xffffffff;
      plVar9[2] = 0;
      *(undefined4 *)(plVar9 + 3) = 0;
      plVar9[4] = 0;
      plVar9[5] = 0;
      plVar9[6] = 0;
      *(undefined4 *)(plVar9 + 7) = 0;
      puVar1 = PTR_DAT_02710cc8 + 0x10;
      *(undefined1 *)(plVar9 + 8) = 0;
      *plVar9 = (long)puVar1;
      *(undefined4 *)((long)plVar9 + 0x44) = *puVar16;
      *(undefined4 *)(plVar9 + 9) = *puVar17;
      plVar9[10] = (long)puVar16;
      plVar9[0xb] = (long)puVar17;
    }
    local_68 = CONCAT44(uVar4,uVar2);
    puVar12 = (ulong *)FUN_00135a40(lVar15,&local_68,local_6c);
    if (local_6c[0] == '\0') {
      *puVar12 = local_68;
      puVar12[1] = (ulong)plVar9;
    }
    FUN_0012f240(param_1,plVar9);
  }
  return;
}


