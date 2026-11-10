/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009af9d0; name: FUN_009af9d0
 */


byte * FUN_009af9d0(byte *param_1,byte param_2,uint *param_3)

{
  if (param_1[5] == 0) {
    param_1[6] = param_2 | 0x80;
    param_1[7] = param_1[2] & 0xf | (param_1[3] & 7) << 4 | param_1[4] << 7;
    *param_3 = (uint)*param_1;
    return param_1 + 6;
  }
  return (byte *)0x0;
}


