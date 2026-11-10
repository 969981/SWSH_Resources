/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132d100; name: FUN_0132d100
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0132d100(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined *local_e0;
  code *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  int local_c0 [24];
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar10 != (undefined8 *)0x0)) {
    plVar5 = (long *)(**(code **)*puVar10)(puVar10);
    lVar6 = FUN_0132d9a0();
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)lVar6) {
        puVar10 = puVar10 + -10;
        goto LAB_0132d164;
      }
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_0132d164:
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  plVar5 = *(long **)(lVar6 + 0x58);
  if (plVar5 != (long *)0x0) {
    (**(code **)(plVar5[9] + 0x10))();
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  uVar12 = *(ulong *)(param_1 + 0x78);
  uVar8 = uVar12 - 1;
  if (uVar8 < 6) {
    piVar15 = (int *)(param_1 + uVar8 * 4 + 0x80);
    if (*piVar15 != 0) {
LAB_0132d208:
      uVar14 = uVar8;
      goto LAB_0132d20c;
    }
    uVar8 = uVar12 + 1;
    *(ulong *)(param_1 + 0x78) = uVar8;
    if (uVar12 < 6) {
      piVar15 = (int *)(param_1 + uVar12 * 4 + 0x80);
      uVar14 = uVar12;
      if (*piVar15 != 0) {
LAB_0132d20c:
        lVar13 = puVar10[0xc];
        lVar6 = nn::os::GetCurrentThread();
        plVar1 = (long *)(lVar13 + 0x70);
        do {
          if (*plVar1 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar13 + 100));
              while (*plVar1 == 0) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar6;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') goto LAB_0132d258;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_0132d258:
        local_c0[0] = 1;
        local_e0 = PTR_LAB_02728030;
        local_d8 = (code *)PTR_FUN_02728038;
        local_d0 = PTR_LAB_02728040;
        local_c8 = PTR_LAB_02728048;
        FUN_012d5b10(lVar13,0x1b33f696aa37ffd4,&local_e0,0);
        pcVar4 = local_d8;
        if (local_d8 != (code *)0x0) {
          local_d0 = (undefined *)0x0;
          local_c8 = (undefined *)0x0;
          local_e0 = (undefined *)0x0;
          local_d8 = (code *)0x0;
          (*pcVar4)(local_c0);
        }
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = 0;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        nn::os::SignalLightEvent((LightEventType *)(lVar13 + 100));
        local_e0 = (undefined *)(**(code **)(*plVar5 + 0x50))(plVar5,uVar14 & 0xffffffff);
        if (local_e0 != (undefined *)0x0) {
          (**(code **)(*(long *)(local_e0 + 0x48) + 0x10))();
        }
        FUN_01449770(puVar10[0xc],0x38ce370d10a67050,&local_e0,0);
        if (local_e0 != (undefined *)0x0) {
          (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
          local_e0 = (undefined *)0x0;
        }
        lVar13 = puVar10[0xc];
        lVar6 = nn::os::GetCurrentThread();
        plVar1 = (long *)(lVar13 + 0x70);
        do {
          if (*plVar1 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar13 + 100));
              while (*plVar1 == 0) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar6;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') goto LAB_0132d37c;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_0132d37c:
        local_c0[0] = *piVar15;
        local_e0 = PTR_LAB_02728050;
        local_d8 = (code *)PTR_FUN_02728058;
        local_d0 = PTR_LAB_02728060;
        local_c8 = PTR_LAB_02728068;
        FUN_012d5b10(lVar13,0x4e3c4994ec817e7a,&local_e0,0);
        pcVar4 = local_d8;
        if (local_d8 != (code *)0x0) {
          local_d0 = (undefined *)0x0;
          local_c8 = (undefined *)0x0;
          local_e0 = (undefined *)0x0;
          local_d8 = (code *)0x0;
          (*pcVar4)(local_c0);
        }
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = 0;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        nn::os::SignalLightEvent((LightEventType *)(lVar13 + 100));
        uVar8 = *(ulong *)(param_1 + 0x78);
        goto LAB_0132d404;
      }
      uVar9 = uVar12 + 2;
      *(ulong *)(param_1 + 0x78) = uVar9;
      if (uVar12 < 5) {
        piVar15 = (int *)(param_1 + uVar8 * 4 + 0x80);
        if (*piVar15 != 0) goto LAB_0132d208;
        uVar8 = uVar12 + 3;
        *(ulong *)(param_1 + 0x78) = uVar8;
        if (5 < uVar9) goto LAB_0132d404;
        piVar15 = (int *)(param_1 + uVar9 * 4 + 0x80);
        if (*piVar15 == 0) {
          uVar14 = uVar12 + 4;
          *(ulong *)(param_1 + 0x78) = uVar14;
          if (5 < uVar8) {
            iVar7 = (int)uVar14;
            uVar12 = uVar14;
            goto joined_r0x0132d648;
          }
          piVar15 = (int *)(param_1 + uVar8 * 4 + 0x80);
          if (*piVar15 != 0) goto LAB_0132d208;
          uVar9 = uVar12 + 5;
          *(ulong *)(param_1 + 0x78) = uVar9;
          if (5 < uVar14) goto LAB_0132d460;
          piVar15 = (int *)(param_1 + uVar14 * 4 + 0x80);
          if (*piVar15 != 0) goto LAB_0132d20c;
          uVar8 = uVar12 + 6;
          *(ulong *)(param_1 + 0x78) = uVar8;
          if (5 < uVar9) goto LAB_0132d404;
          piVar15 = (int *)(param_1 + uVar9 * 4 + 0x80);
          if (*piVar15 == 0) {
            uVar12 = uVar12 + 7;
            *(ulong *)(param_1 + 0x78) = uVar12;
            iVar7 = (int)uVar12;
            goto joined_r0x0132d1d4;
          }
        }
        uVar14 = uVar9;
        goto LAB_0132d20c;
      }
LAB_0132d460:
      iVar7 = (int)uVar9;
      uVar12 = uVar9;
    }
    else {
LAB_0132d404:
      iVar7 = (int)uVar8;
      uVar12 = uVar8;
    }
joined_r0x0132d648:
    if (iVar7 == 0) goto LAB_0132d1d8;
LAB_0132d408:
    if ((int)uVar12 == 7) {
      lVar13 = puVar10[0xc];
      lVar6 = nn::os::GetCurrentThread();
      plVar1 = (long *)(lVar13 + 0x70);
      do {
        if (*plVar1 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar13 + 100));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar6;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_0132d578;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_0132d578:
      local_c0[0] = 2;
      local_e0 = PTR_LAB_02728030;
      local_d8 = (code *)PTR_FUN_02728038;
      local_d0 = PTR_LAB_02728040;
      local_c8 = PTR_LAB_02728048;
      FUN_012d5b10(lVar13,0x1b33f696aa37ffd4,&local_e0,0);
      pcVar4 = local_d8;
      if (local_d8 != (code *)0x0) {
        local_d0 = (undefined *)0x0;
        local_c8 = (undefined *)0x0;
        local_e0 = (undefined *)0x0;
        local_d8 = (code *)0x0;
        (*pcVar4)(local_c0);
      }
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar13 + 100));
      uVar11 = 1;
      goto joined_r0x0132d5f4;
    }
  }
  else {
    iVar7 = (int)uVar12;
joined_r0x0132d1d4:
    if (iVar7 != 0) goto LAB_0132d408;
LAB_0132d1d8:
    lVar13 = puVar10[0xc];
    lVar6 = nn::os::GetCurrentThread();
    plVar1 = (long *)(lVar13 + 0x70);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar13 + 100));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_0132d494;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_0132d494:
    local_c0[0] = 0;
    local_e0 = PTR_LAB_02728030;
    local_d8 = (code *)PTR_FUN_02728038;
    local_d0 = PTR_LAB_02728040;
    local_c8 = PTR_LAB_02728048;
    FUN_012d5b10(lVar13,0x1b33f696aa37ffd4,&local_e0,0);
    pcVar4 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = (undefined *)0x0;
      local_c8 = (undefined *)0x0;
      local_e0 = (undefined *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar4)(local_c0);
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar13 + 100));
    uVar12 = *(ulong *)(param_1 + 0x78);
  }
  uVar11 = 0;
  *(ulong *)(param_1 + 0x78) = uVar12 + 1;
joined_r0x0132d5f4:
  if (plVar5 != (long *)0x0) {
    (**(code **)(plVar5[9] + 0x18))(plVar5 + 9);
  }
  return uVar11;
}


