/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ff430; name: FUN_001ff430
 */


void FUN_001ff430(long param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  void *__s;
  int iVar3;
  
  if ((param_2 == 0) || ((param_2 - 1 & param_2) != 0)) {
    param_2 = param_2 | param_2 >> 1;
    param_2 = param_2 | param_2 >> 2;
    param_2 = param_2 | param_2 >> 4;
    param_2 = param_2 | param_2 >> 8;
    param_2 = (param_2 | param_2 >> 0x10) + 1;
  }
  iVar3 = (int)(*(float *)(param_1 + 0x28) * (float)param_2);
  iVar1 = param_2 * 4 + iVar3 * 4;
  iVar1 = (-iVar1 & 0xcU) + iVar1 + iVar3 * 8;
  if (iVar1 == 0) {
    __s = (void *)0x0;
  }
  else {
    plVar2 = (long *)FUN_00400d30();
    __s = (void *)(**(code **)(*plVar2 + 0x10))
                            (plVar2,iVar1,"NonTrackedAlloc",
                             "./../../../../PxShared/src/foundation/include/PsHashInternals.h",0x174
                            );
  }
                    /* WARNING: Subroutine does not return */
  memset(__s,-1,(ulong)(param_2 * 4));
}


