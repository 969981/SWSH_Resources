/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00829d00; name: FUN_00829d00
 */


void FUN_00829d00(undefined8 param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_2;
  while (plVar4 != param_2 + 1) {
    FUN_00829da0(param_1,*(undefined4 *)(plVar4 + 4),plVar4 + 5);
    plVar2 = (long *)plVar4[1];
    if ((long *)plVar4[1] == (long *)0x0) {
      plVar2 = plVar4 + 2;
      bVar1 = (long *)*(long *)*plVar2 != plVar4;
      plVar4 = (long *)*plVar2;
      if (bVar1) {
        do {
          lVar3 = *plVar2;
          plVar2 = (long *)(lVar3 + 0x10);
          plVar4 = (long *)*plVar2;
        } while (*plVar4 != lVar3);
      }
    }
    else {
      do {
        plVar4 = plVar2;
        plVar2 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return;
}


