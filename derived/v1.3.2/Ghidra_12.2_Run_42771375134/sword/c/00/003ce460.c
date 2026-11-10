/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ce460; name: FUN_003ce460
 */


ulong * FUN_003ce460(long param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  code *pcVar11;
  ulong *local_48;
  
  puVar10 = param_4;
  if (param_4 == (ulong *)0x0) {
    puVar10 = *(ulong **)(param_1 + 0x1020);
    if (puVar10 == (ulong *)0x0) {
      iVar2 = *(int *)(param_1 + 0x1018);
      if (iVar2 == 0) {
        puVar8 = (ulong *)0x0;
      }
      else {
        plVar5 = (long *)FUN_00400d30();
        pcVar11 = *(code **)(*plVar5 + 0x10);
        plVar6 = (long *)FUN_00400d60();
        uVar7 = (**(code **)(*plVar6 + 0x28))();
        pcVar1 = 
        "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::ElementInteractionMarker>::getName() [T = physx::Sc::ElementInteractionMarker]"
        ;
        if ((uVar7 & 1) == 0) {
          pcVar1 = "<allocation names disabled>";
        }
        puVar8 = (ulong *)(*pcVar11)(plVar5,iVar2,pcVar1,
                                     "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4)
        ;
      }
      uVar3 = *(uint *)(param_1 + 0x1008);
      local_48 = puVar8;
      if (uVar3 < (*(uint *)(param_1 + 0x100c) & 0x7fffffff)) {
        *(ulong **)(*(long *)(param_1 + 0x1000) + (ulong)uVar3 * 8) = puVar8;
        *(uint *)(param_1 + 0x1008) = uVar3 + 1;
      }
      else {
        FUN_003d7ac0(param_1 + 0xdf8,&local_48);
      }
      if (puVar8 + (ulong)*(uint *)(param_1 + 0x1010) * 8 + -8 < puVar8) {
        puVar10 = *(ulong **)(param_1 + 0x1020);
      }
      else {
        puVar4 = puVar8 + (ulong)*(uint *)(param_1 + 0x1010) * 8 + -8;
        puVar9 = *(ulong **)(param_1 + 0x1020);
        do {
          puVar10 = puVar4;
          *puVar10 = (ulong)puVar9;
          puVar4 = puVar10 + -8;
          puVar9 = puVar10;
        } while (puVar8 <= puVar10 + -8);
        *(ulong **)(param_1 + 0x1020) = puVar10;
      }
    }
    *(ulong *)(param_1 + 0x1020) = *puVar10;
    *(int *)(param_1 + 0x1014) = *(int *)(param_1 + 0x1014) + 1;
  }
  FUN_003cec20(puVar10,param_2,param_3,param_4 != (ulong *)0x0);
  return puVar10;
}


