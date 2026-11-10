/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e5bb0; name: FUN_004e5bb0
 */


undefined8 FUN_004e5bb0(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar4 = PTR_DAT_02712de0;
  uVar7 = *(undefined8 *)PTR_DAT_02712de0;
  uVar5 = FUN_00435950();
  lVar6 = FUN_004361b0(uVar7,0x36,(uVar5 & 0xffff) + 8);
  *(undefined4 *)(lVar6 + 4) = 2;
  *(undefined8 *)(lVar6 + 8) = param_1;
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


