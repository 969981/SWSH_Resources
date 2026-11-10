/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009186d0; name: FUN_009186d0
 */


void FUN_009186d0(ulong *param_1,ulong param_2)

{
  *param_1 = *param_1 & 0xfffffffffffffe00 | (param_2 & 0x1f) << 4 | 5;
  return;
}


