/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01068110; name: FUN_01068110
 */


void FUN_01068110(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  
  *param_1 = (long)(PTR_DAT_02723b38 + 0x10);
  plVar5 = (long *)param_1[0x32];
  param_1[0x32] = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0x54);
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
      *(undefined8 *)(lVar6 + 0x60) = 0;
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  lVar6 = param_1[0x31];
  param_1[0x31] = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  lVar6 = param_1[0x30];
  param_1[0x30] = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  lVar6 = param_1[0x2f];
  param_1[0x2f] = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  lVar6 = param_1[0x2e];
  param_1[0x2e] = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  lVar6 = param_1[0x2c];
  param_1[0x2c] = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  lVar6 = param_1[0x2d];
  param_1[0x2d] = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  if (param_1[0x2b] != 0) {
    (**(code **)(*(long *)(param_1[0x2b] + 0x48) + 0x18))();
    param_1[0x2b] = 0;
  }
  if (param_1[0x2a] != 0) {
    (**(code **)(*(long *)(param_1[0x2a] + 0x48) + 0x18))();
    param_1[0x2a] = 0;
  }
  if (param_1[5] != 0) {
    (**(code **)(*(long *)(param_1[5] + 0x48) + 0x18))();
    param_1[5] = 0;
  }
  if (param_1[4] != 0) {
    (**(code **)(*(long *)(param_1[4] + 0x48) + 0x18))();
    param_1[4] = 0;
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    param_1[2] = 0;
  }
  if (param_1[0x28] != 0) {
    (**(code **)(*(long *)(param_1[0x28] + 0x48) + 0x18))();
    param_1[0x28] = 0;
  }
  if (param_1[0x29] != 0) {
    (**(code **)(*(long *)(param_1[0x29] + 0x48) + 0x18))();
    param_1[0x29] = 0;
  }
  FUN_01058eb0(param_1 + 0x33);
  plVar5 = (long *)param_1[0x32];
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0x54);
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
      *(undefined8 *)(lVar6 + 0x60) = 0;
      (**(code **)(*plVar5 + 0x18))();
    }
    param_1[0x32] = 0;
  }
  if (param_1[0x31] != 0) {
    (**(code **)(*(long *)(param_1[0x31] + 0x48) + 0x18))();
    param_1[0x31] = 0;
  }
  if (param_1[0x30] != 0) {
    (**(code **)(*(long *)(param_1[0x30] + 0x48) + 0x18))();
    param_1[0x30] = 0;
  }
  if (param_1[0x2f] != 0) {
    (**(code **)(*(long *)(param_1[0x2f] + 0x48) + 0x18))();
    param_1[0x2f] = 0;
  }
  if (param_1[0x2e] != 0) {
    (**(code **)(*(long *)(param_1[0x2e] + 0x48) + 0x18))();
    param_1[0x2e] = 0;
  }
  if (param_1[0x2d] != 0) {
    (**(code **)(*(long *)(param_1[0x2d] + 0x48) + 0x18))();
    param_1[0x2d] = 0;
  }
  if (param_1[0x2c] != 0) {
    (**(code **)(*(long *)(param_1[0x2c] + 0x48) + 0x18))();
    param_1[0x2c] = 0;
  }
  if (param_1[0x2b] != 0) {
    (**(code **)(*(long *)(param_1[0x2b] + 0x48) + 0x18))();
    param_1[0x2b] = 0;
  }
  if (param_1[0x2a] != 0) {
    (**(code **)(*(long *)(param_1[0x2a] + 0x48) + 0x18))();
    param_1[0x2a] = 0;
  }
  if (param_1[0x29] != 0) {
    (**(code **)(*(long *)(param_1[0x29] + 0x48) + 0x18))();
    param_1[0x29] = 0;
  }
  if (param_1[0x28] != 0) {
    (**(code **)(*(long *)(param_1[0x28] + 0x48) + 0x18))();
    param_1[0x28] = 0;
  }
  param_1[6] = (long)(PTR_DAT_02710800 + 0x10);
  if (param_1[7] == 0) {
    param_1[7] = 0;
    pcVar7 = (code *)param_1[0x19];
  }
  else {
    FUN_006e2100();
    lVar6 = param_1[7];
    param_1[7] = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    pcVar7 = (code *)param_1[0x19];
  }
  if (pcVar7 != (code *)0x0) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    (*pcVar7)(param_1 + 0x1c);
  }
  pcVar7 = (code *)param_1[9];
  if (pcVar7 != (code *)0x0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    (*pcVar7)(param_1 + 0xc);
  }
  if (param_1[7] != 0) {
    (**(code **)(*(long *)(param_1[7] + 0x48) + 0x18))();
    param_1[7] = 0;
  }
  if (param_1[5] != 0) {
    (**(code **)(*(long *)(param_1[5] + 0x48) + 0x18))();
    param_1[5] = 0;
  }
  if (param_1[4] != 0) {
    (**(code **)(*(long *)(param_1[4] + 0x48) + 0x18))();
    param_1[4] = 0;
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    param_1[2] = 0;
  }
  return;
}


