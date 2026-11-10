/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01535dd0; name: FUN_01535dd0
 */


undefined8 FUN_01535dd0(undefined8 param_1,uint param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (param_2 < 3) {
    iVar3 = *(int *)(&DAT_02172f84 + (long)(int)param_2 * 4);
    do {
      plVar1 = (long *)FUN_01534080(param_1,param_2,iVar3);
      if ((plVar1 != (long *)0x0) &&
         ((((*plVar1 != 0 || (plVar1[1] != 0)) || (plVar1[2] != 0)) || (plVar1[3] != 0)))) {
        uVar2 = FUN_014ae670(param_2,iVar3);
        return uVar2;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}


