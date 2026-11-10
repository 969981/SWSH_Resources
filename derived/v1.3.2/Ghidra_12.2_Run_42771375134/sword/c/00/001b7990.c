/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b7990; name: FUN_001b7990
 */


ulong * FUN_001b7990(long param_1,undefined4 param_2,uint param_3)

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
  
  FUN_003ff570(*(undefined8 *)(param_1 + 0x1ce0));
  puVar10 = *(ulong **)(param_1 + 0x1cd8);
  if (puVar10 == (ulong *)0x0) {
    iVar2 = *(int *)(param_1 + 0x1cd0);
    if (iVar2 == 0) {
      puVar8 = (ulong *)0x0;
    }
    else {
                    /* try { // try from 001b79cc to 001b7acf has its CatchHandler @ 001b7af8 */
      plVar5 = (long *)FUN_00400d30();
      pcVar11 = *(code **)(*plVar5 + 0x10);
      plVar6 = (long *)FUN_00400d60();
      uVar7 = (**(code **)(*plVar6 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::NpParticleFluid>::getName() [T = physx::NpParticleFluid]"
      ;
      if ((uVar7 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      puVar8 = (ulong *)(*pcVar11)(plVar5,iVar2,pcVar1,
                                   "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
    }
    uVar3 = *(uint *)(param_1 + 0x1cc0);
    local_48 = puVar8;
    if (uVar3 < (*(uint *)(param_1 + 0x1cc4) & 0x7fffffff)) {
      *(ulong **)(*(long *)(param_1 + 0x1cb8) + (ulong)uVar3 * 8) = puVar8;
      *(uint *)(param_1 + 0x1cc0) = uVar3 + 1;
    }
    else {
      FUN_001c7750(param_1 + 0x1ab0,&local_48);
    }
    if (puVar8 + (ulong)*(uint *)(param_1 + 0x1cc8) * 0x21 + -0x21 < puVar8) {
      puVar10 = *(ulong **)(param_1 + 0x1cd8);
    }
    else {
      puVar4 = puVar8 + (ulong)*(uint *)(param_1 + 0x1cc8) * 0x21 + -0x21;
      puVar9 = *(ulong **)(param_1 + 0x1cd8);
      do {
        puVar10 = puVar4;
        *puVar10 = (ulong)puVar9;
        puVar4 = puVar10 + -0x21;
        puVar9 = puVar10;
      } while (puVar8 <= puVar10 + -0x21);
      *(ulong **)(param_1 + 0x1cd8) = puVar10;
    }
  }
  *(ulong *)(param_1 + 0x1cd8) = *puVar10;
  *(int *)(param_1 + 0x1ccc) = *(int *)(param_1 + 0x1ccc) + 1;
  if (puVar10 != (ulong *)0x0) {
    FUN_001e5960(puVar10,param_2,param_3 & 1);
  }
                    /* try { // try from 001b7ad4 to 001b7ad7 has its CatchHandler @ 001b7af4 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0x1ce0));
  return puVar10;
}


