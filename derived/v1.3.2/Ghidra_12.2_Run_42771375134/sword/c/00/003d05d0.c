/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d05d0; name: FUN_003d05d0
 */


long FUN_003d05d0(long param_1,int param_2,uint param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  void *__dest;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  
  iVar3 = *(int *)(param_1 + 0x48);
  iVar1 = (param_3 + (uint)((param_3 & 0xf) != 0) * 0x10 & 0xfffffff0) + param_2 * 0x40;
  uVar2 = iVar3 + 0xfU & 0xfffffff0;
  *param_4 = uVar2;
  uVar6 = *(uint *)(param_1 + 0x4c);
  if (uVar6 < uVar2 + iVar1) {
    if (*(char *)(param_1 + 0x58) != '\0') {
      return 0;
    }
    uVar7 = (ulong)uVar6;
    do {
      uVar4 = (int)uVar7 * 2;
      uVar7 = (ulong)uVar4;
      *(uint *)(param_1 + 0x4c) = uVar4;
    } while (uVar4 < *param_4 + iVar1);
    if (uVar4 == 0) {
      __dest = (void *)0x0;
    }
    else {
      plVar5 = (long *)FUN_00400d30();
      __dest = (void *)(**(code **)(*plVar5 + 0x10))
                                 (plVar5,uVar4,"NonTrackedAlloc",
                                  "./../../SimulationController/src/ScContactReportBuffer.h",0xa7);
    }
    memcpy(__dest,*(void **)(param_1 + 0x40),(ulong)uVar6);
    lVar8 = *(long *)(param_1 + 0x40);
    if (lVar8 != 0) {
      plVar5 = (long *)FUN_00400d30();
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar8);
    }
    *(void **)(param_1 + 0x40) = __dest;
    uVar6 = *param_4;
  }
  else {
    __dest = *(void **)(param_1 + 0x40);
    uVar6 = uVar2;
  }
  *(uint *)(param_1 + 0x54) = uVar6;
  *(uint *)(param_1 + 0x48) = (iVar1 - iVar3) + uVar2 + *(int *)(param_1 + 0x48);
  return (long)__dest + (ulong)uVar6;
}


