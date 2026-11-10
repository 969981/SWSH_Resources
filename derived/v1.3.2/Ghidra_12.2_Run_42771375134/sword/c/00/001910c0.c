/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001910c0; name: FUN_001910c0
 */


void FUN_001910c0(long param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  int *piVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  code *pcVar17;
  undefined8 *local_48;
  
  uVar14 = ((long)param_2 << 0x20 ^ 0xffffffffffffffffU) + (long)param_2;
  uVar14 = uVar14 ^ uVar14 >> 0x16;
  uVar14 = uVar14 + (uVar14 << 0xd ^ 0xffffffffffffffff);
  uVar14 = (uVar14 ^ uVar14 >> 8) * 9;
  uVar14 = uVar14 ^ uVar14 >> 0xf;
  uVar14 = uVar14 + (uVar14 << 0x1b ^ 0xffffffffffffffff);
  uVar14 = (ulong)((uint)(uVar14 >> 0x1f) ^ (uint)uVar14) & 0x3ff;
  lVar10 = *(long *)(param_1 + uVar14 * 8);
  if (lVar10 == 0) {
    puVar12 = *(undefined8 **)(param_1 + 0x2230);
    if (puVar12 == (undefined8 *)0x0) {
      iVar2 = *(int *)(param_1 + 0x2228);
      if (iVar2 == 0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        plVar6 = (long *)FUN_00400d30();
        pcVar17 = *(code **)(*plVar6 + 0x10);
        plVar7 = (long *)FUN_00400d60();
        uVar9 = (**(code **)(*plVar7 + 0x28))();
        pcVar1 = 
        "static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::BodyTransformVault::Body2World>::getName() [T = physx::Pt::BodyTransformVault::Body2World]"
        ;
        if ((uVar9 & 1) == 0) {
          pcVar1 = "<allocation names disabled>";
        }
        puVar8 = (undefined8 *)
                 (*pcVar17)(plVar6,iVar2,pcVar1,
                            "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
      }
      uVar3 = *(uint *)(param_1 + 0x2218);
      if (uVar3 < (*(uint *)(param_1 + 0x221c) & 0x7fffffff)) {
        *(undefined8 **)(*(long *)(param_1 + 0x2210) + (ulong)uVar3 * 8) = puVar8;
        *(uint *)(param_1 + 0x2218) = uVar3 + 1;
      }
      else {
        local_48 = puVar8;
        FUN_001920d0(param_1 + 0x2008,&local_48);
      }
      if (puVar8 + (ulong)*(uint *)(param_1 + 0x2220) * 7 + -7 < puVar8) {
        puVar12 = *(undefined8 **)(param_1 + 0x2230);
      }
      else {
        puVar4 = puVar8 + (ulong)*(uint *)(param_1 + 0x2220) * 7 + -7;
        puVar16 = *(undefined8 **)(param_1 + 0x2230);
        do {
          puVar12 = puVar4;
          *puVar12 = puVar16;
          puVar4 = puVar12 + -7;
          puVar16 = puVar12;
        } while (puVar8 <= puVar12 + -7);
        *(undefined8 **)(param_1 + 0x2230) = puVar12;
      }
    }
    *(undefined8 *)(param_1 + 0x2230) = *puVar12;
    *(int *)(param_1 + 0x2224) = *(int *)(param_1 + 0x2224) + 1;
    if (puVar12 != (undefined8 *)0x0) {
      puVar12[5] = 0;
      puVar12[6] = 0;
      *puVar12 = 0;
      puVar12[3] = 0;
      puVar12[4] = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      *(undefined4 *)puVar12 = *param_2;
      *(undefined4 *)((long)puVar12 + 4) = param_2[1];
      *(undefined4 *)(puVar12 + 1) = param_2[2];
      *(undefined4 *)((long)puVar12 + 0xc) = param_2[3];
      *(undefined4 *)(puVar12 + 2) = param_2[4];
      *(undefined4 *)((long)puVar12 + 0x14) = param_2[5];
      *(undefined4 *)(puVar12 + 3) = param_2[6];
      puVar12[4] = param_2;
      puVar12[5] = 0;
    }
    *(undefined8 **)(param_1 + uVar14 * 8) = puVar12;
  }
  else {
    lVar5 = *(long *)(lVar10 + 0x28);
    if (*(long *)(lVar10 + 0x28) == 0) {
      puVar11 = *(undefined4 **)(lVar10 + 0x20);
    }
    else {
      do {
        lVar15 = lVar5;
        if (*(undefined4 **)(lVar10 + 0x20) == param_2) break;
        lVar10 = lVar15;
        lVar5 = *(long *)(lVar15 + 0x28);
      } while (*(long *)(lVar15 + 0x28) != 0);
      puVar11 = *(undefined4 **)(lVar10 + 0x20);
    }
    if (puVar11 == param_2) {
      piVar13 = (int *)(lVar10 + 0x30);
      goto LAB_00191428;
    }
    puVar12 = *(undefined8 **)(param_1 + 0x2230);
    if (puVar12 == (undefined8 *)0x0) {
      iVar2 = *(int *)(param_1 + 0x2228);
      if (iVar2 == 0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        plVar6 = (long *)FUN_00400d30();
        pcVar17 = *(code **)(*plVar6 + 0x10);
        plVar7 = (long *)FUN_00400d60();
        uVar14 = (**(code **)(*plVar7 + 0x28))();
        pcVar1 = 
        "static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::BodyTransformVault::Body2World>::getName() [T = physx::Pt::BodyTransformVault::Body2World]"
        ;
        if ((uVar14 & 1) == 0) {
          pcVar1 = "<allocation names disabled>";
        }
        puVar8 = (undefined8 *)
                 (*pcVar17)(plVar6,iVar2,pcVar1,
                            "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
      }
      uVar3 = *(uint *)(param_1 + 0x2218);
      if (uVar3 < (*(uint *)(param_1 + 0x221c) & 0x7fffffff)) {
        *(undefined8 **)(*(long *)(param_1 + 0x2210) + (ulong)uVar3 * 8) = puVar8;
        *(uint *)(param_1 + 0x2218) = uVar3 + 1;
      }
      else {
        local_48 = puVar8;
        FUN_001920d0(param_1 + 0x2008,&local_48);
      }
      if (puVar8 + (ulong)*(uint *)(param_1 + 0x2220) * 7 + -7 < puVar8) {
        puVar12 = *(undefined8 **)(param_1 + 0x2230);
      }
      else {
        puVar4 = puVar8 + (ulong)*(uint *)(param_1 + 0x2220) * 7 + -7;
        puVar16 = *(undefined8 **)(param_1 + 0x2230);
        do {
          puVar12 = puVar4;
          *puVar12 = puVar16;
          puVar4 = puVar12 + -7;
          puVar16 = puVar12;
        } while (puVar8 <= puVar12 + -7);
        *(undefined8 **)(param_1 + 0x2230) = puVar12;
      }
    }
    *(undefined8 *)(param_1 + 0x2230) = *puVar12;
    *(int *)(param_1 + 0x2224) = *(int *)(param_1 + 0x2224) + 1;
    if (puVar12 != (undefined8 *)0x0) {
      puVar12[5] = 0;
      puVar12[6] = 0;
      *puVar12 = 0;
      puVar12[3] = 0;
      puVar12[4] = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      *(undefined4 *)puVar12 = *param_2;
      *(undefined4 *)((long)puVar12 + 4) = param_2[1];
      *(undefined4 *)(puVar12 + 1) = param_2[2];
      *(undefined4 *)((long)puVar12 + 0xc) = param_2[3];
      *(undefined4 *)(puVar12 + 2) = param_2[4];
      *(undefined4 *)((long)puVar12 + 0x14) = param_2[5];
      *(undefined4 *)(puVar12 + 3) = param_2[6];
      puVar12[4] = param_2;
      puVar12[5] = 0;
    }
    *(undefined8 **)(lVar10 + 0x28) = puVar12;
  }
  *(undefined4 *)(puVar12 + 6) = 1;
  piVar13 = (int *)(param_1 + 0x2238);
LAB_00191428:
  *piVar13 = *piVar13 + 1;
  return;
}


