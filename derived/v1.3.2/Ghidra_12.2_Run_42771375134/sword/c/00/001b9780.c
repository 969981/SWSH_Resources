/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b9780; name: FUN_001b9780
 */


ulong * FUN_001b9780(long param_1,undefined8 param_2)

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
  ulong *local_60 [4];
  
  puVar10 = *(ulong **)(param_1 + 0x230);
  if (puVar10 == (ulong *)0x0) {
    iVar2 = *(int *)(param_1 + 0x228);
    if (iVar2 == 0) {
      puVar8 = (ulong *)0x0;
    }
    else {
      plVar5 = (long *)FUN_00400d30();
      pcVar11 = *(code **)(*plVar5 + 0x10);
      plVar6 = (long *)FUN_00400d60();
      uVar7 = (**(code **)(*plVar6 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::NpMaterial>::getName() [T = physx::NpMaterial]"
      ;
      if ((uVar7 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      puVar8 = (ulong *)(*pcVar11)(plVar5,iVar2,pcVar1,
                                   "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
    }
    uVar3 = *(uint *)(param_1 + 0x218);
    local_60[0] = puVar8;
    if (uVar3 < (*(uint *)(param_1 + 0x21c) & 0x7fffffff)) {
      *(ulong **)(*(long *)(param_1 + 0x210) + (ulong)uVar3 * 8) = puVar8;
      *(uint *)(param_1 + 0x218) = uVar3 + 1;
    }
    else {
      FUN_001c8ed0(param_1 + 8,local_60);
    }
    if (puVar8 + (ulong)*(uint *)(param_1 + 0x220) * 10 + -10 < puVar8) {
      puVar10 = *(ulong **)(param_1 + 0x230);
    }
    else {
      puVar4 = puVar8 + (ulong)*(uint *)(param_1 + 0x220) * 10 + -10;
      puVar9 = *(ulong **)(param_1 + 0x230);
      do {
        puVar10 = puVar4;
        *puVar10 = (ulong)puVar9;
        puVar4 = puVar10 + -10;
        puVar9 = puVar10;
      } while (puVar8 <= puVar10 + -10);
      *(ulong **)(param_1 + 0x230) = puVar10;
    }
  }
  *(ulong *)(param_1 + 0x230) = *puVar10;
  *(int *)(param_1 + 0x224) = *(int *)(param_1 + 0x224) + 1;
  if (puVar10 != (ulong *)0x0) {
                    /* try { // try from 001b98a0 to 001b98ab has its CatchHandler @ 001b98f0 */
    FUN_003c6ea0(local_60,param_2);
                    /* try { // try from 001b98ac to 001b98b7 has its CatchHandler @ 001b98dc */
    FUN_001c9980(puVar10,local_60);
    FUN_003c6ed0(local_60);
  }
  return puVar10;
}


