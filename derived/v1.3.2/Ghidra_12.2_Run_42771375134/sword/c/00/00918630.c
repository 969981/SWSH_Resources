/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00918630; name: FUN_00918630
 */


void FUN_00918630(ulong *param_1,ulong param_2,ulong param_3)

{
  *param_1 = (param_3 & 7) << 0xc | (param_2 & 7) << 9 | 3;
  return;
}


