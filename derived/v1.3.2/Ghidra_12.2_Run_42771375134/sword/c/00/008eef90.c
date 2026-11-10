/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008eef90; name: FUN_008eef90
 */


undefined1 FUN_008eef90(int param_1,uint param_2)

{
  if (param_1 == 2) {
    if ((int)param_2 < 5) {
      return (&DAT_02149ce6)[param_2];
    }
    return 2;
  }
  if (param_1 == 1) {
    if ((int)param_2 < 5) {
      return (&DAT_02149ce1)[param_2];
    }
    return 2;
  }
  if (param_1 != 0) {
    return 2;
  }
  if ((int)param_2 < 5) {
    return (&DAT_02149cdc)[param_2];
  }
  return 2;
}


