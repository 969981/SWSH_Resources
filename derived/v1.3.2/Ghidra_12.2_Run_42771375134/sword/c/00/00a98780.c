/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a98780; name: FUN_00a98780
 */


void FUN_00a98780(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  piVar1 = (int *)(lVar5 + 0x54);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 == 0) {
    *(undefined8 *)(lVar5 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00a987b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + -0x48) + 0x18))();
    return;
  }
  return;
}


