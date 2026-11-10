/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077c1c0; name: FUN_0077c1c0
 */


ulong FUN_0077c1c0(undefined8 param_1,byte *param_2)

{
  size_t sVar1;
  byte *pbVar2;
  ulong uVar3;
  size_t sVar4;
  byte *pbVar5;
  
  sVar1 = strlen((char *)param_2);
  if (sVar1 != 0) {
    pbVar2 = param_2;
    sVar4 = sVar1;
    do {
      if (*pbVar2 - 0x41 < 0x1a) {
        *pbVar2 = *pbVar2 + 0x20;
      }
      sVar4 = sVar4 - 1;
      pbVar2 = pbVar2 + 1;
    } while (sVar4 != 0);
  }
  uVar3 = 0xcbf29ce484222325;
  if ((int)sVar1 != 0) {
    pbVar2 = param_2;
    do {
      pbVar5 = pbVar2 + 1;
      uVar3 = uVar3 * 0x100000001b3 ^ (ulong)*pbVar2;
      pbVar2 = pbVar5;
    } while (pbVar5 < param_2 + (sVar1 & 0xffffffff));
  }
  return uVar3;
}


