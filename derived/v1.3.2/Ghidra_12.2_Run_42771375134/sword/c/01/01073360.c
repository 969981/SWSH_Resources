/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01073360; name: FUN_01073360
 */


void FUN_01073360(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x5d0);
  if ((((**(int **)(lVar3 + 0x60) == 0) && (*(char *)(*(long *)(lVar3 + 0x1f8) + 0x58) == '\x01'))
      && (*(long *)(param_1 + 0x698) == -0x2ff60d54f2674d29)) &&
     (iVar1 = FUN_010782f0(lVar3 + 0x68,1), iVar1 != 0)) {
    plVar2 = (long *)FUN_010782d0(*(long *)(param_1 + 0x5d0) + 0x68,1,0);
    if (*plVar2 != -0x2ff60d54f2674d29) {
      *(long *)(param_1 + 0x698) = *plVar2;
    }
  }
  return;
}


