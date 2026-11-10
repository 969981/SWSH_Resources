/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ccc30; name: FUN_003ccc30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_003ccc30(long param_1,long param_2,ulong param_3,undefined4 param_4)

{
  char *pcVar1;
  uint uVar2;
  ulong *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong *puVar7;
  int iVar8;
  ulong *puVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  code *pcVar13;
  ushort local_68;
  undefined2 local_66;
  uint local_64;
  ulong *local_58;
  
  uVar12 = *(ulong *)(param_2 + 0x10);
  if (*(ushort *)(param_2 + 0x4a) != 0) {
    iVar8 = -(uint)*(ushort *)(param_2 + 0x4a);
    plVar4 = *(long **)(param_2 + 0x40);
    do {
      lVar10 = *plVar4;
      if ((*(long *)(lVar10 + 0x10) == *(long *)(param_3 + 0x10)) &&
         (*(long *)(lVar10 + 0x28) == param_2)) {
        puVar11 = *(ulong **)(lVar10 + 0x40);
        goto LAB_003cce1c;
      }
      iVar8 = iVar8 + 1;
      plVar4 = plVar4 + 1;
    } while (iVar8 != 0);
  }
  FUN_003cce70(&local_68,param_1,param_2,param_3,0xffffffff,1);
  if ((local_68 & 1) == 0) {
    puVar11 = *(ulong **)(param_1 + 0x740);
    if (puVar11 == (ulong *)0x0) {
      iVar8 = *(int *)(param_1 + 0x738);
      if (iVar8 == 0) {
        puVar7 = (ulong *)0x0;
      }
      else {
        plVar4 = (long *)FUN_00400d30();
        pcVar13 = *(code **)(*plVar4 + 0x10);
        plVar5 = (long *)FUN_00400d60();
        uVar6 = (**(code **)(*plVar5 + 0x28))();
        pcVar1 = 
        "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::ActorElementPair>::getName() [T = physx::Sc::ActorElementPair]"
        ;
        if ((uVar6 & 1) == 0) {
          pcVar1 = "<allocation names disabled>";
        }
        puVar7 = (ulong *)(*pcVar13)(plVar4,iVar8,pcVar1,
                                     "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4)
        ;
      }
      uVar2 = *(uint *)(param_1 + 0x728);
      local_58 = puVar7;
      if (uVar2 < (*(uint *)(param_1 + 0x72c) & 0x7fffffff)) {
        *(ulong **)(*(long *)(param_1 + 0x720) + (ulong)uVar2 * 8) = puVar7;
        *(uint *)(param_1 + 0x728) = uVar2 + 1;
      }
      else {
        FUN_003d7550(param_1 + 0x518,&local_58);
      }
      if (puVar7 + (ulong)*(uint *)(param_1 + 0x730) * 4 + -4 < puVar7) {
        puVar11 = *(ulong **)(param_1 + 0x740);
      }
      else {
        puVar3 = puVar7 + (ulong)*(uint *)(param_1 + 0x730) * 4 + -4;
        puVar9 = *(ulong **)(param_1 + 0x740);
        do {
          puVar11 = puVar3;
          *puVar11 = (ulong)puVar9;
          puVar3 = puVar11 + -4;
          puVar9 = puVar11;
        } while (puVar7 <= puVar11 + -4);
        *(ulong **)(param_1 + 0x740) = puVar11;
      }
    }
    *(ulong *)(param_1 + 0x740) = *puVar11;
    *(int *)(param_1 + 0x734) = *(int *)(param_1 + 0x734) + 1;
    if (puVar11 != (ulong *)0x0) {
      *puVar11 = uVar12;
      puVar11[1] = param_3;
      *(undefined2 *)(puVar11 + 2) = local_66;
      *(undefined8 *)((long)puVar11 + 0x14) = 0;
      *(undefined1 *)((long)puVar11 + 0x1c) = 0;
    }
    *(byte *)((long)puVar11 + 0x1b) = (byte)(local_68 >> 1) & 1;
    *(bool *)((long)puVar11 + 0x1a) = (ulong)local_64 != 0xffffffff;
    if (local_64 != 0xffffffff) {
      *(undefined8 *)(**(long **)(param_1 + 0x98) + (ulong)local_64 * 8) = 1;
      _DAT_00000038 = 0xffffffff;
    }
LAB_003cce1c:
    lVar10 = FUN_003ce5c0(param_1,param_2,param_3,puVar11,param_4);
    if (*(char *)((long)puVar11 + 0x1a) != '\0') {
      *(byte *)(lVar10 + 0x25) = *(byte *)(lVar10 + 0x25) | 0x20;
    }
  }
  else {
    lVar10 = 0;
  }
  return lVar10;
}


