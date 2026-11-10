/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e4e80; name: FUN_008e4e80
 */


undefined4 FUN_008e4e80(long param_1,byte param_2)

{
  if (param_2 < 4) {
    return *(undefined4 *)(param_1 + (ulong)param_2 * 4 + 0x368);
  }
  return 0;
}


