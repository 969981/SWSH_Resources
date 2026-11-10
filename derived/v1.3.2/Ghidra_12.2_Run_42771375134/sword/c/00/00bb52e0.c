/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb52e0; name: FUN_00bb52e0
 */


void FUN_00bb52e0(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x100;
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0x60d) == '\0') {
      return;
    }
    FUN_00ffd3a0(lVar1,"anime_info_in");
    FUN_00ffcf80(lVar1,"anime_info_out");
  }
  else {
    FUN_00ffd3a0(lVar1,"anime_info_in");
    FUN_00ffcf80(lVar1,"anime_info_out");
    FUN_00ffd570(lVar1,"anime_info_out");
    FUN_00ffd450(lVar1,"anime_info_out");
  }
  *(undefined1 *)(param_1 + 0x60d) = 0;
  return;
}


