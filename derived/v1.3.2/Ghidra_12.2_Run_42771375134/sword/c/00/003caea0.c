/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003caea0; name: FUN_003caea0
 */


void FUN_003caea0(long *param_1,long param_2,long param_3)

{
  char *pcVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  code *pcVar10;
  
  param_1[4] = 0;
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar2 = *(uint *)(param_3 + 0x98);
  iVar4 = *(int *)(param_3 + 0xd8);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(int *)((long)param_1 + 0x4c) = iVar4;
  *(int *)(param_1 + 10) = iVar4;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  *(byte *)(param_1 + 0xb) = (byte)(uVar2 >> 10) & 1;
  if (iVar4 == 0) {
    lVar6 = 0;
  }
  else {
                    /* try { // try from 003caef4 to 003caf1b has its CatchHandler @ 003cb27c */
    plVar5 = (long *)FUN_00400d30();
    lVar6 = (**(code **)(*plVar5 + 0x10))
                      (plVar5,iVar4,"NonTrackedAlloc",
                       "./../../SimulationController/src/ScContactReportBuffer.h",0xa7);
  }
  param_1[0xc] = 0;
  param_1[8] = lVar6;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = -0xc0c00000;
  param_1[0x12] = 0;
                    /* try { // try from 003caf44 to 003caf4f has its CatchHandler @ 003cb26c */
  FUN_003d6690(param_1 + 0xc,0x40);
  param_1[0x9d] = (long)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0xa0) = 0x400;
  *(undefined4 *)(param_1 + 0xe7) = 0x400;
  param_1[299] = (long)(param_1 + 0xea);
  *(undefined4 *)(param_1 + 0x59) = 0x100;
  param_1[0x1b9] = (long)(param_1 + 0x178);
  param_1[0x12d] = 0x100;
  *(undefined4 *)(param_1 + 0x1bc) = 0x600;
  *(undefined4 *)(param_1 + 0x12e) = 0x6800;
  param_1[0x200] = (long)(param_1 + 0x1bf);
  param_1[0x56] = (long)(param_1 + 0x15);
  param_1[0xe4] = (long)(param_1 + 0xa3);
  param_1[0x172] = (long)(param_1 + 0x131);
  *(undefined4 *)(param_1 + 0x203) = 0x800;
  param_1[0x57] = 0x4000000000;
  *(undefined1 *)(param_1 + 0x55) = 1;
  param_1[0x58] = 0x20;
  param_1[0x5a] = 0;
  param_1[0x9e] = 0x4000000000;
  *(undefined1 *)(param_1 + 0x9c) = 1;
  param_1[0x9f] = 0x20;
  param_1[0xa1] = 0;
  param_1[0xe5] = 0x4000000000;
  *(undefined1 *)(param_1 + 0xe3) = 1;
  param_1[0xe6] = 0x20;
  param_1[0xe8] = 0;
  param_1[300] = 0x4000000000;
  *(undefined1 *)(param_1 + 0x12a) = 1;
  param_1[0x12f] = 0;
  param_1[0x173] = 0x4000000000;
  *(undefined1 *)(param_1 + 0x171) = 1;
  param_1[0x174] = 0x20;
  *(undefined4 *)(param_1 + 0x175) = 0xa00;
  param_1[0x176] = 0;
  param_1[0x1ba] = 0x4000000000;
  *(undefined1 *)(param_1 + 0x1b8) = 1;
  param_1[0x1bb] = 0x20;
  param_1[0x1bd] = 0;
  param_1[0x201] = 0x4000000000;
  *(undefined1 *)(param_1 + 0x1ff) = 1;
  param_1[0x202] = 0x20;
  param_1[0x204] = 0;
  param_1[0x248] = 0x4000000000;
  *(undefined1 *)(param_1 + 0x246) = 1;
  *(undefined4 *)(param_1 + 0x24a) = 0xa00;
  param_1[0x28f] = 0x4000000000;
  param_1[0x247] = (long)(param_1 + 0x206);
  param_1[0x249] = 0x20;
  param_1[0x24b] = 0;
  *(undefined1 *)(param_1 + 0x28d) = 1;
  param_1[0x28e] = (long)(param_1 + 0x24d);
  *(undefined4 *)(param_1 + 0x291) = 0x200;
  param_1[0x290] = 0x20;
  param_1[0x292] = 0;
  param_1[0x293] = 0;
  param_1[0x294] = 0;
  param_1[0x295] = 0;
  param_1[0x296] = 0;
  param_1[0x297] = 0;
  param_1[0x298] = -0xc0c00000;
  param_1[0x299] = 0;
                    /* try { // try from 003cb0a8 to 003cb0b3 has its CatchHandler @ 003cb264 */
  FUN_003d6820(param_1 + 0x293,0x40);
  lVar6 = *(long *)(param_2 + 0x18);
  param_1[0x29c] = 0;
  param_1[0x29d] = 0;
  puVar3 = PTR_DAT_02712790;
  *(undefined4 *)(param_1 + 0x29e) = 0;
  param_1[0x29f] = (long)param_1;
  param_1[0x2a0] = (long)"ScNPhaseCore.mergeProcessedTriggerInteractions";
  param_1[0x2a1] = 0;
  param_1[0x29b] = lVar6;
  param_1[0x29a] = (long)(puVar3 + 0x10);
                    /* try { // try from 003cb0ec to 003cb157 has its CatchHandler @ 003cb370 */
  iVar4 = FUN_003ff600();
  if (iVar4 == 0) {
    lVar6 = 0;
  }
  else {
    plVar5 = (long *)FUN_00400d30();
    pcVar10 = *(code **)(*plVar5 + 0x10);
    plVar7 = (long *)FUN_00400d60();
    uVar8 = (**(code **)(*plVar7 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::MutexImpl>::getName() [T = physx::shdfnd::MutexImpl]"
    ;
    if ((uVar8 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar6 = (*pcVar10)(plVar5,iVar4,pcVar1,
                       "./../../../../PxShared/src/foundation/include\\PsMutex.h",0x71);
  }
  param_1[0x2a2] = lVar6;
  FUN_003ff550();
  *(undefined4 *)(param_1 + 0x2a3) = 0;
  param_1[0x2a4] = 0;
  param_1[0x2a5] = 0;
  param_1[0x2a6] = 0;
  param_1[0x2a7] = 0;
  param_1[0x2a8] = 0;
  param_1[0x2a9] = -0xc0c00000;
  param_1[0x2aa] = 0;
                    /* try { // try from 003cb180 to 003cb18b has its CatchHandler @ 003cb248 */
  FUN_003d69d0(param_1 + 0x2a4,0x40);
  param_1[0x2ab] = 0;
  param_1[0x2ac] = 0;
  param_1[0x2ad] = 0;
  param_1[0x2ae] = 0;
  param_1[0x2af] = 0;
  param_1[0x2b0] = -0xc0c00000;
  param_1[0x2b1] = 0;
                    /* try { // try from 003cb1b0 to 003cb1bb has its CatchHandler @ 003cb234 */
  FUN_003d6b80(param_1 + 0x2ab,0x40);
                    /* try { // try from 003cb1bc to 003cb20b has its CatchHandler @ 003cb28c */
  plVar5 = (long *)FUN_00400d30();
  pcVar10 = *(code **)(*plVar5 + 0x10);
  plVar7 = (long *)FUN_00400d60();
  uVar8 = (**(code **)(*plVar7 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::FilterPairManager>::getName() [T = physx::Sc::FilterPairManager]"
  ;
  if ((uVar8 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  puVar9 = (undefined8 *)
           (*pcVar10)(plVar5,0x18,pcVar1,
                      "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScNPhaseCore.cpp"
                      ,0x9e);
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[2] = 0xffffffff;
  param_1[0x13] = (long)puVar9;
  return;
}


