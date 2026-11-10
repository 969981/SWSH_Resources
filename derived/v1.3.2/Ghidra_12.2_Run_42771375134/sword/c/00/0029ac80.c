/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029ac80; name: FUN_0029ac80
 */


void FUN_0029ac80(long *param_1)

{
  char *pcVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  
  *param_1 = (long)(PTR_DAT_02711f60 + 0x10);
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
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = -0xc0c00000;
  param_1[8] = 0;
                    /* try { // try from 0029ad30 to 0029ad3b has its CatchHandler @ 0029ae5c */
  FUN_0029d370(param_1 + 2,0x40);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = -0xc0c00000;
  param_1[0xf] = 0;
                    /* try { // try from 0029ad50 to 0029ad5b has its CatchHandler @ 0029adf4 */
  FUN_0029d500(param_1 + 9,0x40);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = -0xc0c00000;
  param_1[0x16] = 0;
                    /* try { // try from 0029ad70 to 0029ad77 has its CatchHandler @ 0029ad90 */
  FUN_0029d690(param_1 + 0x10,0x40);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return;
}


