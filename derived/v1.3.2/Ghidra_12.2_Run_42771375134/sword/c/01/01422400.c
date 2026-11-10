/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01422400; name: FUN_01422400
 */


void FUN_01422400(long param_1)

{
  code *pcVar1;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  long local_138;
  undefined1 *local_130;
  code *local_128;
  code *local_120;
  undefined1 *puStack_118;
  undefined1 auStack_110 [96];
  undefined1 *local_b0;
  code *local_a8;
  code *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  
  local_b0 = &LAB_01422f40;
  local_a8 = FUN_01422fe0;
  local_a0 = FUN_01422ff0;
  local_98 = &LAB_01423000;
  alStack_90[0] = param_1;
  FUN_00ffa290(param_1,1,1);
  FUN_00ffa3d0(param_1,1);
  local_120 = (code *)0x0;
  puStack_118 = (undefined1 *)0x0;
  local_130 = (undefined1 *)0x0;
  local_128 = (code *)0x0;
  if (local_a0 != (code *)0x0) {
    (*local_a0)(alStack_90,auStack_110);
    local_120 = local_a0;
    puStack_118 = local_98;
    local_130 = local_b0;
    local_128 = local_a8;
  }
  FUN_00ffd030(param_1 + 0x100,"anime_in",&local_130);
  pcVar1 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = (code *)0x0;
    puStack_118 = (undefined1 *)0x0;
    local_130 = (undefined1 *)0x0;
    local_128 = (code *)0x0;
    (*pcVar1)(auStack_110);
  }
  local_150 = 0x1dc07a39bf771f60;
  local_148 = "Play_UI_Common_window_open";
  local_140 = 0x1a;
  local_138 = 0;
  FUN_012d6d40(&local_150);
  if (local_138 != 0) {
    (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
    local_138 = 0;
  }
  pcVar1 = local_a8;
  *(undefined1 *)(param_1 + 0x65c) = 1;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(alStack_90);
  }
  return;
}


