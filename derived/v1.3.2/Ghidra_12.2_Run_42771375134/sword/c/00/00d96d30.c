/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d96d30; name: FUN_00d96d30
 */


void FUN_00d96d30(undefined8 *param_1,long param_2,uint param_3,ulong *param_4,undefined4 param_5,
                 long param_6,undefined8 param_7)

{
  long *plVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long *plVar5;
  ulong *puVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *local_70;
  long local_68;
  
  local_68 = param_6;
  if (param_6 == 0) {
    local_68 = *(long *)(param_2 + 8);
  }
  lVar11 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_2 + 0x130);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x124));
        while (*plVar1 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar11;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_00d96dc0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar11;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_00d96dc0:
  puVar6 = param_4 + 1;
  uVar15 = *(ulong *)(param_2 + 0x78);
  uVar16 = uVar15 - 1;
  puVar3 = param_4;
  if (param_4[3] != 0) {
    puVar3 = puVar6;
  }
  uVar2 = uVar16 & uVar15;
  uVar14 = *puVar3;
  plVar23 = (long *)(param_2 + 0x70);
  if (uVar2 == 0) {
    uVar18 = uVar16 & uVar14;
    plVar20 = *(long **)(*plVar23 + uVar18 * 8);
    if (plVar20 != (long *)0x0) goto LAB_00d96e0c;
    plVar21 = (long *)0x0;
  }
  else {
    uVar18 = uVar14;
    if (uVar15 <= uVar14) {
      uVar18 = 0;
      if (uVar15 != 0) {
        uVar18 = uVar14 / uVar15;
      }
      uVar18 = uVar14 - uVar18 * uVar15;
    }
    plVar20 = *(long **)(*plVar23 + uVar18 * 8);
    plVar21 = (long *)0x0;
    if (plVar20 != (long *)0x0) {
LAB_00d96e0c:
      plVar21 = (long *)*plVar20;
    }
  }
  if (plVar21 != (long *)0x0) {
    iVar7 = (int)param_4[5];
    if (param_4[3] == 0) {
      do {
        while( true ) {
          if ((int)plVar21[7] == iVar7) {
            lVar11 = 0x10;
            if (plVar21[5] != 0) {
              lVar11 = 0x18;
            }
            if ((*(ulong *)((long)plVar21 + lVar11) == uVar14) && (plVar21[8] == local_68))
            goto LAB_00d96ff0;
          }
          plVar21 = (long *)*plVar21;
          if (plVar21 == (long *)0x0) goto LAB_00d97010;
          uVar17 = plVar21[1];
          if (uVar2 == 0) break;
          if (uVar15 <= uVar17) {
            uVar10 = 0;
            if (uVar15 != 0) {
              uVar10 = uVar17 / uVar15;
            }
            uVar17 = uVar17 - uVar10 * uVar15;
          }
          if (uVar17 != uVar18) goto LAB_00d97010;
        }
      } while ((uVar17 & uVar16) == uVar18);
    }
    else if (uVar2 == 0) {
      do {
        if ((int)plVar21[7] == iVar7) {
          puVar3 = (ulong *)(plVar21 + 2);
          if (plVar21[5] != 0) {
            puVar3 = (ulong *)(plVar21 + 3);
          }
          if ((plVar21[5] == 0) || (*puVar3 != uVar14)) {
            if (*puVar3 == uVar14) goto LAB_00d96fc8;
          }
          else {
            uVar15 = plVar21[2];
            plVar20 = (long *)PTR_DAT_02710920;
            if (uVar15 != 0) {
              plVar20 = (long *)(uVar15 + 0x58);
            }
            plVar22 = (long *)PTR_DAT_02710920;
            if (*param_4 != 0) {
              plVar22 = (long *)(*param_4 + 0x58);
            }
            if (*plVar20 == *plVar22) {
LAB_00d96fc8:
              if (plVar21[8] == local_68) goto LAB_00d96ff0;
            }
          }
        }
        plVar21 = (long *)*plVar21;
      } while ((plVar21 != (long *)0x0) && ((plVar21[1] & uVar16) == uVar18));
    }
    else {
      do {
        if ((int)plVar21[7] == iVar7) {
          puVar3 = (ulong *)(plVar21 + 2);
          if (plVar21[5] != 0) {
            puVar3 = (ulong *)(plVar21 + 3);
          }
          if ((plVar21[5] == 0) || (*puVar3 != uVar14)) {
            if (*puVar3 == uVar14) goto LAB_00d96e98;
          }
          else {
            uVar16 = plVar21[2];
            plVar20 = (long *)PTR_DAT_02710920;
            if (uVar16 != 0) {
              plVar20 = (long *)(uVar16 + 0x58);
            }
            plVar22 = (long *)PTR_DAT_02710920;
            if (*param_4 != 0) {
              plVar22 = (long *)(*param_4 + 0x58);
            }
            if (*plVar20 == *plVar22) {
LAB_00d96e98:
              if (plVar21[8] == local_68) goto LAB_00d96ff0;
            }
          }
        }
        plVar21 = (long *)*plVar21;
        if (plVar21 == (long *)0x0) break;
        uVar16 = plVar21[1];
        if (uVar15 <= uVar16) {
          uVar2 = 0;
          if (uVar15 != 0) {
            uVar2 = uVar16 / uVar15;
          }
          uVar16 = uVar16 - uVar2 * uVar15;
        }
      } while (uVar16 == uVar18);
    }
  }
LAB_00d97010:
  plVar21 = *(long **)(param_2 + 8);
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar11 + 0x80) < 0x10) {
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar21;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    plVar20 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x1a0,8);
    if (plVar20 == (long *)0x0) {
      (**(code **)(*plVar21 + 0xb8))(plVar21);
    }
    FUN_007893b0(plVar20,param_4,local_68);
    plVar20[1] = (long)plVar21;
    plVar20[2] = (long)plVar20;
    plVar20[3] = 0x1a0;
    plVar20[4] = 8;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    if (plVar20 != (long *)0x0) {
      (**(code **)(plVar20[9] + 0x10))();
    }
    uVar15 = *(ulong *)(param_2 + 0x78);
    plVar22 = *(long **)(*(long *)(param_2 + 0x70) + uVar18 * 8);
    plVar21 = (long *)0x0;
    if (plVar22 != (long *)0x0) {
      plVar21 = (long *)*plVar22;
    }
    if (plVar21 != (long *)0x0) {
      if ((uVar15 - 1 & uVar15) == 0) {
        do {
          if ((int)plVar21[7] == (int)param_4[5]) {
            puVar3 = (ulong *)(plVar21 + 2);
            if (plVar21[5] != 0) {
              puVar3 = (ulong *)(plVar21 + 3);
            }
            puVar4 = param_4;
            if (param_4[3] != 0) {
              puVar4 = puVar6;
            }
            if (((param_4[3] == 0) || (plVar21[5] == 0)) || (*puVar3 != *puVar4)) {
              if (*puVar3 == *puVar4) goto LAB_00d97234;
            }
            else {
              uVar16 = plVar21[2];
              plVar22 = (long *)PTR_DAT_02710920;
              if (uVar16 != 0) {
                plVar22 = (long *)(uVar16 + 0x58);
              }
              plVar5 = (long *)PTR_DAT_02710920;
              if (*param_4 != 0) {
                plVar5 = (long *)(*param_4 + 0x58);
              }
              if (*plVar22 == *plVar5) {
LAB_00d97234:
                if ((plVar21[9] == 0) || (*(int *)(plVar21[9] + 0x54) == 0)) goto LAB_00d97264;
              }
            }
          }
          plVar21 = (long *)*plVar21;
        } while ((plVar21 != (long *)0x0) && ((plVar21[1] & uVar15 - 1) == uVar18));
      }
      else {
        do {
          if ((int)plVar21[7] == (int)param_4[5]) {
            puVar3 = (ulong *)(plVar21 + 2);
            if (plVar21[5] != 0) {
              puVar3 = (ulong *)(plVar21 + 3);
            }
            puVar4 = param_4;
            if (param_4[3] != 0) {
              puVar4 = puVar6;
            }
            if (((param_4[3] == 0) || (plVar21[5] == 0)) || (*puVar3 != *puVar4)) {
              if (*puVar3 == *puVar4) goto LAB_00d9716c;
            }
            else {
              uVar16 = plVar21[2];
              plVar22 = (long *)PTR_DAT_02710920;
              if (uVar16 != 0) {
                plVar22 = (long *)(uVar16 + 0x58);
              }
              plVar5 = (long *)PTR_DAT_02710920;
              if (*param_4 != 0) {
                plVar5 = (long *)(*param_4 + 0x58);
              }
              if (*plVar22 == *plVar5) {
LAB_00d9716c:
                if ((plVar21[9] == 0) || (*(int *)(plVar21[9] + 0x54) == 0)) goto LAB_00d97264;
              }
            }
          }
          plVar21 = (long *)*plVar21;
          if (plVar21 == (long *)0x0) break;
          uVar16 = plVar21[1];
          if (uVar15 <= uVar16) {
            uVar2 = 0;
            if (uVar15 != 0) {
              uVar2 = uVar16 / uVar15;
            }
            uVar16 = uVar16 - uVar2 * uVar15;
          }
        } while (uVar16 == uVar18);
      }
    }
LAB_00d972c0:
    (**(code **)(*plVar20 + 0x10))(&local_70,plVar20);
    lVar11 = local_68;
    plVar21 = local_70;
    local_70 = (long *)0x0;
    uVar15 = param_4[3];
    uVar2 = param_4[4];
    uVar16 = param_4[1];
    uVar14 = param_4[2];
    uVar18 = uVar15;
    if (uVar2 != 0) {
      (**(code **)(*(long *)(uVar2 + 0x48) + 0x10))();
      uVar18 = param_4[3];
    }
    uVar17 = param_4[5];
    if (uVar18 == 0) {
      uVar18 = *param_4;
    }
    else {
      uVar18 = *param_4;
      if (uVar18 != 0) {
        (**(code **)(*(long *)(uVar18 + 0x48) + 0x10))();
      }
    }
    puVar12 = (undefined8 *)
              (**(code **)(**(long **)(param_2 + 0xa0) + 0x10))(*(long **)(param_2 + 0xa0),0x50,8);
    if (puVar12 == (undefined8 *)0x0) {
      (**(code **)(**(long **)(param_2 + 0xa0) + 0xb8))();
    }
    uVar19 = *(undefined8 *)(param_2 + 0xa0);
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar13 + 0x80) < 0x10) {
      *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar19;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
      puVar12[3] = uVar16;
      puVar12[4] = uVar14;
      puVar12[5] = uVar15;
      puVar12[8] = lVar11;
      puVar12[6] = uVar2;
      *(int *)(puVar12 + 7) = (int)uVar17;
      puVar12[2] = uVar18;
      puVar12[9] = plVar21;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
      puVar6 = puVar12 + 2;
      if (puVar12[5] != 0) {
        puVar6 = puVar12 + 3;
      }
      uVar15 = *puVar6;
      *puVar12 = 0;
      puVar12[1] = uVar15;
      FUN_0010e040(plVar23,puVar12);
      if (local_70 != (long *)0x0) {
        (**(code **)(local_70[9] + 0x18))();
        local_70 = (long *)0x0;
      }
LAB_00d97418:
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = 0;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x124));
      if (*(char *)(param_2 + 0x14b) == '\0') {
        FUN_006e1a40(plVar20,param_7);
      }
      else {
        FUN_006e1a40(plVar20,0);
      }
      if (param_3 < 2) {
        uVar19 = *(undefined8 *)(param_2 + 0x138);
      }
      else {
        uVar19 = *(undefined8 *)(param_2 + 0x140);
      }
      FUN_006e6060(uVar19,plVar20,param_5);
      *param_1 = plVar20;
      if (plVar20 != (long *)0x0) {
        plVar20 = plVar20 + 9;
        (**(code **)(*plVar20 + 0x10))(plVar20);
        (**(code **)(*plVar20 + 0x18))(plVar20);
      }
      return;
    }
  }
LAB_00d975bc:
                    /* WARNING: Subroutine does not return */
  abort();
LAB_00d96ff0:
  if (plVar21 != (long *)0x0) {
    if ((plVar21[9] != 0) && (FUN_0010e8f0(&local_70), plVar20 = local_70, local_70 != (long *)0x0))
    goto LAB_00d97418;
    plVar23 = *(long **)(param_2 + 8);
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar11 + 0x80) < 0x10) {
      *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar23;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      plVar20 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x1a0,8);
      if (plVar20 == (long *)0x0) {
        (**(code **)(*plVar23 + 0xb8))(plVar23);
      }
      FUN_007893b0(plVar20,param_4,local_68);
      plVar20[1] = (long)plVar23;
      plVar20[2] = (long)plVar20;
      plVar20[3] = 0x1a0;
      plVar20[4] = 8;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      if (plVar20 != (long *)0x0) {
        (**(code **)(plVar20[9] + 0x10))();
      }
      (**(code **)(*plVar20 + 0x10))(&local_70,plVar20);
      if (plVar21[9] != 0) {
        (**(code **)(*(long *)(plVar21[9] + 0x48) + 0x18))();
        plVar21[9] = 0;
      }
      plVar21[9] = (long)local_70;
      goto LAB_00d97418;
    }
    goto LAB_00d975bc;
  }
  goto LAB_00d97010;
LAB_00d97264:
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x10))(&local_70,plVar20);
    plVar23 = local_70;
    local_70 = (long *)0x0;
    plVar21[8] = local_68;
    if (plVar21[9] == 0) {
      plVar21[9] = (long)plVar23;
    }
    else {
      (**(code **)(*(long *)(plVar21[9] + 0x48) + 0x18))();
      plVar21[9] = (long)plVar23;
      if (local_70 != (long *)0x0) {
        (**(code **)(local_70[9] + 0x18))();
        local_70 = (long *)0x0;
      }
    }
    goto LAB_00d97418;
  }
  goto LAB_00d972c0;
}


