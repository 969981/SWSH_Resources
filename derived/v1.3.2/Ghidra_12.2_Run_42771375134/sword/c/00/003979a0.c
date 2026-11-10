/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003979a0; name: FUN_003979a0
 */


void FUN_003979a0(long param_1,long param_2,uint *param_3)

{
  char *pcVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  code *pcVar8;
  
  lVar7 = *(long *)(param_2 + 0x10);
  if (lVar7 != 0) {
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar2 = *param_3;
  *(uint *)(param_1 + 0x40) = uVar2;
  *(uint *)(param_1 + 0x44) = param_3[1];
  plVar3 = (long *)FUN_00400d30();
  pcVar8 = *(code **)(*plVar3 + 0x10);
  plVar4 = (long *)FUN_00400d60();
  uVar5 = (**(code **)(*plVar4 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBTreeRuntimeNode>::getName() [T = physx::Sq::AABBTreeRuntimeNode]"
  ;
  if ((uVar5 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  puVar6 = (ulong *)(*pcVar8)(plVar3,(ulong)uVar2 * 0x1c + 8,pcVar1,
                              "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqAABBTree.cpp"
                              ,0xe5);
  *puVar6 = (ulong)uVar2;
  *(ulong **)(param_1 + 0x10) = puVar6 + 1;
  FUN_00397530(param_1 + 0x18,puVar6 + 1);
  FUN_003994e0(param_1 + 0x18);
  return;
}


