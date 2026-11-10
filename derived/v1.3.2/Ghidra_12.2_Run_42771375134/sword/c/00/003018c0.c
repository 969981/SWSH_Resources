/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003018c0; name: FUN_003018c0
 */


long * FUN_003018c0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Ext::RevoluteJoint>::getName() [T = physx::Ext::RevoluteJoint]"
  ;
  if ((uVar5 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  plVar3 = (long *)(*pcVar7)(plVar3,0x70,pcVar1,
                             "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtensions/src/ExtRevoluteJoint.cpp"
                             ,0x3d);
                    /* try { // try from 00301948 to 0030194f has its CatchHandler @ 00301a80 */
  (**(code **)(*param_1 + 0x28))(param_1);
  puVar2 = PTR_DAT_027121d8;
  *(undefined4 *)(plVar3 + 1) = 0x30101;
  plVar3[3] = (long)(puVar2 + 0x1f0);
  plVar3[4] = 0;
  plVar3[0xc] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
                    /* try { // try from 00301984 to 003019af has its CatchHandler @ 00301a8c */
  plVar4 = (long *)FUN_00400d30();
  lVar6 = (**(code **)(*plVar4 + 0x10))
                    (plVar4,0x90,"NonTrackedAlloc","./../../PhysXExtensions/src/ExtRevoluteJoint.h",
                     0x6b);
  plVar3[0xd] = lVar6;
                    /* try { // try from 003019b4 to 003019cf has its CatchHandler @ 00301a7c */
  FUN_00304500(plVar3,lVar6,param_2,param_3,param_4,param_5);
  *(undefined8 *)(lVar6 + 0x7c) = 0x40490fdb501502f9;
  *(undefined2 *)(lVar6 + 0x84) = 0;
  *(undefined1 **)(lVar6 + 0x48) = &DAT_7f7fffff00000000;
  *(undefined8 *)(lVar6 + 0x50) = 0x3f800000;
  *(undefined8 *)(lVar6 + 0x58) = 0x3f000000;
  *(undefined8 *)(lVar6 + 0x60) = 0x3dcccccd00000000;
  *(undefined8 *)(lVar6 + 0x68) = 0xbfc90fdb3fc90fdb;
  lVar6 = (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_4,plVar3 + 3,PTR_PTR_027121e0,0x90);
  plVar3[0xc] = lVar6;
  if (lVar6 == 0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
    plVar3 = (long *)0x0;
  }
  return plVar3;
}


