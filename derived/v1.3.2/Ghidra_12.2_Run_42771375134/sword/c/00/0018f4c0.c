/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0018f4c0; name: FUN_0018f4c0
 */


void FUN_0018f4c0(long *param_1,long param_2,long param_3)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  code *pcVar9;
  
  puVar2 = PTR_DAT_02710f50;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[3] = 0x40000000010;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
                    /* try { // try from 0018f518 to 0018f567 has its CatchHandler @ 0018f7d0 */
  plVar4 = (long *)FUN_00400d30();
  pcVar9 = *(code **)(*plVar4 + 0x10);
  plVar5 = (long *)FUN_00400d60();
  uVar6 = (**(code **)(*plVar5 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::ParticleSystemSimCpu>::getName() [T = physx::Pt::ParticleSystemSimCpu]"
  ;
  if ((uVar6 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  lVar7 = (*pcVar9)(plVar4,0x2000,pcVar1,"./../../Common/src\\CmPool.h",0x40);
  param_1[9] = 0;
  param_1[7] = lVar7;
  param_1[8] = (long)param_1;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  if (1 < *(uint *)((long)param_1 + 0x1c)) {
    uVar8 = 0xffffffff;
    do {
      uVar8 = uVar8 + 1;
    } while ((int)param_1[3] != 1 << (ulong)(uVar8 & 0x1f));
    *(uint *)((long)param_1 + 0x24) = uVar8;
  }
  param_1[0xb] = 0x40000000100;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
                    /* try { // try from 0018f5c0 to 0018f607 has its CatchHandler @ 0018f7c8 */
  plVar4 = (long *)FUN_00400d30();
  pcVar9 = *(code **)(*plVar4 + 0x10);
  plVar5 = (long *)FUN_00400d60();
  uVar6 = (**(code **)(*plVar5 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::ParticleShapeCpu>::getName() [T = physx::Pt::ParticleShapeCpu]"
  ;
  if ((uVar6 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  lVar7 = (*pcVar9)(plVar4,0x2000,pcVar1,"./../../Common/src\\CmPool.h",0x40);
  param_1[0x11] = 0;
  param_1[0xf] = lVar7;
  param_1[0x10] = (long)param_1;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0;
  if (1 < *(uint *)((long)param_1 + 0x5c)) {
    uVar8 = 0xffffffff;
    do {
      uVar8 = uVar8 + 1;
    } while ((int)param_1[0xb] != 1 << (ulong)(uVar8 & 0x1f));
    *(uint *)((long)param_1 + 100) = uVar8;
  }
                    /* try { // try from 0018f644 to 0018f6a7 has its CatchHandler @ 0018f7d4 */
  iVar3 = FUN_003ff600();
  if (iVar3 == 0) {
    lVar7 = 0;
  }
  else {
    plVar4 = (long *)FUN_00400d30();
    pcVar9 = *(code **)(*plVar4 + 0x10);
    plVar5 = (long *)FUN_00400d60();
    uVar6 = (**(code **)(*plVar5 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::MutexImpl>::getName() [T = physx::shdfnd::MutexImpl]"
    ;
    if ((uVar6 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar7 = (*pcVar9)(plVar4,iVar3,pcVar1,"./../../../../PxShared/src/foundation/include\\PsMutex.h"
                      ,0x71);
  }
  param_1[0x13] = lVar7;
  FUN_003ff550();
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  param_1[0x16] = param_3;
                    /* try { // try from 0018f6b0 to 0018f6fb has its CatchHandler @ 0018f7dc */
  plVar4 = (long *)FUN_00400d30();
  pcVar9 = *(code **)(*plVar4 + 0x10);
  plVar5 = (long *)FUN_00400d60();
  uVar6 = (**(code **)(*plVar5 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::Batcher>::getName() [T = physx::Pt::Batcher]"
  ;
  if ((uVar6 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  lVar7 = (*pcVar9)(plVar4,0x2a8,pcVar1,
                    "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtContextCpu.cpp"
                    ,0x8e);
                    /* try { // try from 0018f6fc to 0018f707 has its CatchHandler @ 0018f7a4 */
  FUN_001b15e0(lVar7,param_1);
  param_1[0x14] = lVar7;
                    /* try { // try from 0018f70c to 0018f757 has its CatchHandler @ 0018f7dc */
  plVar4 = (long *)FUN_00400d30();
  pcVar9 = *(code **)(*plVar4 + 0x10);
  plVar5 = (long *)FUN_00400d60();
  uVar6 = (**(code **)(*plVar5 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::BodyTransformVault>::getName() [T = physx::Pt::BodyTransformVault]"
  ;
  if ((uVar6 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  lVar7 = (*pcVar9)(plVar4,0x2240,pcVar1,
                    "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtContextCpu.cpp"
                    ,0x8f);
                    /* try { // try from 0018f758 to 0018f75f has its CatchHandler @ 0018f780 */
  FUN_00190f50(lVar7);
  param_1[1] = lVar7;
  param_1[2] = 0;
  return;
}


