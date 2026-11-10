/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d1840; name: FUN_006d1840
 */


void FUN_006d1840(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  size_t sVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  lVar8 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x158);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x14c));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_006d18b0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_006d18b0:
  if (((*(long *)(param_1 + 0xc0) == *(long *)(param_1 + 200)) && (param_1 != param_2)) &&
     (*(long *)(param_1 + 0x60) == *(long *)(param_1 + 0x68))) {
    FUN_006d0f40(param_1,param_2);
    plVar2 = *(long **)(param_1 + 0x98);
    for (plVar11 = *(long **)(param_1 + 0x90); plVar11 != plVar2; plVar11 = plVar11 + 1) {
      plVar10 = *(long **)(param_2 + 0x90);
      plVar4 = *(long **)(param_2 + 0x98);
      lVar8 = *plVar11;
      if (plVar10 != plVar4) {
        if (*plVar10 != lVar8) {
          do {
            plVar10 = plVar10 + 1;
            if (plVar4 == plVar10) goto LAB_006d195c;
          } while (*plVar10 != lVar8);
        }
        if (plVar10 != plVar4) {
          sVar7 = (long)plVar4 - (long)(plVar10 + 1);
          if (sVar7 != 0) {
            memmove(plVar10,plVar10 + 1,sVar7);
          }
          *(long **)(param_2 + 0x98) = plVar10 + ((long)sVar7 >> 3);
          lVar8 = *plVar11;
        }
      }
LAB_006d195c:
      plVar10 = *(long **)(lVar8 + 0x60);
      plVar4 = *(long **)(lVar8 + 0x68);
      if (plVar10 != plVar4) {
        if (*plVar10 != param_2) {
          do {
            plVar10 = plVar10 + 1;
            if (plVar4 == plVar10) goto LAB_006d18ec;
          } while (*plVar10 != param_2);
        }
        if (plVar10 != plVar4) {
          sVar7 = (long)plVar4 - (long)(plVar10 + 1);
          if (sVar7 != 0) {
            memmove(plVar10,plVar10 + 1,sVar7);
          }
          *(long **)(lVar8 + 0x68) = plVar10 + ((long)sVar7 >> 3);
        }
      }
LAB_006d18ec:
    }
  }
  if (((*(long *)(param_1 + 0xf0) == *(long *)(param_1 + 0xf8)) && (param_1 != param_3)) &&
     (*(long *)(param_1 + 0x90) == *(long *)(param_1 + 0x98))) {
    FUN_006d16b0(param_1,param_3);
    plVar2 = *(long **)(param_1 + 0x68);
    for (plVar11 = *(long **)(param_1 + 0x60); plVar11 != plVar2; plVar11 = plVar11 + 1) {
      lVar8 = *plVar11;
      plVar10 = *(long **)(lVar8 + 0x90);
      plVar4 = *(long **)(lVar8 + 0x98);
      if (plVar10 != plVar4) {
        if (*plVar10 != param_3) {
          do {
            plVar10 = plVar10 + 1;
            if (plVar4 == plVar10) goto LAB_006d1a68;
          } while (*plVar10 != param_3);
        }
        if (plVar10 != plVar4) {
          sVar7 = (long)plVar4 - (long)(plVar10 + 1);
          if (sVar7 != 0) {
            memmove(plVar10,plVar10 + 1,sVar7);
          }
          *(long **)(lVar8 + 0x98) = plVar10 + ((long)sVar7 >> 3);
          lVar8 = *plVar11;
        }
      }
LAB_006d1a68:
      plVar10 = *(long **)(param_3 + 0x60);
      plVar4 = *(long **)(param_3 + 0x68);
      if (plVar10 != plVar4) {
        if (*plVar10 != lVar8) {
          do {
            plVar10 = plVar10 + 1;
            if (plVar4 == plVar10) goto LAB_006d19f8;
          } while (*plVar10 != lVar8);
        }
        if (plVar10 != plVar4) {
          sVar7 = (long)plVar4 - (long)(plVar10 + 1);
          if (sVar7 != 0) {
            memmove(plVar10,plVar10 + 1,sVar7);
          }
          *(long **)(param_3 + 0x68) = plVar10 + ((long)sVar7 >> 3);
        }
      }
LAB_006d19f8:
    }
  }
  plVar2 = *(long **)(param_1 + 200);
  for (plVar11 = *(long **)(param_1 + 0xc0); plVar11 != plVar2; plVar11 = plVar11 + 1) {
    FUN_006d0f40(param_1,*plVar11);
    plVar4 = *(long **)(param_1 + 0x98);
    for (plVar10 = *(long **)(param_1 + 0x90); plVar10 != plVar4; plVar10 = plVar10 + 1) {
      lVar12 = *plVar11;
      plVar9 = *(long **)(lVar12 + 0x90);
      plVar3 = *(long **)(lVar12 + 0x98);
      lVar8 = *plVar10;
      if (plVar9 != plVar3) {
        if (*plVar9 != lVar8) {
          do {
            plVar9 = plVar9 + 1;
            if (plVar3 == plVar9) goto LAB_006d1b78;
          } while (*plVar9 != lVar8);
        }
        if (plVar9 != plVar3) {
          sVar7 = (long)plVar3 - (long)(plVar9 + 1);
          if (sVar7 != 0) {
            memmove(plVar9,plVar9 + 1,sVar7);
          }
          *(long **)(lVar12 + 0x98) = plVar9 + ((long)sVar7 >> 3);
          lVar8 = *plVar10;
          lVar12 = *plVar11;
        }
      }
LAB_006d1b78:
      plVar9 = *(long **)(lVar8 + 0x60);
      plVar3 = *(long **)(lVar8 + 0x68);
      if (plVar9 != plVar3) {
        if (*plVar9 != lVar12) {
          do {
            plVar9 = plVar9 + 1;
            if (plVar3 == plVar9) goto LAB_006d1b00;
          } while (*plVar9 != lVar12);
        }
        if (plVar9 != plVar3) {
          sVar7 = (long)plVar3 - (long)(plVar9 + 1);
          if (sVar7 != 0) {
            memmove(plVar9,plVar9 + 1,sVar7);
          }
          *(long **)(lVar8 + 0x68) = plVar9 + ((long)sVar7 >> 3);
        }
      }
LAB_006d1b00:
    }
  }
  plVar11 = *(long **)(param_1 + 0xf0);
  plVar2 = *(long **)(param_1 + 0xf8);
  if (plVar11 != plVar2) {
    do {
      FUN_006d16b0(param_1,*plVar11);
      plVar4 = *(long **)(param_1 + 0x68);
      for (plVar10 = *(long **)(param_1 + 0x60); plVar10 != plVar4; plVar10 = plVar10 + 1) {
        lVar12 = *plVar10;
        plVar9 = *(long **)(lVar12 + 0x90);
        plVar3 = *(long **)(lVar12 + 0x98);
        lVar8 = *plVar11;
        if (plVar9 != plVar3) {
          if (*plVar9 != lVar8) {
            do {
              plVar9 = plVar9 + 1;
              if (plVar3 == plVar9) goto LAB_006d1c60;
            } while (*plVar9 != lVar8);
          }
          if (plVar9 != plVar3) {
            sVar7 = (long)plVar3 - (long)(plVar9 + 1);
            if (sVar7 != 0) {
              memmove(plVar9,plVar9 + 1,sVar7);
            }
            *(long **)(lVar12 + 0x98) = plVar9 + ((long)sVar7 >> 3);
            lVar8 = *plVar11;
            lVar12 = *plVar10;
          }
        }
LAB_006d1c60:
        plVar9 = *(long **)(lVar8 + 0x60);
        plVar3 = *(long **)(lVar8 + 0x68);
        if (plVar9 != plVar3) {
          if (*plVar9 != lVar12) {
            do {
              plVar9 = plVar9 + 1;
              if (plVar3 == plVar9) goto LAB_006d1be8;
            } while (*plVar9 != lVar12);
          }
          if (plVar9 != plVar3) {
            sVar7 = (long)plVar3 - (long)(plVar9 + 1);
            if (sVar7 != 0) {
              memmove(plVar9,plVar9 + 1,sVar7);
            }
            *(long **)(lVar8 + 0x68) = plVar9 + ((long)sVar7 >> 3);
          }
        }
LAB_006d1be8:
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar2);
    plVar11 = *(long **)(param_1 + 0xf0);
  }
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xc0);
  *(long **)(param_1 + 0xf8) = plVar11;
  *(ulong *)(param_1 + 0x130) = *(ulong *)(param_1 + 0x130) & 0xfffffffffffffffb | 1;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x14c));
  return;
}


