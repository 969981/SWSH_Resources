/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01327860; name: FUN_01327860
 */


void FUN_01327860(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long local_1e0;
  undefined4 local_1d8 [2];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  long local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined1 local_15f;
  undefined2 local_15e;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined2 local_80;
  undefined4 local_7e;
  undefined1 local_7a;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 local_68;
  long local_58;
  
  lVar6 = nn::os::GetCurrentThread();
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
            *plVar1 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_013278d8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_013278d8:
  local_70 = 0;
  local_68 = 0;
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
  if (lVar6 == 0) {
    FUN_0101cb00(0,&local_70);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0101cb00(lVar6,&local_70);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  puVar7 = (undefined8 *)FUN_00c79e90(*(undefined8 *)(param_1 + 0x60),0x18);
  uVar9 = *puVar7;
  (**(code **)(*(long *)*param_2 + 0x10))(&local_58);
  lVar6 = local_58;
  local_58 = 0;
  local_178 = FUN_01524df0(*param_4);
  puVar4 = PTR_DAT_02719748;
  local_1d8[0] = 0;
  local_158 = *(undefined8 *)PTR_DAT_02719748;
  local_1a0 = 1;
  local_198 = lVar6;
  local_1d0 = param_3;
  uStack_1c8 = local_158;
  local_1c0 = local_158;
  uStack_1b8 = local_158;
  local_1b0 = local_158;
  uStack_1a8 = uVar9;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    local_158 = *(undefined8 *)puVar4;
  }
  local_188 = local_68;
  local_190 = local_70;
  local_180 = 0;
  local_15f = 0;
  local_168 = 0;
  local_7a = 0;
  local_78 = 0;
  local_74 = 0;
  local_98 = 0;
  uStack_170 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_7e = 0x1010101;
  local_160 = 0;
  local_15e = 0x101;
  local_80 = 0;
  uStack_150 = local_158;
  local_148 = local_158;
  uStack_140 = local_158;
  local_138 = local_158;
  uStack_130 = local_158;
  local_128 = local_158;
  uStack_120 = local_158;
  local_118 = local_158;
  uStack_110 = local_158;
  local_108 = local_158;
  uStack_100 = local_158;
  local_f8 = local_158;
  uStack_f0 = local_158;
  local_e8 = local_158;
  uStack_e0 = local_158;
  local_d8 = local_158;
  uStack_d0 = local_158;
  local_c8 = local_158;
  uStack_c0 = local_158;
  local_b8 = local_158;
  uStack_b0 = local_158;
  local_a8 = local_158;
  uStack_a0 = local_158;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  uVar5 = FUN_01524da0(*param_4);
  local_80 = CONCAT11(local_80._1_1_,uVar5) & 0xff01;
  lVar6 = *(long *)(param_1 + 0x60);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN_00c79ec0(&local_1e0,lVar6,1,local_1d8);
  if (local_1e0 != 0) {
    (**(code **)(*(long *)(local_1e0 + 0x48) + 0x18))();
    local_1e0 = 0;
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (local_198 != 0) {
    (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
    local_198 = 0;
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


