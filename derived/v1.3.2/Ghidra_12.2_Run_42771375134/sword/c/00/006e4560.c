/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e4560; name: FUN_006e4560
 */


void FUN_006e4560(long param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  char cVar8;
  bool bVar9;
  ulong uVar10;
  bool bVar11;
  byte bVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar14 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x130);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x124));
        while (*plVar1 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar14;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_006e45d0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar14;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_006e45d0:
  puVar13 = PTR_DAT_02710920;
  puVar2 = (ulong *)(param_2 + 0x60);
  puVar3 = (ulong *)(param_2 + 0x68);
  uVar20 = *(ulong *)(param_1 + 0x78);
  puVar5 = puVar2;
  if (*(long *)(param_2 + 0x78) != 0) {
    puVar5 = puVar3;
  }
  uVar16 = *puVar5;
  uVar15 = uVar20 - 1;
  plVar4 = (long *)(param_1 + 0x70);
  if ((uVar15 & uVar20) == 0) {
    uVar16 = uVar15 & uVar16;
    puVar17 = *(undefined8 **)(*plVar4 + uVar16 * 8);
    if (puVar17 != (undefined8 *)0x0) goto LAB_006e4618;
    plVar18 = (long *)0x0;
  }
  else {
    if (uVar20 <= uVar16) {
      uVar10 = 0;
      if (uVar20 != 0) {
        uVar10 = uVar16 / uVar20;
      }
      uVar16 = uVar16 - uVar10 * uVar20;
    }
    puVar17 = *(undefined8 **)(*plVar4 + uVar16 * 8);
    plVar18 = (long *)0x0;
    if (puVar17 != (undefined8 *)0x0) {
LAB_006e4618:
      plVar18 = (long *)*puVar17;
    }
  }
  if (plVar18 != (long *)0x0) {
    if ((uVar15 & uVar20) == 0) {
      bVar9 = true;
      bVar12 = 0;
      do {
        if ((int)plVar18[7] != *(int *)(param_2 + 0x88)) {
LAB_006e48f0:
          plVar18 = (long *)*plVar18;
          goto joined_r0x006e4800;
        }
        puVar5 = (ulong *)(plVar18 + 2);
        if (plVar18[5] != 0) {
          puVar5 = (ulong *)(plVar18 + 3);
        }
        puVar6 = puVar2;
        if (*(long *)(param_2 + 0x78) != 0) {
          puVar6 = puVar3;
        }
        if (((*(long *)(param_2 + 0x78) == 0) || (plVar18[5] == 0)) || (*puVar5 != *puVar6)) {
          if (*puVar5 != *puVar6) goto LAB_006e48f0;
        }
        else {
          uVar20 = plVar18[2];
          plVar19 = (long *)puVar13;
          if (uVar20 != 0) {
            plVar19 = (long *)(uVar20 + 0x58);
          }
          plVar7 = (long *)puVar13;
          if (*puVar2 != 0) {
            plVar7 = (long *)(*puVar2 + 0x58);
          }
          if (*plVar19 != *plVar7) goto LAB_006e48f0;
        }
        lVar14 = plVar18[8];
        if (*(long *)(param_2 + 0x178) == 0) {
          if (lVar14 == *(long *)(param_2 + 8)) goto LAB_006e48cc;
LAB_006e47d4:
          bVar9 = (bool)(bVar9 & lVar14 == 0);
          plVar18 = (long *)*plVar18;
        }
        else {
          if (lVar14 != *(long *)(param_2 + 0x178)) goto LAB_006e47d4;
LAB_006e48cc:
          if (plVar18[9] == 0) {
            plVar18[8] = 0;
            bVar12 = 1;
            plVar18[9] = 0;
            plVar18 = (long *)*plVar18;
          }
          else {
            if (*(int *)(plVar18[9] + 0x54) != 0) {
              lVar14 = plVar18[8];
              goto LAB_006e47d4;
            }
            plVar19 = plVar18 + 9;
            plVar18[8] = 0;
            if (*plVar19 != 0) {
              (**(code **)(*(long *)(*plVar19 + 0x48) + 0x18))();
              *plVar19 = 0;
            }
            bVar12 = 1;
            *plVar19 = 0;
            plVar18 = (long *)*plVar18;
          }
        }
joined_r0x006e4800:
        if ((plVar18 != (long *)0x0) && ((plVar18[1] & uVar15) != uVar16)) {
          plVar18 = (long *)0x0;
        }
      } while ((plVar18 != (long *)0x0) && (bVar9 || (bool)(bVar12 ^ 1)));
    }
    else {
      bVar11 = false;
      bVar9 = true;
      do {
        if ((int)plVar18[7] != *(int *)(param_2 + 0x88)) {
LAB_006e46ec:
          plVar18 = (long *)*plVar18;
          goto joined_r0x006e46f0;
        }
        puVar5 = (ulong *)(plVar18 + 2);
        if (plVar18[5] != 0) {
          puVar5 = (ulong *)(plVar18 + 3);
        }
        puVar6 = puVar2;
        if (*(long *)(param_2 + 0x78) != 0) {
          puVar6 = puVar3;
        }
        if (((*(long *)(param_2 + 0x78) == 0) || (plVar18[5] == 0)) || (*puVar5 != *puVar6)) {
          if (*puVar5 != *puVar6) goto LAB_006e46ec;
        }
        else {
          uVar15 = plVar18[2];
          plVar19 = (long *)puVar13;
          if (uVar15 != 0) {
            plVar19 = (long *)(uVar15 + 0x58);
          }
          plVar7 = (long *)puVar13;
          if (*puVar2 != 0) {
            plVar7 = (long *)(*puVar2 + 0x58);
          }
          if (*plVar19 != *plVar7) goto LAB_006e46ec;
        }
        lVar14 = plVar18[8];
        if (*(long *)(param_2 + 0x178) == 0) {
          if (lVar14 == *(long *)(param_2 + 8)) goto LAB_006e46c8;
LAB_006e4734:
          bVar9 = (bool)(bVar9 & lVar14 == 0);
          plVar18 = (long *)*plVar18;
        }
        else {
          if (lVar14 != *(long *)(param_2 + 0x178)) goto LAB_006e4734;
LAB_006e46c8:
          if (plVar18[9] == 0) {
            plVar18[8] = 0;
            bVar11 = true;
            plVar18[9] = 0;
            plVar18 = (long *)*plVar18;
          }
          else {
            if (*(int *)(plVar18[9] + 0x54) != 0) {
              lVar14 = plVar18[8];
              goto LAB_006e4734;
            }
            plVar19 = plVar18 + 9;
            plVar18[8] = 0;
            if (*plVar19 != 0) {
              (**(code **)(*(long *)(*plVar19 + 0x48) + 0x18))();
              *plVar19 = 0;
            }
            bVar11 = true;
            *plVar19 = 0;
            plVar18 = (long *)*plVar18;
          }
        }
joined_r0x006e46f0:
        if (plVar18 != (long *)0x0) {
          uVar15 = plVar18[1];
          if (uVar20 <= uVar15) {
            uVar10 = 0;
            if (uVar20 != 0) {
              uVar10 = uVar15 / uVar20;
            }
            uVar15 = uVar15 - uVar10 * uVar20;
          }
          if (uVar15 != uVar16) {
            plVar18 = (long *)0x0;
          }
        }
      } while ((plVar18 != (long *)0x0) && (bVar9 || !bVar11));
    }
    if (!bVar9) goto LAB_006e498c;
  }
  FUN_006e4e10(plVar4,puVar2);
  local_80 = *(undefined8 *)(param_2 + 0x68);
  local_78 = *(undefined8 *)(param_2 + 0x70);
  local_70 = *(undefined8 *)(param_2 + 0x78);
  local_68 = *(long *)(param_2 + 0x80);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  uVar20 = FUN_006cee10(*(undefined8 *)(param_1 + 0x1e0),&local_80);
  if ((uVar20 & 1) != 0) {
    FUN_006cee00(*(undefined8 *)(param_1 + 0x1e0),&local_80);
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
LAB_006e498c:
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x124));
  return;
}


