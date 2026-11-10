/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dfa70; name: FUN_003dfa70
 */


void FUN_003dfa70(long param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

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
  undefined8 *puVar10;
  ulong *puVar11;
  long lVar12;
  code *pcVar13;
  ulong *local_60;
  char local_54 [4];
  
  lVar12 = *(long *)(param_1 + 0x1150);
  puVar5 = *(ulong **)(lVar12 + 0x230);
  if (puVar5 == (ulong *)0x0) {
    iVar2 = *(int *)(lVar12 + 0x228);
    if (iVar2 == 0) {
      puVar9 = (ulong *)0x0;
    }
    else {
      plVar6 = (long *)FUN_00400d30();
      pcVar13 = *(code **)(*plVar6 + 0x10);
      plVar7 = (long *)FUN_00400d60();
      uVar8 = (**(code **)(*plVar7 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::ConstraintSim>::getName() [T = physx::Sc::ConstraintSim]"
      ;
      if ((uVar8 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      puVar9 = (ulong *)(*pcVar13)(plVar6,iVar2,pcVar1,
                                   "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
    }
    uVar3 = *(uint *)(lVar12 + 0x218);
    local_60 = puVar9;
    if (uVar3 < (*(uint *)(lVar12 + 0x21c) & 0x7fffffff)) {
      *(ulong **)(*(long *)(lVar12 + 0x210) + (ulong)uVar3 * 8) = puVar9;
      *(uint *)(lVar12 + 0x218) = uVar3 + 1;
    }
    else {
      FUN_003f3d10(lVar12 + 8,&local_60);
    }
    if (puVar9 + (ulong)*(uint *)(lVar12 + 0x220) * 0x12 + -0x12 < puVar9) {
      puVar5 = *(ulong **)(lVar12 + 0x230);
    }
    else {
      puVar4 = puVar9 + (ulong)*(uint *)(lVar12 + 0x220) * 0x12 + -0x12;
      puVar11 = *(ulong **)(lVar12 + 0x230);
      do {
        puVar5 = puVar4;
        *puVar5 = (ulong)puVar11;
        puVar4 = puVar5 + -0x12;
        puVar11 = puVar5;
      } while (puVar9 <= puVar5 + -0x12);
      *(ulong **)(lVar12 + 0x230) = puVar5;
    }
  }
  *(ulong *)(lVar12 + 0x230) = *puVar5;
  *(int *)(lVar12 + 0x224) = *(int *)(lVar12 + 0x224) + 1;
  if (puVar5 != (ulong *)0x0) {
    FUN_003c4da0(puVar5,param_2,param_3,param_4,param_1);
  }
  local_60 = param_2;
  puVar10 = (undefined8 *)FUN_003f3ee0(param_1 + 0x7c8,&local_60,local_54);
  if (local_54[0] == '\0') {
    *puVar10 = local_60;
  }
  return;
}


