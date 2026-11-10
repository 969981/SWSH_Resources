/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01419cc0; name: FUN_01419cc0
 */


void FUN_01419cc0(long param_1)

{
  code *pcVar1;
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
  
  local_130 = &LAB_01419f30;
  local_98 = &LAB_01419fc0;
  local_b0 = &LAB_01419f30;
  local_a8 = FUN_01419fa0;
  local_a0 = &LAB_01419fb0;
  local_118 = &LAB_01419fc0;
  local_128 = FUN_01419fa0;
  local_120 = &LAB_01419fb0;
  alStack_110[0] = param_1;
  alStack_90[0] = param_1;
  FUN_00ffd030(param_1 + 0x100,"anime_out",&local_130);
  pcVar1 = local_128;
  if (local_128 == (code *)0x0) {
    FUN_00ffa160(param_1,0,1);
    pcVar1 = FUN_01419fa0;
  }
  else {
    local_120 = (undefined1 *)0x0;
    local_118 = (undefined1 *)0x0;
    local_130 = (undefined1 *)0x0;
    local_128 = (code *)0x0;
    (*pcVar1)(alStack_110);
    pcVar1 = local_a8;
    FUN_00ffa160(param_1,0,1);
    if (pcVar1 == (code *)0x0) {
      return;
    }
  }
  local_a0 = (undefined1 *)0x0;
  local_98 = (undefined1 *)0x0;
  local_b0 = (undefined1 *)0x0;
  local_a8 = (code *)0x0;
  (*pcVar1)(alStack_90);
  return;
}


