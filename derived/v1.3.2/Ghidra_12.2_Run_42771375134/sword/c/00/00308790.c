/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00308790; name: FUN_00308790
 */


long * FUN_00308790(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  char *pcVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  
  plVar3 = (long *)FUN_00400d30();
  pcVar7 = *(code **)(*plVar3 + 0x10);
  plVar4 = (long *)FUN_00400d60();
  uVar5 = (**(code **)(*plVar4 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Ext::SphericalJoint>::getName() [T = physx::Ext::SphericalJoint]"
  ;
  if ((uVar5 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  plVar3 = (long *)(*pcVar7)(plVar3,0x70,pcVar1,
                             "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtensions/src/ExtSphericalJoint.cpp"
                             ,0x3b);
                    /* try { // try from 00308818 to 0030881f has its CatchHandler @ 0030893c */
  (**(code **)(*param_1 + 0x28))(param_1);
  puVar2 = PTR_DAT_027121f8;
  *(undefined4 *)(plVar3 + 1) = 0x30100;
  plVar3[3] = (long)(puVar2 + 0x1a0);
  plVar3[4] = 0;
  plVar3[0xc] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
                    /* try { // try from 00308854 to 0030887f has its CatchHandler @ 00308948 */
  plVar4 = (long *)FUN_00400d30();
  lVar6 = (**(code **)(*plVar4 + 0x10))
                    (plVar4,0x80,"NonTrackedAlloc","./../../PhysXExtensions/src/ExtSphericalJoint.h"
                     ,0x5f);
  plVar3[0xd] = lVar6;
                    /* try { // try from 00308884 to 0030889f has its CatchHandler @ 00308938 */
  FUN_0030b110(plVar3,lVar6,param_2,param_3,param_4,param_5);
  *(undefined4 *)(lVar6 + 0x70) = 0x501502f9;
  *(undefined8 *)(lVar6 + 0x48) = 0x3f00000000000000;
  *(undefined8 *)(lVar6 + 0x50) = 0;
  *(undefined8 *)(lVar6 + 0x58) = 0x3fc90fdb3dcccccd;
  *(undefined4 *)(lVar6 + 0x60) = 0x3fc90fdb;
  *(undefined2 *)(lVar6 + 0x74) = 0;
  lVar6 = (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_4,plVar3 + 3,PTR_PTR_02712200,0x80);
  plVar3[0xc] = lVar6;
  if (lVar6 == 0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
    plVar3 = (long *)0x0;
  }
  return plVar3;
}


