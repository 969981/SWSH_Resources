/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102f310; name: FUN_0102f310
 */


void FUN_0102f310(long *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  bool bVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_58;
  
  plVar13 = param_1 + 0xc;
  lVar9 = *plVar13;
  switch(*(undefined4 *)(lVar9 + 0x20)) {
  case 0:
    lVar9 = *(long *)(lVar9 + 0x30);
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
      piVar1 = (int *)(lVar9 + 0x54);
      iVar11 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar14 = *(long **)(lVar9 + 0x58);
          lVar7 = FUN_01031780();
          while( true ) {
            if (plVar14 == (long *)0x0) goto LAB_0102f6f0;
            if (plVar14 == (long *)lVar7) break;
            plVar14 = (long *)*plVar14;
          }
          iVar3 = *piVar1;
          if (iVar3 != iVar11) break;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            if (*(long *)(lVar9 + 0x60) != 0) {
              plVar14 = (long *)(*(long *)(lVar9 + 0x60) + -8);
              lVar9 = *plVar14;
              goto LAB_0102f850;
            }
            goto LAB_0102f6f0;
          }
          iVar11 = iVar3;
          if (iVar3 == 0) goto LAB_0102f6f0;
        }
        ClearExclusiveLocal();
        iVar11 = iVar3;
      } while (iVar3 != 0);
    }
LAB_0102f6f0:
    if (*(int *)(*plVar13 + 0x28) == 0) goto switchD_0102f358_default;
    *(undefined4 *)(*plVar13 + 0x28) = 0;
    lVar9 = *(long *)*plVar13;
    goto joined_r0x0102f860;
  case 1:
    lVar9 = *(long *)(lVar9 + 0x30);
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
      piVar1 = (int *)(lVar9 + 0x54);
      iVar11 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar14 = *(long **)(lVar9 + 0x58);
          lVar7 = FUN_01031780();
          while( true ) {
            if (plVar14 == (long *)0x0) goto LAB_0102f834;
            if (plVar14 == (long *)lVar7) break;
            plVar14 = (long *)*plVar14;
          }
          iVar3 = *piVar1;
          if (iVar3 != iVar11) break;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            if (*(long *)(lVar9 + 0x60) != 0) {
              (**(code **)(*(long *)(*(long *)(lVar9 + 0x60) + -8) + 0x18))();
              lVar9 = *(long *)(*plVar13 + 0x38);
              if ((lVar9 == 0) || (*(int *)(lVar9 + 0x54) == 0)) goto switchD_0102f358_default;
              piVar1 = (int *)(lVar9 + 0x54);
              iVar11 = *(int *)(lVar9 + 0x54);
              goto LAB_0102f7e8;
            }
            goto LAB_0102f834;
          }
          iVar11 = iVar3;
          if (iVar3 == 0) goto LAB_0102f834;
        }
        ClearExclusiveLocal();
        iVar11 = iVar3;
      } while (iVar3 != 0);
    }
    break;
  case 2:
    lVar9 = *(long *)(lVar9 + 0x30);
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
      piVar1 = (int *)(lVar9 + 0x54);
      iVar11 = *(int *)(lVar9 + 0x54);
      while( true ) {
        plVar14 = *(long **)(lVar9 + 0x58);
        lVar7 = FUN_01031780();
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_0102f834;
          if (plVar14 == (long *)lVar7) break;
          plVar14 = (long *)*plVar14;
        }
        iVar3 = *piVar1;
        if (iVar3 == iVar11) break;
        ClearExclusiveLocal();
joined_r0x0102f424:
        iVar11 = iVar3;
        if (iVar3 == 0) goto LAB_0102f834;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto joined_r0x0102f424;
      if (*(long *)(lVar9 + 0x60) == 0) break;
      (**(code **)(*(long *)(*(long *)(lVar9 + 0x60) + -8) + 0x18))();
      lVar9 = *(long *)(*plVar13 + 0x30);
      piVar1 = (int *)(lVar9 + 0x54);
      iVar11 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar14 = *(long **)(lVar9 + 0x58);
          lVar7 = FUN_01031780();
          for (; plVar14 != (long *)lVar7; plVar14 = (long *)*plVar14) {
          }
          iVar3 = *piVar1;
          if (iVar3 == iVar11) break;
          ClearExclusiveLocal();
          iVar11 = iVar3;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        iVar11 = iVar3;
      } while (cVar4 != '\0');
      lVar7 = *(long *)(lVar9 + 0x60);
      lVar9 = 0;
      if (lVar7 != 0) {
        lVar9 = lVar7 + -0x50;
      }
      lVar12 = *(long *)(*(long *)(lVar9 + 0x60) + 0xa0);
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
      }
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
      }
      if (lVar12 == 0) {
        lVar7 = 0;
        lVar9 = 0;
        bVar15 = true;
        bVar6 = true;
        lVar12 = *(long *)(*plVar13 + 0x38);
        *(long *)(*plVar13 + 0x38) = 0;
        goto joined_r0x01030184;
      }
      lVar7 = 0;
LAB_0102f578:
      lVar9 = lVar12;
      if (*(int *)(lVar9 + 0x54) != 0) {
        piVar1 = (int *)(lVar9 + 0x54);
        iVar11 = *(int *)(lVar9 + 0x54);
        do {
          plVar14 = *(long **)(lVar9 + 0x58);
          lVar12 = FUN_01031780();
          while( true ) {
            if (plVar14 == (long *)0x0) goto LAB_010300f8;
            if (plVar14 == (long *)lVar12) break;
            plVar14 = (long *)*plVar14;
          }
          iVar3 = *piVar1;
          if (iVar3 == iVar11) {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_0102f5d4;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar3;
          if (iVar3 == 0) break;
        } while( true );
      }
      goto LAB_010300f8;
    }
    break;
  case 3:
    *(undefined4 *)(lVar9 + 0x28) = 0;
    lVar9 = *(long *)(*plVar13 + 0x30);
    *(undefined8 *)(*plVar13 + 0x30) = 0;
    if (lVar9 == 0) goto LAB_0102f83c;
    lVar9 = *(long *)(lVar9 + 0x48);
LAB_0102f444:
    (**(code **)(lVar9 + 0x18))();
    lVar9 = *(long *)(*plVar13 + 0x38);
    *(undefined8 *)(*plVar13 + 0x38) = 0;
    if (lVar9 == 0) goto switchD_0102f358_default;
    goto LAB_0102f84c;
  default:
    goto switchD_0102f358_default;
  }
LAB_0102f834:
  *(undefined4 *)(*plVar13 + 0x28) = 0;
LAB_0102f83c:
  lVar9 = *(long *)(*plVar13 + 0x38);
  *(undefined8 *)(*plVar13 + 0x38) = 0;
  if (lVar9 != 0) {
LAB_0102f84c:
    plVar14 = (long *)(lVar9 + 0x48);
    lVar9 = *plVar14;
LAB_0102f850:
    pcVar10 = *(code **)(lVar9 + 0x18);
    goto LAB_0102f854;
  }
  goto switchD_0102f358_default;
LAB_0102f5d4:
  if (*(long *)(lVar9 + 0x60) == 0) {
LAB_010300f8:
    bVar6 = false;
    lVar12 = *plVar13;
    goto joined_r0x0102f6c4;
  }
  (**(code **)(*(long *)(*(long *)(lVar9 + 0x60) + -8) + 0x18))();
  plVar14 = (long *)(lVar9 + 0x48);
  (**(code **)(*plVar14 + 0x10))(plVar14);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  iVar11 = *piVar1;
  do {
    while( true ) {
      plVar16 = *(long **)(lVar9 + 0x58);
      lVar7 = FUN_01031780();
      for (; plVar16 != (long *)lVar7; plVar16 = (long *)*plVar16) {
      }
      iVar3 = *piVar1;
      if (iVar3 == iVar11) break;
      ClearExclusiveLocal();
      iVar11 = iVar3;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar11 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    iVar11 = iVar3;
  } while (cVar4 != '\0');
  lVar8 = *(long *)(lVar9 + 0x60);
  lVar7 = 0;
  if (lVar8 != 0) {
    lVar7 = lVar8 + -0x50;
  }
  lVar12 = *(long *)(*(long *)(lVar7 + 0x60) + 0x98);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  (**(code **)(*plVar14 + 0x18))(plVar14);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  lVar7 = lVar9;
  if (lVar12 == 0) goto code_r0x0102f6b0;
  goto LAB_0102f578;
code_r0x0102f6b0:
  bVar6 = true;
  lVar12 = *plVar13;
  lVar9 = 0;
joined_r0x0102f6c4:
  plVar14 = (long *)(lVar12 + 0x38);
  if (lVar7 == 0) {
    bVar15 = true;
    lVar12 = *plVar14;
    *plVar14 = 0;
  }
  else {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    bVar15 = false;
    lVar12 = *plVar14;
    *plVar14 = lVar7;
  }
joined_r0x01030184:
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
  }
  if (!bVar6) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  if (bVar15) goto switchD_0102f358_default;
  plVar14 = (long *)(lVar7 + 0x48);
  pcVar10 = *(code **)(*plVar14 + 0x18);
LAB_0102f854:
  (*pcVar10)(plVar14);
  goto switchD_0102f358_default;
LAB_01030380:
  if (*(long *)(lVar12 + 0x60) == 0) {
LAB_01030578:
    lVar9 = *(long *)*plVar13;
  }
  else {
    (**(code **)(*(long *)(*(long *)(lVar12 + 0x60) + -8) + 0x18))();
    iVar11 = *piVar1;
joined_r0x01030398:
    do {
      if (iVar11 == 0) {
LAB_010303e4:
        lVar9 = 0;
        lVar7 = *(long *)(*plVar13 + 0x38);
        goto joined_r0x010303f0;
      }
      plVar14 = *(long **)(lVar12 + 0x58);
      lVar9 = FUN_01031780();
      while( true ) {
        if (plVar14 == (long *)0x0) goto LAB_010303e4;
        if (plVar14 == (long *)lVar9) break;
        plVar14 = (long *)*plVar14;
      }
      iVar3 = *piVar1;
      if (iVar3 != iVar11) {
        ClearExclusiveLocal();
        iVar11 = iVar3;
        goto joined_r0x01030398;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      iVar11 = iVar3;
    } while (cVar4 != '\0');
    lVar9 = 0;
    if (*(long *)(lVar12 + 0x60) != 0) {
      lVar9 = *(long *)(lVar12 + 0x60) + -0x50;
    }
    lVar7 = *(long *)(*plVar13 + 0x38);
joined_r0x010303f0:
    if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
      piVar2 = (int *)(lVar7 + 0x54);
      iVar11 = *(int *)(lVar7 + 0x54);
      do {
        plVar14 = *(long **)(lVar7 + 0x58);
        lVar8 = FUN_01031780();
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_01030494;
          if (plVar14 == (long *)lVar8) break;
          plVar14 = (long *)*plVar14;
        }
        iVar3 = *piVar2;
        if (iVar3 == iVar11) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar7 = *(long *)(lVar7 + 0x60);
            if (lVar7 != 0) {
              bVar6 = lVar9 == lVar7 + -0x50;
              (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
              goto joined_r0x0103048c;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar3;
      } while (iVar3 != 0);
    }
LAB_01030494:
    bVar6 = lVar9 == 0;
joined_r0x0103048c:
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
    if (!bVar6) {
      iVar11 = *piVar1;
      do {
        while( true ) {
          plVar14 = *(long **)(lVar12 + 0x58);
          lVar9 = FUN_01031780();
          for (; plVar14 != (long *)lVar9; plVar14 = (long *)*plVar14) {
          }
          iVar3 = *piVar1;
          if (iVar3 == iVar11) break;
          ClearExclusiveLocal();
          iVar11 = iVar3;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        iVar11 = iVar3;
      } while (cVar4 != '\0');
      lVar7 = *(long *)(lVar12 + 0x60);
      lVar9 = 0;
      if (lVar7 != 0) {
        lVar9 = lVar7 + -0x50;
      }
      lVar8 = *(long *)(*(long *)(lVar9 + 0x60) + 0x98);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
      lVar12 = lVar8;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
      }
      goto joined_r0x01030324;
    }
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    if (lVar12 != 0) {
      iVar11 = *piVar1;
      goto joined_r0x010306a8;
    }
    lVar12 = 0;
    lVar9 = *(long *)*plVar13;
  }
  bVar15 = true;
  bVar6 = false;
  lVar7 = lVar12;
  lVar12 = 0;
  goto joined_r0x010305b0;
  while( true ) {
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar11 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    iVar11 = iVar3;
    if (cVar4 == '\0') break;
joined_r0x010306a8:
    lVar7 = lVar12;
    if (iVar11 == 0) goto LAB_010306f4;
    plVar14 = *(long **)(lVar12 + 0x58);
    lVar9 = FUN_01031780();
    while( true ) {
      if (plVar14 == (long *)0x0) goto LAB_010306f4;
      if (plVar14 == (long *)lVar9) break;
      plVar14 = (long *)*plVar14;
    }
    iVar3 = *piVar1;
    if (iVar3 != iVar11) {
      ClearExclusiveLocal();
      iVar11 = iVar3;
      goto joined_r0x010306a8;
    }
  }
  if (*(long *)(lVar12 + 0x60) == 0) {
LAB_010306f4:
    bVar6 = false;
    bVar15 = false;
    lVar9 = *(long *)*plVar13;
joined_r0x010305b0:
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
      if (*(long *)*plVar13 == 0) {
        local_58 = 0;
      }
      else {
        FUN_01031a00(&local_58);
      }
      lVar9 = local_58;
      (**(code **)(*param_1 + 0x10))(&local_70,param_1);
      local_78 = local_70;
      local_70 = 0;
      FUN_0102db50(lVar9,&local_78);
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
    }
    *(undefined4 *)(*plVar13 + 0x28) = 0;
    if (!bVar6) {
      goto LAB_01030664;
    }
  }
  else {
    (**(code **)(*(long *)(*(long *)(lVar12 + 0x60) + -8) + 0x18))();
    iVar11 = *piVar1;
    do {
      while( true ) {
        plVar14 = *(long **)(lVar12 + 0x58);
        lVar9 = FUN_01031780();
        for (; plVar14 != (long *)lVar9; plVar14 = (long *)*plVar14) {
        }
        iVar3 = *piVar1;
        if (iVar3 == iVar11) break;
        ClearExclusiveLocal();
        iVar11 = iVar3;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      iVar11 = iVar3;
    } while (cVar4 != '\0');
    lVar8 = *(long *)(lVar12 + 0x60);
    lVar9 = 0;
    if (lVar8 != 0) {
      lVar9 = lVar8 + -0x50;
    }
    lVar17 = *(long *)(*(long *)(lVar9 + 0x60) + 0x98);
    if (lVar17 != 0) {
      (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
    (**(code **)(*param_1 + 0x10))(&local_58,param_1);
    iVar11 = *piVar1;
    do {
      while( true ) {
        plVar14 = *(long **)(lVar12 + 0x58);
        lVar9 = FUN_01031780();
        for (; plVar14 != (long *)lVar9; plVar14 = (long *)*plVar14) {
        }
        iVar3 = *piVar1;
        if (iVar3 == iVar11) break;
        ClearExclusiveLocal();
        iVar11 = iVar3;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      iVar11 = iVar3;
    } while (cVar4 != '\0');
    lVar8 = *(long *)(lVar12 + 0x60);
    lVar9 = 0;
    if (lVar8 != 0) {
      lVar9 = lVar8 + -0x50;
    }
    lVar18 = *(long *)(lVar9 + 0x60);
    if (*(long *)(lVar18 + 0x98) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar18 + 0x98) + 0x48) + 0x18))();
      *(undefined8 *)(lVar18 + 0x98) = 0;
    }
    lVar5 = local_58;
    local_58 = 0;
    *(long *)(lVar18 + 0x98) = lVar5;
    if ((lVar8 != 0) &&
       ((**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48)), local_58 != 0)) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    lVar9 = *plVar13;
    lVar8 = *(long *)(lVar9 + 0x30);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    lVar18 = *(long *)(lVar9 + 0x88);
    *(long *)(lVar9 + 0x88) = lVar8;
    if (lVar18 != 0) {
      (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))();
    }
    lVar8 = *plVar13;
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    lVar9 = *(long *)(lVar8 + 0x90);
    *(long *)(lVar8 + 0x90) = lVar12;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
    }
    lVar9 = *plVar13;
    if (lVar17 != 0) {
      (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
    }
    lVar8 = *(long *)(lVar9 + 0x98);
    *(long *)(lVar9 + 0x98) = lVar17;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    if ((lVar17 != 0) && (*(int *)(lVar17 + 0x54) != 0)) {
      piVar1 = (int *)(lVar17 + 0x54);
      iVar11 = *(int *)(lVar17 + 0x54);
      do {
        plVar14 = *(long **)(lVar17 + 0x58);
        lVar9 = FUN_01031780();
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_01030978;
          if (plVar14 == (long *)lVar9) break;
          plVar14 = (long *)*plVar14;
        }
        iVar3 = *piVar1;
        if (iVar3 == iVar11) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            if (*(long *)(lVar17 + 0x60) != 0) {
              (**(code **)(*(long *)(*(long *)(lVar17 + 0x60) + -8) + 0x18))();
              lVar9 = local_58;
              goto joined_r0x01030a78;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar3;
      } while (iVar3 != 0);
    }
LAB_01030978:
    (**(code **)(*param_1 + 0x10))(&local_58,param_1);
    lVar9 = *(long *)(param_1[0xc] + 0x30);
    piVar1 = (int *)(lVar9 + 0x54);
    iVar11 = *(int *)(lVar9 + 0x54);
    do {
      while( true ) {
        plVar14 = *(long **)(lVar9 + 0x58);
        lVar8 = FUN_01031780();
        for (; plVar14 != (long *)lVar8; plVar14 = (long *)*plVar14) {
        }
        iVar3 = *piVar1;
        if (iVar3 == iVar11) break;
        ClearExclusiveLocal();
        iVar11 = iVar3;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      iVar11 = iVar3;
    } while (cVar4 != '\0');
    lVar18 = *(long *)(lVar9 + 0x60);
    lVar8 = 0;
    if (lVar18 != 0) {
      lVar8 = lVar18 + -0x50;
    }
    lVar9 = *(long *)(lVar8 + 0x60);
    if (*(long *)(lVar9 + 0xa8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar9 + 0xa8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar9 + 0xa8) = 0;
    }
    lVar5 = local_58;
    local_58 = 0;
    *(long *)(lVar9 + 0xa8) = lVar5;
    lVar9 = local_58;
    if ((lVar18 != 0) &&
       ((**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48)), lVar9 = 0,
       local_58 != 0)) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
      lVar9 = local_58;
    }
joined_r0x01030a78:
    local_58 = lVar9;
    if (lVar17 != 0) {
      (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
    }
    bVar15 = false;
LAB_01030664:
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (!bVar15) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  goto LAB_0102f9a8;
LAB_0102fb24:
  do {
    plVar14 = *(long **)(lVar9 + 0x58);
    lVar7 = FUN_01031780();
    while( true ) {
      if (plVar14 == (long *)0x0) goto LAB_010301a0;
      if (plVar14 == (long *)lVar7) break;
      plVar14 = (long *)*plVar14;
    }
    iVar3 = *piVar1;
    if (iVar3 == iVar11) {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        if (*(long *)(lVar9 + 0x60) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar9 + 0x60) + -8) + 0x18))();
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar3;
  } while (iVar3 != 0);
LAB_010301a0:
  lVar9 = *(long *)(*plVar13 + 0x98);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
    piVar1 = (int *)(lVar9 + 0x54);
    iVar11 = *(int *)(lVar9 + 0x54);
    do {
      plVar13 = *(long **)(lVar9 + 0x58);
      lVar7 = FUN_01031780();
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_01030218;
        if (plVar13 == (long *)lVar7) break;
        plVar13 = (long *)*plVar13;
      }
      iVar3 = *piVar1;
      if (iVar3 == iVar11) {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          if (*(long *)(lVar9 + 0x60) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar9 + 0x60) + -8) + 0x18))();
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar3;
    } while (iVar3 != 0);
  }
  goto LAB_01030218;
LAB_0102f7e8:
  do {
    plVar14 = *(long **)(lVar9 + 0x58);
    lVar7 = FUN_01031780();
    while( true ) {
      if (plVar14 == (long *)0x0) goto switchD_0102f358_default;
      if (plVar14 == (long *)lVar7) break;
      plVar14 = (long *)*plVar14;
    }
    iVar3 = *piVar1;
    if (iVar3 == iVar11) {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        if (*(long *)(lVar9 + 0x60) != 0) {
          lVar9 = *(long *)(*(long *)(lVar9 + 0x60) + -8);
          goto LAB_0102f444;
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar3;
  } while (iVar3 != 0);
switchD_0102f358_default:
  lVar9 = *(long *)*plVar13;
joined_r0x0102f860:
  if ((lVar9 == 0) || (*(int *)(lVar9 + 0x54) == 0)) {
LAB_0102f864:
    lVar9 = *(long *)(*plVar13 + 0x30);
  }
  else {
    if (*(long *)*plVar13 == 0) {
      local_58 = 0;
    }
    else {
      FUN_01031a00(&local_58);
    }
    lVar9 = local_58;
    (**(code **)(*param_1 + 0x10))(&local_70,param_1);
    local_68 = local_70;
    local_70 = 0;
    FUN_0102d0c0(lVar9,&local_68);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    if (local_58 == 0) goto LAB_0102f864;
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
    lVar9 = *(long *)(*plVar13 + 0x30);
  }
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
    piVar1 = (int *)(lVar9 + 0x54);
    iVar11 = *(int *)(lVar9 + 0x54);
    while( true ) {
      plVar14 = *(long **)(lVar9 + 0x58);
      lVar7 = FUN_01031780();
      while( true ) {
        if (plVar14 == (long *)0x0) goto LAB_0102f8f8;
        if (plVar14 == (long *)lVar7) break;
        plVar14 = (long *)*plVar14;
      }
      iVar3 = *piVar1;
      if (iVar3 == iVar11) break;
      ClearExclusiveLocal();
joined_r0x0102f8c8:
      iVar11 = iVar3;
      if (iVar3 == 0) goto LAB_0102f8f8;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar11 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto joined_r0x0102f8c8;
    if (*(long *)(lVar9 + 0x60) == 0) goto LAB_0102f8f8;
    (**(code **)(*(long *)(*(long *)(lVar9 + 0x60) + -8) + 0x18))();
    lVar9 = *(long *)(*plVar13 + 0x30);
    piVar1 = (int *)(lVar9 + 0x54);
    iVar11 = *(int *)(lVar9 + 0x54);
    do {
      while( true ) {
        plVar14 = *(long **)(lVar9 + 0x58);
        lVar7 = FUN_01031780();
        for (; plVar14 != (long *)lVar7; plVar14 = (long *)*plVar14) {
        }
        iVar3 = *piVar1;
        if (iVar3 == iVar11) break;
        ClearExclusiveLocal();
        iVar11 = iVar3;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      iVar11 = iVar3;
    } while (cVar4 != '\0');
    lVar7 = *(long *)(lVar9 + 0x60);
    lVar9 = 0;
    if (lVar7 != 0) {
      lVar9 = lVar7 + -0x50;
    }
    lVar12 = *(long *)(*(long *)(lVar9 + 0x60) + 0xa0);
    if (lVar12 == 0) {
LAB_01030270:
      bVar6 = true;
    }
    else {
      if (*(int *)(lVar12 + 0x54) != 0) {
        piVar1 = (int *)(lVar12 + 0x54);
        iVar11 = *(int *)(lVar12 + 0x54);
        do {
          plVar14 = *(long **)(lVar12 + 0x58);
          lVar8 = FUN_01031780();
          while( true ) {
            if (plVar14 == (long *)0x0) goto LAB_01030270;
            if (plVar14 == (long *)lVar8) break;
            plVar14 = (long *)*plVar14;
          }
          iVar3 = *piVar1;
          if (iVar3 == iVar11) {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              if (*(long *)(lVar12 + 0x60) == 0) goto LAB_01030270;
              (**(code **)(*(long *)(*(long *)(lVar12 + 0x60) + -8) + 0x18))();
              bVar6 = false;
              goto joined_r0x01030274;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar3;
        } while (iVar3 != 0);
      }
      bVar6 = true;
    }
joined_r0x01030274:
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
    if (bVar6) {
      (**(code **)(*param_1 + 0x10))(&local_58,param_1);
      lVar9 = *(long *)(param_1[0xc] + 0x30);
      piVar1 = (int *)(lVar9 + 0x54);
      iVar11 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar14 = *(long **)(lVar9 + 0x58);
          lVar7 = FUN_01031780();
          for (; plVar14 != (long *)lVar7; plVar14 = (long *)*plVar14) {
          }
          iVar3 = *piVar1;
          if (iVar3 == iVar11) break;
          ClearExclusiveLocal();
          iVar11 = iVar3;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        iVar11 = iVar3;
      } while (cVar4 != '\0');
      lVar7 = *(long *)(lVar9 + 0x60);
      lVar9 = 0;
      if (lVar7 != 0) {
        lVar9 = lVar7 + -0x50;
      }
      lVar12 = *(long *)(lVar9 + 0x60);
      if (*(long *)(lVar12 + 0xa0) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar12 + 0xa0) + 0x48) + 0x18))();
        *(undefined8 *)(lVar12 + 0xa0) = 0;
      }
      lVar8 = local_58;
      local_58 = 0;
      *(long *)(lVar12 + 0xa0) = lVar8;
      if ((lVar7 != 0) &&
         ((**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48)), local_58 != 0)) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      (**(code **)(*param_1 + 0x10))(&local_58,param_1);
      lVar9 = *(long *)(param_1[0xc] + 0x30);
      piVar1 = (int *)(lVar9 + 0x54);
      iVar11 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar14 = *(long **)(lVar9 + 0x58);
          lVar7 = FUN_01031780();
          for (; plVar14 != (long *)lVar7; plVar14 = (long *)*plVar14) {
          }
          iVar3 = *piVar1;
          if (iVar3 == iVar11) break;
          ClearExclusiveLocal();
          iVar11 = iVar3;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        iVar11 = iVar3;
      } while (cVar4 != '\0');
      lVar7 = *(long *)(lVar9 + 0x60);
      lVar9 = 0;
      if (lVar7 != 0) {
        lVar9 = lVar7 + -0x50;
      }
      lVar12 = *(long *)(lVar9 + 0x60);
      if (*(long *)(lVar12 + 0xa8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar12 + 0xa8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar12 + 0xa8) = 0;
      }
      lVar8 = local_58;
      local_58 = 0;
      *(long *)(lVar12 + 0xa8) = lVar8;
      if ((lVar7 != 0) &&
         ((**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48)), local_58 != 0)) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      lVar9 = *plVar13;
      lVar7 = *(long *)(lVar9 + 0x30);
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      lVar12 = *(long *)(lVar9 + 0x88);
      *(long *)(lVar9 + 0x88) = lVar7;
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
      }
      lVar9 = *(long *)(*plVar13 + 0x90);
      *(undefined8 *)(*plVar13 + 0x90) = 0;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
      }
      lVar9 = *(long *)(*plVar13 + 0x98);
      *(undefined8 *)(*plVar13 + 0x98) = 0;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
      }
      goto LAB_0102f9a8;
    }
    lVar9 = *(long *)(*plVar13 + 0x38);
    if ((lVar9 == 0) || (*(int *)(lVar9 + 0x54) == 0)) {
LAB_0102fdf4:
      (**(code **)(*param_1 + 0x10))(&local_58,param_1);
      lVar9 = *(long *)(param_1[0xc] + 0x30);
      piVar1 = (int *)(lVar9 + 0x54);
      iVar11 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar14 = *(long **)(lVar9 + 0x58);
          lVar7 = FUN_01031780();
          for (; plVar14 != (long *)lVar7; plVar14 = (long *)*plVar14) {
          }
          iVar3 = *piVar1;
          if (iVar3 == iVar11) break;
          ClearExclusiveLocal();
          iVar11 = iVar3;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        iVar11 = iVar3;
      } while (cVar4 != '\0');
      lVar7 = *(long *)(lVar9 + 0x60);
      lVar9 = 0;
      if (lVar7 != 0) {
        lVar9 = lVar7 + -0x50;
      }
      lVar12 = *(long *)(*(long *)(lVar9 + 0x60) + 0xa0);
      piVar1 = (int *)(lVar12 + 0x54);
      iVar11 = *(int *)(lVar12 + 0x54);
      do {
        while( true ) {
          plVar14 = *(long **)(lVar12 + 0x58);
          lVar8 = FUN_01031780();
          for (; plVar14 != (long *)lVar8; plVar14 = (long *)*plVar14) {
          }
          iVar3 = *piVar1;
          if (iVar3 == iVar11) break;
          ClearExclusiveLocal();
          iVar11 = iVar3;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        iVar11 = iVar3;
      } while (cVar4 != '\0');
      lVar8 = *(long *)(lVar12 + 0x60);
      lVar12 = 0;
      if (lVar8 != 0) {
        lVar12 = lVar8 + -0x50;
      }
      lVar17 = *(long *)(lVar12 + 0x60);
      if (*(long *)(lVar17 + 0x90) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar17 + 0x90) + 0x48) + 0x18))();
        *(undefined8 *)(lVar17 + 0x90) = 0;
      }
      lVar18 = local_58;
      local_58 = 0;
      *(long *)(lVar17 + 0x90) = lVar18;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
      }
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
      }
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      lVar9 = *plVar13;
      lVar7 = *(long *)(lVar9 + 0x30);
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      lVar12 = *(long *)(lVar9 + 0x88);
      *(long *)(lVar9 + 0x88) = lVar7;
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
      }
      lVar9 = *(long *)(*plVar13 + 0x90);
      *(undefined8 *)(*plVar13 + 0x90) = 0;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
      }
      lVar9 = *(long *)(*plVar13 + 0x30);
      piVar1 = (int *)(lVar9 + 0x54);
      iVar11 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar14 = *(long **)(lVar9 + 0x58);
          lVar7 = FUN_01031780();
          for (; plVar14 != (long *)lVar7; plVar14 = (long *)*plVar14) {
          }
          iVar3 = *piVar1;
          if (iVar3 == iVar11) break;
          ClearExclusiveLocal();
          iVar11 = iVar3;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        iVar11 = iVar3;
      } while (cVar4 != '\0');
      lVar7 = *(long *)(lVar9 + 0x60);
      lVar9 = 0;
      if (lVar7 != 0) {
        lVar9 = lVar7 + -0x50;
      }
      lVar12 = *plVar13;
      lVar8 = *(long *)(*(long *)(lVar9 + 0x60) + 0xa0);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      lVar17 = *(long *)(lVar12 + 0x98);
      *(long *)(lVar12 + 0x98) = lVar8;
      if (lVar17 != 0) {
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))();
      }
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
      }
      (**(code **)(*param_1 + 0x10))(&local_58,param_1);
      lVar9 = *(long *)(param_1[0xc] + 0x30);
      piVar1 = (int *)(lVar9 + 0x54);
      iVar11 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar14 = *(long **)(lVar9 + 0x58);
          lVar7 = FUN_01031780();
          for (; plVar14 != (long *)lVar7; plVar14 = (long *)*plVar14) {
          }
          iVar3 = *piVar1;
          if (iVar3 == iVar11) break;
          ClearExclusiveLocal();
          iVar11 = iVar3;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        iVar11 = iVar3;
      } while (cVar4 != '\0');
      lVar7 = *(long *)(lVar9 + 0x60);
      lVar9 = 0;
      if (lVar7 != 0) {
        lVar9 = lVar7 + -0x50;
      }
      lVar12 = *(long *)(lVar9 + 0x60);
      if (*(long *)(lVar12 + 0xa0) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar12 + 0xa0) + 0x48) + 0x18))();
        *(undefined8 *)(lVar12 + 0xa0) = 0;
      }
      lVar8 = local_58;
      local_58 = 0;
      *(long *)(lVar12 + 0xa0) = lVar8;
      if ((lVar7 == 0) ||
         ((**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48)), local_58 == 0))
      goto LAB_0102f9a8;
      goto LAB_0102f998;
    }
    piVar1 = (int *)(lVar9 + 0x54);
    iVar11 = *(int *)(lVar9 + 0x54);
    while( true ) {
      plVar14 = *(long **)(lVar9 + 0x58);
      lVar7 = FUN_01031780();
      while( true ) {
        if (plVar14 == (long *)0x0) goto LAB_0102fdf4;
        if (plVar14 == (long *)lVar7) break;
        plVar14 = (long *)*plVar14;
      }
      iVar3 = *piVar1;
      if (iVar3 == iVar11) break;
      ClearExclusiveLocal();
LAB_0102fdec:
      iVar11 = iVar3;
      if (iVar3 == 0) goto LAB_0102fdf4;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar11 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_0102fdec;
    if (*(long *)(lVar9 + 0x60) == 0) goto LAB_0102fdf4;
    (**(code **)(*(long *)(*(long *)(lVar9 + 0x60) + -8) + 0x18))();
    lVar9 = *(long *)(*plVar13 + 0x30);
    piVar1 = (int *)(lVar9 + 0x54);
    iVar11 = *(int *)(lVar9 + 0x54);
    do {
      while( true ) {
        plVar14 = *(long **)(lVar9 + 0x58);
        lVar7 = FUN_01031780();
        for (; plVar14 != (long *)lVar7; plVar14 = (long *)*plVar14) {
        }
        iVar3 = *piVar1;
        if (iVar3 == iVar11) break;
        ClearExclusiveLocal();
        iVar11 = iVar3;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      iVar11 = iVar3;
    } while (cVar4 != '\0');
    lVar7 = *(long *)(lVar9 + 0x60);
    lVar9 = 0;
    if (lVar7 != 0) {
      lVar9 = lVar7 + -0x50;
    }
    lVar12 = *(long *)(*(long *)(lVar9 + 0x60) + 0xa0);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
joined_r0x01030324:
    if (lVar12 != 0) {
      if (*(int *)(lVar12 + 0x54) != 0) {
        piVar1 = (int *)(lVar12 + 0x54);
        iVar11 = *(int *)(lVar12 + 0x54);
        do {
          plVar14 = *(long **)(lVar12 + 0x58);
          lVar9 = FUN_01031780();
          while( true ) {
            if (plVar14 == (long *)0x0) goto LAB_01030578;
            if (plVar14 == (long *)lVar9) break;
            plVar14 = (long *)*plVar14;
          }
          iVar3 = *piVar1;
          if (iVar3 == iVar11) {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_01030380;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar3;
          if (iVar3 == 0) break;
        } while( true );
      }
      goto LAB_01030578;
    }
    bVar15 = true;
    bVar6 = true;
    lVar12 = 0;
    lVar9 = *(long *)*plVar13;
    lVar7 = lVar12;
    goto joined_r0x010305b0;
  }
LAB_0102f8f8:
  if ((*(long *)*plVar13 != 0) && (*(int *)(*(long *)*plVar13 + 0x54) != 0)) {
    if (*(long *)*plVar13 == 0) {
      local_58 = 0;
    }
    else {
      FUN_01031a00(&local_58);
    }
    lVar9 = local_58;
    (**(code **)(*param_1 + 0x10))(&local_70,param_1);
    local_80 = local_70;
    local_70 = 0;
    FUN_0102db50(lVar9,&local_80);
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      local_80 = 0;
    }
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    if (local_58 != 0) {
LAB_0102f998:
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
  }
LAB_0102f9a8:
  *(undefined1 *)(*plVar13 + 0x18) = 0;
  *(undefined4 *)(*plVar13 + 0x44) = 1;
  *(undefined4 *)(*plVar13 + 0x4c) = *(undefined4 *)(*plVar13 + 0x24);
  *(undefined4 *)(*plVar13 + 0x50) = *(undefined4 *)(*plVar13 + 0x28);
  lVar9 = *(long *)(*plVar13 + 0x88);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
    piVar1 = (int *)(lVar9 + 0x54);
    iVar11 = *(int *)(lVar9 + 0x54);
    do {
      while( true ) {
        plVar14 = *(long **)(lVar9 + 0x58);
        lVar7 = FUN_01031780();
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_01030218;
          if (plVar14 == (long *)lVar7) break;
          plVar14 = (long *)*plVar14;
        }
        iVar3 = *piVar1;
        if (iVar3 != iVar11) break;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          if (*(long *)(lVar9 + 0x60) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar9 + 0x60) + -8) + 0x18))();
            lVar9 = *(long *)(*plVar13 + 0x90);
            if ((lVar9 == 0) || (*(int *)(lVar9 + 0x54) == 0)) goto LAB_010301a0;
            piVar1 = (int *)(lVar9 + 0x54);
            iVar11 = *(int *)(lVar9 + 0x54);
            goto LAB_0102fb24;
          }
          goto LAB_01030218;
        }
        iVar11 = iVar3;
        if (iVar3 == 0) goto LAB_01030218;
      }
      ClearExclusiveLocal();
      iVar11 = iVar3;
    } while (iVar3 != 0);
  }
LAB_01030218:
  (**(code **)(*param_1 + 0x50))(param_1,*(undefined4 *)(param_1[0xc] + 0x4c));
  return;
}


