/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb01d0; name: FUN_00cb01d0
 */


/* WARNING: Removing unreachable block (ram,0x00cb03e0) */

void FUN_00cb01d0(long *param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long local_48;
  
  *param_1 = 0;
  switch(*(undefined4 *)(param_3 + 8)) {
  case 3:
    lVar3 = FUN_00cb5d90(&local_48,*(undefined8 *)(param_3 + 0x10));
    break;
  case 4:
    lVar3 = FUN_00cb5ec0(&local_48,*(undefined8 *)(param_3 + 0x10));
    break;
  case 5:
    lVar3 = FUN_00cb5ff0(&local_48,*(undefined8 *)(param_3 + 0x10));
    break;
  case 6:
    lVar3 = FUN_00cb6120(&local_48,*(undefined8 *)(param_3 + 0x10));
    break;
  case 7:
    lVar3 = FUN_00cb6270(&local_48,*(undefined8 *)(param_3 + 0x10));
    break;
  default:
    goto switchD_00cb0218_caseD_8;
  case 9:
    lVar3 = FUN_00cb63d0(&local_48,*(undefined8 *)(param_3 + 0x10));
    break;
  case 10:
    lVar3 = FUN_00cb6520(&local_48,*(undefined8 *)(param_3 + 0x10));
    break;
  case 0xb:
    lVar3 = FUN_00cb6690(&local_48,*(undefined8 *)(param_3 + 0x10));
    break;
  case 0xc:
    lVar3 = FUN_00cb6820(&local_48,*(undefined8 *)(param_3 + 0x10));
    break;
  case 0xd:
    lVar3 = FUN_00cb6970(&local_48,*(undefined8 *)(param_3 + 0x10));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = FUN_00cb6ab0(&local_48,*(undefined8 *)(param_3 + 0x10));
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar4 + 0x70) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar4 + 0x70) + 0x48) + 0x18))();
    *(undefined8 *)(lVar4 + 0x70) = 0;
  }
  *(long *)(lVar4 + 0x70) = lVar4;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar4 + 0x78);
  *(long *)(lVar4 + 0x78) = lVar3;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  lVar3 = nn::os::GetCurrentThread();
  plVar9 = (long *)(param_2 + 0x15a0);
  do {
    if (*plVar9 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x1594));
        while (*plVar9 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00cb0400;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00cb0400:
  plVar6 = *(long **)(param_2 + 0x15b0);
  puVar7 = (undefined8 *)plVar6[2];
  plVar8 = (long *)(lVar4 + 0x60);
  *plVar8 = (long)(plVar6 + 1);
  *(undefined8 **)(lVar4 + 0x68) = puVar7;
  plVar6[2] = (long)plVar8;
  *puVar7 = plVar8;
  *plVar6 = *plVar6 + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x1594));
  plVar9 = *(long **)(*(long *)(lVar4 + 0x70) + 0x78);
  if (plVar9 != (long *)0x0) {
    (**(code **)(plVar9[9] + 0x10))();
  }
  (**(code **)(*plVar9 + 0x10))(&local_48,plVar9);
  if (*param_1 != 0) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  lVar3 = local_48;
  local_48 = 0;
  *param_1 = lVar3;
  (**(code **)(plVar9[9] + 0x18))(plVar9 + 9);
switchD_00cb0218_caseD_8:
  return;
}


