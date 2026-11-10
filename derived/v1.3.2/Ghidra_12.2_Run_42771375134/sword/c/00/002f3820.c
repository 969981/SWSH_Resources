/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f3820; name: FUN_002f3820
 */


void FUN_002f3820(ulong *param_1,uint param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  
  iVar3 = FUN_003ffac0();
  if (iVar3 == 0) {
    param_1[1] = 0;
    FUN_003ff980();
  }
  else {
    plVar4 = (long *)FUN_00400d30();
    pcVar8 = *(code **)(*plVar4 + 0x10);
    plVar5 = (long *)FUN_00400d60();
    uVar6 = (**(code **)(*plVar5 + 0x28))();
    pcVar2 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::SListImpl>::getName() [T = physx::shdfnd::SListImpl]"
    ;
    if ((uVar6 & 1) == 0) {
      pcVar2 = "<allocation names disabled>";
    }
    uVar6 = (*pcVar8)(plVar4,iVar3,pcVar2,"./../../../../PxShared/src/foundation/include\\PsSList.h"
                      ,0x67);
    param_1[1] = uVar6;
    FUN_003ff980();
  }
  if (param_2 != 0) {
                    /* try { // try from 002f38b8 to 002f390f has its CatchHandler @ 002f3980 */
    plVar4 = (long *)FUN_00400d30();
    pcVar8 = *(code **)(*plVar4 + 0x10);
    plVar5 = (long *)FUN_00400d60();
    uVar6 = (**(code **)(*plVar5 + 0x28))();
    pcVar2 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::Ext::SharedQueueEntry>::getName() [T = physx::Ext::SharedQueueEntry]"
    ;
    if ((uVar6 & 1) == 0) {
      pcVar2 = "<allocation names disabled>";
    }
    lVar7 = (*pcVar8)(plVar4,(ulong)param_2 << 5 | 0x17,pcVar2,
                      "./../../PhysXExtensions/src/ExtSharedQueueEntryPool.h",0x57);
    if (lVar7 != 0) {
      uVar6 = lVar7 + 0x17U & 0xfffffffffffffff0;
      *(ulong *)(uVar6 - 8) = uVar6 - lVar7;
      *param_1 = uVar6;
      if (uVar6 == 0) {
        return;
      }
      lVar7 = 0;
      uVar9 = 1;
      while( true ) {
        puVar1 = (undefined8 *)(uVar6 + lVar7);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 *)(puVar1 + 2) = 1;
                    /* try { // try from 002f3958 to 002f395b has its CatchHandler @ 002f3984 */
        FUN_003ff9a0(param_1[1]);
        if (param_2 <= uVar9) break;
        uVar6 = *param_1;
        lVar7 = lVar7 + 0x20;
        uVar9 = uVar9 + 1;
      }
      return;
    }
  }
  *param_1 = 0;
  return;
}


