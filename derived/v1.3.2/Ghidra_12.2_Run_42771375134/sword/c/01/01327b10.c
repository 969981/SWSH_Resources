/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01327b10; name: FUN_01327b10
 */


void FUN_01327b10(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long local_1f0;
  long local_1e8;
  undefined4 local_1e0 [2];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  long local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x78);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6c));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01327b88;
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
LAB_01327b88:
  puVar4 = PTR_DAT_02719748;
  uVar9 = *(undefined8 *)PTR_DAT_02719748;
  local_78 = 0;
  local_70 = 0;
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
  if (lVar5 == 0) {
    FUN_0101cb00(0,&local_78);
  }
  else {
    plVar8 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0101cb00(lVar5,&local_78);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  puVar6 = (undefined8 *)FUN_00c79e90(*(undefined8 *)(param_1 + 0x60),0x18);
  uVar7 = *puVar6;
  (**(code **)(*(long *)*param_2 + 0x10))(&local_1e8);
  lVar5 = local_1e8;
  local_1e8 = 0;
  local_1e0[0] = 0;
  uStack_1d0 = 0xac6b1274261ea10;
  local_1a8 = 1;
  local_1a0 = lVar5;
  local_1d8 = param_3;
  local_1c8 = param_4;
  uStack_1c0 = uVar9;
  local_1b8 = uVar9;
  uStack_1b0 = uVar7;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_190 = local_70;
  local_178 = 0;
  uStack_170 = 0;
  local_198 = local_78;
  local_160 = *(undefined8 *)puVar4;
  local_188 = 0;
  local_180 = 0;
  local_168 = 1;
  local_82 = 0;
  local_80 = 0;
  local_7c = 0;
  local_a0 = 0;
  local_84 = 0x101;
  local_88 = 0x1010101;
  local_98 = 0;
  uStack_90 = 0;
  uStack_158 = local_160;
  local_150 = local_160;
  uStack_148 = local_160;
  local_140 = local_160;
  uStack_138 = local_160;
  local_130 = local_160;
  uStack_128 = local_160;
  local_120 = local_160;
  uStack_118 = local_160;
  local_110 = local_160;
  uStack_108 = local_160;
  local_100 = local_160;
  uStack_f8 = local_160;
  local_f0 = local_160;
  uStack_e8 = local_160;
  local_e0 = local_160;
  uStack_d8 = local_160;
  local_d0 = local_160;
  uStack_c8 = local_160;
  local_c0 = local_160;
  uStack_b8 = local_160;
  local_b0 = local_160;
  uStack_a8 = local_160;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (local_1e8 != 0) {
    (**(code **)(*(long *)(local_1e8 + 0x48) + 0x18))();
    local_1e8 = 0;
  }
  FUN_00c79eb0(&local_1f0,*(undefined8 *)(param_1 + 0x60),1,local_1e0);
  if (local_1f0 != 0) {
    (**(code **)(*(long *)(local_1f0 + 0x48) + 0x18))();
    local_1f0 = 0;
  }
  if (local_1a0 != 0) {
    (**(code **)(*(long *)(local_1a0 + 0x48) + 0x18))();
    local_1a0 = 0;
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x6c));
  return;
}


