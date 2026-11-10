/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01422550; name: FUN_01422550
 */


void FUN_01422550(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  long local_138;
  undefined1 *local_130;
  code *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  long alStack_110 [12];
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  
  local_130 = &LAB_01423010;
  local_a0 = &LAB_014230a0;
  local_98 = &LAB_014230b0;
  local_118 = &LAB_014230b0;
  local_b0 = &LAB_01423010;
  local_a8 = FUN_01423090;
  local_128 = FUN_01423090;
  local_120 = &LAB_014230a0;
  alStack_110[0] = param_1;
  alStack_90[0] = param_1;
  FUN_00ffd030(param_1 + 0x100,"anime_out",&local_130);
  pcVar1 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = (undefined1 *)0x0;
    local_118 = (undefined1 *)0x0;
    local_130 = (undefined1 *)0x0;
    local_128 = (code *)0x0;
    (*pcVar1)(alStack_110);
  }
  FUN_00ffa160(param_1,0,1);
  local_150 = 0x7d7a3dc93ea08c0f;
  uVar2 = FUN_00ffdef0(param_1 + 0x100,&local_150);
  FUN_016b2da0(uVar2,0);
  local_150 = 0xeee392732f5104cc;
  local_148 = "Play_UI_Common_window_close";
  local_140 = 0x1b;
  local_138 = 0;
  FUN_012d6d40(&local_150);
  if (local_138 != 0) {
    (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
    local_138 = 0;
  }
  pcVar1 = local_a8;
  *(undefined1 *)(param_1 + 0x65c) = 0;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(alStack_90);
  }
  return;
}


