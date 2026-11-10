/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00864cf0; name: FUN_00864cf0
 */


undefined4 FUN_00864cf0(byte param_1)

{
  if (param_1 < 0x12) {
    return *(undefined4 *)(&DAT_021438c0 + (ulong)param_1 * 4);
  }
  return 0;
}


