/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011c5b40; name: FUN_011c5b40
 */


/* WARNING: Removing unreachable block (ram,0x011c5744) */
/* WARNING: Removing unreachable block (ram,0x011c56ec) */
/* WARNING: Removing unreachable block (ram,0x011c571c) */
/* WARNING: Removing unreachable block (ram,0x011c5774) */

void FUN_011c5b40(long param_1,long param_2,long param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  size_t sVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  long unaff_x23;
  long lVar12;
  long *unaff_x25;
  undefined1 auStack_d0 [128];
  
  lVar12 = *(long *)(param_1 + 0x28);
  lVar7 = nn::os::GetCurrentThread();
  plVar11 = (long *)(lVar12 + 0xa0);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x94));
        while (*plVar11 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_011c5bb0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_011c5bb0:
  plVar9 = *(long **)(lVar12 + 0x60);
  plVar2 = *(long **)(lVar12 + 0x68);
  if (plVar9 != plVar2) {
    if (*plVar9 != param_3) {
      do {
        plVar9 = plVar9 + 1;
        if (plVar2 == plVar9) goto LAB_011c5c0c;
      } while (*plVar9 != param_3);
    }
    if (plVar9 != plVar2) {
      sVar6 = (long)plVar2 - (long)(plVar9 + 1);
      if (sVar6 != 0) {
        memmove(plVar9,plVar9 + 1,sVar6);
      }
      *(long **)(lVar12 + 0x68) = plVar9 + ((long)sVar6 >> 3);
    }
  }
LAB_011c5c0c:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x94));
  lVar12 = *(long *)(param_1 + 0x20);
  lVar7 = nn::os::GetCurrentThread();
  plVar11 = (long *)(lVar12 + 0xa0);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x94));
        while (*plVar11 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_011c5c6c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_011c5c6c:
  plVar9 = *(long **)(lVar12 + 0x60);
  plVar2 = *(long **)(lVar12 + 0x68);
  if (plVar9 != plVar2) {
    if (*plVar9 != param_2) {
      do {
        plVar9 = plVar9 + 1;
        if (plVar2 == plVar9) goto LAB_011c5cc8;
      } while (*plVar9 != param_2);
    }
    if (plVar9 != plVar2) {
      sVar6 = (long)plVar2 - (long)(plVar9 + 1);
      if (sVar6 != 0) {
        memmove(plVar9,plVar9 + 1,sVar6);
      }
      *(long **)(lVar12 + 0x68) = plVar9 + ((long)sVar6 >> 3);
    }
  }
LAB_011c5cc8:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x94));
  lVar7 = *(long *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  if (lVar7 != 0) {
    FUN_012b25b0(param_1 + 0x1a8);
  }
  lVar7 = *(long *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (lVar7 != 0) {
    FUN_012b2690(lVar7);
    (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
              (*(long **)(param_1 + 0x40),lVar7,*(undefined8 *)(param_1 + 0x48),
               *(undefined8 *)(param_1 + 0x50));
  }
  lVar7 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  if (*(long *)(param_1 + 0x2f0) == 0) {
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    lVar7 = *(long *)(param_1 + 0x250);
  }
  else {
    FUN_00727f00(auStack_d0 + 0x80);
    if (unaff_x25 != (long *)0x0) {
      (**(code **)(*unaff_x25 + 0x38))(unaff_x25,param_1 + 0x260);
    }
    lVar7 = *(long *)(param_1 + 0x2f0);
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    if (unaff_x25 != (long *)0x0) {
      (**(code **)(*unaff_x25 + 0x18))();
    }
    lVar7 = *(long *)(param_1 + 0x250);
  }
  if (lVar7 == 0) {
    *(undefined8 *)(param_1 + 0x250) = 0;
    lVar7 = *(long *)(param_1 + 400);
  }
  else {
    if (*(int *)(lVar7 + 0x54) != 0) {
      piVar1 = (int *)(lVar7 + 0x54);
      iVar10 = *(int *)(lVar7 + 0x54);
      do {
        while( true ) {
          plVar11 = *(long **)(lVar7 + 0x58);
          lVar12 = FUN_011c7a70();
          while( true ) {
            if (plVar11 == (long *)0x0) goto LAB_011c56a4;
            if (plVar11 == (long *)lVar12) break;
            plVar11 = (long *)*plVar11;
          }
          iVar3 = *piVar1;
          if (iVar3 != iVar10) break;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            if (*(long *)(lVar7 + 0x60) != 0) {
              plVar11 = (long *)(*(long *)(lVar7 + 0x60) + -8);
              (**(code **)(*plVar11 + 0x38))(plVar11,param_1 + 0x1c0);
              lVar7 = *(long *)(param_1 + 0x250);
              *(undefined8 *)(param_1 + 0x250) = 0;
              goto joined_r0x011c569c;
            }
            goto LAB_011c56a4;
          }
          iVar10 = iVar3;
          if (iVar3 == 0) goto LAB_011c56a4;
        }
        ClearExclusiveLocal();
        iVar10 = iVar3;
      } while (iVar3 != 0);
    }
LAB_011c56a4:
    plVar11 = (long *)0x0;
    lVar7 = *(long *)(param_1 + 0x250);
    *(undefined8 *)(param_1 + 0x250) = 0;
joined_r0x011c569c:
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    lVar7 = *(long *)(param_1 + 400);
  }
  if (lVar7 == 0) {
    *(undefined8 *)(param_1 + 400) = 0;
    lVar7 = *(long *)(param_1 + 0xf0);
  }
  else {
    FUN_00727f00(auStack_d0 + 0x80);
    lVar7 = *(long *)(param_1 + 400);
    *(undefined8 *)(param_1 + 400) = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    lVar7 = *(long *)(param_1 + 0xf0);
  }
  if (lVar7 == 0) {
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  else {
    FUN_00727f00(auStack_d0 + 0x80);
    lVar7 = *(long *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
  }
  uVar8 = *(undefined8 *)PTR_DAT_027104b0;
  if (*(long **)(param_1 + 0x318) == (long *)0x0) {
    unaff_x23 = 0;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x318) + 0x10))(auStack_d0 + 0x98);
    if ((unaff_x23 != 0) && ((**(code **)(*(long *)(unaff_x23 + 0x48) + 0x10))(), unaff_x23 != 0)) {
      (**(code **)(*(long *)(unaff_x23 + 0x48) + 0x18))();
    }
  }
  FUN_007b59f0(uVar8,auStack_d0 + 0x80);
  if (unaff_x23 != 0) {
    (**(code **)(*(long *)(unaff_x23 + 0x48) + 0x18))();
  }
  return;
}


