/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ce7a0; name: FUN_003ce7a0
 */


void FUN_003ce7a0(long param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  undefined8 *puVar7;
  ushort *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ushort *puVar12;
  long lVar13;
  long lVar14;
  ushort *puVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  code *pcVar19;
  undefined4 local_70;
  undefined4 uStack_6c;
  ushort *local_68;
  
  lVar13 = *(long *)(param_2 + 0x10);
  lVar14 = *(long *)(param_3 + 0x10);
  lVar1 = lVar13;
  if (*(uint *)(lVar13 + 0x58) <= *(uint *)(lVar14 + 0x58)) {
    lVar1 = lVar14;
    lVar14 = lVar13;
  }
  local_70 = *(undefined4 *)(lVar14 + 0x58);
  uStack_6c = *(undefined4 *)(lVar1 + 0x58);
  puVar7 = (undefined8 *)FUN_003d7c90(param_1 + 0x1520,&local_70,&local_68);
  if ((char)local_68 == '\0') {
    *puVar7 = CONCAT44(uStack_6c,local_70);
    puVar7[1] = 0;
  }
  else {
    puVar8 = (ushort *)puVar7[1];
    if (puVar8 != (ushort *)0x0) goto joined_r0x003ceb4c;
  }
  if (param_4 == 0) {
    puVar8 = *(ushort **)(param_1 + 0x2d0);
    if (puVar8 == (ushort *)0x0) {
      iVar3 = *(int *)(param_1 + 0x2c8);
      if (iVar3 == 0) {
        puVar12 = (ushort *)0x0;
      }
      else {
        plVar16 = (long *)FUN_00400d30();
        pcVar19 = *(code **)(*plVar16 + 0x10);
        plVar9 = (long *)FUN_00400d60();
        uVar11 = (**(code **)(*plVar9 + 0x28))();
        pcVar2 = 
        "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::ActorPair>::getName() [T = physx::Sc::ActorPair]"
        ;
        if ((uVar11 & 1) == 0) {
          pcVar2 = "<allocation names disabled>";
        }
        puVar12 = (ushort *)
                  (*pcVar19)(plVar16,iVar3,pcVar2,
                             "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
      }
      uVar5 = *(uint *)(param_1 + 0x2b8);
      local_68 = puVar12;
      if (uVar5 < (*(uint *)(param_1 + 700) & 0x7fffffff)) {
        *(ushort **)(*(long *)(param_1 + 0x2b0) + (ulong)uVar5 * 8) = puVar12;
        *(uint *)(param_1 + 0x2b8) = uVar5 + 1;
      }
      else {
        FUN_003d7e00(param_1 + 0xa8,&local_68);
      }
      if (puVar12 + (ulong)*(uint *)(param_1 + 0x2c0) * 4 + -4 < puVar12) {
        puVar8 = *(ushort **)(param_1 + 0x2d0);
      }
      else {
        puVar6 = puVar12 + (ulong)*(uint *)(param_1 + 0x2c0) * 4 + -4;
        puVar15 = *(ushort **)(param_1 + 0x2d0);
        do {
          puVar8 = puVar6;
          *(ushort **)puVar8 = puVar15;
          puVar6 = puVar8 + -4;
          puVar15 = puVar8;
        } while (puVar12 <= puVar8 + -4);
        *(ushort **)(param_1 + 0x2d0) = puVar8;
      }
    }
    *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)puVar8;
    *(int *)(param_1 + 0x2c4) = *(int *)(param_1 + 0x2c4) + 1;
    if (puVar8 != (ushort *)0x0) {
      puVar8[0] = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
    }
  }
  else {
    uVar18 = *(undefined8 *)(param_2 + 0x10);
    uVar17 = *(undefined8 *)(param_3 + 0x10);
    puVar8 = *(ushort **)(param_1 + 0x508);
    if (puVar8 == (ushort *)0x0) {
      iVar3 = *(int *)(param_1 + 0x500);
      if (iVar3 == 0) {
        puVar12 = (ushort *)0x0;
      }
      else {
        plVar16 = (long *)FUN_00400d30();
        pcVar19 = *(code **)(*plVar16 + 0x10);
        plVar9 = (long *)FUN_00400d60();
        uVar11 = (**(code **)(*plVar9 + 0x28))();
        pcVar2 = 
        "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::ActorPairReport>::getName() [T = physx::Sc::ActorPairReport]"
        ;
        if ((uVar11 & 1) == 0) {
          pcVar2 = "<allocation names disabled>";
        }
        puVar12 = (ushort *)
                  (*pcVar19)(plVar16,iVar3,pcVar2,
                             "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
      }
      uVar5 = *(uint *)(param_1 + 0x4f0);
      local_68 = puVar12;
      if (uVar5 < (*(uint *)(param_1 + 0x4f4) & 0x7fffffff)) {
        *(ushort **)(*(long *)(param_1 + 0x4e8) + (ulong)uVar5 * 8) = puVar12;
        *(uint *)(param_1 + 0x4f0) = uVar5 + 1;
      }
      else {
        FUN_003d7fd0(param_1 + 0x2e0,&local_68);
      }
      if (puVar12 + (ulong)*(uint *)(param_1 + 0x4f8) * 0x10 + -0x10 < puVar12) {
        puVar8 = *(ushort **)(param_1 + 0x508);
      }
      else {
        puVar6 = puVar12 + (ulong)*(uint *)(param_1 + 0x4f8) * 0x10 + -0x10;
        puVar15 = *(ushort **)(param_1 + 0x508);
        do {
          puVar8 = puVar6;
          *(ushort **)puVar8 = puVar15;
          puVar6 = puVar8 + -0x10;
          puVar15 = puVar8;
        } while (puVar12 <= puVar8 + -0x10);
        *(ushort **)(param_1 + 0x508) = puVar8;
      }
    }
    *(undefined8 *)(param_1 + 0x508) = *(undefined8 *)puVar8;
    *(int *)(param_1 + 0x4fc) = *(int *)(param_1 + 0x4fc) + 1;
    if (puVar8 != (ushort *)0x0) {
      puVar8[2] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      *(undefined8 *)(puVar8 + 4) = uVar18;
      *(undefined8 *)(puVar8 + 8) = uVar17;
      puVar8[0] = 1;
      puVar8[1] = 0;
      puVar7[1] = puVar8;
      goto joined_r0x003ceb4c;
    }
  }
  puVar7[1] = puVar8;
joined_r0x003ceb4c:
  if ((param_4 != 0) && ((*puVar8 & 1) == 0)) {
    iVar3 = *(int *)(lVar14 + 0x34);
    plVar16 = *(long **)(lVar14 + 0x28);
    uVar17 = *(undefined8 *)(param_2 + 0x10);
    uVar18 = *(undefined8 *)(param_3 + 0x10);
    puVar8 = *(ushort **)(param_1 + 0x508);
    if (puVar8 == (ushort *)0x0) {
      iVar4 = *(int *)(param_1 + 0x500);
      if (iVar4 == 0) {
        puVar12 = (ushort *)0x0;
      }
      else {
        plVar9 = (long *)FUN_00400d30();
        pcVar19 = *(code **)(*plVar9 + 0x10);
        plVar10 = (long *)FUN_00400d60();
        uVar11 = (**(code **)(*plVar10 + 0x28))();
        pcVar2 = 
        "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::ActorPairReport>::getName() [T = physx::Sc::ActorPairReport]"
        ;
        if ((uVar11 & 1) == 0) {
          pcVar2 = "<allocation names disabled>";
        }
        puVar12 = (ushort *)
                  (*pcVar19)(plVar9,iVar4,pcVar2,
                             "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
      }
      uVar5 = *(uint *)(param_1 + 0x4f0);
      if (uVar5 < (*(uint *)(param_1 + 0x4f4) & 0x7fffffff)) {
        *(ushort **)(*(long *)(param_1 + 0x4e8) + (ulong)uVar5 * 8) = puVar12;
        *(uint *)(param_1 + 0x4f0) = uVar5 + 1;
      }
      else {
        local_68 = puVar12;
        FUN_003d7fd0(param_1 + 0x2e0,&local_68);
      }
      if (puVar12 + ((ulong)*(uint *)(param_1 + 0x4f8) * 4 + -4) * 4 < puVar12) {
        puVar8 = *(ushort **)(param_1 + 0x508);
      }
      else {
        puVar6 = puVar12 + ((ulong)*(uint *)(param_1 + 0x4f8) * 4 + -4) * 4;
        puVar15 = *(ushort **)(param_1 + 0x508);
        do {
          puVar8 = puVar6;
          *(ushort **)puVar8 = puVar15;
          puVar6 = puVar8 + -0x10;
          puVar15 = puVar8;
        } while (puVar12 <= puVar8 + -0x10);
        *(ushort **)(param_1 + 0x508) = puVar8;
      }
    }
    *(undefined8 *)(param_1 + 0x508) = *(undefined8 *)puVar8;
    *(int *)(param_1 + 0x4fc) = *(int *)(param_1 + 0x4fc) + 1;
    if (puVar8 != (ushort *)0x0) {
      puVar8[2] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      *(undefined8 *)(puVar8 + 4) = uVar17;
      *(undefined8 *)(puVar8 + 8) = uVar18;
      puVar8[0] = 1;
      puVar8[1] = 0;
    }
    lVar14 = puVar7[1];
    puVar8[1] = *(ushort *)(lVar14 + 2);
    puVar8[2] = *(ushort *)(lVar14 + 4);
    while (iVar3 != 0) {
      plVar9 = plVar16 + 1;
      lVar14 = *plVar16;
      iVar3 = iVar3 + -1;
      plVar16 = plVar9;
      if ((((*(long *)(lVar14 + 8) == lVar1) || (*(long *)(lVar14 + 0x10) == lVar1)) &&
          (*(char *)(lVar14 + 0x24) == '\0')) && (*(long *)(lVar14 + 0x48) != 0)) {
        *(ushort **)(lVar14 + 0x48) = puVar8;
      }
    }
    puVar7[1] = puVar8;
  }
  return;
}


