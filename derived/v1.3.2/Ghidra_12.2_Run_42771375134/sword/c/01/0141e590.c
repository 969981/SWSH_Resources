/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141e590; name: FUN_0141e590
 */


void FUN_0141e590(long param_1)

{
  bool bVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 local_390;
  code *local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  code *local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined1 auStack_350 [96];
  undefined8 local_2f0;
  code *local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [96];
  undefined8 local_270;
  code *local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined1 auStack_250 [96];
  undefined8 local_1f0;
  code *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [96];
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  code *local_158;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined1 auStack_c0 [96];
  undefined4 local_60;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    return;
  }
  puVar8 = (undefined8 *)(param_1 + 0x80);
  uVar3 = FUN_0141e220(puVar8);
  if ((uVar3 & 1) == 0) {
    return;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  local_380 = 0;
  uStack_378 = 0;
  local_390 = 0;
  local_388 = (code *)0x0;
  if (*(code **)(param_1 + 0x340) != (code *)0x0) {
    (**(code **)(param_1 + 0x340))(param_1 + 0x350,&local_370);
    local_390 = *(undefined8 *)(param_1 + 0x330);
    local_388 = *(code **)(param_1 + 0x338);
    local_380 = *(undefined8 *)(param_1 + 0x340);
    uStack_378 = *(undefined8 *)(param_1 + 0x348);
  }
  uVar3 = FUN_0141d800(uVar7,puVar8,&local_390);
  pcVar5 = local_388;
  if (local_388 != (code *)0x0) {
    local_380 = 0;
    uStack_378 = 0;
    local_390 = 0;
    local_388 = (code *)0x0;
    (*pcVar5)(&local_370);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_0141e220(puVar8);
    if ((uVar3 & 1) == 0) {
      FUN_0141db50(puVar8,puVar8);
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x68) + 0x68);
    if ((lVar6 != 0) && (puVar8 = *(undefined8 **)(lVar6 + 0x60), puVar8 != (undefined8 *)0x0)) {
      plVar4 = (long *)(**(code **)*puVar8)(puVar8);
      lVar6 = FUN_01410b60();
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)lVar6) {
          FUN_0140ce50(puVar8 + -10);
          uVar3 = FUN_01416740();
          goto joined_r0x0141e940;
        }
      }
    }
    FUN_0140ce50(0);
    uVar3 = FUN_01416740();
joined_r0x0141e940:
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x68) + 0x68);
    if ((lVar6 != 0) && (puVar8 = *(undefined8 **)(lVar6 + 0x60), puVar8 != (undefined8 *)0x0)) {
      plVar4 = (long *)(**(code **)*puVar8)(puVar8);
      lVar6 = FUN_01410b60();
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)lVar6) {
          puVar8 = puVar8 + -10;
          goto LAB_0141e8f8;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
LAB_0141e8f8:
    uVar7 = FUN_0140ce50(puVar8);
    FUN_01416ac0(uVar7,0);
    return;
  }
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_2f0 = 0;
  local_2e8 = (code *)0x0;
  local_260 = 0;
  uStack_258 = 0;
  local_158 = (code *)0x0;
  local_160 = 0;
  local_168 = (code *)0x0;
  local_170 = 0;
  local_c8 = (code *)0x0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_e0 = 0;
  local_f0 = 0xcbf29ce484222645;
  local_60 = 0;
  local_270 = 0;
  local_268 = (code *)0x0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1f0 = 0;
  local_1e8 = (code *)0x0;
  local_360 = 0;
  uStack_358 = 0;
  local_370 = 0;
  local_368 = (code *)0x0;
  local_390 = 0xcbf29ce484222645;
  local_388 = (code *)0xcbf29ce484222645;
  local_380 = 0xcbf29ce484222645;
  uStack_378 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x90) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x98) = 0xcbf29ce484222645;
  *puVar8 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x88) = 0xcbf29ce484222645;
  FUN_0141f990(param_1 + 0xa0,&local_370);
  pcVar5 = *(code **)(param_1 + 0x2a8);
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    (*pcVar5)(param_1 + 0x2c0);
  }
  if (local_158 != (code *)0x0) {
    (*local_158)(auStack_150,param_1 + 0x2c0);
    pcVar5 = local_168;
    *(code **)(param_1 + 0x2b8) = local_158;
    *(undefined8 *)(param_1 + 0x2a0) = local_170;
    *(code **)(param_1 + 0x2a8) = local_168;
    *(undefined8 *)(param_1 + 0x2b0) = local_160;
    if (local_168 != (code *)0x0) {
      local_160 = 0;
      local_158 = (code *)0x0;
      local_170 = 0;
      local_168 = (code *)0x0;
      (*pcVar5)(auStack_150);
    }
  }
  *(undefined8 *)(param_1 + 800) = local_f0;
  pcVar5 = *(code **)(param_1 + 0x338);
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x340) = 0;
    *(undefined8 *)(param_1 + 0x348) = 0;
    *(undefined8 *)(param_1 + 0x330) = 0;
    *(undefined8 *)(param_1 + 0x338) = 0;
    (*pcVar5)(param_1 + 0x350);
  }
  if (local_c8 != (code *)0x0) {
    (*local_c8)(auStack_c0,param_1 + 0x350);
    pcVar5 = local_d8;
    *(code **)(param_1 + 0x348) = local_c8;
    *(undefined8 *)(param_1 + 0x330) = local_e0;
    *(code **)(param_1 + 0x338) = local_d8;
    *(undefined8 *)(param_1 + 0x340) = local_d0;
    if (local_d8 == (code *)0x0) {
      *(undefined4 *)(param_1 + 0x3b0) = local_60;
      local_d8 = (code *)0x0;
      pcVar5 = local_168;
      goto joined_r0x0141e7b4;
    }
    local_d0 = 0;
    local_c8 = (code *)0x0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar5)(auStack_c0);
  }
  pcVar2 = local_d8;
  *(undefined4 *)(param_1 + 0x3b0) = local_60;
  bVar1 = local_d8 != (code *)0x0;
  local_d8 = (code *)0x0;
  pcVar5 = local_168;
  if (bVar1) {
    local_d0 = 0;
    local_c8 = (code *)0x0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar2)(auStack_c0);
    pcVar5 = local_168;
  }
joined_r0x0141e7b4:
  local_168 = pcVar5;
  if (pcVar5 != (code *)0x0) {
    local_160 = 0;
    local_158 = (code *)0x0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar5)(auStack_150);
  }
  pcVar5 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1f0 = 0;
    local_1e8 = (code *)0x0;
    (*pcVar5)(auStack_1d0);
  }
  pcVar5 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = 0;
    uStack_258 = 0;
    local_270 = 0;
    local_268 = (code *)0x0;
    (*pcVar5)(auStack_250);
  }
  pcVar5 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = 0;
    uStack_2d8 = 0;
    local_2f0 = 0;
    local_2e8 = (code *)0x0;
    (*pcVar5)(auStack_2d0);
  }
  pcVar5 = local_368;
  if (local_368 != (code *)0x0) {
    local_360 = 0;
    uStack_358 = 0;
    local_370 = 0;
    local_368 = (code *)0x0;
    (*pcVar5)(auStack_350);
  }
  return;
}


