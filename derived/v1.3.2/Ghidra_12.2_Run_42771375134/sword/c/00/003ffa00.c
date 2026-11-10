/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ffa00; name: FUN_003ffa00
 */


long FUN_003ffa00(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((int)lVar4 != 0) {
    if ((int)*plVar1 == 0) goto LAB_003ffa30;
    do {
      do {
      } while ((int)*plVar1 != 0);
LAB_003ffa30:
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    } while ((int)lVar4 != 0);
  }
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    *param_1 = *plVar5;
  }
  *(int *)plVar1 = 0;
  return (long)plVar5;
}


