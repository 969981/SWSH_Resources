/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ba0b0; name: FUN_001ba0b0
 */


ulong * FUN_001ba0b0(long param_1,undefined8 param_2)

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
  char local_44 [4];
  ulong *local_38;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 0x8a0));
  puVar10 = *(ulong **)(param_1 + 0x898);
  if (puVar10 == (ulong *)0x0) {
    iVar2 = *(int *)(param_1 + 0x890);
    if (iVar2 == 0) {
      puVar8 = (ulong *)0x0;
    }
    else {
                    /* try { // try from 001ba0e8 to 001ba1e3 has its CatchHandler @ 001ba244 */
      plVar5 = (long *)FUN_00400d30();
      pcVar11 = *(code **)(*plVar5 + 0x10);
      plVar6 = (long *)FUN_00400d60();
      uVar7 = (**(code **)(*plVar6 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::NpRigidStatic>::getName() [T = physx::NpRigidStatic]"
      ;
      if ((uVar7 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      puVar8 = (ulong *)(*pcVar11)(plVar5,iVar2,pcVar1,
                                   "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
    }
    uVar3 = *(uint *)(param_1 + 0x880);
    local_38 = puVar8;
    if (uVar3 < (*(uint *)(param_1 + 0x884) & 0x7fffffff)) {
      *(ulong **)(*(long *)(param_1 + 0x878) + (ulong)uVar3 * 8) = puVar8;
      *(uint *)(param_1 + 0x880) = uVar3 + 1;
    }
    else {
      FUN_001c95e0(param_1 + 0x670,&local_38);
    }
    if (puVar8 + (ulong)*(uint *)(param_1 + 0x888) * 0x16 + -0x16 < puVar8) {
      puVar10 = *(ulong **)(param_1 + 0x898);
    }
    else {
      puVar4 = puVar8 + (ulong)*(uint *)(param_1 + 0x888) * 0x16 + -0x16;
      puVar9 = *(ulong **)(param_1 + 0x898);
      do {
        puVar10 = puVar4;
        *puVar10 = (ulong)puVar9;
        puVar4 = puVar10 + -0x16;
        puVar9 = puVar10;
      } while (puVar8 <= puVar10 + -0x16);
      *(ulong **)(param_1 + 0x898) = puVar10;
    }
  }
  *(ulong *)(param_1 + 0x898) = *puVar10;
  *(int *)(param_1 + 0x88c) = *(int *)(param_1 + 0x88c) + 1;
  if (puVar10 != (ulong *)0x0) {
    FUN_001f33a0(puVar10,param_2);
  }
                    /* try { // try from 001ba1e8 to 001ba1eb has its CatchHandler @ 001ba240 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0x8a0));
  if (puVar10 != (ulong *)0x0) {
    local_38 = puVar10;
    FUN_003ff570(*(undefined8 *)(param_1 + 8));
    puVar8 = (ulong *)FUN_001c7280(param_1 + 0x3b8,&local_38,local_44);
    if (local_44[0] == '\0') {
      *puVar8 = (ulong)local_38;
    }
    FUN_003ff5a0(*(undefined8 *)(param_1 + 8));
  }
  return puVar10;
}


