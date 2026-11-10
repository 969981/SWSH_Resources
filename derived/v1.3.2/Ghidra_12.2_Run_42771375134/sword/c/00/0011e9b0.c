/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011e9b0; name: FUN_0011e9b0
 */


void FUN_0011e9b0(undefined8 *param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 local_38;
  
  iVar3 = FUN_003ff600();
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  else {
    plVar4 = (long *)FUN_00400d30();
    pcVar9 = *(code **)(*plVar4 + 0x10);
    plVar5 = (long *)FUN_00400d60();
    uVar6 = (**(code **)(*plVar5 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::MutexImpl>::getName() [T = physx::shdfnd::MutexImpl]"
    ;
    if ((uVar6 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    uVar7 = (*pcVar9)(plVar4,iVar3,pcVar1,"./../../../../PxShared/src/foundation/include\\PsMutex.h"
                      ,0x71);
  }
  *param_1 = uVar7;
  FUN_003ff550();
  puVar8 = param_1 + 1;
  *puVar8 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
                    /* try { // try from 0011ea44 to 0011ea4f has its CatchHandler @ 0011eaac */
  FUN_001123b0(puVar8,0x40);
  local_38 = 0;
  uVar2 = *(uint *)(param_1 + 2);
  if (uVar2 < (*(uint *)((long)param_1 + 0x14) & 0x7fffffff)) {
    *(undefined8 *)(param_1[1] + (ulong)uVar2 * 8) = 0;
    *(uint *)(param_1 + 2) = uVar2 + 1;
  }
  else {
                    /* try { // try from 0011ea78 to 0011ea83 has its CatchHandler @ 0011ea98 */
    FUN_00112510(puVar8,&local_38);
  }
  return;
}


