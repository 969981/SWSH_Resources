/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011c9c0; name: FUN_0011c9c0
 */


void FUN_0011c9c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  code *pcVar9;
  
  FUN_0011e9b0();
                    /* try { // try from 0011c9fc to 0011ca07 has its CatchHandler @ 0011cd10 */
  FUN_00110ee0(param_1 + 0x28,param_1);
  puVar2 = PTR_DAT_02710c30;
  *(undefined1 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined **)(param_1 + 0x120) = puVar2 + 0x10;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
                    /* try { // try from 0011ca3c to 0011caab has its CatchHandler @ 0011cd88 */
  iVar3 = FUN_003ffac0();
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  else {
    plVar4 = (long *)FUN_00400d30();
    pcVar9 = *(code **)(*plVar4 + 0x10);
    plVar5 = (long *)FUN_00400d60();
    uVar6 = (**(code **)(*plVar5 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::SListImpl>::getName() [T = physx::shdfnd::SListImpl]"
    ;
    if ((uVar6 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    uVar7 = (*pcVar9)(plVar4,iVar3,pcVar1,"./../../../../PxShared/src/foundation/include\\PsSList.h"
                      ,0x67);
  }
  *(undefined8 *)(param_1 + 0x1b0) = uVar7;
  FUN_003ff980();
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(long *)(param_1 + 0x1b8) = param_1;
  *(undefined8 *)(param_1 + 0x1c0) = 0x200000000100;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
                    /* try { // try from 0011cac4 to 0011cb17 has its CatchHandler @ 0011cd70 */
  plVar4 = (long *)FUN_00400d30();
  pcVar9 = *(code **)(*plVar4 + 0x10);
  plVar5 = (long *)FUN_00400d60();
  uVar6 = (**(code **)(*plVar5 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::PxsContactManager>::getName() [T = physx::PxsContactManager]"
  ;
  if ((uVar6 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  uVar7 = (*pcVar9)(plVar4,0x10000,pcVar1,"./../../Common/src\\CmPool.h",0x40);
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = uVar7;
  *(long *)(param_1 + 0x1e8) = param_1;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  if (1 < *(uint *)(param_1 + 0x1c4)) {
    uVar8 = 0xffffffff;
    do {
      uVar8 = uVar8 + 1;
    } while (*(int *)(param_1 + 0x1c0) != 1 << (ulong)(uVar8 & 0x1f));
    *(uint *)(param_1 + 0x1cc) = uVar8;
  }
  *(undefined8 *)(param_1 + 0x418) = 0x4000000000;
  *(long *)(param_1 + 0x410) = param_1 + 0x208;
  *(undefined4 *)(param_1 + 0x428) = 0x10000;
  *(undefined8 *)(param_1 + 0x650) = 0x4000000000;
  *(undefined1 *)(param_1 + 0x408) = 1;
  *(undefined8 *)(param_1 + 0x420) = 0x100;
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined1 *)(param_1 + 0x640) = 1;
  *(long *)(param_1 + 0x648) = param_1 + 0x440;
  *(undefined8 *)(param_1 + 0x658) = 0x100;
  *(undefined4 *)(param_1 + 0x660) = 0x7000;
  *(undefined8 *)(param_1 + 0x668) = 0;
  *(undefined8 *)(param_1 + 0x670) = 0;
  *(undefined4 *)(param_1 + 0x678) = 0;
  *(undefined8 *)(param_1 + 0x680) = 0;
  *(undefined4 *)(param_1 + 0x688) = 0;
  *(undefined8 *)(param_1 + 0x690) = 0;
  *(undefined4 *)(param_1 + 0x698) = 0;
  *(undefined8 *)(param_1 + 0x6a0) = 0;
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  *(undefined8 *)(param_1 + 0x6b0) = 0;
  *(undefined4 *)(param_1 + 0x6b8) = 0;
                    /* try { // try from 0011cbd0 to 0011cc33 has its CatchHandler @ 0011cd78 */
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
  *(undefined8 *)(param_1 + 0x6d8) = uVar7;
  FUN_003ff550();
  *(undefined8 *)(param_1 + 0x6e0) = 0;
  *(undefined8 *)(param_1 + 0x6e8) = 0;
  *(undefined8 *)(param_1 + 0x6f0) = 0;
  *(undefined8 *)(param_1 + 0x7a8) = param_3;
  *(undefined8 *)(param_1 + 0x7b0) = param_4;
                    /* try { // try from 0011cc4c to 0011ccef has its CatchHandler @ 0011cd90 */
                    /* WARNING: Subroutine does not return */
  memset((void *)(param_1 + 0x7b8),0,0x288);
}


