/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e54e40; name: FUN_00e54e40
 */


/* WARNING: Removing unreachable block (ram,0x00e5525c) */

undefined8
FUN_00e54e40(long *param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
            undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  
  local_58 = *param_3;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  local_60 = *param_4;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
  }
  local_68 = *param_5;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  uVar5 = FUN_00dd80f0(param_1,param_2,&local_58,&local_60,&local_68,param_6,param_7);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  uVar4 = FUN_00e83860();
  *(undefined4 *)(param_1 + 0xda) = uVar4;
  puVar3 = PTR_DAT_02710798;
  lVar8 = *(long *)PTR_DAT_02710798;
  uVar5 = 0;
  lVar9 = 0x60;
  do {
    lVar11 = *(long *)(lVar8 + 600);
    if (lVar11 == 0) {
      if (*(long *)((long)(int)param_1[0xda] * 0x280 + uVar5 * 0x10 + 0x60) == param_1[0x34])
      goto LAB_00e54fc8;
    }
    else {
      plVar7 = (long *)(lVar11 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar10 = param_1[0xda];
      (**(code **)(*plVar7 + 0x18))(plVar7);
      if (*(long *)(lVar11 + (long)(int)lVar10 * 0x280 + lVar9) == param_1[0x34]) {
LAB_00e54fc8:
        *(int *)(param_1 + 0xd8) = (int)uVar5;
        lVar9 = *(long *)(*(long *)puVar3 + 600);
        goto joined_r0x00e54fd4;
      }
    }
    uVar5 = uVar5 + 1;
    lVar9 = lVar9 + 0x10;
  } while (uVar5 < 0x28);
  uVar5 = (ulong)*(uint *)(param_1 + 0xd8);
  if (*(uint *)(param_1 + 0xd8) != 0xffffffff) {
    lVar9 = *(long *)(*(long *)puVar3 + 600);
joined_r0x00e54fd4:
    if (lVar9 == 0) {
      cVar1 = *(char *)((long)(int)param_1[0xda] * 0x280 + (long)(int)uVar5 * 0x10 + 0x68);
    }
    else {
      plVar7 = (long *)(lVar9 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar8 = param_1[0xda];
      lVar11 = param_1[0xd8];
      (**(code **)(*plVar7 + 0x18))(plVar7);
      cVar1 = *(char *)(lVar9 + (long)(int)lVar8 * 0x280 + (long)(int)lVar11 * 0x10 + 0x68);
    }
    if (cVar1 != '\0') goto LAB_00e550b8;
  }
  local_88 = 0x6db9e7ee071bcdad;
  local_80 = "fi_have_kinomi_parameter";
  local_78 = 0x18;
  local_70 = 0;
  (**(code **)(*param_1 + 400))(param_1,&local_88,1);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
LAB_00e550b8:
  lVar9 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar8 = param_1[0x72];
  param_1[0x72] = 0;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  plVar7 = (long *)param_1[1];
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar7;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  lVar11 = (**(code **)(*plVar7 + 0x10))(plVar7,800,0x10);
  if (lVar11 == 0) {
    (**(code **)(*plVar7 + 0xb8))(plVar7);
  }
  FUN_006d6c40(lVar11,param_1 + 9,1);
  *(long **)(lVar11 + 8) = plVar7;
  *(long *)(lVar11 + 0x10) = lVar11;
  *(undefined8 *)(lVar11 + 0x18) = 800;
  *(undefined8 *)(lVar11 + 0x20) = 0x10;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  FUN_006d1120(lVar11);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  if (param_1[0x72] != 0) {
    (**(code **)(*(long *)(param_1[0x72] + 0x48) + 0x18))();
    param_1[0x72] = 0;
  }
  param_1[0x72] = lVar11;
  pcVar6 = *(code **)(lVar11 + 0x2a8);
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(lVar11 + 0x2b0) = 0;
    *(undefined8 *)(lVar11 + 0x2b8) = 0;
    *(undefined8 *)(lVar11 + 0x2a0) = 0;
    *(undefined8 *)(lVar11 + 0x2a8) = 0;
    (*pcVar6)(lVar11 + 0x2c0);
  }
  *(long **)(lVar11 + 0x2c0) = param_1;
  *(undefined1 **)(lVar11 + 0x2a0) = &LAB_00e565c0;
  *(undefined1 **)(lVar11 + 0x2a8) = &LAB_00e569d0;
  *(undefined1 **)(lVar11 + 0x2b0) = &LAB_00e569e0;
  *(undefined1 **)(lVar11 + 0x2b8) = &LAB_00e569f0;
  lVar11 = param_1[0x72];
  lVar10 = *(long *)(lVar9 + 0x128);
  lVar8 = nn::os::GetCurrentThread();
  plVar7 = (long *)(lVar11 + 0x158);
  do {
    if (*plVar7 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x14c));
        while (*plVar7 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar8;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00e5527c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar8;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00e5527c:
  lVar10 = *(long *)(lVar10 + 0x298);
  lVar8 = lVar10;
  if (*(long *)(lVar10 + 0x120) != 0) {
    lVar8 = *(long *)(lVar10 + 0x120);
  }
  if (*(long *)(lVar10 + 0x128) != 0) {
    lVar10 = *(long *)(lVar10 + 0x128);
  }
  FUN_006d15e0(lVar11,lVar8,lVar10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x14c));
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  return 1;
}


