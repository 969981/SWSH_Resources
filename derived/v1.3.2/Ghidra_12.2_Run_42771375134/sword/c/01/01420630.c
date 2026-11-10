/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01420630; name: FUN_01420630
 */


void FUN_01420630(long param_1)

{
  if (*(char *)(param_1 + 0x6b8) == '\0') {
    FUN_00ffa290(param_1,1,1);
    *(undefined1 *)(param_1 + 0x6b8) = 1;
    FUN_00ffd620(param_1 + 0x100);
    FUN_00ffcf80(param_1 + 0x100,"anime_in");
    return;
  }
  return;
}


