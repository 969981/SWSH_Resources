/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131af60; name: FUN_0131af60
 */


void FUN_0131af60(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 local_160;
  char *pcStack_158;
  undefined8 local_150;
  long local_148;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  long alStack_120 [12];
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  
  lVar2 = *(long *)(param_2 + 0x58);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(long *)(param_1 + 0x10) = lVar2;
  FUN_0131b240(param_1,3);
  pcVar1 = *(code **)(param_2 + 0x288);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_2 + 0x290) = 0;
    *(undefined8 *)(param_2 + 0x298) = 0;
    *(undefined8 *)(param_2 + 0x280) = 0;
    *(undefined8 *)(param_2 + 0x288) = 0;
    (*pcVar1)(param_2 + 0x2a0);
  }
  *(long *)(param_2 + 0x2a0) = param_1;
  *(code **)(param_2 + 0x280) = FUN_0131d910;
  *(undefined1 **)(param_2 + 0x290) = &LAB_0131d9a0;
  pcVar1 = *(code **)(param_2 + 0x308);
  *(undefined1 **)(param_2 + 0x288) = &LAB_0131d990;
  *(undefined1 **)(param_2 + 0x298) = &LAB_0131d9b0;
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_2 + 0x310) = 0;
    *(undefined8 *)(param_2 + 0x318) = 0;
    *(undefined8 *)(param_2 + 0x300) = 0;
    *(undefined8 *)(param_2 + 0x308) = 0;
    (*pcVar1)(param_2 + 800);
  }
  *(long *)(param_2 + 800) = param_1;
  *(undefined1 **)(param_2 + 0x300) = &LAB_0131d9c0;
  *(undefined1 **)(param_2 + 0x310) = &LAB_0131da20;
  pcVar1 = *(code **)(param_2 + 0x388);
  *(undefined1 **)(param_2 + 0x308) = &LAB_0131da10;
  *(undefined1 **)(param_2 + 0x318) = &LAB_0131da30;
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_2 + 0x390) = 0;
    *(undefined8 *)(param_2 + 0x398) = 0;
    *(undefined8 *)(param_2 + 0x380) = 0;
    *(undefined8 *)(param_2 + 0x388) = 0;
    (*pcVar1)(param_2 + 0x3a0);
  }
  *(long *)(param_2 + 0x3a0) = param_1;
  *(undefined1 **)(param_2 + 0x380) = &LAB_0131da40;
  *(undefined1 **)(param_2 + 0x388) = &LAB_0131dad0;
  *(undefined1 **)(param_2 + 0x390) = &LAB_0131dae0;
  *(undefined1 **)(param_2 + 0x398) = &LAB_0131daf0;
  local_160 = 0x7b1e30a26b990be6;
  pcStack_158 = "Pokemon/EffectStart";
  local_150 = 0x13;
  local_148 = 0;
  local_c0 = &LAB_0131db00;
  local_b8 = FUN_0131db90;
  local_b0 = &LAB_0131dba0;
  local_a8 = &LAB_0131dbb0;
  local_140 = &LAB_0131dbc0;
  local_138 = FUN_0131dcc0;
  local_130 = &LAB_0131dcd0;
  local_128 = &LAB_0131dce0;
  alStack_120[0] = param_1;
  alStack_a0[0] = param_1;
  FUN_0069c2c0(param_2,&local_160,&local_c0,&local_140);
  pcVar1 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (undefined1 *)0x0;
    local_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    (*pcVar1)(alStack_120);
  }
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar1)(alStack_a0);
  }
  if (local_148 != 0) {
    (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
    local_148 = 0;
  }
  local_c0 = &LAB_0131dcf0;
  local_b8 = FUN_0131dda0;
  local_b0 = &LAB_0131ddb0;
  local_a8 = &LAB_0131ddc0;
  alStack_a0[0] = param_1;
  (**(code **)(**(long **)(param_2 + 0x270) + 0x108))(*(long **)(param_2 + 0x270),&local_c0);
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar1)(alStack_a0);
  }
  return;
}


