/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c35c0; name: FUN_005c35c0
 */


uint FUN_005c35c0(long param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 1) {
    return 0;
  }
  uVar2 = 0xffffffff;
  pbVar3 = *(byte **)(param_1 + 8);
  do {
    uVar2 = (&DAT_02765458)[uVar2 & 0xff ^ (uint)*pbVar3] ^ uVar2 >> 8;
    iVar1 = iVar1 + -1;
    pbVar3 = pbVar3 + 1;
  } while (iVar1 != 0);
  return ~uVar2;
}


