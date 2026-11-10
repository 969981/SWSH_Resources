/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008806a0; name: FUN_008806a0
 */


undefined2 FUN_008806a0(long param_1)

{
  if (*(char *)(param_1 + 8) == '\0') {
    return 0;
  }
  return *(undefined2 *)(param_1 + 0xc);
}


