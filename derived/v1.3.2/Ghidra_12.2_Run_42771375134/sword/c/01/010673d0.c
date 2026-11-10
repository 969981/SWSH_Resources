/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010673d0; name: FUN_010673d0
 */


void FUN_010673d0(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(long *)(param_2 + 0x58) == 0) {
    *param_1 = 0;
    return;
  }
  lVar5 = *(long *)(*(long *)(param_2 + 0x58) + 400);
  *param_1 = lVar5;
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x58);
    if (*(long *)(lVar5 + 0x58) == 0) {
      uVar4 = (**(code **)**(undefined8 **)(lVar5 + 0x60))();
      *(undefined8 *)(lVar5 + 0x58) = uVar4;
    }
    piVar1 = (int *)(lVar5 + 0x54);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


