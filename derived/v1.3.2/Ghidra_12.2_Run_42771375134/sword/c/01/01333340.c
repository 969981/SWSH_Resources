/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01333340; name: FUN_01333340
 */


void FUN_01333340(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long local_98;
  char *pcStack_90;
  undefined8 local_88;
  long local_80;
  long local_78 [2];
  undefined1 *local_68;
  long local_60;
  long local_58;
  long local_48;
  
  lVar4 = FUN_012c7170();
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar4 + 0x10);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar4 + 4));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_013333b0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_013333b0:
  FUN_0010d170(local_78,*(undefined8 *)(param_2 + 8));
  if (*(long *)(param_1 + 0x178) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x178) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  *(long *)(param_1 + 0x178) = local_78[0];
  uVar6 = FUN_00da0ab0(*(undefined8 *)PTR_DAT_0271e770,8);
  local_78[0] = *(long *)(param_2 + 8);
  FUN_013335e0(&local_48,"bin/pokemon_data/pokecamp/npc/",local_78,&DAT_01cfd905);
  FUN_00a83620(local_78,&local_48);
  FUN_006dccd0(&local_98,*(undefined8 *)PTR_DAT_02710788,1,local_78,0,
               *(undefined8 *)(param_1 + 0x58),uVar6);
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(long *)(param_1 + 0x68) = local_98;
  if (local_98 != 0) {
    plVar7 = (long *)(local_98 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    if ((*(long *)(param_1 + 0x70) != 0) || (*(long *)(param_1 + 0xf0) != 0)) {
      FUN_006e1e70(local_98,param_1 + 0x60,1);
    }
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  lVar5 = FUN_009e3950(&local_98,*(undefined8 *)(param_1 + 8));
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x170) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x170) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  *(long *)(param_1 + 0x170) = lVar5;
  local_98 = 0x684092f0f1b22bdf;
  pcStack_90 = "common/pokecamp_npccamp.dat";
  local_88 = 0x1b;
  local_80 = 0;
  FUN_014bc440(lVar5,&local_98,1);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if ((local_60 != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_68 = &DAT_01d38550;
  local_60 = 0;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar4 + 4));
  return;
}


