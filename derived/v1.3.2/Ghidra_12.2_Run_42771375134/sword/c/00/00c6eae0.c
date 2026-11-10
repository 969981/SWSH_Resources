/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6eae0; name: FUN_00c6eae0
 */


undefined8 FUN_00c6eae0(long *param_1)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  int iVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  FUN_00c6f2a0(param_1,0);
  FUN_00c6f2a0(param_1,1);
  FUN_00c6f2a0(param_1,2);
  FUN_00c6f2a0(param_1,3);
  FUN_00c6f2a0(param_1,4);
  FUN_00c6f2a0(param_1,5);
  uVar7 = (**(code **)(*param_1 + 0x78))(param_1);
  if ((uVar7 & 1) != 0) {
    return 1;
  }
  if (*(int *)((long)param_1 + 0x94) != 5) {
    return 0;
  }
  if (param_1[0x26] != 0) {
    (**(code **)(*(long *)(param_1[0x26] + 0x48) + 0x18))();
    lVar9 = param_1[0x21];
    param_1[0x26] = 0;
    puVar5 = PTR_DAT_02715078;
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x54) == 0) {
LAB_00c6ec60:
        FUN_00c73bc0(0,auStack_40);
        goto LAB_00c6eca4;
      }
      piVar1 = (int *)(lVar9 + 0x54);
      puVar10 = PTR_DAT_02715080;
      iVar11 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar12 = *(long **)(lVar9 + 0x58);
          if (((*puVar5 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(puVar5), puVar10 = PTR_DAT_02715080, iVar6 != 0)) {
            uVar8 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar8;
            __cxa_guard_release(puVar5);
            puVar10 = PTR_DAT_02715080;
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_00c6ec60;
            if (plVar12 == (long *)puVar10) break;
            plVar12 = (long *)*plVar12;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar11) break;
          ClearExclusiveLocal();
          iVar11 = iVar6;
          if (iVar6 == 0) goto LAB_00c6ec84;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar2 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar2 = *(long *)(lVar9 + 0x60) + -0x50;
          }
          FUN_00c73bc0(lVar2,auStack_40);
          if (lVar2 != 0) {
            (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
          }
          goto LAB_00c6eca4;
        }
        iVar11 = iVar6;
      } while (iVar6 != 0);
    }
LAB_00c6ec84:
    FUN_00c73bc0(0,auStack_40);
  }
LAB_00c6eca4:
  puVar13 = (undefined8 *)param_1[0x29];
  param_1[0x29] = 0;
  if (puVar13 != (undefined8 *)0x0) {
    (**(code **)*puVar13)(puVar13);
    (**(code **)(*(long *)param_1[0x2a] + 0x18))
              ((long *)param_1[0x2a],puVar13,param_1[0x2b],param_1[0x2c]);
  }
  puVar5 = PTR_DAT_02715078;
  lVar9 = param_1[0x21];
  if (lVar9 == 0) {
LAB_00c6ede0:
    FUN_00c73ee0(0,auStack_38);
  }
  else {
    if (*(int *)(lVar9 + 0x54) != 0) {
      piVar1 = (int *)(lVar9 + 0x54);
      puVar10 = PTR_DAT_02715080;
      iVar11 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar12 = *(long **)(lVar9 + 0x58);
          if (((*puVar5 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(puVar5), puVar10 = PTR_DAT_02715080, iVar6 != 0)) {
            uVar8 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar8;
            __cxa_guard_release(puVar5);
            puVar10 = PTR_DAT_02715080;
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_00c6edc4;
            if (plVar12 == (long *)puVar10) break;
            plVar12 = (long *)*plVar12;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar11) break;
          ClearExclusiveLocal();
          iVar11 = iVar6;
          if (iVar6 == 0) goto LAB_00c6ede0;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar2 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar2 = *(long *)(lVar9 + 0x60) + -0x50;
          }
          FUN_00c73ee0(lVar2,auStack_38);
          if (lVar2 != 0) {
            (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
          }
          goto LAB_00c6ee00;
        }
        iVar11 = iVar6;
      } while (iVar6 != 0);
      goto LAB_00c6ede0;
    }
LAB_00c6edc4:
    FUN_00c73ee0(0,auStack_38);
  }
LAB_00c6ee00:
  if (param_1[0x24] != 0) {
    (**(code **)(*(long *)(param_1[0x24] + 0x48) + 0x18))();
    param_1[0x24] = 0;
  }
  puVar5 = PTR_DAT_02715078;
  lVar9 = param_1[0x21];
  if (lVar9 == 0) {
LAB_00c6ef20:
    FUN_00c74200(0,auStack_30);
  }
  else {
    if (*(int *)(lVar9 + 0x54) != 0) {
      piVar1 = (int *)(lVar9 + 0x54);
      puVar10 = PTR_DAT_02715080;
      iVar11 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar12 = *(long **)(lVar9 + 0x58);
          if (((*puVar5 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(puVar5), puVar10 = PTR_DAT_02715080, iVar6 != 0)) {
            uVar8 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar8;
            __cxa_guard_release(puVar5);
            puVar10 = PTR_DAT_02715080;
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_00c6ef04;
            if (plVar12 == (long *)puVar10) break;
            plVar12 = (long *)*plVar12;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar11) break;
          ClearExclusiveLocal();
          iVar11 = iVar6;
          if (iVar6 == 0) goto LAB_00c6ef20;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar2 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar2 = *(long *)(lVar9 + 0x60) + -0x50;
          }
          FUN_00c74200(lVar2,auStack_30);
          if (lVar2 != 0) {
            (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
          }
          goto LAB_00c6ef40;
        }
        iVar11 = iVar6;
      } while (iVar6 != 0);
      goto LAB_00c6ef20;
    }
LAB_00c6ef04:
    FUN_00c74200(0,auStack_30);
  }
LAB_00c6ef40:
  if (param_1[0x23] != 0) {
    (**(code **)(*(long *)(param_1[0x23] + 0x48) + 0x18))();
    param_1[0x23] = 0;
  }
  puVar5 = PTR_DAT_02715078;
  lVar9 = param_1[0x21];
  if (lVar9 == 0) {
LAB_00c6f060:
    FUN_00c74520(0,auStack_28);
  }
  else {
    if (*(int *)(lVar9 + 0x54) != 0) {
      piVar1 = (int *)(lVar9 + 0x54);
      puVar10 = PTR_DAT_02715080;
      iVar11 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar12 = *(long **)(lVar9 + 0x58);
          if (((*puVar5 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(puVar5), puVar10 = PTR_DAT_02715080, iVar6 != 0)) {
            uVar8 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar8;
            __cxa_guard_release(puVar5);
            puVar10 = PTR_DAT_02715080;
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_00c6f044;
            if (plVar12 == (long *)puVar10) break;
            plVar12 = (long *)*plVar12;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar11) break;
          ClearExclusiveLocal();
          iVar11 = iVar6;
          if (iVar6 == 0) goto LAB_00c6f060;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar2 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar2 = *(long *)(lVar9 + 0x60) + -0x50;
          }
          FUN_00c74520(lVar2,auStack_28);
          if (lVar2 != 0) {
            (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
          }
          goto LAB_00c6f080;
        }
        iVar11 = iVar6;
      } while (iVar6 != 0);
      goto LAB_00c6f060;
    }
LAB_00c6f044:
    FUN_00c74520(0,auStack_28);
  }
LAB_00c6f080:
  if ((char)param_1[0x1a] != '\0') {
    if (param_1[0x22] != 0) {
      (**(code **)(*(long *)(param_1[0x22] + 0x48) + 0x18))();
      param_1[0x22] = 0;
    }
    puVar5 = PTR_DAT_02715078;
    lVar9 = param_1[0x21];
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x54) == 0) {
LAB_00c6f18c:
        FUN_00c747b0(0,auStack_48);
        goto LAB_00c6f1c8;
      }
      piVar1 = (int *)(lVar9 + 0x54);
      puVar10 = PTR_DAT_02715080;
      iVar11 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar12 = *(long **)(lVar9 + 0x58);
          if (((*puVar5 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(puVar5), puVar10 = PTR_DAT_02715080, iVar6 != 0)) {
            uVar8 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar8;
            __cxa_guard_release(puVar5);
            puVar10 = PTR_DAT_02715080;
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_00c6f18c;
            if (plVar12 == (long *)puVar10) break;
            plVar12 = (long *)*plVar12;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar11) break;
          ClearExclusiveLocal();
          iVar11 = iVar6;
          if (iVar6 == 0) goto LAB_00c6f1a8;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar2 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar2 = *(long *)(lVar9 + 0x60) + -0x50;
          }
          FUN_00c747b0(lVar2,auStack_48);
          if (lVar2 != 0) {
            (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
          }
          goto LAB_00c6f1c8;
        }
        iVar11 = iVar6;
      } while (iVar6 != 0);
    }
LAB_00c6f1a8:
    FUN_00c747b0(0,auStack_48);
  }
LAB_00c6f1c8:
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 3;
  return 1;
}


