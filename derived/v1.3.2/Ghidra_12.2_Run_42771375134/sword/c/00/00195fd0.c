/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00195fd0; name: FUN_00195fd0
 */


void FUN_00195fd0(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  long *plVar2;
  void *__dest;
  uint uVar3;
  long lVar4;
  
  uVar3 = *(uint *)(param_2 + 1);
  uVar1 = uVar3 & 0x7ffffff;
  if ((*(uint *)(param_1 + 1) & 0x7fffffff) < uVar1) {
    if ((-1 < (int)*(uint *)(param_1 + 1)) && (lVar4 = *param_1, lVar4 != 0)) {
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4);
    }
    *(uint *)(param_1 + 1) = uVar1;
    plVar2 = (long *)FUN_00400d30();
    __dest = (void *)(**(code **)(*plVar2 + 0x10))
                               (plVar2,uVar1 << 2,"NonTrackedAlloc","./../../Common/src\\CmBitMap.h"
                                ,0x1ce);
    *param_1 = (long)__dest;
    uVar3 = *(uint *)(param_2 + 1);
  }
  else {
    __dest = (void *)*param_1;
  }
  memcpy(__dest,(void *)*param_2,(ulong)(uVar3 << 2));
  uVar1 = *(uint *)(param_2 + 1) & 0x7fffffff;
  if (uVar1 < (*(uint *)(param_1 + 1) & 0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
    memset((void *)(*param_1 + (ulong)uVar1 * 4),0,
           (ulong)((*(uint *)(param_1 + 1) - *(uint *)(param_2 + 1)) * 4));
  }
  return;
}


