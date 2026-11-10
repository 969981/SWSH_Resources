/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e5fd0; name: FUN_008e5fd0
 */


undefined1 FUN_008e5fd0(long param_1)

{
  if ((ulong)*(byte *)(param_1 + 0x42) < 2) {
    return *(undefined1 *)(param_1 + (ulong)*(byte *)(param_1 + 0x42) + 0x2c);
  }
  return 0;
}


