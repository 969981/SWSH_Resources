/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01135550; name: FUN_01135550
 */


void FUN_01135550(long param_1)

{
  if ((*(char *)(param_1 + 0x88) != '\0') && (*(int *)(param_1 + 0x8c) == 1)) {
    FUN_010382c0(*(undefined8 *)(param_1 + 0x28),1);
    *(undefined4 *)(param_1 + 0x8c) = 2;
    *(undefined1 *)(param_1 + 0x88) = 1;
  }
  return;
}


