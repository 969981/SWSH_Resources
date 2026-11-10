/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b7e30; name: FUN_001b7e30
 */


ulong * FUN_001b7e30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined2 *param_5)

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
  undefined2 local_60 [4];
  ulong *local_58;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 0x1f30));
  puVar10 = *(ulong **)(param_1 + 0x1f28);
  if (puVar10 == (ulong *)0x0) {
    iVar2 = *(int *)(param_1 + 0x1f20);
    if (iVar2 == 0) {
      puVar8 = (ulong *)0x0;
    }
    else {
                    /* try { // try from 001b7e78 to 001b7f8b has its CatchHandler @ 001b7fb8 */
      plVar5 = (long *)FUN_00400d30();
      pcVar11 = *(code **)(*plVar5 + 0x10);
      plVar6 = (long *)FUN_00400d60();
      uVar7 = (**(code **)(*plVar6 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::NpCloth>::getName() [T = physx::NpCloth]"
      ;
      if ((uVar7 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      puVar8 = (ulong *)(*pcVar11)(plVar5,iVar2,pcVar1,
                                   "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
    }
    uVar3 = *(uint *)(param_1 + 0x1f10);
    local_58 = puVar8;
    if (uVar3 < (*(uint *)(param_1 + 0x1f14) & 0x7fffffff)) {
      *(ulong **)(*(long *)(param_1 + 0x1f08) + (ulong)uVar3 * 8) = puVar8;
      *(uint *)(param_1 + 0x1f10) = uVar3 + 1;
    }
    else {
      FUN_001c7920(param_1 + 0x1d00,&local_58);
    }
    if (puVar8 + (ulong)*(uint *)(param_1 + 0x1f18) * 0x1c + -0x1c < puVar8) {
      puVar10 = *(ulong **)(param_1 + 0x1f28);
    }
    else {
      puVar4 = puVar8 + (ulong)*(uint *)(param_1 + 0x1f18) * 0x1c + -0x1c;
      puVar9 = *(ulong **)(param_1 + 0x1f28);
      do {
        puVar10 = puVar4;
        *puVar10 = (ulong)puVar9;
        puVar4 = puVar10 + -0x1c;
        puVar9 = puVar10;
      } while (puVar8 <= puVar10 + -0x1c);
      *(ulong **)(param_1 + 0x1f28) = puVar10;
    }
  }
  *(ulong *)(param_1 + 0x1f28) = *puVar10;
  *(int *)(param_1 + 0x1f1c) = *(int *)(param_1 + 0x1f1c) + 1;
  if (puVar10 != (ulong *)0x0) {
    local_60[0] = *param_5;
    FUN_001e90f0(puVar10,param_2,param_3,param_4,local_60);
  }
                    /* try { // try from 001b7f90 to 001b7f93 has its CatchHandler @ 001b7fb4 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0x1f30));
  return puVar10;
}


