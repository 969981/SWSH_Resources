/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005cf890; name: FUN_005cf890
 */


int FUN_005cf890(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  plVar1 = param_1 + 2;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    plVar1 = (long *)param_1[1];
    (**(code **)*param_1)(param_1);
    if ((plVar1 != (long *)0x0) && (plVar1 != param_1)) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,param_1,"../../../../Include\\SiCore/SiCore_Reflection.h",0x2db);
    }
  }
  return iVar4;
}


