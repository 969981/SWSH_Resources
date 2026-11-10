/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00190b50; name: FUN_00190b50
 */


void FUN_00190b50(long *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  void *__dest;
  long lVar3;
  
  uVar1 = param_2 + 0x1fU >> 5;
  if (uVar1 <= (*(uint *)(param_1 + 1) & 0x7fffffff)) {
    return;
  }
  plVar2 = (long *)FUN_00400d30();
  __dest = (void *)(**(code **)(*plVar2 + 0x10))
                             (plVar2,uVar1 << 2,"NonTrackedAlloc","./../../Common/src/CmBitMap.h",
                              0x1b7);
  if ((void *)*param_1 != (void *)0x0) {
    memcpy(__dest,(void *)*param_1,(ulong)(uint)((int)param_1[1] << 2));
    if ((-1 < (int)param_1[1]) && (lVar3 = *param_1, lVar3 != 0)) {
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
    }
  }
                    /* WARNING: Subroutine does not return */
  memset((void *)((long)__dest + ((ulong)*(uint *)(param_1 + 1) & 0x7fffffff) * 4),0,
         (ulong)((uVar1 - *(uint *)(param_1 + 1)) * 4));
}


