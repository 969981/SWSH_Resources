/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01503590; name: FUN_01503590
 */


undefined4 FUN_01503590(undefined8 param_1,int param_2)

{
  if (param_2 - 3U < 8) {
    return *(undefined4 *)(&DAT_01d4ddc0 + (long)(int)(param_2 - 3U) * 4);
  }
  return 0;
}


