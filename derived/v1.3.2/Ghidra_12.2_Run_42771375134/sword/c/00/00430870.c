/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00430870; name: FUN_00430870
 */


undefined8 FUN_00430870(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined2 uVar6;
  long lVar7;
  
  uVar6 = FUN_004358a0();
  puVar5 = PTR_DAT_02712de0;
  lVar7 = FUN_004361b0(*(undefined8 *)PTR_DAT_02712de0,7,uVar6);
  iVar2 = 0;
  if (param_2 != 0x2ca33bdb) {
    iVar2 = param_2;
  }
  *(undefined4 *)(lVar7 + 4) = param_1;
  *(int *)(lVar7 + 8) = iVar2;
  *(undefined4 *)(lVar7 + 0xc) = 0;
  piVar1 = (int *)(*(long *)puVar5 + 0x94);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return 1;
}


