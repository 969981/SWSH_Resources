/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c3120; name: FUN_003c3120
 */


long FUN_003c3120(undefined8 *param_1,int param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long local_38;
  
  uVar1 = param_2 + 0xfU & 0xfffffff0;
  uVar6 = (ulong)uVar1;
  FUN_003ff570(*param_1);
  lVar4 = param_1[1];
  uVar2 = *(uint *)(param_1 + 2);
  lVar5 = *(long *)(lVar4 + (ulong)(uVar2 - 1) * 8);
  if (lVar5 - param_1[3] < (long)uVar6) {
    lVar4 = 0;
    if ((uVar1 != 0) && ((param_3 & 1) != 0)) {
                    /* try { // try from 003c317c to 003c31a7 has its CatchHandler @ 003c3204 */
      plVar3 = (long *)FUN_00400d30();
      lVar4 = (**(code **)(*plVar3 + 0x10))
                        (plVar3,uVar6,"NonTrackedAlloc",
                         "./../../LowLevel/common/include/utils\\PxcScratchAllocator.h",99);
    }
  }
  else {
    local_38 = lVar5 - uVar6;
    if (uVar2 < (*(uint *)((long)param_1 + 0x14) & 0x7fffffff)) {
      *(long *)(lVar4 + (ulong)uVar2 * 8) = local_38;
      *(uint *)(param_1 + 2) = uVar2 + 1;
    }
    else {
                    /* try { // try from 003c31d4 to 003c31db has its CatchHandler @ 003c3200 */
      FUN_00112510(param_1 + 1,&local_38);
    }
    lVar4 = local_38;
  }
                    /* try { // try from 003c31e4 to 003c31e7 has its CatchHandler @ 003c321c */
  FUN_003ff5a0(*param_1);
  return lVar4;
}


