/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009356a0; name: FUN_009356a0
 */


undefined4 FUN_009356a0(uint param_1)

{
  if (param_1 < 0x18) {
    return *(undefined4 *)(&DAT_0214a9f4 + *(long *)(&DAT_0214aab0 + (long)(int)param_1 * 8) * 8);
  }
  return 0;
}


