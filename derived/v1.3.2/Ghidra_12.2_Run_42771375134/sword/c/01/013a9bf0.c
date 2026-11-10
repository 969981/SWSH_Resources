/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013a9bf0; name: FUN_013a9bf0
 */


bool FUN_013a9bf0(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0 [12];
  
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_013a9c78:
    cVar1 = *(char *)(param_1 + 0x80);
  }
  else {
    puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar8 != (undefined8 *)0x0) {
      plVar3 = (long *)(**(code **)*puVar8)(puVar8);
      plVar4 = (long *)FUN_0132d9a0();
      if (plVar3 == (long *)0x0) goto LAB_013a9c78;
      do {
        if (plVar3 == plVar4) {
          puVar8 = puVar8 + -10;
          cVar1 = *(char *)(param_1 + 0x80);
          goto joined_r0x013a9d74;
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
    cVar1 = *(char *)(param_1 + 0x80);
  }
  puVar8 = (undefined8 *)0x0;
joined_r0x013a9d74:
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x78) == 1) {
      bVar2 = true;
    }
    else if (*(int *)(param_1 + 0x78) == 0) {
      uVar6 = FUN_0132ffb0(puVar8,0);
      if ((uVar6 & 1) != 0) {
        lVar9 = puVar8[0xc];
        lVar5 = nn::os::GetCurrentThread();
        plVar3 = (long *)(lVar9 + 0x70);
        do {
          if (*plVar3 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar9 + 100));
              while (*plVar3 == 0) {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar2) {
                  *plVar3 = lVar5;
                  cVar1 = ExclusiveMonitorsStatus();
                }
                if (cVar1 == '\0') goto LAB_013a9db4;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
LAB_013a9db4:
        local_a0[0] = 0xb54128403d3bd62e;
        local_c0 = PTR_LAB_02728e98;
        local_b8 = (code *)PTR_FUN_02728ea0;
        local_b0 = PTR_LAB_02728ea8;
        local_a8 = PTR_LAB_02728eb0;
        FUN_012d5b10(lVar9,0xb06b75d7965b5a05,&local_c0,0);
        pcVar7 = local_b8;
        if (local_b8 != (code *)0x0) {
          local_b0 = (undefined *)0x0;
          local_a8 = (undefined *)0x0;
          local_c0 = (undefined *)0x0;
          local_b8 = (code *)0x0;
          (*pcVar7)(local_a0);
        }
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = 0;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        nn::os::SignalLightEvent((LightEventType *)(lVar9 + 100));
        *(undefined1 *)(param_1 + 0x80) = 1;
        FUN_0132ffc0(puVar8,0,0);
      }
      *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
      bVar2 = *(char *)(param_1 + 0x80) == '\0';
    }
    else {
      bVar2 = false;
    }
  }
  else {
    lVar9 = puVar8[0xc];
    lVar5 = nn::os::GetCurrentThread();
    plVar3 = (long *)(lVar9 + 0x70);
    do {
      if (*plVar3 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar9 + 100));
          while (*plVar3 == 0) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar2) {
              *plVar3 = lVar5;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_013a9cf0;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_013a9cf0:
    lVar5 = FUN_012d5dd0(lVar9,0xce5749e03d21d06a);
    if (lVar5 == lVar9 + 0x980) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = 0;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar9 + 100));
      bVar2 = false;
    }
    else {
      pcVar7 = *(code **)(lVar5 + 0x18);
      if (pcVar7 != (code *)0x0) {
        *(undefined8 *)(lVar5 + 0x20) = 0;
        *(undefined8 *)(lVar5 + 0x28) = 0;
        *(undefined8 *)(lVar5 + 0x10) = 0;
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (*pcVar7)(lVar5 + 0x30);
      }
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = 0;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar9 + 100));
      bVar2 = false;
      *(undefined1 *)(param_1 + 0x80) = 0;
    }
  }
  return bVar2;
}


