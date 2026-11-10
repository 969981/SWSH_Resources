/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e65730; name: FUN_00e65730
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e65730(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  plVar6 = *(long **)(param_1 + 0x3a0);
  if (plVar6 == (long *)0x0) {
    _DAT_00000144 = *(undefined4 *)(param_1 + 0x3d8);
  }
  else {
    lVar7 = plVar6[0xb];
    if (*(long *)(lVar7 + 0x58) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x60))();
      *(undefined8 *)(lVar7 + 0x58) = uVar5;
    }
    piVar1 = (int *)(lVar7 + 0x54);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)((long)plVar6 + 0x144) = *(undefined4 *)(param_1 + 0x3d8);
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0x54);
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
      *(undefined8 *)(lVar7 + 0x60) = 0;
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  auVar9 = FUN_00a92cd0(0,0,*(undefined4 *)(param_1 + 0x3d8));
  plVar6 = *(long **)(param_1 + 0x3a0);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar9;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x3b8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x3b0);
  *(undefined1 *)(param_1 + 0xc0) = 1;
  if (plVar6 == (long *)0x0) {
    plVar6 = *(long **)(param_1 + 0x3a0);
    _DAT_000000f0 = *(undefined8 *)(param_1 + 0x3b0);
    _DAT_000000f8 = *(undefined8 *)(param_1 + 0x3b8);
  }
  else {
    lVar7 = plVar6[0xb];
    if (*(long *)(lVar7 + 0x58) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x60))();
      *(undefined8 *)(lVar7 + 0x58) = uVar5;
    }
    piVar1 = (int *)(lVar7 + 0x54);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar8 = *(long *)(param_1 + 0x3b0);
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0x54);
    plVar6[0x1f] = *(long *)(param_1 + 0x3b8);
    plVar6[0x1e] = lVar8;
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
      *(undefined8 *)(lVar7 + 0x60) = 0;
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    plVar6 = *(long **)(param_1 + 0x3a0);
  }
  if (plVar6 == (long *)0x0) {
    _DAT_000000e8 = *(undefined8 *)(param_1 + 0x3c8);
    _DAT_000000e0 = *(undefined8 *)(param_1 + 0x3c0);
  }
  else {
    lVar7 = plVar6[0xb];
    if (*(long *)(lVar7 + 0x58) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x60))();
      *(undefined8 *)(lVar7 + 0x58) = uVar5;
    }
    piVar1 = (int *)(lVar7 + 0x54);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar8 = *(long *)(param_1 + 0x3c0);
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0x54);
    plVar6[0x1d] = *(long *)(param_1 + 0x3c8);
    plVar6[0x1c] = lVar8;
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
      *(undefined8 *)(lVar7 + 0x60) = 0;
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x3a0) + 0xa0) + 0xd0) =
       *(undefined4 *)(param_1 + 0x3dc);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x3a0) + 0xa0) + 0xd4) =
       *(undefined4 *)(param_1 + 0x3e0);
  return;
}


