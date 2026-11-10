/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002fb590; name: FUN_002fb590
 */


long * FUN_002fb590(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Ext::FixedJoint>::getName() [T = physx::Ext::FixedJoint]"
  ;
  if ((uVar5 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  plVar3 = (long *)(*pcVar7)(plVar3,0x70,pcVar1,
                             "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtensions/src/ExtFixedJoint.cpp"
                             ,0x39);
                    /* try { // try from 002fb618 to 002fb61f has its CatchHandler @ 002fb718 */
  (**(code **)(*param_1 + 0x28))(param_1);
  puVar2 = PTR_DAT_027121b8;
  *(undefined4 *)(plVar3 + 1) = 0x30103;
  plVar3[3] = (long)(puVar2 + 0x188);
  plVar3[4] = 0;
  plVar3[0xc] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
                    /* try { // try from 002fb654 to 002fb67f has its CatchHandler @ 002fb724 */
  plVar4 = (long *)FUN_00400d30();
  lVar6 = (**(code **)(*plVar4 + 0x10))
                    (plVar4,0x50,"NonTrackedAlloc","./../../PhysXExtensions/src/ExtFixedJoint.h",
                     0x5d);
  plVar3[0xd] = lVar6;
  *(undefined8 *)(lVar6 + 0x48) = 0x40490fdb501502f9;
                    /* try { // try from 002fb698 to 002fb6b3 has its CatchHandler @ 002fb714 */
  FUN_002fdc60(plVar3,lVar6,param_2,param_3,param_4,param_5);
  lVar6 = (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_4,plVar3 + 3,PTR_PTR_027121c0,0x50);
  plVar3[0xc] = lVar6;
  if (lVar6 == 0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
    plVar3 = (long *)0x0;
  }
  return plVar3;
}


