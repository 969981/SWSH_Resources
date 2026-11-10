/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029c5a0; name: thunk_FUN_0029c5b0
 */


long thunk_FUN_0029c5b0(long param_1,undefined8 param_2)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  long lStack_40;
  char acStack_34 [4];
  
  plVar2 = (long *)FUN_00400d30();
  pcVar6 = *(code **)(*plVar2 + 0x10);
  plVar3 = (long *)FUN_00400d60();
  uVar4 = (**(code **)(*plVar3 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Gu::ConvexMesh>::getName() [T = physx::Gu::ConvexMesh]"
  ;
  if ((uVar4 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  lVar5 = (*pcVar6)(plVar2,0xa8,pcVar1,
                    "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/GuMeshFactory.cpp"
                    ,0x215);
  FUN_0029e2f0(lVar5,param_1,param_2);
  if (lVar5 != 0) {
    lStack_40 = lVar5;
    FUN_003ff570(*(undefined8 *)(param_1 + 8));
    plVar2 = (long *)FUN_0029daf0(param_1 + 0x48,&lStack_40,acStack_34);
    if (acStack_34[0] == '\0') {
      *plVar2 = lStack_40;
    }
    FUN_003ff5a0(*(undefined8 *)(param_1 + 8));
  }
  return lVar5;
}


