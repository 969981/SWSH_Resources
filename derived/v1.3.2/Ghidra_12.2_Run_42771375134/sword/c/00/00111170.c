/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00111170; name: FUN_00111170
 */


void FUN_00111170(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  undefined8 local_48;
  
  FUN_003ff570(*param_1);
  uVar3 = *(uint *)((long)param_1 + 0xc4);
  if (uVar3 < param_2) {
    do {
                    /* try { // try from 001111bc to 0011120f has its CatchHandler @ 0011124c */
      plVar2 = (long *)FUN_00400d30();
      local_48 = (**(code **)(*plVar2 + 0x10))
                           (plVar2,0x4000,"NonTrackedAlloc",
                            "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevel/common/src/pipeline/PxcNpMemBlockPool.cpp"
                            ,99);
      uVar1 = *(uint *)(param_1 + 0x14);
      if (uVar1 < (*(uint *)((long)param_1 + 0xa4) & 0x7fffffff)) {
        *(undefined8 *)(param_1[0x13] + (ulong)uVar1 * 8) = local_48;
        *(uint *)(param_1 + 0x14) = uVar1 + 1;
      }
      else {
        FUN_00112800(param_1 + 0x13,&local_48);
      }
      uVar3 = uVar3 + 1;
      *(int *)(param_1 + 0x17) = *(int *)(param_1 + 0x17) + 1;
    } while (uVar3 < param_2);
  }
                    /* try { // try from 0011122c to 0011122f has its CatchHandler @ 00111248 */
  FUN_003ff5a0(*param_1);
  return;
}


