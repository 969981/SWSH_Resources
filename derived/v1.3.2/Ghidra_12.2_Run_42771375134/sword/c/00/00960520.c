/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00960520; name: FUN_00960520
 */


undefined4 FUN_00960520(long param_1,byte param_2)

{
  if (param_2 < 0x1e) {
    return *(undefined4 *)(param_1 + (ulong)param_2 * 8);
  }
  return 7;
}


