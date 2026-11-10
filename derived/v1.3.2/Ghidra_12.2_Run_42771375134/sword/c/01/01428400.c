/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01428400; name: FUN_01428400
 */


void FUN_01428400(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  long local_138;
  undefined1 *local_130;
  code *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined1 auStack_110 [96];
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  
  local_b0 = &LAB_01429570;
  local_a8 = FUN_01429580;
  local_a0 = &LAB_01429590;
  local_98 = &LAB_014295a0;
  alStack_90[0] = param_1;
  FUN_01429850(*(undefined8 *)(param_1 + 0x108),&local_b0);
  pcVar5 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar5)(alStack_90);
  }
  local_130 = &LAB_014295b0;
  local_128 = FUN_014295c0;
  local_120 = &LAB_014295d0;
  local_118 = &LAB_014295e0;
  FUN_0142a270(*(undefined8 *)(param_1 + 0x110),&local_130);
  pcVar5 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = (undefined1 *)0x0;
    local_118 = (undefined1 *)0x0;
    local_130 = (undefined1 *)0x0;
    local_128 = (code *)0x0;
    (*pcVar5)(auStack_110);
  }
  pcVar5 = *(code **)(param_1 + 0x88);
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    (*pcVar5)(param_1 + 0xa0);
  }
  puVar4 = PTR_LAB_02729b08;
  puVar1 = PTR_LAB_02729ae0;
  *(long *)(param_1 + 0xa0) = param_1;
  puVar3 = PTR_LAB_02729af0;
  puVar2 = PTR_LAB_02729ae8;
  *(undefined **)(param_1 + 0xa8) = puVar4;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined **)(param_1 + 0x80) = puVar1;
  *(undefined **)(param_1 + 0x88) = puVar2;
  puVar1 = PTR_LAB_02729af8;
  *(undefined **)(param_1 + 0x90) = puVar3;
  *(undefined **)(param_1 + 0x98) = puVar1;
  local_150 = 0xd27c8c8fed35c82;
  local_148 = "Play_UI_Camp_Cooking_Start";
  local_140 = 0x1a;
  local_138 = 0;
  FUN_012d6d40(&local_150);
  if (local_138 != 0) {
    (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
  }
  return;
}


