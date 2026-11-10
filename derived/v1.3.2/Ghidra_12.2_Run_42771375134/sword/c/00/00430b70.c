/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00430b70; name: FUN_00430b70
 */


undefined8 FUN_00430b70(undefined8 param_1,void *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  
  uVar5 = FUN_00435900();
  puVar4 = PTR_DAT_02712de0;
  lVar6 = FUN_004361b0(*(undefined8 *)PTR_DAT_02712de0,0x13,
                       param_3 * 0x10 + (uVar5 & 0xffff) + -0x10);
  *(undefined8 *)(lVar6 + 4) = param_1;
  *(int *)(lVar6 + 0xc) = param_3;
  memcpy((void *)(lVar6 + 0x10),param_2,(ulong)(uint)(param_3 * 0x10));
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


