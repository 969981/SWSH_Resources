/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e6190; name: FUN_004e6190
 */


undefined8 FUN_004e6190(undefined8 param_1,void *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar4 = PTR_DAT_02712de0;
  uVar8 = *(undefined8 *)PTR_DAT_02712de0;
  uVar5 = FUN_00435950();
  uVar6 = FUN_00435900();
  lVar7 = FUN_004361b0(uVar8,0x36,param_3 * 0x10 + (uVar5 & 0xffff) + (uVar6 & 0xffff) + -0x10);
  *(undefined4 *)(lVar7 + 4) = 6;
  *(undefined8 *)(lVar7 + 8) = param_1;
  *(int *)(lVar7 + 0x10) = param_3;
  memcpy((void *)(lVar7 + 0x14),param_2,(ulong)(uint)(param_3 * 0x10));
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


