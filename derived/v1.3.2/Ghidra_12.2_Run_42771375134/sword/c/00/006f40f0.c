/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f40f0; name: FUN_006f40f0
 */


long * FUN_006f40f0(long param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  long *local_70;
  long *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 *local_48;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x10);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 4));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_006f4160;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_006f4160:
  puVar11 = (undefined8 *)(param_1 + 0xb0);
  puVar7 = (undefined8 *)*puVar11;
  if (puVar7 != (undefined8 *)0x0) {
    puVar16 = puVar11;
    do {
      lVar6 = 0x10;
      if (param_2 <= (undefined8 *)puVar7[5]) {
        lVar6 = 8;
        puVar16 = puVar7;
      }
      puVar7 = *(undefined8 **)((long)puVar7 + lVar6);
    } while (puVar7 != (undefined8 *)0x0);
    if (puVar16 == puVar11) {
      plVar15 = (long *)0x0;
      if ((undefined8 *)(param_1 + 0xb0) != puVar16) {
LAB_006f4210:
        plVar19 = (long *)(param_1 + 0xb0);
        plVar13 = puVar16 + -2;
        local_70 = plVar19;
        if ((undefined8 *)puVar16[5] == param_2) {
          lVar6 = puVar16[2];
          if (lVar6 == 0) {
            puVar7 = puVar16;
            do {
              bVar5 = puVar7 == (undefined8 *)((undefined8 *)*puVar7)[2];
              puVar7 = (undefined8 *)*puVar7;
            } while (bVar5);
          }
          else {
            do {
              lVar6 = *(long *)(lVar6 + 8);
            } while (lVar6 != 0);
          }
          local_48 = puVar16;
          FUN_006f6110(&local_70,&local_48,&local_68);
          iVar3 = *(int *)(local_58 + 3);
          if (local_58 != local_48) {
            *(undefined4 *)(local_58 + 3) = *(undefined4 *)(local_48 + 3);
          }
          if (iVar3 != 0) {
            FUN_006f6290(&local_70,local_68,uStack_60);
          }
          *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + -1;
          *local_48 = 0;
          local_48[1] = 0;
          local_48[2] = 0;
          cVar4 = *(char *)(param_1 + 0xd0);
        }
        else {
          lVar6 = *plVar13;
          plVar13 = *(long **)(param_1 + 0x98);
          local_68 = plVar15;
          if ((plVar13 == (long *)0x0) || (plVar13 == (long *)(param_1 + 0x98))) {
            local_48 = param_2;
            FUN_006f52f0(param_1 + 0x18,&local_68,&local_48);
            uVar8 = (*(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x50)) - 1;
            plVar13 = (long *)(*(long *)(*(long *)(param_1 + 0x20) + (uVar8 / 0x38) * 8) +
                              (uVar8 % 0x38) * 0x48);
          }
          else {
            plVar13 = *(long **)(param_1 + 0xa0);
            plVar13[6] = (long)plVar15;
            plVar13[7] = (long)param_2;
            plVar18 = *(long **)(param_1 + 0xa0);
            lVar2 = *plVar18;
            plVar15 = (long *)plVar18[1];
            *plVar15 = lVar2;
            *(long **)(lVar2 + 8) = plVar15;
            *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + -1;
            *plVar18 = 0;
            plVar18[1] = 0;
          }
          puVar7 = *(undefined8 **)(lVar6 + 8);
          *plVar13 = lVar6;
          plVar13[1] = (long)puVar7;
          *(long **)(lVar6 + 8) = plVar13;
          *puVar7 = plVar13;
          *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
          lVar6 = puVar16[2];
          if (lVar6 == 0) {
            puVar7 = puVar16;
            do {
              bVar5 = puVar7 == (undefined8 *)((undefined8 *)*puVar7)[2];
              puVar7 = (undefined8 *)*puVar7;
            } while (bVar5);
          }
          else {
            do {
              lVar6 = *(long *)(lVar6 + 8);
            } while (lVar6 != 0);
          }
          local_48 = puVar16;
          FUN_006f6110(&local_70,&local_48,&local_68);
          iVar3 = *(int *)(local_58 + 3);
          if (local_58 != local_48) {
            *(undefined4 *)(local_58 + 3) = *(undefined4 *)(local_48 + 3);
          }
          if (iVar3 != 0) {
            FUN_006f6290(&local_70,local_68,uStack_60);
          }
          *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + -1;
          *local_48 = 0;
          local_48[1] = 0;
          local_48[2] = 0;
          puVar16[5] = puVar16[5] - (long)param_2;
          if (*(long **)(param_1 + 0xb0) == (long *)0x0) {
            plVar15 = plVar19;
LAB_006f45e0:
            *(undefined8 **)(param_1 + 0xb8) = puVar16;
            *(undefined8 **)(param_1 + 0xc0) = puVar16;
            *(undefined8 **)(param_1 + 0xb0) = puVar16;
          }
          else {
            plVar18 = *(long **)(param_1 + 0xb0);
            do {
              plVar15 = plVar18;
              lVar6 = 8;
              if ((ulong)plVar15[5] <= (ulong)puVar16[5]) {
                lVar6 = 0x10;
              }
              plVar18 = *(long **)((long)plVar15 + lVar6);
            } while (*(long **)((long)plVar15 + lVar6) != (long *)0x0);
            if (plVar15 == plVar19) goto LAB_006f45e0;
            if ((ulong)puVar16[5] < (ulong)plVar15[5]) {
              plVar15[1] = (long)puVar16;
              if (*(long **)(param_1 + 0xb8) == plVar15) {
                *(undefined8 **)(param_1 + 0xb8) = puVar16;
              }
            }
            else {
              plVar15[2] = (long)puVar16;
              if (*(long **)(param_1 + 0xc0) == plVar15) {
                *(undefined8 **)(param_1 + 0xc0) = puVar16;
              }
            }
          }
          *puVar16 = plVar15;
          puVar16[1] = 0;
          puVar16[2] = 0;
          local_68 = plVar19;
          FUN_006f5140(&local_68,puVar16);
          *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 1;
          cVar4 = *(char *)(param_1 + 0xd0);
        }
        if (cVar4 == '\0') goto LAB_006f4610;
        plVar15 = (long *)(param_1 + 0x80);
        plVar18 = (long *)*plVar15;
        if (plVar15 == plVar18) {
          if (*(long *)(param_1 + 0xd8) == 0) goto LAB_006f4404;
        }
        else {
          lVar6 = 0;
          plVar12 = plVar18;
          do {
            if (plVar12[6] != lVar6) goto LAB_006f4488;
            plVar9 = plVar12 + 7;
            plVar12 = (long *)*plVar12;
            lVar6 = *plVar9 + lVar6;
          } while (plVar15 != plVar12);
          if (lVar6 == *(long *)(param_1 + 0xd8)) {
LAB_006f4404:
            plVar12 = *(long **)(param_1 + 0xb8);
            if (plVar12 != plVar19) {
              uVar8 = 0;
              do {
                while( true ) {
                  uVar14 = plVar12[5];
                  if (uVar14 < uVar8) goto LAB_006f4488;
                  plVar9 = (long *)plVar12[2];
                  uVar8 = uVar14;
                  if ((long *)plVar12[2] == (long *)0x0) break;
                  do {
                    plVar12 = plVar9;
                    plVar9 = (long *)plVar12[1];
                  } while ((long *)plVar12[1] != (long *)0x0);
                  if (plVar12 == plVar19) goto LAB_006f4610;
                }
                do {
                  plVar9 = plVar12;
                  plVar10 = (long *)*plVar9;
                  plVar12 = plVar10;
                } while (plVar9 == (long *)plVar10[2]);
                plVar12 = plVar9;
                if ((long *)plVar9[2] != plVar10) {
                  plVar12 = plVar10;
                }
              } while (plVar12 != plVar19);
            }
            goto LAB_006f4610;
          }
        }
LAB_006f4488:
        for (; plVar15 != plVar18; plVar18 = (long *)*plVar18) {
          if (-1 < (int)plVar18[8]) {
            plVar12 = (long *)FUN_0075edb0();
            (**(code **)(*plVar12 + 0x10))(plVar12,(int)plVar18[8]);
          }
        }
        plVar15 = *(long **)(param_1 + 0xb8);
        while (plVar15 != plVar19) {
          plVar18 = (long *)plVar15[2];
          if ((long *)plVar15[2] == (long *)0x0) {
            do {
              plVar18 = plVar15;
              plVar12 = (long *)*plVar18;
              plVar15 = plVar12;
            } while (plVar18 == (long *)plVar12[2]);
            plVar15 = plVar18;
            if ((long *)plVar18[2] != plVar12) {
              plVar15 = plVar12;
            }
          }
          else {
            do {
              plVar15 = plVar18;
              plVar18 = (long *)plVar15[1];
            } while ((long *)plVar15[1] != (long *)0x0);
          }
        }
        goto LAB_006f4610;
      }
    }
    else {
      do {
        while( true ) {
          plVar13 = (long *)puVar16[4];
          puVar7 = (undefined8 *)puVar16[5];
          plVar15 = (long *)(((long)puVar7 + (long)plVar13) - (long)param_2 & -param_3);
          if ((long)plVar13 <= (long)plVar15) {
            if (((puVar16 != puVar11) &&
                (param_2 = (undefined8 *)(((long)puVar7 + (long)plVar13) - (long)plVar15),
                ((ulong)plVar13 & param_3 - 1U) == 0)) &&
               (((puVar11 = (undefined8 *)((long)puVar7 - (long)param_2),
                 puVar7 < (undefined8 *)0x101 && (puVar11 < param_2)) ||
                (puVar11 < (undefined8 *)0x81 && (undefined8 *)((long)puVar11 * 2) < param_2)))) {
              plVar15 = plVar13;
              param_2 = puVar7;
            }
            if ((undefined8 *)(param_1 + 0xb0) != puVar16) goto LAB_006f4210;
            goto LAB_006f42a8;
          }
          puVar7 = (undefined8 *)puVar16[2];
          if ((undefined8 *)puVar16[2] == (undefined8 *)0x0) break;
          do {
            puVar16 = puVar7;
            puVar7 = (undefined8 *)puVar16[1];
          } while ((undefined8 *)puVar16[1] != (undefined8 *)0x0);
          if (puVar16 == puVar11) goto LAB_006f42a8;
        }
        do {
          puVar7 = puVar16;
          puVar17 = (undefined8 *)*puVar7;
          puVar16 = puVar17;
        } while (puVar7 == (undefined8 *)puVar17[2]);
        puVar16 = puVar7;
        if ((undefined8 *)puVar7[2] != puVar17) {
          puVar16 = puVar17;
        }
      } while (puVar16 != puVar11);
    }
  }
LAB_006f42a8:
  plVar13 = (long *)0x0;
LAB_006f4610:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 4));
  return plVar13;
}


