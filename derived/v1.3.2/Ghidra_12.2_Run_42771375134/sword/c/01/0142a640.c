/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0142a640; name: FUN_0142a640
 */


void FUN_0142a640(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x100;
  FUN_00ffd3a0(lVar1,"anime_L_controller_00_throw");
  FUN_00ffcf80(lVar1,"anime_L_controller_00_out");
  if (*(char *)(param_1 + 0x650) != '\0') {
    FUN_00ffcf80(lVar1,"anime_out");
    *(undefined1 *)(param_1 + 0x650) = 0;
  }
  return;
}


