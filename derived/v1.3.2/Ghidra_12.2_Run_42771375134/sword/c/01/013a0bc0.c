/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013a0bc0; name: FUN_013a0bc0
 */


void FUN_013a0bc0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  
  puVar1 = PTR_DAT_02728dc8 + 0xb8;
  puVar2 = PTR_DAT_02728dc8 + 0x128;
  *param_1 = (long)(PTR_DAT_02728dc8 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xbe] != 0) {
    FUN_00794740();
  }
  if (param_1[0xbd] != 0) {
    FUN_00794740();
  }
  if (param_1[0xbf] != 0) {
    FUN_00794740();
  }
  if (param_1[0xc0] != 0) {
    FUN_00794740();
  }
  pcVar8 = (code *)param_1[0x1f7];
  if (pcVar8 != (code *)0x0) {
    param_1[0x1f9] = 0;
    param_1[0x1f8] = 0;
    param_1[0x1f7] = 0;
    param_1[0x1f6] = 0;
    (*pcVar8)(param_1 + 0x1fa);
  }
  pcVar8 = (code *)param_1[0x1e5];
  if (pcVar8 != (code *)0x0) {
    param_1[0x1e7] = 0;
    param_1[0x1e6] = 0;
    param_1[0x1e5] = 0;
    param_1[0x1e4] = 0;
    (*pcVar8)(param_1 + 0x1e8);
  }
  if (param_1[0x1e3] != 0) {
    (**(code **)(*(long *)(param_1[0x1e3] + 0x48) + 0x18))();
    param_1[0x1e3] = 0;
  }
  FUN_015661e0(param_1 + 0x15c);
  pcVar8 = (code *)param_1[0x14d];
  if (pcVar8 != (code *)0x0) {
    param_1[0x14f] = 0;
    param_1[0x14e] = 0;
    param_1[0x14d] = 0;
    param_1[0x14c] = 0;
    (*pcVar8)(param_1 + 0x150);
  }
  pcVar8 = (code *)param_1[0x13d];
  if (pcVar8 != (code *)0x0) {
    param_1[0x13e] = 0;
    param_1[0x13f] = 0;
    param_1[0x13c] = 0;
    param_1[0x13d] = 0;
    (*pcVar8)(param_1 + 0x140);
  }
  pcVar8 = (code *)param_1[0x12d];
  if (pcVar8 != (code *)0x0) {
    param_1[0x12f] = 0;
    param_1[0x12e] = 0;
    param_1[0x12d] = 0;
    param_1[300] = 0;
    (*pcVar8)(param_1 + 0x130);
  }
  pcVar8 = (code *)param_1[0x11d];
  if (pcVar8 != (code *)0x0) {
    param_1[0x11f] = 0;
    param_1[0x11e] = 0;
    param_1[0x11d] = 0;
    param_1[0x11c] = 0;
    (*pcVar8)(param_1 + 0x120);
  }
  pcVar8 = (code *)param_1[0x10b];
  if (pcVar8 != (code *)0x0) {
    param_1[0x10d] = 0;
    param_1[0x10c] = 0;
    param_1[0x10b] = 0;
    param_1[0x10a] = 0;
    (*pcVar8)(param_1 + 0x10e);
  }
  if (param_1[0x108] != 0) {
    (**(code **)(*(long *)(param_1[0x108] + 0x48) + 0x18))();
    param_1[0x108] = 0;
  }
  plVar7 = (long *)param_1[0x107];
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[0xb];
    piVar3 = (int *)(lVar9 + 0x54);
    do {
      iVar4 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x60) = 0;
      (**(code **)(*plVar7 + 0x18))();
    }
    param_1[0x107] = 0;
  }
  plVar7 = (long *)param_1[0x106];
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[0xb];
    piVar3 = (int *)(lVar9 + 0x54);
    do {
      iVar4 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x60) = 0;
      (**(code **)(*plVar7 + 0x18))();
    }
    param_1[0x106] = 0;
  }
  FUN_013a0ec0(param_1 + 0xc2);
  if (param_1[0xc1] != 0) {
    (**(code **)(*(long *)(param_1[0xc1] + 0x48) + 0x18))();
    param_1[0xc1] = 0;
  }
  if (param_1[0xc0] != 0) {
    (**(code **)(*(long *)(param_1[0xc0] + 0x48) + 0x18))();
    param_1[0xc0] = 0;
  }
  if (param_1[0xbf] != 0) {
    (**(code **)(*(long *)(param_1[0xbf] + 0x48) + 0x18))();
    param_1[0xbf] = 0;
  }
  if (param_1[0xbe] != 0) {
    (**(code **)(*(long *)(param_1[0xbe] + 0x48) + 0x18))();
    param_1[0xbe] = 0;
  }
  if (param_1[0xbd] != 0) {
    (**(code **)(*(long *)(param_1[0xbd] + 0x48) + 0x18))();
    param_1[0xbd] = 0;
  }
  if (param_1[0xbc] != 0) {
    (**(code **)(*(long *)(param_1[0xbc] + 0x48) + 0x18))();
    param_1[0xbc] = 0;
  }
  FUN_01377390(param_1 + 0x12);
  puVar1 = PTR_DAT_02715098 + 0x90;
  puVar2 = PTR_DAT_02715098 + 0x100;
  *param_1 = (long)(PTR_DAT_02715098 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    param_1[0xd] = 0;
  }
  puVar1 = PTR_DAT_027150a0 + 0x50;
  puVar2 = PTR_DAT_027150a0 + 0xc0;
  *param_1 = (long)(PTR_DAT_027150a0 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


