/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00430040; name: FUN_00430040
 */


undefined8 FUN_00430040(undefined8 param_1,long param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  uint uVar7;
  
  puVar5 = PTR_DAT_02712de0;
  if (*(uint *)(*(long *)PTR_DAT_02712de0 + 0x20) < (param_3 * 8 + 0x1c & 0xfffc)) {
    return 0x1f;
  }
  lVar6 = FUN_004361b0(*(long *)PTR_DAT_02712de0,0xe);
  if (lVar6 == 0) {
    return 0x1f;
  }
  *(undefined4 *)(lVar6 + 0xc) = 0;
  *(undefined8 *)(lVar6 + 4) = param_1;
  *(uint *)(lVar6 + 0x10) = param_3;
  if (param_3 != 0) {
    uVar7 = 0;
    do {
      uVar2 = uVar7 & 0xffff;
      uVar7 = uVar7 + 1;
      *(undefined8 *)((undefined4 *)(lVar6 + 0xc) + (ulong)uVar2 * 2 + 2) =
           *(undefined8 *)(param_2 + (ulong)uVar2 * 8);
    } while ((uVar7 & 0xffff) < param_3);
  }
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


