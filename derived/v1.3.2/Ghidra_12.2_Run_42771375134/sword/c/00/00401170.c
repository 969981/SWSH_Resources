/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00401170; name: FUN_00401170
 */


void FUN_00401170(long param_1,uint param_2)

{
  int iVar1;
  void *__s;
  int iVar2;
  
  if ((param_2 == 0) || ((param_2 - 1 & param_2) != 0)) {
    param_2 = param_2 | param_2 >> 1;
    param_2 = param_2 | param_2 >> 2;
    param_2 = param_2 | param_2 >> 4;
    param_2 = param_2 | param_2 >> 8;
    param_2 = (param_2 | param_2 >> 0x10) + 1;
  }
  iVar2 = (int)(*(float *)(param_1 + 0x28) * (float)param_2);
  iVar1 = param_2 * 4 + iVar2 * 4;
  iVar1 = (-iVar1 & 0xcU) + iVar1 + iVar2 * 0x10;
  if (iVar1 == 0) {
    __s = (void *)0x0;
  }
  else {
    __s = (void *)(**(code **)(*(long *)(*(long *)PTR_DAT_027129e0 + 0x18) + 0x10))
                            ((long *)(*(long *)PTR_DAT_027129e0 + 0x18),iVar1,"NonTrackedAlloc",
                             "./../../foundation/include/PsHashInternals.h",0x174);
  }
                    /* WARNING: Subroutine does not return */
  memset(__s,-1,(ulong)(param_2 * 4));
}


