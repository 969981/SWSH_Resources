/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7e220; name: FUN_00d7e220
 */


void FUN_00d7e220(long param_1,undefined4 *param_2)

{
  switch(*param_2) {
  case 0:
    FUN_00ffcf80(param_1 + 0x100,"anime_in");
    return;
  case 1:
    FUN_00ffcf80(param_1 + 0x100,"anime_out");
    return;
  case 2:
    FUN_00ffcf80(param_1 + 0x100,"anime_keep");
    return;
  case 3:
    FUN_00ffcf80(param_1 + 0x100,"anime_f_in");
    return;
  case 4:
    FUN_00ffcf80(param_1 + 0x100,"anime_f_out");
    return;
  case 5:
    FUN_00ffcf80(param_1 + 0x100,"anime_prev_in");
    return;
  case 6:
    FUN_00ffcf80(param_1 + 0x100,"anime_prev_out");
    return;
  case 7:
    FUN_00ffcf80(param_1 + 0x100,"anime_cover_in");
    return;
  case 8:
    FUN_00ffcf80(param_1 + 0x100,"anime_cover_out");
    return;
  default:
    return;
  }
}


