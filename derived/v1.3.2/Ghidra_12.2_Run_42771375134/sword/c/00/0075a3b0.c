/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075a3b0; name: FUN_0075a3b0
 */


void FUN_0075a3b0(long param_1,long param_2)

{
  nn::hid::VibrationPlayer::Load((void *)(param_1 + 0x68),*(ulong *)(*(long *)(param_2 + 8) + 400));
  return;
}


