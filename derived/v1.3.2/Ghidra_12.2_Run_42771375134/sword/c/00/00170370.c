/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00170370; name: FUN_00170370
 */


void FUN_00170370(undefined4 param_1,long *param_2,long param_3,long param_4,long param_5,
                 long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                 byte param_12,byte param_13,byte param_14)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  
  param_2[2] = 0;
  param_2[3] = 0;
  puVar2 = PTR_DAT_02710eb0;
  *(undefined4 *)(param_2 + 0xc) = param_1;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = param_6;
  *param_2 = (long)(puVar2 + 0x10);
  param_2[1] = 0;
  *(byte *)((long)param_2 + 100) = param_12 & 1;
  *(byte *)((long)param_2 + 0x65) = param_13 & 1;
  *(byte *)((long)param_2 + 0x66) = param_14 & 1;
  param_2[0x1c] = param_8;
  param_2[0x1d] = 0;
  param_2[8] = 0;
  param_2[9] = param_10;
  param_2[0xb] = 0x3f8000003f800000;
  *(undefined4 *)(param_2 + 0xf) = 0xc0000000;
  *(undefined4 *)((long)param_2 + 0x8c) = 0x20;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
                    /* try { // try from 0017041c to 0017048b has its CatchHandler @ 00170688 */
  iVar3 = FUN_003ffac0();
  if (iVar3 == 0) {
    lVar7 = 0;
  }
  else {
    plVar4 = (long *)FUN_00400d30();
    pcVar8 = *(code **)(*plVar4 + 0x10);
    plVar5 = (long *)FUN_00400d60();
    uVar6 = (**(code **)(*plVar5 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::SListImpl>::getName() [T = physx::shdfnd::SListImpl]"
    ;
    if ((uVar6 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar7 = (*pcVar8)(plVar4,iVar3,pcVar1,"./../../../../PxShared/src/foundation/include\\PsSList.h"
                      ,0x67);
  }
  param_2[0x32] = lVar7;
  FUN_003ff980();
  param_2[0x33] = param_3;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x4f] = 0;
  param_2[0x50] = 0;
  param_2[0x51] = 0;
  param_2[0x52] = 0;
  param_2[0x53] = 0;
  param_2[0x54] = 0;
  param_2[0x56] = param_9;
  param_2[0x5b] = 0;
  param_2[0x5c] = param_4;
  param_2[0x5d] = param_5;
  param_2[0x5e] = param_7;
  param_2[0x60] = param_11;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
                    /* try { // try from 00170500 to 0017055b has its CatchHandler @ 0017069c */
  plVar4 = (long *)FUN_00400d30();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))
                             (plVar4,0x18,"NonTrackedAlloc",
                              "./../../LowLevelDynamics/include\\DyContext.h",0xf7);
  *plVar4 = param_8;
  plVar4[1] = 0;
  plVar4[2] = 0;
  param_2[1] = (long)plVar4;
  plVar4 = (long *)FUN_00400d30();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))
                             (plVar4,0x18,"NonTrackedAlloc",
                              "./../../LowLevelDynamics/include\\DyContext.h",0xf9);
  *plVar4 = param_8;
  plVar4[1] = 0;
  plVar4[2] = 0;
  param_2[2] = (long)plVar4;
                    /* try { // try from 00170568 to 0017058f has its CatchHandler @ 00170678 */
  plVar4 = (long *)FUN_00400d30();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))
                             (plVar4,0x18,"NonTrackedAlloc",
                              "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelDynamics/src/DyDynamics.cpp"
                              ,0xbc);
  *plVar4 = param_8;
  plVar4[1] = 0;
  plVar4[2] = 0;
  param_2[0x48] = (long)plVar4;
                    /* try { // try from 0017059c to 001705c3 has its CatchHandler @ 00170668 */
  plVar4 = (long *)FUN_00400d30();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))
                             (plVar4,0x18,"NonTrackedAlloc",
                              "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelDynamics/src/DyDynamics.cpp"
                              ,0xbd);
  *plVar4 = param_8;
  plVar4[1] = 0;
  plVar4[2] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = -0x100000000;
  param_2[0x49] = (long)plVar4;
  *(undefined4 *)((long)param_2 + 0x2ac) = 0;
  *(undefined4 *)(param_2 + 0x5f) = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0xffff00000000;
  *(undefined8 *)((long)param_2 + 300) = 0;
  param_2[0x2c] = -0x80000100000000;
  param_2[0x2d] = 0x7f7fffff03ffffff;
  *(undefined4 *)((long)param_2 + 0x13c) = 0x7f7fffff;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  *(undefined8 *)((long)param_2 + 0x134) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined8 *)((long)param_2 + 0x124) = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0x3f80000000000000;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
                    /* try { // try from 00170634 to 00170647 has its CatchHandler @ 0017069c */
  lVar7 = FUN_00164060();
  param_2[0x4c] = lVar7;
  lVar7 = FUN_00169fc0();
  param_2[0x4d] = lVar7;
  lVar7 = FUN_00169fc0();
  param_2[0x4e] = lVar7;
  return;
}


