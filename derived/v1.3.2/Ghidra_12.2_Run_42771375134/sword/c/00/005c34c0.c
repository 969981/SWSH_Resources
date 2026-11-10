/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c34c0; name: FUN_005c34c0
 */


uint FUN_005c34c0(int param_1,byte *param_2)

{
  uint uVar1;
  
  if (param_1 < 1) {
    return 0;
  }
  uVar1 = 0xffffffff;
  do {
    uVar1 = (&DAT_02765458)[uVar1 & 0xff ^ (uint)*param_2] ^ uVar1 >> 8;
    param_1 = param_1 + -1;
    param_2 = param_2 + 1;
  } while (param_1 != 0);
  return ~uVar1;
}


