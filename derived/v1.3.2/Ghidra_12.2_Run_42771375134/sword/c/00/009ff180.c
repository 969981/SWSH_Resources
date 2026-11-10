/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ff180; name: FUN_009ff180
 */


undefined1 FUN_009ff180(long param_1)

{
  if (*(long *)(param_1 + 0x180) == 0) {
    return 0;
  }
  return *(undefined1 *)(*(long *)(param_1 + 0x180) + 0x2343);
}


