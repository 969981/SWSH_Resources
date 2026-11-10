/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00800370; name: FUN_00800370
 */


void FUN_00800370(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  size_t sVar5;
  byte *pbVar6;
  byte *__s;
  
  pcVar4 = strchr((char *)param_1,0x2e);
  if (pcVar4 == (char *)0x0) {
    bVar2 = *param_1;
    pbVar6 = param_1 + 2;
    if (9 < bVar2 - 0x30) goto LAB_008003c4;
    do {
      do {
        pbVar1 = pbVar6 + 1;
        bVar2 = pbVar6[-1];
        pbVar6 = pbVar1;
      } while (bVar2 - 0x30 < 10);
LAB_008003c4:
      uVar3 = bVar2 - 0x2b;
    } while (uVar3 < 0x3b && (1L << ((ulong)uVar3 & 0x3f) & 0x400000004000005U) != 0);
    if (bVar2 != 0) {
      bVar2 = pbVar6[-1];
      pbVar6[-2] = 0x2e;
      if ((9 < bVar2 - 0x30) &&
         (((uVar3 = bVar2 - 0x2b, 0x3a < uVar3 ||
           ((1L << ((ulong)uVar3 & 0x3f) & 0x400000004000005U) == 0)) &&
          (pbVar1 = pbVar6, bVar2 != 0)))) {
        do {
          __s = pbVar1;
          bVar2 = *__s;
          if (bVar2 - 0x30 < 10) break;
          uVar3 = bVar2 - 0x2b;
          pbVar1 = __s + 1;
        } while ((0x3a < uVar3 || (1L << ((ulong)uVar3 & 0x3f) & 0x400000004000005U) == 0) &&
                 bVar2 != 0);
        sVar5 = strlen((char *)__s);
        memmove(pbVar6 + -1,__s,sVar5 + 1);
        return;
      }
    }
  }
  return;
}


