/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b8ac0; name: FUN_001b8ac0
 */


ulong * FUN_001b8ac0(long param_1)

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
  
  FUN_003ff570(*(undefined8 *)(param_1 + 0x13e0));
  puVar10 = *(ulong **)(param_1 + 0x13d8);
  if (puVar10 == (ulong *)0x0) {
    iVar2 = *(int *)(param_1 + 0x13d0);
    if (iVar2 == 0) {
      puVar8 = (ulong *)0x0;
    }
    else {
                    /* try { // try from 001b8af0 to 001b8beb has its CatchHandler @ 001b8c10 */
      plVar5 = (long *)FUN_00400d30();
      pcVar11 = *(code **)(*plVar5 + 0x10);
      plVar6 = (long *)FUN_00400d60();
      uVar7 = (**(code **)(*plVar6 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::NpArticulation>::getName() [T = physx::NpArticulation]"
      ;
      if ((uVar7 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      puVar8 = (ulong *)(*pcVar11)(plVar5,iVar2,pcVar1,
                                   "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
    }
    uVar3 = *(uint *)(param_1 + 0x13c0);
    local_38 = puVar8;
    if (uVar3 < (*(uint *)(param_1 + 0x13c4) & 0x7fffffff)) {
      *(ulong **)(*(long *)(param_1 + 0x13b8) + (ulong)uVar3 * 8) = puVar8;
      *(uint *)(param_1 + 0x13c0) = uVar3 + 1;
    }
    else {
      FUN_001c82a0(param_1 + 0x11b0,&local_38);
    }
    if (puVar8 + (ulong)*(uint *)(param_1 + 0x13c8) * 0x15 + -0x15 < puVar8) {
      puVar10 = *(ulong **)(param_1 + 0x13d8);
    }
    else {
      puVar4 = puVar8 + (ulong)*(uint *)(param_1 + 0x13c8) * 0x15 + -0x15;
      puVar9 = *(ulong **)(param_1 + 0x13d8);
      do {
        puVar10 = puVar4;
        *puVar10 = (ulong)puVar9;
        puVar4 = puVar10 + -0x15;
        puVar9 = puVar10;
      } while (puVar8 <= puVar10 + -0x15);
      *(ulong **)(param_1 + 0x13d8) = puVar10;
    }
  }
  *(ulong *)(param_1 + 0x13d8) = *puVar10;
  *(int *)(param_1 + 0x13cc) = *(int *)(param_1 + 0x13cc) + 1;
  if (puVar10 != (ulong *)0x0) {
    FUN_001d87b0(puVar10);
  }
                    /* try { // try from 001b8bf0 to 001b8bf3 has its CatchHandler @ 001b8c0c */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0x13e0));
  return puVar10;
}


