/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b9450; name: FUN_001b9450
 */


ulong * FUN_001b9450(long param_1,undefined4 param_2,uint param_3)

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
  char local_4c [4];
  ulong *local_48;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 0xd20));
  puVar10 = *(ulong **)(param_1 + 0xd18);
  if (puVar10 == (ulong *)0x0) {
    iVar2 = *(int *)(param_1 + 0xd10);
    if (iVar2 == 0) {
      puVar8 = (ulong *)0x0;
    }
    else {
                    /* try { // try from 001b948c to 001b958b has its CatchHandler @ 001b95ec */
      plVar5 = (long *)FUN_00400d30();
      pcVar11 = *(code **)(*plVar5 + 0x10);
      plVar6 = (long *)FUN_00400d60();
      uVar7 = (**(code **)(*plVar6 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::NpAggregate>::getName() [T = physx::NpAggregate]"
      ;
      if ((uVar7 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      puVar8 = (ulong *)(*pcVar11)(plVar5,iVar2,pcVar1,
                                   "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
    }
    uVar3 = *(uint *)(param_1 + 0xd00);
    local_48 = puVar8;
    if (uVar3 < (*(uint *)(param_1 + 0xd04) & 0x7fffffff)) {
      *(ulong **)(*(long *)(param_1 + 0xcf8) + (ulong)uVar3 * 8) = puVar8;
      *(uint *)(param_1 + 0xd00) = uVar3 + 1;
    }
    else {
      FUN_001c8d00(param_1 + 0xaf0,&local_48);
    }
    if (puVar8 + (ulong)*(uint *)(param_1 + 0xd08) * 10 + -10 < puVar8) {
      puVar10 = *(ulong **)(param_1 + 0xd18);
    }
    else {
      puVar4 = puVar8 + (ulong)*(uint *)(param_1 + 0xd08) * 10 + -10;
      puVar9 = *(ulong **)(param_1 + 0xd18);
      do {
        puVar10 = puVar4;
        *puVar10 = (ulong)puVar9;
        puVar4 = puVar10 + -10;
        puVar9 = puVar10;
      } while (puVar8 <= puVar10 + -10);
      *(ulong **)(param_1 + 0xd18) = puVar10;
    }
  }
  *(ulong *)(param_1 + 0xd18) = *puVar10;
  *(int *)(param_1 + 0xd0c) = *(int *)(param_1 + 0xd0c) + 1;
  if (puVar10 != (ulong *)0x0) {
    FUN_001c9ff0(puVar10,param_2,param_3 & 1);
  }
                    /* try { // try from 001b9590 to 001b9593 has its CatchHandler @ 001b95e8 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0xd20));
  if (puVar10 != (ulong *)0x0) {
    local_48 = puVar10;
    FUN_003ff570(*(undefined8 *)(param_1 + 8));
    puVar8 = (ulong *)FUN_001c8b70(param_1 + 0x310,&local_48,local_4c);
    if (local_4c[0] == '\0') {
      *puVar8 = (ulong)local_48;
    }
    FUN_003ff5a0(*(undefined8 *)(param_1 + 8));
  }
  return puVar10;
}


