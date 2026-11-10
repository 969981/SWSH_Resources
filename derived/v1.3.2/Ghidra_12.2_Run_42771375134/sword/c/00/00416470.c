/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00416470; name: FUN_00416470
 */


void FUN_00416470(long param_1)

{
  if ((*(char *)(param_1 + 0x42) == '\0') && (*(long *)(param_1 + 8) != 0)) {
    FUN_00416470();
  }
  *(undefined1 *)(param_1 + 0x42) = 1;
  return;
}


