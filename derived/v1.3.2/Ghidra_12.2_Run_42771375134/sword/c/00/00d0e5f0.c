/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d0e5f0; name: FUN_00d0e5f0
 */


void FUN_00d0e5f0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 *local_350;
  code *local_348;
  code *local_340;
  undefined1 *puStack_338;
  undefined1 auStack_330 [96];
  undefined1 *local_2d0;
  code *local_2c8;
  code *local_2c0;
  undefined1 *puStack_2b8;
  undefined1 auStack_2b0 [96];
  undefined1 *local_250;
  code *local_248;
  code *local_240;
  undefined1 *puStack_238;
  undefined1 auStack_230 [96];
  undefined1 *local_1d0;
  code *local_1c8;
  code *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 auStack_1b0 [96];
  undefined8 local_150;
  long local_148;
  undefined1 *local_140;
  code *local_138;
  code *local_130;
  undefined1 *local_128;
  long local_120 [12];
  undefined1 *local_c0;
  code *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  
  FUN_010364c0(*(undefined8 *)(param_1 + 0x198),1);
  FUN_00cf6a00(*(undefined8 *)(param_1 + 0x198),0);
  FUN_00ffa160(*(undefined8 *)(param_1 + 0x198),0,1);
  FUN_010364c0(*(undefined8 *)(param_1 + 0x1a0),0);
  FUN_00ffa290(*(undefined8 *)(param_1 + 0x1a0),1,1);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x1a0),0);
  local_c0 = (undefined1 *)0x5d226175f73f619c;
  FUN_00d0a2b0(param_1,&local_c0);
  local_c0 = &LAB_00d0f8c0;
  local_b8 = FUN_00d0f9d0;
  local_b0 = FUN_00d0f9e0;
  local_a8 = &LAB_00d0f9f0;
  local_140 = &LAB_00d0fa00;
  local_138 = FUN_00d0fa80;
  local_130 = FUN_00d0fa90;
  local_128 = &LAB_00d0faa0;
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  local_120[0] = param_1;
  alStack_a0[0] = param_1;
  plVar1 = (long *)(**(code **)*puVar5)(puVar5);
  lVar2 = FUN_00cf3e00();
  for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
  }
  local_148 = puVar5[0xe];
  if (local_148 != 0) {
    (**(code **)(*(long *)(local_148 + 0x48) + 0x10))();
  }
  lVar2 = FUN_00cf2f70(&local_148);
  if (local_148 != 0) {
    (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
    local_148 = 0;
  }
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0xa8) == '\0') {
      uVar6 = *(undefined8 *)(param_1 + 0x1a0);
      local_2c0 = (code *)0x0;
      puStack_2b8 = (undefined1 *)0x0;
      local_2d0 = (undefined1 *)0x0;
      local_2c8 = (code *)0x0;
      if (local_b0 != (code *)0x0) {
        (*local_b0)(alStack_a0,auStack_2b0);
        local_2c0 = local_b0;
        puStack_2b8 = local_a8;
        local_2d0 = local_c0;
        local_2c8 = local_b8;
      }
      local_340 = (code *)0x0;
      puStack_338 = (undefined1 *)0x0;
      local_350 = (undefined1 *)0x0;
      local_348 = (code *)0x0;
      if (local_130 != (code *)0x0) {
        (*local_130)(local_120,auStack_330);
        local_340 = local_130;
        puStack_338 = local_128;
        local_350 = local_140;
        local_348 = local_138;
      }
      FUN_00cfd4b0(uVar6,&local_2d0,&local_350);
      pcVar4 = local_348;
      if (local_348 != (code *)0x0) {
        local_340 = (code *)0x0;
        puStack_338 = (undefined1 *)0x0;
        local_350 = (undefined1 *)0x0;
        local_348 = (code *)0x0;
        (*pcVar4)(auStack_330);
      }
      pcVar4 = local_2c8;
      if (local_2c8 == (code *)0x0) goto LAB_00d0e8f4;
      puVar3 = auStack_2b0;
      local_2c0 = (code *)0x0;
      puStack_2b8 = (undefined1 *)0x0;
      local_2d0 = (undefined1 *)0x0;
      local_2c8 = (code *)0x0;
    }
    else {
      local_148 = *(long *)(lVar2 + 0xb2);
      local_150 = *(undefined8 *)(lVar2 + 0xba);
      uVar6 = *(undefined8 *)(param_1 + 0x1a0);
      local_1c0 = (code *)0x0;
      puStack_1b8 = (undefined1 *)0x0;
      local_1d0 = (undefined1 *)0x0;
      local_1c8 = (code *)0x0;
      if (local_b0 != (code *)0x0) {
        (*local_b0)(alStack_a0,auStack_1b0);
        local_1c0 = local_b0;
        puStack_1b8 = local_a8;
        local_1d0 = local_c0;
        local_1c8 = local_b8;
      }
      local_240 = (code *)0x0;
      puStack_238 = (undefined1 *)0x0;
      local_250 = (undefined1 *)0x0;
      local_248 = (code *)0x0;
      if (local_130 != (code *)0x0) {
        (*local_130)(local_120,auStack_230);
        local_240 = local_130;
        puStack_238 = local_128;
        local_250 = local_140;
        local_248 = local_138;
      }
      FUN_00cfd080(uVar6,&local_148,&local_150,&local_1d0,&local_250);
      pcVar4 = local_248;
      if (local_248 != (code *)0x0) {
        local_240 = (code *)0x0;
        puStack_238 = (undefined1 *)0x0;
        local_250 = (undefined1 *)0x0;
        local_248 = (code *)0x0;
        (*pcVar4)(auStack_230);
      }
      pcVar4 = local_1c8;
      if (local_1c8 == (code *)0x0) goto LAB_00d0e8f4;
      local_1c0 = (code *)0x0;
      puStack_1b8 = (undefined1 *)0x0;
      local_1d0 = (undefined1 *)0x0;
      local_1c8 = (code *)0x0;
      puVar3 = auStack_1b0;
    }
    (*pcVar4)(puVar3);
  }
LAB_00d0e8f4:
  pcVar4 = local_138;
  *(undefined4 *)(param_1 + 400) = 3;
  if (local_138 != (code *)0x0) {
    local_128 = (undefined1 *)0x0;
    local_130 = (code *)0x0;
    local_138 = (code *)0x0;
    local_140 = (undefined1 *)0x0;
    (*pcVar4)(local_120);
  }
  pcVar4 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar4)(alStack_a0);
  }
  return;
}


