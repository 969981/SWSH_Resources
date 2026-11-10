/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c3610; name: FUN_005c3610
 */


uint FUN_005c3610(long param_1)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x10) < 1) {
    return 0;
  }
  uVar3 = 0xffffffff;
  lVar2 = (long)*(int *)(param_1 + 0x10);
  do {
    uVar3 = (&DAT_02765458)[uVar3 & 0xff ^ (uint)*(byte *)(*(long *)(param_1 + 8) + lVar2 + -1)] ^
            uVar3 >> 8;
    bVar1 = 1 < lVar2;
    lVar2 = lVar2 + -1;
  } while (bVar1);
  return ~uVar3;
}


