/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00399710; name: FUN_00399710
 */


long FUN_00399710(long param_1)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  uint *puVar9;
  code *pcVar10;
  
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 2;
  lVar8 = *(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x18) * 0x10;
  puVar9 = (uint *)(lVar8 + 8);
  uVar3 = *puVar9;
  uVar1 = uVar3 + 2;
  if (uVar1 <= *(uint *)(lVar8 + 0xc)) {
    lVar8 = *(long *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x18) * 0x10);
    *puVar9 = uVar1;
    return lVar8 + (ulong)uVar3 * 0x28;
  }
  plVar4 = (long *)FUN_00400d30();
  pcVar10 = *(code **)(*plVar4 + 0x10);
  plVar5 = (long *)FUN_00400d60();
  uVar6 = (**(code **)(*plVar5 + 0x28))();
  pcVar2 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBTreeBuildNode>::getName() [T = physx::Sq::AABBTreeBuildNode]"
  ;
  if ((uVar6 & 1) == 0) {
    pcVar2 = "<allocation names disabled>";
  }
  puVar7 = (undefined8 *)
           (*pcVar10)(plVar4,0xa008,pcVar2,
                      "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqAABBTreeBuild.cpp"
                      ,0x5e);
  *puVar7 = 0x400;
                    /* WARNING: Subroutine does not return */
  memset(puVar7 + 1,0,0xa000);
}


