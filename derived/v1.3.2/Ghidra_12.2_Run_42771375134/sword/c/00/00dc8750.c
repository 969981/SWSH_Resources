/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc8750; name: FUN_00dc8750
 */


void FUN_00dc8750(undefined8 *param_1,long param_2,uint param_3,ulong *param_4,undefined4 param_5,
                 long param_6,undefined8 param_7)

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
  undefined8 uVar23;
  int iVar24;
  ulong uVar25;
  long *plVar26;
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
          if (cVar8 == '\0') goto LAB_00dc87e0;
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
LAB_00dc87e0:
  puVar6 = param_4 + 1;
  uVar17 = *(ulong *)(param_2 + 0x78);
  uVar18 = uVar17 - 1;
  puVar3 = param_4;
  if (param_4[3] != 0) {
    puVar3 = puVar6;
  }
  uVar16 = uVar18 & uVar17;
  uVar15 = *puVar3;
  plVar26 = (long *)(param_2 + 0x70);
  if (uVar16 == 0) {
    uVar25 = uVar18 & uVar15;
    plVar20 = *(long **)(*plVar26 + uVar25 * 8);
    if (plVar20 != (long *)0x0) goto LAB_00dc882c;
    plVar21 = (long *)0x0;
  }
  else {
    uVar25 = uVar15;
    if (uVar17 <= uVar15) {
      uVar25 = 0;
      if (uVar17 != 0) {
        uVar25 = uVar15 / uVar17;
      }
      uVar25 = uVar15 - uVar25 * uVar17;
    }
    plVar20 = *(long **)(*plVar26 + uVar25 * 8);
    plVar21 = (long *)0x0;
    if (plVar20 != (long *)0x0) {
LAB_00dc882c:
      plVar21 = (long *)*plVar20;
    }
  }
  if (plVar21 != (long *)0x0) {
    iVar24 = (int)param_4[5];
    if (param_4[3] == 0) {
      do {
        while( true ) {
          if ((int)plVar21[7] == iVar24) {
            lVar11 = 0x10;
            if (plVar21[5] != 0) {
              lVar11 = 0x18;
            }
            if ((*(ulong *)((long)plVar21 + lVar11) == uVar15) && (plVar21[8] == local_68))
            goto LAB_00dc8a10;
          }
          plVar21 = (long *)*plVar21;
          if (plVar21 == (long *)0x0) goto LAB_00dc8adc;
          uVar19 = plVar21[1];
          if (uVar16 == 0) break;
          if (uVar17 <= uVar19) {
            uVar10 = 0;
            if (uVar17 != 0) {
              uVar10 = uVar19 / uVar17;
            }
            uVar19 = uVar19 - uVar10 * uVar17;
          }
          if (uVar19 != uVar25) goto LAB_00dc8adc;
        }
      } while ((uVar19 & uVar18) == uVar25);
    }
    else if (uVar16 == 0) {
      do {
        if ((int)plVar21[7] == iVar24) {
          puVar3 = (ulong *)(plVar21 + 2);
          if (plVar21[5] != 0) {
            puVar3 = (ulong *)(plVar21 + 3);
          }
          if ((plVar21[5] == 0) || (*puVar3 != uVar15)) {
            if (*puVar3 == uVar15) goto LAB_00dc89e8;
          }
          else {
            uVar17 = plVar21[2];
            plVar20 = (long *)PTR_DAT_02710920;
            if (uVar17 != 0) {
              plVar20 = (long *)(uVar17 + 0x58);
            }
            plVar22 = (long *)PTR_DAT_02710920;
            if (*param_4 != 0) {
              plVar22 = (long *)(*param_4 + 0x58);
            }
            if (*plVar20 == *plVar22) {
LAB_00dc89e8:
              if (plVar21[8] == local_68) goto LAB_00dc8a10;
            }
          }
        }
        plVar21 = (long *)*plVar21;
      } while ((plVar21 != (long *)0x0) && ((plVar21[1] & uVar18) == uVar25));
    }
    else {
      do {
        if ((int)plVar21[7] == iVar24) {
          puVar3 = (ulong *)(plVar21 + 2);
          if (plVar21[5] != 0) {
            puVar3 = (ulong *)(plVar21 + 3);
          }
          if ((plVar21[5] == 0) || (*puVar3 != uVar15)) {
            if (*puVar3 == uVar15) goto LAB_00dc88b8;
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
LAB_00dc88b8:
              if (plVar21[8] == local_68) goto LAB_00dc8a10;
            }
          }
        }
        plVar21 = (long *)*plVar21;
        if (plVar21 == (long *)0x0) break;
        uVar18 = plVar21[1];
        if (uVar17 <= uVar18) {
          uVar16 = 0;
          if (uVar17 != 0) {
            uVar16 = uVar18 / uVar17;
          }
          uVar18 = uVar18 - uVar16 * uVar17;
        }
      } while (uVar18 == uVar25);
    }
  }
LAB_00dc8adc:
  plVar20 = (long *)FUN_00dc8f40(&local_70,*(undefined8 *)(param_2 + 8),param_4,&local_68);
  if (plVar20 != (long *)0x0) {
    (**(code **)(plVar20[9] + 0x10))();
  }
  uVar17 = *(ulong *)(param_2 + 0x78);
  plVar22 = *(long **)(*(long *)(param_2 + 0x70) + uVar25 * 8);
  plVar21 = (long *)0x0;
  if (plVar22 != (long *)0x0) {
    plVar21 = (long *)*plVar22;
  }
  if (plVar21 != (long *)0x0) {
    if ((uVar17 - 1 & uVar17) == 0) {
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
            if (*puVar3 == *puVar4) goto LAB_00dc8c7c;
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
LAB_00dc8c7c:
              if ((plVar21[9] == 0) || (*(int *)(plVar21[9] + 0x54) == 0)) goto LAB_00dc8cac;
            }
          }
        }
        plVar21 = (long *)*plVar21;
      } while ((plVar21 != (long *)0x0) && ((plVar21[1] & uVar17 - 1) == uVar25));
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
            if (*puVar3 == *puVar4) goto LAB_00dc8bb4;
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
LAB_00dc8bb4:
              if ((plVar21[9] == 0) || (*(int *)(plVar21[9] + 0x54) == 0)) goto LAB_00dc8cac;
            }
          }
        }
        plVar21 = (long *)*plVar21;
        if (plVar21 == (long *)0x0) break;
        uVar18 = plVar21[1];
        if (uVar17 <= uVar18) {
          uVar16 = 0;
          if (uVar17 != 0) {
            uVar16 = uVar18 / uVar17;
          }
          uVar18 = uVar18 - uVar16 * uVar17;
        }
      } while (uVar18 == uVar25);
    }
  }
LAB_00dc8d0c:
  (**(code **)(*plVar20 + 0x10))(&local_70,plVar20);
  lVar12 = local_68;
  lVar11 = local_70;
  local_70 = 0;
  uVar25 = param_4[4];
  uVar15 = param_4[1];
  uVar17 = param_4[2];
  uVar18 = param_4[3];
  uVar16 = uVar18;
  if (uVar25 != 0) {
    (**(code **)(*(long *)(uVar25 + 0x48) + 0x10))();
    uVar16 = param_4[3];
  }
  uVar19 = param_4[5];
  if (uVar16 == 0) {
    uVar16 = *param_4;
  }
  else {
    uVar16 = *param_4;
    if (uVar16 != 0) {
      (**(code **)(*(long *)(uVar16 + 0x48) + 0x10))();
    }
  }
  puVar13 = (undefined8 *)
            (**(code **)(**(long **)(param_2 + 0xa0) + 0x10))(*(long **)(param_2 + 0xa0),0x50,8);
  if (puVar13 == (undefined8 *)0x0) {
    (**(code **)(**(long **)(param_2 + 0xa0) + 0xb8))();
  }
  uVar23 = *(undefined8 *)(param_2 + 0xa0);
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar14 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar23;
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
  puVar13[3] = uVar15;
  puVar13[4] = uVar17;
  puVar13[5] = uVar18;
  puVar13[6] = uVar25;
  *(int *)(puVar13 + 7) = (int)uVar19;
  puVar13[2] = uVar16;
  puVar13[8] = lVar12;
  puVar13[9] = lVar11;
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
  puVar6 = puVar13 + 2;
  if (puVar13[5] != 0) {
    puVar6 = puVar13 + 3;
  }
  uVar17 = *puVar6;
  *puVar13 = 0;
  puVar13[1] = uVar17;
  FUN_0010e040(plVar26,puVar13);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
LAB_00dc8e70:
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
    uVar23 = *(undefined8 *)(param_2 + 0x138);
  }
  else {
    uVar23 = *(undefined8 *)(param_2 + 0x140);
  }
  FUN_006e6060(uVar23,plVar20,param_5);
  *param_1 = plVar20;
  if (plVar20 != (long *)0x0) {
    plVar20 = plVar20 + 9;
    (**(code **)(*plVar20 + 0x10))(plVar20);
    (**(code **)(*plVar20 + 0x18))(plVar20);
  }
  return;
LAB_00dc8a10:
  if (plVar21 != (long *)0x0) {
    lVar11 = plVar21[9];
    if ((lVar11 != 0) && (*(int *)(lVar11 + 0x54) != 0)) {
      piVar2 = (int *)(lVar11 + 0x54);
      iVar24 = *(int *)(lVar11 + 0x54);
      do {
        plVar26 = *(long **)(lVar11 + 0x58);
        lVar12 = FUN_006dda80();
        while( true ) {
          if (plVar26 == (long *)0x0) goto LAB_00dc8a74;
          if (plVar26 == (long *)lVar12) break;
          plVar26 = (long *)*plVar26;
        }
        iVar7 = *piVar2;
        if (iVar7 == iVar24) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = iVar24 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') {
            if (*(long *)(lVar11 + 0x60) != 0) {
              plVar20 = (long *)(*(long *)(lVar11 + 0x60) + -0x50);
              goto LAB_00dc8e70;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar24 = iVar7;
      } while (iVar7 != 0);
    }
LAB_00dc8a74:
    plVar20 = (long *)FUN_00dc8f40(&local_70,*(undefined8 *)(param_2 + 8),param_4,&local_68);
    if (plVar20 != (long *)0x0) {
      (**(code **)(plVar20[9] + 0x10))();
    }
    (**(code **)(*plVar20 + 0x10))(&local_70,plVar20);
    if (plVar21[9] != 0) {
      (**(code **)(*(long *)(plVar21[9] + 0x48) + 0x18))();
      plVar21[9] = 0;
    }
    plVar21[9] = local_70;
    goto LAB_00dc8e70;
  }
  goto LAB_00dc8adc;
LAB_00dc8cac:
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
    goto LAB_00dc8e70;
  }
  goto LAB_00dc8d0c;
}


