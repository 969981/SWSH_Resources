/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077db30; name: FUN_0077db30
 */


short * FUN_0077db30(short *param_1)

{
  if (*param_1 == 0x10) {
    param_1 = param_1 + (ulong)(ushort)param_1[1] + 2;
  }
  return param_1;
}


