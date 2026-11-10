/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d1dd0; name: FUN_006d1dd0
 */


void FUN_006d1dd0(long param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  
  if (*(long *)(param_1 + 0x60) == *(long *)(param_1 + 0x68)) {
LAB_006d1e74:
    FUN_006d2060(param_1 + 0x168,param_2);
    puVar2 = *(undefined8 **)(param_1 + 0x98);
    for (puVar8 = *(undefined8 **)(param_1 + 0x90); puVar8 != puVar2; puVar8 = puVar8 + 1) {
      (**(code **)(*(long *)*puVar8 + 0x38))((long *)*puVar8,param_2);
    }
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 8);
    FUN_006d2060(param_1 + 0x1f8,param_2);
    return;
  }
  piVar1 = (int *)(param_1 + 0x140);
  iVar7 = *piVar1;
  iVar6 = *(int *)(param_1 + 0x140) + 1;
  if (iVar7 == *(int *)(param_1 + 0x140)) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
LAB_006d1e64:
      if (*(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60) >> 3 != (long)iVar6) {
        return;
      }
      goto LAB_006d1e74;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    iVar3 = *piVar1;
    iVar6 = iVar7 + 1;
    if (iVar3 == iVar7) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_006d1e64;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar7 = iVar3;
  } while( true );
}


