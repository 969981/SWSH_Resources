/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00488860; name: FUN_00488860
 */


long FUN_00488860(long param_1)

{
  do {
    if (*(long *)(param_1 + 0x68) != 0) {
      return *(long *)(param_1 + 0x68) + 0x58;
    }
    param_1 = *(long *)(param_1 + 0x78);
  } while (param_1 != 0);
  return 0;
}


