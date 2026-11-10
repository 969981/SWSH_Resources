/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014fbba0; name: FUN_014fbba0
 */


void FUN_014fbba0(long param_1,ushort param_2)

{
  if (param_2 < 300) {
    *(undefined1 *)(param_1 + (ulong)param_2 * 0x1d0 + 0x3f8) = 1;
  }
  return;
}


