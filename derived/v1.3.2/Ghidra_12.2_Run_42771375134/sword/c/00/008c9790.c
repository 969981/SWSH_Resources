/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c9790; name: FUN_008c9790
 */


void FUN_008c9790(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined1 *local_b0;
  code *local_a8;
  code *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  
  if (*(long *)(param_1 + 0x698) != 0) {
    return;
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (plVar5 != (long *)0x0) {
    (**(code **)(plVar5[9] + 0x10))();
  }
  puVar1 = (undefined1 *)FUN_008c1820(&local_b0,*(undefined8 *)(param_1 + 8));
  if (puVar1 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar1 + 0x48) + 0x10))();
  }
  *(undefined8 *)(puVar1 + 0x60) = 0x8acfc2c593b556b3;
  local_b0 = puVar1;
  (**(code **)(*plVar5 + 0xd0))(plVar5,&local_b0);
  if (local_b0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = (undefined1 *)0x0;
  }
  *(undefined1 **)(param_1 + 0x698) = puVar1;
  (**(code **)(plVar5[9] + 0x18))(plVar5 + 9);
  *(undefined8 *)(*(long *)(param_1 + 0x698) + 0xa8) = 0x8000000000;
  lVar6 = *(long *)(param_1 + 0x698);
  pcVar3 = *(code **)(lVar6 + 0x138);
  local_b0 = &LAB_008ccba0;
  local_a8 = FUN_008ccbc0;
  local_98 = &LAB_008ccbe0;
  local_a0 = FUN_008ccbd0;
  alStack_90[0] = param_1;
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x140) = 0;
    *(undefined8 *)(lVar6 + 0x148) = 0;
    *(undefined8 *)(lVar6 + 0x130) = 0;
    *(undefined8 *)(lVar6 + 0x138) = 0;
    (*pcVar3)(lVar6 + 0x150);
    if (local_a0 == (code *)0x0) goto LAB_008c98e0;
  }
  (*local_a0)(alStack_90,lVar6 + 0x150);
  *(undefined1 **)(lVar6 + 0x148) = local_98;
  *(code **)(lVar6 + 0x138) = local_a8;
  *(code **)(lVar6 + 0x140) = local_a0;
  *(undefined8 *)(lVar6 + 0x130) = local_b0;
LAB_008c98e0:
  lVar4 = *(long *)(param_1 + 0x698);
  FUN_006cf0a0(&local_d0,&DAT_02618cf0);
  lVar6 = local_b8;
  *(undefined8 *)(lVar4 + 0x2b0) = local_d0;
  *(undefined8 *)(lVar4 + 0x2b8) = local_c8;
  *(undefined8 *)(lVar4 + 0x2c0) = local_c0;
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar4 + 0x2c8);
  *(long *)(lVar4 + 0x2c8) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
    local_b8 = 0;
  }
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


