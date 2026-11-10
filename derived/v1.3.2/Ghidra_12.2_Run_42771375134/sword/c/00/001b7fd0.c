/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b7fd0; name: FUN_001b7fd0
 */


ulong * FUN_001b7fd0(long param_1)

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
  ulong *local_38;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 0x2170));
  puVar10 = *(ulong **)(param_1 + 0x2168);
  if (puVar10 == (ulong *)0x0) {
    iVar2 = *(int *)(param_1 + 0x2160);
    if (iVar2 == 0) {
      puVar8 = (ulong *)0x0;
    }
    else {
                    /* try { // try from 001b8000 to 001b80f7 has its CatchHandler @ 001b811c */
      plVar5 = (long *)FUN_00400d30();
      pcVar11 = *(code **)(*plVar5 + 0x10);
      plVar6 = (long *)FUN_00400d60();
      uVar7 = (**(code **)(*plVar6 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::NpClothFabric>::getName() [T = physx::NpClothFabric]"
      ;
      if ((uVar7 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      puVar8 = (ulong *)(*pcVar11)(plVar5,iVar2,pcVar1,
                                   "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
    }
    uVar3 = *(uint *)(param_1 + 0x2150);
    local_38 = puVar8;
    if (uVar3 < (*(uint *)(param_1 + 0x2154) & 0x7fffffff)) {
      *(ulong **)(*(long *)(param_1 + 0x2148) + (ulong)uVar3 * 8) = puVar8;
      *(uint *)(param_1 + 0x2150) = uVar3 + 1;
    }
    else {
      FUN_001c7af0(param_1 + 8000,&local_38);
    }
    if (puVar8 + (ulong)*(uint *)(param_1 + 0x2158) * 8 + -8 < puVar8) {
      puVar10 = *(ulong **)(param_1 + 0x2168);
    }
    else {
      puVar4 = puVar8 + (ulong)*(uint *)(param_1 + 0x2158) * 8 + -8;
      puVar9 = *(ulong **)(param_1 + 0x2168);
      do {
        puVar10 = puVar4;
        *puVar10 = (ulong)puVar9;
        puVar4 = puVar10 + -8;
        puVar9 = puVar10;
      } while (puVar8 <= puVar10 + -8);
      *(ulong **)(param_1 + 0x2168) = puVar10;
    }
  }
  *(ulong *)(param_1 + 0x2168) = *puVar10;
  *(int *)(param_1 + 0x215c) = *(int *)(param_1 + 0x215c) + 1;
  if (puVar10 != (ulong *)0x0) {
    FUN_001e5510(puVar10);
  }
                    /* try { // try from 001b80fc to 001b80ff has its CatchHandler @ 001b8118 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0x2170));
  return puVar10;
}


