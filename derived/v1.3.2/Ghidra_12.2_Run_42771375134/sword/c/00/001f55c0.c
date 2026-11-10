/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f55c0; name: FUN_001f55c0
 */


void FUN_001f55c0(long *param_1,long param_2)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  
  FUN_001f5040();
  param_1[0x4ac] = 0;
  puVar3 = PTR_DAT_027111a0;
  param_1[0x4ad] = 0;
  puVar1 = PTR_DAT_02710c30;
  param_1[0x4ae] = 0;
  param_1[0x4af] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[0x4b0] = 0;
  param_1[0x4b1] = 0;
  param_1[0x4b2] = 0;
  param_1[0x4ab] = (long)(puVar1 + 0x10);
  param_1[0x4b3] = 0;
  param_1[0x4b4] = 0;
  param_1[0x4b5] = 0;
  param_1[0x4b6] = 0;
  param_1[0x4b7] = 0;
  param_1[0x4b8] = 0;
  param_1[0x4b9] = 0;
  param_1[0x4ba] = 0;
  param_1[0x4bb] = -0xc0c00000;
  param_1[0x4bc] = 0;
                    /* try { // try from 001f5660 to 001f566b has its CatchHandler @ 001f5b68 */
  FUN_001e0bc0(param_1 + 0x4b6,0x40);
  param_1[0x4bd] = 0;
  param_1[0x4be] = 0;
  param_1[0x4bf] = 0;
  param_1[0x4c0] = 0;
  param_1[0x4c1] = 0;
  param_1[0x4c2] = 0;
  param_1[0x4c3] = 0;
  param_1[0x4c4] = -0xc0c00000;
  param_1[0x4c5] = 0;
                    /* try { // try from 001f5698 to 001f56a7 has its CatchHandler @ 001f5b58 */
  FUN_001ff110(param_1 + 0x4bf,0x40);
  param_1[0x4c6] = 0;
  param_1[0x4c7] = 0;
  param_1[0x4c8] = 0;
  param_1[0x4c9] = 0;
  param_1[0x4ca] = 0;
  param_1[0x4cb] = -0xc0c00000;
  param_1[0x4cc] = 0;
                    /* try { // try from 001f56cc to 001f56db has its CatchHandler @ 001f5b48 */
  FUN_001ff2a0(param_1 + 0x4c6,0x40);
  param_1[0x4cd] = 0;
  param_1[0x4ce] = 0;
  param_1[0x4cf] = 0;
  param_1[0x4d0] = 0;
  param_1[0x4d1] = 0;
  param_1[0x4d2] = -0xc0c00000;
  param_1[0x4d3] = 0;
                    /* try { // try from 001f5700 to 001f570b has its CatchHandler @ 001f5b38 */
  FUN_001ff8d0(param_1 + 0x4cd,0x40);
  param_1[0x4d4] = 0;
  param_1[0x4d5] = 0;
  param_1[0x4d6] = 0;
  param_1[0x4d7] = 0;
  param_1[0x4d8] = 0;
  param_1[0x4d9] = 0;
  param_1[0x4da] = 0;
  param_1[0x4db] = -0xc0c00000;
  param_1[0x4dc] = 0;
                    /* try { // try from 001f5738 to 001f5743 has its CatchHandler @ 001f5b28 */
  FUN_001ff430(param_1 + 0x4d6,0x40);
  param_1[0x4dd] = 0;
  param_1[0x4de] = 0;
  param_1[0x4df] = 0;
  param_1[0x4e0] = 0;
  param_1[0x4e1] = 0;
  param_1[0x4e2] = -0xc0c00000;
  param_1[0x4e3] = 0;
                    /* try { // try from 001f5768 to 001f5773 has its CatchHandler @ 001f5b18 */
  FUN_001ff5c0(param_1 + 0x4dd,0x40);
  *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)((long)param_1 + 0x2724) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0x4e5) = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)((long)param_1 + 0x272c) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0x4e6) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)((long)param_1 + 0x2734) = *(undefined4 *)(param_2 + 0xf8);
                    /* try { // try from 001f57a4 to 001f5817 has its CatchHandler @ 001f5bd0 */
  iVar4 = FUN_003ffad0();
  if (iVar4 == 0) {
    lVar9 = 0;
  }
  else {
    plVar6 = (long *)FUN_00400d30();
    pcVar10 = *(code **)(*plVar6 + 0x10);
    plVar7 = (long *)FUN_00400d60();
    uVar8 = (**(code **)(*plVar7 + 0x28))();
    pcVar2 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::SyncImpl>::getName() [T = physx::shdfnd::SyncImpl]"
    ;
    if ((uVar8 & 1) == 0) {
      pcVar2 = "<allocation names disabled>";
    }
    lVar9 = (*pcVar10)(plVar6,iVar4,pcVar2,"./../../../../PxShared/src/foundation/include\\PsSync.h"
                       ,0x5f);
  }
  param_1[0x4e7] = lVar9;
  FUN_003ffae0();
                    /* try { // try from 001f5818 to 001f588b has its CatchHandler @ 001f5ba0 */
  iVar4 = FUN_003ffad0();
  if (iVar4 == 0) {
    lVar9 = 0;
  }
  else {
    plVar6 = (long *)FUN_00400d30();
    pcVar10 = *(code **)(*plVar6 + 0x10);
    plVar7 = (long *)FUN_00400d60();
    uVar8 = (**(code **)(*plVar7 + 0x28))();
    pcVar2 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::SyncImpl>::getName() [T = physx::shdfnd::SyncImpl]"
    ;
    if ((uVar8 & 1) == 0) {
      pcVar2 = "<allocation names disabled>";
    }
    lVar9 = (*pcVar10)(plVar6,iVar4,pcVar2,"./../../../../PxShared/src/foundation/include\\PsSync.h"
                       ,0x5f);
  }
  param_1[0x4e8] = lVar9;
  FUN_003ffae0();
                    /* try { // try from 001f588c to 001f58ff has its CatchHandler @ 001f5b70 */
  iVar4 = FUN_003ffad0();
  if (iVar4 == 0) {
    lVar9 = 0;
  }
  else {
    plVar6 = (long *)FUN_00400d30();
    pcVar10 = *(code **)(*plVar6 + 0x10);
    plVar7 = (long *)FUN_00400d60();
    uVar8 = (**(code **)(*plVar7 + 0x28))();
    pcVar2 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::SyncImpl>::getName() [T = physx::shdfnd::SyncImpl]"
    ;
    if ((uVar8 & 1) == 0) {
      pcVar2 = "<allocation names disabled>";
    }
    lVar9 = (*pcVar10)(plVar6,iVar4,pcVar2,"./../../../../PxShared/src/foundation/include\\PsSync.h"
                       ,0x5f);
  }
  param_1[0x4e9] = lVar9;
  FUN_003ffae0();
  param_1[0x4eb] = 0;
  param_1[0x4ec] = 0;
  param_1[0x4f0] = 0;
  param_1[0x4f1] = 0;
  *(undefined4 *)((long)param_1 + 0x2754) = 1;
  *(undefined4 *)(param_1 + 0x4f2) = 0;
  param_1[0x4ef] = (long)param_1;
  puVar1 = PTR_DAT_027111a8 + 0x10;
  param_1[0x4ee] = (long)puVar1;
  param_1[0x4f3] = (long)(param_1 + 0x4e7);
  param_1[0x4f6] = 0;
  param_1[0x4f7] = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  param_1[0x4f5] = (long)param_1;
  param_1[0x4f4] = (long)puVar1;
  param_1[0x4f9] = (long)(param_1 + 0x4e8);
  param_1[0x4fc] = 0;
  param_1[0x4fd] = 0;
  *(undefined4 *)(param_1 + 0x4fe) = 0;
  param_1[0x4fb] = (long)param_1;
  param_1[0x4fa] = (long)puVar1;
  param_1[0x4ff] = (long)(param_1 + 0x4e9);
  param_1[0x502] = 0;
  param_1[0x503] = 0;
  *(undefined4 *)(param_1 + 0x504) = 0;
  param_1[0x501] = (long)param_1;
  param_1[0x500] = (long)(PTR_DAT_027111b0 + 0x10);
  param_1[0x505] = 0;
  param_1[0x509] = 0;
  param_1[0x50a] = 0;
  param_1[0x506] = (long)"NpScene.execution";
  *(undefined4 *)(param_1 + 0x50b) = 0;
  param_1[0x508] = (long)param_1;
  param_1[0x507] = (long)(PTR_DAT_027111b8 + 0x10);
  param_1[0x50c] = 0;
  param_1[0x510] = 0;
  param_1[0x511] = 0;
  param_1[0x50d] = (long)"NpScene.collide";
  *(undefined4 *)(param_1 + 0x512) = 0;
  param_1[0x50f] = (long)param_1;
  param_1[0x50e] = (long)(PTR_DAT_027111c0 + 0x10);
  param_1[0x514] = (long)"NpScene.solve";
  param_1[0x513] = 0;
  *(undefined1 *)(param_1 + 0x515) = 0;
  *(undefined4 *)((long)param_1 + 0x28ac) = 0;
  *(undefined4 *)(param_1 + 0x516) = 0;
  *(undefined4 *)((long)param_1 + 0x28b4) = 0;
  *(undefined4 *)(param_1 + 0x517) = 0;
  param_1[0x518] = 0;
                    /* try { // try from 001f5a18 to 001f5a1f has its CatchHandler @ 001f5a7c */
  FUN_003ff610(param_1 + 0x519);
  *(undefined2 *)(param_1 + 0x51a) = 0;
  *(undefined1 *)((long)param_1 + 0x28d2) = 0;
  param_1[0x505] = (long)param_1;
  param_1[0x50c] = (long)param_1;
  param_1[0x513] = (long)param_1;
  param_1[0x4ed] = param_1[0x3de];
                    /* try { // try from 001f5a44 to 001f5a47 has its CatchHandler @ 001f5a6c */
  uVar5 = FUN_00400050();
  *(undefined4 *)((long)param_1 + 0x28bc) = uVar5;
  return;
}


