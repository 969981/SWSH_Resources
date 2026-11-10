/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d1240; name: FUN_004d1240
 */


int FUN_004d1240(long param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 == 0) {
    return 0;
  }
  iVar2 = 0;
  do {
    plVar1 = (long *)(lVar3 + 0x50);
    lVar3 = *(long *)(lVar3 + 0x40);
    if (*(int *)(*plVar1 + 0x350) == param_2) {
      iVar2 = iVar2 + 1;
    }
  } while (lVar3 != 0);
  return iVar2;
}


