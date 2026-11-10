/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b4e70; name: FUN_001b4e70
 */


void FUN_001b4e70(long *param_1)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  
  FUN_0029ac80();
  param_1[0x5c] = 0x4000000000;
  *(undefined1 *)(param_1 + 0x5a) = 1;
  puVar2 = PTR_DAT_02711050;
  param_1[0x5b] = (long)(param_1 + 0x1a);
  param_1[0x5d] = 0x20;
  *param_1 = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x5e) = 0xb00;
  param_1[0x5f] = 0;
                    /* try { // try from 001b4ed0 to 001b4f3b has its CatchHandler @ 001b5d94 */
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
  param_1[0x60] = lVar7;
  FUN_003ff550();
                    /* try { // try from 001b4f3c to 001b4f8f has its CatchHandler @ 001b5d9c */
  plVar4 = (long *)FUN_00400d30();
  pcVar8 = *(code **)(*plVar4 + 0x10);
  plVar5 = (long *)FUN_00400d60();
  uVar6 = (**(code **)(*plVar5 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::NpPtrTableStorageManager>::getName() [T = physx::NpPtrTableStorageManager]"
  ;
  if ((uVar6 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  lVar7 = (*pcVar8)(plVar4,0x6b8,pcVar1,
                    "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpFactory.cpp"
                    ,0x3b);
                    /* try { // try from 001b4f90 to 001b4f97 has its CatchHandler @ 001b5870 */
  FUN_001b5dc0(lVar7);
  param_1[0x61] = lVar7;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = -0xc0c00000;
  param_1[0x68] = 0;
                    /* try { // try from 001b4fc4 to 001b4fcf has its CatchHandler @ 001b5d9c */
  FUN_001c5970(param_1 + 0x62,0x40);
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = -0xc0c00000;
  param_1[0x6f] = 0;
                    /* try { // try from 001b4ff0 to 001b4ffb has its CatchHandler @ 001b5860 */
  FUN_001c5c60(param_1 + 0x69,0x40);
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = -0xc0c00000;
  param_1[0x76] = 0;
                    /* try { // try from 001b501c to 001b5027 has its CatchHandler @ 001b5850 */
  FUN_001c5f50(param_1 + 0x70,0x40);
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = -0xc0c00000;
  param_1[0x7d] = 0;
                    /* try { // try from 001b5048 to 001b5053 has its CatchHandler @ 001b5840 */
  FUN_001c6240(param_1 + 0x77,0x40);
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = -0xc0c00000;
  param_1[0x84] = 0;
                    /* try { // try from 001b5074 to 001b507f has its CatchHandler @ 001b5830 */
  FUN_001c6530(param_1 + 0x7e,0x40);
  param_1[200] = 0x4000000000;
  param_1[199] = (long)(param_1 + 0x86);
  *(undefined1 *)(param_1 + 0xc6) = 1;
  param_1[0xc9] = 10;
  *(undefined4 *)(param_1 + 0xca) = 0x1000;
  param_1[0xcb] = 0;
                    /* try { // try from 001b50ac to 001b510f has its CatchHandler @ 001b5d7c */
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
  param_1[0xcc] = lVar7;
  FUN_003ff550();
  param_1[0x110] = 0x4000000000;
  param_1[0x10f] = (long)(param_1 + 0xce);
  *(undefined1 *)(param_1 + 0x10e) = 1;
  param_1[0x111] = 0x17;
  *(undefined4 *)(param_1 + 0x112) = 0x1000;
  param_1[0x113] = 0;
                    /* try { // try from 001b513c to 001b519f has its CatchHandler @ 001b5d74 */
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
  param_1[0x114] = lVar7;
  FUN_003ff550();
  param_1[0x158] = 0x4000000000;
  param_1[0x157] = (long)(param_1 + 0x116);
  *(undefined1 *)(param_1 + 0x156) = 1;
  param_1[0x159] = 0xf;
  *(undefined4 *)(param_1 + 0x15a) = 0x1000;
  param_1[0x15b] = 0;
                    /* try { // try from 001b51cc to 001b522f has its CatchHandler @ 001b5d6c */
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
  param_1[0x15c] = lVar7;
  FUN_003ff550();
  param_1[0x1a0] = 0x4000000000;
  param_1[0x19f] = (long)(param_1 + 0x15e);
  *(undefined1 *)(param_1 + 0x19e) = 1;
  param_1[0x1a1] = 0x33;
  *(undefined4 *)(param_1 + 0x1a2) = 0x1000;
  param_1[0x1a3] = 0;
                    /* try { // try from 001b525c to 001b52bf has its CatchHandler @ 001b5d64 */
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
  param_1[0x1a4] = lVar7;
  FUN_003ff550();
  param_1[0x1e8] = 0x4000000000;
  param_1[0x1e7] = (long)(param_1 + 0x1a6);
  *(undefined1 *)(param_1 + 0x1e6) = 1;
  param_1[0x1e9] = 0x16;
  *(undefined4 *)(param_1 + 0x1ea) = 0x1000;
  param_1[0x1eb] = 0;
                    /* try { // try from 001b52ec to 001b534f has its CatchHandler @ 001b5d5c */
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
  param_1[0x1ec] = lVar7;
  FUN_003ff550();
  param_1[0x230] = 0x4000000000;
  *(undefined1 *)(param_1 + 0x22e) = 1;
  param_1[0x22f] = (long)(param_1 + 0x1ee);
  param_1[0x231] = 0x33;
  *(undefined4 *)(param_1 + 0x232) = 0x1000;
  param_1[0x233] = 0;
                    /* try { // try from 001b5380 to 001b53e3 has its CatchHandler @ 001b5d54 */
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
  param_1[0x234] = lVar7;
  FUN_003ff550();
  param_1[0x278] = 0x4000000000;
  *(undefined1 *)(param_1 + 0x276) = 1;
  param_1[0x277] = (long)(param_1 + 0x236);
  param_1[0x279] = 0x18;
  *(undefined4 *)(param_1 + 0x27a) = 0x1000;
  param_1[0x27b] = 0;
                    /* try { // try from 001b5418 to 001b547b has its CatchHandler @ 001b5a2c */
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
  param_1[0x27c] = lVar7;
  FUN_003ff550();
  param_1[0x2c0] = 0x4000000000;
  *(undefined1 *)(param_1 + 0x2be) = 1;
  param_1[0x2bf] = (long)(param_1 + 0x27e);
  param_1[0x2c1] = 8;
  *(undefined4 *)(param_1 + 0x2c2) = 0x1000;
  param_1[0x2c3] = 0;
                    /* try { // try from 001b54b0 to 001b5513 has its CatchHandler @ 001b59f0 */
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
  param_1[0x2c4] = lVar7;
  FUN_003ff550();
  param_1[0x308] = 0x4000000000;
  *(undefined1 *)(param_1 + 0x306) = 1;
  param_1[0x307] = (long)(param_1 + 0x2c6);
  param_1[0x309] = 0x11;
  *(undefined4 *)(param_1 + 0x30a) = 0x1000;
  param_1[0x30b] = 0;
                    /* try { // try from 001b5548 to 001b55ab has its CatchHandler @ 001b59b4 */
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
  param_1[0x30c] = lVar7;
  FUN_003ff550();
  param_1[0x350] = 0x4000000000;
  *(undefined1 *)(param_1 + 0x34e) = 1;
  param_1[0x34f] = (long)(param_1 + 0x30e);
  param_1[0x351] = 0xf;
  *(undefined4 *)(param_1 + 0x352) = 0x1000;
  param_1[0x353] = 0;
                    /* try { // try from 001b55e0 to 001b5643 has its CatchHandler @ 001b5978 */
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
  param_1[0x354] = lVar7;
  FUN_003ff550();
  param_1[0x398] = 0x4000000000;
  *(undefined1 *)(param_1 + 0x396) = 1;
  param_1[0x397] = (long)(param_1 + 0x356);
  param_1[0x399] = 0xf;
  *(undefined4 *)(param_1 + 0x39a) = 0x1000;
  param_1[0x39b] = 0;
                    /* try { // try from 001b5678 to 001b56db has its CatchHandler @ 001b593c */
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
  param_1[0x39c] = lVar7;
  FUN_003ff550();
  param_1[0x3e2] = 0x4000000000;
  param_1[0x39d] = 0;
  param_1[0x39e] = 0;
  *(undefined1 *)(param_1 + 0x3e0) = 1;
  param_1[0x3e1] = (long)(param_1 + 0x3a0);
  param_1[0x3e3] = 0x12;
  *(undefined4 *)(param_1 + 0x3e4) = 0x1000;
  param_1[0x3e5] = 0;
                    /* try { // try from 001b5718 to 001b577b has its CatchHandler @ 001b58d0 */
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
  param_1[0x3e6] = lVar7;
  FUN_003ff550();
  param_1[0x42a] = 0x4000000000;
  *(undefined1 *)(param_1 + 0x428) = 1;
  param_1[0x429] = (long)(param_1 + 1000);
  param_1[0x42b] = 0x40;
  *(undefined4 *)(param_1 + 0x42c) = 0x1000;
  param_1[0x42d] = 0;
                    /* try { // try from 001b57b0 to 001b5813 has its CatchHandler @ 001b5894 */
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
  param_1[0x42e] = lVar7;
  FUN_003ff550();
  return;
}


