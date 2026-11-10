/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009511b0; name: FUN_009511b0
 */


undefined1 FUN_009511b0(long param_1,byte param_2)

{
  if (param_2 < *(byte *)(param_1 + 0xd)) {
    return *(undefined1 *)(param_1 + (ulong)param_2 + 8);
  }
  return 5;
}


