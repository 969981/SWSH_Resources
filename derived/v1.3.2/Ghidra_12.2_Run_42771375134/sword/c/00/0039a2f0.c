/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039a2f0; name: FUN_0039a2f0
 */


void FUN_0039a2f0(long *param_1,long param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,long param_6)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = -0xfffffffd;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0xb] = -0xfffffffd;
  param_1[0xd] = param_2;
  param_1[9] = 0;
  param_1[10] = 0;
                    /* try { // try from 0039a34c to 0039a3b7 has its CatchHandler @ 0039a4d0 */
  iVar4 = FUN_003ff600();
  if (iVar4 == 0) {
    lVar8 = 0;
  }
  else {
    plVar5 = (long *)FUN_00400d30();
    pcVar9 = *(code **)(*plVar5 + 0x10);
    plVar6 = (long *)FUN_00400d60();
    uVar7 = (**(code **)(*plVar6 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::MutexImpl>::getName() [T = physx::shdfnd::MutexImpl]"
    ;
    if ((uVar7 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar8 = (*pcVar9)(plVar5,iVar4,pcVar1,"./../../../../PxShared/src/foundation/include\\PsMutex.h"
                      ,0x71);
  }
  param_1[0xe] = lVar8;
  FUN_003ff550();
  param_1[0xf] = (long)(PTR_DAT_027126e8 + 0x10);
                    /* try { // try from 0039a3cc to 0039a4a3 has its CatchHandler @ 0039a4d8 */
  FUN_0039a110(param_1,param_3,*(undefined8 *)(param_2 + 0x28));
  FUN_0039a110(param_1 + 6,param_4,*(undefined8 *)(param_2 + 0x28));
  plVar5 = (long *)*param_1;
  *(undefined4 *)(param_1 + 0xc) = param_5;
  if ((plVar5 != (long *)0x0) && ((int)param_1[5] == 1)) {
    (**(code **)(*plVar5 + 0x88))(plVar5,param_5);
  }
  plVar5 = (long *)param_1[6];
  if ((plVar5 != (long *)0x0) && ((int)param_1[0xb] == 1)) {
    (**(code **)(*plVar5 + 0x88))(plVar5,param_5);
  }
  uVar2 = *(uint *)(param_6 + 8);
  uVar3 = *(uint *)(param_6 + 0xc);
  if ((uint)((int)param_1[2] << 5) < uVar2) {
    FUN_00190b50(param_1 + 1,uVar2);
  }
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x58))(plVar5,uVar2);
  }
  if ((uint)((int)param_1[8] << 5) < uVar3) {
    FUN_00190b50(param_1 + 7,uVar3);
  }
  plVar5 = (long *)param_1[6];
  lVar8 = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x58))(plVar5,uVar3);
    lVar8 = param_1[6];
  }
  param_1[0x10] = lVar8;
  param_1[0x11] = (long)param_1 + 0x5c;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return;
}


