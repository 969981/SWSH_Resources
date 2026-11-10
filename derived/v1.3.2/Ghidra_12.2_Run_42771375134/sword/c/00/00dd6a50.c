/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd6a50; name: FUN_00dd6a50
 */


long FUN_00dd6a50(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  
  plVar5 = *(long **)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar5 == plVar2) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    iVar6 = 0;
    do {
      while ((uVar3 = FUN_00dd71c0(*plVar5), (uVar3 & 1) != 0 &&
             ((plVar1 = plVar5 + 1, lVar4 == 0 || (iVar6 < (int)*plVar1))))) {
        lVar4 = *plVar5;
        plVar5 = plVar5 + 2;
        iVar6 = (int)*plVar1;
        if (plVar2 == plVar5) {
          return lVar4;
        }
      }
      plVar5 = plVar5 + 2;
    } while (plVar2 != plVar5);
  }
  return lVar4;
}


