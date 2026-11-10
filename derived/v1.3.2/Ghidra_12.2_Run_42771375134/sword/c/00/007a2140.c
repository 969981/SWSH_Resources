/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a2140; name: FUN_007a2140
 */


void FUN_007a2140(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long local_18;
  
  plVar3 = *(long **)(param_1 + 0x100);
  lVar6 = *(long *)(param_1 + 0x108);
  plVar1 = plVar3 + lVar6;
  if ((lVar6 != 0) && (*plVar3 != param_2)) {
    lVar5 = lVar6 * 8;
    plVar2 = plVar3;
    do {
      lVar5 = lVar5 + -8;
      plVar3 = plVar1;
      if (lVar5 == 0) goto LAB_007a21e0;
      plVar3 = plVar2 + 1;
      plVar4 = plVar2 + 1;
      plVar2 = plVar3;
    } while (*plVar4 != param_2);
  }
  if ((plVar1 != plVar3) && (plVar3 + 1 != plVar1)) {
    lVar6 = plVar3[1];
    plVar2 = plVar3 + 2;
    while( true ) {
      plVar4 = plVar3;
      if (lVar6 != param_2) {
        plVar4 = plVar3 + 1;
        *plVar3 = lVar6;
      }
      plVar3 = plVar4;
      if (plVar1 == plVar2) break;
      lVar6 = *plVar2;
      plVar2 = plVar2 + 1;
    }
    lVar6 = *(long *)(param_1 + 0x108);
    plVar1 = (long *)(*(long *)(param_1 + 0x100) + lVar6 * 8);
  }
LAB_007a21e0:
  if (plVar1 != plVar3) {
    *(long *)(param_1 + 0x108) = lVar6 - ((long)plVar1 - (long)plVar3 >> 3);
  }
  local_18 = param_2;
  FUN_007a3380(param_1 + 0x1c0,&local_18);
  return;
}


