/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0070b230; name: FUN_0070b230
 */


/* WARNING: Removing unreachable block (ram,0x0070b3d8) */
/* WARNING: Removing unreachable block (ram,0x0070b4c4) */
/* WARNING: Removing unreachable block (ram,0x0070b5b0) */

void FUN_0070b230(long *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined4 local_64;
  long *local_60;
  long lStack_58;
  long local_50;
  undefined1 auStack_48 [8];
  
  FUN_006d4a90(param_1,param_2,param_3 & 1);
  puVar7 = PTR_DAT_02715a00;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  *param_1 = (long)(puVar7 + 0x10);
  param_1[9] = (long)(puVar7 + 0x68);
  param_1[10] = (long)(puVar7 + 0xa8);
  param_1[0x56] = 0;
  puVar7 = PTR_DAT_02710860;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
     (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) {
    lVar8 = FUN_0075ecb0();
  }
  param_1[0x5a] = lVar8;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  lVar8 = FUN_006ec260(&lStack_58,param_1[1]);
  FUN_006d1120();
  local_50 = lVar8;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))((long *)(lVar8 + 0x48));
  }
  FUN_006d1470(param_1,&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  lStack_58 = param_1[0x2c];
  plVar2 = param_1 + 0x57;
  local_64 = 0;
  local_60 = param_1;
  lVar8 = FUN_0070bd40(auStack_48,param_1[1],&lStack_58,&local_60,&local_64,plVar2);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  if (param_1[0x54] != 0) {
    (**(code **)(*(long *)(param_1[0x54] + 0x48) + 0x18))();
    param_1[0x54] = 0;
  }
  param_1[0x54] = lVar8;
  lVar9 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar8 + 0x158);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x14c));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0070b3f8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0070b3f8:
  plVar3 = param_1;
  if ((long *)param_1[0x24] != (long *)0x0) {
    plVar3 = (long *)param_1[0x24];
  }
  plVar4 = param_1;
  if ((long *)param_1[0x25] != (long *)0x0) {
    plVar4 = (long *)param_1[0x25];
  }
  FUN_006d15e0(lVar8,plVar3,plVar4);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x14c));
  lStack_58 = param_1[0x2c];
  local_64 = 1;
  local_60 = param_1;
  lVar8 = FUN_0070bd40(auStack_48,param_1[1],&lStack_58,&local_60,&local_64,plVar2);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  if (param_1[0x55] != 0) {
    (**(code **)(*(long *)(param_1[0x55] + 0x48) + 0x18))();
    param_1[0x55] = 0;
  }
  param_1[0x55] = lVar8;
  lVar9 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar8 + 0x158);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x14c));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0070b4e4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0070b4e4:
  plVar3 = param_1;
  if ((long *)param_1[0x24] != (long *)0x0) {
    plVar3 = (long *)param_1[0x24];
  }
  plVar4 = param_1;
  if ((long *)param_1[0x25] != (long *)0x0) {
    plVar4 = (long *)param_1[0x25];
  }
  FUN_006d15e0(lVar8,plVar3,plVar4);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x14c));
  lStack_58 = param_1[0x2c];
  local_64 = 2;
  local_60 = param_1;
  lVar8 = FUN_0070bd40(auStack_48,param_1[1],&lStack_58,&local_60,&local_64,plVar2);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  if (param_1[0x56] != 0) {
    (**(code **)(*(long *)(param_1[0x56] + 0x48) + 0x18))();
    param_1[0x56] = 0;
  }
  param_1[0x56] = lVar8;
  lVar9 = nn::os::GetCurrentThread();
  plVar2 = (long *)(lVar8 + 0x158);
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x14c));
        while (*plVar2 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0070b5d0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0070b5d0:
  plVar1 = param_1;
  if ((long *)param_1[0x24] != (long *)0x0) {
    plVar1 = (long *)param_1[0x24];
  }
  if ((long *)param_1[0x25] != (long *)0x0) {
    param_1 = (long *)param_1[0x25];
  }
  FUN_006d15e0(lVar8,plVar1,param_1);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x14c));
  return;
}


