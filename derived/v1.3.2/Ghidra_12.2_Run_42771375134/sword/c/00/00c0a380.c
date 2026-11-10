/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c0a380; name: FUN_00c0a380
 */


void FUN_00c0a380(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
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
  *(undefined8 *)(puVar2 + 0x60) = 0xf0e49b23d9a58556;
  local_b0 = puVar2;
  (**(code **)(*plVar5 + 0xd0))(plVar5,&local_b0);
  if (local_b0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = (undefined1 *)0x0;
  }
  (**(code **)(plVar5[9] + 0x18))(plVar5 + 9);
  pcVar4 = *(code **)(puVar2 + 0x238);
  *(undefined8 *)(puVar2 + 0xa8) = 0x20000000;
  local_b0 = &LAB_00c0c210;
  local_a8 = FUN_00c0c260;
  local_a0 = FUN_00c0c270;
  local_98 = &LAB_00c0c280;
  alStack_90[0] = param_1;
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(puVar2 + 0x240) = 0;
    *(undefined8 *)(puVar2 + 0x248) = 0;
    *(undefined8 *)(puVar2 + 0x230) = 0;
    *(undefined8 *)(puVar2 + 0x238) = 0;
    (*pcVar4)(puVar2 + 0x250);
    if (local_a0 == (code *)0x0) goto LAB_00c0a4b4;
  }
  (*local_a0)(alStack_90,puVar2 + 0x250);
  *(undefined1 **)(puVar2 + 0x248) = local_98;
  *(code **)(puVar2 + 0x238) = local_a8;
  *(code **)(puVar2 + 0x240) = local_a0;
  *(undefined1 **)(puVar2 + 0x230) = local_b0;
LAB_00c0a4b4:
  FUN_006cf0a0(&local_d0,&DAT_0263b838);
  lVar1 = local_b8;
  *(undefined8 *)(puVar2 + 0x2b0) = local_d0;
  *(undefined8 *)(puVar2 + 0x2b8) = local_c8;
  *(undefined8 *)(puVar2 + 0x2c0) = local_c0;
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(puVar2 + 0x2c8);
  *(long *)(puVar2 + 0x2c8) = lVar1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
    local_b8 = 0;
  }
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


