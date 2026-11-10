/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00136d30; name: FUN_00136d30
 */


void FUN_00136d30(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  char *pcVar3;
  ushort uVar4;
  undefined1 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  code *pcVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  uint uVar21;
  uint *puVar22;
  ulong uVar23;
  uint uVar24;
  int local_20ac;
  undefined1 auStack_20a0 [64];
  undefined1 local_2060 [8192];
  
  puVar5 = local_2060;
  uVar17 = *(uint *)(param_1 + 0x8c);
  uVar23 = (ulong)uVar17;
  *(undefined1 *)(param_1 + 0x118) = 0;
  if (uVar17 == 0) {
    lVar9 = *(long *)(param_1 + 200);
    if (lVar9 != 0) {
      plVar6 = (long *)FUN_00400d30();
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar9);
      *(undefined8 *)(param_1 + 200) = 0;
    }
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  else {
    if (0x2000 < uVar17 * 0x10) {
      plVar6 = (long *)FUN_00400d30();
      puVar5 = (undefined1 *)
               (**(code **)(*plVar6 + 0x10))
                         (plVar6,uVar17 * 0x10,"NonTrackedAlloc",
                          "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseMBP.cpp"
                          ,0x408);
    }
    lVar9 = 0;
    uVar12 = 0;
    puVar2 = (uint *)(puVar5 + uVar23 * 4);
    uVar13 = 0;
    uVar16 = 0;
    do {
      while( true ) {
        uVar24 = (uint)uVar16;
        uVar21 = (uint)uVar13;
        uVar14 = (uint)(uVar12 >> 5) & 0x7ffffff;
        uVar11 = (uint)uVar12;
        if (uVar14 < *(uint *)(param_1 + 0xd0)) break;
        uVar15 = *(uint *)(*(long *)(param_1 + 0x98) + lVar9);
LAB_00136e5c:
        uVar24 = uVar24 + 1;
        puVar2[uVar16] = uVar15;
        *(uint *)(puVar5 + uVar16 * 4 + uVar23 * 0xc) = uVar11;
        uVar12 = uVar12 + 1;
        lVar9 = lVar9 + 0x18;
        uVar16 = (ulong)uVar24;
        if (uVar23 == uVar12) goto LAB_00136e80;
      }
      uVar15 = *(uint *)(*(long *)(param_1 + 0x98) + lVar9);
      if ((*(uint *)(*(long *)(param_1 + 200) + (ulong)uVar14 * 4) & 1 << (ulong)(uVar11 & 0x1f)) ==
          0) goto LAB_00136e5c;
      uVar21 = uVar21 + 1;
      *(uint *)(puVar5 + uVar13 * 4) = uVar15;
      *(uint *)(puVar5 + uVar13 * 4 + uVar23 * 8) = uVar11;
      uVar12 = uVar12 + 1;
      lVar9 = lVar9 + 0x18;
      uVar13 = (ulong)uVar21;
    } while (uVar23 != uVar12);
LAB_00136e80:
    FUN_002d4570(auStack_20a0);
    if (uVar21 < 0x400) {
                    /* try { // try from 00136e94 to 00136ea3 has its CatchHandler @ 00137110 */
      lVar9 = FUN_002d4750(param_1 + 0xd8,puVar5,uVar21,1);
    }
    else {
                    /* try { // try from 00136ee8 to 00136efb has its CatchHandler @ 00137110 */
      lVar9 = FUN_002d4750(auStack_20a0,puVar5,uVar21,1);
    }
    puVar22 = *(uint **)(lVar9 + 0x10);
    uVar11 = *(uint *)(param_1 + 0x88);
    if (uVar11 == 0) {
      local_20ac = 0;
      lVar9 = 0;
    }
    else {
                    /* try { // try from 00136eb0 to 00136edb has its CatchHandler @ 00137124 */
      plVar6 = (long *)FUN_00400d30();
      lVar9 = (**(code **)(*plVar6 + 0x10))
                        (plVar6,(ulong)uVar11 << 1,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseMBP.cpp"
                         ,0x438);
      local_20ac = *(int *)(param_1 + 0x88);
    }
                    /* try { // try from 00136f08 to 00136f6f has its CatchHandler @ 00137128 */
    plVar6 = (long *)FUN_00400d30();
    pcVar10 = *(code **)(*plVar6 + 0x10);
    plVar7 = (long *)FUN_00400d60();
    uVar12 = (**(code **)(*plVar7 + 0x28))();
    pcVar3 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::Bp::IAABB>::getName() [T = physx::Bp::IAABB]"
    ;
    if ((uVar12 & 1) == 0) {
      pcVar3 = "<allocation names disabled>";
    }
    puVar8 = (undefined8 *)
             (*pcVar10)(plVar6,(ulong)(local_20ac + 2) * 0x18,pcVar3,
                        "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseMBP.cpp"
                        ,0x43a);
    uVar11 = 0xffffffff;
    *(undefined4 *)(puVar8 + uVar23 * 3) = 0xffffffff;
    *(undefined4 *)(puVar8 + (ulong)(uVar17 + 1) * 3) = 0xffffffff;
    if (uVar21 != 0) {
      uVar11 = *(uint *)(puVar5 + (ulong)*puVar22 * 4);
    }
    if (uVar24 == 0) {
      uVar17 = 0xffffffff;
    }
    else {
      uVar17 = *puVar2;
    }
    uVar12 = 0;
    uVar13 = 0;
    uVar16 = 0;
    puVar18 = puVar8;
    do {
      if (uVar11 < uVar17) {
        puVar1 = puVar22 + uVar13;
        uVar11 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar11;
        uVar14 = *(uint *)(puVar5 + (ulong)*puVar1 * 4 + uVar23 * 8);
        if (uVar11 < uVar21) {
          uVar11 = *(uint *)(puVar5 + (ulong)puVar22[uVar11] * 4);
        }
        else {
          uVar11 = 0xffffffff;
        }
      }
      else {
        uVar14 = *(uint *)(puVar5 + uVar16 * 4 + uVar23 * 0xc);
        uVar17 = (int)uVar16 + 1;
        uVar16 = (ulong)uVar17;
        if (uVar17 < uVar24) {
          uVar17 = puVar2[uVar17];
        }
        else {
          uVar17 = 0xffffffff;
        }
      }
      puVar19 = (undefined8 *)(*(long *)(param_1 + 0x98) + (ulong)uVar14 * 0x18);
      uVar4 = *(ushort *)(*(long *)(param_1 + 0xa8) + (ulong)uVar14 * 2);
      puVar18[2] = puVar19[2];
      puVar18[1] = puVar19[1];
      *puVar18 = *puVar19;
      *(ushort *)(lVar9 + uVar12 * 2) = uVar4;
      *(int *)(*(long *)(param_1 + 0x80) + (ulong)uVar4 * 8) = (int)uVar12;
      uVar12 = uVar12 + 1;
      puVar18 = puVar18 + 3;
    } while (uVar23 != uVar12);
    if (puVar5 != local_2060) {
                    /* try { // try from 00137060 to 00137073 has its CatchHandler @ 00137120 */
      plVar6 = (long *)FUN_00400d30();
      (**(code **)(*plVar6 + 0x18))(plVar6,puVar5);
    }
    lVar20 = *(long *)(param_1 + 0x98);
    if (lVar20 != 0) {
                    /* try { // try from 0013707c to 0013708f has its CatchHandler @ 0013711c */
      plVar6 = (long *)FUN_00400d30();
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar20);
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
    lVar20 = *(long *)(param_1 + 0xa8);
    *(undefined8 **)(param_1 + 0x98) = puVar8;
    if (lVar20 != 0) {
                    /* try { // try from 001370a0 to 001370b3 has its CatchHandler @ 00137118 */
      plVar6 = (long *)FUN_00400d30();
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar20);
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    lVar20 = *(long *)(param_1 + 200);
    *(long *)(param_1 + 0xa8) = lVar9;
    if (lVar20 != 0) {
                    /* try { // try from 001370c4 to 001370d7 has its CatchHandler @ 00137114 */
      plVar6 = (long *)FUN_00400d30();
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar20);
      *(undefined8 *)(param_1 + 200) = 0;
    }
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    FUN_002d45a0(auStack_20a0);
  }
  return;
}


