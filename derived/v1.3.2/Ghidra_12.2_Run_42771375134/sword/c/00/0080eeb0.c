/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080eeb0; name: FUN_0080eeb0
 */


void FUN_0080eeb0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  
  if ((param_1[6] != 0) && ((code *)param_1[0x10] != (code *)0x0)) {
    (*(code *)param_1[0x10])(0,0x18);
  }
  lVar5 = tpidr_el0;
  if ((((*(long *)(lVar5 + 0x10) == *param_1) &&
       (plVar4 = *(long **)(lVar5 + 0x18), plVar4 != (long *)0x0)) ||
      ((plVar4 = (long *)param_1[2], plVar4 != (long *)0x0 && (*plVar4 == lVar5 + 0x10)))) &&
     (lVar5 = plVar4[2], 0x17 < (ulong)(plVar4[3] - lVar5))) {
    puVar3 = (undefined8 *)((long)plVar4 + lVar5);
    plVar4[2] = lVar5 + 0x18;
  }
  else {
    puVar3 = (undefined8 *)FUN_0080f090(param_1,0x18);
  }
  *puVar3 = param_2;
  puVar3[1] = param_3;
  param_1 = param_1 + 3;
  do {
    lVar5 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = (long)puVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puVar3[2] = lVar5;
  return;
}


