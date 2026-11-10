/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d1d30; name: FUN_006d1d30
 */


bool FUN_006d1d30(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  
  if (*(long *)(param_1 + 0x60) == *(long *)(param_1 + 0x68)) {
    return true;
  }
  piVar1 = (int *)(param_1 + 0x140);
  iVar6 = *piVar1;
  iVar5 = *(int *)(param_1 + 0x140) + 1;
  if (iVar6 == *(int *)(param_1 + 0x140)) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
LAB_006d1db4:
      return *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60) >> 3 == (long)iVar5;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    iVar2 = *piVar1;
    iVar5 = iVar6 + 1;
    if (iVar2 == iVar6) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_006d1db4;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar6 = iVar2;
  } while( true );
}


