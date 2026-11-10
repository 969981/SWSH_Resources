/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0074fac0; name: FUN_0074fac0
 */


long FUN_0074fac0(undefined4 param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  uint *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long local_250;
  long local_248;
  undefined *local_240;
  long local_238;
  long local_230;
  code *local_228;
  code *local_220;
  long local_218;
  undefined1 auStack_210 [96];
  long local_1b0;
  code *local_1a8;
  code *local_1a0;
  long local_198;
  undefined1 auStack_190 [96];
  undefined4 local_130;
  long local_120;
  code *local_118;
  code *local_110;
  long local_108;
  undefined1 auStack_100 [96];
  long local_a0;
  long lStack_98;
  undefined1 local_90;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_2 + 0x428);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x41c));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0074fb38;
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
LAB_0074fb38:
  puVar4 = PTR_DAT_02715e08;
  local_1a0 = (code *)0x0;
  local_198 = 0;
  local_1b0 = 0;
  local_1a8 = (code *)0x0;
  local_238 = 0;
  local_220 = (code *)0x0;
  local_218 = 0;
  local_230 = 0;
  local_228 = (code *)0x0;
  local_250 = 0;
  local_248 = 0;
  local_240 = PTR_DAT_02715e08 + 0x10;
  local_130 = 0x3f800000;
  local_90 = 0;
  local_110 = (code *)0x0;
  local_108 = 0;
  local_120 = 0;
  local_118 = (code *)0x0;
  local_a0 = 0;
  lStack_98 = 0;
  lVar6 = *(long *)(param_3 + 8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  local_238 = lVar6;
  if (*(code **)(param_3 + 0x20) == (code *)0x0) {
    pcVar7 = *(code **)(param_3 + 0xa0);
  }
  else {
    (**(code **)(param_3 + 0x20))(param_3 + 0x30,auStack_210);
    pcVar7 = local_1a8;
    local_230 = *(long *)(param_3 + 0x10);
    local_228 = *(code **)(param_3 + 0x18);
    local_220 = *(code **)(param_3 + 0x20);
    local_218 = *(long *)(param_3 + 0x28);
    if (local_1a8 != (code *)0x0) {
      local_1a0 = (code *)0x0;
      local_198 = 0;
      local_1b0 = 0;
      local_1a8 = (code *)0x0;
      (*pcVar7)(auStack_190);
    }
    pcVar7 = *(code **)(param_3 + 0xa0);
  }
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(param_3 + 0xb0,auStack_190);
    local_1b0 = *(long *)(param_3 + 0x90);
    local_1a8 = *(code **)(param_3 + 0x98);
    local_1a0 = *(code **)(param_3 + 0xa0);
    local_198 = *(long *)(param_3 + 0xa8);
  }
  local_250 = 0;
  if (*(long *)(param_3 + 8) != 0) {
    puVar8 = *(uint **)(*(long *)(param_3 + 8) + 400);
    local_250 = (long)puVar8 + (ulong)*puVar8;
  }
  plVar9 = *(long **)(param_2 + 0x3f0);
  local_130 = param_1;
  if (plVar9 == *(long **)(param_2 + 0x3f8)) {
    FUN_00750b10(param_2 + 1000,&local_250);
    lVar6 = *(long *)(param_2 + 0x3f0);
  }
  else {
    uVar10 = *(undefined8 *)(param_2 + 0x400);
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar10;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    *plVar9 = local_250;
    plVar9[1] = local_248;
    if (local_248 != 0) {
      (**(code **)(*(long *)(local_248 + 0x48) + 0x10))();
    }
    plVar9[2] = (long)(PTR_DAT_02710a48 + 0x10);
    plVar9[3] = local_238;
    if (local_238 != 0) {
      (**(code **)(*(long *)(local_238 + 0x48) + 0x10))();
    }
    plVar9[4] = 0;
    plVar9[6] = 0;
    plVar9[7] = 0;
    plVar9[5] = 0;
    if (local_220 != (code *)0x0) {
      (*local_220)(auStack_210,plVar9 + 8);
      plVar9[7] = local_218;
      plVar9[5] = (long)local_228;
      plVar9[6] = (long)local_220;
      plVar9[4] = local_230;
    }
    plVar9[0x14] = 0;
    plVar9[0x16] = 0;
    plVar9[0x17] = 0;
    plVar9[0x15] = 0;
    if (local_1a0 != (code *)0x0) {
      (*local_1a0)(auStack_190,plVar9 + 0x18);
      plVar9[0x17] = local_198;
      plVar9[0x15] = (long)local_1a8;
      plVar9[0x16] = (long)local_1a0;
      plVar9[0x14] = local_1b0;
    }
    plVar9[2] = (long)(puVar4 + 0x10);
    *(undefined4 *)(plVar9 + 0x24) = local_130;
    plVar9[0x28] = 0;
    plVar9[0x29] = 0;
    plVar9[0x26] = 0;
    plVar9[0x27] = 0;
    if (local_110 != (code *)0x0) {
      (*local_110)(auStack_100,plVar9 + 0x2a);
      plVar9[0x29] = local_108;
      plVar9[0x27] = (long)local_118;
      plVar9[0x28] = (long)local_110;
      plVar9[0x26] = local_120;
    }
    *(undefined1 *)(plVar9 + 0x38) = local_90;
    plVar9[0x36] = local_a0;
    plVar9[0x37] = lStack_98;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    lVar6 = *(long *)(param_2 + 0x3f0) + 0x1d0;
    *(long *)(param_2 + 0x3f0) = lVar6;
  }
  pcVar7 = local_118;
  lVar6 = (lVar6 - *(long *)(param_2 + 1000) >> 4) * 0x34f72c234f72c235;
  *(long *)(param_2 + 0x3e0) = lVar6;
  if (local_118 != (code *)0x0) {
    local_110 = (code *)0x0;
    local_108 = 0;
    local_120 = 0;
    local_118 = (code *)0x0;
    (*pcVar7)(auStack_100);
  }
  local_240 = PTR_DAT_02710a48 + 0x10;
  if (local_238 == 0) {
    local_238 = 0;
    pcVar7 = local_1a8;
  }
  else {
    FUN_006e2100(local_238,&local_240);
    lVar5 = local_238;
    local_238 = 0;
    pcVar7 = local_1a8;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      pcVar7 = local_1a8;
    }
  }
  local_1a8 = pcVar7;
  if (pcVar7 != (code *)0x0) {
    local_1a0 = (code *)0x0;
    local_198 = 0;
    local_1b0 = 0;
    local_1a8 = (code *)0x0;
    (*pcVar7)(auStack_190);
  }
  pcVar7 = local_228;
  if (local_228 != (code *)0x0) {
    local_220 = (code *)0x0;
    local_218 = 0;
    local_230 = 0;
    local_228 = (code *)0x0;
    (*pcVar7)(auStack_210);
  }
  if (local_238 != 0) {
    (**(code **)(*(long *)(local_238 + 0x48) + 0x18))();
    local_238 = 0;
  }
  if (local_248 != 0) {
    (**(code **)(*(long *)(local_248 + 0x48) + 0x18))();
    local_248 = 0;
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x41c));
  return lVar6 + -1;
}


