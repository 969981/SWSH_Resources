/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7f690; name: FUN_00d7f690
 */


void FUN_00d7f690(long param_1)

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
  FUN_006cf0a0(&local_b0,&DAT_0264d260);
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
  local_b0 = &LAB_00d82d80;
  local_a8 = FUN_00d82e40;
  local_98 = &LAB_00d82e60;
  local_a0 = FUN_00d82e50;
  alStack_90[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB_00d7f814:
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
    if (local_a0 != (code *)0x0) goto LAB_00d7f814;
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
  FUN_00d82f40(alStack_110,lVar5 + 0x150);
  *(undefined1 **)(lVar5 + 0x148) = &LAB_00d82f50;
  *(code **)(lVar5 + 0x138) = FUN_00d82f30;
  *(code **)(lVar5 + 0x140) = FUN_00d82f40;
  *(undefined8 *)(lVar5 + 0x130) = &LAB_00d82e70;
  FUN_00d82f30(alStack_110);
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
  FUN_006cf0a0(&local_b0,&DAT_0264d260);
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
  local_b0 = &LAB_00d82f60;
  local_a8 = FUN_00d83020;
  local_98 = &LAB_00d83040;
  local_a0 = FUN_00d83030;
  alStack_90[0] = param_1;
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x240) = 0;
    *(undefined8 *)(lVar5 + 0x248) = 0;
    *(undefined8 *)(lVar5 + 0x230) = 0;
    *(undefined8 *)(lVar5 + 0x238) = 0;
    (*pcVar3)(lVar5 + 0x250);
    if (local_a0 == (code *)0x0) goto LAB_00d7faa0;
  }
  (*local_a0)(alStack_90,lVar5 + 0x250);
  *(undefined1 **)(lVar5 + 0x248) = local_98;
  *(code **)(lVar5 + 0x238) = local_a8;
  *(code **)(lVar5 + 0x240) = local_a0;
  *(undefined8 *)(lVar5 + 0x230) = local_b0;
LAB_00d7faa0:
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
  FUN_00d83120(alStack_110,lVar5 + 0x150);
  *(undefined1 **)(lVar5 + 0x148) = &LAB_00d83130;
  *(code **)(lVar5 + 0x138) = FUN_00d83110;
  *(code **)(lVar5 + 0x140) = FUN_00d83120;
  *(undefined8 *)(lVar5 + 0x130) = &LAB_00d83050;
  FUN_00d83110(alStack_110);
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


