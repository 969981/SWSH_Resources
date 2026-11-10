/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00111e60; name: FUN_00111e60
 */


long FUN_00111e60(undefined8 *param_1,long *param_2,int *param_3,uint *param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long local_38;
  
  FUN_003ff570(*param_1);
  if ((param_3 != (int *)0x0) && (param_4 != (uint *)0x0)) {
    uVar2 = *param_4;
    if (uVar2 <= *param_3 + 1U) {
      uVar2 = *param_3 + 1;
    }
    *param_4 = uVar2;
    *param_3 = *param_3 + 1;
  }
  if (((param_5 & 1) == 0) || (*(int *)(param_1 + 0x10) == 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      if (*(int *)(param_1 + 0x17) == *(int *)((long)param_1 + 0xbc)) {
        lVar4 = 0;
        goto LAB_00111f88;
      }
      *(int *)(param_1 + 0x17) = *(int *)(param_1 + 0x17) + 1;
                    /* try { // try from 00111fb0 to 00111fdb has its CatchHandler @ 00112030 */
      plVar3 = (long *)FUN_00400d30();
      lVar4 = (**(code **)(*plVar3 + 0x10))
                        (plVar3,0x4000,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevel/common/src/pipeline/PxcNpMemBlockPool.cpp"
                         ,0xea);
      local_38 = lVar4;
      if (lVar4 == 0) {
        *(int *)(param_1 + 0x17) = *(int *)(param_1 + 0x17) + -1;
        goto LAB_00111f88;
      }
      uVar2 = *(uint *)(param_2 + 1);
      if (uVar2 < (*(uint *)((long)param_2 + 0xc) & 0x7fffffff)) {
        *(long *)(*param_2 + (ulong)uVar2 * 8) = lVar4;
        goto LAB_00111f38;
      }
                    /* try { // try from 00112014 to 0011201f has its CatchHandler @ 00112024 */
      FUN_00112800(param_2,&local_38);
    }
    else {
      uVar2 = *(int *)(param_1 + 0x14) - 1;
      local_38 = *(long *)(param_1[0x13] + (ulong)uVar2 * 8);
      *(uint *)(param_1 + 0x14) = uVar2;
      uVar2 = *(uint *)(param_2 + 1);
      if (uVar2 < (*(uint *)((long)param_2 + 0xc) & 0x7fffffff)) {
        *(long *)(*param_2 + (ulong)uVar2 * 8) = local_38;
LAB_00111f38:
        *(uint *)(param_2 + 1) = uVar2 + 1;
      }
      else {
                    /* try { // try from 00111f54 to 00111f5f has its CatchHandler @ 0011202c */
        FUN_00112800(param_2,&local_38);
      }
    }
    uVar1 = *(uint *)(param_1 + 0x19);
    uVar2 = *(int *)((long)param_1 + 0xc4) + 1;
    if (uVar1 <= uVar2) {
      uVar1 = *(int *)((long)param_1 + 0xc4) + 1;
    }
    *(uint *)((long)param_1 + 0xc4) = uVar2;
    *(uint *)(param_1 + 0x19) = uVar1;
  }
  else {
    uVar2 = *(int *)(param_1 + 0x10) - 1;
    local_38 = *(long *)(param_1[0xf] + (ulong)uVar2 * 8);
    *(uint *)(param_1 + 0x10) = uVar2;
    uVar2 = *(uint *)(param_2 + 1);
    if (uVar2 < (*(uint *)((long)param_2 + 0xc) & 0x7fffffff)) {
      *(long *)(*param_2 + (ulong)uVar2 * 8) = local_38;
      *(uint *)(param_2 + 1) = uVar2 + 1;
    }
    else {
                    /* try { // try from 00111f78 to 00111f83 has its CatchHandler @ 00112028 */
      FUN_00112800(param_2,&local_38);
    }
  }
  lVar4 = local_38;
LAB_00111f88:
                    /* try { // try from 00111f8c to 00111f8f has its CatchHandler @ 00112048 */
  FUN_003ff5a0(*param_1);
  return lVar4;
}


