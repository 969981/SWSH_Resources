/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039a110; name: FUN_0039a110
 */


void FUN_0039a110(undefined8 *param_1,int param_2,undefined8 param_3)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  *(int *)(param_1 + 5) = param_2;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  if (param_2 == 2) {
    plVar2 = (long *)FUN_00400d30();
    pcVar6 = *(code **)(*plVar2 + 0x10);
    plVar3 = (long *)FUN_00400d60();
    uVar4 = (**(code **)(*plVar3 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBPruner>::getName() [T = physx::Sq::AABBPruner]"
    ;
    if ((uVar4 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    uVar5 = (*pcVar6)(plVar2,0x2010,pcVar1,
                      "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqSceneQueryManager.cpp"
                      ,0x51);
                    /* try { // try from 0039a254 to 0039a25f has its CatchHandler @ 0039a2a0 */
    FUN_0039b090(uVar5,0,param_3);
  }
  else if (param_2 == 1) {
    plVar2 = (long *)FUN_00400d30();
    pcVar6 = *(code **)(*plVar2 + 0x10);
    plVar3 = (long *)FUN_00400d60();
    uVar4 = (**(code **)(*plVar3 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBPruner>::getName() [T = physx::Sq::AABBPruner]"
    ;
    if ((uVar4 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    uVar5 = (*pcVar6)(plVar2,0x2010,pcVar1,
                      "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqSceneQueryManager.cpp"
                      ,0x50);
                    /* try { // try from 0039a1f0 to 0039a1fb has its CatchHandler @ 0039a2c4 */
    FUN_0039b090(uVar5,1,param_3);
  }
  else if (param_2 == 0) {
    plVar2 = (long *)FUN_00400d30();
    pcVar6 = *(code **)(*plVar2 + 0x10);
    plVar3 = (long *)FUN_00400d60();
    uVar4 = (**(code **)(*plVar3 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::BucketPruner>::getName() [T = physx::Sq::BucketPruner]"
    ;
    if ((uVar4 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    uVar5 = (*pcVar6)(plVar2,0x1ed0,pcVar1,
                      "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqSceneQueryManager.cpp"
                      ,0x4f);
                    /* try { // try from 0039a194 to 0039a197 has its CatchHandler @ 0039a27c */
    FUN_003a5980();
  }
  else {
    uVar5 = 0;
  }
  *param_1 = uVar5;
  return;
}


