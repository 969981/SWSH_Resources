/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01466680; name: FUN_01466680
 */


void FUN_01466680(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  undefined1 *local_b0;
  code *local_a8;
  code *local_a0;
  undefined1 *local_98;
  long local_90 [12];
  long local_28;
  
  plVar4 = *(long **)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (plVar4 != (long *)0x0) {
    (**(code **)(plVar4[9] + 0x10))();
  }
  puVar1 = (undefined1 *)FUN_008c1820(&local_b0,*(undefined8 *)(param_1 + 8));
  if (puVar1 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar1 + 0x48) + 0x10))();
  }
  *(undefined8 *)(puVar1 + 0x60) = 0x8c2016c594d2fc94;
  local_b0 = puVar1;
  (**(code **)(*plVar4 + 0xd0))(plVar4,&local_b0);
  if (local_b0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = (undefined1 *)0x0;
  }
  (**(code **)(plVar4[9] + 0x18))(plVar4 + 9);
  pcVar3 = *(code **)(puVar1 + 0x238);
  *(undefined8 *)(puVar1 + 0xa8) = 0x10000000;
  local_b0 = &LAB_01467470;
  local_a8 = FUN_01467500;
  local_a0 = FUN_01467510;
  local_98 = &LAB_01467520;
  local_90[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB_01466784:
    (*local_a0)(local_90,puVar1 + 0x250);
    *(undefined1 **)(puVar1 + 0x248) = local_98;
    *(code **)(puVar1 + 0x238) = local_a8;
    *(code **)(puVar1 + 0x240) = local_a0;
    *(undefined1 **)(puVar1 + 0x230) = local_b0;
  }
  else {
    *(undefined8 *)(puVar1 + 0x240) = 0;
    *(undefined8 *)(puVar1 + 0x248) = 0;
    *(undefined8 *)(puVar1 + 0x230) = 0;
    *(undefined8 *)(puVar1 + 0x238) = 0;
    (*pcVar3)(puVar1 + 0x250);
    if (local_a0 != (code *)0x0) goto LAB_01466784;
  }
  *(undefined1 **)(param_1 + 0x770) = puVar1;
  plVar4 = *(long **)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (plVar4 != (long *)0x0) {
    (**(code **)(plVar4[9] + 0x10))();
  }
  lVar2 = FUN_008c1820(&local_28,*(undefined8 *)(param_1 + 8));
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  *(undefined8 *)(lVar2 + 0x60) = 0xd5c591d03f90f001;
  local_28 = lVar2;
  (**(code **)(*plVar4 + 0xd0))(plVar4,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  (**(code **)(plVar4[9] + 0x18))(plVar4 + 9);
  pcVar3 = local_a8;
  *(undefined8 *)(lVar2 + 0xa8) = 0x40000000;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar3)(local_90);
  }
  local_b0 = &LAB_01467530;
  local_a8 = FUN_014675c0;
  local_a0 = FUN_014675d0;
  local_98 = &LAB_014675e0;
  pcVar3 = *(code **)(lVar2 + 0x238);
  local_90[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB_014668d4:
    (*local_a0)(local_90,lVar2 + 0x250);
    *(undefined1 **)(lVar2 + 0x248) = local_98;
    *(code **)(lVar2 + 0x238) = local_a8;
    *(code **)(lVar2 + 0x240) = local_a0;
    *(undefined8 *)(lVar2 + 0x230) = local_b0;
  }
  else {
    *(undefined8 *)(lVar2 + 0x240) = 0;
    *(undefined8 *)(lVar2 + 0x248) = 0;
    *(undefined8 *)(lVar2 + 0x230) = 0;
    *(undefined8 *)(lVar2 + 0x238) = 0;
    (*pcVar3)(lVar2 + 0x250);
    if (local_a0 != (code *)0x0) goto LAB_014668d4;
  }
  *(long *)(param_1 + 0x778) = lVar2;
  plVar4 = *(long **)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (plVar4 != (long *)0x0) {
    (**(code **)(plVar4[9] + 0x10))();
  }
  lVar2 = FUN_008c1820(&local_28,*(undefined8 *)(param_1 + 8));
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  *(undefined8 *)(lVar2 + 0x60) = 0x22397e2f145629c3;
  local_28 = lVar2;
  (**(code **)(*plVar4 + 0xd0))(plVar4,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  (**(code **)(plVar4[9] + 0x18))(plVar4 + 9);
  pcVar3 = local_a8;
  *(undefined8 *)(lVar2 + 0xa8) = 0x1000000000000;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar3)(local_90);
  }
  local_b0 = &LAB_014675f0;
  local_a8 = FUN_01467640;
  local_a0 = FUN_01467650;
  local_98 = &LAB_01467660;
  pcVar3 = *(code **)(lVar2 + 0x138);
  local_90[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB_01466a24:
    (*local_a0)(local_90,lVar2 + 0x150);
    *(undefined1 **)(lVar2 + 0x148) = local_98;
    *(code **)(lVar2 + 0x138) = local_a8;
    *(code **)(lVar2 + 0x140) = local_a0;
    *(undefined8 *)(lVar2 + 0x130) = local_b0;
  }
  else {
    *(undefined8 *)(lVar2 + 0x140) = 0;
    *(undefined8 *)(lVar2 + 0x148) = 0;
    *(undefined8 *)(lVar2 + 0x130) = 0;
    *(undefined8 *)(lVar2 + 0x138) = 0;
    (*pcVar3)(lVar2 + 0x150);
    if (local_a0 != (code *)0x0) goto LAB_01466a24;
  }
  plVar4 = *(long **)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (plVar4 != (long *)0x0) {
    (**(code **)(plVar4[9] + 0x10))();
  }
  lVar2 = FUN_008c1820(&local_28,*(undefined8 *)(param_1 + 8));
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  *(undefined8 *)(lVar2 + 0x60) = 0x5f99110d38f5d6af;
  local_28 = lVar2;
  (**(code **)(*plVar4 + 0xd0))(plVar4,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  (**(code **)(plVar4[9] + 0x18))(plVar4 + 9);
  pcVar3 = local_a8;
  *(undefined8 *)(lVar2 + 0xa8) = 0x2000000000000;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar3)(local_90);
  }
  local_b0 = &LAB_01467670;
  local_a8 = FUN_014676c0;
  local_a0 = FUN_014676d0;
  local_98 = &LAB_014676e0;
  pcVar3 = *(code **)(lVar2 + 0x138);
  local_90[0] = param_1;
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0x140) = 0;
    *(undefined8 *)(lVar2 + 0x148) = 0;
    *(undefined8 *)(lVar2 + 0x130) = 0;
    *(undefined8 *)(lVar2 + 0x138) = 0;
    (*pcVar3)(lVar2 + 0x150);
    if (local_a0 == (code *)0x0) goto LAB_01466ba0;
  }
  (*local_a0)(local_90,lVar2 + 0x150);
  *(undefined1 **)(lVar2 + 0x148) = local_98;
  *(code **)(lVar2 + 0x138) = local_a8;
  *(code **)(lVar2 + 0x140) = local_a0;
  *(undefined8 *)(lVar2 + 0x130) = local_b0;
LAB_01466ba0:
  pcVar3 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar3)(local_90);
  }
  return;
}


