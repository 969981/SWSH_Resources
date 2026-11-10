/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b8fe0; name: FUN_001b8fe0
 */


ulong * FUN_001b8fe0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

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
  ulong *local_58;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 0x1860));
  puVar10 = *(ulong **)(param_1 + 0x1858);
  if (puVar10 == (ulong *)0x0) {
    iVar2 = *(int *)(param_1 + 0x1850);
    if (iVar2 == 0) {
      puVar8 = (ulong *)0x0;
    }
    else {
                    /* try { // try from 001b9028 to 001b9133 has its CatchHandler @ 001b9160 */
      plVar5 = (long *)FUN_00400d30();
      pcVar11 = *(code **)(*plVar5 + 0x10);
      plVar6 = (long *)FUN_00400d60();
      uVar7 = (**(code **)(*plVar6 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::NpArticulationJoint>::getName() [T = physx::NpArticulationJoint]"
      ;
      if ((uVar7 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      puVar8 = (ulong *)(*pcVar11)(plVar5,iVar2,pcVar1,
                                   "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
    }
    uVar3 = *(uint *)(param_1 + 0x1840);
    local_58 = puVar8;
    if (uVar3 < (*(uint *)(param_1 + 0x1844) & 0x7fffffff)) {
      *(ulong **)(*(long *)(param_1 + 0x1838) + (ulong)uVar3 * 8) = puVar8;
      *(uint *)(param_1 + 0x1840) = uVar3 + 1;
    }
    else {
      FUN_001c8640(param_1 + 0x1630,&local_58);
    }
    if (puVar8 + (ulong)*(uint *)(param_1 + 0x1848) * 0x1e + -0x1e < puVar8) {
      puVar10 = *(ulong **)(param_1 + 0x1858);
    }
    else {
      puVar4 = puVar8 + (ulong)*(uint *)(param_1 + 0x1848) * 0x1e + -0x1e;
      puVar9 = *(ulong **)(param_1 + 0x1858);
      do {
        puVar10 = puVar4;
        *puVar10 = (ulong)puVar9;
        puVar4 = puVar10 + -0x1e;
        puVar9 = puVar10;
      } while (puVar8 <= puVar10 + -0x1e);
      *(ulong **)(param_1 + 0x1858) = puVar10;
    }
  }
  *(ulong *)(param_1 + 0x1858) = *puVar10;
  *(int *)(param_1 + 0x184c) = *(int *)(param_1 + 0x184c) + 1;
  if (puVar10 != (ulong *)0x0) {
    FUN_001e2400(puVar10,param_2,param_3,param_4,param_5);
  }
                    /* try { // try from 001b9138 to 001b913b has its CatchHandler @ 001b915c */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0x1860));
  return puVar10;
}


