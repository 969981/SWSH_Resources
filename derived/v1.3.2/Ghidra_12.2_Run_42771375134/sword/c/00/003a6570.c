/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a6570; name: FUN_003a6570
 */


void FUN_003a6570(long *param_1,long param_2)

{
  char *pcVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  
  *param_1 = (long)(PTR_DAT_02712700 + 0x10);
  FUN_0039f470(param_1 + 2,0);
  param_1[0x3d4] = param_2;
  param_1[0x3d5] = 0;
  param_1[0x3d6] = 0;
  param_1[0x3d7] = 0;
  param_1[0x3d8] = 0;
  param_1[0x3d9] = 0;
  param_1[0x3da] = -0xc0c00000;
  param_1[0x3db] = 0;
                    /* try { // try from 003a65e8 to 003a65f3 has its CatchHandler @ 003a67f0 */
  FUN_003a8c80(param_1 + 0x3d5,0x40);
  param_1[0x3e3] = 0x2000000000;
  param_1[0x3dc] = 0;
  param_1[0x3dd] = 0;
  param_1[0x3de] = 0;
  param_1[0x3df] = 0;
  param_1[0x3e0] = 0;
  param_1[0x3e1] = 0;
  param_1[0x3e2] = 0;
  *(undefined1 *)(param_1 + 0x3e4) = 0;
                    /* try { // try from 003a6620 to 003a6647 has its CatchHandler @ 003a6808 */
  plVar3 = (long *)FUN_00400d30();
  lVar4 = (**(code **)(*plVar3 + 0x10))
                    (plVar3,0x318,"NonTrackedAlloc",
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqExtendedBucketPruner.cpp"
                     ,0x3c);
  uVar2 = *(uint *)((long)param_1 + 0x1f1c);
  param_1[0x3e1] = lVar4;
  if (uVar2 == 0) {
    param_1[0x3e2] = 0;
  }
  else {
                    /* try { // try from 003a6654 to 003a667b has its CatchHandler @ 003a6804 */
    plVar3 = (long *)FUN_00400d30();
    lVar4 = (**(code **)(*plVar3 + 0x10))
                      (plVar3,(ulong)uVar2 << 4,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqExtendedBucketPruner.cpp"
                       ,0x3d);
    param_1[0x3e2] = lVar4;
    if (*(uint *)((long)param_1 + 0x1ecc) < *(uint *)((long)param_1 + 0x1f1c)) {
                    /* try { // try from 003a66ac to 003a6707 has its CatchHandler @ 003a680c */
      FUN_003a8c80(param_1 + 0x3d5);
    }
  }
  plVar3 = (long *)FUN_00400d30();
  pcVar10 = *(code **)(*plVar3 + 0x10);
  plVar5 = (long *)FUN_00400d60();
  uVar6 = (**(code **)(*plVar5 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBTree>::getName() [T = physx::Sq::AABBTree]"
  ;
  if ((uVar6 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  lVar4 = (*pcVar10)(plVar3,0x68,pcVar1,
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqExtendedBucketPruner.cpp"
                     ,0x41);
                    /* try { // try from 003a6708 to 003a6713 has its CatchHandler @ 003a67c8 */
  FUN_00397650(lVar4);
  param_1[0x3dc] = lVar4;
  if (*(int *)((long)param_1 + 0x1f1c) != 0) {
    lVar9 = param_1[0x3e2];
    lVar4 = 0;
    uVar6 = 0;
    do {
      *(undefined8 *)(lVar9 + lVar4 + 8) = 0;
                    /* try { // try from 003a6744 to 003a6783 has its CatchHandler @ 003a6858 */
      plVar3 = (long *)FUN_00400d30();
      pcVar10 = *(code **)(*plVar3 + 0x10);
      plVar5 = (long *)FUN_00400d60();
      uVar7 = (**(code **)(*plVar5 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBTree>::getName() [T = physx::Sq::AABBTree]"
      ;
      if ((uVar7 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      uVar8 = (*pcVar10)(plVar3,0x68,pcVar1,
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqExtendedBucketPruner.cpp"
                         ,0x47);
                    /* try { // try from 003a6784 to 003a678b has its CatchHandler @ 003a681c */
      FUN_00397650(uVar8);
      lVar9 = param_1[0x3e2];
      *(undefined8 *)(lVar9 + lVar4) = uVar8;
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar6 < *(uint *)((long)param_1 + 0x1f1c));
  }
  return;
}


