/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01429850; name: FUN_01429850
 */


void FUN_01429850(long param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 local_1c0;
  code *local_1b8;
  code *local_1b0;
  undefined8 local_1a8;
  undefined1 auStack_1a0 [96];
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  long local_120;
  char *pcStack_118;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  long local_a0;
  char *pcStack_98;
  
  FUN_00ffa290(param_1,1,1);
  lVar1 = param_1 + 0x100;
  FUN_00ffd620(lVar1);
  FUN_00ffd450(0,lVar1,"anime_ptn_text");
  local_1b0 = (code *)0x0;
  local_1a8 = 0;
  local_1c0 = 0;
  local_1b8 = (code *)0x0;
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,auStack_1a0);
    local_1c0 = *param_2;
    local_1b8 = (code *)param_2[1];
    local_1b0 = (code *)param_2[2];
    local_1a8 = param_2[3];
  }
  pcVar2 = *(code **)(param_1 + 0x5d8);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x5e0) = 0;
    *(undefined8 *)(param_1 + 0x5e8) = 0;
    *(undefined8 *)(param_1 + 0x5d0) = 0;
    *(undefined8 *)(param_1 + 0x5d8) = 0;
    (*pcVar2)(param_1 + 0x5f0);
  }
  if (local_1b0 != (code *)0x0) {
    (*local_1b0)(auStack_1a0,param_1 + 0x5f0);
    *(undefined8 *)(param_1 + 0x5e8) = local_1a8;
    *(code **)(param_1 + 0x5d8) = local_1b8;
    *(code **)(param_1 + 0x5e0) = local_1b0;
    *(undefined8 *)(param_1 + 0x5d0) = local_1c0;
  }
  pcStack_98 = "anime_text_in";
  local_c0 = &LAB_0142a0c0;
  local_b8 = FUN_0142a150;
  local_b0 = &LAB_0142a160;
  puStack_a8 = &LAB_0142a170;
  pcStack_118 = "anime_text_in";
  local_130 = &LAB_0142a160;
  puStack_128 = &LAB_0142a170;
  local_140 = &LAB_0142a0c0;
  local_138 = FUN_0142a150;
  local_120 = param_1;
  local_a0 = param_1;
  FUN_00ffd030(lVar1,"anime_text_in",&local_140);
  pcVar2 = local_138;
  pcVar3 = FUN_0142a150;
  if (local_138 != (code *)0x0) {
    local_130 = (undefined1 *)0x0;
    puStack_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    (*pcVar2)(&local_120);
    pcVar3 = local_b8;
    if (local_b8 == (code *)0x0) goto LAB_014299a4;
  }
  local_b0 = (undefined1 *)0x0;
  puStack_a8 = (undefined1 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_b8 = (code *)0x0;
  (*pcVar3)(&local_a0);
LAB_014299a4:
  if (local_1b8 != (code *)0x0) {
    (*local_1b8)(auStack_1a0);
  }
  return;
}


