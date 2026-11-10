/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a79d60; name: FUN_00a79d60
 */


void FUN_00a79d60(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *local_1c0;
  code *local_1b8;
  code *local_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [96];
  undefined *local_140;
  code *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined8 uStack_120;
  undefined *local_118;
  undefined8 uStack_110;
  undefined *local_c0;
  code *local_b8;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  
  uVar1 = FUN_0101f850(*(undefined8 *)PTR_DAT_02710840);
  FUN_01021900(uVar1,1);
  FUN_01021900(uVar1,2);
  local_98 = PTR_FUN_027195c8;
  local_90 = 0;
  local_c0 = PTR_FUN_027195d0;
  local_b8 = (code *)PTR_FUN_027195d8;
  local_138 = (code *)PTR_FUN_027195d8;
  local_130 = PTR_FUN_027195e0;
  local_b0 = (code *)PTR_FUN_027195e0;
  local_a8 = PTR_LAB_027195e8;
  local_118 = PTR_FUN_027195c8;
  uStack_110 = 0;
  local_128 = PTR_LAB_027195e8;
  local_140 = PTR_FUN_027195d0;
  uStack_120 = param_1;
  local_a0 = param_1;
  FUN_01021920(uVar1,2,&local_140);
  pcVar2 = local_138;
  if (local_138 == (code *)0x0) {
    pcVar2 = (code *)PTR_FUN_027195e0;
  }
  else {
    local_130 = (undefined *)0x0;
    local_128 = (undefined *)0x0;
    local_140 = (undefined *)0x0;
    local_138 = (code *)0x0;
    (*pcVar2)(&uStack_120);
    local_1b0 = (code *)0x0;
    puStack_1a8 = (undefined *)0x0;
    local_1c0 = (undefined *)0x0;
    local_1b8 = (code *)0x0;
    pcVar2 = local_b0;
    if (local_b0 == (code *)0x0) goto LAB_00a79e7c;
  }
  puStack_1a8 = (undefined *)0x0;
  local_1b0 = (code *)0x0;
  local_1b8 = (code *)0x0;
  local_1c0 = (undefined *)0x0;
  (*pcVar2)(&local_a0,auStack_1a0);
  local_1b0 = local_b0;
  puStack_1a8 = local_a8;
  local_1c0 = local_c0;
  local_1b8 = local_b8;
LAB_00a79e7c:
  FUN_01021920(uVar1,1,&local_1c0);
  pcVar2 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (code *)0x0;
    puStack_1a8 = (undefined *)0x0;
    local_1c0 = (undefined *)0x0;
    local_1b8 = (code *)0x0;
    (*pcVar2)(auStack_1a0);
  }
  pcVar2 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined *)0x0;
    local_c0 = (undefined *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar2)(&local_a0);
  }
  return;
}


