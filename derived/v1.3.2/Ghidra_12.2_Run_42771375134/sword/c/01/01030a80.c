/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01030a80; name: FUN_01030a80
 */


void FUN_01030a80(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long local_68;
  long local_60;
  long local_58;
  long local_48;
  
  lVar8 = *(long *)(param_1[0xc] + 0x88);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar8 + 0x58);
        lVar5 = FUN_01031780();
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_01030bd8;
          if (plVar11 == (long *)lVar5) break;
          plVar11 = (long *)*plVar11;
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar10) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          if (*(long *)(lVar8 + 0x60) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar8 + 0x60) + -8) + 0x18))();
            lVar8 = param_1[0xc];
            lVar5 = *(long *)(lVar8 + 0x88);
            if (lVar5 != 0) {
              (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
              lVar8 = param_1[0xc];
            }
            lVar9 = *(long *)(lVar8 + 0x90);
            if (lVar9 != 0) {
              (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
              lVar8 = param_1[0xc];
            }
            lVar8 = *(long *)(lVar8 + 0x98);
            if (lVar8 != 0) {
              (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
            }
            if ((lVar9 == 0) || (*(int *)(lVar9 + 0x54) == 0)) goto LAB_01030bcc;
            piVar1 = (int *)(lVar9 + 0x54);
            iVar10 = *(int *)(lVar9 + 0x54);
            goto LAB_01030b84;
          }
          goto LAB_01030bd8;
        }
        iVar10 = iVar2;
        if (iVar2 == 0) goto LAB_01030bd8;
      }
      ClearExclusiveLocal();
      iVar10 = iVar2;
    } while (iVar2 != 0);
  }
LAB_01030bd8:
  if ((*(long *)param_1[0xc] != 0) && (*(int *)(*(long *)param_1[0xc] + 0x54) != 0)) {
    if (*(long *)param_1[0xc] == 0) {
      local_48 = 0;
    }
    else {
      FUN_01031a00(&local_48);
    }
    lVar8 = local_48;
    (**(code **)(*param_1 + 0x10))(&local_60,param_1);
    local_58 = local_60;
    local_60 = 0;
    FUN_0102de10(lVar8,&local_58);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
  }
  goto LAB_01030c84;
LAB_01030b84:
  do {
    plVar11 = *(long **)(lVar9 + 0x58);
    lVar6 = FUN_01031780();
    while( true ) {
      if (plVar11 == (long *)0x0) goto LAB_01030bcc;
      if (plVar11 == (long *)lVar6) break;
      plVar11 = (long *)*plVar11;
    }
    iVar2 = *piVar1;
    if (iVar2 == iVar10) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_01030bc4;
      if (*(long *)(lVar9 + 0x60) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar9 + 0x60) + -8) + 0x18))();
        iVar10 = *piVar1;
        do {
          while( true ) {
            plVar11 = *(long **)(lVar9 + 0x58);
            lVar6 = FUN_01031780();
            for (; plVar11 != (long *)lVar6; plVar11 = (long *)*plVar11) {
            }
            iVar2 = *piVar1;
            if (iVar2 == iVar10) break;
            ClearExclusiveLocal();
            iVar10 = iVar2;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          iVar10 = iVar2;
        } while (cVar3 != '\0');
        lVar12 = *(long *)(lVar9 + 0x60);
        lVar6 = 0;
        if (lVar12 != 0) {
          lVar6 = lVar12 + -0x50;
        }
        lVar13 = *(long *)(lVar6 + 0x60);
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
        }
        lVar7 = *(long *)(lVar13 + 0x98);
        *(long *)(lVar13 + 0x98) = lVar8;
        goto joined_r0x01031008;
      }
      break;
    }
    ClearExclusiveLocal();
LAB_01030bc4:
    iVar10 = iVar2;
  } while (iVar2 != 0);
LAB_01030bcc:
  piVar1 = (int *)(lVar5 + 0x54);
  iVar10 = *(int *)(lVar5 + 0x54);
  do {
    while( true ) {
      plVar11 = *(long **)(lVar5 + 0x58);
      lVar6 = FUN_01031780();
      for (; plVar11 != (long *)lVar6; plVar11 = (long *)*plVar11) {
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar10) break;
      ClearExclusiveLocal();
      iVar10 = iVar2;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar10 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    iVar10 = iVar2;
  } while (cVar3 != '\0');
  lVar12 = *(long *)(lVar5 + 0x60);
  lVar6 = 0;
  if (lVar12 != 0) {
    lVar6 = lVar12 + -0x50;
  }
  lVar13 = *(long *)(lVar6 + 0x60);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(lVar13 + 0xa0);
  *(long *)(lVar13 + 0xa0) = lVar8;
joined_r0x01031008:
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      plVar11 = *(long **)(lVar8 + 0x58);
      lVar6 = FUN_01031780();
      while( true ) {
        if (plVar11 == (long *)0x0) goto LAB_01030e58;
        if (plVar11 == (long *)lVar6) break;
        plVar11 = (long *)*plVar11;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01030e50;
        if (*(long *)(lVar8 + 0x60) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar8 + 0x60) + -8) + 0x18))();
          iVar10 = *piVar1;
          do {
            while( true ) {
              plVar11 = *(long **)(lVar8 + 0x58);
              lVar6 = FUN_01031780();
              for (; plVar11 != (long *)lVar6; plVar11 = (long *)*plVar11) {
              }
              iVar2 = *piVar1;
              if (iVar2 == iVar10) break;
              ClearExclusiveLocal();
              iVar10 = iVar2;
            }
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            iVar10 = iVar2;
          } while (cVar3 != '\0');
          lVar12 = *(long *)(lVar8 + 0x60);
          lVar6 = 0;
          if (lVar12 != 0) {
            lVar6 = lVar12 + -0x50;
          }
          lVar13 = *(long *)(lVar6 + 0x60);
          if (lVar9 != 0) {
            (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
          }
          lVar7 = *(long *)(lVar13 + 0x90);
          *(long *)(lVar13 + 0x90) = lVar9;
          goto joined_r0x0103109c;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01030e50:
      iVar10 = iVar2;
    } while (iVar2 != 0);
  }
LAB_01030e58:
  piVar1 = (int *)(lVar5 + 0x54);
  iVar10 = *(int *)(lVar5 + 0x54);
  do {
    while( true ) {
      plVar11 = *(long **)(lVar5 + 0x58);
      lVar6 = FUN_01031780();
      for (; plVar11 != (long *)lVar6; plVar11 = (long *)*plVar11) {
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar10) break;
      ClearExclusiveLocal();
      iVar10 = iVar2;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar10 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    iVar10 = iVar2;
  } while (cVar3 != '\0');
  lVar12 = *(long *)(lVar5 + 0x60);
  lVar6 = 0;
  if (lVar12 != 0) {
    lVar6 = lVar12 + -0x50;
  }
  lVar13 = *(long *)(lVar6 + 0x60);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(lVar13 + 0xa8);
  *(long *)(lVar13 + 0xa8) = lVar9;
joined_r0x0103109c:
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  lVar6 = *(long *)(param_1[0xc] + 0x90);
  *(undefined8 *)(param_1[0xc] + 0x90) = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)(param_1[0xc] + 0x98);
  *(undefined8 *)(param_1[0xc] + 0x98) = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    lVar8 = *(long *)param_1[0xc];
    goto joined_r0x01030f74;
  }
LAB_01030c84:
  lVar8 = *(long *)param_1[0xc];
joined_r0x01030f74:
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    if (*(long *)param_1[0xc] == 0) {
      local_48 = 0;
    }
    else {
      FUN_01031a00(&local_48);
    }
    lVar8 = local_48;
    (**(code **)(*param_1 + 0x10))(&local_60,param_1);
    local_68 = local_60;
    local_60 = 0;
    FUN_0102c860(lVar8,&local_68);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
  }
  *(undefined1 *)(param_1[0xc] + 0x19) = 0;
  *(undefined4 *)(param_1[0xc] + 0x44) = 0;
  *(undefined4 *)(param_1[0xc] + 0x4c) = 0;
  *(undefined4 *)(param_1[0xc] + 0x50) = 0;
  return;
}


