/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d707f0; name: FUN_00d707f0
 */


undefined * FUN_00d707f0(byte *param_1,int *param_2)

{
  if (*param_2 == 2) {
    return PTR_DAT_0271e2c8 + (ulong)*param_1 * 0x58;
  }
  return PTR_DAT_0271e2c0 + (ulong)*param_1 * 0x40;
}


