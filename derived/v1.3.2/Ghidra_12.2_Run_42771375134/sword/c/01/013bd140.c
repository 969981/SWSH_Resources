/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013bd140; name: FUN_013bd140
 */


void FUN_013bd140(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *local_130;
  code *local_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 auStack_110 [96];
  undefined *local_b0;
  code *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined1 *local_90 [12];
  
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar2 = (long *)(**(code **)*puVar4)(puVar4);
  lVar3 = FUN_0132d9a0();
  for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
  }
  lVar3 = puVar4[0x61];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_130 = &LAB_013c0430;
  local_128 = FUN_013c0470;
  local_120 = &LAB_013c0480;
  puStack_118 = &LAB_013c0490;
  local_b0 = PTR_LAB_02727810;
  local_a8 = (code *)PTR_FUN_02727818;
  local_a0 = PTR_LAB_02727820;
  local_98 = PTR_LAB_02727828;
  local_90[0] = (undefined1 *)&local_130;
  FUN_01306a00(lVar3,&local_b0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined *)0x0;
    local_98 = (undefined *)0x0;
    local_b0 = (undefined *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(local_90);
  }
  pcVar1 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = (undefined1 *)0x0;
    puStack_118 = (undefined1 *)0x0;
    local_130 = (undefined1 *)0x0;
    local_128 = (code *)0x0;
    (*pcVar1)(auStack_110);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


