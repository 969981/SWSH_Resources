/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00136460; name: FUN_00136460
 */


void FUN_00136460(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  void *__dest;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar1 = param_2 + 0x80U >> 5;
  if ((param_2 + 0x80U & 0x1f) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (uVar1 == 0) {
    __dest = (void *)0x0;
    uVar4 = *(uint *)(param_1 + 1);
    if (uVar4 == 0) {
      uVar5 = 0;
      goto LAB_001364d4;
    }
  }
  else {
    plVar3 = (long *)FUN_00400d30();
    __dest = (void *)(**(code **)(*plVar3 + 0x10))
                               (plVar3,uVar1 << 2,"NonTrackedAlloc",
                                "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseMBP.cpp"
                                ,0x11a);
    uVar4 = *(uint *)(param_1 + 1);
    uVar5 = (ulong)uVar4;
    if (uVar4 == 0) goto LAB_001364d4;
  }
  memcpy(__dest,(void *)*param_1,(ulong)(uVar4 << 2));
  uVar5 = (ulong)*(uint *)(param_1 + 1);
LAB_001364d4:
  iVar2 = uVar1 - (int)uVar5;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    memset((void *)((long)__dest + uVar5 * 4),0,(ulong)(uint)(iVar2 * 4));
  }
  lVar6 = *param_1;
  if (lVar6 != 0) {
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar6);
    *param_1 = 0;
  }
  *param_1 = (long)__dest;
  *(uint *)(param_1 + 1) = uVar1;
  return;
}


