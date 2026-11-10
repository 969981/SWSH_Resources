/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00780120; name: FUN_00780120
 */


undefined8 FUN_00780120(long param_1)

{
  if (*(int *)(param_1 + 0xa8) != 2) {
    return 0;
  }
  if (*(int *)(param_1 + 0xbc) == 1) {
    return 0;
  }
  if ((*(short *)(param_1 + 0xe8) == -0x41ff) ||
     (*(byte *)(param_1 + 0x9c) < *(byte *)(param_1 + 0x98))) {
    return 1;
  }
  return 2;
}


