/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e43b10; name: FUN_00e43b10
 */


void FUN_00e43b10(long *param_1)

{
  LightEventType *pLVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  code *pcVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined **local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  undefined ***local_c0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined **local_90;
  long local_88;
  long lStack_80;
  long local_78;
  undefined ***local_70;
  
  FUN_00dbd9b0();
  uVar10 = (**(code **)(*param_1 + 0x78))(param_1);
  if ((uVar10 & 1) == 0) {
    return;
  }
  lVar11 = nn::os::GetCurrentThread();
  plVar20 = param_1 + 0x1e;
  do {
    if (*plVar20 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)param_1 + 0xe4));
        while (*plVar20 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *plVar20 = lVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00e43bcc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar4) {
      *plVar20 = lVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00e43bcc:
  puVar6 = PTR_DAT_0271e800;
  puVar5 = PTR_DAT_0271e7f8;
  plVar15 = (long *)param_1[0x28];
  plVar19 = (long *)param_1[0x29];
  if (plVar19 == plVar15) {
LAB_00e43c7c:
    puVar6 = PTR_DAT_0271e800;
    puVar5 = PTR_DAT_0271e7f8;
    plVar15 = (long *)param_1[0x22];
    plVar19 = (long *)param_1[0x23];
    if (plVar19 == plVar15) {
      lVar11 = 0;
    }
    else {
      do {
        lVar11 = *plVar15;
        puVar22 = (undefined8 *)(lVar11 + 8);
        plVar12 = (long *)(**(code **)*puVar22)(puVar22);
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          uVar16 = FUN_00706e40();
          *(undefined8 *)puVar6 = uVar16;
          __cxa_guard_release(puVar5);
        }
        for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
          if (plVar12 == (long *)puVar6) {
            if (*(long *)(lVar11 + 0x128) == -0x3d007867bcc23c10) {
              if ((long *)param_1[0x23] == plVar15) goto LAB_00e43ddc;
              goto LAB_00e43d38;
            }
            break;
          }
        }
        plVar15 = plVar15 + 1;
      } while (plVar15 != plVar19);
      plVar15 = plVar19;
      if ((long *)param_1[0x23] != plVar19) goto LAB_00e43d38;
LAB_00e43ddc:
      lVar11 = 0;
    }
  }
  else {
    do {
      lVar11 = *plVar15;
      puVar22 = (undefined8 *)(lVar11 + 8);
      plVar12 = (long *)(**(code **)*puVar22)(puVar22);
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        uVar16 = FUN_00706e40();
        *(undefined8 *)puVar6 = uVar16;
        __cxa_guard_release(puVar5);
      }
      for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        if (plVar12 == (long *)puVar6) {
          if (*(long *)(lVar11 + 0x128) == -0x3d007867bcc23c10) {
            if ((long *)param_1[0x29] != plVar15) goto LAB_00e43d38;
            goto LAB_00e43c7c;
          }
          break;
        }
      }
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar19);
    plVar15 = plVar19;
    if ((long *)param_1[0x29] == plVar19) goto LAB_00e43c7c;
LAB_00e43d38:
    lVar11 = 0;
    if (*plVar15 != 0) {
      lVar11 = *plVar15 + -0x48;
    }
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar4) {
      *plVar20 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  pLVar1 = (LightEventType *)((long)param_1 + 0xe4);
  nn::os::SignalLightEvent(pLVar1);
  if (lVar11 == 0) {
    return;
  }
  lVar13 = nn::os::GetCurrentThread();
  do {
    if (*plVar20 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar1);
        while (*plVar20 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *plVar20 = lVar13;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00e43d9c;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar4) {
      *plVar20 = lVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00e43d9c:
  puVar6 = PTR_DAT_0271e800;
  puVar5 = PTR_DAT_0271e7f8;
  plVar15 = (long *)param_1[0x28];
  plVar19 = (long *)param_1[0x29];
  if (plVar19 == plVar15) {
LAB_00e43e70:
    puVar6 = PTR_DAT_0271e800;
    puVar5 = PTR_DAT_0271e7f8;
    plVar15 = (long *)param_1[0x22];
    plVar19 = (long *)param_1[0x23];
    if (plVar19 != plVar15) {
      do {
        lVar13 = *plVar15;
        puVar22 = (undefined8 *)(lVar13 + 8);
        plVar12 = (long *)(**(code **)*puVar22)(puVar22);
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          uVar16 = FUN_00706e40();
          *(undefined8 *)puVar6 = uVar16;
          __cxa_guard_release(puVar5);
        }
        for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
          if (plVar12 == (long *)puVar6) {
            if (*(long *)(lVar13 + 0x128) == -0x549e9ca67e383ebb) {
              if ((long *)param_1[0x23] == plVar15) goto LAB_00e43fcc;
              goto LAB_00e43f30;
            }
            break;
          }
        }
        plVar15 = plVar15 + 1;
      } while (plVar15 != plVar19);
      plVar15 = plVar19;
      if ((long *)param_1[0x23] != plVar19) goto LAB_00e43f30;
    }
  }
  else {
    do {
      lVar13 = *plVar15;
      puVar22 = (undefined8 *)(lVar13 + 8);
      plVar12 = (long *)(**(code **)*puVar22)(puVar22);
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        uVar16 = FUN_00706e40();
        *(undefined8 *)puVar6 = uVar16;
        __cxa_guard_release(puVar5);
      }
      for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        if (plVar12 == (long *)puVar6) {
          if (*(long *)(lVar13 + 0x128) == -0x549e9ca67e383ebb) {
            if ((long *)param_1[0x29] != plVar15) goto LAB_00e43f30;
            goto LAB_00e43e70;
          }
          break;
        }
      }
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar19);
    plVar15 = plVar19;
    if ((long *)param_1[0x29] == plVar19) goto LAB_00e43e70;
LAB_00e43f30:
    if (*plVar15 != 0) {
      lVar13 = *plVar15 + -0x48;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *plVar20 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      nn::os::SignalLightEvent(pLVar1);
      lVar14 = nn::os::GetCurrentThread();
      do {
        if (*plVar20 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent(pLVar1);
            while (*plVar20 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar4) {
                *plVar20 = lVar14;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_00e43f8c;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *plVar20 = lVar14;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_00e43f8c:
      puVar6 = PTR_DAT_0271e800;
      puVar5 = PTR_DAT_0271e7f8;
      plVar15 = (long *)param_1[0x28];
      plVar19 = (long *)param_1[0x29];
      if (plVar19 == plVar15) {
LAB_00e44068:
        puVar6 = PTR_DAT_0271e800;
        puVar5 = PTR_DAT_0271e7f8;
        plVar15 = (long *)param_1[0x22];
        plVar19 = (long *)param_1[0x23];
        if (plVar19 != plVar15) {
          do {
            lVar14 = *plVar15;
            puVar22 = (undefined8 *)(lVar14 + 8);
            plVar12 = (long *)(**(code **)*puVar22)(puVar22);
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              uVar16 = FUN_00706e40();
              *(undefined8 *)puVar6 = uVar16;
              __cxa_guard_release(puVar5);
            }
            for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
              if (plVar12 == (long *)puVar6) {
                if (*(long *)(lVar14 + 0x128) == 0x13f09be44fd5a904) {
                  if ((long *)param_1[0x23] == plVar15) goto LAB_00e4433c;
                  goto LAB_00e44128;
                }
                break;
              }
            }
            plVar15 = plVar15 + 1;
          } while (plVar15 != plVar19);
          plVar15 = plVar19;
          if ((long *)param_1[0x23] != plVar19) goto LAB_00e44128;
        }
      }
      else {
        do {
          lVar14 = *plVar15;
          puVar22 = (undefined8 *)(lVar14 + 8);
          plVar12 = (long *)(**(code **)*puVar22)(puVar22);
          if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
            uVar16 = FUN_00706e40();
            *(undefined8 *)puVar6 = uVar16;
            __cxa_guard_release(puVar5);
          }
          for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
            if (plVar12 == (long *)puVar6) {
              if (*(long *)(lVar14 + 0x128) == 0x13f09be44fd5a904) {
                if ((long *)param_1[0x29] != plVar15) goto LAB_00e44128;
                goto LAB_00e44068;
              }
              break;
            }
          }
          plVar15 = plVar15 + 1;
        } while (plVar15 != plVar19);
        plVar15 = plVar19;
        if ((long *)param_1[0x29] == plVar19) goto LAB_00e44068;
LAB_00e44128:
        if (*plVar15 != 0) {
          lVar14 = *plVar15 + -0x48;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar4) {
              *plVar20 = 0;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          nn::os::SignalLightEvent(pLVar1);
          FUN_00c58c00(&local_90,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
          ppuVar7 = local_90;
          (**(code **)(*param_1 + 0x10))(&local_a8,param_1);
          local_a0 = local_a8;
          local_a8 = 0;
          FUN_00c7a6a0(&local_98,ppuVar7,&local_a0);
          if (local_a0 != 0) {
            (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
            local_a0 = 0;
          }
          if (local_a8 != 0) {
            (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
            local_a8 = 0;
          }
          if (local_90 != (undefined **)0x0) {
            (**(code **)(local_90[9] + 0x18))();
            local_90 = (undefined **)0x0;
          }
          lVar17 = local_98;
          if (local_98 == 0) {
            return;
          }
          if (*(int *)(local_98 + 0x54) == 0) goto LAB_00e44448;
          if ((local_98 == 0) || (*(int *)(local_98 + 0x54) == 0)) {
            plVar20 = (long *)0x0;
          }
          else {
            piVar2 = (int *)(local_98 + 0x54);
            iVar8 = *(int *)(local_98 + 0x54);
            while( true ) {
              plVar19 = *(long **)(lVar17 + 0x58);
              plVar15 = (long *)FUN_00c6b230();
              plVar20 = (long *)0x0;
              if (plVar19 == (long *)0x0) break;
              while (plVar19 != plVar15) {
                plVar19 = (long *)*plVar19;
                if (plVar19 == (long *)0x0) {
                  plVar20 = (long *)0x0;
                  goto LAB_00e44254;
                }
              }
              iVar9 = *piVar2;
              if (iVar9 == iVar8) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                  *piVar2 = iVar8 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  lVar17 = *(long *)(lVar17 + 0x60);
                  plVar20 = (long *)0x0;
                  if (lVar17 != 0) {
                    plVar20 = (long *)(lVar17 + -0x50);
                  }
                  break;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              plVar20 = (long *)0x0;
              iVar8 = iVar9;
              if (iVar9 == 0) break;
            }
          }
LAB_00e44254:
          (**(code **)(*plVar20 + 0x98))(&local_a8,plVar20);
          if (plVar20 != (long *)0x0) {
            (**(code **)(plVar20[9] + 0x18))(plVar20 + 9);
          }
          lVar17 = local_a8;
          puVar6 = PTR_DAT_02715080;
          puVar5 = PTR_DAT_02715078;
          if (local_a8 == 0) goto LAB_00e44448;
          if (*(int *)(local_a8 + 0x54) != 0) {
            if ((local_a8 == 0) || (*(int *)(local_a8 + 0x54) == 0)) {
              lVar21 = 0;
            }
            else {
              piVar2 = (int *)(local_a8 + 0x54);
              iVar8 = *(int *)(local_a8 + 0x54);
              do {
                puVar22 = *(undefined8 **)(lVar17 + 0x58);
                if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
                  uVar16 = FUN_00a87090();
                  *(undefined8 *)puVar6 = uVar16;
                  __cxa_guard_release(puVar5);
                }
                lVar21 = 0;
                if (puVar22 == (undefined8 *)0x0) break;
                while (puVar22 != (undefined8 *)puVar6) {
                  puVar22 = (undefined8 *)*puVar22;
                  if (puVar22 == (undefined8 *)0x0) {
                    lVar21 = 0;
                    goto LAB_00e44370;
                  }
                }
                iVar9 = *piVar2;
                if (iVar9 == iVar8) {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar4) {
                    *piVar2 = iVar8 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') {
                    lVar17 = *(long *)(lVar17 + 0x60);
                    lVar21 = 0;
                    if (lVar17 != 0) {
                      lVar21 = lVar17 + -0x50;
                    }
                    break;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                lVar21 = 0;
                iVar8 = iVar9;
              } while (iVar9 != 0);
            }
LAB_00e44370:
            lVar17 = FUN_00ad9f80(lVar21,&local_90);
            if (lVar21 != 0) {
              (**(code **)(*(long *)(lVar21 + 0x48) + 0x18))((long *)(lVar21 + 0x48));
            }
            if (lVar17 != 0) {
              local_e0 = &PTR_LAB_02657f38;
              local_c0 = &local_e0;
              local_90 = &PTR_LAB_02657f38;
              lStack_d8 = lVar11;
              local_d0 = lVar13;
              lStack_c8 = lVar14;
              local_88 = lVar11;
              lStack_80 = lVar13;
              local_78 = lVar14;
              local_70 = &local_90;
              FUN_00e46ef0(&local_90,lVar17 + 0x90);
              if (&local_90 == local_70) {
                pcVar18 = (code *)(*local_70)[4];
LAB_00e44400:
                (*pcVar18)();
              }
              else if (local_70 != (undefined ***)0x0) {
                pcVar18 = (code *)(*local_70)[5];
                goto LAB_00e44400;
              }
              if (&local_e0 == local_c0) {
                pcVar18 = (code *)(*local_c0)[4];
              }
              else {
                if (local_c0 == (undefined ***)0x0) goto LAB_00e44430;
                pcVar18 = (code *)(*local_c0)[5];
              }
              (*pcVar18)();
            }
          }
LAB_00e44430:
          if (local_a8 != 0) {
            (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
            local_a8 = 0;
          }
LAB_00e44448:
          if (local_98 != 0) {
            (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
          }
          return;
        }
      }
LAB_00e4433c:
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *plVar20 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_00e44348;
    }
  }
LAB_00e43fcc:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar4) {
      *plVar20 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00e44348:
  nn::os::SignalLightEvent(pLVar1);
  return;
}


