/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01375f60; name: FUN_01375f60
 */


void FUN_01375f60(long param_1,byte param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  byte *local_120 [13];
  byte local_b4 [4];
  undefined *local_b0;
  code *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined1 *local_90 [12];
  
  local_b4[0] = param_2 & 1;
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar2 = (long *)(**(code **)*puVar4)(puVar4);
  lVar3 = FUN_0132d9a0();
  for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
  }
  lVar3 = puVar4[0x61];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_120[0] = local_b4;
  local_140 = &LAB_0137b490;
  local_138 = FUN_0137b5d0;
  local_130 = &LAB_0137b6b0;
  local_128 = &LAB_0137b6c0;
  local_b0 = PTR_LAB_02728a28;
  local_a8 = (code *)PTR_FUN_02728a30;
  local_a0 = PTR_LAB_02728a38;
  local_98 = PTR_LAB_02728a40;
  local_90[0] = (undefined1 *)&local_140;
  FUN_01306a00(lVar3,&local_b0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined *)0x0;
    local_98 = (undefined *)0x0;
    local_b0 = (undefined *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(local_90);
  }
  pcVar1 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (undefined1 *)0x0;
    local_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    (*pcVar1)(local_120);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


