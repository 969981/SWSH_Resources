/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01461600; name: FUN_01461600
 */


void FUN_01461600(long param_1,ulong param_2)

{
  if ((param_2 & 1) == 0) {
    FUN_00ffcf80(param_1 + 0x100,"anime_out");
    return;
  }
  FUN_00ffcf80(param_1 + 0x100,"anime_f_out");
  return;
}


