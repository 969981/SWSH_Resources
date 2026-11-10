/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e7220; name: FUN_006e7220
 */


int FUN_006e7220(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x1b0);
  if (plVar3 == *(long **)(param_1 + 0x1b8)) {
    return -1;
  }
  iVar2 = 0;
  while( true ) {
    plVar1 = (long *)PTR_DAT_02710920;
    if (*plVar3 != 0) {
      plVar1 = (long *)(*plVar3 + 0x58);
    }
    if (*plVar1 == *param_2) break;
    plVar3 = plVar3 + 1;
    iVar2 = iVar2 + 1;
    if (*(long **)(param_1 + 0x1b8) == plVar3) {
      return -1;
    }
  }
  return iVar2;
}


