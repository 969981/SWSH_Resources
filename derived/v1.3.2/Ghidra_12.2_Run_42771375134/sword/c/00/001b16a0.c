/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b16a0; name: FUN_001b16a0
 */


void FUN_001b16a0(long *param_1,long param_2,long param_3)

{
  char *pcVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_02710f80 + 0x10);
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = param_3;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[10] = (long)(param_1 + 5);
  param_1[0xb] = 0x400000000;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0x11] = (long)(param_1 + 0xc);
  param_1[0x12] = 0x400000000;
  *(undefined1 *)(param_1 + 0x13) = 0;
                    /* try { // try from 001b1700 to 001b176b has its CatchHandler @ 001b1788 */
  iVar2 = FUN_003ff600();
  if (iVar2 == 0) {
    lVar6 = 0;
  }
  else {
    plVar3 = (long *)FUN_00400d30();
    pcVar7 = *(code **)(*plVar3 + 0x10);
    plVar4 = (long *)FUN_00400d60();
    uVar5 = (**(code **)(*plVar4 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::MutexImpl>::getName() [T = physx::shdfnd::MutexImpl]"
    ;
    if ((uVar5 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar6 = (*pcVar7)(plVar3,iVar2,pcVar1,"./../../../../PxShared/src/foundation/include\\PsMutex.h"
                      ,0x71);
  }
  param_1[0x14] = lVar6;
  FUN_003ff550();
  param_1[1] = param_2;
  return;
}


