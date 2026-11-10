/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f2860; name: FUN_011f2860
 */


undefined8 FUN_011f2860(long param_1)

{
  if (*(int *)(param_1 + 0x68) == 6) {
    return 0;
  }
  if (*(int *)(param_1 + 0x6c) == 0) {
    *(undefined4 *)(param_1 + 0x68) = 7;
    *(undefined1 *)(param_1 + 0x70) = 0;
    return 1;
  }
  return 1;
}


