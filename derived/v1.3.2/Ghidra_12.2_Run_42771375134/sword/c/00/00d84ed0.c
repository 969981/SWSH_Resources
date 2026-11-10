/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d84ed0; name: FUN_00d84ed0
 */


void FUN_00d84ed0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long local_48 [3];
  long local_28;
  
  local_48[2] = 0;
  local_48[1] = 0;
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
  if (lVar5 == 0) {
    FUN_0101cb00(0,local_48 + 1);
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_0101cb00(lVar5,local_48 + 1);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  FUN_00a90940(&local_28,*(undefined8 *)(param_1 + 8));
  plVar6 = *(long **)(param_1 + 0x100);
  if (plVar6 != (long *)0x0) {
    lVar5 = plVar6[0xb];
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
      (**(code **)(*plVar6 + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  *(long *)(param_1 + 0x100) = local_28;
  local_48[0] = local_28;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  FUN_01025970(local_48,local_48 + 1);
  if (local_48[0] != 0) {
    (**(code **)(*(long *)(local_48[0] + 0x48) + 0x18))();
  }
  return;
}


