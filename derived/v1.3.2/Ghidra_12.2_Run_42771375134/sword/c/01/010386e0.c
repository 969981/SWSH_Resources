/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010386e0; name: FUN_010386e0
 */


undefined4 FUN_010386e0(long param_1)

{
  if (*(long *)(param_1 + 0x5e0) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(long *)(param_1 + 0x5e0) + 0x5c);
}


