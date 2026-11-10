/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b92390; name: FUN_00b92390
 */


void FUN_00b92390(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  undefined1 *local_b0;
  code *local_a8;
  code *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  
  plVar5 = *(long **)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (plVar5 != (long *)0x0) {
    (**(code **)(plVar5[9] + 0x10))();
  }
  puVar2 = (undefined1 *)FUN_008c1820(&local_b0,*(undefined8 *)(param_1 + 8));
  if (puVar2 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar2 + 0x48) + 0x10))();
  }
  *(undefined8 *)(puVar2 + 0x60) = 0x8acfc4c593b55a19;
  local_b0 = puVar2;
  (**(code **)(*plVar5 + 0xd0))(plVar5,&local_b0);
  if (local_b0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = (undefined1 *)0x0;
  }
  (**(code **)(plVar5[9] + 0x18))(plVar5 + 9);
  *(undefined8 *)(puVar2 + 0xa8) = 0x2000000000000;
  FUN_006cf0a0(&local_b0,&DAT_02635b00);
  puVar1 = local_98;
  *(undefined1 **)(puVar2 + 0x2b0) = local_b0;
  *(code **)(puVar2 + 0x2b8) = local_a8;
  *(code **)(puVar2 + 0x2c0) = local_a0;
  if (local_98 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_98 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(puVar2 + 0x2c8);
  *(undefined1 **)(puVar2 + 0x2c8) = puVar1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if (local_98 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_98 + 0x48) + 0x18))();
  }
  pcVar4 = *(code **)(puVar2 + 0x138);
  local_b0 = &LAB_00b937f0;
  local_a8 = FUN_00b93860;
  local_a0 = FUN_00b93870;
  local_98 = &LAB_00b93880;
  alStack_90[0] = param_1;
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(puVar2 + 0x140) = 0;
    *(undefined8 *)(puVar2 + 0x148) = 0;
    *(undefined8 *)(puVar2 + 0x130) = 0;
    *(undefined8 *)(puVar2 + 0x138) = 0;
    (*pcVar4)(puVar2 + 0x150);
    if (local_a0 == (code *)0x0) goto LAB_00b92534;
  }
  (*local_a0)(alStack_90,puVar2 + 0x150);
  *(undefined1 **)(puVar2 + 0x148) = local_98;
  *(code **)(puVar2 + 0x138) = local_a8;
  *(code **)(puVar2 + 0x140) = local_a0;
  *(undefined1 **)(puVar2 + 0x130) = local_b0;
LAB_00b92534:
  pcVar4 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar4)(alStack_90);
  }
  return;
}


