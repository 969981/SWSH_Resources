/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b5dc0; name: FUN_001b5dc0
 */


void FUN_001b5dc0(long *param_1)

{
  char *pcVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  
  *param_1 = (long)(PTR_DAT_02711058 + 0x10);
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
  param_1[1] = lVar6;
  FUN_003ff550();
  param_1[0x44] = (long)(param_1 + 3);
  param_1[0x8b] = (long)(param_1 + 0x4a);
  param_1[0x45] = 0x4000000000;
  param_1[0x46] = 0x80;
  param_1[0x8c] = 0x4000000000;
  param_1[0x8d] = 0x20;
  param_1[0xd3] = 0x4000000000;
  *(undefined1 *)(param_1 + 0x43) = 1;
  *(undefined4 *)(param_1 + 0x47) = 0x1000;
  param_1[0x48] = 0;
  *(undefined1 *)(param_1 + 0x8a) = 1;
  *(undefined4 *)(param_1 + 0x8e) = 0x1000;
  param_1[0x8f] = 0;
  *(undefined1 *)(param_1 + 0xd1) = 1;
  param_1[0xd2] = (long)(param_1 + 0x91);
  param_1[0xd4] = 8;
  *(undefined4 *)(param_1 + 0xd5) = 0x1000;
  param_1[0xd6] = 0;
  return;
}


