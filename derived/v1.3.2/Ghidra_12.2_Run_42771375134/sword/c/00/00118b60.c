/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00118b60; name: FUN_00118b60
 */


void FUN_00118b60(long param_1)

{
  uint uVar1;
  long *plVar2;
  void *__s;
  uint uVar3;
  long lVar4;
  
  uVar1 = *(int *)(param_1 + 0x20) + 0x1fU >> 5;
  uVar3 = *(uint *)(param_1 + 0x1f0);
  if ((uVar3 & 0x7fffffff) < uVar1) {
    if ((-1 < (int)uVar3) && (lVar4 = *(long *)(param_1 + 0x1e8), lVar4 != 0)) {
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4);
    }
    *(uint *)(param_1 + 0x1f0) = uVar1;
    plVar2 = (long *)FUN_00400d30();
    __s = (void *)(**(code **)(*plVar2 + 0x10))
                            (plVar2,uVar1 << 2,"NonTrackedAlloc","./../../Common/src\\CmBitMap.h",
                             0x1ce);
    uVar3 = *(uint *)(param_1 + 0x1f0);
    *(void **)(param_1 + 0x1e8) = __s;
  }
  else {
    __s = *(void **)(param_1 + 0x1e8);
  }
                    /* WARNING: Subroutine does not return */
  memset(__s,0,(ulong)(uVar3 << 2));
}


