/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0142a550; name: FUN_0142a550
 */


void FUN_0142a550(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_28;
  
  lVar1 = param_1 + 0x100;
  FUN_00ffd450(0x40000000,lVar1,"anime_ptn_text");
  FUN_00ffd450(0x3f800000,lVar1,"anime_L_controller_00_icon_change");
  local_28 = 0xa6777447af64c85f;
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  FUN_00ffd3a0(lVar1,"anime_L_controller_00_keep_swing_joycon");
  FUN_00ffd3a0(lVar1,"anime_L_controller_00_keep_mix_joycon");
  FUN_00ffcf80(lVar1,"anime_L_controller_00_throw");
  FUN_00ffcf80(lVar1,"anime_L_controller_00_in");
  if (*(char *)(param_1 + 0x650) == '\0') {
    FUN_00ffcf80(lVar1,"anime_in");
    *(undefined1 *)(param_1 + 0x650) = 1;
    return;
  }
  return;
}


