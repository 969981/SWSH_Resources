/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ba260; name: FUN_001ba260
 */


ulong * FUN_001ba260(long param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  code *pcVar12;
  char local_44 [4];
  ulong *local_38;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 0x660));
  puVar11 = *(ulong **)(param_1 + 0x658);
  if (puVar11 == (ulong *)0x0) {
    iVar2 = *(int *)(param_1 + 0x650);
    if (iVar2 == 0) {
      puVar8 = (ulong *)0x0;
    }
    else {
                    /* try { // try from 001ba298 to 001ba393 has its CatchHandler @ 001ba3f4 */
      plVar5 = (long *)FUN_00400d30();
      pcVar12 = *(code **)(*plVar5 + 0x10);
      plVar6 = (long *)FUN_00400d60();
      uVar7 = (**(code **)(*plVar6 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::NpRigidDynamic>::getName() [T = physx::NpRigidDynamic]"
      ;
      if ((uVar7 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      puVar8 = (ulong *)(*pcVar12)(plVar5,iVar2,pcVar1,
                                   "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
    }
    uVar3 = *(uint *)(param_1 + 0x640);
    local_38 = puVar8;
    if (uVar3 < (*(uint *)(param_1 + 0x644) & 0x7fffffff)) {
      *(ulong **)(*(long *)(param_1 + 0x638) + (ulong)uVar3 * 8) = puVar8;
      *(uint *)(param_1 + 0x640) = uVar3 + 1;
    }
    else {
      FUN_001c97b0(param_1 + 0x430,&local_38);
    }
    if (puVar8 + (ulong)*(uint *)(param_1 + 0x648) * 0x30 + -0x30 < puVar8) {
      puVar11 = *(ulong **)(param_1 + 0x658);
    }
    else {
      puVar4 = puVar8 + (ulong)*(uint *)(param_1 + 0x648) * 0x30 + -0x30;
      puVar10 = *(ulong **)(param_1 + 0x658);
      do {
        puVar11 = puVar4;
        *puVar11 = (ulong)puVar10;
        puVar4 = puVar11 + -0x30;
        puVar10 = puVar11;
      } while (puVar8 <= puVar11 + -0x30);
      *(ulong **)(param_1 + 0x658) = puVar11;
    }
  }
  *(ulong *)(param_1 + 0x658) = *puVar11;
  *(int *)(param_1 + 0x64c) = *(int *)(param_1 + 0x64c) + 1;
  if (puVar11 != (ulong *)0x0) {
    FUN_001edb70(puVar11,param_2);
  }
                    /* try { // try from 001ba398 to 001ba39b has its CatchHandler @ 001ba3f0 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0x660));
  if (puVar11 != (ulong *)0x0) {
    local_38 = puVar11;
    FUN_003ff570(*(undefined8 *)(param_1 + 8));
    puVar9 = (undefined8 *)FUN_001c7280(param_1 + 0x3b8,&local_38,local_44);
    if (local_44[0] == '\0') {
      *puVar9 = local_38;
    }
    FUN_003ff5a0(*(undefined8 *)(param_1 + 8));
  }
  return puVar11;
}


