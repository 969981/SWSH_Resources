/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00781cd0; name: FUN_00781cd0
 */


void FUN_00781cd0(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  lVar2 = param_1[8];
  for (lVar1 = param_1[7]; lVar1 != lVar2; lVar1 = lVar1 + 0x50) {
    iVar3 = FUN_00782990(lVar1);
    if ((iVar3 - 1U < 2) && (*param_1 != 0)) {
      plVar4 = (long *)FUN_007822b0(lVar1);
      plVar6 = *(long **)*param_1;
      plVar5 = (long *)((long *)*param_1)[1];
      if ((plVar6 != plVar5) && (*plVar6 != *plVar4)) {
        do {
          plVar6 = plVar6 + 0x44;
          if (plVar5 == plVar6) goto LAB_00781cf4;
        } while (*plVar6 != *plVar4);
      }
      if ((((iVar3 != 3) && (plVar6 != plVar5)) && (plVar6 != (long *)0x0)) &&
         ((code *)plVar6[0x24] != (code *)0x0)) {
        (*(code *)plVar6[0x24])(plVar6 + 0x28,lVar1);
      }
    }
LAB_00781cf4:
  }
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  do {
    if (lVar1 == lVar2) {
      return;
    }
    iVar3 = FUN_00782990(lVar1);
    if ((iVar3 == 1) && (*param_1 != 0)) {
      plVar4 = (long *)FUN_007822b0(lVar1);
      plVar6 = *(long **)*param_1;
      plVar5 = (long *)((long *)*param_1)[1];
      if ((plVar6 != plVar5) && (*plVar6 != *plVar4)) {
        do {
          plVar6 = plVar6 + 0x44;
          if (plVar5 == plVar6) goto LAB_00781da8;
        } while (*plVar6 != *plVar4);
      }
      if (((plVar6 != plVar5) && (plVar6 != (long *)0x0)) && ((code *)plVar6[0x24] != (code *)0x0))
      {
        (*(code *)plVar6[0x24])(plVar6 + 0x28,lVar1);
      }
    }
LAB_00781da8:
    lVar1 = lVar1 + 0x50;
  } while( true );
}


