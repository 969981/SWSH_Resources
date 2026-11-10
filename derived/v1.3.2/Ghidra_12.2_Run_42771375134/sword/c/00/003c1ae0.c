/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c1ae0; name: FUN_003c1ae0
 */


void FUN_003c1ae0(long param_1,long param_2,long param_3)

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
  ulong *puVar11;
  code *pcVar12;
  ulong *local_48;
  
  if (*(long *)(param_2 + 200) == 0) {
    puVar4 = *(ulong **)(param_1 + 0x238);
    if (puVar4 == (ulong *)0x0) {
      iVar2 = *(int *)(param_1 + 0x230);
      if (iVar2 == 0) {
        puVar5 = (ulong *)0x0;
      }
      else {
        plVar6 = (long *)FUN_00400d30();
        pcVar12 = *(code **)(*plVar6 + 0x10);
        plVar7 = (long *)FUN_00400d60();
        uVar8 = (**(code **)(*plVar7 + 0x28))();
        pcVar1 = 
        "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::ConstraintGroupNode>::getName() [T = physx::Sc::ConstraintGroupNode]"
        ;
        if ((uVar8 & 1) == 0) {
          pcVar1 = "<allocation names disabled>";
        }
        puVar5 = (ulong *)(*pcVar12)(plVar6,iVar2,pcVar1,
                                     "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4)
        ;
      }
      uVar3 = *(uint *)(param_1 + 0x220);
      local_48 = puVar5;
      if (uVar3 < (*(uint *)(param_1 + 0x224) & 0x7fffffff)) {
        *(ulong **)(*(long *)(param_1 + 0x218) + (ulong)uVar3 * 8) = puVar5;
        *(uint *)(param_1 + 0x220) = uVar3 + 1;
      }
      else {
        FUN_003c2f50(param_1 + 0x10,&local_48);
      }
      if (puVar5 + (ulong)*(uint *)(param_1 + 0x228) * 0xc + -0xc < puVar5) {
        puVar4 = *(ulong **)(param_1 + 0x238);
      }
      else {
        puVar9 = puVar5 + (ulong)*(uint *)(param_1 + 0x228) * 0xc + -0xc;
        puVar10 = *(ulong **)(param_1 + 0x238);
        do {
          puVar4 = puVar9;
          *puVar4 = (ulong)puVar10;
          puVar9 = puVar4 + -0xc;
          puVar10 = puVar4;
        } while (puVar5 <= puVar4 + -0xc);
        *(ulong **)(param_1 + 0x238) = puVar4;
      }
    }
    *(ulong *)(param_1 + 0x238) = *puVar4;
    *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 1;
    if (puVar4 != (ulong *)0x0) {
      FUN_003c15e0(puVar4,param_2);
    }
    *(ulong **)(param_2 + 200) = puVar4;
  }
  else {
    puVar4 = (ulong *)FUN_003c1610();
    if (puVar4[5] != 0) {
      FUN_003c4420(puVar4);
    }
  }
  if (param_3 != 0) {
    if (*(long *)(param_3 + 200) == 0) {
      puVar5 = *(ulong **)(param_1 + 0x238);
      if (puVar5 == (ulong *)0x0) {
        iVar2 = *(int *)(param_1 + 0x230);
        if (iVar2 == 0) {
          puVar9 = (ulong *)0x0;
        }
        else {
          plVar6 = (long *)FUN_00400d30();
          pcVar12 = *(code **)(*plVar6 + 0x10);
          plVar7 = (long *)FUN_00400d60();
          uVar8 = (**(code **)(*plVar7 + 0x28))();
          pcVar1 = 
          "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::ConstraintGroupNode>::getName() [T = physx::Sc::ConstraintGroupNode]"
          ;
          if ((uVar8 & 1) == 0) {
            pcVar1 = "<allocation names disabled>";
          }
          puVar9 = (ulong *)(*pcVar12)(plVar6,iVar2,pcVar1,
                                       "./../../../../PxShared/src/foundation/include\\PsPool.h",
                                       0xb4);
        }
        uVar3 = *(uint *)(param_1 + 0x220);
        local_48 = puVar9;
        if (uVar3 < (*(uint *)(param_1 + 0x224) & 0x7fffffff)) {
          *(ulong **)(*(long *)(param_1 + 0x218) + (ulong)uVar3 * 8) = puVar9;
          *(uint *)(param_1 + 0x220) = uVar3 + 1;
        }
        else {
          FUN_003c2f50(param_1 + 0x10,&local_48);
        }
        if (puVar9 + (ulong)*(uint *)(param_1 + 0x228) * 0xc + -0xc < puVar9) {
          puVar5 = *(ulong **)(param_1 + 0x238);
        }
        else {
          puVar10 = puVar9 + (ulong)*(uint *)(param_1 + 0x228) * 0xc + -0xc;
          puVar11 = *(ulong **)(param_1 + 0x238);
          do {
            puVar5 = puVar10;
            *puVar5 = (ulong)puVar11;
            puVar10 = puVar5 + -0xc;
            puVar11 = puVar5;
          } while (puVar9 <= puVar5 + -0xc);
          *(ulong **)(param_1 + 0x238) = puVar5;
        }
      }
      *(ulong *)(param_1 + 0x238) = *puVar5;
      *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 1;
      if (puVar5 != (ulong *)0x0) {
        FUN_003c15e0(puVar5,param_3);
      }
      *(ulong **)(param_3 + 200) = puVar5;
    }
    else {
      puVar5 = (ulong *)FUN_003c1610();
      if (puVar5[5] != 0) {
        FUN_003c4420(puVar5);
      }
    }
    if (puVar4 != puVar5) {
      if ((uint)puVar5[3] < (uint)puVar4[3]) {
        puVar9 = puVar4;
        puVar4 = puVar5;
      }
      else {
        *(uint *)(puVar5 + 3) = (uint)puVar5[3] + 1;
        puVar9 = puVar5;
      }
      puVar4[1] = (ulong)puVar9;
      *(ulong **)(puVar9[2] + 0x20) = puVar4;
      puVar9[2] = puVar4[2];
    }
  }
  return;
}


