/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0109c860; name: FUN_0109c860
 */


void FUN_0109c860(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 local_178;
  char *pcStack_170;
  undefined8 local_168;
  undefined8 local_160 [3];
  long local_148;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  long local_120 [12];
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  
  local_c0 = (undefined1 *)0xae2ef70c0f9e873e;
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_c0);
  if ((*(byte *)(lVar2 + 0x58) & 1) == 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
  }
  local_160[0] = 0x87b70e51b082a953;
  local_c0 = &LAB_0109d950;
  local_b8 = FUN_0109d980;
  local_b0 = &LAB_0109d990;
  local_128 = &LAB_0109d9a0;
  local_130 = &LAB_0109d990;
  local_a8 = &LAB_0109d9a0;
  local_138 = FUN_0109d980;
  local_140 = &LAB_0109d950;
  local_120[0] = param_1;
  alStack_a0[0] = param_1;
  FUN_00ffd120(param_1 + 0x100,local_160,&local_140);
  pcVar1 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (undefined1 *)0x0;
    local_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    (*pcVar1)(local_120);
  }
  *(undefined1 *)(param_1 + 0x670) = 1;
  local_178 = 0x237d3c68bf020ec8;
  pcStack_170 = "Play_UI_common_lv_up_window";
  local_168 = 0x1b;
  FUN_006cf0a0(local_160,&local_178);
  FUN_016d3620(local_160);
  if (local_148 != 0) {
    (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
    local_148 = 0;
  }
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


