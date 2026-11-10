/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ce2e0; name: FUN_003ce2e0
 */


ulong * FUN_003ce2e0(long param_1,long param_2,long param_3,ushort *param_4)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  code *pcVar12;
  ulong *local_48;
  
  puVar11 = *(ulong **)(param_1 + 0xbb0);
  lVar1 = param_2;
  if ((*(byte *)(*(long *)(param_3 + 0x40) + 0x40) & 4) != 0) {
    lVar1 = param_3;
    param_3 = param_2;
  }
  if (puVar11 == (ulong *)0x0) {
    iVar3 = *(int *)(param_1 + 0xba8);
    if (iVar3 == 0) {
      puVar9 = (ulong *)0x0;
    }
    else {
      plVar6 = (long *)FUN_00400d30();
      pcVar12 = *(code **)(*plVar6 + 0x10);
      plVar7 = (long *)FUN_00400d60();
      uVar8 = (**(code **)(*plVar7 + 0x28))();
      pcVar2 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::TriggerInteraction>::getName() [T = physx::Sc::TriggerInteraction]"
      ;
      if ((uVar8 & 1) == 0) {
        pcVar2 = "<allocation names disabled>";
      }
      puVar9 = (ulong *)(*pcVar12)(plVar6,iVar3,pcVar2,
                                   "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
    }
    uVar4 = *(uint *)(param_1 + 0xb98);
    local_48 = puVar9;
    if (uVar4 < (*(uint *)(param_1 + 0xb9c) & 0x7fffffff)) {
      *(ulong **)(*(long *)(param_1 + 0xb90) + (ulong)uVar4 * 8) = puVar9;
      *(uint *)(param_1 + 0xb98) = uVar4 + 1;
    }
    else {
      FUN_003d78f0(param_1 + 0x988,&local_48);
    }
    if (puVar9 + (ulong)*(uint *)(param_1 + 0xba0) * 10 + -10 < puVar9) {
      puVar11 = *(ulong **)(param_1 + 0xbb0);
    }
    else {
      puVar5 = puVar9 + (ulong)*(uint *)(param_1 + 0xba0) * 10 + -10;
      puVar10 = *(ulong **)(param_1 + 0xbb0);
      do {
        puVar11 = puVar5;
        *puVar11 = (ulong)puVar10;
        puVar5 = puVar11 + -10;
        puVar10 = puVar11;
      } while (puVar9 <= puVar11 + -10);
      *(ulong **)(param_1 + 0xbb0) = puVar11;
    }
  }
  *(ulong *)(param_1 + 0xbb0) = *puVar11;
  *(int *)(param_1 + 0xba4) = *(int *)(param_1 + 0xba4) + 1;
  if (puVar11 != (ulong *)0x0) {
    FUN_003ff0e0(puVar11,lVar1,param_3);
  }
  *(ushort *)((long)puVar11 + 0x4c) = *(ushort *)((long)puVar11 + 0x4c) & 0xffe0 | *param_4 & 0x14;
  return puVar11;
}


