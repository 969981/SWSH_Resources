/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e2480; name: FUN_008e2480
 */


undefined1 FUN_008e2480(long param_1,byte param_2)

{
  if (param_2 < *(byte *)(param_1 + 0x33c)) {
    return *(undefined1 *)(param_1 + (ulong)param_2 * 0x1c + 0x2d8);
  }
  return 0;
}


