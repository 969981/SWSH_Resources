/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ffa60; name: FUN_003ffa60
 */


undefined8 FUN_003ffa60(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  
  piVar1 = (int *)(param_1 + 1);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 != 0) {
    if (*piVar1 == 0) goto LAB_003ffa94;
    do {
      do {
      } while (*piVar1 != 0);
LAB_003ffa94:
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    } while (iVar2 != 0);
  }
  uVar5 = *param_1;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return uVar5;
}


