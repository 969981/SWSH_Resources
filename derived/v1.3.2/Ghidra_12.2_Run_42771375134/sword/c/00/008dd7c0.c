/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dd7c0; name: FUN_008dd7c0
 */


undefined4 FUN_008dd7c0(uint param_1)

{
  if (param_1 < 6) {
    return *(undefined4 *)(&DAT_02148ac4 + (ulong)param_1 * 4);
  }
  return 0;
}


