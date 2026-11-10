/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd14d0; name: FUN_00dd14d0
 */


void FUN_00dd14d0(undefined8 *param_1,long param_2,uint param_3,ulong *param_4,undefined4 param_5,
                 long param_6,undefined8 param_7,undefined8 param_8,undefined8 *param_9)

{
  long *plVar1;
  int *piVar2;
  ulong *puVar3;
  ulong *puVar4;
  long *plVar5;
  ulong *puVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  int iVar23;
  undefined8 uVar24;
  long *plVar25;
  ulong uVar26;
  long local_70;
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
          if (cVar8 == '\0') goto LAB_00dd1570;
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
LAB_00dd1570:
  puVar6 = param_4 + 1;
  uVar16 = *(ulong *)(param_2 + 0x78);
  puVar3 = param_4;
  if (param_4[3] != 0) {
    puVar3 = puVar6;
  }
  uVar15 = *puVar3;
  uVar17 = uVar16 - 1;
  plVar25 = (long *)(param_2 + 0x70);
  uVar18 = uVar17 & uVar16;
  if (uVar18 == 0) {
    uVar26 = uVar17 & uVar15;
    plVar20 = *(long **)(*plVar25 + uVar26 * 8);
    if (plVar20 != (long *)0x0) goto LAB_00dd15bc;
    plVar21 = (long *)0x0;
  }
  else {
    uVar26 = uVar15;
    if (uVar16 <= uVar15) {
      uVar26 = 0;
      if (uVar16 != 0) {
        uVar26 = uVar15 / uVar16;
      }
      uVar26 = uVar15 - uVar26 * uVar16;
    }
    plVar20 = *(long **)(*plVar25 + uVar26 * 8);
    plVar21 = (long *)0x0;
    if (plVar20 != (long *)0x0) {
LAB_00dd15bc:
      plVar21 = (long *)*plVar20;
    }
  }
  if (plVar21 != (long *)0x0) {
    iVar23 = (int)param_4[5];
    if (param_4[3] == 0) {
      do {
        while( true ) {
          if ((int)plVar21[7] == iVar23) {
            lVar11 = 0x10;
            if (plVar21[5] != 0) {
              lVar11 = 0x18;
            }
            if ((*(ulong *)((long)plVar21 + lVar11) == uVar15) && (plVar21[8] == local_68))
            goto LAB_00dd17a8;
          }
          plVar21 = (long *)*plVar21;
          if (plVar21 == (long *)0x0) goto LAB_00dd1900;
          uVar19 = plVar21[1];
          if (uVar18 == 0) break;
          if (uVar16 <= uVar19) {
            uVar10 = 0;
            if (uVar16 != 0) {
              uVar10 = uVar19 / uVar16;
            }
            uVar19 = uVar19 - uVar10 * uVar16;
          }
          if (uVar19 != uVar26) goto LAB_00dd1900;
        }
      } while ((uVar19 & uVar17) == uVar26);
    }
    else if (uVar18 == 0) {
      do {
        if ((int)plVar21[7] == iVar23) {
          puVar3 = (ulong *)(plVar21 + 2);
          if (plVar21[5] != 0) {
            puVar3 = (ulong *)(plVar21 + 3);
          }
          if ((plVar21[5] == 0) || (*puVar3 != uVar15)) {
            if (*puVar3 == uVar15) goto LAB_00dd1780;
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
LAB_00dd1780:
              if (plVar21[8] == local_68) goto LAB_00dd17a8;
            }
          }
        }
        plVar21 = (long *)*plVar21;
      } while ((plVar21 != (long *)0x0) && ((plVar21[1] & uVar17) == uVar26));
    }
    else {
      do {
        if ((int)plVar21[7] == iVar23) {
          puVar3 = (ulong *)(plVar21 + 2);
          if (plVar21[5] != 0) {
            puVar3 = (ulong *)(plVar21 + 3);
          }
          if ((plVar21[5] == 0) || (*puVar3 != uVar15)) {
            if (*puVar3 == uVar15) goto LAB_00dd1650;
          }
          else {
            uVar18 = plVar21[2];
            plVar20 = (long *)PTR_DAT_02710920;
            if (uVar18 != 0) {
              plVar20 = (long *)(uVar18 + 0x58);
            }
            plVar22 = (long *)PTR_DAT_02710920;
            if (*param_4 != 0) {
              plVar22 = (long *)(*param_4 + 0x58);
            }
            if (*plVar20 == *plVar22) {
LAB_00dd1650:
              if (plVar21[8] == local_68) goto LAB_00dd17a8;
            }
          }
        }
        plVar21 = (long *)*plVar21;
        if (plVar21 == (long *)0x0) break;
        uVar18 = plVar21[1];
        if (uVar16 <= uVar18) {
          uVar17 = 0;
          if (uVar16 != 0) {
            uVar17 = uVar18 / uVar16;
          }
          uVar18 = uVar18 - uVar17 * uVar16;
        }
      } while (uVar18 == uVar26);
    }
  }
LAB_00dd1900:
  plVar21 = *(long **)(param_2 + 8);
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar11 + 0x80) < 0x10) {
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar21;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    plVar20 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x240,0x10);
    if (plVar20 == (long *)0x0) {
      (**(code **)(*plVar21 + 0xb8))(plVar21);
    }
    FUN_007553b0(plVar20,param_4,local_68,param_8,*param_9);
    plVar20[1] = (long)plVar21;
    plVar20[2] = (long)plVar20;
    plVar20[3] = 0x240;
    plVar20[4] = 0x10;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    if (plVar20 != (long *)0x0) {
      (**(code **)(plVar20[9] + 0x10))();
    }
    uVar16 = *(ulong *)(param_2 + 0x78);
    plVar22 = *(long **)(*(long *)(param_2 + 0x70) + uVar26 * 8);
    plVar21 = (long *)0x0;
    if (plVar22 != (long *)0x0) {
      plVar21 = (long *)*plVar22;
    }
    if (plVar21 != (long *)0x0) {
      if ((uVar16 - 1 & uVar16) == 0) {
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
              if (*puVar3 == *puVar4) goto LAB_00dd1b28;
            }
            else {
              uVar18 = plVar21[2];
              plVar22 = (long *)PTR_DAT_02710920;
              if (uVar18 != 0) {
                plVar22 = (long *)(uVar18 + 0x58);
              }
              plVar5 = (long *)PTR_DAT_02710920;
              if (*param_4 != 0) {
                plVar5 = (long *)(*param_4 + 0x58);
              }
              if (*plVar22 == *plVar5) {
LAB_00dd1b28:
                if ((plVar21[9] == 0) || (*(int *)(plVar21[9] + 0x54) == 0)) goto LAB_00dd1b58;
              }
            }
          }
          plVar21 = (long *)*plVar21;
        } while ((plVar21 != (long *)0x0) && ((plVar21[1] & uVar16 - 1) == uVar26));
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
              if (*puVar3 == *puVar4) goto LAB_00dd1a60;
            }
            else {
              uVar18 = plVar21[2];
              plVar22 = (long *)PTR_DAT_02710920;
              if (uVar18 != 0) {
                plVar22 = (long *)(uVar18 + 0x58);
              }
              plVar5 = (long *)PTR_DAT_02710920;
              if (*param_4 != 0) {
                plVar5 = (long *)(*param_4 + 0x58);
              }
              if (*plVar22 == *plVar5) {
LAB_00dd1a60:
                if ((plVar21[9] == 0) || (*(int *)(plVar21[9] + 0x54) == 0)) goto LAB_00dd1b58;
              }
            }
          }
          plVar21 = (long *)*plVar21;
          if (plVar21 == (long *)0x0) break;
          uVar18 = plVar21[1];
          if (uVar16 <= uVar18) {
            uVar15 = 0;
            if (uVar16 != 0) {
              uVar15 = uVar18 / uVar16;
            }
            uVar18 = uVar18 - uVar15 * uVar16;
          }
        } while (uVar18 == uVar26);
      }
    }
LAB_00dd1bb8:
    (**(code **)(*plVar20 + 0x10))(&local_70,plVar20);
    lVar12 = local_68;
    lVar11 = local_70;
    local_70 = 0;
    uVar16 = param_4[3];
    uVar15 = param_4[4];
    uVar18 = param_4[1];
    uVar17 = param_4[2];
    uVar26 = uVar16;
    if (uVar15 != 0) {
      (**(code **)(*(long *)(uVar15 + 0x48) + 0x10))();
      uVar26 = param_4[3];
    }
    uVar19 = param_4[5];
    if (uVar26 == 0) {
      uVar26 = *param_4;
    }
    else {
      uVar26 = *param_4;
      if (uVar26 != 0) {
        (**(code **)(*(long *)(uVar26 + 0x48) + 0x10))();
      }
    }
    puVar13 = (undefined8 *)
              (**(code **)(**(long **)(param_2 + 0xa0) + 0x10))(*(long **)(param_2 + 0xa0),0x50,8);
    if (puVar13 == (undefined8 *)0x0) {
      (**(code **)(**(long **)(param_2 + 0xa0) + 0xb8))();
    }
    uVar24 = *(undefined8 *)(param_2 + 0xa0);
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar14 + 0x80) < 0x10) {
      *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar24;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
      puVar13[3] = uVar18;
      puVar13[4] = uVar17;
      puVar13[5] = uVar16;
      puVar13[6] = uVar15;
      *(int *)(puVar13 + 7) = (int)uVar19;
      puVar13[2] = uVar26;
      puVar13[8] = lVar12;
      puVar13[9] = lVar11;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      puVar6 = puVar13 + 2;
      if (puVar13[5] != 0) {
        puVar6 = puVar13 + 3;
      }
      uVar16 = *puVar6;
      *puVar13 = 0;
      puVar13[1] = uVar16;
      FUN_0010e040(plVar25,puVar13);
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
LAB_00dd1d08:
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
        uVar24 = *(undefined8 *)(param_2 + 0x138);
      }
      else {
        uVar24 = *(undefined8 *)(param_2 + 0x140);
      }
      FUN_006e6060(uVar24,plVar20,param_5);
      *param_1 = plVar20;
      if (plVar20 != (long *)0x0) {
        plVar20 = plVar20 + 9;
        (**(code **)(*plVar20 + 0x10))(plVar20);
        (**(code **)(*plVar20 + 0x18))(plVar20);
      }
      return;
    }
  }
LAB_00dd1dcc:
                    /* WARNING: Subroutine does not return */
  abort();
LAB_00dd17a8:
  if (plVar21 != (long *)0x0) {
    lVar11 = plVar21[9];
    if ((lVar11 != 0) && (*(int *)(lVar11 + 0x54) != 0)) {
      piVar2 = (int *)(lVar11 + 0x54);
      iVar23 = *(int *)(lVar11 + 0x54);
      do {
        plVar25 = *(long **)(lVar11 + 0x58);
        lVar12 = FUN_006dda80();
        while( true ) {
          if (plVar25 == (long *)0x0) goto LAB_00dd180c;
          if (plVar25 == (long *)lVar12) break;
          plVar25 = (long *)*plVar25;
        }
        iVar7 = *piVar2;
        if (iVar7 == iVar23) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = iVar23 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') {
            if (*(long *)(lVar11 + 0x60) != 0) {
              plVar20 = (long *)(*(long *)(lVar11 + 0x60) + -0x50);
              goto LAB_00dd1d08;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar23 = iVar7;
      } while (iVar7 != 0);
    }
LAB_00dd180c:
    plVar25 = *(long **)(param_2 + 8);
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar11 + 0x80) < 0x10) {
      *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar25;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      plVar20 = (long *)(**(code **)(*plVar25 + 0x10))(plVar25,0x240,0x10);
      if (plVar20 == (long *)0x0) {
        (**(code **)(*plVar25 + 0xb8))(plVar25);
      }
      FUN_007553b0(plVar20,param_4,local_68,param_8,*param_9);
      plVar20[1] = (long)plVar25;
      plVar20[2] = (long)plVar20;
      plVar20[3] = 0x240;
      plVar20[4] = 0x10;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      if (plVar20 != (long *)0x0) {
        (**(code **)(plVar20[9] + 0x10))();
      }
      (**(code **)(*plVar20 + 0x10))(&local_70,plVar20);
      if (plVar21[9] != 0) {
        (**(code **)(*(long *)(plVar21[9] + 0x48) + 0x18))();
        plVar21[9] = 0;
      }
      plVar21[9] = local_70;
      goto LAB_00dd1d08;
    }
    goto LAB_00dd1dcc;
  }
  goto LAB_00dd1900;
LAB_00dd1b58:
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x10))(&local_70,plVar20);
    lVar11 = local_70;
    local_70 = 0;
    plVar21[8] = local_68;
    if (plVar21[9] == 0) {
      plVar21[9] = lVar11;
    }
    else {
      (**(code **)(*(long *)(plVar21[9] + 0x48) + 0x18))();
      plVar21[9] = lVar11;
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
    }
    goto LAB_00dd1d08;
  }
  goto LAB_00dd1bb8;
}


