/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d0960; name: FUN_003d0960
 */


void FUN_003d0960(long param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  code *pcVar11;
  ulong *local_38;
  
  puVar5 = *(ulong **)(param_1 + 0xde8);
  if (puVar5 == (ulong *)0x0) {
    iVar2 = *(int *)(param_1 + 0xde0);
    if (iVar2 == 0) {
      puVar9 = (ulong *)0x0;
    }
    else {
      plVar6 = (long *)FUN_00400d30();
      pcVar11 = *(code **)(*plVar6 + 0x10);
      plVar7 = (long *)FUN_00400d60();
      uVar8 = (**(code **)(*plVar7 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::ActorPairContactReportData>::getName() [T = physx::Sc::ActorPairContactReportData]"
      ;
      if ((uVar8 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      puVar9 = (ulong *)(*pcVar11)(plVar6,iVar2,pcVar1,
                                   "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
    }
    uVar3 = *(uint *)(param_1 + 0xdd0);
    if (uVar3 < (*(uint *)(param_1 + 0xdd4) & 0x7fffffff)) {
      *(ulong **)(*(long *)(param_1 + 0xdc8) + (ulong)uVar3 * 8) = puVar9;
      *(uint *)(param_1 + 0xdd0) = uVar3 + 1;
    }
    else {
      local_38 = puVar9;
      FUN_003d8e30(param_1 + 0xbc0,&local_38);
    }
    if (puVar9 + (ulong)*(uint *)(param_1 + 0xdd8) * 6 + -6 < puVar9) {
      puVar5 = *(ulong **)(param_1 + 0xde8);
    }
    else {
      puVar4 = puVar9 + (ulong)*(uint *)(param_1 + 0xdd8) * 6 + -6;
      puVar10 = *(ulong **)(param_1 + 0xde8);
      do {
        puVar5 = puVar4;
        *puVar5 = (ulong)puVar10;
        puVar4 = puVar5 + -6;
        puVar10 = puVar5;
      } while (puVar9 <= puVar5 + -6);
      *(ulong **)(param_1 + 0xde8) = puVar5;
    }
  }
  *(ulong *)(param_1 + 0xde8) = *puVar5;
  *(int *)(param_1 + 0xddc) = *(int *)(param_1 + 0xddc) + 1;
  if (puVar5 != (ulong *)0x0) {
    *(undefined8 *)((long)puVar5 + 0xc) = 0xffffffffffffffff;
    puVar5[3] = 0;
    puVar5[4] = 0;
    *(undefined4 *)((long)puVar5 + 0x14) = 0xffffffff;
    *(undefined2 *)((long)puVar5 + 4) = 0;
    *(undefined2 *)((long)puVar5 + 10) = 0;
    *(undefined4 *)(puVar5 + 5) = 0xffff;
  }
  return;
}


