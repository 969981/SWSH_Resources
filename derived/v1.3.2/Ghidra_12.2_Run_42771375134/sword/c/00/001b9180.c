/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b9180; name: FUN_001b9180
 */


ulong * FUN_001b9180(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined4 param_6)

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
  char local_64 [4];
  ulong *local_58;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 0xf60));
  puVar10 = *(ulong **)(param_1 + 0xf58);
  if (puVar10 == (ulong *)0x0) {
    iVar2 = *(int *)(param_1 + 0xf50);
    if (iVar2 == 0) {
      puVar8 = (ulong *)0x0;
    }
    else {
                    /* try { // try from 001b91d0 to 001b92db has its CatchHandler @ 001b9344 */
      plVar5 = (long *)FUN_00400d30();
      pcVar11 = *(code **)(*plVar5 + 0x10);
      plVar6 = (long *)FUN_00400d60();
      uVar7 = (**(code **)(*plVar6 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::NpConstraint>::getName() [T = physx::NpConstraint]"
      ;
      if ((uVar7 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      puVar8 = (ulong *)(*pcVar11)(plVar5,iVar2,pcVar1,
                                   "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
    }
    uVar3 = *(uint *)(param_1 + 0xf40);
    local_58 = puVar8;
    if (uVar3 < (*(uint *)(param_1 + 0xf44) & 0x7fffffff)) {
      *(ulong **)(*(long *)(param_1 + 0xf38) + (ulong)uVar3 * 8) = puVar8;
      *(uint *)(param_1 + 0xf40) = uVar3 + 1;
    }
    else {
      FUN_001c89a0(param_1 + 0xd30,&local_58);
    }
    if (puVar8 + (ulong)*(uint *)(param_1 + 0xf48) * 0x17 + -0x17 < puVar8) {
      puVar10 = *(ulong **)(param_1 + 0xf58);
    }
    else {
      puVar4 = puVar8 + (ulong)*(uint *)(param_1 + 0xf48) * 0x17 + -0x17;
      puVar9 = *(ulong **)(param_1 + 0xf58);
      do {
        puVar10 = puVar4;
        *puVar10 = (ulong)puVar9;
        puVar4 = puVar10 + -0x17;
        puVar9 = puVar10;
      } while (puVar8 <= puVar10 + -0x17);
      *(ulong **)(param_1 + 0xf58) = puVar10;
    }
  }
  *(ulong *)(param_1 + 0xf58) = *puVar10;
  *(int *)(param_1 + 0xf4c) = *(int *)(param_1 + 0xf4c) + 1;
  if (puVar10 != (ulong *)0x0) {
    FUN_001df880(puVar10,param_2,param_3,param_4,param_5,param_6);
  }
                    /* try { // try from 001b92e0 to 001b92e3 has its CatchHandler @ 001b9340 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0xf60));
  if (puVar10 != (ulong *)0x0) {
    local_58 = puVar10;
    FUN_003ff570(*(undefined8 *)(param_1 + 8));
    puVar8 = (ulong *)FUN_001c8810(param_1 + 0x380,&local_58,local_64);
    if (local_64[0] == '\0') {
      *puVar8 = (ulong)local_58;
    }
    FUN_003ff5a0(*(undefined8 *)(param_1 + 8));
  }
  return puVar10;
}


