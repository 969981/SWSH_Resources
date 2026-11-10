/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0082e5f0; name: FUN_0082e5f0
 */


int FUN_0082e5f0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  
  plVar5 = param_1 + 1;
  if ((long *)*param_1 == plVar5) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    plVar7 = (long *)*param_1;
    do {
      while( true ) {
        iVar1 = FUN_0082e6a0(plVar7 + 5,(int)plVar7[4]);
        iVar6 = iVar1 + iVar6;
        plVar2 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) break;
        do {
          plVar7 = plVar2;
          plVar2 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
LAB_0082e668:
        if (plVar7 == plVar5) {
          return iVar6;
        }
      }
      plVar2 = plVar7 + 2;
      plVar3 = (long *)*plVar2;
      if ((long *)*plVar3 != plVar7) {
        do {
          lVar4 = *plVar2;
          plVar2 = (long *)(lVar4 + 0x10);
          plVar7 = (long *)*plVar2;
        } while (*plVar7 != lVar4);
        goto LAB_0082e668;
      }
      plVar7 = plVar3;
    } while (plVar3 != plVar5);
  }
  return iVar6;
}


