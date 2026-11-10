/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fff90; name: FUN_003fff90
 */


void FUN_003fff90(ulong param_1)

{
  nn::os::SleepThread((param_1 & 0xffffffff) * 1000000);
  return;
}


