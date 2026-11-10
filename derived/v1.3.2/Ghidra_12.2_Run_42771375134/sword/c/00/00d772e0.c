/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d772e0; name: FUN_00d772e0
 */


void FUN_00d772e0(long *param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_0271e338 + 0x170;
  *param_1 = (long)(PTR_DAT_0271e338 + 0x10);
  param_1[9] = (long)puVar1;
  FUN_00c78360(param_1 + 0x29);
  FUN_00c78360(param_1 + 0x26);
  if (param_1[0x24] != 0) {
    (**(code **)(*(long *)(param_1[0x24] + 0x48) + 0x18))();
    param_1[0x24] = 0;
  }
  if (param_1[0x22] != 0) {
    (**(code **)(*(long *)(param_1[0x22] + 0x48) + 0x18))();
    param_1[0x22] = 0;
  }
  if (param_1[0x21] != 0) {
    (**(code **)(*(long *)(param_1[0x21] + 0x48) + 0x18))();
    param_1[0x21] = 0;
  }
  plVar6 = (long *)param_1[0x20];
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar2 = (int *)(lVar7 + 0x54);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x60) = 0;
      (**(code **)(*plVar6 + 0x18))();
    }
    param_1[0x20] = 0;
  }
  if (param_1[0x1f] != 0) {
    (**(code **)(*(long *)(param_1[0x1f] + 0x48) + 0x18))();
    param_1[0x1f] = 0;
  }
  if (param_1[0x1e] != 0) {
    (**(code **)(*(long *)(param_1[0x1e] + 0x48) + 0x18))();
    param_1[0x1e] = 0;
  }
  return;
}


