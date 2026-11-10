/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d0ba70; name: FUN_00d0ba70
 */


void FUN_00d0ba70(long param_1)

{
  code *pcVar1;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  long alStack_120 [12];
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [13];
  undefined8 local_38;
  
  FUN_010364c0(*(undefined8 *)(param_1 + 0x198),1);
  FUN_00cf6a00(*(undefined8 *)(param_1 + 0x198),0);
  FUN_00ffa160(*(undefined8 *)(param_1 + 0x198),0,1);
  FUN_010364c0(*(undefined8 *)(param_1 + 0x1a0),0);
  FUN_00ffa290(*(undefined8 *)(param_1 + 0x1a0),1,1);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x1a0),0);
  local_38 = 0x5d226175f73f619c;
  FUN_00d0a2b0(param_1,&local_38);
  local_c0 = &LAB_00d0cd70;
  local_b8 = FUN_00d0ce80;
  local_b0 = &LAB_00d0ce90;
  local_a8 = &LAB_00d0cea0;
  local_140 = &LAB_00d0ceb0;
  local_138 = FUN_00d0cf30;
  local_130 = &LAB_00d0cf40;
  local_128 = &LAB_00d0cf50;
  alStack_120[0] = param_1;
  alStack_a0[0] = param_1;
  FUN_00cfd4b0(*(undefined8 *)(param_1 + 0x1a0),&local_c0,&local_140);
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
  *(undefined4 *)(param_1 + 400) = 3;
  return;
}


