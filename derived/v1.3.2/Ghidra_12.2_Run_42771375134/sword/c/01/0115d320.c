/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115d320; name: FUN_0115d320
 */


void FUN_0115d320(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  long local_1b8;
  undefined1 *local_1b0;
  code *local_1a8;
  code *local_1a0;
  undefined1 *local_198;
  long alStack_190 [12];
  undefined1 *local_130;
  code *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  long alStack_110 [12];
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  
  local_b0 = &LAB_0115fa70;
  local_a8 = FUN_0115fa90;
  local_a0 = &LAB_0115faa0;
  local_98 = &LAB_0115fab0;
  plVar5 = *(long **)(*(long *)(param_1 + 0x4c0) + 0x58);
  local_130 = &LAB_0115fac0;
  local_128 = FUN_0115fae0;
  local_120 = &LAB_0115faf0;
  local_118 = &LAB_0115fb00;
  alStack_110[0] = param_1;
  alStack_90[0] = param_1;
  if (plVar5 != (long *)0x0) {
    (**(code **)(plVar5[9] + 0x10))();
  }
  puVar2 = (undefined1 *)FUN_008c1820(&local_1b0,*(undefined8 *)(param_1 + 8));
  if (puVar2 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar2 + 0x48) + 0x10))();
  }
  *(undefined8 *)(puVar2 + 0x60) = 0xbb5b18588039fc7d;
  local_1b0 = puVar2;
  (**(code **)(*plVar5 + 0xd0))(plVar5,&local_1b0);
  if (local_1b0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_1b0 + 0x48) + 0x18))();
    local_1b0 = (undefined1 *)0x0;
  }
  (**(code **)(plVar5[9] + 0x18))(plVar5 + 9);
  pcVar4 = *(code **)(puVar2 + 0x238);
  *(undefined8 *)(puVar2 + 0xa8) = 0x80000000;
  local_1b0 = &LAB_0115fb10;
  local_1a8 = FUN_0115fb20;
  local_1a0 = FUN_0115fb30;
  local_198 = &LAB_0115fb40;
  alStack_190[0] = param_1;
  if (pcVar4 == (code *)0x0) {
LAB_0115d484:
    (*local_1a0)(alStack_190,puVar2 + 0x250);
    *(undefined1 **)(puVar2 + 0x248) = local_198;
    *(code **)(puVar2 + 0x238) = local_1a8;
    *(code **)(puVar2 + 0x240) = local_1a0;
    *(undefined1 **)(puVar2 + 0x230) = local_1b0;
  }
  else {
    *(undefined8 *)(puVar2 + 0x240) = 0;
    *(undefined8 *)(puVar2 + 0x248) = 0;
    *(undefined8 *)(puVar2 + 0x230) = 0;
    *(undefined8 *)(puVar2 + 0x238) = 0;
    (*pcVar4)(puVar2 + 0x250);
    if (local_1a0 != (code *)0x0) goto LAB_0115d484;
  }
  FUN_006cf0a0(&local_1d0,&DAT_02678778);
  lVar1 = local_1b8;
  *(undefined8 *)(puVar2 + 0x2b0) = local_1d0;
  *(undefined8 *)(puVar2 + 0x2b8) = local_1c8;
  *(undefined8 *)(puVar2 + 0x2c0) = local_1c0;
  if (local_1b8 != 0) {
    (**(code **)(*(long *)(local_1b8 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(puVar2 + 0x2c8);
  *(long *)(puVar2 + 0x2c8) = lVar1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if (local_1b8 != 0) {
    (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
    local_1b8 = 0;
  }
  pcVar4 = local_1a8;
  if (local_1a8 != (code *)0x0) {
    local_1a0 = (code *)0x0;
    local_198 = (undefined1 *)0x0;
    local_1b0 = (undefined1 *)0x0;
    local_1a8 = (code *)0x0;
    (*pcVar4)(alStack_190);
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (plVar5 != (long *)0x0) {
    (**(code **)(plVar5[9] + 0x10))();
  }
  puVar2 = (undefined1 *)FUN_008c1820(&local_1b0,*(undefined8 *)(param_1 + 8));
  if (puVar2 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar2 + 0x48) + 0x10))();
  }
  *(undefined8 *)(puVar2 + 0x60) = 0xf0e49b23d9a58556;
  local_1b0 = puVar2;
  (**(code **)(*plVar5 + 0xd0))(plVar5,&local_1b0);
  if (local_1b0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_1b0 + 0x48) + 0x18))();
    local_1b0 = (undefined1 *)0x0;
  }
  (**(code **)(plVar5[9] + 0x18))(plVar5 + 9);
  pcVar4 = *(code **)(puVar2 + 0x238);
  *(undefined8 *)(puVar2 + 0xa8) = 0x20000000;
  local_1b0 = &LAB_0115fb50;
  local_1a8 = FUN_0115fb60;
  local_1a0 = FUN_0115fb70;
  local_198 = &LAB_0115fb80;
  alStack_190[0] = param_1;
  if (pcVar4 == (code *)0x0) {
LAB_0115d628:
    (*local_1a0)(alStack_190,puVar2 + 0x250);
    *(undefined1 **)(puVar2 + 0x248) = local_198;
    *(code **)(puVar2 + 0x238) = local_1a8;
    *(code **)(puVar2 + 0x240) = local_1a0;
    *(undefined1 **)(puVar2 + 0x230) = local_1b0;
  }
  else {
    *(undefined8 *)(puVar2 + 0x240) = 0;
    *(undefined8 *)(puVar2 + 0x248) = 0;
    *(undefined8 *)(puVar2 + 0x230) = 0;
    *(undefined8 *)(puVar2 + 0x238) = 0;
    (*pcVar4)(puVar2 + 0x250);
    if (local_1a0 != (code *)0x0) goto LAB_0115d628;
  }
  FUN_006cf0a0(&local_1d0,&DAT_02678778);
  lVar1 = local_1b8;
  *(undefined8 *)(puVar2 + 0x2b0) = local_1d0;
  *(undefined8 *)(puVar2 + 0x2b8) = local_1c8;
  *(undefined8 *)(puVar2 + 0x2c0) = local_1c0;
  if (local_1b8 != 0) {
    (**(code **)(*(long *)(local_1b8 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(puVar2 + 0x2c8);
  *(long *)(puVar2 + 0x2c8) = lVar1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if (local_1b8 != 0) {
    (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
    local_1b8 = 0;
  }
  pcVar4 = local_1a8;
  if (local_1a8 != (code *)0x0) {
    local_1a0 = (code *)0x0;
    local_198 = (undefined1 *)0x0;
    local_1b0 = (undefined1 *)0x0;
    local_1a8 = (code *)0x0;
    (*pcVar4)(alStack_190);
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (plVar5 != (long *)0x0) {
    (**(code **)(plVar5[9] + 0x10))();
  }
  puVar2 = (undefined1 *)FUN_008c1820(&local_1b0,*(undefined8 *)(param_1 + 8));
  if (puVar2 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar2 + 0x48) + 0x10))();
  }
  *(undefined8 *)(puVar2 + 0x60) = 0xecf734521d0806bc;
  local_1b0 = puVar2;
  (**(code **)(*plVar5 + 0xd0))(plVar5,&local_1b0);
  if (local_1b0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_1b0 + 0x48) + 0x18))();
    local_1b0 = (undefined1 *)0x0;
  }
  (**(code **)(plVar5[9] + 0x18))(plVar5 + 9);
  pcVar4 = *(code **)(puVar2 + 0x138);
  *(undefined8 *)(puVar2 + 0xa8) = 0x400000000;
  local_1b0 = &LAB_0115fb90;
  local_1a8 = FUN_0115fba0;
  local_1a0 = FUN_0115fbb0;
  local_198 = &LAB_0115fbc0;
  alStack_190[0] = param_1;
  if (pcVar4 == (code *)0x0) {
LAB_0115d7cc:
    (*local_1a0)(alStack_190,puVar2 + 0x150);
    *(undefined1 **)(puVar2 + 0x148) = local_198;
    *(code **)(puVar2 + 0x138) = local_1a8;
    *(code **)(puVar2 + 0x140) = local_1a0;
    *(undefined1 **)(puVar2 + 0x130) = local_1b0;
  }
  else {
    *(undefined8 *)(puVar2 + 0x140) = 0;
    *(undefined8 *)(puVar2 + 0x148) = 0;
    *(undefined8 *)(puVar2 + 0x130) = 0;
    *(undefined8 *)(puVar2 + 0x138) = 0;
    (*pcVar4)(puVar2 + 0x150);
    if (local_1a0 != (code *)0x0) goto LAB_0115d7cc;
  }
  FUN_006cf0a0(&local_1d0,&DAT_02678778);
  lVar1 = local_1b8;
  *(undefined8 *)(puVar2 + 0x2b0) = local_1d0;
  *(undefined8 *)(puVar2 + 0x2b8) = local_1c8;
  *(undefined8 *)(puVar2 + 0x2c0) = local_1c0;
  if (local_1b8 != 0) {
    (**(code **)(*(long *)(local_1b8 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(puVar2 + 0x2c8);
  *(long *)(puVar2 + 0x2c8) = lVar1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if (local_1b8 != 0) {
    (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
    local_1b8 = 0;
  }
  pcVar4 = local_1a8;
  if (local_1a8 != (code *)0x0) {
    local_1a0 = (code *)0x0;
    local_198 = (undefined1 *)0x0;
    local_1b0 = (undefined1 *)0x0;
    local_1a8 = (code *)0x0;
    (*pcVar4)(alStack_190);
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (plVar5 != (long *)0x0) {
    (**(code **)(plVar5[9] + 0x10))();
  }
  puVar2 = (undefined1 *)FUN_008c1820(&local_1b0,*(undefined8 *)(param_1 + 8));
  if (puVar2 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar2 + 0x48) + 0x10))();
  }
  *(undefined8 *)(puVar2 + 0x60) = 0xecf72d521d07fad7;
  local_1b0 = puVar2;
  (**(code **)(*plVar5 + 0xd0))(plVar5,&local_1b0);
  if (local_1b0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_1b0 + 0x48) + 0x18))();
    local_1b0 = (undefined1 *)0x0;
  }
  (**(code **)(plVar5[9] + 0x18))(plVar5 + 9);
  pcVar4 = *(code **)(puVar2 + 0x138);
  *(undefined8 *)(puVar2 + 0xa8) = 0x1000000000000;
  local_1b0 = &LAB_0115fbd0;
  local_1a8 = FUN_0115fbe0;
  local_1a0 = FUN_0115fbf0;
  local_198 = &LAB_0115fc00;
  alStack_190[0] = param_1;
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(puVar2 + 0x140) = 0;
    *(undefined8 *)(puVar2 + 0x148) = 0;
    *(undefined8 *)(puVar2 + 0x130) = 0;
    *(undefined8 *)(puVar2 + 0x138) = 0;
    (*pcVar4)(puVar2 + 0x150);
    if (local_1a0 == (code *)0x0) goto LAB_0115d9a0;
  }
  (*local_1a0)(alStack_190,puVar2 + 0x150);
  *(undefined1 **)(puVar2 + 0x148) = local_198;
  *(code **)(puVar2 + 0x138) = local_1a8;
  *(code **)(puVar2 + 0x140) = local_1a0;
  *(undefined1 **)(puVar2 + 0x130) = local_1b0;
LAB_0115d9a0:
  FUN_006cf0a0(&local_1d0,&DAT_02678778);
  lVar1 = local_1b8;
  *(undefined8 *)(puVar2 + 0x2b0) = local_1d0;
  *(undefined8 *)(puVar2 + 0x2b8) = local_1c8;
  *(undefined8 *)(puVar2 + 0x2c0) = local_1c0;
  if (local_1b8 != 0) {
    (**(code **)(*(long *)(local_1b8 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(puVar2 + 0x2c8);
  *(long *)(puVar2 + 0x2c8) = lVar1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if (local_1b8 != 0) {
    (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
    local_1b8 = 0;
  }
  pcVar4 = local_1a8;
  if (local_1a8 != (code *)0x0) {
    local_1a0 = (code *)0x0;
    local_198 = (undefined1 *)0x0;
    local_1b0 = (undefined1 *)0x0;
    local_1a8 = (code *)0x0;
    (*pcVar4)(alStack_190);
  }
  pcVar4 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = (undefined1 *)0x0;
    local_118 = (undefined1 *)0x0;
    local_130 = (undefined1 *)0x0;
    local_128 = (code *)0x0;
    (*pcVar4)(alStack_110);
  }
  pcVar4 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar4)(alStack_90);
  }
  return;
}


