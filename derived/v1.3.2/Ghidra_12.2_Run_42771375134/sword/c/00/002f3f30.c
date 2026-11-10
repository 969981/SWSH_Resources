/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f3f30; name: FUN_002f3f30
 */


void FUN_002f3f30(long *param_1)

{
  char *pcVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_48 [8];
  
  *param_1 = (long)(PTR_DAT_02712080 + 0x10);
  iVar2 = FUN_003ffd10();
  if (iVar2 == 0) {
    lVar6 = 0;
  }
  else {
    plVar3 = (long *)FUN_00400d30();
    pcVar7 = *(code **)(*plVar3 + 0x10);
    plVar4 = (long *)FUN_00400d60();
    uVar5 = (**(code **)(*plVar4 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::ThreadImpl>::getName() [T = physx::shdfnd::ThreadImpl]"
    ;
    if ((uVar5 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar6 = (*pcVar7)(plVar3,iVar2,pcVar1,
                      "./../../../../PxShared/src/foundation/include\\PsThread.h",0xe5);
  }
  param_1[1] = lVar6;
  FUN_003ffd30();
  *param_1 = (long)(PTR_DAT_02712088 + 0x10);
                    /* try { // try from 002f3fdc to 002f3feb has its CatchHandler @ 002f4074 */
  FUN_002f3820(param_1 + 2,0x80,auStack_48);
                    /* try { // try from 002f3fec to 002f4057 has its CatchHandler @ 002f407c */
  iVar2 = FUN_003ffac0();
  if (iVar2 == 0) {
    lVar6 = 0;
  }
  else {
    plVar3 = (long *)FUN_00400d30();
    pcVar7 = *(code **)(*plVar3 + 0x10);
    plVar4 = (long *)FUN_00400d60();
    uVar5 = (**(code **)(*plVar4 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::SListImpl>::getName() [T = physx::shdfnd::SListImpl]"
    ;
    if ((uVar5 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar6 = (*pcVar7)(plVar3,iVar2,pcVar1,"./../../../../PxShared/src/foundation/include\\PsSList.h"
                      ,0x67);
  }
  param_1[5] = lVar6;
  FUN_003ff980();
  param_1[6] = 0;
  return;
}


