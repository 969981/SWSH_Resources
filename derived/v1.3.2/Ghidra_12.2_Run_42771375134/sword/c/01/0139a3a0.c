/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0139a3a0; name: FUN_0139a3a0
 */


void * FUN_0139a3a0(void *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  
  memcpy(param_1,param_2,0x2a4);
  lVar10 = *(long *)((long)param_2 + 0x2b0);
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar10 + 0x58);
    if (*(long *)(lVar11 + 0x58) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x60))();
      *(undefined8 *)(lVar11 + 0x58) = uVar7;
    }
    piVar1 = (int *)(lVar11 + 0x54);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar8 = *(long **)((long)param_1 + 0x2b0);
  *(long *)((long)param_1 + 0x2b0) = lVar10;
  if (plVar8 != (long *)0x0) {
    lVar10 = plVar8[0xb];
    piVar1 = (int *)(lVar10 + 0x54);
    do {
      iVar2 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x60) = 0;
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  uVar7 = *(undefined8 *)((long)param_2 + 0x2b8);
  *(undefined8 *)((long)param_1 + 0x2c0) = *(undefined8 *)((long)param_2 + 0x2c0);
  *(undefined8 *)((long)param_1 + 0x2b8) = uVar7;
  lVar10 = *(long *)((long)param_2 + 0x2d8);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)((long)param_1 + 0x2d8);
  *(long *)((long)param_1 + 0x2d8) = lVar10;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
  }
  pcVar9 = *(code **)((long)param_1 + 0x2e8);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)((long)param_1 + 0x2f0) = 0;
    *(undefined8 *)((long)param_1 + 0x2f8) = 0;
    *(undefined8 *)((long)param_1 + 0x2e0) = 0;
    *(undefined8 *)((long)param_1 + 0x2e8) = 0;
    (*pcVar9)((long)param_1 + 0x300);
  }
  if (*(code **)((long)param_2 + 0x2f0) != (code *)0x0) {
    (**(code **)((long)param_2 + 0x2f0))((long)param_2 + 0x300,(long)param_1 + 0x300);
    uVar7 = *(undefined8 *)((long)param_2 + 0x2e0);
    uVar3 = *(undefined8 *)((long)param_2 + 0x2e8);
    uVar4 = *(undefined8 *)((long)param_2 + 0x2f8);
    *(undefined8 *)((long)param_1 + 0x2f0) = *(undefined8 *)((long)param_2 + 0x2f0);
    *(undefined8 *)((long)param_1 + 0x2f8) = uVar4;
    *(undefined8 *)((long)param_1 + 0x2e0) = uVar7;
    *(undefined8 *)((long)param_1 + 0x2e8) = uVar3;
  }
  pcVar9 = *(code **)((long)param_1 + 0x368);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)((long)param_1 + 0x370) = 0;
    *(undefined8 *)((long)param_1 + 0x378) = 0;
    *(undefined8 *)((long)param_1 + 0x360) = 0;
    *(undefined8 *)((long)param_1 + 0x368) = 0;
    (*pcVar9)((long)param_1 + 0x380);
  }
  if (*(code **)((long)param_2 + 0x370) != (code *)0x0) {
    (**(code **)((long)param_2 + 0x370))((long)param_2 + 0x380,(long)param_1 + 0x380);
    uVar7 = *(undefined8 *)((long)param_2 + 0x360);
    uVar3 = *(undefined8 *)((long)param_2 + 0x368);
    uVar4 = *(undefined8 *)((long)param_2 + 0x378);
    *(undefined8 *)((long)param_1 + 0x370) = *(undefined8 *)((long)param_2 + 0x370);
    *(undefined8 *)((long)param_1 + 0x378) = uVar4;
    *(undefined8 *)((long)param_1 + 0x360) = uVar7;
    *(undefined8 *)((long)param_1 + 0x368) = uVar3;
  }
  lVar10 = *(long *)((long)param_2 + 0x3e0);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)((long)param_1 + 0x3e0);
  *(long *)((long)param_1 + 0x3e0) = lVar10;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
  }
  lVar10 = *(long *)((long)param_2 + 0x3f8);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)((long)param_1 + 0x3f8);
  *(long *)((long)param_1 + 0x3f8) = lVar10;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
  }
  pcVar9 = *(code **)((long)param_1 + 0x408);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)((long)param_1 + 0x410) = 0;
    *(undefined8 *)((long)param_1 + 0x418) = 0;
    *(undefined8 *)((long)param_1 + 0x400) = 0;
    *(undefined8 *)((long)param_1 + 0x408) = 0;
    (*pcVar9)((long)param_1 + 0x420);
  }
  if (*(code **)((long)param_2 + 0x410) != (code *)0x0) {
    (**(code **)((long)param_2 + 0x410))((long)param_2 + 0x420,(long)param_1 + 0x420);
    uVar7 = *(undefined8 *)((long)param_2 + 0x400);
    uVar3 = *(undefined8 *)((long)param_2 + 0x408);
    uVar4 = *(undefined8 *)((long)param_2 + 0x418);
    *(undefined8 *)((long)param_1 + 0x410) = *(undefined8 *)((long)param_2 + 0x410);
    *(undefined8 *)((long)param_1 + 0x418) = uVar4;
    *(undefined8 *)((long)param_1 + 0x400) = uVar7;
    *(undefined8 *)((long)param_1 + 0x408) = uVar3;
  }
  pcVar9 = *(code **)((long)param_1 + 0x488);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)((long)param_1 + 0x490) = 0;
    *(undefined8 *)((long)param_1 + 0x498) = 0;
    *(undefined8 *)((long)param_1 + 0x480) = 0;
    *(undefined8 *)((long)param_1 + 0x488) = 0;
    (*pcVar9)((long)param_1 + 0x4a0);
  }
  if (*(code **)((long)param_2 + 0x490) != (code *)0x0) {
    (**(code **)((long)param_2 + 0x490))((long)param_2 + 0x4a0,(long)param_1 + 0x4a0);
    uVar7 = *(undefined8 *)((long)param_2 + 0x480);
    uVar3 = *(undefined8 *)((long)param_2 + 0x488);
    uVar4 = *(undefined8 *)((long)param_2 + 0x498);
    *(undefined8 *)((long)param_1 + 0x490) = *(undefined8 *)((long)param_2 + 0x490);
    *(undefined8 *)((long)param_1 + 0x498) = uVar4;
    *(undefined8 *)((long)param_1 + 0x480) = uVar7;
    *(undefined8 *)((long)param_1 + 0x488) = uVar3;
  }
  lVar10 = *(long *)((long)param_2 + 0x508);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)((long)param_1 + 0x508);
  *(long *)((long)param_1 + 0x508) = lVar10;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
  }
  pcVar9 = *(code **)((long)param_1 + 0x518);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)((long)param_1 + 0x520) = 0;
    *(undefined8 *)((long)param_1 + 0x528) = 0;
    *(undefined8 *)((long)param_1 + 0x510) = 0;
    *(undefined8 *)((long)param_1 + 0x518) = 0;
    (*pcVar9)((long)param_1 + 0x530);
  }
  if (*(code **)((long)param_2 + 0x520) != (code *)0x0) {
    (**(code **)((long)param_2 + 0x520))((long)param_2 + 0x530,(long)param_1 + 0x530);
    uVar7 = *(undefined8 *)((long)param_2 + 0x510);
    uVar3 = *(undefined8 *)((long)param_2 + 0x518);
    uVar4 = *(undefined8 *)((long)param_2 + 0x528);
    *(undefined8 *)((long)param_1 + 0x520) = *(undefined8 *)((long)param_2 + 0x520);
    *(undefined8 *)((long)param_1 + 0x528) = uVar4;
    *(undefined8 *)((long)param_1 + 0x510) = uVar7;
    *(undefined8 *)((long)param_1 + 0x518) = uVar3;
  }
  pcVar9 = *(code **)((long)param_1 + 0x598);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)((long)param_1 + 0x5a0) = 0;
    *(undefined8 *)((long)param_1 + 0x5a8) = 0;
    *(undefined8 *)((long)param_1 + 0x590) = 0;
    *(undefined8 *)((long)param_1 + 0x598) = 0;
    (*pcVar9)((long)param_1 + 0x5b0);
  }
  if (*(code **)((long)param_2 + 0x5a0) != (code *)0x0) {
    (**(code **)((long)param_2 + 0x5a0))((long)param_2 + 0x5b0,(long)param_1 + 0x5b0);
    uVar7 = *(undefined8 *)((long)param_2 + 0x590);
    uVar3 = *(undefined8 *)((long)param_2 + 0x598);
    uVar4 = *(undefined8 *)((long)param_2 + 0x5a8);
    *(undefined8 *)((long)param_1 + 0x5a0) = *(undefined8 *)((long)param_2 + 0x5a0);
    *(undefined8 *)((long)param_1 + 0x5a8) = uVar4;
    *(undefined8 *)((long)param_1 + 0x590) = uVar7;
    *(undefined8 *)((long)param_1 + 0x598) = uVar3;
  }
  lVar10 = *(long *)((long)param_2 + 0x610);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)((long)param_1 + 0x610);
  *(long *)((long)param_1 + 0x610) = lVar10;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
  }
  return param_1;
}


