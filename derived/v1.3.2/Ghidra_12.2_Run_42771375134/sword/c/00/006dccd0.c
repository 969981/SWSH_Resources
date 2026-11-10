/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006dccd0; name: FUN_006dccd0
 */


void FUN_006dccd0(undefined8 *param_1,long param_2,uint param_3,ulong *param_4,undefined4 param_5,
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
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  int iVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long local_70;
  long local_68;
  
  local_68 = param_6;
  if (param_6 == 0) {
    local_68 = *(long *)(param_2 + 8);
  }
  lVar13 = nn::os::GetCurrentThread();
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
            *plVar1 = lVar13;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') goto LAB_006dcd60;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar13;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
LAB_006dcd60:
  puVar7 = param_4 + 1;
  uVar18 = *(ulong *)(param_2 + 0x78);
  uVar19 = uVar18 - 1;
  puVar4 = param_4;
  if (param_4[3] != 0) {
    puVar4 = puVar7;
  }
  uVar3 = uVar19 & uVar18;
  uVar17 = *puVar4;
  plVar24 = (long *)(param_2 + 0x70);
  if (uVar3 == 0) {
    uVar21 = uVar19 & uVar17;
    plVar26 = *(long **)(*plVar24 + uVar21 * 8);
    if (plVar26 != (long *)0x0) goto LAB_006dcdac;
    plVar27 = (long *)0x0;
  }
  else {
    uVar21 = uVar17;
    if (uVar18 <= uVar17) {
      uVar21 = 0;
      if (uVar18 != 0) {
        uVar21 = uVar17 / uVar18;
      }
      uVar21 = uVar17 - uVar21 * uVar18;
    }
    plVar26 = *(long **)(*plVar24 + uVar21 * 8);
    plVar27 = (long *)0x0;
    if (plVar26 != (long *)0x0) {
LAB_006dcdac:
      plVar27 = (long *)*plVar26;
    }
  }
  if (plVar27 != (long *)0x0) {
    iVar23 = (int)param_4[5];
    if (param_4[3] == 0) {
      do {
        while( true ) {
          if ((int)plVar27[7] == iVar23) {
            lVar13 = 0x10;
            if (plVar27[5] != 0) {
              lVar13 = 0x18;
            }
            if ((*(ulong *)((long)plVar27 + lVar13) == uVar17) && (plVar27[8] == local_68))
            goto LAB_006dcf98;
          }
          plVar27 = (long *)*plVar27;
          if (plVar27 == (long *)0x0) goto LAB_006dd110;
          uVar20 = plVar27[1];
          if (uVar3 == 0) break;
          if (uVar18 <= uVar20) {
            uVar11 = 0;
            if (uVar18 != 0) {
              uVar11 = uVar20 / uVar18;
            }
            uVar20 = uVar20 - uVar11 * uVar18;
          }
          if (uVar20 != uVar21) goto LAB_006dd110;
        }
      } while ((uVar20 & uVar19) == uVar21);
    }
    else if (uVar3 == 0) {
      do {
        if ((int)plVar27[7] == iVar23) {
          puVar4 = (ulong *)(plVar27 + 2);
          if (plVar27[5] != 0) {
            puVar4 = (ulong *)(plVar27 + 3);
          }
          if ((plVar27[5] == 0) || (*puVar4 != uVar17)) {
            if (*puVar4 == uVar17) goto LAB_006dcf70;
          }
          else {
            uVar18 = plVar27[2];
            plVar26 = (long *)PTR_DAT_02710920;
            if (uVar18 != 0) {
              plVar26 = (long *)(uVar18 + 0x58);
            }
            plVar25 = (long *)PTR_DAT_02710920;
            if (*param_4 != 0) {
              plVar25 = (long *)(*param_4 + 0x58);
            }
            if (*plVar26 == *plVar25) {
LAB_006dcf70:
              if (plVar27[8] == local_68) goto LAB_006dcf98;
            }
          }
        }
        plVar27 = (long *)*plVar27;
      } while ((plVar27 != (long *)0x0) && ((plVar27[1] & uVar19) == uVar21));
    }
    else {
      do {
        if ((int)plVar27[7] == iVar23) {
          puVar4 = (ulong *)(plVar27 + 2);
          if (plVar27[5] != 0) {
            puVar4 = (ulong *)(plVar27 + 3);
          }
          if ((plVar27[5] == 0) || (*puVar4 != uVar17)) {
            if (*puVar4 == uVar17) goto LAB_006dce40;
          }
          else {
            uVar19 = plVar27[2];
            plVar26 = (long *)PTR_DAT_02710920;
            if (uVar19 != 0) {
              plVar26 = (long *)(uVar19 + 0x58);
            }
            plVar25 = (long *)PTR_DAT_02710920;
            if (*param_4 != 0) {
              plVar25 = (long *)(*param_4 + 0x58);
            }
            if (*plVar26 == *plVar25) {
LAB_006dce40:
              if (plVar27[8] == local_68) goto LAB_006dcf98;
            }
          }
        }
        plVar27 = (long *)*plVar27;
        if (plVar27 == (long *)0x0) break;
        uVar19 = plVar27[1];
        if (uVar18 <= uVar19) {
          uVar3 = 0;
          if (uVar18 != 0) {
            uVar3 = uVar19 / uVar18;
          }
          uVar19 = uVar19 - uVar3 * uVar18;
        }
      } while (uVar19 == uVar21);
    }
  }
LAB_006dd110:
  plVar27 = *(long **)(param_2 + 8);
  lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar13 + 0x80) < 0x10) {
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar27;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    plVar26 = (long *)(**(code **)(*plVar27 + 0x10))(plVar27,0x1b0,8);
    if (plVar26 == (long *)0x0) {
      (**(code **)(*plVar27 + 0xb8))(plVar27);
    }
    FUN_006e16c0(plVar26,param_4,local_68);
    puVar12 = PTR_DAT_02715218;
    *plVar26 = (long)(PTR_DAT_02715218 + 0x10);
    plVar26[1] = (long)plVar27;
    plVar26[9] = (long)(puVar12 + 0x68);
    plVar26[10] = (long)(puVar12 + 0xa8);
    plVar26[0x34] = 0;
    plVar26[0x35] = 0;
    plVar26[4] = 8;
    plVar26[0x32] = 0;
    plVar26[0x33] = 0;
    plVar26[2] = (long)plVar26;
    plVar26[3] = 0x1b0;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    if (plVar26 != (long *)0x0) {
      (**(code **)(plVar26[9] + 0x10))();
    }
    uVar18 = *(ulong *)(param_2 + 0x78);
    plVar25 = *(long **)(*(long *)(param_2 + 0x70) + uVar21 * 8);
    plVar27 = (long *)0x0;
    if (plVar25 != (long *)0x0) {
      plVar27 = (long *)*plVar25;
    }
    if (plVar27 != (long *)0x0) {
      if ((uVar18 - 1 & uVar18) == 0) {
        do {
          if ((int)plVar27[7] == (int)param_4[5]) {
            puVar4 = (ulong *)(plVar27 + 2);
            if (plVar27[5] != 0) {
              puVar4 = (ulong *)(plVar27 + 3);
            }
            puVar5 = param_4;
            if (param_4[3] != 0) {
              puVar5 = puVar7;
            }
            if (((param_4[3] == 0) || (plVar27[5] == 0)) || (*puVar4 != *puVar5)) {
              if (*puVar4 == *puVar5) goto LAB_006dd35c;
            }
            else {
              uVar19 = plVar27[2];
              plVar25 = (long *)PTR_DAT_02710920;
              if (uVar19 != 0) {
                plVar25 = (long *)(uVar19 + 0x58);
              }
              plVar6 = (long *)PTR_DAT_02710920;
              if (*param_4 != 0) {
                plVar6 = (long *)(*param_4 + 0x58);
              }
              if (*plVar25 == *plVar6) {
LAB_006dd35c:
                if ((plVar27[9] == 0) || (*(int *)(plVar27[9] + 0x54) == 0)) goto LAB_006dd38c;
              }
            }
          }
          plVar27 = (long *)*plVar27;
        } while ((plVar27 != (long *)0x0) && ((plVar27[1] & uVar18 - 1) == uVar21));
      }
      else {
        do {
          if ((int)plVar27[7] == (int)param_4[5]) {
            puVar4 = (ulong *)(plVar27 + 2);
            if (plVar27[5] != 0) {
              puVar4 = (ulong *)(plVar27 + 3);
            }
            puVar5 = param_4;
            if (param_4[3] != 0) {
              puVar5 = puVar7;
            }
            if (((param_4[3] == 0) || (plVar27[5] == 0)) || (*puVar4 != *puVar5)) {
              if (*puVar4 == *puVar5) goto LAB_006dd294;
            }
            else {
              uVar19 = plVar27[2];
              plVar25 = (long *)PTR_DAT_02710920;
              if (uVar19 != 0) {
                plVar25 = (long *)(uVar19 + 0x58);
              }
              plVar6 = (long *)PTR_DAT_02710920;
              if (*param_4 != 0) {
                plVar6 = (long *)(*param_4 + 0x58);
              }
              if (*plVar25 == *plVar6) {
LAB_006dd294:
                if ((plVar27[9] == 0) || (*(int *)(plVar27[9] + 0x54) == 0)) goto LAB_006dd38c;
              }
            }
          }
          plVar27 = (long *)*plVar27;
          if (plVar27 == (long *)0x0) break;
          uVar19 = plVar27[1];
          if (uVar18 <= uVar19) {
            uVar3 = 0;
            if (uVar18 != 0) {
              uVar3 = uVar19 / uVar18;
            }
            uVar19 = uVar19 - uVar3 * uVar18;
          }
        } while (uVar19 == uVar21);
      }
    }
LAB_006dd3ec:
    (**(code **)(*plVar26 + 0x10))(&local_70,plVar26);
    lVar14 = local_68;
    lVar13 = local_70;
    local_70 = 0;
    uVar18 = param_4[3];
    uVar3 = param_4[4];
    uVar19 = param_4[1];
    uVar17 = param_4[2];
    uVar21 = uVar18;
    if (uVar3 != 0) {
      (**(code **)(*(long *)(uVar3 + 0x48) + 0x10))();
      uVar21 = param_4[3];
    }
    uVar20 = param_4[5];
    if (uVar21 == 0) {
      uVar21 = *param_4;
    }
    else {
      uVar21 = *param_4;
      if (uVar21 != 0) {
        (**(code **)(*(long *)(uVar21 + 0x48) + 0x10))();
      }
    }
    puVar15 = (undefined8 *)
              (**(code **)(**(long **)(param_2 + 0xa0) + 0x10))(*(long **)(param_2 + 0xa0),0x50,8);
    if (puVar15 == (undefined8 *)0x0) {
      (**(code **)(**(long **)(param_2 + 0xa0) + 0xb8))();
    }
    uVar22 = *(undefined8 *)(param_2 + 0xa0);
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar16 + 0x80) < 0x10) {
      *(undefined8 *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = uVar22;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
      puVar15[3] = uVar19;
      puVar15[4] = uVar17;
      puVar15[5] = uVar18;
      puVar15[8] = lVar14;
      puVar15[6] = uVar3;
      *(int *)(puVar15 + 7) = (int)uVar20;
      puVar15[2] = uVar21;
      puVar15[9] = lVar13;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
      puVar7 = puVar15 + 2;
      if (puVar15[5] != 0) {
        puVar7 = puVar15 + 3;
      }
      uVar18 = *puVar7;
      *puVar15 = 0;
      puVar15[1] = uVar18;
      FUN_0010e040(plVar24,puVar15);
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
LAB_006dd540:
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
        FUN_006e1a40(plVar26,param_7);
      }
      else {
        FUN_006e1a40(plVar26,0);
      }
      if (param_3 < 2) {
        uVar22 = *(undefined8 *)(param_2 + 0x138);
      }
      else {
        uVar22 = *(undefined8 *)(param_2 + 0x140);
      }
      FUN_006e6060(uVar22,plVar26,param_5);
      *param_1 = plVar26;
      if (plVar26 != (long *)0x0) {
        plVar26 = plVar26 + 9;
        (**(code **)(*plVar26 + 0x10))(plVar26);
        (**(code **)(*plVar26 + 0x18))(plVar26);
      }
      return;
    }
  }
LAB_006dd60c:
                    /* WARNING: Subroutine does not return */
  abort();
LAB_006dcf98:
  if (plVar27 != (long *)0x0) {
    lVar13 = plVar27[9];
    if ((lVar13 != 0) && (*(int *)(lVar13 + 0x54) != 0)) {
      piVar2 = (int *)(lVar13 + 0x54);
      iVar23 = *(int *)(lVar13 + 0x54);
      do {
        plVar24 = *(long **)(lVar13 + 0x58);
        lVar14 = FUN_006dda80();
        while( true ) {
          if (plVar24 == (long *)0x0) goto LAB_006dcff8;
          if (plVar24 == (long *)lVar14) break;
          plVar24 = (long *)*plVar24;
        }
        iVar8 = *piVar2;
        if (iVar8 == iVar23) {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar10) {
            *piVar2 = iVar23 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') {
            if (*(long *)(lVar13 + 0x60) != 0) {
              plVar26 = (long *)(*(long *)(lVar13 + 0x60) + -0x50);
              goto LAB_006dd540;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar23 = iVar8;
      } while (iVar8 != 0);
    }
LAB_006dcff8:
    plVar24 = *(long **)(param_2 + 8);
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar13 + 0x80) < 0x10) {
      *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar24;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
      plVar26 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0x1b0,8);
      if (plVar26 == (long *)0x0) {
        (**(code **)(*plVar24 + 0xb8))(plVar24);
      }
      FUN_006e16c0(plVar26,param_4,local_68);
      puVar12 = PTR_DAT_02715218;
      *plVar26 = (long)(PTR_DAT_02715218 + 0x10);
      plVar26[1] = (long)plVar24;
      plVar26[9] = (long)(puVar12 + 0x68);
      plVar26[10] = (long)(puVar12 + 0xa8);
      plVar26[0x34] = 0;
      plVar26[0x35] = 0;
      plVar26[4] = 8;
      plVar26[0x32] = 0;
      plVar26[0x33] = 0;
      plVar26[2] = (long)plVar26;
      plVar26[3] = 0x1b0;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
      if (plVar26 != (long *)0x0) {
        (**(code **)(plVar26[9] + 0x10))();
      }
      (**(code **)(*plVar26 + 0x10))(&local_70,plVar26);
      if (plVar27[9] != 0) {
        (**(code **)(*(long *)(plVar27[9] + 0x48) + 0x18))();
        plVar27[9] = 0;
      }
      plVar27[9] = local_70;
      goto LAB_006dd540;
    }
    goto LAB_006dd60c;
  }
  goto LAB_006dd110;
LAB_006dd38c:
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar26 + 0x10))(&local_70,plVar26);
    lVar13 = local_70;
    local_70 = 0;
    plVar27[8] = local_68;
    if (plVar27[9] == 0) {
      plVar27[9] = lVar13;
    }
    else {
      (**(code **)(*(long *)(plVar27[9] + 0x48) + 0x18))();
      plVar27[9] = lVar13;
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
    }
    goto LAB_006dd540;
  }
  goto LAB_006dd3ec;
}


