/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a4b40; name: FUN_014a4b40
 */


void FUN_014a4b40(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long local_70;
  long local_68;
  
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_00794740();
    lVar15 = *(long *)(param_1 + 0xa0);
    lVar7 = nn::os::GetCurrentThread();
    plVar1 = (long *)(lVar15 + 0xf0);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0xe4));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_014a4bbc;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_014a4bbc:
    plVar12 = *(long **)(lVar15 + 0x140);
    plVar13 = *(long **)(lVar15 + 0x148);
    if (plVar12 == plVar13) {
LAB_014a4d1c:
      plVar12 = *(long **)(lVar15 + 0x110);
      plVar13 = *(long **)(lVar15 + 0x118);
      if (plVar12 != plVar13) {
        do {
          lVar7 = *plVar12;
          uVar10 = FUN_00a8c5b0(lVar7 + 8);
          if ((uVar10 & 1) != 0) {
            (**(code **)(*(long *)(lVar7 + -0x48) + 0x10))(&local_68);
            (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))(&local_70);
            lVar16 = local_68;
            lVar7 = local_70;
            if (local_70 != 0) {
              (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            }
            local_70 = 0;
            if (local_68 != 0) {
              local_70 = 0;
              (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
              local_68 = 0;
            }
            if (lVar16 == lVar7) goto LAB_014a4dbc;
          }
          plVar12 = plVar12 + 1;
        } while (plVar13 != plVar12);
        plVar12 = plVar13;
LAB_014a4dbc:
        plVar13 = *(long **)(lVar15 + 0x118);
        if (plVar13 != plVar12) {
          if (plVar12 + 1 == plVar13) {
LAB_014a4e1c:
            do {
              plVar8 = plVar13 + -1;
              if ((long *)*plVar8 != (long *)0x0) {
                (**(code **)(*(long *)*plVar8 + 0x18))();
                plVar13[-1] = 0;
              }
              plVar13 = plVar8;
            } while (plVar12 != plVar8);
          }
          else {
            plVar8 = plVar12;
            do {
              if ((long *)*plVar8 != (long *)0x0) {
                (**(code **)(*(long *)*plVar8 + 0x18))();
                *plVar8 = 0;
              }
              plVar12 = plVar8 + 1;
              lVar7 = *plVar12;
              *plVar12 = 0;
              *plVar8 = lVar7;
              plVar8 = plVar12;
            } while (plVar13 + -1 != plVar12);
            plVar13 = *(long **)(lVar15 + 0x118);
            if (plVar13 != plVar12) goto LAB_014a4e1c;
          }
          *(long **)(lVar15 + 0x118) = plVar12;
        }
      }
    }
    else {
      do {
        lVar7 = *plVar12;
        uVar10 = FUN_00a8c5b0(lVar7 + 8);
        if ((uVar10 & 1) != 0) {
          (**(code **)(*(long *)(lVar7 + -0x48) + 0x10))(&local_68);
          (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))(&local_70);
          lVar16 = local_68;
          lVar7 = local_70;
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
          }
          local_70 = 0;
          if (local_68 != 0) {
            local_70 = 0;
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
            local_68 = 0;
          }
          if (lVar16 == lVar7) goto LAB_014a4c5c;
        }
        plVar12 = plVar12 + 1;
      } while (plVar13 != plVar12);
      plVar12 = plVar13;
LAB_014a4c5c:
      if (*(long **)(lVar15 + 0x148) == plVar12) goto LAB_014a4d1c;
      lVar7 = nn::os::GetCurrentThread();
      plVar13 = (long *)(lVar15 + 0x108);
      do {
        if (*plVar13 != 0) {
          ClearExclusiveLocal();
          (**(code **)(*(long *)*plVar12 + 0x40))();
          *(undefined1 *)(lVar15 + 0x181) = 1;
          goto LAB_014a4e68;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar11 = *(long **)(lVar15 + 0x148);
      plVar8 = plVar12 + 1;
      if (plVar8 == plVar11) {
LAB_014a4cd8:
        do {
          plVar11 = plVar8 + -1;
          if ((long *)*plVar11 != (long *)0x0) {
            (**(code **)(*(long *)*plVar11 + 0x18))();
            plVar8[-1] = 0;
          }
          plVar8 = plVar11;
        } while (plVar12 != plVar11);
      }
      else {
        plVar8 = plVar12;
        do {
          if ((long *)*plVar8 != (long *)0x0) {
            (**(code **)(*(long *)*plVar8 + 0x18))();
            *plVar8 = 0;
          }
          plVar12 = plVar8 + 1;
          lVar7 = *plVar12;
          *plVar12 = 0;
          *plVar8 = lVar7;
          plVar8 = plVar12;
        } while (plVar11 + -1 != plVar12);
        plVar8 = *(long **)(lVar15 + 0x148);
        if (plVar8 != plVar12) goto LAB_014a4cd8;
      }
      *(long **)(lVar15 + 0x148) = plVar12;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0xfc));
    }
LAB_014a4e68:
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0xe4));
    lVar7 = *(long *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    lVar7 = *(long *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_00794740();
    lVar15 = *(long *)(param_1 + 0x90);
    lVar7 = nn::os::GetCurrentThread();
    plVar1 = (long *)(lVar15 + 0xf0);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0xe4));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_014a4f04;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_014a4f04:
    plVar12 = *(long **)(lVar15 + 0x140);
    plVar13 = *(long **)(lVar15 + 0x148);
    if (plVar12 == plVar13) {
LAB_014a5064:
      plVar12 = *(long **)(lVar15 + 0x110);
      plVar13 = *(long **)(lVar15 + 0x118);
      if (plVar12 != plVar13) {
        do {
          lVar7 = *plVar12;
          uVar10 = FUN_00a8c5b0(lVar7 + 8);
          if ((uVar10 & 1) != 0) {
            (**(code **)(*(long *)(lVar7 + -0x48) + 0x10))(&local_68);
            (**(code **)(**(long **)(param_1 + 0xb0) + 0x10))(&local_70);
            lVar16 = local_68;
            lVar7 = local_70;
            if (local_70 != 0) {
              (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            }
            local_70 = 0;
            if (local_68 != 0) {
              local_70 = 0;
              (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
              local_68 = 0;
            }
            if (lVar16 == lVar7) goto LAB_014a5104;
          }
          plVar12 = plVar12 + 1;
        } while (plVar13 != plVar12);
        plVar12 = plVar13;
LAB_014a5104:
        plVar13 = *(long **)(lVar15 + 0x118);
        if (plVar13 != plVar12) {
          if (plVar12 + 1 == plVar13) {
LAB_014a5164:
            do {
              plVar8 = plVar13 + -1;
              if ((long *)*plVar8 != (long *)0x0) {
                (**(code **)(*(long *)*plVar8 + 0x18))();
                plVar13[-1] = 0;
              }
              plVar13 = plVar8;
            } while (plVar12 != plVar8);
          }
          else {
            plVar8 = plVar12;
            do {
              if ((long *)*plVar8 != (long *)0x0) {
                (**(code **)(*(long *)*plVar8 + 0x18))();
                *plVar8 = 0;
              }
              plVar12 = plVar8 + 1;
              lVar7 = *plVar12;
              *plVar12 = 0;
              *plVar8 = lVar7;
              plVar8 = plVar12;
            } while (plVar13 + -1 != plVar12);
            plVar13 = *(long **)(lVar15 + 0x118);
            if (plVar13 != plVar12) goto LAB_014a5164;
          }
          *(long **)(lVar15 + 0x118) = plVar12;
        }
      }
    }
    else {
      do {
        lVar7 = *plVar12;
        uVar10 = FUN_00a8c5b0(lVar7 + 8);
        if ((uVar10 & 1) != 0) {
          (**(code **)(*(long *)(lVar7 + -0x48) + 0x10))(&local_68);
          (**(code **)(**(long **)(param_1 + 0xb0) + 0x10))(&local_70);
          lVar16 = local_68;
          lVar7 = local_70;
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
          }
          local_70 = 0;
          if (local_68 != 0) {
            local_70 = 0;
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
            local_68 = 0;
          }
          if (lVar16 == lVar7) goto LAB_014a4fa4;
        }
        plVar12 = plVar12 + 1;
      } while (plVar13 != plVar12);
      plVar12 = plVar13;
LAB_014a4fa4:
      if (*(long **)(lVar15 + 0x148) == plVar12) goto LAB_014a5064;
      lVar7 = nn::os::GetCurrentThread();
      plVar13 = (long *)(lVar15 + 0x108);
      do {
        if (*plVar13 != 0) {
          ClearExclusiveLocal();
          (**(code **)(*(long *)*plVar12 + 0x40))();
          *(undefined1 *)(lVar15 + 0x181) = 1;
          goto LAB_014a51b0;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar11 = *(long **)(lVar15 + 0x148);
      plVar8 = plVar12 + 1;
      if (plVar8 == plVar11) {
LAB_014a5020:
        do {
          plVar11 = plVar8 + -1;
          if ((long *)*plVar11 != (long *)0x0) {
            (**(code **)(*(long *)*plVar11 + 0x18))();
            plVar8[-1] = 0;
          }
          plVar8 = plVar11;
        } while (plVar12 != plVar11);
      }
      else {
        plVar8 = plVar12;
        do {
          if ((long *)*plVar8 != (long *)0x0) {
            (**(code **)(*(long *)*plVar8 + 0x18))();
            *plVar8 = 0;
          }
          plVar12 = plVar8 + 1;
          lVar7 = *plVar12;
          *plVar12 = 0;
          *plVar8 = lVar7;
          plVar8 = plVar12;
        } while (plVar11 + -1 != plVar12);
        plVar8 = *(long **)(lVar15 + 0x148);
        if (plVar8 != plVar12) goto LAB_014a5020;
      }
      *(long **)(lVar15 + 0x148) = plVar12;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0xfc));
    }
LAB_014a51b0:
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0xe4));
    lVar7 = *(long *)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    lVar7 = *(long *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_00794740();
    lVar15 = *(long *)(param_1 + 0x98);
    lVar7 = nn::os::GetCurrentThread();
    plVar1 = (long *)(lVar15 + 0xf0);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0xe4));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_014a524c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_014a524c:
    plVar12 = *(long **)(lVar15 + 0x140);
    plVar13 = *(long **)(lVar15 + 0x148);
    if (plVar12 == plVar13) {
LAB_014a53ac:
      plVar12 = *(long **)(lVar15 + 0x110);
      plVar13 = *(long **)(lVar15 + 0x118);
      if (plVar12 != plVar13) {
        do {
          lVar7 = *plVar12;
          uVar10 = FUN_00a8c5b0(lVar7 + 8);
          if ((uVar10 & 1) != 0) {
            (**(code **)(*(long *)(lVar7 + -0x48) + 0x10))(&local_68);
            (**(code **)(**(long **)(param_1 + 0xa8) + 0x10))(&local_70);
            lVar16 = local_68;
            lVar7 = local_70;
            if (local_70 != 0) {
              (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            }
            local_70 = 0;
            if (local_68 != 0) {
              local_70 = 0;
              (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
              local_68 = 0;
            }
            if (lVar16 == lVar7) goto LAB_014a544c;
          }
          plVar12 = plVar12 + 1;
        } while (plVar13 != plVar12);
        plVar12 = plVar13;
LAB_014a544c:
        plVar13 = *(long **)(lVar15 + 0x118);
        if (plVar13 != plVar12) {
          if (plVar12 + 1 == plVar13) {
LAB_014a54ac:
            do {
              plVar8 = plVar13 + -1;
              if ((long *)*plVar8 != (long *)0x0) {
                (**(code **)(*(long *)*plVar8 + 0x18))();
                plVar13[-1] = 0;
              }
              plVar13 = plVar8;
            } while (plVar12 != plVar8);
          }
          else {
            plVar8 = plVar12;
            do {
              if ((long *)*plVar8 != (long *)0x0) {
                (**(code **)(*(long *)*plVar8 + 0x18))();
                *plVar8 = 0;
              }
              plVar12 = plVar8 + 1;
              lVar7 = *plVar12;
              *plVar12 = 0;
              *plVar8 = lVar7;
              plVar8 = plVar12;
            } while (plVar13 + -1 != plVar12);
            plVar13 = *(long **)(lVar15 + 0x118);
            if (plVar13 != plVar12) goto LAB_014a54ac;
          }
          *(long **)(lVar15 + 0x118) = plVar12;
        }
      }
    }
    else {
      do {
        lVar7 = *plVar12;
        uVar10 = FUN_00a8c5b0(lVar7 + 8);
        if ((uVar10 & 1) != 0) {
          (**(code **)(*(long *)(lVar7 + -0x48) + 0x10))(&local_68);
          (**(code **)(**(long **)(param_1 + 0xa8) + 0x10))(&local_70);
          lVar16 = local_68;
          lVar7 = local_70;
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
          }
          local_70 = 0;
          if (local_68 != 0) {
            local_70 = 0;
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
            local_68 = 0;
          }
          if (lVar16 == lVar7) goto LAB_014a52ec;
        }
        plVar12 = plVar12 + 1;
      } while (plVar13 != plVar12);
      plVar12 = plVar13;
LAB_014a52ec:
      if (*(long **)(lVar15 + 0x148) == plVar12) goto LAB_014a53ac;
      lVar7 = nn::os::GetCurrentThread();
      plVar13 = (long *)(lVar15 + 0x108);
      do {
        if (*plVar13 != 0) {
          ClearExclusiveLocal();
          (**(code **)(*(long *)*plVar12 + 0x40))();
          *(undefined1 *)(lVar15 + 0x181) = 1;
          goto LAB_014a54f8;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar11 = *(long **)(lVar15 + 0x148);
      plVar8 = plVar12 + 1;
      if (plVar8 == plVar11) {
LAB_014a5368:
        do {
          plVar11 = plVar8 + -1;
          if ((long *)*plVar11 != (long *)0x0) {
            (**(code **)(*(long *)*plVar11 + 0x18))();
            plVar8[-1] = 0;
          }
          plVar8 = plVar11;
        } while (plVar12 != plVar11);
      }
      else {
        plVar8 = plVar12;
        do {
          if ((long *)*plVar8 != (long *)0x0) {
            (**(code **)(*(long *)*plVar8 + 0x18))();
            *plVar8 = 0;
          }
          plVar12 = plVar8 + 1;
          lVar7 = *plVar12;
          *plVar12 = 0;
          *plVar8 = lVar7;
          plVar8 = plVar12;
        } while (plVar11 + -1 != plVar12);
        plVar8 = *(long **)(lVar15 + 0x148);
        if (plVar8 != plVar12) goto LAB_014a5368;
      }
      *(long **)(lVar15 + 0x148) = plVar12;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0xfc));
    }
LAB_014a54f8:
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0xe4));
    lVar7 = *(long *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    lVar7 = *(long *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
  }
  lVar15 = *(long *)(param_1 + 0x78);
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar15 + 0xf0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0xe4));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_014a5588;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_014a5588:
  puVar5 = PTR_DAT_027150b0;
  puVar4 = PTR_DAT_027150a8;
  plVar12 = *(long **)(lVar15 + 0x140);
  plVar13 = *(long **)(lVar15 + 0x148);
  if (plVar12 == plVar13) {
LAB_014a5744:
    puVar5 = PTR_DAT_027150b0;
    puVar4 = PTR_DAT_027150a8;
    plVar12 = *(long **)(lVar15 + 0x110);
    plVar13 = *(long **)(lVar15 + 0x118);
    if (plVar12 != plVar13) {
      do {
        lVar7 = *plVar12;
        puVar14 = (undefined8 *)(lVar7 + 8);
        plVar8 = (long *)(**(code **)*puVar14)(puVar14);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar9 = FUN_00706e40();
          *(undefined8 *)puVar5 = uVar9;
          __cxa_guard_release(puVar4);
        }
        for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          if (plVar8 == (long *)puVar5) {
            lVar7 = *(long *)(lVar7 + 0x10);
            if (lVar7 != 0) {
              (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
            }
            lVar16 = *(long *)(*(long *)(param_1 + 0x88) + 0x58);
            if (lVar16 != 0) {
              plVar8 = (long *)(lVar16 + 0x48);
              (**(code **)(*plVar8 + 0x10))(plVar8);
              (**(code **)(*plVar8 + 0x18))(plVar8);
            }
            if (lVar7 != 0) {
              (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
            }
            if (lVar7 == lVar16) goto LAB_014a5860;
            break;
          }
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar13);
      plVar12 = plVar13;
LAB_014a5860:
      plVar13 = *(long **)(lVar15 + 0x118);
      if (plVar13 != plVar12) {
        if (plVar12 + 1 == plVar13) {
LAB_014a58c0:
          do {
            plVar8 = plVar13 + -1;
            if ((long *)*plVar8 != (long *)0x0) {
              (**(code **)(*(long *)*plVar8 + 0x18))();
              plVar13[-1] = 0;
            }
            plVar13 = plVar8;
          } while (plVar12 != plVar8);
        }
        else {
          plVar8 = plVar12;
          do {
            if ((long *)*plVar8 != (long *)0x0) {
              (**(code **)(*(long *)*plVar8 + 0x18))();
              *plVar8 = 0;
            }
            plVar12 = plVar8 + 1;
            lVar7 = *plVar12;
            *plVar12 = 0;
            *plVar8 = lVar7;
            plVar8 = plVar12;
          } while (plVar13 + -1 != plVar12);
          plVar13 = *(long **)(lVar15 + 0x118);
          if (plVar13 != plVar12) goto LAB_014a58c0;
        }
        *(long **)(lVar15 + 0x118) = plVar12;
      }
    }
  }
  else {
    do {
      lVar7 = *plVar12;
      puVar14 = (undefined8 *)(lVar7 + 8);
      plVar8 = (long *)(**(code **)*puVar14)(puVar14);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar9 = FUN_00706e40();
        *(undefined8 *)puVar5 = uVar9;
        __cxa_guard_release(puVar4);
      }
      for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        if (plVar8 == (long *)puVar5) {
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 != 0) {
            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
          }
          lVar16 = *(long *)(*(long *)(param_1 + 0x88) + 0x58);
          if (lVar16 != 0) {
            plVar8 = (long *)(lVar16 + 0x48);
            (**(code **)(*plVar8 + 0x10))(plVar8);
            (**(code **)(*plVar8 + 0x18))(plVar8);
          }
          if (lVar7 != 0) {
            (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
          }
          if (lVar7 == lVar16) goto LAB_014a5684;
          break;
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar13);
    plVar12 = plVar13;
LAB_014a5684:
    if (*(long **)(lVar15 + 0x148) == plVar12) goto LAB_014a5744;
    lVar7 = nn::os::GetCurrentThread();
    plVar13 = (long *)(lVar15 + 0x108);
    do {
      if (*plVar13 != 0) {
        ClearExclusiveLocal();
        (**(code **)(*(long *)*plVar12 + 0x40))();
        *(undefined1 *)(lVar15 + 0x181) = 1;
        goto LAB_014a58ec;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar11 = *(long **)(lVar15 + 0x148);
    plVar8 = plVar12 + 1;
    if (plVar8 == plVar11) {
LAB_014a5700:
      do {
        plVar11 = plVar8 + -1;
        if ((long *)*plVar11 != (long *)0x0) {
          (**(code **)(*(long *)*plVar11 + 0x18))();
          plVar8[-1] = 0;
        }
        plVar8 = plVar11;
      } while (plVar12 != plVar11);
    }
    else {
      plVar8 = plVar12;
      do {
        if ((long *)*plVar8 != (long *)0x0) {
          (**(code **)(*(long *)*plVar8 + 0x18))();
          *plVar8 = 0;
        }
        plVar12 = plVar8 + 1;
        lVar7 = *plVar12;
        *plVar12 = 0;
        *plVar8 = lVar7;
        plVar8 = plVar12;
      } while (plVar11 + -1 != plVar12);
      plVar8 = *(long **)(lVar15 + 0x148);
      if (plVar8 != plVar12) goto LAB_014a5700;
    }
    *(long **)(lVar15 + 0x148) = plVar12;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0xfc));
  }
LAB_014a58ec:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0xe4));
  lVar7 = *(long *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar15 = *(long *)(param_1 + 0x78);
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar15 + 0xf0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0xe4));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_014a5964;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_014a5964:
  plVar12 = *(long **)(lVar15 + 0x140);
  plVar13 = *(long **)(lVar15 + 0x148);
  if (plVar12 != plVar13) {
    do {
      lVar7 = *plVar12;
      uVar10 = FUN_00a8cbe0(lVar7 + 8);
      if ((uVar10 & 1) != 0) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        lVar16 = *(long *)(*(long *)(param_1 + 0x80) + 0x58);
        if (lVar16 != 0) {
          plVar8 = (long *)(lVar16 + 0x48);
          (**(code **)(*plVar8 + 0x10))(plVar8);
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
        }
        if (lVar7 == lVar16) goto LAB_014a59f8;
      }
      plVar12 = plVar12 + 1;
    } while (plVar13 != plVar12);
    plVar12 = plVar13;
LAB_014a59f8:
    if (*(long **)(lVar15 + 0x148) != plVar12) {
      lVar7 = nn::os::GetCurrentThread();
      plVar13 = (long *)(lVar15 + 0x108);
      do {
        if (*plVar13 != 0) {
          ClearExclusiveLocal();
          (**(code **)(*(long *)*plVar12 + 0x40))();
          *(undefined1 *)(lVar15 + 0x181) = 1;
          goto LAB_014a5bf8;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar11 = *(long **)(lVar15 + 0x148);
      plVar8 = plVar12 + 1;
      if (plVar8 == plVar11) {
LAB_014a5a74:
        do {
          plVar11 = plVar8 + -1;
          if ((long *)*plVar11 != (long *)0x0) {
            (**(code **)(*(long *)*plVar11 + 0x18))();
            plVar8[-1] = 0;
          }
          plVar8 = plVar11;
        } while (plVar12 != plVar11);
      }
      else {
        plVar8 = plVar12;
        do {
          if ((long *)*plVar8 != (long *)0x0) {
            (**(code **)(*(long *)*plVar8 + 0x18))();
            *plVar8 = 0;
          }
          plVar12 = plVar8 + 1;
          lVar7 = *plVar12;
          *plVar12 = 0;
          *plVar8 = lVar7;
          plVar8 = plVar12;
        } while (plVar11 + -1 != plVar12);
        plVar8 = *(long **)(lVar15 + 0x148);
        if (plVar8 != plVar12) goto LAB_014a5a74;
      }
      *(long **)(lVar15 + 0x148) = plVar12;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0xfc));
      goto LAB_014a5bf8;
    }
  }
  plVar12 = *(long **)(lVar15 + 0x110);
  plVar13 = *(long **)(lVar15 + 0x118);
  if (plVar12 == plVar13) goto LAB_014a5bf8;
  do {
    lVar7 = *plVar12;
    uVar10 = FUN_00a8cbe0(lVar7 + 8);
    if ((uVar10 & 1) != 0) {
      lVar7 = *(long *)(lVar7 + 0x10);
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      lVar16 = *(long *)(*(long *)(param_1 + 0x80) + 0x58);
      if (lVar16 != 0) {
        plVar8 = (long *)(lVar16 + 0x48);
        (**(code **)(*plVar8 + 0x10))(plVar8);
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
      }
      if (lVar7 == lVar16) goto LAB_014a5b4c;
    }
    plVar12 = plVar12 + 1;
  } while (plVar13 != plVar12);
  plVar12 = plVar13;
LAB_014a5b4c:
  plVar13 = *(long **)(lVar15 + 0x118);
  if (plVar13 == plVar12) goto LAB_014a5bf8;
  if (plVar12 + 1 == plVar13) {
LAB_014a5bac:
    do {
      plVar8 = plVar13 + -1;
      if ((long *)*plVar8 != (long *)0x0) {
        (**(code **)(*(long *)*plVar8 + 0x18))();
        plVar13[-1] = 0;
      }
      plVar13 = plVar8;
    } while (plVar12 != plVar8);
  }
  else {
    plVar8 = plVar12;
    do {
      if ((long *)*plVar8 != (long *)0x0) {
        (**(code **)(*(long *)*plVar8 + 0x18))();
        *plVar8 = 0;
      }
      plVar12 = plVar8 + 1;
      lVar7 = *plVar12;
      *plVar12 = 0;
      *plVar8 = lVar7;
      plVar8 = plVar12;
    } while (plVar13 + -1 != plVar12);
    plVar13 = *(long **)(lVar15 + 0x118);
    if (plVar13 != plVar12) goto LAB_014a5bac;
  }
  *(long **)(lVar15 + 0x118) = plVar12;
LAB_014a5bf8:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0xe4));
  lVar7 = *(long *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = *(long *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  if (*(long *)(param_1 + 0x168) == 0) {
    *(undefined8 *)(param_1 + 0x168) = 0;
    lVar7 = *(long *)(param_1 + 0x270);
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x168),param_1 + 0x160);
    lVar7 = *(long *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x168) = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    lVar7 = *(long *)(param_1 + 0x270);
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = *(long *)(param_1 + 200);
  if (*(long *)(param_1 + 0xd0) != lVar7) {
    lVar15 = 0;
    uVar10 = 0;
    do {
      lVar7 = lVar7 + lVar15;
      lVar16 = *(long *)(lVar7 + 8);
      if ((lVar16 != 0) && (*(char *)(lVar16 + 0x170) != '\0')) {
        FUN_006e2100(lVar16,lVar7);
        lVar16 = *(long *)(lVar7 + 8);
        *(undefined8 *)(lVar7 + 8) = 0;
        if (lVar16 != 0) {
          (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))();
        }
      }
      lVar7 = *(long *)(param_1 + 200);
      uVar10 = uVar10 + 1;
      lVar15 = lVar15 + 0x110;
    } while (uVar10 < (ulong)((*(long *)(param_1 + 0xd0) - lVar7 >> 4) * -0xf0f0f0f0f0f0f0f));
  }
  lVar7 = *(long *)(param_1 + 0xf8);
  if (*(long *)(param_1 + 0x100) != lVar7) {
    lVar15 = 0;
    uVar10 = 0;
    do {
      lVar7 = lVar7 + lVar15;
      lVar16 = *(long *)(lVar7 + 8);
      if ((lVar16 != 0) && (*(char *)(lVar16 + 0x170) != '\0')) {
        FUN_006e2100(lVar16,lVar7);
        lVar16 = *(long *)(lVar7 + 8);
        *(undefined8 *)(lVar7 + 8) = 0;
        if (lVar16 != 0) {
          (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))();
        }
      }
      lVar7 = *(long *)(param_1 + 0xf8);
      uVar10 = uVar10 + 1;
      lVar15 = lVar15 + 0x110;
    } while (uVar10 < (ulong)((*(long *)(param_1 + 0x100) - lVar7 >> 4) * -0xf0f0f0f0f0f0f0f));
  }
  return;
}


