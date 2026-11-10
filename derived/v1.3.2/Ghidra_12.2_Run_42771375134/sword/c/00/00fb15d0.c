/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb15d0; name: FUN_00fb15d0
 */


void FUN_00fb15d0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long local_80 [2];
  undefined1 *local_70;
  long local_68;
  long local_60;
  long local_48;
  
  puVar1 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar6 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  puVar1 = PTR_DAT_02722e98 + 0x48;
  puVar2 = PTR_DAT_02710528 + 0x10;
  *param_1 = (long)(PTR_DAT_02722e98 + 0x10);
  param_1[1] = lVar6;
  param_1[9] = (long)puVar1;
  plVar8 = param_1 + 0xb;
  *plVar8 = (long)puVar2;
  lVar5 = FUN_007606c0();
  lVar6 = nn::os::GetCurrentThread();
  plVar7 = (long *)(lVar5 + 0x10);
  do {
    if (*plVar7 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 4));
        while (*plVar7 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00fb16c0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00fb16c0:
  puVar1 = PTR_DAT_02710530;
  if (0xff < *(ulong *)(PTR_DAT_02710530 + 0x800)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(PTR_DAT_02710530 + *(ulong *)(PTR_DAT_02710530 + 0x800) * 8) = plVar8;
  *(long *)(puVar1 + 0x800) = *(long *)(puVar1 + 0x800) + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 4));
  puVar1 = PTR_DAT_02722ea0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  puVar2 = PTR_DAT_02722ea8;
  param_1[0xb] = (long)(puVar1 + 0x10);
  param_1[0xc] = 0;
  *(long **)puVar2 = plVar8;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  puVar1 = PTR_DAT_02710ac8 + 0x10;
  param_1[0x5c] = (long)puVar1;
  param_1[0x16] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x7e] = -0x340d631b7bddd9bb;
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x3a] = (long)puVar1;
  param_1[0x3b] = 0;
  *(undefined4 *)((long)param_1 + 0x40c) = 0x1e;
  *(undefined4 *)(param_1 + 0x82) = 0x1e;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_010020c0(local_80,"bin/field/param/weather/weather_data.bin");
  puVar1 = PTR_DAT_02710788;
  FUN_006dccd0(&local_48,*(undefined8 *)PTR_DAT_02710788,0,local_80,0,param_1[1],0);
  if (param_1[0x3b] != 0) {
    (**(code **)(*(long *)(param_1[0x3b] + 0x48) + 0x18))();
    param_1[0x3b] = 0;
  }
  lVar5 = local_48;
  param_1[0x3b] = local_48;
  if (local_48 != 0) {
    plVar7 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    if ((param_1[0x3c] != 0) || (param_1[0x4c] != 0)) {
      FUN_006e1e70(lVar5,param_1 + 0x3a,1);
    }
    FUN_006e1be0(lVar5);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if ((local_68 != 0) && (local_80[0] != 0)) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
  }
  local_80[0] = 0;
  local_80[1] = 0xcbf29ce484222645;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  FUN_00aa07a0(local_80,"bin/field/param/weather/weather_data_alt.bin");
  FUN_006dccd0(&local_48,*(undefined8 *)puVar1,0,local_80,0,param_1[1],0);
  if (param_1[0x5d] != 0) {
    (**(code **)(*(long *)(param_1[0x5d] + 0x48) + 0x18))();
    param_1[0x5d] = 0;
  }
  param_1[0x5d] = local_48;
  if (local_48 != 0) {
    plVar7 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    if ((param_1[0x5e] != 0) || (param_1[0x6e] != 0)) {
      FUN_006e1e70(local_48,param_1 + 0x5c,1);
    }
    FUN_006e1be0(local_48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if ((local_68 != 0) && (local_80[0] != 0)) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
  }
  local_80[0] = 0;
  local_80[1] = 0xcbf29ce484222645;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  param_1[0x15] = 0;
  *(undefined1 *)((long)param_1 + 0x414) = 0;
  lVar6 = *(long *)puVar2;
  plVar7 = (long *)param_1[1];
  *(code **)(lVar6 + 0x20) = FUN_00a41000;
  *(long **)(lVar6 + 0x10) = plVar7;
  lVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,FUN_00a41000,8);
  *(long *)(lVar6 + 0x18) = lVar5;
  if (lVar5 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x10) + 0xb8))();
    lVar5 = *(long *)(lVar6 + 0x18);
  }
  FUN_00760770(lVar5,lVar5 + 0xb8,0xa40f48,0);
  *(long *)(lVar6 + 8) = lVar5;
  param_1[0x10] = lVar5;
  return;
}


