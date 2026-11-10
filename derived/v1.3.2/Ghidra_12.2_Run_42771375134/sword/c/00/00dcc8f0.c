/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dcc8f0; name: FUN_00dcc8f0
 */


/* WARNING: Removing unreachable block (ram,0x00dcc9e4) */

undefined8 FUN_00dcc8f0(long **param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long **pplVar6;
  undefined8 uVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  uint local_10c;
  long *local_108;
  long **local_100;
  code *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  long **local_e0;
  uint *local_d8;
  long **local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long lStack_88;
  long local_80;
  undefined4 local_74 [5];
  
  local_108 = param_2;
  uVar4 = FUN_00dcc4a0();
  if (((uVar4 & 1) == 0) || (uVar4 = (**(code **)(*param_2 + 0x98))(param_2), (uVar4 & 1) != 0)) {
    return 0;
  }
  lVar12 = *(long *)(*(long *)PTR_DAT_027155f8 + 0x50);
  local_f8 = (code *)*param_3;
  local_100 = param_1;
  if (local_f8 != (code *)0x0) {
    (**(code **)(*(long *)(local_f8 + 0x48) + 0x10))();
  }
  do {
    lVar13 = lVar12;
    lVar12 = lVar13;
    if (*(long *)(lVar13 + 0x128) != 0) {
      lVar12 = *(long *)(lVar13 + 0x128);
    }
  } while (lVar12 != lVar13);
  if ((*(byte *)(lVar13 + 0x130) >> 6 & 1) != 0) {
    plVar11 = (long *)(lVar13 + 0x278);
    if (((*(byte *)(lVar13 + 0x280) & 1) == 0) ||
       (lVar10 = *plVar11, lVar12 = nn::os::GetCurrentThread(), lVar12 != lVar10)) {
      lVar12 = nn::os::GetCurrentThread();
      do {
        if (*plVar11 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x26c));
            while (*plVar11 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar3) {
                *plVar11 = lVar12;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_00dcca04;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar12;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_00dcca04:
      FUN_00dd2410(lVar13 + 0x1f8,&local_100);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x26c));
    }
    else {
      FUN_00dd2410(lVar13 + 0x230,&local_100);
    }
  }
  if (local_f8 != (code *)0x0) {
    (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
    local_f8 = (code *)0x0;
  }
  plVar11 = param_1[0xac];
  if ((plVar11 != (long *)0x0) && (0 < (int)((ulong)(plVar11[0x45] - plVar11[0x44]) >> 7))) {
    lVar12 = 0;
    uVar4 = 0;
    do {
      plVar5 = (long *)FUN_00753d80(plVar11,uVar4 & 0xffffffff);
      plVar8 = param_1[0x15e];
      if (uVar4 < (ulong)((long)param_1[0x15f] - (long)plVar8 >> 7)) {
        if (*plVar5 != *(long *)((long)plVar8 + lVar12)) {
          plVar8 = (long *)((long)plVar8 + lVar12);
          *plVar8 = *plVar5;
          plVar8[1] = plVar5[1];
          plVar8[2] = plVar5[2];
          lVar13 = plVar5[3];
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
          }
          lVar10 = plVar8[3];
          plVar8[3] = lVar13;
          if (lVar10 != 0) {
            (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
          }
        }
      }
      else {
        local_e8 = (undefined1 *)0x0;
        local_e0 = (long **)0x44fa0000457a0000;
        local_d8 = (uint *)0x44fa0000;
        local_d0 = (long **)((ulong)local_d0 & 0xffffffff00000000);
        local_c0 = *(long *)PTR_DAT_02715420;
        local_b8 = *(long *)(PTR_DAT_02715420 + 8);
        local_b0 = 0;
        local_a8 = 0;
        local_100 = (long **)*plVar5;
        local_f8 = (code *)plVar5[1];
        local_f0 = (undefined1 *)plVar5[2];
        puVar1 = (undefined1 *)plVar5[3];
        if (puVar1 == (undefined1 *)0x0) {
          plVar8 = param_1[0x15f];
          local_e8 = puVar1;
          if (plVar8 != param_1[0x160]) goto LAB_00dccbf0;
LAB_00dccaa8:
          FUN_00dd2720(param_1 + 0x15e,&local_100);
        }
        else {
          (**(code **)(*(long *)(puVar1 + 0x48) + 0x10))();
          if (local_e8 != (undefined1 *)0x0) {
            plVar8 = (long *)((long)local_e8 + 0x48);
            local_e8 = puVar1;
            (**(code **)(*plVar8 + 0x18))();
            puVar1 = local_e8;
          }
          local_e8 = puVar1;
          plVar8 = param_1[0x15f];
          if (plVar8 == param_1[0x160]) goto LAB_00dccaa8;
LAB_00dccbf0:
          plVar5 = param_1[0x161];
          lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar5;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          *plVar8 = (long)local_100;
          plVar8[1] = (long)local_f8;
          plVar8[2] = (long)local_f0;
          plVar8[3] = (long)local_e8;
          if (local_e8 != (undefined1 *)0x0) {
            (**(code **)(*(long *)(local_e8 + 0x48) + 0x10))();
          }
          plVar8[7] = local_c8;
          plVar8[4] = (long)local_e0;
          plVar8[5] = (long)local_d8;
          plVar8[6] = (long)local_d0;
          plVar8[0xb] = local_a8;
          plVar8[9] = local_b8;
          plVar8[10] = local_b0;
          plVar8[8] = local_c0;
          plVar8[0xd] = local_98;
          plVar8[0xc] = local_a0;
          plVar8[0xe] = local_90;
          plVar8[0xf] = lStack_88;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          param_1[0x15f] = param_1[0x15f] + 0x10;
        }
        if (local_e8 != (undefined1 *)0x0) {
          (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
          local_e8 = (undefined1 *)0x0;
        }
      }
      uVar4 = uVar4 + 1;
      lVar12 = lVar12 + 0x80;
    } while ((long)uVar4 < (long)(int)((ulong)(plVar11[0x45] - plVar11[0x44]) >> 7));
  }
  FUN_00dcd150(param_1);
  if (param_1[0x164] == param_1[0x165]) {
    param_1[0x165] = param_1[0x164];
    local_100 = (long **)FUN_00dd3060;
    local_f8 = FUN_00dd3480;
    local_f0 = &LAB_00dd36d0;
    local_e8 = &LAB_00dd36e0;
    pcVar9 = FUN_00dd3480;
    local_e0 = param_1;
    if (param_1[0x16c] == param_1[0x16b]) {
LAB_00dccde4:
      local_f0 = (undefined1 *)0x0;
      local_e8 = (undefined1 *)0x0;
      local_100 = (long **)0x0;
      local_f8 = (code *)0x0;
      (*pcVar9)(&local_e0);
    }
    else {
      local_80 = *param_1[0x16b];
      local_74[0] = 0;
      FUN_00dd3060(&local_e0,local_74,&local_80);
      plVar11 = param_1[0x16b];
      if (1 < (ulong)((long)param_1[0x16c] - (long)plVar11 >> 4)) {
        uVar4 = 1;
        lVar12 = 0x10;
        do {
          local_80 = *(long *)((long)plVar11 + lVar12);
          local_74[0] = (undefined4)uVar4;
          (*(code *)local_100)(&local_e0,local_74,&local_80);
          plVar11 = param_1[0x16b];
          uVar4 = uVar4 + 1;
          lVar12 = lVar12 + 0x10;
        } while (uVar4 < (ulong)((long)param_1[0x16c] - (long)plVar11 >> 4));
      }
      pcVar9 = local_f8;
      if (local_f8 != (code *)0x0) goto LAB_00dccde4;
    }
    *(undefined1 *)(param_1 + 0x16a) = 1;
  }
  if (*(char *)(param_1 + 0xc2) != '\0') {
    pplVar6 = (long **)FUN_00dc3410(&local_100,local_108);
    if (pplVar6 != (long **)0x0) {
      (*(code *)pplVar6[9][2])();
    }
    local_100 = pplVar6;
    FUN_006d9640(param_1,&local_100);
    if (local_100 != (long **)0x0) {
      (*(code *)local_100[9][3])();
      local_100 = (long **)0x0;
    }
    FUN_006a05a0(pplVar6 + 0x10,param_1 + 0xd2);
    uVar7 = FUN_006a0e30(pplVar6 + 0x10);
    FUN_0069a7c0(uVar7,1);
    param_1[0xf4] = (long *)pplVar6;
  }
  if (*(char *)(param_1 + 0x106) != '\0') {
    pplVar6 = (long **)FUN_00dc3500(&local_100,local_108);
    if (pplVar6 != (long **)0x0) {
      (*(code *)pplVar6[9][2])();
    }
    local_100 = pplVar6;
    FUN_006d9640(param_1,&local_100);
    if (local_100 != (long **)0x0) {
      (*(code *)local_100[9][3])();
    }
    local_100 = pplVar6;
    FUN_0069ae40(pplVar6,local_108,param_1 + 0x116,1);
    FUN_0069d2e0(pplVar6);
    param_1[0x138] = (long *)pplVar6;
    uVar4 = FUN_00da32a0(pplVar6);
    if ((uVar4 & 1) != 0) {
      FUN_013de0d0(param_1,local_108,&local_100);
    }
  }
  if (param_1[0xf4] == (long *)0x0) {
    local_10c = (uint)(param_1[0x138] != (long *)0x0);
  }
  else {
    local_10c = 1;
  }
  if (param_1[0x171] == param_1[0x172]) {
    local_e0 = &local_108;
    local_d8 = &local_10c;
    local_100 = (long **)FUN_00dd2a30;
    pcVar9 = FUN_00dd2bc0;
    local_f8 = FUN_00dd2bc0;
    local_f0 = &LAB_00dd2e00;
    local_e8 = &LAB_00dd2e20;
    local_d0 = param_1;
    if (param_1[0x16c] != param_1[0x16b]) {
      local_80 = *param_1[0x16b];
      local_74[0] = 0;
      FUN_00dd2a30(&local_e0,local_74,&local_80);
      plVar11 = param_1[0x16b];
      pcVar9 = local_f8;
      if (1 < (ulong)((long)param_1[0x16c] - (long)plVar11 >> 4)) {
        uVar4 = 1;
        lVar12 = 0x10;
        do {
          local_80 = *(long *)((long)plVar11 + lVar12);
          local_74[0] = (undefined4)uVar4;
          (*(code *)local_100)(&local_e0,local_74,&local_80);
          plVar11 = param_1[0x16b];
          uVar4 = uVar4 + 1;
          lVar12 = lVar12 + 0x10;
          pcVar9 = local_f8;
        } while (uVar4 < (ulong)((long)param_1[0x16c] - (long)plVar11 >> 4));
      }
      goto joined_r0x00dcd0e4;
    }
  }
  else {
    local_100 = (long **)FUN_00dd2e40;
    pcVar9 = FUN_00dd2e60;
    local_f8 = FUN_00dd2e60;
    local_f0 = &LAB_00dd2e70;
    local_e8 = &LAB_00dd2e80;
    local_e0 = param_1;
    if (param_1[0x16c] != param_1[0x16b]) {
      local_80 = *param_1[0x16b];
      local_74[0] = 0;
      FUN_00dd2e40(&local_e0,local_74,&local_80);
      plVar11 = param_1[0x16b];
      pcVar9 = local_f8;
      if (1 < (ulong)((long)param_1[0x16c] - (long)plVar11 >> 4)) {
        uVar4 = 1;
        lVar12 = 0x10;
        do {
          local_80 = *(long *)((long)plVar11 + lVar12);
          local_74[0] = (undefined4)uVar4;
          (*(code *)local_100)(&local_e0,local_74,&local_80);
          plVar11 = param_1[0x16b];
          uVar4 = uVar4 + 1;
          lVar12 = lVar12 + 0x10;
          pcVar9 = local_f8;
        } while (uVar4 < (ulong)((long)param_1[0x16c] - (long)plVar11 >> 4));
      }
joined_r0x00dcd0e4:
      if (pcVar9 == (code *)0x0) goto LAB_00dcd0fc;
    }
  }
  local_e8 = (undefined1 *)0x0;
  local_f0 = (undefined1 *)0x0;
  local_f8 = (code *)0x0;
  local_100 = (long **)0x0;
  (*pcVar9)(&local_e0);
LAB_00dcd0fc:
  *(undefined1 *)((long)param_1 + 0xa82) = 0;
  *(undefined4 *)((long)param_1 + 0x184) = 3;
  return 1;
}


