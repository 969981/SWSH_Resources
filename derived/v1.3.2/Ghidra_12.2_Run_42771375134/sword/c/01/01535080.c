/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01535080; name: FUN_01535080
 */


int FUN_01535080(undefined8 param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 3) {
    iVar1 = *(int *)(&DAT_02172f84 + (long)(int)param_2 * 4);
    iVar3 = 0;
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
      lVar2 = FUN_01534080(param_1,param_2,iVar4);
      if (lVar2 != 0) {
        iVar3 = (*(uint *)(lVar2 + 0x20) & 1) + iVar3;
      }
    } while (iVar1 != iVar4);
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}


