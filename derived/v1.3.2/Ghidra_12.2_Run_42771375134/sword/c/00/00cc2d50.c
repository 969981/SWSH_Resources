/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc2d50; name: FUN_00cc2d50
 */


void FUN_00cc2d50(ulong *param_1)

{
  *param_1 = *param_1 & 0xc0000000c0000000;
  param_1[1] = param_1[1] & 0xc0000000c0000000;
  param_1[2] = param_1[2] & 0xfff0000000000000;
  return;
}


