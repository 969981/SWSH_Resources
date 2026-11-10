/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f1d60; name: FUN_012f1d60
 */


void FUN_012f1d60(long param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long ******pppppplVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long ******pppppplVar11;
  undefined4 local_c0;
  undefined4 uStack_bc;
  long ******local_b8;
  long ******local_b0;
  long local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  long local_88;
  long ******local_80;
  long ******local_78;
  long local_70;
  long *local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  local_68 = *(long **)(param_1 + 8);
  local_80 = (long ******)&local_80;
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  local_78 = local_80;
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x448);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x43c));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_012f1de8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_012f1de8:
  puVar10 = *(undefined8 **)(param_1 + 0x98);
  puVar2 = *(undefined8 **)(param_1 + 0xa0);
  pppppplVar8 = local_78;
  if ((puVar10 != puVar2) && (&local_80 != (long *******)local_78)) {
    puVar9 = puVar10;
    do {
      puVar10 = puVar9 + 1;
      pppppplVar8[2] = (long *****)*puVar9;
      pppppplVar8 = (long ******)pppppplVar8[1];
      if (puVar2 + -1 == puVar9) {
        puVar10 = puVar2;
        if (&local_80 != (long *******)pppppplVar8) goto LAB_012f1e30;
        goto LAB_012f1e94;
      }
      puVar9 = puVar10;
    } while (&local_80 != (long *******)pppppplVar8);
  }
  if (&local_80 == (long *******)pppppplVar8) {
LAB_012f1e94:
    FUN_012f4550(&local_80,&local_80,puVar10,puVar2,0);
  }
  else {
LAB_012f1e30:
    (*pppppplVar8)[1] = (long ****)local_80[1];
    *local_80[1] = (long ****)*pppppplVar8;
    do {
      local_70 = local_70 + -1;
      pppppplVar11 = (long ******)pppppplVar8[1];
      (**(code **)(*local_68 + 0x18))(local_68,pppppplVar8,0x18,8);
      pppppplVar8 = pppppplVar11;
    } while (&local_80 != (long *******)pppppplVar11);
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x43c));
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x460);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x454));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_012f1f00;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_012f1f00:
  FUN_012e8a50(&local_88,param_3);
  FUN_01314ea0(local_88,0);
  uStack_bc = FUN_012e4e90();
  puVar5 = PTR_DAT_02710860;
  local_98 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_b8 = (long ******)&local_b8;
  local_b0 = (long ******)&local_b8;
  local_c0 = param_2;
  local_a0 = local_68;
  pppppplVar8 = local_78;
  while( true ) {
    if (&local_80 == (long *******)pppppplVar8) {
      FUN_012f4420(param_1 + 0x128,&local_c0);
      if (local_a8 != 0) {
        (*local_b0)[1] = (long ****)local_b8[1];
        *local_b8[1] = (long ****)*local_b0;
        local_a8 = 0;
        pppppplVar8 = local_b0;
        while ((long *******)pppppplVar8 != &local_b8) {
          pppppplVar11 = (long ******)pppppplVar8[1];
          (**(code **)(*local_a0 + 0x18))(local_a0,pppppplVar8,0x18,8);
          pppppplVar8 = pppppplVar11;
        }
      }
      if (local_88 != 0) {
        (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
        local_88 = 0;
      }
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x454));
      if (local_70 != 0) {
        (*local_78)[1] = (long ****)local_80[1];
        *local_80[1] = (long ****)*local_78;
        local_70 = 0;
        pppppplVar8 = local_78;
        while ((long *******)pppppplVar8 != &local_80) {
          pppppplVar11 = (long ******)pppppplVar8[1];
          (**(code **)(*local_68 + 0x18))(local_68,pppppplVar8,0x18,8);
          pppppplVar8 = pppppplVar11;
        }
      }
      return;
    }
    pppppplVar11 = (long ******)(**(code **)(*local_a0 + 0x10))(local_a0,0x18,8);
    if (pppppplVar11 == (long ******)0x0) {
      (**(code **)(*local_a0 + 0xb8))();
    }
    plVar6 = local_a0;
    *pppppplVar11 = (long *****)0x0;
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar7 + 0x80)) break;
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar6;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    pppppplVar11[2] = pppppplVar8[2];
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    pppppplVar11[1] = (long *****)&local_b8;
    *pppppplVar11 = (long *****)local_b8;
    local_b8[1] = (long *****)pppppplVar11;
    local_a8 = local_a8 + 1;
    pppppplVar8 = (long ******)pppppplVar8[1];
    local_b8 = pppppplVar11;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


