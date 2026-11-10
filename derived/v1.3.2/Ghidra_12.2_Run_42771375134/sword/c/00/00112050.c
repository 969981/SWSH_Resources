/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00112050; name: FUN_00112050
 */


long FUN_00112050(undefined8 *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long local_28;
  
  if (param_2 != 0) {
    plVar2 = (long *)FUN_00400d30();
    lVar3 = (**(code **)(*plVar2 + 0x10))
                      (plVar2,param_2,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevel/common/src/pipeline/PxcNpMemBlockPool.cpp"
                       ,0xfa);
    if (lVar3 != 0) {
      local_28 = lVar3;
      FUN_003ff570(*param_1);
      uVar1 = *(uint *)(param_1 + 0x12);
      if (uVar1 < (*(uint *)((long)param_1 + 0x94) & 0x7fffffff)) {
        *(long *)(param_1[0x11] + (ulong)uVar1 * 8) = lVar3;
        *(uint *)(param_1 + 0x12) = uVar1 + 1;
      }
      else {
                    /* try { // try from 001120e8 to 001120ef has its CatchHandler @ 0011210c */
        FUN_00112510(param_1 + 0x11,&local_28);
      }
                    /* try { // try from 001120f4 to 001120f7 has its CatchHandler @ 00112124 */
      FUN_003ff5a0(*param_1);
      return local_28;
    }
  }
  return 0;
}


