/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da4c90; name: FUN_00da4c90
 */


undefined1 FUN_00da4c90(long param_1)

{
  if (((*(long *)(param_1 + 0xa008) == 0) ||
      (*(char *)(*(long *)(param_1 + 0xa008) + 0x170) == '\0')) ||
     (*(long *)(param_1 + 0xa118) == 0)) {
    return 0;
  }
  return *(undefined1 *)(*(long *)(param_1 + 0xa118) + 0x170);
}


