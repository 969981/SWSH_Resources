/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0013ae00; name: FUN_0013ae00
 */


void FUN_0013ae00(long *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined8 param_6)

{
  uint uVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  code *pcVar12;
  
  *param_1 = (long)(PTR_DAT_02710cd8 + 0x10);
                    /* try { // try from 0013ae48 to 0013ae53 has its CatchHandler @ 0013b0d4 */
  FUN_0013c2d0(param_1 + 1,param_6);
                    /* try { // try from 0013ae58 to 0013ae5f has its CatchHandler @ 0013b0c0 */
  FUN_0013c370(param_1 + 9,param_6);
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
                    /* try { // try from 0013ae84 to 0013aed3 has its CatchHandler @ 0013b0d8 */
  plVar3 = (long *)FUN_00400d30();
  pcVar12 = *(code **)(*plVar3 + 0x10);
  plVar4 = (long *)FUN_00400d60();
  uVar5 = (**(code **)(*plVar4 + 0x28))();
  pcVar2 = "static const char *physx::shdfnd::ReflectionAllocator<MBP>::getName() [T = MBP]";
  if ((uVar5 & 1) == 0) {
    pcVar2 = "<allocation names disabled>";
  }
  puVar6 = (undefined8 *)
           (*pcVar12)(plVar3,0x14e0,pcVar2,
                      "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseMBP.cpp"
                      ,0xc9d);
  lVar7 = 0;
  *puVar6 = 0xffffffff00000000;
  *(undefined4 *)(puVar6 + 1) = 0xffffffff;
  puVar6[6] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *(undefined4 *)(puVar6 + 7) = 0;
  puVar6[10] = 0;
  *(undefined4 *)(puVar6 + 0xb) = 0;
  *(undefined4 *)(puVar6 + 0x10) = 0;
  puVar6[0x11] = 0;
  *(undefined4 *)(puVar6 + 0x12) = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x13] = 0;
  puVar6[0x14] = 0;
  puVar9 = puVar6;
  do {
    lVar7 = lVar7 + 0x20;
    puVar9[0x15] = 0;
    puVar9[0x16] = 0;
    puVar9 = (undefined8 *)((long)puVar6 + lVar7);
    puVar9[0x13] = 0;
    puVar9[0x14] = 0;
  } while (lVar7 != 0x1000);
  lVar7 = -0x400;
  puVar6[0x296] = 0;
  puVar6[0x297] = 0;
  puVar6[0x29a] = 0;
  *(undefined4 *)(puVar6 + 0x29b) = 0;
  puVar9 = puVar6 + -0x80;
  *(undefined4 *)(puVar6 + 0x215) = 0xffffffff;
  do {
    *(undefined8 *)((long)puVar9 + 0x14ac) = 0xffffffffffffffff;
    lVar7 = lVar7 + 0x10;
    *(undefined4 *)((long)puVar9 + 0x14b4) = 0xffffffff;
    puVar9 = (undefined8 *)((long)puVar6 + lVar7);
    *(undefined4 *)(puVar9 + 0x295) = 0xffffffff;
  } while (lVar7 != 0);
  uVar1 = param_5 + param_4;
  param_1[0x11] = (long)puVar6;
                    /* try { // try from 0013af88 to 0013b0a3 has its CatchHandler @ 0013b0e8 */
  FUN_00138c10(puVar6,param_2,uVar1,param_3);
  if (uVar1 == 0) goto LAB_0013b074;
  plVar3 = (long *)FUN_00400d30();
  uVar5 = (ulong)uVar1;
  __dest = (void *)(**(code **)(*plVar3 + 0x10))
                             (plVar3,uVar5 << 2,"NonTrackedAlloc",
                              "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseMBP.cpp"
                              ,0xcb2);
  if ((int)param_1[0x13] == 0) {
    uVar10 = 0;
    if (uVar1 != 0) goto LAB_0013b000;
  }
  else {
    memcpy(__dest,(void *)param_1[0x12],(ulong)(uint)((int)param_1[0x13] << 2));
    uVar10 = *(uint *)(param_1 + 0x13);
    if (uVar10 < uVar1) {
LAB_0013b000:
      uVar8 = (ulong)uVar10;
      uVar11 = (uVar5 - 1) - uVar8;
      if ((uVar1 - uVar10 & 3) != 0) {
        lVar7 = -((ulong)(uVar1 - uVar10) & 3);
        do {
          *(undefined4 *)((long)__dest + uVar8 * 4) = 0xffffffff;
          uVar8 = uVar8 + 1;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0);
      }
      if (2 < uVar11) {
        lVar7 = uVar5 - uVar8;
        puVar9 = (undefined8 *)((long)__dest + uVar8 * 4 + 8);
        do {
          puVar9[-1] = 0xffffffffffffffff;
          *puVar9 = 0xffffffffffffffff;
          lVar7 = lVar7 + -4;
          puVar9 = puVar9 + 2;
        } while (lVar7 != 0);
      }
    }
  }
  lVar7 = param_1[0x12];
  if (lVar7 != 0) {
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar7);
  }
  param_1[0x12] = (long)__dest;
  *(uint *)(param_1 + 0x13) = uVar1;
LAB_0013b074:
  if ((*(uint *)((long)param_1 + 0xac) & 0x7ffffc00) == 0) {
    FUN_0013bdc0(param_1 + 0x14,0x400);
  }
  if ((*(uint *)((long)param_1 + 0xbc) & 0x7ffffc00) == 0) {
    FUN_0013bdc0(param_1 + 0x16,0x400);
  }
  return;
}


