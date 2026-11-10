/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131a880; name: FUN_0131a880
 */


uint FUN_0131a880(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  uint unaff_w26;
  long *plVar7;
  bool bVar8;
  long local_a8;
  char local_a0 [8];
  long local_98;
  long local_90;
  undefined1 *local_88;
  long local_80;
  long local_78;
  long local_68;
  
  lVar3 = FUN_012c7170();
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar3 + 0x10);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar3 + 4));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0131a8f8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0131a8f8:
  uVar5 = FUN_00da0ab0(*(undefined8 *)PTR_DAT_0271e770,8);
  iVar6 = 0;
  do {
    while( true ) {
      local_a8 = *param_2;
      if (local_a8 != 0) {
        (**(code **)(*(long *)(local_a8 + 0x48) + 0x10))();
      }
      (**(code **)(*param_1 + 0x18))(local_a0,param_1,&local_a8,iVar6);
      if (local_a8 != 0) {
        (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
        local_a8 = 0;
      }
      if (local_a0[0] == '\0') {
        unaff_w26 = 0;
        goto LAB_0131aab4;
      }
      plVar7 = &local_98;
      if (local_80 != 0) {
        plVar7 = &local_90;
      }
      lVar4 = FUN_006e2ec0(uVar5,*plVar7);
      if (lVar4 == 0) {
        iVar6 = iVar6 + 1;
        bVar8 = true;
      }
      else {
        FUN_006dccd0(&local_68,*(undefined8 *)PTR_DAT_02710788,1,&local_98,0,param_1[0x24],uVar5);
        if (param_1[3] != 0) {
          (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
          param_1[3] = 0;
        }
        lVar4 = local_68;
        param_1[3] = local_68;
        if (local_68 != 0) {
          plVar7 = (long *)(local_68 + 0x48);
          (**(code **)(*plVar7 + 0x10))(plVar7);
          if ((param_1[4] != 0) || (param_1[0x14] != 0)) {
            FUN_006e1e70(lVar4,param_1 + 2,1);
          }
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
        bVar8 = false;
        unaff_w26 = 1;
      }
      if (local_a0[0] != '\0') break;
LAB_0131aaa8:
      if (!bVar8) goto LAB_0131aab4;
    }
    if ((local_80 != 0) && (local_98 != 0)) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    }
    local_98 = 0;
    local_90 = -0x340d631b7bddd9bb;
    local_88 = &DAT_01d38550;
    local_80 = 0;
    if (local_78 == 0) goto LAB_0131aaa8;
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  } while (bVar8);
LAB_0131aab4:
  do {
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar3 + 4));
  return unaff_w26 & 1;
}


