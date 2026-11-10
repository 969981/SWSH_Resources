/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01046520; name: FUN_01046520
 */


void FUN_01046520(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 local_28;
  
  local_28 = 0x6ccde5d7cb559bf4;
  lVar1 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  }
  FUN_00ffcf80(param_1 + 0x100,"anime_in");
  if ((*(long *)(param_1 + 0x5d8) == -0x340d631b7bddd9bb) || (*(long *)(param_1 + 0x5d8) == 0)) {
    return;
  }
  FUN_00ffd450((float)*(int *)(param_1 + 0x5e8),param_1 + 0x100,"anime_ptn_pos");
  if ((param_2 & 1) == 0) {
    FUN_010467a0(param_1);
  }
  else {
    FUN_010465f0();
  }
  *(undefined1 *)(param_1 + 0x5f8) = 1;
  return;
}


