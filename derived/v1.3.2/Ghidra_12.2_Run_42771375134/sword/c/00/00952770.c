/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00952770; name: FUN_00952770
 */


undefined4 FUN_00952770(uint param_1)

{
  if ((int)param_1 < 5) {
    return *(undefined4 *)(&DAT_0214b068 + (ulong)param_1 * 4);
  }
  return 0;
}


