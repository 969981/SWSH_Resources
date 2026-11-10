/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0142c560; name: FUN_0142c560
 */


void FUN_0142c560(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  code *pcVar3;
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
  undefined8 local_38;
  
  local_140 = &LAB_0142da90;
  local_b0 = &LAB_0142dad0;
  local_a8 = &LAB_0142dae0;
  local_128 = &LAB_0142dae0;
  local_c0 = &LAB_0142da90;
  local_b8 = FUN_0142dac0;
  local_138 = FUN_0142dac0;
  local_130 = &LAB_0142dad0;
  alStack_120[0] = param_1;
  alStack_a0[0] = param_1;
  FUN_00ffd030(param_1 + 0x100,"anime_out",&local_140);
  pcVar1 = local_138;
  pcVar3 = FUN_0142dac0;
  if (local_138 != (code *)0x0) {
    local_130 = (undefined1 *)0x0;
    local_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    (*pcVar1)(alStack_120);
    pcVar3 = local_b8;
  }
  local_38 = 0x7d7a3dc93ea08c0f;
  uVar2 = FUN_00ffdef0(param_1 + 0x100,&local_38);
  FUN_016b2da0(uVar2,0);
  FUN_00ffa160(param_1,0,1);
  if (pcVar3 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar3)(alStack_a0);
  }
  return;
}


