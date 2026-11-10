/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b1c30; name: FUN_001b1c30
 */


void FUN_001b1c30(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  
  puVar2 = PTR_DAT_02711010;
  param_1[2] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = 0;
                    /* try { // try from 001b1c64 to 001b1ccf has its CatchHandler @ 001b1f50 */
  iVar3 = FUN_003ff600();
  if (iVar3 == 0) {
    lVar7 = 0;
  }
  else {
    plVar4 = (long *)FUN_00400d30();
    pcVar8 = *(code **)(*plVar4 + 0x10);
    plVar5 = (long *)FUN_00400d60();
    uVar6 = (**(code **)(*plVar5 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::MutexImpl>::getName() [T = physx::shdfnd::MutexImpl]"
    ;
    if ((uVar6 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar7 = (*pcVar8)(plVar4,iVar3,pcVar1,"./../../../../PxShared/src/foundation/include\\PsMutex.h"
                      ,0x71);
  }
  param_1[3] = lVar7;
  FUN_003ff550();
                    /* try { // try from 001b1cd4 to 001b1ce3 has its CatchHandler @ 001b1e44 */
  FUN_003d9530(param_1 + 4,param_2,param_3);
                    /* try { // try from 001b1ce8 to 001b1ceb has its CatchHandler @ 001b1e3c */
  FUN_001b1f90(param_1 + 7);
  param_1[0xc] = (long)(PTR_DAT_02711018 + 0x10);
                    /* try { // try from 001b1cfc to 001b1d67 has its CatchHandler @ 001b1ee8 */
  iVar3 = FUN_003ff600();
  if (iVar3 == 0) {
    lVar7 = 0;
  }
  else {
    plVar4 = (long *)FUN_00400d30();
    pcVar8 = *(code **)(*plVar4 + 0x10);
    plVar5 = (long *)FUN_00400d60();
    uVar6 = (**(code **)(*plVar5 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::MutexImpl>::getName() [T = physx::shdfnd::MutexImpl]"
    ;
    if ((uVar6 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar7 = (*pcVar8)(plVar4,iVar3,pcVar1,"./../../../../PxShared/src/foundation/include\\PsMutex.h"
                      ,0x71);
  }
  param_1[0xd] = lVar7;
  FUN_003ff550();
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = -0xc0c00000;
  param_1[0x14] = 0;
                    /* try { // try from 001b1d84 to 001b1d8f has its CatchHandler @ 001b1e24 */
  FUN_001b46c0(param_1 + 0xe,0x40);
  puVar2 = PTR_DAT_02711020;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x15] = (long)(puVar2 + 0x10);
                    /* try { // try from 001b1da4 to 001b1e0f has its CatchHandler @ 001b1e5c */
  iVar3 = FUN_003ff600();
  if (iVar3 == 0) {
    lVar7 = 0;
  }
  else {
    plVar4 = (long *)FUN_00400d30();
    pcVar8 = *(code **)(*plVar4 + 0x10);
    plVar5 = (long *)FUN_00400d60();
    uVar6 = (**(code **)(*plVar5 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::MutexImpl>::getName() [T = physx::shdfnd::MutexImpl]"
    ;
    if ((uVar6 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar7 = (*pcVar8)(plVar4,iVar3,pcVar1,"./../../../../PxShared/src/foundation/include\\PsMutex.h"
                      ,0x71);
  }
  param_1[0x17] = lVar7;
  FUN_003ff550();
  return;
}


