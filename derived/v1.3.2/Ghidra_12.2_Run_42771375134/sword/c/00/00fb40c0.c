/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb40c0; name: FUN_00fb40c0
 */


undefined8 FUN_00fb40c0(long param_1)

{
  if ((*(long *)(param_1 + 0x3f8) == 0) && (*(long *)(param_1 + 0x400) == 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x408) == 2) {
    if (*(long *)(param_1 + 0x400) == 0) {
      return 0;
    }
  }
  else if ((*(int *)(param_1 + 0x408) == 0) && (*(int *)(param_1 + 0x40c) == 0x1e)) {
    return 0;
  }
  return 1;
}


