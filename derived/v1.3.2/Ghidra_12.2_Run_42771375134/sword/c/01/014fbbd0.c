/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014fbbd0; name: FUN_014fbbd0
 */


bool FUN_014fbbd0(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  short sVar4;
  long lVar5;
  
  sVar4 = 0;
  pbVar3 = (byte *)(param_1 + 0x3f8);
  lVar5 = 300;
  do {
    bVar2 = *pbVar3;
    pbVar1 = pbVar3 + 0x1d0;
    pbVar3 = pbVar3 + 0x3a0;
    sVar4 = sVar4 + (bVar2 ^ 1) + (*pbVar1 ^ 1);
    lVar5 = lVar5 + -2;
  } while (lVar5 != 0);
  return sVar4 == 300;
}


