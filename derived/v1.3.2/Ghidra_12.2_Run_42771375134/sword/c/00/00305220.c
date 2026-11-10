/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00305220; name: FUN_00305220
 */


long * FUN_00305220(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  char *pcVar1;
  float fVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  code *pcVar9;
  float fVar10;
  undefined4 uVar11;
  
  plVar4 = (long *)FUN_00400d30();
  pcVar9 = *(code **)(*plVar4 + 0x10);
  plVar5 = (long *)FUN_00400d60();
  uVar6 = (**(code **)(*plVar5 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Ext::PrismaticJoint>::getName() [T = physx::Ext::PrismaticJoint]"
  ;
  if ((uVar6 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  plVar4 = (long *)(*pcVar9)(plVar4,0x70,pcVar1,
                             "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtensions/src/ExtPrismaticJoint.cpp"
                             ,0x33);
                    /* try { // try from 003052a8 to 003052b3 has its CatchHandler @ 003053f0 */
  pfVar7 = (float *)(**(code **)(*param_1 + 0x28))(param_1);
  puVar3 = PTR_DAT_027121e8;
  *(undefined4 *)(plVar4 + 1) = 0x30102;
  plVar4[3] = (long)(puVar3 + 0x1c0);
  plVar4[4] = 0;
  plVar4[0xc] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)(puVar3 + 0x10);
                    /* try { // try from 003052e8 to 00305313 has its CatchHandler @ 003053fc */
  plVar5 = (long *)FUN_00400d30();
  lVar8 = (**(code **)(*plVar5 + 0x10))
                    (plVar5,0x70,"NonTrackedAlloc","./../../PhysXExtensions/src/ExtPrismaticJoint.h"
                     ,0x5e);
  plVar4[0xd] = lVar8;
  fVar2 = DAT_01d4c4d4;
  uVar11 = DAT_01d4bbac;
  fVar10 = *pfVar7;
  *(undefined8 *)(lVar8 + 0x5c) = 0xfeaaaaaa7eaaaaaa;
  uVar11 = NEON_fminnm(fVar10 * fVar2,uVar11);
  *(undefined4 *)(lVar8 + 0x48) = 0;
  *(undefined8 *)(lVar8 + 0x50) = 0;
  *(float *)(lVar8 + 0x4c) = fVar10 + fVar10;
  *(undefined4 *)(lVar8 + 0x58) = uVar11;
  *(undefined8 *)(lVar8 + 100) = 0x40490fdb501502f9;
  *(undefined2 *)(lVar8 + 0x6c) = 0;
                    /* try { // try from 00305370 to 0030538b has its CatchHandler @ 003053ec */
  FUN_00307b50(plVar4,lVar8,param_2,param_3,param_4,param_5);
  lVar8 = (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_4,plVar4 + 3,PTR_PTR_027121f0,0x70);
  plVar4[0xc] = lVar8;
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
    plVar4 = (long *)0x0;
  }
  return plVar4;
}


