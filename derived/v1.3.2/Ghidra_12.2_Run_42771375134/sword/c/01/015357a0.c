/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015357a0; name: FUN_015357a0
 */


int FUN_015357a0(undefined8 param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 3) {
    iVar1 = *(int *)(&DAT_02172f84 + (long)(int)param_2 * 4);
    iVar4 = 0;
    iVar3 = 0;
    do {
      iVar4 = iVar4 + 1;
      plVar2 = (long *)FUN_01534080(param_1,param_2,iVar4);
      if ((plVar2 != (long *)0x0) &&
         ((((*plVar2 != 0 || (plVar2[1] != 0)) || (plVar2[2] != 0)) || (plVar2[3] != 0)))) {
        iVar3 = iVar3 + 1;
      }
    } while (iVar1 != iVar4);
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}


