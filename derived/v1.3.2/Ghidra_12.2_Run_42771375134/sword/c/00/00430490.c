/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00430490; name: FUN_00430490
 */


undefined8 FUN_00430490(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined2 uVar5;
  long lVar6;
  
  uVar5 = FUN_004358b0();
  puVar4 = PTR_DAT_02712de0;
  lVar6 = FUN_004361b0(*(undefined8 *)PTR_DAT_02712de0,8,uVar5);
  *(undefined8 *)(lVar6 + 4) = param_3;
  *(undefined4 *)(lVar6 + 0xc) = param_1;
  *(undefined4 *)(lVar6 + 0x10) = param_2;
  piVar1 = (int *)(*(long *)puVar4 + 0x94);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return 1;
}


