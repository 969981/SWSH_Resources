/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042ef70; name: FUN_0042ef70
 */


uint FUN_0042ef70(char *param_1)

{
  size_t sVar1;
  size_t sVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte local_134 [260];
  
  if (param_1 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    sVar1 = strlen(param_1);
    sVar2 = 0x103;
    if (sVar1 + 1 < 0x103) {
      sVar2 = sVar1 + 1;
    }
    strncpy((char *)local_134,param_1,sVar2);
    local_134[sVar2] = 0;
    sVar2 = strlen(param_1);
    if (sVar2 != 0) {
      pbVar4 = local_134;
      sVar1 = sVar2;
      do {
        if (*pbVar4 - 0x41 < 0x1a) {
          *pbVar4 = *pbVar4 + 0x20;
        }
        pbVar4 = pbVar4 + 1;
        sVar1 = sVar1 - 1;
      } while (sVar1 != 0);
    }
    uVar3 = 0x811c9dc5;
    if ((int)sVar2 != 0) {
      pbVar4 = local_134;
      do {
        pbVar5 = pbVar4 + 1;
        uVar3 = uVar3 * 0x1000193 ^ (uint)*pbVar4;
        pbVar4 = pbVar5;
      } while (pbVar5 < local_134 + (sVar2 & 0xffffffff));
    }
  }
  return uVar3;
}


