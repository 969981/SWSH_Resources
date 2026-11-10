/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00110ee0; name: FUN_00110ee0
 */


void FUN_00110ee0(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  iVar2 = FUN_003ff600();
  if (iVar2 == 0) {
    uVar6 = 0;
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
    uVar6 = (*pcVar7)(plVar3,iVar2,pcVar1,"./../../../../PxShared/src/foundation/include\\PsMutex.h"
                      ,0x71);
  }
  *param_1 = uVar6;
  FUN_003ff550();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1c] = param_2;
  param_1[0x1d] = 0;
  return;
}


