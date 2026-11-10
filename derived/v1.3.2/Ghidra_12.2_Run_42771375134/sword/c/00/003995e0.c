/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003995e0; name: FUN_003995e0
 */


void FUN_003995e0(undefined8 *param_1,int param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong *puVar6;
  uint uVar7;
  code *pcVar8;
  
  uVar2 = param_2 * 2 - 1;
  uVar7 = uVar2;
  if ((0x400 < uVar2) && (uVar7 = 0, param_3 != 0)) {
    uVar7 = uVar2 / param_3;
  }
  plVar3 = (long *)FUN_00400d30();
  pcVar8 = *(code **)(*plVar3 + 0x10);
  plVar4 = (long *)FUN_00400d60();
  uVar5 = (**(code **)(*plVar4 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBTreeBuildNode>::getName() [T = physx::Sq::AABBTreeBuildNode]"
  ;
  if ((uVar5 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  puVar6 = (ulong *)(*pcVar8)(plVar3,(ulong)uVar7 * 0x28 + 8,pcVar1,
                              "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqAABBTreeBuild.cpp"
                              ,0x43);
  *puVar6 = (ulong)uVar7;
  *param_1 = puVar6 + 1;
                    /* WARNING: Subroutine does not return */
  memset(puVar6 + 1,0,(ulong)(uVar7 * 0x28));
}


