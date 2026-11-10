/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cad6e0; name: FUN_00cad6e0
 */


ulong FUN_00cad6e0(long param_1,long param_2,long param_3,long param_4,long *param_5)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long local_88;
  long local_70;
  long local_68;
  
  uVar5 = *(uint *)PTR_DAT_0271c508;
  uVar12 = (ulong)uVar5;
  if (param_4 == 0) {
    local_88 = 0;
  }
  else {
    local_88 = *(long *)(param_4 + 0x30);
  }
  lVar9 = nn::os::GetCurrentThread();
  plVar2 = (long *)(param_1 + 0x15a0);
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1594));
        while (*plVar2 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = lVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_00cad784;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar9;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_00cad784:
  uVar11 = (ulong)*(uint *)(param_2 + 8);
  if (0 < (int)*(uint *)(param_2 + 8)) {
    uVar12 = 0;
    do {
      while( true ) {
        iVar10 = (int)uVar11;
        plVar13 = *(long **)(param_2 + 0x10);
        if (plVar13 != (long *)0x0) {
          (**(code **)(plVar13[9] + 0x10))();
          iVar10 = *(int *)(param_2 + 8);
        }
        if ((long)iVar10 <= (long)uVar12) break;
        if (*(ulong *)(*(long *)(param_2 + 0x38) + 0x48) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        plVar14 = *(long **)(*(long *)(*(long *)(param_2 + 0x38) + 0x40) + uVar12 * 0x28 + 0x10);
        if (plVar14 != (long *)0x0) {
          (**(code **)(plVar14[9] + 0x10))();
        }
        if (plVar13 != (long *)0x0) {
          (**(code **)(plVar13[9] + 0x18))(plVar13 + 9);
        }
        plVar13 = plVar14;
        if (plVar14 == (long *)0x0) goto LAB_00cad890;
LAB_00cad808:
        lVar9 = plVar13[0xd];
        if (lVar9 == 0) {
          if (param_3 == 0) goto LAB_00cad8ac;
        }
        else {
          plVar14 = (long *)(lVar9 + 0x48);
          (**(code **)(*plVar14 + 0x10))(plVar14);
          uVar3 = *(undefined8 *)(param_3 + 0x28);
          uVar4 = *(undefined8 *)(param_3 + 0x30);
          (**(code **)(*plVar14 + 0x10))(plVar14);
          if (*(int *)(lVar9 + 0x54) != 0) {
            piVar1 = (int *)(lVar9 + 0x54);
            iVar10 = *(int *)(lVar9 + 0x54);
            do {
              while( true ) {
                uVar11 = FUN_00cb50a0(*(undefined8 *)(lVar9 + 0x58));
                if ((uVar11 & 1) == 0) goto LAB_00cad938;
                iVar6 = *piVar1;
                if (iVar6 != iVar10) break;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar8) {
                  *piVar1 = iVar10 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') {
                  lVar9 = *(long *)(lVar9 + 0x60);
                  if (lVar9 != 0) {
                    uVar11 = FUN_00c78d90(lVar9 + -0x50,uVar3,uVar4);
                    (**(code **)(*(long *)(lVar9 + -8) + 0x18))((long *)(lVar9 + -8));
                    goto LAB_00cad94c;
                  }
                  goto LAB_00cad938;
                }
                iVar10 = iVar6;
                if (iVar6 == 0) goto LAB_00cad938;
              }
              ClearExclusiveLocal();
              iVar10 = iVar6;
            } while (iVar6 != 0);
          }
LAB_00cad938:
          uVar11 = FUN_00c78d90(0,uVar3,uVar4);
LAB_00cad94c:
          (**(code **)(*plVar14 + 0x18))(plVar14);
          (**(code **)(*plVar14 + 0x18))(plVar14);
          if ((uVar11 & 1) != 0) {
LAB_00cad8ac:
            lVar9 = plVar13[0xe];
            if (lVar9 == 0) {
              if (local_88 == 0) goto LAB_00cad998;
            }
            else {
              local_68 = lVar9;
              (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
              uVar11 = FUN_00cb0f90(param_1,&local_68,*(undefined8 *)(param_4 + 0x28),local_88);
              if (local_68 != 0) {
                (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
                local_68 = 0;
              }
              if ((uVar11 & 1) != 0) {
LAB_00cad998:
                (**(code **)(*plVar13 + 0x10))(&local_70,plVar13);
                if (*param_5 != 0) {
                  (**(code **)(*(long *)(*param_5 + 0x48) + 0x18))();
                  *param_5 = 0;
                }
                *param_5 = local_70;
                (**(code **)(plVar13[9] + 0x18))(plVar13 + 9);
                goto LAB_00cad9e0;
              }
            }
          }
        }
        (**(code **)(plVar13[9] + 0x18))(plVar13 + 9);
        uVar11 = (ulong)*(int *)(param_2 + 8);
        uVar12 = uVar12 + 1;
        if ((long)uVar11 <= (long)uVar12) goto LAB_00cad990;
      }
      if (plVar13 != (long *)0x0) goto LAB_00cad808;
LAB_00cad890:
      uVar11 = (ulong)*(int *)(param_2 + 8);
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)uVar11);
LAB_00cad990:
    uVar12 = (ulong)uVar5;
  }
LAB_00cad9e0:
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1594));
  return uVar12 & 0xffffffff;
}


