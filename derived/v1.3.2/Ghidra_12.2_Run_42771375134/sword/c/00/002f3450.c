/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f3450; name: FUN_002f3450
 */


void FUN_002f3450(long *param_1,uint param_2,long param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_68 [8];
  
  *param_1 = (long)(PTR_DAT_02712078 + 0x10);
                    /* try { // try from 002f3490 to 002f349f has its CatchHandler @ 002f377c */
  FUN_002f3820(param_1 + 2,0x80,auStack_68);
                    /* try { // try from 002f34a0 to 002f350b has its CatchHandler @ 002f379c */
  iVar2 = FUN_003ffac0();
  if (iVar2 == 0) {
    lVar7 = 0;
  }
  else {
    plVar4 = (long *)FUN_00400d30();
    pcVar10 = *(code **)(*plVar4 + 0x10);
    plVar5 = (long *)FUN_00400d60();
    uVar6 = (**(code **)(*plVar5 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::SListImpl>::getName() [T = physx::shdfnd::SListImpl]"
    ;
    if ((uVar6 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar7 = (*pcVar10)(plVar4,iVar2,pcVar1,
                       "./../../../../PxShared/src/foundation/include\\PsSList.h",0x67);
  }
  param_1[4] = lVar7;
  FUN_003ff980();
                    /* try { // try from 002f350c to 002f3577 has its CatchHandler @ 002f3784 */
  iVar2 = FUN_003ffad0();
  if (iVar2 == 0) {
    lVar7 = 0;
  }
  else {
    plVar4 = (long *)FUN_00400d30();
    pcVar10 = *(code **)(*plVar4 + 0x10);
    plVar5 = (long *)FUN_00400d60();
    uVar6 = (**(code **)(*plVar5 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::SyncImpl>::getName() [T = physx::shdfnd::SyncImpl]"
    ;
    if ((uVar6 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar7 = (*pcVar10)(plVar4,iVar2,pcVar1,"./../../../../PxShared/src/foundation/include\\PsSync.h"
                       ,0x5f);
  }
  param_1[5] = lVar7;
  FUN_003ffae0();
  uVar6 = (ulong)param_2;
  *(uint *)(param_1 + 7) = param_2;
  *(undefined2 *)((long)param_1 + 0x3c) = 0;
  if (param_3 == 0) {
    if (param_2 == 0) {
      lVar7 = 0;
    }
    else {
                    /* try { // try from 002f3598 to 002f35c3 has its CatchHandler @ 002f3774 */
      plVar4 = (long *)FUN_00400d30();
      lVar7 = (**(code **)(*plVar4 + 0x10))
                        (plVar4,uVar6 << 2,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtensions/src/ExtDefaultCpuDispatcher.cpp"
                         ,0x46);
    }
                    /* try { // try from 002f35cc to 002f35d7 has its CatchHandler @ 002f3770 */
    FUN_002f4520(lVar7,param_2);
    param_3 = lVar7;
  }
  else {
    lVar7 = 0;
  }
  if (param_2 == 0) {
    param_1[1] = 0;
    param_1[6] = 0;
  }
  else {
                    /* try { // try from 002f35e0 to 002f360b has its CatchHandler @ 002f3780 */
    plVar4 = (long *)FUN_00400d30();
    lVar8 = (**(code **)(*plVar4 + 0x10))
                      (plVar4,uVar6 * 0x38,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtensions/src/ExtDefaultCpuDispatcher.cpp"
                       ,0x4d);
    param_1[1] = lVar8;
    if (param_2 << 5 == 0) {
      param_1[6] = 0;
    }
    else {
                    /* try { // try from 002f3618 to 002f3643 has its CatchHandler @ 002f3778 */
      plVar4 = (long *)FUN_00400d30();
      lVar9 = (**(code **)(*plVar4 + 0x10))
                        (plVar4,param_2 << 5,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtensions/src/ExtDefaultCpuDispatcher.cpp"
                         ,0x4f);
      lVar8 = param_1[1];
      param_1[6] = lVar9;
    }
    if (lVar8 != 0) {
      lVar9 = 0;
      uVar11 = 1;
      while( true ) {
                    /* try { // try from 002f36a8 to 002f36ab has its CatchHandler @ 002f37bc */
        FUN_002f3f30(lVar8 + lVar9);
                    /* try { // try from 002f36b4 to 002f36bb has its CatchHandler @ 002f37b8 */
        FUN_002f41a0(param_1[1] + lVar9,param_1);
        if (uVar6 <= uVar11) break;
        lVar8 = param_1[1];
        lVar9 = lVar9 + 0x38;
        uVar11 = uVar11 + 1;
      }
      if (param_2 != 0) {
        uVar12 = 0;
        uVar11 = 0;
        lVar8 = 8;
        do {
                    /* try { // try from 002f36e8 to 002f3703 has its CatchHandler @ 002f37b4 */
          FUN_003fffb0(*(undefined8 *)(param_1[1] + lVar8),*(undefined4 *)(param_3 + uVar11 * 4));
          lVar9 = param_1[1];
          uVar3 = FUN_003ffed0();
          FUN_003ffd60(*(undefined8 *)(lVar9 + lVar8),uVar3,(undefined8 *)(lVar9 + lVar8) + -1);
          if (param_1[6] != 0) {
            lVar9 = param_1[6] + (uVar12 & 0xffffffe0);
                    /* try { // try from 002f3714 to 002f3737 has its CatchHandler @ 002f37b0 */
            FUN_00401a40(lVar9,0x20,"PxWorker%02d",uVar11 & 0xffffffff);
            FUN_00400030(*(undefined8 *)(param_1[1] + lVar8),lVar9);
          }
          uVar11 = uVar11 + 1;
          uVar12 = uVar12 + 0x20;
          lVar8 = lVar8 + 0x38;
        } while (uVar11 < uVar6);
      }
      if (lVar7 == 0) {
        return;
      }
      if (lVar7 == 0) {
        return;
      }
                    /* try { // try from 002f3754 to 002f3767 has its CatchHandler @ 002f376c */
      plVar4 = (long *)FUN_00400d30();
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar7);
      return;
    }
  }
  *(undefined4 *)(param_1 + 7) = 0;
  return;
}


