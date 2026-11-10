/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da9310; name: FUN_00da9310
 */


undefined4 FUN_00da9310(uint param_1)

{
  if ((int)param_1 < 7) {
    return *(undefined4 *)(&DAT_02160578 + (ulong)param_1 * 4);
  }
  return 3;
}


