/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a8ba70; name: FUN_00a8ba70
 */


void FUN_00a8ba70(undefined8 *param_1,long param_2,uint param_3,ulong *param_4,undefined4 param_5,
                 long param_6,undefined8 param_7)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  long *plVar6;
  ulong *puVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  int iVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long local_70;
  long local_68;
  
  local_68 = param_6;
  if (param_6 == 0) {
    local_68 = *(long *)(param_2 + 8);
  }
  lVar12 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_2 + 0x130);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x124));
        while (*plVar1 == 0) {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar12;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') goto LAB_00a8bb00;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar12;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
LAB_00a8bb00:
  puVar7 = param_4 + 1;
  uVar17 = *(ulong *)(param_2 + 0x78);
  uVar18 = uVar17 - 1;
  puVar4 = param_4;
  if (param_4[3] != 0) {
    puVar4 = puVar7;
  }
  uVar3 = uVar18 & uVar17;
  uVar16 = *puVar4;
  plVar23 = (long *)(param_2 + 0x70);
  if (uVar3 == 0) {
    uVar20 = uVar18 & uVar16;
    plVar25 = *(long **)(*plVar23 + uVar20 * 8);
    if (plVar25 != (long *)0x0) goto LAB_00a8bb4c;
    plVar26 = (long *)0x0;
  }
  else {
    uVar20 = uVar16;
    if (uVar17 <= uVar16) {
      uVar20 = 0;
      if (uVar17 != 0) {
        uVar20 = uVar16 / uVar17;
      }
      uVar20 = uVar16 - uVar20 * uVar17;
    }
    plVar25 = *(long **)(*plVar23 + uVar20 * 8);
    plVar26 = (long *)0x0;
    if (plVar25 != (long *)0x0) {
LAB_00a8bb4c:
      plVar26 = (long *)*plVar25;
    }
  }
  if (plVar26 != (long *)0x0) {
    iVar22 = (int)param_4[5];
    if (param_4[3] == 0) {
      do {
        while( true ) {
          if ((int)plVar26[7] == iVar22) {
            lVar12 = 0x10;
            if (plVar26[5] != 0) {
              lVar12 = 0x18;
            }
            if ((*(ulong *)((long)plVar26 + lVar12) == uVar16) && (plVar26[8] == local_68))
            goto LAB_00a8bd38;
          }
          plVar26 = (long *)*plVar26;
          if (plVar26 == (long *)0x0) goto LAB_00a8be8c;
          uVar19 = plVar26[1];
          if (uVar3 == 0) break;
          if (uVar17 <= uVar19) {
            uVar11 = 0;
            if (uVar17 != 0) {
              uVar11 = uVar19 / uVar17;
            }
            uVar19 = uVar19 - uVar11 * uVar17;
          }
          if (uVar19 != uVar20) goto LAB_00a8be8c;
        }
      } while ((uVar19 & uVar18) == uVar20);
    }
    else if (uVar3 == 0) {
      do {
        if ((int)plVar26[7] == iVar22) {
          puVar4 = (ulong *)(plVar26 + 2);
          if (plVar26[5] != 0) {
            puVar4 = (ulong *)(plVar26 + 3);
          }
          if ((plVar26[5] == 0) || (*puVar4 != uVar16)) {
            if (*puVar4 == uVar16) goto LAB_00a8bd10;
          }
          else {
            uVar17 = plVar26[2];
            plVar25 = (long *)PTR_DAT_02710920;
            if (uVar17 != 0) {
              plVar25 = (long *)(uVar17 + 0x58);
            }
            plVar24 = (long *)PTR_DAT_02710920;
            if (*param_4 != 0) {
              plVar24 = (long *)(*param_4 + 0x58);
            }
            if (*plVar25 == *plVar24) {
LAB_00a8bd10:
              if (plVar26[8] == local_68) goto LAB_00a8bd38;
            }
          }
        }
        plVar26 = (long *)*plVar26;
      } while ((plVar26 != (long *)0x0) && ((plVar26[1] & uVar18) == uVar20));
    }
    else {
      do {
        if ((int)plVar26[7] == iVar22) {
          puVar4 = (ulong *)(plVar26 + 2);
          if (plVar26[5] != 0) {
            puVar4 = (ulong *)(plVar26 + 3);
          }
          if ((plVar26[5] == 0) || (*puVar4 != uVar16)) {
            if (*puVar4 == uVar16) goto LAB_00a8bbe0;
          }
          else {
            uVar18 = plVar26[2];
            plVar25 = (long *)PTR_DAT_02710920;
            if (uVar18 != 0) {
              plVar25 = (long *)(uVar18 + 0x58);
            }
            plVar24 = (long *)PTR_DAT_02710920;
            if (*param_4 != 0) {
              plVar24 = (long *)(*param_4 + 0x58);
            }
            if (*plVar25 == *plVar24) {
LAB_00a8bbe0:
              if (plVar26[8] == local_68) goto LAB_00a8bd38;
            }
          }
        }
        plVar26 = (long *)*plVar26;
        if (plVar26 == (long *)0x0) break;
        uVar18 = plVar26[1];
        if (uVar17 <= uVar18) {
          uVar3 = 0;
          if (uVar17 != 0) {
            uVar3 = uVar18 / uVar17;
          }
          uVar18 = uVar18 - uVar3 * uVar17;
        }
      } while (uVar18 == uVar20);
    }
  }
LAB_00a8be8c:
  plVar26 = *(long **)(param_2 + 8);
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar12 + 0x80) < 0x10) {
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar26;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    plVar25 = (long *)(**(code **)(*plVar26 + 0x10))(plVar26,0x1a0,8);
    if (plVar25 == (long *)0x0) {
      (**(code **)(*plVar26 + 0xb8))(plVar26);
    }
    FUN_0078e400(plVar25,param_4,local_68);
    plVar25[1] = (long)plVar26;
    plVar25[2] = (long)plVar25;
    plVar25[3] = 0x1a0;
    plVar25[4] = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    if (plVar25 != (long *)0x0) {
      (**(code **)(plVar25[9] + 0x10))();
    }
    uVar17 = *(ulong *)(param_2 + 0x78);
    plVar24 = *(long **)(*(long *)(param_2 + 0x70) + uVar20 * 8);
    plVar26 = (long *)0x0;
    if (plVar24 != (long *)0x0) {
      plVar26 = (long *)*plVar24;
    }
    if (plVar26 != (long *)0x0) {
      if ((uVar17 - 1 & uVar17) == 0) {
        do {
          if ((int)plVar26[7] == (int)param_4[5]) {
            puVar4 = (ulong *)(plVar26 + 2);
            if (plVar26[5] != 0) {
              puVar4 = (ulong *)(plVar26 + 3);
            }
            puVar5 = param_4;
            if (param_4[3] != 0) {
              puVar5 = puVar7;
            }
            if (((param_4[3] == 0) || (plVar26[5] == 0)) || (*puVar4 != *puVar5)) {
              if (*puVar4 == *puVar5) goto LAB_00a8c0b0;
            }
            else {
              uVar18 = plVar26[2];
              plVar24 = (long *)PTR_DAT_02710920;
              if (uVar18 != 0) {
                plVar24 = (long *)(uVar18 + 0x58);
              }
              plVar6 = (long *)PTR_DAT_02710920;
              if (*param_4 != 0) {
                plVar6 = (long *)(*param_4 + 0x58);
              }
              if (*plVar24 == *plVar6) {
LAB_00a8c0b0:
                if ((plVar26[9] == 0) || (*(int *)(plVar26[9] + 0x54) == 0)) goto LAB_00a8c0e0;
              }
            }
          }
          plVar26 = (long *)*plVar26;
        } while ((plVar26 != (long *)0x0) && ((plVar26[1] & uVar17 - 1) == uVar20));
      }
      else {
        do {
          if ((int)plVar26[7] == (int)param_4[5]) {
            puVar4 = (ulong *)(plVar26 + 2);
            if (plVar26[5] != 0) {
              puVar4 = (ulong *)(plVar26 + 3);
            }
            puVar5 = param_4;
            if (param_4[3] != 0) {
              puVar5 = puVar7;
            }
            if (((param_4[3] == 0) || (plVar26[5] == 0)) || (*puVar4 != *puVar5)) {
              if (*puVar4 == *puVar5) goto LAB_00a8bfe8;
            }
            else {
              uVar18 = plVar26[2];
              plVar24 = (long *)PTR_DAT_02710920;
              if (uVar18 != 0) {
                plVar24 = (long *)(uVar18 + 0x58);
              }
              plVar6 = (long *)PTR_DAT_02710920;
              if (*param_4 != 0) {
                plVar6 = (long *)(*param_4 + 0x58);
              }
              if (*plVar24 == *plVar6) {
LAB_00a8bfe8:
                if ((plVar26[9] == 0) || (*(int *)(plVar26[9] + 0x54) == 0)) goto LAB_00a8c0e0;
              }
            }
          }
          plVar26 = (long *)*plVar26;
          if (plVar26 == (long *)0x0) break;
          uVar18 = plVar26[1];
          if (uVar17 <= uVar18) {
            uVar3 = 0;
            if (uVar17 != 0) {
              uVar3 = uVar18 / uVar17;
            }
            uVar18 = uVar18 - uVar3 * uVar17;
          }
        } while (uVar18 == uVar20);
      }
    }
LAB_00a8c140:
    (**(code **)(*plVar25 + 0x10))(&local_70,plVar25);
    lVar13 = local_68;
    lVar12 = local_70;
    local_70 = 0;
    uVar17 = param_4[3];
    uVar3 = param_4[4];
    uVar18 = param_4[1];
    uVar16 = param_4[2];
    uVar20 = uVar17;
    if (uVar3 != 0) {
      (**(code **)(*(long *)(uVar3 + 0x48) + 0x10))();
      uVar20 = param_4[3];
    }
    uVar19 = param_4[5];
    if (uVar20 == 0) {
      uVar20 = *param_4;
    }
    else {
      uVar20 = *param_4;
      if (uVar20 != 0) {
        (**(code **)(*(long *)(uVar20 + 0x48) + 0x10))();
      }
    }
    puVar14 = (undefined8 *)
              (**(code **)(**(long **)(param_2 + 0xa0) + 0x10))(*(long **)(param_2 + 0xa0),0x50,8);
    if (puVar14 == (undefined8 *)0x0) {
      (**(code **)(**(long **)(param_2 + 0xa0) + 0xb8))();
    }
    uVar21 = *(undefined8 *)(param_2 + 0xa0);
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar15 + 0x80) < 0x10) {
      *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar21;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
      puVar14[3] = uVar18;
      puVar14[4] = uVar16;
      puVar14[5] = uVar17;
      puVar14[8] = lVar13;
      puVar14[6] = uVar3;
      *(int *)(puVar14 + 7) = (int)uVar19;
      puVar14[2] = uVar20;
      puVar14[9] = lVar12;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
      puVar7 = puVar14 + 2;
      if (puVar14[5] != 0) {
        puVar7 = puVar14 + 3;
      }
      uVar17 = *puVar7;
      *puVar14 = 0;
      puVar14[1] = uVar17;
      FUN_0010e040(plVar23,puVar14);
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
LAB_00a8c294:
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = 0;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x124));
      if (*(char *)(param_2 + 0x14b) == '\0') {
        FUN_006e1a40(plVar25,param_7);
      }
      else {
        FUN_006e1a40(plVar25,0);
      }
      if (param_3 < 2) {
        uVar21 = *(undefined8 *)(param_2 + 0x138);
      }
      else {
        uVar21 = *(undefined8 *)(param_2 + 0x140);
      }
      FUN_006e6060(uVar21,plVar25,param_5);
      *param_1 = plVar25;
      if (plVar25 != (long *)0x0) {
        plVar25 = plVar25 + 9;
        (**(code **)(*plVar25 + 0x10))(plVar25);
        (**(code **)(*plVar25 + 0x18))(plVar25);
      }
      return;
    }
  }
LAB_00a8c360:
                    /* WARNING: Subroutine does not return */
  abort();
LAB_00a8bd38:
  if (plVar26 != (long *)0x0) {
    lVar12 = plVar26[9];
    if ((lVar12 != 0) && (*(int *)(lVar12 + 0x54) != 0)) {
      piVar2 = (int *)(lVar12 + 0x54);
      iVar22 = *(int *)(lVar12 + 0x54);
      do {
        plVar23 = *(long **)(lVar12 + 0x58);
        lVar13 = FUN_006dda80();
        while( true ) {
          if (plVar23 == (long *)0x0) goto LAB_00a8bd98;
          if (plVar23 == (long *)lVar13) break;
          plVar23 = (long *)*plVar23;
        }
        iVar8 = *piVar2;
        if (iVar8 == iVar22) {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar10) {
            *piVar2 = iVar22 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') {
            if (*(long *)(lVar12 + 0x60) != 0) {
              plVar25 = (long *)(*(long *)(lVar12 + 0x60) + -0x50);
              goto LAB_00a8c294;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar22 = iVar8;
      } while (iVar8 != 0);
    }
LAB_00a8bd98:
    plVar23 = *(long **)(param_2 + 8);
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar12 + 0x80) < 0x10) {
      *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar23;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      plVar25 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x1a0,8);
      if (plVar25 == (long *)0x0) {
        (**(code **)(*plVar23 + 0xb8))(plVar23);
      }
      FUN_0078e400(plVar25,param_4,local_68);
      plVar25[1] = (long)plVar23;
      plVar25[2] = (long)plVar25;
      plVar25[3] = 0x1a0;
      plVar25[4] = 8;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      if (plVar25 != (long *)0x0) {
        (**(code **)(plVar25[9] + 0x10))();
      }
      (**(code **)(*plVar25 + 0x10))(&local_70,plVar25);
      if (plVar26[9] != 0) {
        (**(code **)(*(long *)(plVar26[9] + 0x48) + 0x18))();
        plVar26[9] = 0;
      }
      plVar26[9] = local_70;
      goto LAB_00a8c294;
    }
    goto LAB_00a8c360;
  }
  goto LAB_00a8be8c;
LAB_00a8c0e0:
  if (plVar26 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x10))(&local_70,plVar25);
    lVar12 = local_70;
    local_70 = 0;
    plVar26[8] = local_68;
    if (plVar26[9] == 0) {
      plVar26[9] = lVar12;
    }
    else {
      (**(code **)(*(long *)(plVar26[9] + 0x48) + 0x18))();
      plVar26[9] = lVar12;
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
    }
    goto LAB_00a8c294;
  }
  goto LAB_00a8c140;
}


