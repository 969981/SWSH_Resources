/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01074b90; name: FUN_01074b90
 */


void FUN_01074b90(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long alStack_110 [12];
  undefined1 *local_b0;
  code *local_a8;
  code *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  
  plVar4 = *(long **)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (plVar4 != (long *)0x0) {
    (**(code **)(plVar4[9] + 0x10))();
  }
  puVar1 = (undefined1 *)FUN_008c1820(&local_b0,*(undefined8 *)(param_1 + 8));
  if (puVar1 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar1 + 0x48) + 0x10))();
  }
  *(undefined8 *)(puVar1 + 0x60) = 0x1788011e7fb789c;
  local_b0 = puVar1;
  (**(code **)(*plVar4 + 0xd0))(plVar4,&local_b0);
  if (local_b0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = (undefined1 *)0x0;
  }
  *(undefined1 **)(param_1 + 0x5f8) = puVar1;
  (**(code **)(plVar4[9] + 0x18))(plVar4 + 9);
  *(undefined8 *)(*(long *)(param_1 + 0x5f8) + 0xa8) = 0x80000000;
  lVar5 = *(long *)(param_1 + 0x5f8);
  FUN_006cf0a0(&local_b0,&DAT_0266d2d8);
  puVar1 = local_98;
  *(undefined1 **)(lVar5 + 0x2b0) = local_b0;
  *(code **)(lVar5 + 0x2b8) = local_a8;
  *(code **)(lVar5 + 0x2c0) = local_a0;
  if (local_98 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_98 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar5 + 0x2c8);
  *(undefined1 **)(lVar5 + 0x2c8) = puVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  if (local_98 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_98 + 0x48) + 0x18))();
  }
  lVar5 = *(long *)(param_1 + 0x5f8);
  pcVar3 = *(code **)(lVar5 + 0x238);
  local_b0 = &LAB_01077280;
  local_a8 = FUN_010772e0;
  local_98 = &LAB_01077300;
  local_a0 = FUN_010772f0;
  alStack_90[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB_01074d14:
    (*local_a0)(alStack_90,lVar5 + 0x250);
    *(undefined1 **)(lVar5 + 0x248) = local_98;
    *(code **)(lVar5 + 0x238) = local_a8;
    *(code **)(lVar5 + 0x240) = local_a0;
    *(undefined8 *)(lVar5 + 0x230) = local_b0;
  }
  else {
    *(undefined8 *)(lVar5 + 0x240) = 0;
    *(undefined8 *)(lVar5 + 0x248) = 0;
    *(undefined8 *)(lVar5 + 0x230) = 0;
    *(undefined8 *)(lVar5 + 0x238) = 0;
    (*pcVar3)(lVar5 + 0x250);
    if (local_a0 != (code *)0x0) goto LAB_01074d14;
  }
  lVar5 = *(long *)(param_1 + 0x5f8);
  pcVar3 = *(code **)(lVar5 + 0x138);
  alStack_110[0] = param_1;
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x140) = 0;
    *(undefined8 *)(lVar5 + 0x148) = 0;
    *(undefined8 *)(lVar5 + 0x130) = 0;
    *(undefined8 *)(lVar5 + 0x138) = 0;
    (*pcVar3)(lVar5 + 0x150);
  }
  FUN_01077380(alStack_110,lVar5 + 0x150);
  *(undefined1 **)(lVar5 + 0x148) = &LAB_01077390;
  *(code **)(lVar5 + 0x138) = FUN_01077370;
  *(code **)(lVar5 + 0x140) = FUN_01077380;
  *(undefined8 *)(lVar5 + 0x130) = &LAB_01077310;
  FUN_01077370(alStack_110);
  pcVar3 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar3)(alStack_90);
  }
  plVar4 = *(long **)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (plVar4 != (long *)0x0) {
    (**(code **)(plVar4[9] + 0x10))();
  }
  puVar1 = (undefined1 *)FUN_008c1820(&local_b0,*(undefined8 *)(param_1 + 8));
  if (puVar1 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar1 + 0x48) + 0x10))();
  }
  *(undefined8 *)(puVar1 + 0x60) = 0x1f549f2677e93349;
  local_b0 = puVar1;
  (**(code **)(*plVar4 + 0xd0))(plVar4,&local_b0);
  if (local_b0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = (undefined1 *)0x0;
  }
  *(undefined1 **)(param_1 + 0x600) = puVar1;
  (**(code **)(plVar4[9] + 0x18))(plVar4 + 9);
  *(undefined8 *)(*(long *)(param_1 + 0x600) + 0xa8) = 0x20000000;
  lVar5 = *(long *)(param_1 + 0x600);
  FUN_006cf0a0(&local_b0,&DAT_0266d2d8);
  puVar1 = local_98;
  *(undefined1 **)(lVar5 + 0x2b0) = local_b0;
  *(code **)(lVar5 + 0x2b8) = local_a8;
  *(code **)(lVar5 + 0x2c0) = local_a0;
  if (local_98 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar5 + 0x2c8);
  *(undefined1 **)(lVar5 + 0x2c8) = puVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  if (local_98 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
  }
  lVar5 = *(long *)(param_1 + 0x600);
  pcVar3 = *(code **)(lVar5 + 0x238);
  local_b0 = &LAB_010773a0;
  local_a8 = FUN_01077430;
  local_98 = &LAB_01077450;
  local_a0 = FUN_01077440;
  alStack_90[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB_01074f70:
    (*local_a0)(alStack_90,lVar5 + 0x250);
    *(undefined1 **)(lVar5 + 0x248) = local_98;
    *(code **)(lVar5 + 0x238) = local_a8;
    *(code **)(lVar5 + 0x240) = local_a0;
    *(undefined8 *)(lVar5 + 0x230) = local_b0;
  }
  else {
    *(undefined8 *)(lVar5 + 0x240) = 0;
    *(undefined8 *)(lVar5 + 0x248) = 0;
    *(undefined8 *)(lVar5 + 0x230) = 0;
    *(undefined8 *)(lVar5 + 0x238) = 0;
    (*pcVar3)(lVar5 + 0x250);
    if (local_a0 != (code *)0x0) goto LAB_01074f70;
  }
  lVar5 = *(long *)(param_1 + 0x600);
  pcVar3 = *(code **)(lVar5 + 0x138);
  alStack_110[0] = param_1;
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x140) = 0;
    *(undefined8 *)(lVar5 + 0x148) = 0;
    *(undefined8 *)(lVar5 + 0x130) = 0;
    *(undefined8 *)(lVar5 + 0x138) = 0;
    (*pcVar3)(lVar5 + 0x150);
  }
  FUN_01077500(alStack_110,lVar5 + 0x150);
  *(undefined1 **)(lVar5 + 0x148) = &LAB_01077510;
  *(code **)(lVar5 + 0x138) = FUN_010774f0;
  *(code **)(lVar5 + 0x140) = FUN_01077500;
  *(undefined8 *)(lVar5 + 0x130) = &LAB_01077460;
  FUN_010774f0(alStack_110);
  pcVar3 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar3)(alStack_90);
  }
  plVar4 = *(long **)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (plVar4 != (long *)0x0) {
    (**(code **)(plVar4[9] + 0x10))();
  }
  puVar1 = (undefined1 *)FUN_008c1820(&local_b0,*(undefined8 *)(param_1 + 8));
  if (puVar1 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar1 + 0x48) + 0x10))();
  }
  *(undefined8 *)(puVar1 + 0x60) = 0x5f99110d38f5d6af;
  local_b0 = puVar1;
  (**(code **)(*plVar4 + 0xd0))(plVar4,&local_b0);
  if (local_b0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = (undefined1 *)0x0;
  }
  *(undefined1 **)(param_1 + 0x608) = puVar1;
  (**(code **)(plVar4[9] + 0x18))(plVar4 + 9);
  *(undefined8 *)(*(long *)(param_1 + 0x608) + 0xa8) = 0x2000000000000;
  lVar5 = *(long *)(param_1 + 0x608);
  pcVar3 = *(code **)(lVar5 + 0x238);
  local_b0 = &LAB_01077520;
  local_a8 = FUN_01077530;
  local_98 = &LAB_01077550;
  local_a0 = FUN_01077540;
  alStack_90[0] = param_1;
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x240) = 0;
    *(undefined8 *)(lVar5 + 0x248) = 0;
    *(undefined8 *)(lVar5 + 0x230) = 0;
    *(undefined8 *)(lVar5 + 0x238) = 0;
    (*pcVar3)(lVar5 + 0x250);
    if (local_a0 == (code *)0x0) goto LAB_0107518c;
  }
  (*local_a0)(alStack_90,lVar5 + 0x250);
  *(undefined1 **)(lVar5 + 0x248) = local_98;
  *(code **)(lVar5 + 0x238) = local_a8;
  *(code **)(lVar5 + 0x240) = local_a0;
  *(undefined8 *)(lVar5 + 0x230) = local_b0;
LAB_0107518c:
  pcVar3 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar3)(alStack_90);
  }
  return;
}


