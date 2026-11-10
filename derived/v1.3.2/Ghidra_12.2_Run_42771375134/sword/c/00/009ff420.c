/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ff420; name: FUN_009ff420
 */


undefined1 FUN_009ff420(long param_1,byte param_2)

{
  if (8 < param_2) {
    return 0;
  }
  if (*(char *)(*(long *)(param_1 + 0x180) + 0x2352) == '\x01') {
    return 0;
  }
  return *(undefined1 *)(*(long *)(param_1 + 0x180) + (ulong)param_2 + 0x21ae);
}


