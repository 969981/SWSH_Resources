/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029c6b0; name: FUN_0029c6b0
 */


long FUN_0029c6b0(long param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  long local_40;
  char local_34 [4];
  
  plVar3 = (long *)FUN_00400d30();
  pcVar7 = *(code **)(*plVar3 + 0x10);
  plVar4 = (long *)FUN_00400d60();
  uVar5 = (**(code **)(*plVar4 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Gu::ConvexMesh>::getName() [T = physx::Gu::ConvexMesh]"
  ;
  if ((uVar5 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  lVar6 = (*pcVar7)(plVar3,0xa8,pcVar1,
                    "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/GuMeshFactory.cpp"
                    ,0x21f);
                    /* try { // try from 0029c720 to 0029c723 has its CatchHandler @ 0029c7ac */
  FUN_0029e280();
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0xa0) = param_1;
    uVar5 = FUN_0029e6f0(lVar6,param_2);
    if ((uVar5 & 1) == 0) {
      iVar2 = FUN_003ff490(lVar6 + 0x18);
      if (iVar2 == 0) {
        (**(code **)(*(long *)(lVar6 + 0x10) + 0x10))();
      }
      lVar6 = 0;
    }
    else {
      local_40 = lVar6;
      FUN_003ff570(*(undefined8 *)(param_1 + 8));
      plVar3 = (long *)FUN_0029daf0(param_1 + 0x48,&local_40,local_34);
      if (local_34[0] == '\0') {
        *plVar3 = local_40;
      }
      FUN_003ff5a0(*(undefined8 *)(param_1 + 8));
    }
  }
  return lVar6;
}


