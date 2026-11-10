/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043ce10; name: FUN_0043ce10
 */


void FUN_0043ce10(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = FUN_004361b0(*(undefined8 *)PTR_DAT_02712de0,0x35,0x14);
  *(undefined8 *)(lVar4 + 4) = *param_2;
  *(undefined8 *)(lVar4 + 0xc) = param_2[1];
  piVar1 = (int *)(param_1 + 0x94);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


