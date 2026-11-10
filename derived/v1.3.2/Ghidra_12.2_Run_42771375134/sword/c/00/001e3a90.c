/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e3a90; name: FUN_001e3a90
 */


void FUN_001e3a90(undefined8 *param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *__s;
  size_t __n;
  code *pcVar8;
  
  if (param_1[1] != 0) {
    return;
  }
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    plVar3 = (long *)FUN_00400d30();
    uVar4 = (**(code **)(*plVar3 + 0x10))
                      (plVar3,(ulong)param_2 * 0xc,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/buffering/ScbParticleSystem.cpp"
                       ,0x2f);
  }
  param_1[1] = uVar4;
  plVar3 = (long *)FUN_00400d30();
  pcVar8 = *(code **)(*plVar3 + 0x10);
  plVar5 = (long *)FUN_00400d60();
  uVar6 = (**(code **)(*plVar5 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Cm::BitMapBase<physx::shdfnd::NonTrackingAllocator> >::getName() [T = physx::Cm::BitMapBase<physx::shdfnd::NonTrackingAllocator>]"
  ;
  if ((uVar6 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  puVar7 = (undefined8 *)
           (*pcVar8)(plVar3,0x10,pcVar1,
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/buffering/ScbParticleSystem.cpp"
                     ,0x30);
  uVar2 = param_2 + 0x1f >> 5;
  *puVar7 = 0;
  *(undefined4 *)(puVar7 + 1) = 0;
  *param_1 = puVar7;
  if (uVar2 == 0) {
    __n = 0;
    __s = (void *)0x0;
  }
  else {
    *(uint *)(puVar7 + 1) = uVar2;
    plVar3 = (long *)FUN_00400d30();
    __s = (void *)(**(code **)(*plVar3 + 0x10))
                            (plVar3,uVar2 << 2,"NonTrackedAlloc","./../../Common/src\\CmBitMap.h",
                             0x1ce);
    __n = (size_t)(uint)(*(int *)(puVar7 + 1) << 2);
    *puVar7 = __s;
  }
                    /* WARNING: Subroutine does not return */
  memset(__s,0,__n);
}


