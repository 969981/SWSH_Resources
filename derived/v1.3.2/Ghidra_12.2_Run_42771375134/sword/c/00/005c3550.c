/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c3550; name: FUN_005c3550
 */


uint FUN_005c3550(byte *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_005c4340();
  if (iVar1 < 1) {
    return 0;
  }
  uVar2 = 0xffffffff;
  do {
    uVar2 = (&DAT_02765458)[uVar2 & 0xff ^ (uint)*param_1] ^ uVar2 >> 8;
    iVar1 = iVar1 + -1;
    param_1 = param_1 + 1;
  } while (iVar1 != 0);
  return ~uVar2;
}


