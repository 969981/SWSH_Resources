/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002feee0; name: FUN_002feee0
 */


long * FUN_002feee0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  plVar4 = (long *)FUN_00400d30();
  pcVar9 = *(code **)(*plVar4 + 0x10);
  plVar5 = (long *)FUN_00400d60();
  uVar6 = (**(code **)(*plVar5 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Ext::DistanceJoint>::getName() [T = physx::Ext::DistanceJoint]"
  ;
  if ((uVar6 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  plVar4 = (long *)(*pcVar9)(plVar4,0x70,pcVar1,
                             "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtensions/src/ExtDistanceJoint.cpp"
                             ,0x36);
                    /* try { // try from 002fef6c to 002fef77 has its CatchHandler @ 002ff084 */
  pfVar7 = (float *)(**(code **)(*param_1 + 0x28))(param_1);
  puVar3 = PTR_DAT_027121c8;
  *(undefined4 *)(plVar4 + 1) = 0x30104;
  plVar4[3] = (long)(puVar3 + 0x1d8);
  plVar4[4] = 0;
  plVar4[0xc] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)(puVar3 + 0x10);
                    /* try { // try from 002fefac to 002fefd7 has its CatchHandler @ 002ff090 */
  plVar5 = (long *)FUN_00400d30();
  lVar8 = (**(code **)(*plVar5 + 0x10))
                    (plVar5,0x60,"NonTrackedAlloc","./../../PhysXExtensions/src/ExtDistanceJoint.h",
                     0x5d);
  plVar4[0xd] = lVar8;
                    /* try { // try from 002fefdc to 002feff7 has its CatchHandler @ 002ff080 */
  FUN_00300fd0(plVar4,lVar8,param_2,param_3,param_4,param_5);
  *(undefined8 *)(lVar8 + 0x54) = 0;
  *(undefined8 *)(lVar8 + 0x48) = 0;
  fVar2 = DAT_01d4bb3c;
  fVar10 = *pfVar7;
  *(undefined2 *)(lVar8 + 0x5c) = 2;
  *(float *)(lVar8 + 0x50) = fVar10 * fVar2;
  lVar8 = (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_4,plVar4 + 3,PTR_PTR_027121d0,0x60);
  plVar4[0xc] = lVar8;
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
    plVar4 = (long *)0x0;
  }
  return plVar4;
}


