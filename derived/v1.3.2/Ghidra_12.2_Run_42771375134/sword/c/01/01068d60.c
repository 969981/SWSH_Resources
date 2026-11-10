/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01068d60; name: FUN_01068d60
 */


/* WARNING: Removing unreachable block (ram,0x01069234) */

void FUN_01068d60(long *param_1,long param_2,long *param_3,long *param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined4 local_250 [126];
  long local_58;
  
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  puVar4 = PTR_DAT_02723b58;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[1] = param_2;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  lVar7 = FUN_01069510(local_250,param_3,"FinalizeRenderPath");
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  puVar4 = PTR_DAT_02710910;
  param_1[3] = lVar7;
  lVar10 = *(long *)(*(long *)puVar4 + 0x168);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar7 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar7 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar7 + 0xb0) = 0;
  }
  *(long *)(lVar7 + 0xb0) = lVar10;
  lVar7 = param_1[3];
  lVar10 = *(long *)(*(long *)(*(long *)puVar4 + 0x168) + 0xa8);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar7 + 0x130) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar7 + 0x130) + 0x48) + 0x18))();
    *(undefined8 *)(lVar7 + 0x130) = 0;
  }
  *(long *)(lVar7 + 0x130) = lVar10;
  FUN_00701e00(param_1[1],param_1[3]);
  puVar4 = PTR_DAT_02710860;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar7 + 0x80) < 0x10) {
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_3;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    lVar10 = (**(code **)(*param_3 + 0x10))(param_3,0x288,8);
    if (lVar10 == 0) {
      (**(code **)(*param_3 + 0xb8))(param_3);
    }
    FUN_01059020(lVar10,param_3);
    *(long **)(lVar10 + 8) = param_3;
    *(long *)(lVar10 + 0x10) = lVar10;
    *(undefined8 *)(lVar10 + 0x18) = 0x288;
    *(undefined8 *)(lVar10 + 0x20) = 8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    if (param_1[4] != 0) {
      (**(code **)(*(long *)(param_1[4] + 0x48) + 0x18))();
      param_1[4] = 0;
    }
    param_1[4] = lVar10;
    local_58 = *param_4;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    }
    FUN_010592b0(lVar10,&local_58);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    (**(code **)(*(long *)param_1[4] + 0x70))((long *)param_1[4],0,0);
    FUN_00701e00(param_1[1],param_1[4]);
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
    if (*(ulong *)(lVar7 + 0x80) < 0x10) {
      *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_3;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      lVar10 = (**(code **)(*param_3 + 0x10))(param_3,0x180,0x10);
      if (lVar10 == 0) {
        (**(code **)(*param_3 + 0xb8))(param_3);
      }
      FUN_0073b530(lVar10,param_3);
      *(long **)(lVar10 + 8) = param_3;
      *(long *)(lVar10 + 0x10) = lVar10;
      *(undefined8 *)(lVar10 + 0x18) = 0x180;
      *(undefined8 *)(lVar10 + 0x20) = 0x10;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      if (param_1[5] != 0) {
        (**(code **)(*(long *)(param_1[5] + 0x48) + 0x18))();
        param_1[5] = 0;
      }
      param_1[5] = lVar10;
      FUN_00784060(local_250,*param_4);
      uVar6 = FUN_0073ec70(*(undefined8 *)(lVar10 + 0xb0),local_250);
      *(undefined4 *)(param_1 + 6) = uVar6;
      FUN_00784490(local_250);
      local_250[0] = 1;
      uVar6 = FUN_0073bf40(*(undefined8 *)(param_1[5] + 0xb0),param_6,local_250);
      *(undefined4 *)((long)param_1 + 0x34) = uVar6;
      (**(code **)(*(long *)param_1[3] + 0x78))((long *)param_1[3],param_1[5]);
      *(undefined4 *)(param_1[3] + 0x1a8) = 0;
      *(undefined4 *)(param_1[4] + 0x1a8) = 1;
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
      if (*(ulong *)(lVar7 + 0x80) < 0x10) {
        *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_3;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        lVar10 = (**(code **)(*param_3 + 0x10))(param_3,800,0x10);
        if (lVar10 == 0) {
          (**(code **)(*param_3 + 0xb8))(param_3);
        }
        FUN_006d6c90(lVar10,0);
        *(long **)(lVar10 + 8) = param_3;
        *(long *)(lVar10 + 0x10) = lVar10;
        *(undefined8 *)(lVar10 + 0x18) = 800;
        *(undefined8 *)(lVar10 + 0x20) = 0x10;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        FUN_006d1120(lVar10);
        if (lVar10 != 0) {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
        }
        pcVar9 = *(code **)(lVar10 + 0x2a8);
        *(undefined4 *)(lVar10 + 0x298) = 0;
        if (pcVar9 != (code *)0x0) {
          *(undefined8 *)(lVar10 + 0x2b0) = 0;
          *(undefined8 *)(lVar10 + 0x2b8) = 0;
          *(undefined8 *)(lVar10 + 0x2a0) = 0;
          *(undefined8 *)(lVar10 + 0x2a8) = 0;
          (*pcVar9)(lVar10 + 0x2c0);
        }
        *(long **)(lVar10 + 0x2c0) = param_1;
        *(undefined **)(lVar10 + 0x2c8) = PTR_LAB_02723b60;
        puVar4 = PTR_LAB_02723b68;
        *(undefined8 *)(lVar10 + 0x2d0) = 0;
        puVar5 = PTR_LAB_02723b70;
        *(undefined **)(lVar10 + 0x2a0) = puVar4;
        puVar4 = PTR_LAB_02723b78;
        *(undefined **)(lVar10 + 0x2a8) = puVar5;
        puVar5 = PTR_LAB_02723b80;
        *(undefined **)(lVar10 + 0x2b0) = puVar4;
        *(undefined **)(lVar10 + 0x2b8) = puVar5;
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
        lVar7 = param_1[7];
        param_1[7] = lVar10;
        if (lVar7 == 0) {
          lVar7 = lVar10;
        }
        else {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
          lVar7 = param_1[7];
        }
        lVar8 = nn::os::GetCurrentThread();
        plVar1 = (long *)(lVar7 + 0x158);
        do {
          if (*plVar1 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x14c));
              while (*plVar1 == 0) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar8;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') goto LAB_01069254;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_01069254:
        FUN_006d1640(lVar7,0,*(undefined8 *)(param_1[1] + 0x70));
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = 0;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x14c));
        if (lVar10 != 0) {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


