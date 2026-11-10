/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e9f410; name: FUN_00e9f410
 */


bool FUN_00e9f410(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar5;
  long *plVar4;
  
  plVar1 = *(long **)(param_1 + 0x1f0);
  plVar4 = *(long **)(param_1 + 0x1e8);
  if (*(long **)(param_1 + 0x1e8) == plVar1) {
    return false;
  }
  do {
    plVar5 = plVar4 + 1;
    lVar3 = *plVar4;
    uVar2 = FUN_00df2390(lVar3 + 0x50);
    if ((uVar2 & 1) != 0) {
      return *(char *)(lVar3 + 0x68) == '\0';
    }
    plVar4 = plVar5;
  } while (plVar1 != plVar5);
  return false;
}


