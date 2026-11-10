/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0013b5c0; name: FUN_0013b5c0
 */


void FUN_0013b5c0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  void *__dest;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  uint *puVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  
  lVar4 = *(long *)(param_1 + 0x88);
  uVar9 = param_2[9];
  *(undefined8 *)(lVar4 + 0x14c0) = param_2[6];
  *(undefined8 *)(lVar4 + 0x14c8) = uVar9;
  uVar1 = *(uint *)(param_2 + 10);
  uVar13 = (ulong)uVar1;
  if (uVar1 <= *(uint *)(param_1 + 0x98)) goto LAB_0013b6e8;
  plVar3 = (long *)FUN_00400d30();
  __dest = (void *)(**(code **)(*plVar3 + 0x10))
                             (plVar3,uVar13 << 2,"NonTrackedAlloc",
                              "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseMBP.cpp"
                              ,0xcb2);
  if (*(int *)(param_1 + 0x98) == 0) {
    uVar6 = 0;
    if (uVar1 != 0) goto LAB_0013b66c;
  }
  else {
    memcpy(__dest,*(void **)(param_1 + 0x90),(ulong)(uint)(*(int *)(param_1 + 0x98) << 2));
    uVar6 = *(uint *)(param_1 + 0x98);
    if (uVar6 < uVar1) {
LAB_0013b66c:
      uVar5 = (ulong)uVar6;
      uVar7 = (uVar13 - 1) - uVar5;
      if ((uVar1 - uVar6 & 3) != 0) {
        lVar4 = -((ulong)(uVar1 - uVar6) & 3);
        do {
          *(undefined4 *)((long)__dest + uVar5 * 4) = 0xffffffff;
          uVar5 = uVar5 + 1;
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0);
      }
      if (2 < uVar7) {
        lVar4 = uVar13 - uVar5;
        puVar8 = (undefined8 *)((long)__dest + uVar5 * 4 + 8);
        do {
          puVar8[-1] = 0xffffffffffffffff;
          *puVar8 = 0xffffffffffffffff;
          lVar4 = lVar4 + -4;
          puVar8 = puVar8 + 2;
        } while (lVar4 != 0);
      }
    }
  }
  lVar4 = *(long *)(param_1 + 0x90);
  if (lVar4 != 0) {
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar4);
  }
  *(void **)(param_1 + 0x90) = __dest;
  *(uint *)(param_1 + 0x98) = uVar1;
LAB_0013b6e8:
  *(undefined8 *)(param_1 + 0xc0) = param_2[7];
  *(undefined8 *)(param_1 + 200) = param_2[8];
  if (((uint *)param_2[4] != (uint *)0x0) && (iVar12 = *(int *)(param_2 + 5), iVar12 != 0)) {
    lVar4 = *(long *)(param_1 + 0x90);
    puVar11 = (uint *)param_2[4];
    do {
      uVar1 = *puVar11;
      iVar12 = iVar12 + -1;
      FUN_00139ee0(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(lVar4 + (ulong)uVar1 * 4));
      lVar4 = *(long *)(param_1 + 0x90);
      *(undefined4 *)(lVar4 + (ulong)uVar1 * 4) = 0xffffffff;
      puVar11 = puVar11 + 1;
    } while (iVar12 != 0);
  }
  if (((uint *)*param_2 != (uint *)0x0) && (iVar12 = *(int *)(param_2 + 1), iVar12 != 0)) {
    lVar4 = param_2[6];
    lVar10 = param_2[7];
    puVar11 = (uint *)*param_2;
    do {
      uVar13 = (ulong)*puVar11;
      lVar14 = uVar13 * 4;
      puVar8 = (undefined8 *)(lVar4 + uVar13 * 0x18);
      fVar16 = *(float *)(param_2[9] + lVar14);
      fVar17 = (float)*puVar8 - fVar16;
      fVar18 = (float)((ulong)*puVar8 >> 0x20) - fVar16;
      fVar19 = (float)puVar8[1] - fVar16;
      uVar1 = (uint)fVar17 | 0x80000000;
      if ((int)fVar17 < 0) {
        uVar1 = ~(uint)fVar17;
      }
      fVar17 = (float)*(undefined8 *)((long)puVar8 + 0xc) + fVar16;
      fVar15 = (float)((ulong)*(undefined8 *)((long)puVar8 + 0xc) >> 0x20) + fVar16;
      fVar16 = (float)*(undefined8 *)((long)puVar8 + 0x14) + fVar16;
      local_68 = uVar1 - 0x10 >> 1 & 0x7ffffff8;
      uVar1 = (uint)fVar18 | 0x80000000;
      if ((int)fVar18 < 0) {
        uVar1 = ~(uint)fVar18;
      }
      uVar6 = (uint)fVar19 | 0x80000000;
      if ((int)fVar19 < 0) {
        uVar6 = ~(uint)fVar19;
      }
      local_64 = uVar1 - 0x10 >> 1 & 0x7ffffff8;
      local_60 = uVar6 - 0x10 >> 1 & 0x7ffffff8;
      uVar1 = (uint)fVar17 | 0x80000000;
      if ((int)fVar17 < 0) {
        uVar1 = ~(uint)fVar17;
      }
      local_5c = uVar1 + 0x10 >> 1 & 0x7ffffff8 | 2;
      uVar1 = (uint)fVar15 | 0x80000000;
      if ((int)fVar15 < 0) {
        uVar1 = ~(uint)fVar15;
      }
      local_58 = uVar1 + 0x10 >> 1 & 0x7ffffff8 | 2;
      uVar1 = (uint)fVar16 | 0x80000000;
      if ((int)fVar16 < 0) {
        uVar1 = ~(uint)fVar16;
      }
      local_54 = uVar1 + 0x10 >> 1 & 0x7ffffff8 | 2;
      iVar12 = iVar12 + -1;
      uVar2 = FUN_00139a90(*(undefined8 *)(param_1 + 0x88),&local_68,uVar13,
                           *(int *)(lVar10 + lVar14) == 0);
      *(undefined4 *)(*(long *)(param_1 + 0x90) + lVar14) = uVar2;
      puVar11 = puVar11 + 1;
    } while (iVar12 != 0);
  }
  if (((uint *)param_2[2] != (uint *)0x0) && (iVar12 = *(int *)(param_2 + 3), iVar12 != 0)) {
    lVar4 = param_2[6];
    puVar11 = (uint *)param_2[2];
    do {
      lVar10 = (ulong)*puVar11 * 4;
      puVar8 = (undefined8 *)(lVar4 + (ulong)*puVar11 * 0x18);
      fVar16 = *(float *)(param_2[9] + lVar10);
      fVar17 = (float)*puVar8 - fVar16;
      fVar18 = (float)((ulong)*puVar8 >> 0x20) - fVar16;
      fVar19 = (float)puVar8[1] - fVar16;
      uVar1 = (uint)fVar17 | 0x80000000;
      if ((int)fVar17 < 0) {
        uVar1 = ~(uint)fVar17;
      }
      fVar17 = (float)*(undefined8 *)((long)puVar8 + 0xc) + fVar16;
      fVar15 = (float)((ulong)*(undefined8 *)((long)puVar8 + 0xc) >> 0x20) + fVar16;
      fVar16 = (float)*(undefined8 *)((long)puVar8 + 0x14) + fVar16;
      local_68 = uVar1 - 0x10 >> 1 & 0x7ffffff8;
      uVar1 = (uint)fVar18 | 0x80000000;
      if ((int)fVar18 < 0) {
        uVar1 = ~(uint)fVar18;
      }
      local_64 = uVar1 - 0x10 >> 1 & 0x7ffffff8;
      uVar1 = (uint)fVar19 | 0x80000000;
      if ((int)fVar19 < 0) {
        uVar1 = ~(uint)fVar19;
      }
      local_60 = uVar1 - 0x10 >> 1 & 0x7ffffff8;
      uVar1 = (uint)fVar17 | 0x80000000;
      if ((int)fVar17 < 0) {
        uVar1 = ~(uint)fVar17;
      }
      local_5c = uVar1 + 0x10 >> 1 & 0x7ffffff8 | 2;
      uVar1 = (uint)fVar15 | 0x80000000;
      if ((int)fVar15 < 0) {
        uVar1 = ~(uint)fVar15;
      }
      local_58 = uVar1 + 0x10 >> 1 & 0x7ffffff8 | 2;
      uVar1 = (uint)fVar16 | 0x80000000;
      if ((int)fVar16 < 0) {
        uVar1 = ~(uint)fVar16;
      }
      local_54 = uVar1 + 0x10 >> 1 & 0x7ffffff8 | 2;
      iVar12 = iVar12 + -1;
      FUN_0013a080(*(undefined8 *)(param_1 + 0x88),
                   *(undefined4 *)(*(long *)(param_1 + 0x90) + lVar10),&local_68);
      puVar11 = puVar11 + 1;
    } while (iVar12 != 0);
  }
  FUN_0013aa70(*(undefined8 *)(param_1 + 0x88));
  return;
}


